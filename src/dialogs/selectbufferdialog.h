/* Copyright (C) 2011,2018 G.P. Halkes
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 3, as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef SELECTBUFFERDIALOG_H
#define SELECTBUFFERDIALOG_H

#include <t3widget/widget.h>
using namespace t3widget;

#include "tilde/filebuffer.h"

class select_buffer_dialog_t : public dialog_t {
 private:
  list_pane_t *list;
  int known_version;

 public:
  select_buffer_dialog_t(int height, int width);
  bool set_size(optint height, optint width) override;
  void show() override;
  virtual void ok_activated();

  DEFINE_SIGNAL(activate, file_buffer_t *);
};

#endif
