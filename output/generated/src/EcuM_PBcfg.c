/**
 * \file
 *
 * \brief Autosar EcuM
 *
 * This file contains the implementation of the Autosar
 * module EcuM.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/

#include <os.h>

#include <Std_Types.h>    /* AUTOSAR standard types */

#include <EcuM.h>         /* EcuM public header */
#include <EcuM_Int.h>     /* EcuM private header */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[internal constants]====================================*/

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>


/*==================[internal data]=========================================*/

/*==================[external constants]====================================*/


CONST(EcuM_ConfigType, ECUM_CONST) ECUM_CONFIG_NAME =
{
  OsAppMode_0,  /* DefaultAppMode */

  ECUM_STATE_OFF, /* DefaultShutdownTarget */

  0U,  /* DefaultSleepMode */

  5U,  /* SelfRequestRunPeriod */

  5U,  /* SleepActivityPeriod */

  4U,  /* NvMWriteallTimeout */

  4U,  /* NvMReadallTimeout */

};

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>


/*==================[external data]=========================================*/

/*==================[internal function definitions]=========================*/

/*==================[external function definitions]=========================*/

/*==================[end of file]===========================================*/
