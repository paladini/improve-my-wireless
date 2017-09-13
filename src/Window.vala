namespace Dictopia {

    class Window: Gtk.ApplicationWindow {
        private Gtk.HeaderBar header_bar;

        public Window (Gtk.Application application) {
            Object (application: application);
            this.window_position = Gtk.WindowPosition.CENTER;
            this.set_default_size (500, 200);

            this.build_ui ();
        }

        void build_ui () {
            header_bar = new Dictopia.Widgets.HeaderBar();
            this.set_titlebar (header_bar);
        }
    }
}