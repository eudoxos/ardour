/*
 * Copyright (C) 2017 Paul Davis <paul@linuxaudiosystems.com>
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

#ifndef __ardour_superclock_h__
#define __ardour_superclock_h__

#include <stdint.h>

#include "pbd/integer_division.h"

#include "temporal/visibility.h"

namespace Temporal {

typedef int64_t superclock_t;

#ifndef COMPILER_MSVC
	extern superclock_t superclock_ticks_per_second;
#else
	static superclock_t superclock_ticks_per_second = 508032000; // 2^10 * 3^4 * 5^3 * 7^2
#endif

static inline superclock_t superclock_to_samples (superclock_t s, int sr) { return sr == 0 ? 0 : int_div_round (s * sr, superclock_ticks_per_second); }
static inline superclock_t samples_to_superclock (int64_t samples, int sr) { return int_div_round (samples * superclock_ticks_per_second, superclock_t (sr)); }

extern int (*sample_rate_callback)();

LIBTEMPORAL_API void set_sample_rate_callback (int (*function)());

}

#define TEMPORAL_SAMPLE_RATE (sample_rate_callback ())

#endif /* __ardour_superclock_h__ */
