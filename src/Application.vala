namespace ImproveMyWireless {

    class Application: Granite.Application {
        
        construct {
            flags |= ApplicationFlags.FLAGS_NONE;

            application_id      = "com.github.paladini.improvemywireless";
            program_name        = "Improve My Wireless";
            exec_name           = "imrpovemywireless";

            build_version       = "0.1"; 
            app_years           = "2017";
            app_icon            = "application-default-icon"; //use the default fallback
            app_launcher        = ""; // we will set this later

            main_url            = "";
            bug_url             = "";
            help_url            = "";
            translate_url       = "";

            about_authors       = {"Fernando Paladini <fnpaladini@gmail.com>"};
            about_documenters   = {"Fernando Paladini <fnpaladini@gmail.com>"};
            about_artists       = {"Fernando Paladini <fnpaladini@gmail.com>"};
            about_comments      = "Improves your computer Wireless signal by disabling power manager for your networking device. By default, power management is enabled by ElementaryOS and this configuration make it's have a poor performance on wireless networks. This softwares solves this problem forever.";
            about_translators   = "translator-credits";
            about_license_type  = Gtk.License.GPL_3_0;
        }

        public override void activate () {
            var window = new Gtk.ApplicationWindow (this);
            window.title = "Improve My Wireless";
            window.window_position = Gtk.WindowPosition.CENTER;
            window.set_default_size (500, 300);
            
            window.show_all ();
        }
    }
}