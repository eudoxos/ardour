// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_ABOUTDIALOG_H
#define _GTKMM_ABOUTDIALOG_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2004 The gtkmm Development Team
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

 
#include <gtkmm/dialog.h>
//#include <glibmm/listhandle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAboutDialog GtkAboutDialog;
typedef struct _GtkAboutDialogClass GtkAboutDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class AboutDialog_Class; } // namespace Gtk
namespace Gtk
{

/** The AboutDialog offers a simple way to display information about a program like its logo, name, copyright,
 * website and license. It is also possible to give credits to the authors, documenters, translators and artists
 * who have worked on the program. An about dialog is typically opened when the user selects the About option
 * from the Help menu. All parts of the dialog are optional.
 *
 * About dialogs often contain links and email addresses. Gtk::AboutDialog supports this by offering global
 * hooks, which are called when the user clicks on a link or email address, see set_email_hook() and
 * set_url_hook(). Email addresses in the authors, documenters and artists properties are recognized by looking
 * for <user\@host>, URLs are recognized by looking for http://url, with the URL extending to the next space,
 * tab or line break.
 *
 * An AboutDialog looks like this:
 * @image html aboutdialog1.png
 *
 * @ingroup Dialogs
 */

class AboutDialog : public Dialog
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef AboutDialog CppObjectType;
  typedef AboutDialog_Class CppClassType;
  typedef GtkAboutDialog BaseObjectType;
  typedef GtkAboutDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~AboutDialog();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class AboutDialog_Class;
  static CppClassType aboutdialog_class_;

  // noncopyable
  AboutDialog(const AboutDialog&);
  AboutDialog& operator=(const AboutDialog&);

protected:
  explicit AboutDialog(const Glib::ConstructParams& construct_params);
  explicit AboutDialog(GtkAboutDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkAboutDialog*       gobj()       { return reinterpret_cast<GtkAboutDialog*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkAboutDialog* gobj() const { return reinterpret_cast<GtkAboutDialog*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  AboutDialog();

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the program name displayed in the about dialog.
   * 
   * Deprecated: 2.12: Use get_program_name() instead.
   * 
   * @return The program name. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_name() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the name to display in the about dialog.
   * If this is not set, it defaults to Glib::get_application_name().
   * 
   * Deprecated: 2.12: Use set_program_name() instead.
   * 
   * @param name The program name.
   */
  void set_name(const Glib::ustring& name);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Return value: The program name.
   * 
   * @return The program name.
   */
  Glib::ustring get_program_name() const;
  
  /** Sets the name to display in the about dialog.
   * If this is not set, it defaults to Glib::get_application_name().
   * 
   * @param name The program name.
   */
  void set_program_name(const Glib::ustring& name);

  
  /** Returns the version string.
   * 
   * @return The version string. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_version() const;
  
  /** Sets the version string to display in the about dialog.
   * 
   * @param version The version string.
   */
  void set_version(const Glib::ustring& version);
  
  /** Returns the copyright string.
   * 
   * @return The copyright string. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_copyright() const;
  
  /** Sets the copyright string to display in the about dialog.
   * This should be a short string of one or two lines.
   * 
   * @param copyright (allow-none) the copyright string.
   */
  void set_copyright(const Glib::ustring& copyright);
  
  /** Returns the comments string.
   * 
   * @return The comments. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_comments() const;
  
  /** Sets the comments string to display in the about dialog.
   * This should be a short string of one or two lines.
   * 
   * @param comments A comments string.
   */
  void set_comments(const Glib::ustring& comments);
  
  /** Returns the license information.
   * 
   * @return The license information. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_license() const;
  
  /** Sets the license information to be displayed in the secondary
   * license dialog. If @a license is <tt>0</tt>, the license button is
   * hidden.
   * 
   * @param license The license information or <tt>0</tt>.
   */
  void set_license(const Glib::ustring& license);
  
  /** Returns the website URL.
   * 
   * @return The website URL. The string is owned by the about
   * dialog and must not be modified.
   */
  Glib::ustring get_website() const;
  
  /** Sets the URL to use for the website link.
   * 
   * Note that that the hook functions need to be set up
   * before calling this function.
   * 
   * @param website A URL string starting with "http://".
   */
  void set_website(const Glib::ustring& website);
  
  /** Return value: The label used for the website link.
   * 
   * @return The label used for the website link. 
   */
  Glib::ustring get_website_label() const;
  
  /** Sets the label to be used for the website link.
   * It defaults to the website URL.
   * 
   * @param website_label The label used for the website link.
   */
  void set_website_label(const Glib::ustring& website_label);

   
  /** Returns the string which are displayed in the authors tab
   * of the secondary credits dialog.
   * 
   * @return A <tt>0</tt>-terminated string array containing
   * the authors. The array is owned by the about dialog
   * and must not be modified.
   */
  Glib::StringArrayHandle get_authors() const;

  
  /** Sets the strings which are displayed in the authors tab
   * of the secondary credits dialog.
   * 
   * @param authors A <tt>0</tt>-terminated array of strings.
   */
  void set_authors(const Glib::StringArrayHandle& authors) const;

  
  /** Returns the string which are displayed in the documenters
   * tab of the secondary credits dialog.
   * 
   * @return A <tt>0</tt>-terminated string array containing
   * the documenters. The array is owned by the about dialog
   * and must not be modified.
   */
  Glib::StringArrayHandle get_documenters() const;

   
  /** Sets the strings which are displayed in the documenters tab
   * of the secondary credits dialog.
   * 
   * @param documenters A <tt>0</tt>-terminated array of strings.
   */
  void set_documenters(const Glib::StringArrayHandle& documenters);
  
  /** Returns the string which are displayed in the artists tab
   * of the secondary credits dialog.
   * 
   * @return A <tt>0</tt>-terminated string array containing
   * the artists. The array is owned by the about dialog
   * and must not be modified.
   */
  Glib::StringArrayHandle get_artists() const;
  
  /** Sets the strings which are displayed in the artists tab
   * of the secondary credits dialog.
   * 
   * @param artists A <tt>0</tt>-terminated array of strings.
   */
  void set_artists(const Glib::StringArrayHandle& artists);
  
  /** Returns the translator credits string which is displayed
   * in the translators tab of the secondary credits dialog.
   * 
   * @return The translator credits string. The string is
   * owned by the about dialog and must not be modified.
   */
  Glib::ustring get_translator_credits() const;
  
  /** Sets the translator credits string which is displayed in
   * the translators tab of the secondary credits dialog.
   * 
   * The intended use for this string is to display the translator
   * of the language which is currently used in the user interface.
   * Using gettext(), a simple way to achieve that is to mark the
   * string for translation:
   * 
   * [C example ellipted]
   * It is a good idea to use the customary msgid "translator-credits" for this
   * purpose, since translators will already know the purpose of that msgid, and
   * since Gtk::AboutDialog will detect if "translator-credits" is untranslated
   * and hide the tab.
   * 
   * @param translator_credits The translator credits.
   */
  void set_translator_credits(const Glib::ustring& translator_credits);

  
  /** Returns the pixbuf displayed as logo in the about dialog.
   * 
   * @return The pixbuf displayed as logo. The
   * pixbuf is owned by the about dialog. If you want to keep a
   * reference to it, you have to call Glib::object_ref() on it.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_logo();
  
  /** Returns the pixbuf displayed as logo in the about dialog.
   * 
   * @return The pixbuf displayed as logo. The
   * pixbuf is owned by the about dialog. If you want to keep a
   * reference to it, you have to call Glib::object_ref() on it.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_logo() const;

  
  /** Sets the pixbuf to be displayed as logo in the about dialog.
   * If it is <tt>0</tt>, the default window icon set with
   * Gtk::Window::set_default_icon() will be used.
   * 
   * @param logo A Gdk::Pixbuf, or <tt>0</tt>.
   */
  void set_logo(const Glib::RefPtr<Gdk::Pixbuf>& logo);

  
  /** Returns the icon name displayed as logo in the about dialog.
   * 
   * @return The icon name displayed as logo. The string is
   * owned by the dialog. If you want to keep a reference
   * to it, you have to call Glib::strdup() on it.
   */
  Glib::ustring get_logo_icon_name() const;
  
  /** Sets the pixbuf to be displayed as logo in the about dialog.
   * If it is <tt>0</tt>, the default window icon set with
   * Gtk::Window::set_default_icon() will be used.
   * 
   * @param icon_name An icon name, or <tt>0</tt>.
   */
  void set_logo_icon_name(const Glib::ustring& icon_name);

  
  /** Returns whether the license text in @a about is
   * automatically wrapped.
   * 
   * @return <tt>true</tt> if the license text is wrapped.
   */
  bool get_wrap_license() const;
  
  /** Sets whether the license text in @a about is
   * automatically wrapped.
   * 
   * @param wrap_license Whether to wrap the license.
   */
  void set_wrap_license(bool wrap_license);

#ifndef GTKMM_DISABLE_DEPRECATED

  /** For instance,
   * void on_activate_link_url(AboutDialog& about_dialog, const Glib::ustring& link);
   *
   * @deprecated Use signal_activate_link() instead.
   */
  typedef sigc::slot<void, AboutDialog& /* about_dialog */, const Glib::ustring& /* link */> SlotActivateLink;

  /** Installs a global callback to be called whenever the user activates an email link in an about dialog.
   * @param slot A function or method to call when an email link is activated.
   *
   * @deprecated Use signal_activate_link() instead.
   */
  static void set_email_hook(const SlotActivateLink& slot);
  

  /** Installs a global callback to be called whenever the user activates a URL link in an about dialog.
   * @param slot A function or method to call when a URL link is activated.
   *
   * @deprecated Use signal_activate_link() instead.
   */
  static void set_url_hook(const SlotActivateLink& slot);
  
#endif // GTKMM_DISABLE_DEPRECATED


  //gtkmmproc error: activate-link :  signal defs lookup failed

//TODO: Deprecate this, because it conflicts with the property in GtkWidget, and has been removed in GTK+ 2.12.
//If this could not have been used without an error, then remove it:
  /** The name of the widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_name() ;

/** The name of the widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_name() const;


  /** The name of the program. If this is not set, it defaults to g_get_application_name().
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_program_name() ;

/** The name of the program. If this is not set, it defaults to g_get_application_name().
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_program_name() const;


  /** The version of the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_version() ;

/** The version of the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_version() const;

  /** Copyright information for the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_copyright() ;

/** Copyright information for the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_copyright() const;

  /** Comments about the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_comments() ;

/** Comments about the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_comments() const;

  /** The URL for the link to the website of the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_website() ;

/** The URL for the link to the website of the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_website() const;

  /** The label for the link to the website of the program. If this is not set, it defaults to the URL.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_website_label() ;

/** The label for the link to the website of the program. If this is not set, it defaults to the URL.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_website_label() const;

  /** The license of the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_license() ;

/** The license of the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_license() const;

  /** List of authors of the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::StringArrayHandle > property_authors() ;

/** List of authors of the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > property_authors() const;

  /** List of people documenting the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::StringArrayHandle > property_documenters() ;

/** List of people documenting the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > property_documenters() const;

  /** Credits to the translators. This string should be marked as translatable.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::StringArrayHandle > property_translator_credits() ;

/** Credits to the translators. This string should be marked as translatable.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > property_translator_credits() const;

  /** List of people who have contributed artwork to the program.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::StringArrayHandle > property_artists() ;

/** List of people who have contributed artwork to the program.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > property_artists() const;

  /** A logo for the about box. If this is not set, it defaults to gtk_window_get_default_icon_list().
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > property_logo() ;

/** A logo for the about box. If this is not set, it defaults to gtk_window_get_default_icon_list().
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > property_logo() const;

  /** A named icon to use as the logo for the about box.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_logo_icon_name() ;

/** A named icon to use as the logo for the about box.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_logo_icon_name() const;

  /** Whether to wrap the license text.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_wrap_license() ;

/** Whether to wrap the license text.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_wrap_license() const;


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
   * @relates Gtk::AboutDialog
   */
  Gtk::AboutDialog* wrap(GtkAboutDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_ABOUTDIALOG_H */

