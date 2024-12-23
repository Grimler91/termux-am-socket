/**
 *    termux-am sends commands to the Termux:API app through a unix socket
 *    Copyright (C) 2021 Tarek Sander
 *
 *    This program is free software: you can redistribute it and/or
 *    modify it under the terms of the GNU General Public License as
 *    published by the Free Software Foundation, version 3.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <iostream>

#include "termux-am.h"

int main(int argc, char* argv[]) {
    int rc;
    if (argc != 2) {
        std::cerr << "termux-am-socket only expects 1 argument and received " << argc - 1 << std::endl;
        return 1;
    }

    rc = send_to_socket(argv[1]);
    return rc;
}
