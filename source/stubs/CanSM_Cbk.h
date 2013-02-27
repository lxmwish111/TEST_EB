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

#if (!defined CANSM_CBK_H)
#define CANSM_CBK_H

/*==================[inclusions]============================================*/

#include <TSAutosar.h>        /* EB specific standard types */
#include <Std_Types.h>        /* AUTOSAR standard types */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/** \brief CanSM_ControllerBusOff() stub
 **
 ** This is the CanSM callback function for CAN bus-off events.
 **
 ** \param[in] Controller CAN controller, which detected a bus-off event
 */
extern FUNC( void, CANSM_CODE ) CanSM_ControllerBusOff( uint8 Controller );

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* if !defined( CANSM_CBK_H ) */
/*==================[end of file]===========================================*/
