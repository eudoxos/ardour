/*
 * Copyright (C) 2008-2014 David Robillard <d@drobilla.net>
 * Copyright (C) 2008-2017 Paul Davis <paul@linuxaudiosystems.com>
 * Copyright (C) 2009-2012 Carl Hetherington <carl@carlh.net>
 * Copyright (C) 2015-2017 Robin Gareus <robin@gareus.org>
 * Copyright (C) 2015 Nick Mainsbridge <mainsbridge@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#pragma once

#include <atomic>
#include <cstdint>
#include <cstdlib>
#include <list>
#include <cmath>

#include <glibmm/threads.h>

#include "evoral/ControlList.h"
#include "evoral/Parameter.h"

#include "pbd/undo.h"
#include "pbd/xml++.h"
#include "pbd/statefuldestructible.h"
#include "pbd/properties.h"

#include "ardour/ardour.h"

namespace ARDOUR {

class AutomationList;

/** A SharedStatefulProperty for AutomationLists */
class LIBARDOUR_API AutomationListProperty : public PBD::SharedStatefulProperty<AutomationList>
{
public:
	AutomationListProperty (PBD::PropertyDescriptor<std::shared_ptr<AutomationList> > d, Ptr p)
		: PBD::SharedStatefulProperty<AutomationList> (d.property_id, p)
	{}

	AutomationListProperty (PBD::PropertyDescriptor<std::shared_ptr<AutomationList> > d, Ptr o, Ptr c)
		: PBD::SharedStatefulProperty<AutomationList> (d.property_id, o, c)
	{}

	PBD::PropertyBase* clone () const;

private:
	/* No copy-construction nor assignment */
	AutomationListProperty (AutomationListProperty const &);
	AutomationListProperty& operator= (AutomationListProperty const &);
};

/** AutomationList is a stateful wrapper around Evoral::ControlList.
 * It includes session-specifics (such as automation state), control logic (e.g. touch, signals)
 * and acts as proxy to the underlying ControlList which holds the actual data.
 */
class LIBARDOUR_API AutomationList : public Evoral::ControlList, public PBD::StatefulDestructible
{
public:
	AutomationList (const Evoral::Parameter& id, const Evoral::ParameterDescriptor& desc, Temporal::TimeDomainProvider const &);
	AutomationList (const Evoral::Parameter& id, Temporal::TimeDomainProvider const &);
	AutomationList (const XMLNode&, Evoral::Parameter id);
	AutomationList (const AutomationList&);
	AutomationList (const AutomationList&, timepos_t const & start, timepos_t const & end);
	~AutomationList();

	virtual std::shared_ptr<ControlList> create(const Evoral::Parameter&           id,
	                                              const Evoral::ParameterDescriptor& desc,
	                                              Temporal::TimeDomainProvider const &);

	AutomationList& operator= (const AutomationList&);

	void thaw ();

	void set_automation_state (AutoState);
	AutoState automation_state() const;
	PBD::Signal<void(AutoState)> automation_state_changed;

	bool automation_playback() const {
		return (_state & Play) || ((_state & (Touch | Latch)) && !touching());
	}
	bool automation_write () const {
		return ((_state & Write) || ((_state & (Touch | Latch)) && touching()));
	}

	PBD::Signal<void()> StateChanged;

	static PBD::Signal<void(AutomationList*)> AutomationListCreated;

	void start_write_pass (timepos_t const & when);
	void write_pass_finished (timepos_t const & when, double thinning_factor=0.0);

	void start_touch (timepos_t const & when);
	void stop_touch (timepos_t const &  when);

	bool touching () const { return _touching.load() != 0; }
	bool writing () const { return _state == Write; }
	bool touch_enabled () const { return _state & (Touch | Latch); }

	XMLNode& get_state () const;
	int set_state (const XMLNode &, int version);

	PBD::Command* memento_command (XMLNode* before, XMLNode* after);

	bool operator!= (const AutomationList &) const;

	XMLNode* before () { XMLNode* rv = _before; _before = 0; return rv; }
	void clear_history ();
	void snapshot_history (bool need_lock);

	ControlList::InterpolationStyle default_interpolation () const;

private:
	void create_curve_if_necessary ();
	int deserialize_events (const XMLNode&);

	XMLNode& state (bool save_auto_state, bool need_lock) const;
	XMLNode& serialize_events (bool need_lock) const;

	void maybe_signal_changed ();

	AutoState         _state;
	std::atomic<int> _touching;

	PBD::ScopedConnection _writepass_connection;

	bool operator== (const AutomationList&) const { /* not called */ abort(); return false; }
	XMLNode* _before; //used for undo of touch start/stop pairs.

};

} // namespace

