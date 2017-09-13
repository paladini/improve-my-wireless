/* hello_world.c generated by valac 0.36.5, the Vala compiler
 * generated from hello_world.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>

typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Block1Data {
	int _ref_count_;
	GtkButton* button_hello;
};



gint _vala_main (gchar** args, int args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static void __lambda4_ (Block1Data* _data1_);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	return _data1_;
#line 35 "hello_world.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
		_g_object_unref0 (_data1_->button_hello);
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
		g_slice_free (Block1Data, _data1_);
#line 48 "hello_world.c"
	}
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
#line 9 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_main_quit ();
#line 56 "hello_world.c"
}


static void __lambda4_ (Block1Data* _data1_) {
#line 13 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_button_set_label (_data1_->button_hello, "Hello World!");
#line 14 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->button_hello, FALSE);
#line 65 "hello_world.c"
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 12 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	__lambda4_ (self);
#line 72 "hello_world.c"
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	Block1Data* _data1_;
	GtkWindow* window = NULL;
	GtkWindow* _tmp0_;
	GtkButton* _tmp1_;
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_data1_->_ref_count_ = 1;
#line 2 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_init (&args_length1, &args);
#line 4 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_tmp0_ = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
#line 4 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	g_object_ref_sink (_tmp0_);
#line 4 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	window = _tmp0_;
#line 5 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_window_set_title (window, "Hello World!");
#line 6 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_container_set_border_width ((GtkContainer*) window, (guint) 12);
#line 7 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_window_set_position (window, GTK_WIN_POS_CENTER);
#line 8 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_window_set_default_size (window, 350, 70);
#line 9 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	g_signal_connect ((GtkWidget*) window, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
#line 11 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_tmp1_ = (GtkButton*) gtk_button_new_with_label ("Click me!");
#line 11 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	g_object_ref_sink (_tmp1_);
#line 11 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_data1_->button_hello = _tmp1_;
#line 12 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	g_signal_connect_data (_data1_->button_hello, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 17 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_container_add ((GtkContainer*) window, (GtkWidget*) _data1_->button_hello);
#line 18 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_widget_show_all ((GtkWidget*) window);
#line 20 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	gtk_main ();
#line 21 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	result = 0;
#line 21 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_g_object_unref0 (window);
#line 21 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	block1_data_unref (_data1_);
#line 21 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	_data1_ = NULL;
#line 21 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	return result;
#line 128 "hello_world.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 1 "/home/paladini/Projects/ElementaryOS/test/src/hello_world.vala"
	return _vala_main (argv, argc);
#line 138 "hello_world.c"
}


