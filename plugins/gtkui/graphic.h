/* graphic.h generated by valac, the Vala compiler, do not modify */


#ifndef __GRAPHIC_H__
#define __GRAPHIC_H__

#include <glib.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS


#define DEADBEEF_TYPE_GRAPHIC (deadbeef_graphic_get_type ())
#define DEADBEEF_GRAPHIC(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEADBEEF_TYPE_GRAPHIC, DeadbeefGraphic))
#define DEADBEEF_GRAPHIC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEADBEEF_TYPE_GRAPHIC, DeadbeefGraphicClass))
#define DEADBEEF_IS_GRAPHIC(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEADBEEF_TYPE_GRAPHIC))
#define DEADBEEF_IS_GRAPHIC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEADBEEF_TYPE_GRAPHIC))
#define DEADBEEF_GRAPHIC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEADBEEF_TYPE_GRAPHIC, DeadbeefGraphicClass))

typedef struct _DeadbeefGraphic DeadbeefGraphic;
typedef struct _DeadbeefGraphicClass DeadbeefGraphicClass;
typedef struct _DeadbeefGraphicPrivate DeadbeefGraphicPrivate;

struct _DeadbeefGraphic {
	GtkDrawingArea parent_instance;
	DeadbeefGraphicPrivate * priv;
};

struct _DeadbeefGraphicClass {
	GtkDrawingAreaClass parent_class;
};


GType deadbeef_graphic_get_type (void);
extern DeadbeefGraphic* deadbeef_graphic_inst;
void deadbeef_graphic_aa_mode_changed (DeadbeefGraphic* self, GtkCheckMenuItem* item);
void deadbeef_graphic_mode_changed (DeadbeefGraphic* self, GtkCheckMenuItem* item);
DeadbeefGraphic* deadbeef_graphic_new (void);
DeadbeefGraphic* deadbeef_graphic_construct (GType object_type);


G_END_DECLS

#endif