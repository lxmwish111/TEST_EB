/**
 * \file
 *
 * \brief Autosar ApplTemplates
 *
 * This file contains the implementation of the Autosar
 * module ApplTemplates.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef BOARD_H
#define BOARD_H

#include <WINDOWS/Os_WINDOWS_cpu.h>
#include <WINDOWS/Os_tool_WINDOWS.h>
#include <WINDOWS/Os_WINDOWS_timer.h>

#define LEDS_SET(x)
#define LEDS_INIT()


/*!
 * Time in ms between a timer increment 
*/
#define OS_TIMERMINCYLCEMS 10

/*!
 * OS_BoardNsToTicks() and OS_BoardTicksToNs()
 *
 * OS_BoardNsToTicks() converts nanoseconds (nS) to ticks. This macro must
 * compute entirely in the preprocessor, because it is used to initialise time
 * tables.
 * OS_BoardTicksToNs() is the reverse computation. 
*/ 

#ifdef OS_TIMERMINCYLCEMS
#define OS_BoardNsToTicks(nS)	 ((nS)/(1000000*OS_TIMERMINCYLCEMS))
#define OS_BoardTicksToNs(tik) ((tik)*1000000*OS_TIMERMINCYLCEMS)
#else
#error "You must configure the time in ms between a timer increment"
#endif

/* external function declarations for board.c */
extern void BoardStart(void);

#endif
/* Editor settings - DO NOT DELETE
 * vi:set ts=4:
*/
