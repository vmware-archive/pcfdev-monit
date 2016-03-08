/*
 * Copyright (C) 2011 Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 *
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */

/**
 *  System dependent filesystem methods.
 *
 *  @author Jan-Henrik Haukeland, <hauk@tildeslash.com>
 *  @author Martin Pala, <martinp@tildeslash.com>
 *
 *  @file
 */

#include <config.h>

#include "monitor.h"
#include "device_sysdep.h"

/**
 * Unknown OS special block device dummy mountpoint method.
 *
 * @param inf  Information structure
 * @param blockdev Identifies block special device
 * @return         NULL
 */
char *device_mountpoint_sysdep(Info_T inf, char *blockdev) {
  LogError("%s: Unsupported mounted filesystem information method\n", prog);
  return NULL;
}


/**
 * Unknown OS filesystem dummy usage statistics.
 *
 * @param inf Information structure
 * @return        FALSE
 */
int filesystem_usage_sysdep(Info_T inf) {
  LogError("%s: Unsupported filesystem informations gathering method\n", prog);
  return FALSE;
}
