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

#include <Os_osek.h>
#include <board.h>
#include <Os_config.h>
#include <Os_kernel.h>

/*!
 * It performs hardware initialisation, then returns to main() and then calls 
 * StartOS() from main().
*/
void BoardStart(void)
{
	/* called before StartOS */
}

/* Editor settings - DO NOT DELETE
 * vi:set ts=4:
*/
