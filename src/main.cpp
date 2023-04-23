#include <gtk/gtk.h>
#include <glib/gstdio.h>

static void
activate(GtkApplication *app,
         gpointer user_data)
{
  GtkBuilder *builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "./window.ui", NULL);
  GObject *window = gtk_builder_get_object( builder, "window");
  gtk_widget_show(GTK_WIDGET(window));
  g_object_unref(builder);
}

int main(int argc,
         char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new("br.calheiros.deskapp", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);

  return status;
}