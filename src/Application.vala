/* 
* Copyright (c) 2011-2016 Lawrence Aberba (https://github.com/aberba/)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
*
* Authored by: Lawrence Aberba <karabutaworld@gmail.com>
*/

namespace Dictopia {

    class Application: Granite.Application {
        
        construct {
            /*
                You may also use;
                    ApplicationFlags.HANDLES_OPEN
                    ApplicationFlags.HANDLES_COMMAND_LINE;
            */
            flags |= ApplicationFlags.FLAGS_NONE;

            application_id      = "com.aberba.github.dictopia";
            program_name        = "Dictopia";
            exec_name           = "dictopia";

            build_version       = "0.1"; 
            app_years           = "2016";
            app_icon            = "application-default-icon"; //use the default fallback
            app_launcher        = ""; // we will set this later

            main_url            = "";
            bug_url             = "";
            help_url            = "";
            translate_url       = "";

            about_authors       = {"Lawrence Aberba <karabutaworld@gmail.com>"};
            about_documenters   = {"Lawrence Aberba <karabutaworld@gmail.com>"};
            about_artists       = {"Lawrence Aberba <karabutaworld@gmail.com>"};
            about_comments      = "A simple dictionary application";
            about_translators   = "translator-credits";
            about_license_type  = Gtk.License.GPL_3_0;
        }

        public override void activate () {
            var window = new Gtk.ApplicationWindow (this);
            window.title = "Dictopia";
            window.window_position = Gtk.WindowPosition.CENTER;
            window.set_default_size (500, 300);
            
            window.show_all ();
        }
    }
}