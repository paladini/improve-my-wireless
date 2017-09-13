namespace Dictopia {

    class Widgets.HeaderBar: Gtk.HeaderBar {
        Dictopia.Application app;

        private Granite.Widgets.ModeButton mode_button;
        private Gtk.Button bookmark_button;
        private Gtk.SearchEntry search_entry;
        private Granite.Widgets.AppMenu menu_button;


        public HeaderBar (Dictopia.Application app) {
            this.app = app;

            this.title = "Dictopia";
            this.show_close_button = true;
            
            this.build_ui ();
        }

        void build_ui () {
            // forward and back buttons 
            mode_button = new Granite.Widgets.ModeButton ();
            mode_button.append_icon ("go-previous", Gtk.IconSize.BUTTON);
            mode_button.append_icon ("go-next", Gtk.IconSize.BUTTON);
            this.pack_start (mode_button);

            // Bookmark button
            bookmark_button = new Gtk.Button.from_icon_name ("help-about");
            this.pack_start (bookmark_button);

            // Search entry
            search_entry = new Gtk.SearchEntry ();
            search_entry.placeholder_text = "Search Word or Phrase";
            this.pack_end (search_entry);

            // search_entry.activate.connect (() => {
            //  stdout.printf(search_entry.get_text ());
            // });
            
            // Application menu items
            var menu = new Gtk.Menu ();

            // Application menu gear button
            var menu_button = new Granite.Widgets.AppMenu.with_app (this.app, menu);
            this.pack_end (menu_button);
        }


    }
}