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


#include <TSAutosar.h>           /* EB specific standard types */

#include <Std_Types.h>           /* AUTOSAR standard types        */
#include <EcuM_Int.h>            /* EcuM private header           */
#include <EcuM_Cbk.h>            /* EcuM callback header          */

#include <Det.h>
#include <Can.h>
#include <CanIf.h>
#include <MyCanIfSetControllerMode.h>
#include <PduR.h>
#include <Com.h>
#include <MyComIpduGroupStart.h>
#include <Dbg.h>



/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#define ECUM_START_SEC_CODE
#include <MemMap.h>



FUNC(void, ECUM_CODE) EcuM_AL_DriverInitZero(void)
{
  /* *** Call service Init of module Det *** */
  Det_Init();
}





FUNC(void, ECUM_CODE) EcuM_AL_DriverInitOne
(
  P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_CONST) ConfigPtr
)
{
  TS_PARAM_UNUSED(ConfigPtr);

  /* *** Call service Init of module Can *** */
  Can_Init(&CanConfigSet_0);
}

FUNC(void, ECUM_CODE) EcuM_AL_DriverInitTwo
(
  P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_CONST) ConfigPtr
)
{
  TS_PARAM_UNUSED(ConfigPtr);

  /* *** Call service Init of module CanIf *** */
  CanIf_Init(&CanIfInitConfiguration);
  /* *** Call service Do of module MyCanIfSetControllerMode *** */
  MyCanIfSetControllerMode_Do();
  /* *** Call service Init of module PduR *** */
  PduR_Init(&PduRGlobalConfig);
  /* *** Call service Init of module Com *** */
  Com_Init(&ComConfig);
  /* *** Call service Do of module MyComIpduGroupStart *** */
  MyComIpduGroupStart_Do();
  /* *** Call service Init of module Dbg *** */
  Dbg_Init();
  /* *** Call service Init of module Can *** */
  Can_Init(&CanConfigSet_0);
}

































































#define ECUM_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
