/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mainwin (void)
{
  GtkWidget *mainwin;
  GtkWidget *vbox1;
  GtkWidget *menubar1;
  GtkWidget *menuitem1;
  GtkWidget *menuitem1_menu;
  GtkWidget *open;
  GtkWidget *separator2;
  GtkWidget *add_files;
  GtkWidget *add_folder1;
  GtkWidget *separatormenuitem1;
  GtkWidget *quit1;
  GtkWidget *edit1;
  GtkWidget *edit1_menu;
  GtkWidget *clear1;
  GtkWidget *select_all1;
  GtkWidget *selection1;
  GtkWidget *selection1_menu;
  GtkWidget *remove1;
  GtkWidget *crop1;
  GtkWidget *playlist1;
  GtkWidget *playlist1_menu;
  GtkWidget *playlist_load;
  GtkWidget *playlist_save;
  GtkWidget *playlist_save_as;
  GtkWidget *order1;
  GtkWidget *order1_menu;
  GSList *order_linear_group = NULL;
  GtkWidget *order_linear;
  GtkWidget *order_random;
  GtkWidget *looping1;
  GtkWidget *looping1_menu;
  GSList *loop_all_group = NULL;
  GtkWidget *loop_all;
  GtkWidget *loop_single;
  GtkWidget *loop_disable;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *about1;
  GtkWidget *hbox2;
  GtkWidget *hbox3;
  GtkWidget *stopbtn;
  GtkWidget *image7;
  GtkWidget *playbtn;
  GtkWidget *image2;
  GtkWidget *pausebtn;
  GtkWidget *image3;
  GtkWidget *prevbtn;
  GtkWidget *image4;
  GtkWidget *nextbtn;
  GtkWidget *image5;
  GtkWidget *playrand;
  GtkWidget *image6;
  GtkWidget *volumebar;
  GtkWidget *seekbar;
  GtkWidget *_;
  GtkWidget *vbox3;
  GtkWidget *header;
  GtkWidget *playlist;
  GtkWidget *playscroll;
  GtkWidget *statusbar;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  mainwin = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_events (mainwin, GDK_KEY_PRESS_MASK);
  gtk_window_set_title (GTK_WINDOW (mainwin), "DeaDBeeF");
  gtk_window_set_default_size (GTK_WINDOW (mainwin), 500, 300);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (mainwin), vbox1);

  menubar1 = gtk_menu_bar_new ();
  gtk_widget_show (menubar1);
  gtk_box_pack_start (GTK_BOX (vbox1), menubar1, FALSE, FALSE, 0);

  menuitem1 = gtk_menu_item_new_with_mnemonic ("_File");
  gtk_widget_show (menuitem1);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem1);

  menuitem1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem1), menuitem1_menu);

  open = gtk_image_menu_item_new_from_stock ("gtk-open", accel_group);
  gtk_widget_show (open);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), open);

  separator2 = gtk_separator_menu_item_new ();
  gtk_widget_show (separator2);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separator2);
  gtk_widget_set_sensitive (separator2, FALSE);

  add_files = gtk_menu_item_new_with_mnemonic ("Add files");
  gtk_widget_show (add_files);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), add_files);

  add_folder1 = gtk_menu_item_new_with_mnemonic ("Add folder");
  gtk_widget_show (add_folder1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), add_folder1);

  separatormenuitem1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  quit1 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_show (quit1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), quit1);

  edit1 = gtk_menu_item_new_with_mnemonic ("Edit");
  gtk_widget_show (edit1);
  gtk_container_add (GTK_CONTAINER (menubar1), edit1);

  edit1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (edit1), edit1_menu);

  clear1 = gtk_image_menu_item_new_from_stock ("gtk-clear", accel_group);
  gtk_widget_show (clear1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), clear1);

  select_all1 = gtk_image_menu_item_new_from_stock ("gtk-select-all", accel_group);
  gtk_widget_show (select_all1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), select_all1);

  selection1 = gtk_menu_item_new_with_mnemonic ("Selection");
  gtk_widget_show (selection1);
  gtk_container_add (GTK_CONTAINER (edit1_menu), selection1);

  selection1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (selection1), selection1_menu);

  remove1 = gtk_image_menu_item_new_from_stock ("gtk-remove", accel_group);
  gtk_widget_show (remove1);
  gtk_container_add (GTK_CONTAINER (selection1_menu), remove1);

  crop1 = gtk_menu_item_new_with_mnemonic ("Crop");
  gtk_widget_show (crop1);
  gtk_container_add (GTK_CONTAINER (selection1_menu), crop1);

  playlist1 = gtk_menu_item_new_with_mnemonic ("Playlist");
  gtk_widget_show (playlist1);
  gtk_container_add (GTK_CONTAINER (menubar1), playlist1);

  playlist1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (playlist1), playlist1_menu);

  playlist_load = gtk_menu_item_new_with_mnemonic ("Load");
  gtk_widget_show (playlist_load);
  gtk_container_add (GTK_CONTAINER (playlist1_menu), playlist_load);

  playlist_save = gtk_menu_item_new_with_mnemonic ("Save");
  gtk_widget_show (playlist_save);
  gtk_container_add (GTK_CONTAINER (playlist1_menu), playlist_save);

  playlist_save_as = gtk_menu_item_new_with_mnemonic ("Save As");
  gtk_widget_show (playlist_save_as);
  gtk_container_add (GTK_CONTAINER (playlist1_menu), playlist_save_as);

  order1 = gtk_menu_item_new_with_mnemonic ("Order");
  gtk_widget_show (order1);
  gtk_container_add (GTK_CONTAINER (playlist1_menu), order1);

  order1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (order1), order1_menu);

  order_linear = gtk_radio_menu_item_new_with_mnemonic (order_linear_group, "Linear");
  order_linear_group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (order_linear));
  gtk_widget_show (order_linear);
  gtk_container_add (GTK_CONTAINER (order1_menu), order_linear);
  gtk_check_menu_item_set_active (GTK_CHECK_MENU_ITEM (order_linear), TRUE);

  order_random = gtk_radio_menu_item_new_with_mnemonic (order_linear_group, "Random");
  order_linear_group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (order_random));
  gtk_widget_show (order_random);
  gtk_container_add (GTK_CONTAINER (order1_menu), order_random);

  looping1 = gtk_menu_item_new_with_mnemonic ("Looping");
  gtk_widget_show (looping1);
  gtk_container_add (GTK_CONTAINER (playlist1_menu), looping1);

  looping1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (looping1), looping1_menu);

  loop_all = gtk_radio_menu_item_new_with_mnemonic (loop_all_group, "Loop All");
  loop_all_group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (loop_all));
  gtk_widget_show (loop_all);
  gtk_container_add (GTK_CONTAINER (looping1_menu), loop_all);
  gtk_check_menu_item_set_active (GTK_CHECK_MENU_ITEM (loop_all), TRUE);

  loop_single = gtk_radio_menu_item_new_with_mnemonic (loop_all_group, "Loop Single Song");
  loop_all_group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (loop_single));
  gtk_widget_show (loop_single);
  gtk_container_add (GTK_CONTAINER (looping1_menu), loop_single);

  loop_disable = gtk_radio_menu_item_new_with_mnemonic (loop_all_group, "Don't Loop");
  loop_all_group = gtk_radio_menu_item_get_group (GTK_RADIO_MENU_ITEM (loop_disable));
  gtk_widget_show (loop_disable);
  gtk_container_add (GTK_CONTAINER (looping1_menu), loop_disable);

  menuitem4 = gtk_menu_item_new_with_mnemonic ("_Help");
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  about1 = gtk_menu_item_new_with_mnemonic ("_About");
  gtk_widget_show (about1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), about1);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox2, FALSE, FALSE, 0);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox3);
  gtk_box_pack_start (GTK_BOX (hbox2), hbox3, TRUE, TRUE, 0);

  stopbtn = gtk_button_new ();
  gtk_widget_show (stopbtn);
  gtk_box_pack_start (GTK_BOX (hbox3), stopbtn, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (stopbtn, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (stopbtn), GTK_RELIEF_NONE);

  image7 = create_pixmap (mainwin, "stop_24.png");
  gtk_widget_show (image7);
  gtk_container_add (GTK_CONTAINER (stopbtn), image7);

  playbtn = gtk_button_new ();
  gtk_widget_show (playbtn);
  gtk_box_pack_start (GTK_BOX (hbox3), playbtn, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (playbtn, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (playbtn), GTK_RELIEF_NONE);

  image2 = create_pixmap (mainwin, "play_24.png");
  gtk_widget_show (image2);
  gtk_container_add (GTK_CONTAINER (playbtn), image2);

  pausebtn = gtk_button_new ();
  gtk_widget_show (pausebtn);
  gtk_box_pack_start (GTK_BOX (hbox3), pausebtn, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (pausebtn, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (pausebtn), GTK_RELIEF_NONE);

  image3 = create_pixmap (mainwin, "pause_24.png");
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (pausebtn), image3);

  prevbtn = gtk_button_new ();
  gtk_widget_show (prevbtn);
  gtk_box_pack_start (GTK_BOX (hbox3), prevbtn, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (prevbtn, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (prevbtn), GTK_RELIEF_NONE);

  image4 = create_pixmap (mainwin, "prev_24.png");
  gtk_widget_show (image4);
  gtk_container_add (GTK_CONTAINER (prevbtn), image4);

  nextbtn = gtk_button_new ();
  gtk_widget_show (nextbtn);
  gtk_box_pack_start (GTK_BOX (hbox3), nextbtn, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (nextbtn, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (nextbtn), GTK_RELIEF_NONE);

  image5 = create_pixmap (mainwin, "next_24.png");
  gtk_widget_show (image5);
  gtk_container_add (GTK_CONTAINER (nextbtn), image5);

  playrand = gtk_button_new ();
  gtk_widget_show (playrand);
  gtk_box_pack_start (GTK_BOX (hbox3), playrand, FALSE, FALSE, 0);
  GTK_WIDGET_UNSET_FLAGS (playrand, GTK_CAN_FOCUS);
  gtk_button_set_relief (GTK_BUTTON (playrand), GTK_RELIEF_NONE);

  image6 = create_pixmap (mainwin, "random_24.png");
  gtk_widget_show (image6);
  gtk_container_add (GTK_CONTAINER (playrand), image6);

  volumebar = gtk_drawing_area_new ();
  gtk_widget_show (volumebar);
  gtk_box_pack_start (GTK_BOX (hbox2), volumebar, FALSE, TRUE, 2);
  gtk_widget_set_size_request (volumebar, 70, -1);
  gtk_widget_set_events (volumebar, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK);

  seekbar = gtk_drawing_area_new ();
  gtk_widget_show (seekbar);
  gtk_box_pack_start (GTK_BOX (hbox2), seekbar, FALSE, TRUE, 2);
  gtk_widget_set_size_request (seekbar, 200, -1);
  gtk_widget_set_events (seekbar, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK);

  _ = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (_);
  gtk_box_pack_start (GTK_BOX (vbox1), _, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (_), 3);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (_), vbox3, TRUE, TRUE, 0);

  header = gtk_drawing_area_new ();
  gtk_widget_show (header);
  gtk_box_pack_start (GTK_BOX (vbox3), header, FALSE, TRUE, 0);
  gtk_widget_set_size_request (header, -1, 24);
  gtk_widget_set_events (header, GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK);

  playlist = gtk_drawing_area_new ();
  gtk_widget_show (playlist);
  gtk_box_pack_start (GTK_BOX (vbox3), playlist, TRUE, TRUE, 0);
  gtk_widget_set_events (playlist, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK | GDK_KEY_PRESS_MASK | GDK_KEY_RELEASE_MASK);

  playscroll = gtk_vscrollbar_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 1, 1, 0, 0)));
  gtk_widget_show (playscroll);
  gtk_box_pack_start (GTK_BOX (_), playscroll, FALSE, TRUE, 0);

  statusbar = gtk_statusbar_new ();
  gtk_widget_show (statusbar);
  gtk_box_pack_start (GTK_BOX (vbox1), statusbar, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) mainwin, "key_press_event",
                    G_CALLBACK (on_mainwin_key_press_event),
                    NULL);
  g_signal_connect ((gpointer) mainwin, "delete_event",
                    G_CALLBACK (on_mainwin_delete_event),
                    NULL);
  g_signal_connect ((gpointer) open, "activate",
                    G_CALLBACK (on_open_activate),
                    NULL);
  g_signal_connect ((gpointer) add_files, "activate",
                    G_CALLBACK (on_add_files_activate),
                    NULL);
  g_signal_connect ((gpointer) add_folder1, "activate",
                    G_CALLBACK (on_add_folder1_activate),
                    NULL);
  g_signal_connect ((gpointer) quit1, "activate",
                    G_CALLBACK (on_quit1_activate),
                    NULL);
  g_signal_connect ((gpointer) clear1, "activate",
                    G_CALLBACK (on_clear1_activate),
                    NULL);
  g_signal_connect ((gpointer) select_all1, "activate",
                    G_CALLBACK (on_select_all1_activate),
                    NULL);
  g_signal_connect ((gpointer) remove1, "activate",
                    G_CALLBACK (on_remove1_activate),
                    NULL);
  g_signal_connect ((gpointer) crop1, "activate",
                    G_CALLBACK (on_crop1_activate),
                    NULL);
  g_signal_connect ((gpointer) playlist_load, "activate",
                    G_CALLBACK (on_playlist_load_activate),
                    NULL);
  g_signal_connect ((gpointer) playlist_save, "activate",
                    G_CALLBACK (on_playlist_save_activate),
                    NULL);
  g_signal_connect ((gpointer) playlist_save_as, "activate",
                    G_CALLBACK (on_playlist_save_as_activate),
                    NULL);
  g_signal_connect ((gpointer) order_linear, "activate",
                    G_CALLBACK (on_order_linear_activate),
                    NULL);
  g_signal_connect ((gpointer) order_random, "activate",
                    G_CALLBACK (on_order_random_activate),
                    NULL);
  g_signal_connect ((gpointer) loop_all, "activate",
                    G_CALLBACK (on_loop_all_activate),
                    NULL);
  g_signal_connect ((gpointer) loop_single, "activate",
                    G_CALLBACK (on_loop_single_activate),
                    NULL);
  g_signal_connect ((gpointer) loop_disable, "activate",
                    G_CALLBACK (on_loop_disable_activate),
                    NULL);
  g_signal_connect ((gpointer) about1, "activate",
                    G_CALLBACK (on_about1_activate),
                    NULL);
  g_signal_connect ((gpointer) stopbtn, "clicked",
                    G_CALLBACK (on_stopbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) playbtn, "clicked",
                    G_CALLBACK (on_playbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) pausebtn, "clicked",
                    G_CALLBACK (on_pausebtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) prevbtn, "clicked",
                    G_CALLBACK (on_prevbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) nextbtn, "clicked",
                    G_CALLBACK (on_nextbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) playrand, "clicked",
                    G_CALLBACK (on_playrand_clicked),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "button_press_event",
                    G_CALLBACK (on_volumebar_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "button_release_event",
                    G_CALLBACK (on_volumebar_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "configure_event",
                    G_CALLBACK (on_volumebar_configure_event),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "expose_event",
                    G_CALLBACK (on_volumebar_expose_event),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "motion_notify_event",
                    G_CALLBACK (on_volumebar_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) volumebar, "scroll_event",
                    G_CALLBACK (on_volumebar_scroll_event),
                    NULL);
  g_signal_connect ((gpointer) seekbar, "button_press_event",
                    G_CALLBACK (on_seekbar_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) seekbar, "button_release_event",
                    G_CALLBACK (on_seekbar_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) seekbar, "configure_event",
                    G_CALLBACK (on_seekbar_configure_event),
                    NULL);
  g_signal_connect ((gpointer) seekbar, "expose_event",
                    G_CALLBACK (on_seekbar_expose_event),
                    NULL);
  g_signal_connect ((gpointer) seekbar, "motion_notify_event",
                    G_CALLBACK (on_seekbar_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) header, "expose_event",
                    G_CALLBACK (on_header_expose_event),
                    NULL);
  g_signal_connect ((gpointer) header, "configure_event",
                    G_CALLBACK (on_header_configure_event),
                    NULL);
  g_signal_connect ((gpointer) header, "realize",
                    G_CALLBACK (on_header_realize),
                    NULL);
  g_signal_connect ((gpointer) header, "motion_notify_event",
                    G_CALLBACK (on_header_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) header, "button_press_event",
                    G_CALLBACK (on_header_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) header, "button_release_event",
                    G_CALLBACK (on_header_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "configure_event",
                    G_CALLBACK (on_playlist_configure_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "expose_event",
                    G_CALLBACK (on_playlist_expose_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "realize",
                    G_CALLBACK (on_playlist_realize),
                    NULL);
  g_signal_connect ((gpointer) playlist, "button_press_event",
                    G_CALLBACK (on_playlist_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "scroll_event",
                    G_CALLBACK (on_playlist_scroll_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_begin",
                    G_CALLBACK (on_playlist_drag_begin),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_motion",
                    G_CALLBACK (on_playlist_drag_motion),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_drop",
                    G_CALLBACK (on_playlist_drag_drop),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_data_get",
                    G_CALLBACK (on_playlist_drag_data_get),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_end",
                    G_CALLBACK (on_playlist_drag_end),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_failed",
                    G_CALLBACK (on_playlist_drag_failed),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_leave",
                    G_CALLBACK (on_playlist_drag_leave),
                    NULL);
  g_signal_connect ((gpointer) playlist, "button_release_event",
                    G_CALLBACK (on_playlist_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "motion_notify_event",
                    G_CALLBACK (on_playlist_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_data_received",
                    G_CALLBACK (on_playlist_drag_data_received),
                    NULL);
  g_signal_connect ((gpointer) playlist, "drag_data_delete",
                    G_CALLBACK (on_playlist_drag_data_delete),
                    NULL);
  g_signal_connect ((gpointer) playscroll, "value_changed",
                    G_CALLBACK (on_playscroll_value_changed),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mainwin, mainwin, "mainwin");
  GLADE_HOOKUP_OBJECT (mainwin, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (mainwin, menubar1, "menubar1");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem1, "menuitem1");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem1_menu, "menuitem1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, open, "open");
  GLADE_HOOKUP_OBJECT (mainwin, separator2, "separator2");
  GLADE_HOOKUP_OBJECT (mainwin, add_files, "add_files");
  GLADE_HOOKUP_OBJECT (mainwin, add_folder1, "add_folder1");
  GLADE_HOOKUP_OBJECT (mainwin, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (mainwin, quit1, "quit1");
  GLADE_HOOKUP_OBJECT (mainwin, edit1, "edit1");
  GLADE_HOOKUP_OBJECT (mainwin, edit1_menu, "edit1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, clear1, "clear1");
  GLADE_HOOKUP_OBJECT (mainwin, select_all1, "select_all1");
  GLADE_HOOKUP_OBJECT (mainwin, selection1, "selection1");
  GLADE_HOOKUP_OBJECT (mainwin, selection1_menu, "selection1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, remove1, "remove1");
  GLADE_HOOKUP_OBJECT (mainwin, crop1, "crop1");
  GLADE_HOOKUP_OBJECT (mainwin, playlist1, "playlist1");
  GLADE_HOOKUP_OBJECT (mainwin, playlist1_menu, "playlist1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, playlist_load, "playlist_load");
  GLADE_HOOKUP_OBJECT (mainwin, playlist_save, "playlist_save");
  GLADE_HOOKUP_OBJECT (mainwin, playlist_save_as, "playlist_save_as");
  GLADE_HOOKUP_OBJECT (mainwin, order1, "order1");
  GLADE_HOOKUP_OBJECT (mainwin, order1_menu, "order1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, order_linear, "order_linear");
  GLADE_HOOKUP_OBJECT (mainwin, order_random, "order_random");
  GLADE_HOOKUP_OBJECT (mainwin, looping1, "looping1");
  GLADE_HOOKUP_OBJECT (mainwin, looping1_menu, "looping1_menu");
  GLADE_HOOKUP_OBJECT (mainwin, loop_all, "loop_all");
  GLADE_HOOKUP_OBJECT (mainwin, loop_single, "loop_single");
  GLADE_HOOKUP_OBJECT (mainwin, loop_disable, "loop_disable");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (mainwin, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (mainwin, about1, "about1");
  GLADE_HOOKUP_OBJECT (mainwin, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (mainwin, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (mainwin, stopbtn, "stopbtn");
  GLADE_HOOKUP_OBJECT (mainwin, image7, "image7");
  GLADE_HOOKUP_OBJECT (mainwin, playbtn, "playbtn");
  GLADE_HOOKUP_OBJECT (mainwin, image2, "image2");
  GLADE_HOOKUP_OBJECT (mainwin, pausebtn, "pausebtn");
  GLADE_HOOKUP_OBJECT (mainwin, image3, "image3");
  GLADE_HOOKUP_OBJECT (mainwin, prevbtn, "prevbtn");
  GLADE_HOOKUP_OBJECT (mainwin, image4, "image4");
  GLADE_HOOKUP_OBJECT (mainwin, nextbtn, "nextbtn");
  GLADE_HOOKUP_OBJECT (mainwin, image5, "image5");
  GLADE_HOOKUP_OBJECT (mainwin, playrand, "playrand");
  GLADE_HOOKUP_OBJECT (mainwin, image6, "image6");
  GLADE_HOOKUP_OBJECT (mainwin, volumebar, "volumebar");
  GLADE_HOOKUP_OBJECT (mainwin, seekbar, "seekbar");
  GLADE_HOOKUP_OBJECT (mainwin, _, "_");
  GLADE_HOOKUP_OBJECT (mainwin, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (mainwin, header, "header");
  GLADE_HOOKUP_OBJECT (mainwin, playlist, "playlist");
  GLADE_HOOKUP_OBJECT (mainwin, playscroll, "playscroll");
  GLADE_HOOKUP_OBJECT (mainwin, statusbar, "statusbar");

  gtk_window_add_accel_group (GTK_WINDOW (mainwin), accel_group);

  return mainwin;
}

GtkWidget*
create_aboutdialog (void)
{
  GtkWidget *aboutdialog;
  const gchar *authors[] = {
    "Alexey Yakovenko <waker@users.sourceforge.net>",
    NULL
  };
  const gchar *artists[] = {
    "Stas \"uncle lag\" Akimushkin <uncle.lag@gmail.com>",
    NULL
  };

  aboutdialog = gtk_about_dialog_new ();
  gtk_container_set_border_width (GTK_CONTAINER (aboutdialog), 4);
  gtk_window_set_destroy_with_parent (GTK_WINDOW (aboutdialog), TRUE);
  gtk_about_dialog_set_version (GTK_ABOUT_DIALOG (aboutdialog), VERSION);
  gtk_about_dialog_set_name (GTK_ABOUT_DIALOG (aboutdialog), "DeaDBeeF");
  gtk_about_dialog_set_copyright (GTK_ABOUT_DIALOG (aboutdialog), "Copyright \302\251 2009 Alexey Yakovenko");
  gtk_about_dialog_set_license (GTK_ABOUT_DIALOG (aboutdialog), "DeaDBeeF - ultimate music player for GNU/Linux systems with X11\nCopyright (C) 2009  Alexey Yakovenko\n\nThis program is free software; you can redistribute it and/or\nmodify it under the terms of the GNU General Public License\nas published by the Free Software Foundation; either version 2\nof the License, or (at your option) any later version.\n\nThis program is distributed in the hope that it will be useful,\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\nGNU General Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.\n\n\nNote that other included libraries have separate licensing terms.\n\n\nDUMB - Dynamic Universal Music Bibliotheque, Version 0.9.3\nCopyright (C) 2001-2005 Ben Davis, Robert J Ohannessian and Julien Cugniere.\n\n\nGame_Music_Emu Version 0.5.2\nCopyright (C) 2003-2006 Shay Green.\n\n\nFunctions to compute MD5 message digest of files or memory blocks\nWritten by Ulrich Drepper <drepper@gnu.ai.mit.edu>, 1995.\nModified by Gray Watson <http://256.com/gray/>, 1997.\n\n\nlibsidplay2 - commodore 64 SID emulation library\nCopyright (C) Simon White and other authors.");
  gtk_about_dialog_set_website (GTK_ABOUT_DIALOG (aboutdialog), "http://deadbeef.sf.net");
  gtk_about_dialog_set_website_label (GTK_ABOUT_DIALOG (aboutdialog), "website");
  gtk_about_dialog_set_authors (GTK_ABOUT_DIALOG (aboutdialog), authors);
  gtk_about_dialog_set_artists (GTK_ABOUT_DIALOG (aboutdialog), artists);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (aboutdialog, aboutdialog, "aboutdialog");

  return aboutdialog;
}

GtkWidget*
create_searchwin (void)
{
  GtkWidget *searchwin;
  GtkWidget *vbox4;
  GtkWidget *searchentry;
  GtkWidget *hbox6;
  GtkWidget *vbox5;
  GtkWidget *searchheader;
  GtkWidget *searchlist;
  GtkWidget *searchscroll;

  searchwin = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (searchwin, 600, 150);
  gtk_widget_set_events (searchwin, GDK_KEY_PRESS_MASK);
  gtk_window_set_title (GTK_WINDOW (searchwin), "Search");
  gtk_window_set_position (GTK_WINDOW (searchwin), GTK_WIN_POS_CENTER_ALWAYS);
  gtk_window_set_skip_taskbar_hint (GTK_WINDOW (searchwin), TRUE);
  gtk_window_set_skip_pager_hint (GTK_WINDOW (searchwin), TRUE);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (searchwin), vbox4);
  gtk_container_set_border_width (GTK_CONTAINER (vbox4), 4);

  searchentry = gtk_entry_new ();
  gtk_widget_show (searchentry);
  gtk_box_pack_start (GTK_BOX (vbox4), searchentry, FALSE, FALSE, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (searchentry), 8226);
  gtk_entry_set_activates_default (GTK_ENTRY (searchentry), TRUE);

  hbox6 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox6);
  gtk_box_pack_start (GTK_BOX (vbox4), hbox6, TRUE, TRUE, 0);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox5);
  gtk_box_pack_start (GTK_BOX (hbox6), vbox5, TRUE, TRUE, 0);

  searchheader = gtk_drawing_area_new ();
  gtk_widget_show (searchheader);
  gtk_box_pack_start (GTK_BOX (vbox5), searchheader, FALSE, TRUE, 0);
  gtk_widget_set_size_request (searchheader, -1, 24);
  gtk_widget_set_events (searchheader, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK);

  searchlist = gtk_drawing_area_new ();
  gtk_widget_show (searchlist);
  gtk_box_pack_start (GTK_BOX (vbox5), searchlist, TRUE, TRUE, 0);
  GTK_WIDGET_SET_FLAGS (searchlist, GTK_CAN_DEFAULT);
  gtk_widget_set_events (searchlist, GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK | GDK_KEY_PRESS_MASK | GDK_KEY_RELEASE_MASK);

  searchscroll = gtk_vscrollbar_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 1, 1, 0, 0)));
  gtk_widget_show (searchscroll);
  gtk_box_pack_start (GTK_BOX (hbox6), searchscroll, FALSE, TRUE, 0);

  g_signal_connect ((gpointer) searchwin, "key_press_event",
                    G_CALLBACK (on_searchwin_key_press_event),
                    NULL);
  g_signal_connect ((gpointer) searchwin, "delete_event",
                    G_CALLBACK (gtk_widget_hide_on_delete),
                    NULL);
  g_signal_connect ((gpointer) searchentry, "changed",
                    G_CALLBACK (on_searchentry_changed),
                    NULL);
  g_signal_connect ((gpointer) searchheader, "button_press_event",
                    G_CALLBACK (on_header_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) searchheader, "button_release_event",
                    G_CALLBACK (on_header_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) searchheader, "configure_event",
                    G_CALLBACK (on_header_configure_event),
                    NULL);
  g_signal_connect ((gpointer) searchheader, "expose_event",
                    G_CALLBACK (on_header_expose_event),
                    NULL);
  g_signal_connect ((gpointer) searchheader, "motion_notify_event",
                    G_CALLBACK (on_header_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "button_press_event",
                    G_CALLBACK (on_playlist_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "configure_event",
                    G_CALLBACK (on_searchlist_configure_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "expose_event",
                    G_CALLBACK (on_playlist_expose_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "scroll_event",
                    G_CALLBACK (on_playlist_scroll_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "realize",
                    G_CALLBACK (on_searchlist_realize),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "button_release_event",
                    G_CALLBACK (on_playlist_button_release_event),
                    NULL);
  g_signal_connect ((gpointer) searchlist, "motion_notify_event",
                    G_CALLBACK (on_playlist_motion_notify_event),
                    NULL);
  g_signal_connect ((gpointer) searchscroll, "value_changed",
                    G_CALLBACK (on_playscroll_value_changed),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (searchwin, searchwin, "searchwin");
  GLADE_HOOKUP_OBJECT (searchwin, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (searchwin, searchentry, "searchentry");
  GLADE_HOOKUP_OBJECT (searchwin, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (searchwin, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (searchwin, searchheader, "searchheader");
  GLADE_HOOKUP_OBJECT (searchwin, searchlist, "searchlist");
  GLADE_HOOKUP_OBJECT (searchwin, searchscroll, "searchscroll");

  gtk_widget_grab_default (searchlist);
  return searchwin;
}

GtkWidget*
create_traymenu (void)
{
  GtkWidget *traymenu;
  GtkWidget *stop1;
  GtkWidget *play1;
  GtkWidget *pause1;
  GtkWidget *previous1;
  GtkWidget *next1;
  GtkWidget *play_random1;
  GtkWidget *separator4;
  GtkWidget *about2;
  GtkWidget *separator3;
  GtkWidget *quit2;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  traymenu = gtk_menu_new ();

  stop1 = gtk_image_menu_item_new_from_stock ("gtk-media-stop", accel_group);
  gtk_widget_show (stop1);
  gtk_container_add (GTK_CONTAINER (traymenu), stop1);

  play1 = gtk_image_menu_item_new_from_stock ("gtk-media-play", accel_group);
  gtk_widget_show (play1);
  gtk_container_add (GTK_CONTAINER (traymenu), play1);

  pause1 = gtk_image_menu_item_new_from_stock ("gtk-media-pause", accel_group);
  gtk_widget_show (pause1);
  gtk_container_add (GTK_CONTAINER (traymenu), pause1);

  previous1 = gtk_image_menu_item_new_from_stock ("gtk-media-previous", accel_group);
  gtk_widget_show (previous1);
  gtk_container_add (GTK_CONTAINER (traymenu), previous1);

  next1 = gtk_image_menu_item_new_from_stock ("gtk-media-next", accel_group);
  gtk_widget_show (next1);
  gtk_container_add (GTK_CONTAINER (traymenu), next1);

  play_random1 = gtk_menu_item_new_with_mnemonic ("Play Random");
  gtk_widget_show (play_random1);
  gtk_container_add (GTK_CONTAINER (traymenu), play_random1);

  separator4 = gtk_separator_menu_item_new ();
  gtk_widget_show (separator4);
  gtk_container_add (GTK_CONTAINER (traymenu), separator4);
  gtk_widget_set_sensitive (separator4, FALSE);

  about2 = gtk_image_menu_item_new_from_stock ("gtk-about", accel_group);
  gtk_widget_show (about2);
  gtk_container_add (GTK_CONTAINER (traymenu), about2);

  separator3 = gtk_separator_menu_item_new ();
  gtk_widget_show (separator3);
  gtk_container_add (GTK_CONTAINER (traymenu), separator3);
  gtk_widget_set_sensitive (separator3, FALSE);

  quit2 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_show (quit2);
  gtk_container_add (GTK_CONTAINER (traymenu), quit2);

  g_signal_connect ((gpointer) stop1, "activate",
                    G_CALLBACK (on_stopbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) play1, "activate",
                    G_CALLBACK (on_playbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) pause1, "activate",
                    G_CALLBACK (on_pausebtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) previous1, "activate",
                    G_CALLBACK (on_prevbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) next1, "activate",
                    G_CALLBACK (on_nextbtn_clicked),
                    NULL);
  g_signal_connect ((gpointer) play_random1, "activate",
                    G_CALLBACK (on_playrand_clicked),
                    NULL);
  g_signal_connect ((gpointer) about2, "activate",
                    G_CALLBACK (on_about1_activate),
                    NULL);
  g_signal_connect ((gpointer) quit2, "activate",
                    G_CALLBACK (on_quit1_activate),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (traymenu, traymenu, "traymenu");
  GLADE_HOOKUP_OBJECT (traymenu, stop1, "stop1");
  GLADE_HOOKUP_OBJECT (traymenu, play1, "play1");
  GLADE_HOOKUP_OBJECT (traymenu, pause1, "pause1");
  GLADE_HOOKUP_OBJECT (traymenu, previous1, "previous1");
  GLADE_HOOKUP_OBJECT (traymenu, next1, "next1");
  GLADE_HOOKUP_OBJECT (traymenu, play_random1, "play_random1");
  GLADE_HOOKUP_OBJECT (traymenu, separator4, "separator4");
  GLADE_HOOKUP_OBJECT (traymenu, about2, "about2");
  GLADE_HOOKUP_OBJECT (traymenu, separator3, "separator3");
  GLADE_HOOKUP_OBJECT (traymenu, quit2, "quit2");

  gtk_menu_set_accel_group (GTK_MENU (traymenu), accel_group);

  return traymenu;
}

GtkWidget*
create_addprogress (void)
{
  GtkWidget *addprogress;
  GtkWidget *vbox6;
  GtkWidget *progresstitle;
  GtkWidget *hbox7;
  GtkWidget *button1;

  addprogress = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (addprogress), "Adding files...");
  gtk_window_set_position (GTK_WINDOW (addprogress), GTK_WIN_POS_CENTER_ON_PARENT);
  gtk_window_set_skip_taskbar_hint (GTK_WINDOW (addprogress), TRUE);
  gtk_window_set_skip_pager_hint (GTK_WINDOW (addprogress), TRUE);

  vbox6 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox6);
  gtk_container_add (GTK_CONTAINER (addprogress), vbox6);
  gtk_container_set_border_width (GTK_CONTAINER (vbox6), 4);

  progresstitle = gtk_entry_new ();
  gtk_widget_show (progresstitle);
  gtk_box_pack_start (GTK_BOX (vbox6), progresstitle, TRUE, FALSE, 0);
  gtk_widget_set_size_request (progresstitle, 500, -1);
  GTK_WIDGET_UNSET_FLAGS (progresstitle, GTK_CAN_FOCUS);
  gtk_editable_set_editable (GTK_EDITABLE (progresstitle), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (progresstitle), 8226);

  hbox7 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox7);
  gtk_box_pack_start (GTK_BOX (vbox6), hbox7, FALSE, TRUE, 2);

  button1 = gtk_button_new_with_mnemonic ("Abort");
  gtk_widget_show (button1);
  gtk_box_pack_start (GTK_BOX (hbox7), button1, FALSE, FALSE, 0);
  gtk_widget_set_size_request (button1, 83, -1);
  GTK_WIDGET_UNSET_FLAGS (button1, GTK_CAN_FOCUS);

  g_signal_connect ((gpointer) addprogress, "delete_event",
                    G_CALLBACK (on_addprogress_delete_event),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_progress_abort),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (addprogress, addprogress, "addprogress");
  GLADE_HOOKUP_OBJECT (addprogress, vbox6, "vbox6");
  GLADE_HOOKUP_OBJECT (addprogress, progresstitle, "progresstitle");
  GLADE_HOOKUP_OBJECT (addprogress, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (addprogress, button1, "button1");

  return addprogress;
}

