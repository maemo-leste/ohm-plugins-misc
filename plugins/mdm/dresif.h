/*************************************************************************
Copyright (C) 2017 Jolla Ltd.

These OHM Modules are free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation
version 2.1 of the License.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
USA.
*************************************************************************/


#ifndef __OHM_MDM_DRESIF_H__
#define __OHM_MDM_DRESIF_H__

enum dresif_result {
    DRESIF_RESULT_SUCCESS,
    DRESIF_RESULT_ERROR
};

void dresif_init(OhmPlugin *plugin);
int dresif_set_mdm(const char *name, const char *value);

#endif
