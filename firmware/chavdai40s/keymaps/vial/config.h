/* Copyright 2020 t-miyajima
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here
#define VIAL_KEYBOARD_UID {0xEC, 0x06, 0x04, 0x0F, 0x19, 0xBC, 0xFB, 0xBA}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }
//   F072RBT6 is not requied below memory difinition.
// #define FEE_MCU_FLASH_SIZE 128
// #define FEE_PAGE_COUNT 2
// #define FEE_PAGE_SIZE 1024
#define LAYER_STATE_8BIT
// #define NO_ACTION_ONESHOT
// layer number adjust to 8
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
// #undef LOCKING_SUPPORT_ENABLE
// #undef LOCKING_RESYNC_ENABLE
