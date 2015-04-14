#include <gtk/gtk.h>

int main(int argc, char *argv[]) 
{
	GtkWidget *window, *label;
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title ( GTK_WINDOW (window), "Exploring BB");
	label = gtk_label_new ("Hello Gillian");
	gtk_container_add(GTK_CONTAINER (window), label);
	gtk_widget_set_size_request(window, 400, 100);
	gtk_window_set_resizable(GTK_WINDOW (window), TRUE);
	gtk_widget_modify_font(label, pango_font_description_from_string("Tahoma_Italic 40"));
	//gtk_widget_modify_font(window, pango_font_description_from_string("Tahoma 16"));
	gtk_widget_show(label);
	gtk_widget_show(window);
	g_signal_connect(window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
	gtk_main();
	return 0;
}
