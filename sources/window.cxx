// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "app_i18n.h"
#include "window.h"
#include "window_impl.cc"

void Main_Window::cb_btn_load_i(Fl_Button*, void*) {
  P->on_load();
}
void Main_Window::cb_btn_load(Fl_Button* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_btn_load_i(o,v);
}

void Main_Window::cb_btn_send_i(Fl_Button*, void*) {
  P->on_send();
}
void Main_Window::cb_btn_send(Fl_Button* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_btn_send_i(o,v);
}

void Main_Window::cb_br_sendlist_i(Fl_Hold_Browser*, void*) {
  P->update_event_data_display(1);
}
void Main_Window::cb_br_sendlist(Fl_Hold_Browser* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_br_sendlist_i(o,v);
}

void Main_Window::cb_btn_receive_i(Fl_Button* o, void*) {
  P->on_receive(o->value());
}
void Main_Window::cb_btn_receive(Fl_Button* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_btn_receive_i(o,v);
}

void Main_Window::cb_btn_save_i(Fl_Button*, void*) {
  P->on_save();
}
void Main_Window::cb_btn_save(Fl_Button* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_btn_save_i(o,v);
}

void Main_Window::cb_br_recvlist_i(Fl_Hold_Browser*, void*) {
  P->update_event_data_display(0);
}
void Main_Window::cb_br_recvlist(Fl_Hold_Browser* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_br_recvlist_i(o,v);
}

void Main_Window::cb_cb_midi_interface_i(Fl_Choice*, void*) {
  P->on_change_midi_interface();
}
void Main_Window::cb_cb_midi_interface(Fl_Choice* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_cb_midi_interface_i(o,v);
}

void Main_Window::cb_val_sendrate_i(Fl_Slider*, void*) {
  P->on_change_send_rate();
}
void Main_Window::cb_val_sendrate(Fl_Slider* o, void* v) {
  ((Main_Window*)(o->parent()->parent()->parent()))->cb_val_sendrate_i(o,v);
}
Main_Window::Main_Window(int X, int Y, int W, int H, const char *L)
  : Fl_Group(X, Y, W, H, L) {
P.reset(new Impl);
{ tabs = new Fl_Tabs(0, 0, 455, 250);
  { tab_send = new Fl_Group(0, 25, 450, 225, _("Send"));
    tab_send->labelsize(12);
    { btn_load = new Fl_Button(10, 35, 90, 25, _("@fileopen  Load"));
      btn_load->labelsize(12);
      btn_load->callback((Fl_Callback*)cb_btn_load);
      btn_load->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Button* btn_load
    { btn_send = new Fl_Button(10, 60, 90, 25, _("@->  Send"));
      btn_send->labelsize(12);
      btn_send->callback((Fl_Callback*)cb_btn_send);
      btn_send->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Button* btn_send
    { br_sendlist = new Fl_Hold_Browser(110, 35, 330, 75);
      br_sendlist->box(FL_NO_BOX);
      br_sendlist->color(FL_BACKGROUND2_COLOR);
      br_sendlist->selection_color(FL_SELECTION_COLOR);
      br_sendlist->labeltype(FL_NORMAL_LABEL);
      br_sendlist->labelfont(0);
      br_sendlist->labelsize(12);
      br_sendlist->labelcolor(FL_FOREGROUND_COLOR);
      br_sendlist->textsize(12);
      br_sendlist->callback((Fl_Callback*)cb_br_sendlist);
      br_sendlist->align(Fl_Align(FL_ALIGN_BOTTOM));
      br_sendlist->when(FL_WHEN_RELEASE_ALWAYS);
    } // Fl_Hold_Browser* br_sendlist
    { txt_senddata = new Fl_Text_Display(10, 120, 430, 120);
      txt_senddata->labelsize(12);
      txt_senddata->textfont(4);
      txt_senddata->textsize(12);
    } // Fl_Text_Display* txt_senddata
    { pb_send = new Fl_Progress(10, 85, 90, 25);
      pb_send->color(FL_BACKGROUND_COLOR);
      pb_send->selection_color((Fl_Color)150);
      pb_send->labelsize(12);
    } // Fl_Progress* pb_send
    tab_send->end();
  } // Fl_Group* tab_send
  { tab_recv = new Fl_Group(0, 25, 450, 225, _("Receive"));
    tab_recv->labelsize(12);
    tab_recv->hide();
    { btn_receive = new Fl_Button(10, 35, 90, 25, _("@<-  Receive"));
      btn_receive->type(1);
      btn_receive->labelsize(12);
      btn_receive->callback((Fl_Callback*)cb_btn_receive);
      btn_receive->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Button* btn_receive
    { btn_save = new Fl_Button(10, 60, 90, 25, _("@filesave  Save"));
      btn_save->labelsize(12);
      btn_save->callback((Fl_Callback*)cb_btn_save);
      btn_save->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Button* btn_save
    { br_recvlist = new Fl_Hold_Browser(110, 35, 330, 75);
      br_recvlist->box(FL_NO_BOX);
      br_recvlist->color(FL_BACKGROUND2_COLOR);
      br_recvlist->selection_color(FL_SELECTION_COLOR);
      br_recvlist->labeltype(FL_NORMAL_LABEL);
      br_recvlist->labelfont(0);
      br_recvlist->labelsize(12);
      br_recvlist->labelcolor(FL_FOREGROUND_COLOR);
      br_recvlist->textsize(12);
      br_recvlist->callback((Fl_Callback*)cb_br_recvlist);
      br_recvlist->align(Fl_Align(FL_ALIGN_BOTTOM));
      br_recvlist->when(FL_WHEN_RELEASE_ALWAYS);
    } // Fl_Hold_Browser* br_recvlist
    { txt_recvdata = new Fl_Text_Display(10, 120, 430, 120);
      txt_recvdata->labelsize(12);
      txt_recvdata->textfont(4);
      txt_recvdata->textsize(12);
    } // Fl_Text_Display* txt_recvdata
    { lbl_recv = new Fl_Box(10, 85, 90, 25);
      lbl_recv->box(FL_DOWN_BOX);
      lbl_recv->color((Fl_Color)150);
      lbl_recv->labelsize(12);
    } // Fl_Box* lbl_recv
    tab_recv->end();
  } // Fl_Group* tab_recv
  { tab_options = new Fl_Group(0, 25, 450, 225, _("Options"));
    tab_options->labelsize(12);
    tab_options->hide();
    { Fl_Box* o = new Fl_Box(10, 35, 180, 25, _("MIDI interface"));
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 65, 180, 25, _("Max Transmission Rate"));
      o->labelsize(12);
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { cb_midi_interface = new Fl_Choice(200, 35, 155, 25);
      cb_midi_interface->down_box(FL_BORDER_BOX);
      cb_midi_interface->labelsize(12);
      cb_midi_interface->textsize(12);
      cb_midi_interface->callback((Fl_Callback*)cb_cb_midi_interface);
    } // Fl_Choice* cb_midi_interface
    { val_sendrate = new Fl_Slider(200, 65, 100, 25);
      val_sendrate->type(1);
      val_sendrate->labelsize(12);
      val_sendrate->callback((Fl_Callback*)cb_val_sendrate);
      val_sendrate->align(Fl_Align(FL_ALIGN_RIGHT));
    } // Fl_Slider* val_sendrate
    { lbl_sendrate = new Fl_Box(300, 65, 55, 25);
      lbl_sendrate->box(FL_DOWN_BOX);
      lbl_sendrate->labelsize(12);
    } // Fl_Box* lbl_sendrate
    { Fl_Box* o = new Fl_Box(355, 65, 55, 25, _("kb/s"));
      o->labelsize(12);
    } // Fl_Box* o
    tab_options->end();
  } // Fl_Group* tab_options
  tabs->end();
} // Fl_Tabs* tabs
{ Fl_Box* o = new Fl_Box(160, 0, 291, 25, _("Sysexxer NG"));
  o->box(FL_THIN_UP_BOX);
  o->labeltype(FL_EMBOSSED_LABEL);
  o->labelfont(11);
  o->labelsize(20);
  o->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
} // Fl_Box* o
P->init(this);
end();
}

Main_Window::~Main_Window() {
  ;
}

void Main_Window::load_file(const char *filename) {
  P->do_load(filename);
}
