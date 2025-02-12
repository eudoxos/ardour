// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERTEXT_H
#define _GTKMM_CELLRENDERERTEXT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: cellrenderertext.hg,v 1.7 2006/05/10 20:59:27 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <ytkmm/cellrenderer.h>
#include <pangomm/attrlist.h>
#include <pangomm/fontdescription.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellRendererText GtkCellRendererText;
typedef struct _GtkCellRendererTextClass GtkCellRendererTextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellRendererText_Class; } // namespace Gtk
namespace Gtk
{

/** Renders text in a cell.
 *
 * @ingroup TreeView
 */

class CellRendererText : public CellRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererText CppObjectType;
  typedef CellRendererText_Class CppClassType;
  typedef GtkCellRendererText BaseObjectType;
  typedef GtkCellRendererTextClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~CellRendererText();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRendererText_Class;
  static CppClassType cellrenderertext_class_;

  // noncopyable
  CellRendererText(const CellRendererText&);
  CellRendererText& operator=(const CellRendererText&);

protected:
  explicit CellRendererText(const Glib::ConstructParams& construct_params);
  explicit CellRendererText(GtkCellRendererText* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRendererText*       gobj()       { return reinterpret_cast<GtkCellRendererText*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRendererText* gobj() const { return reinterpret_cast<GtkCellRendererText*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_edited().
  virtual void on_edited(const Glib::ustring& path, const Glib::ustring& new_text);


private:

public:
  CellRendererText();

  
  /** Sets the height of a renderer to explicitly be determined by the "font" and
   * "y_pad" property set on it.  Further changes in these properties do not
   * affect the height, so they must be accompanied by a subsequent call to this
   * function.  Using this function is unflexible, and should really only be used
   * if calculating the size of a cell is too slow (ie, a massive number of cells
   * displayed).  If @a number_of_rows is -1, then the fixed height is unset, and
   * the height is determined by the properties again.
   * 
   * @param number_of_rows Number of rows of text each cell renderer is allocated, or -1.
   */
  void set_fixed_height_from_font(int number_of_rows);

 
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%edited(const Glib::ustring& path, const Glib::ustring& new_text)</tt>
   *
   */

  Glib::SignalProxy2< void,const Glib::ustring&,const Glib::ustring& > signal_edited();


  /** Text to render.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** Text to render.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;

  /** Marked up text to render.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_markup() ;


  /** A list of style attributes to apply to the text of the renderer.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::AttrList > property_attributes() ;

/** A list of style attributes to apply to the text of the renderer.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::AttrList > property_attributes() const;

  /** Background color as a string.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_background() ;


  /** Foreground color as a string.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_foreground() ;


  /** Background color as a GdkColor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::Color > property_background_gdk() ;

/** Background color as a GdkColor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::Color > property_background_gdk() const;

  /** Foreground color as a GdkColor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::Color > property_foreground_gdk() ;

/** Foreground color as a GdkColor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::Color > property_foreground_gdk() const;

  /** Font description as a string, e.g. 'Sans Italic 12'.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_font() ;

/** Font description as a string, e.g. 'Sans Italic 12'.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_font() const;

  /** Font description as a PangoFontDescription struct.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::FontDescription > property_font_desc() ;

/** Font description as a PangoFontDescription struct.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::FontDescription > property_font_desc() const;

  /** Name of the font family, e.g. Sans, Helvetica, Times, Monospace.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_family() ;

/** Name of the font family, e.g. Sans, Helvetica, Times, Monospace.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_family() const;

  /** Font style.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Style > property_style() ;

/** Font style.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Style > property_style() const;

  /** Font variant.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Variant > property_variant() ;

/** Font variant.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Variant > property_variant() const;

  /** Font weight.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_weight() ;

/** Font weight.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_weight() const;

  /** Font stretch.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Stretch > property_stretch() ;

/** Font stretch.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Stretch > property_stretch() const;

  /** Font size.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_size() ;

/** Font size.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_size() const;

  /** Font size in points.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_size_points() ;

/** Font size in points.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_size_points() const;

  /** Font scaling factor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_scale() ;

/** Font scaling factor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_scale() const;

  /** Whether the text can be modified by the user.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_editable() ;

/** Whether the text can be modified by the user.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_editable() const;

  /** Whether to strike through the text.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_strikethrough() ;

/** Whether to strike through the text.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_strikethrough() const;

  /** Style of underline for this text.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Underline > property_underline() ;

/** Style of underline for this text.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Underline > property_underline() const;

  /** Offset of text above the baseline (below the baseline if rise is negative).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_rise() ;

/** Offset of text above the baseline (below the baseline if rise is negative).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_rise() const;

  /** The language this text is in, as an ISO code. Pango can use this as a hint when rendering the text. If you don't understand this parameter, you probably don't need it.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_language() ;

/** The language this text is in, as an ISO code. Pango can use this as a hint when rendering the text. If you don't understand this parameter, you probably don't need it.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_language() const;

  /** The preferred place to ellipsize the string, if the cell renderer does not have enough room to display the entire string.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::EllipsizeMode > property_ellipsize() ;

/** The preferred place to ellipsize the string, if the cell renderer does not have enough room to display the entire string.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::EllipsizeMode > property_ellipsize() const;

  /** The desired width of the label, in characters.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_width_chars() ;

/** The desired width of the label, in characters.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_width_chars() const;

  /** How to break the string into multiple lines, if the cell renderer does not have enough room to display the entire string.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::WrapMode > property_wrap_mode() ;

/** How to break the string into multiple lines, if the cell renderer does not have enough room to display the entire string.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::WrapMode > property_wrap_mode() const;

  /** The width at which the text is wrapped.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_wrap_width() ;

/** The width at which the text is wrapped.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_wrap_width() const;

  /** How to align the lines.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Alignment > property_alignment() ;

/** How to align the lines.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Alignment > property_alignment() const;

  /** Whether this tag affects the background color.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_background_set() ;

/** Whether this tag affects the background color.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_background_set() const;

  /** Whether this tag affects the foreground color.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_foreground_set() ;

/** Whether this tag affects the foreground color.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_foreground_set() const;

  /** Whether this tag affects the font family.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_family_set() ;

/** Whether this tag affects the font family.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_family_set() const;

  /** Whether this tag affects the font style.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_style_set() ;

/** Whether this tag affects the font style.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_style_set() const;

  /** Whether this tag affects the font variant.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_variant_set() ;

/** Whether this tag affects the font variant.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_variant_set() const;

  /** Whether this tag affects the font weight.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_weight_set() ;

/** Whether this tag affects the font weight.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_weight_set() const;

  /** Whether this tag affects the font stretch.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_stretch_set() ;

/** Whether this tag affects the font stretch.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_stretch_set() const;

  /** Whether this tag affects the font size.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_size_set() ;

/** Whether this tag affects the font size.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_size_set() const;

  /** Whether this tag scales the font size by a factor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_scale_set() ;

/** Whether this tag scales the font size by a factor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_scale_set() const;

  /** Whether this tag affects text editability.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_editable_set() ;

/** Whether this tag affects text editability.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_editable_set() const;

  /** Whether this tag affects strikethrough.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_strikethrough_set() ;

/** Whether this tag affects strikethrough.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_strikethrough_set() const;

  /** Whether this tag affects underlining.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_underline_set() ;

/** Whether this tag affects underlining.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_underline_set() const;

  /** Whether this tag affects the rise.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_rise_set() ;

/** Whether this tag affects the rise.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_rise_set() const;

  /** Whether this tag affects the language the text is rendered as.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_language_set() ;

/** Whether this tag affects the language the text is rendered as.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_language_set() const;

  /** Whether this tag affects the ellipsize mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_ellipsize_set() ;

/** Whether this tag affects the ellipsize mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_ellipsize_set() const;

  /** Whether or not to keep all text in a single paragraph.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_single_paragraph_mode() ;

/** Whether or not to keep all text in a single paragraph.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_single_paragraph_mode() const;


  virtual Glib::PropertyProxy_Base _property_renderable();

protected:
  /** Emits the "edited" signal.
   * This is useful when implementing custom CellRenderers.
   */
  void edited(const Glib::ustring& path, const Glib::ustring& new_text);


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellRendererText
   */
  Gtk::CellRendererText* wrap(GtkCellRendererText* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERERTEXT_H */

