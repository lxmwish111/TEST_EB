/**
 * \file
 *
 * \brief Autosar Det
 *
 * This file contains the implementation of the Autosar
 * module Det.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef DET_CFG_H
#define DET_CFG_H
/*==================[includes]==============================================*/

/*==================[macros]================================================*/

/** \brief Rte usage
 **
 ** En- or diasable the usage of the Rte for the Det */
#define DET_RTE_USAGE          STD_OFF

/** \brief Internal logging mode
 **
 ** Errors are logged in an internal circular buffer. */
#define DET_LOGMODE_INTERNAL   1U
/** \brief Breakpoint mode
 **
 ** If an error is reported the system hals at a break point and the user can
 ** analyse the situation in a debugger/emulator. */
#define DET_LOGMODE_BREAKPOINT 2U

/** \brief Error logging mode
 **
 ** Defines the mode how errors are logged. Only one of the following modes
 ** can be active. Possible modes: ::DET_LOGMODE_INTERNAL,
 ** ::DET_LOGMODE_BREAKPOINT */
#define DET_LOGMODE            DET_LOGMODE_INTERNAL

/** \brief Maximum number of errors that can be logged
 **
 ** This macro defines the size of the circular buffer, which limits the
 ** maximum number of errors that can be logged. */
#define DET_BUFFERSIZE         10U

/** \brief Possible value for ::DET_REEPORTS_TO_KEEP
 **
 ** Only the first ::DET_BUFFERSIZE reports are stored and all others are
 ** discarded. */
#define DET_KEEP_FIRST_REPORTS 1U
/** \brief Possible value for ::DET_REEPORTS_TO_KEEP
 *
 * The last ::DET_BUFFERSIZE reports are kept. */
#define DET_KEEP_LAST_REPORTS  2U

/** \brief Configuration option indicating which messages to keep on overflow.
 **
 ** Allowed values: ::DET_KEEP_FIRST_REPORTS and ::DET_KEEP_LAST_REPORTS. */
#define DET_REPORTS_TO_KEEP    DET_KEEP_LAST_REPORTS


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* if !defined( DET_CFG_H ) */
/*==================[end of file]===========================================*/
