int main (string[] args) {
    Gtk.init (ref args);

    var window = new Gtk.Window ();
    window.title = "Demo Application";
    window.window_position = Gtk.WindowPosition.CENTER;
    window.set_default_size (500, 300);
    window.destroy.connect (Gtk.main_quit);
    window.show_all (); // displays window and all its child widgets to the screen
 
    Gtk.main (); // Runs the GTK+ main event loop
    return 0;
}