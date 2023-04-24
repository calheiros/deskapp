#include <glib/gstdio.h>
#include <gtk/gtk.h>

static void activate(GtkApplication *app, gpointer user_data) {
  GtkBuilder *builder = gtk_builder_new_from_file("src/window.ui");
  GtkWindow *window = GTK_WINDOW(gtk_builder_get_object(builder, "window"));
  gtk_window_present(window);
  gtk_window_set_application(window, GTK_APPLICATION(app));
}

int main(int argc, char **argv) {
  GtkApplication *app;
  int status;

  app =
      gtk_application_new("br.calheiros.deskapp", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
  return status;
}
