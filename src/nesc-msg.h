/* This file is part of the nesC compiler.
   Copyright (C) 2002 Intel Corporation

The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.

nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
Boston, MA 02110-1301 USA.  */

#ifndef NESC_MSG_H
#define NESC_MSG_H

void select_nesc_msg(const char *name);
void select_nesc_csts(void);
bool layout_requested(void);

void dump_msg_layout(void);

#endif
