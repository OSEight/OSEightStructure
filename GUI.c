#include <gtk/gtk.h>

// Function to handle the button click event
void launchCmd(GtkWidget *widget, gpointer data) {
    system("./cmd");
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *vbox;
    GtkWidget *startButton;
    GtkWidget *fileExplorerButton;
    GtkWidget *cmdButton;

    gtk_init(&argc, &argv);

    // Create the main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "OSEight");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a vertical box container
    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create the start button
    startButton = gtk_button_new_with_label("Start Menu");
    gtk_box_pack_start(GTK_BOX(vbox), startButton, TRUE, TRUE, 0);

    // Create the file explorer button
    fileExplorerButton = gtk_button_new_with_label("File Explorer");
    gtk_box_pack_start(GTK_BOX(vbox), fileExplorerButton, TRUE, TRUE, 0);

    // Create the command prompt button
    cmdButton = gtk_button_new_with_label("Command Prompt");
    gtk_box_pack_start(GTK_BOX(vbox), cmdButton, TRUE, TRUE, 0);

    // Connect the button click event to the launchCmd function
    g_signal_connect(cmdButton, "clicked", G_CALLBACK(launchCmd), NULL);
    while (true){
        if (g_signal_connect = true) {
            const char*  opnfl = "rt/osep/cmd.c";
        }
    }
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}