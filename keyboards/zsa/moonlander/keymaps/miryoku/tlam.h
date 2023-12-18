/* Copyright 2023 Terrence Lam  (@skyuplam) <skyuplam@gmail.com>
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

#if defined(TLAM_CLIPBOARD_FUN)
#    define U_RDO KC_AGIN
#    define U_PST KC_PSTE
#    define U_CPY KC_COPY
#    define U_CUT KC_CUT
#    define U_UND KC_UNDO
#elif defined(TLAM_CLIPBOARD_MAC)
#    define U_RDO SCMD(KC_Z)
#    define U_PST LCMD(KC_V)
#    define U_CPY LCMD(KC_C)
#    define U_CUT LCMD(KC_X)
#    define U_UND LCMD(KC_Z)
#elif defined(TLAM_CLIPBOARD_WIN)
#    define U_RDO C(KC_Y)
#    define U_PST C(KC_V)
#    define U_CPY C(KC_C)
#    define U_CUT C(KC_X)
#    define U_UND C(KC_Z)
#else
#    define U_RDO KC_AGIN
#    define U_PST S(KC_INS)
#    define U_CPY C(KC_INS)
#    define U_CUT S(KC_DEL)
#    define U_UND KC_UNDO
#endif

#define WHITE \
    { HSV_WHITE }
#define RED \
    { HSV_RED }
#define CORAL \
    { HSV_CORAL }
#define ORANGE \
    { HSV_ORANGE }
#define GOLDENROD \
    { HSV_GOLDENROD }
#define GOLD \
    { HSV_GOLD }
#define YELLOW \
    { HSV_YELLOW }
#define CHARTREUSE \
    { HSV_CHARTREUSE }
#define GREEN \
    { HSV_GREEN }
#define SPRINGGREEN \
    { HSV_SPRINGGREEN }
#define TURQUOISE \
    { HSV_TURQUOISE }
#define TEAL \
    { HSV_TEAL }
#define CYAN \
    { HSV_CYAN }
#define AZURE \
    { HSV_AZURE }
#define BLUE \
    { HSV_BLUE }
#define PURPLE \
    { HSV_PURPLE }
#define MAGENTA \
    { HSV_MAGENTA }
#define PINK \
    { HSV_PINK }
#define NONE \
    { HSV_OFF }
