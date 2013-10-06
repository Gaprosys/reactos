/*
 * Soft386 386/486 CPU Emulation Library
 * extraops.c
 *
 * Copyright (C) 2013 Aleksandar Andrejevic <theflash AT sdf DOT lonestar DOT org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

/* INCLUDES *******************************************************************/

// #define WIN32_NO_STATUS
// #define _INC_WINDOWS
#include <windef.h>

// #define NDEBUG
#include <debug.h>

#include <soft386.h>
#include "opcodes.h"
#include "common.h"

/* PUBLIC VARIABLES ***********************************************************/

SOFT386_OPCODE_HANDLER_PROC
Soft386ExtendedHandlers[SOFT386_NUM_OPCODE_HANDLERS] =
{
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
    NULL, // TODO: NOT IMPLEMENTED
};

/* PUBLIC FUNCTIONS ***********************************************************/

SOFT386_OPCODE_HANDLER(Soft386OpcodeExtended)
{
    UCHAR SecondOpcode;

    /* Fetch the second operation code */
    if (!Soft386FetchByte(State, &SecondOpcode))
    {
        /* Exception occurred */
        return FALSE;
    }

    if (Soft386ExtendedHandlers[SecondOpcode] != NULL)
    {
        /* Call the extended opcode handler */
        return Soft386ExtendedHandlers[SecondOpcode](State, SecondOpcode);
    }
    else
    {
        /* This is not a valid opcode */
        Soft386Exception(State, SOFT386_EXCEPTION_UD);
        return FALSE;
    }
}
