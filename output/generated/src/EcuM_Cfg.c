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

#include <os.h>           /* OS API                            */

#include <Std_Types.h>    /* AUTOSAR standard types            */

#include <Mcu.h>          /* MCU module types                  */
#include <EcuM_Int.h>     /* EcuM private header               */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

#define ECUM_START_SEC_CONST_16BIT
#include <MemMap.h>

/* timeout for wakeup source */
CONST(uint16, ECUM_CONST) EcuM_WksValTimeout[ECUM_WKSCONFIGNUM] =
{
  0U, /* Timeout for wakeup source ECUM_WKSOURCE_POWER */
  0U, /* Timeout for wakeup source ECUM_WKSOURCE_RESET */
  0U, /* Timeout for wakeup source ECUM_WKSOURCE_INTERNAL_RESET */
  0U, /* Timeout for wakeup source ECUM_WKSOURCE_INTERNAL_WDG */
  0U, /* Timeout for wakeup source ECUM_WKSOURCE_EXTERNAL_WDG */
};

#define ECUM_STOP_SEC_CONST_16BIT
#include <MemMap.h>

#define ECUM_START_SEC_CONST_32BIT
#include <MemMap.h>

/*------------------[Reset Reasons]-----------------------------------------*/

/* List of all Reset Reasons */
STATIC CONST(uint32, ECUM_CONST) EcuM_ResetReasonList[] =
{
  0UL, /* Reset Reason for ECUM_WKSOURCE_POWER */
  4294967295UL, /* Reset Reason for ECUM_WKSOURCE_RESET */
  4294967295UL, /* Reset Reason for ECUM_WKSOURCE_INTERNAL_RESET */
  2UL, /* Reset Reason for ECUM_WKSOURCE_INTERNAL_WDG */
  4294967295UL, /* Reset Reason for ECUM_WKSOURCE_EXTERNAL_WDG */
};

#define ECUM_STOP_SEC_CONST_32BIT
#include <MemMap.h>

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/*------------------[OS Application modes]----------------------------------*/

CONST(AppModeType, ECUM_CONST) EcuM_AppModeList[ECUM_APPMODENUM] =
{
  OsAppMode_0,
};

/*------------------[Wakeup Sources]----------------------------------------*/

/* configurations of Wakeup Sources */
CONST(EcuM_WksConfigType, ECUM_CONST) EcuM_WksConfigList[ECUM_WKSCONFIGNUM] =
{
  /* ECUM_WKSOURCE_POWER */
  {ECUM_NO_COMM_CH,     &EcuM_ResetReasonList[0], 1U  },
  /* ECUM_WKSOURCE_RESET */
  {ECUM_NO_COMM_CH,     &EcuM_ResetReasonList[1], 1U  },
  /* ECUM_WKSOURCE_INTERNAL_RESET */
  {ECUM_NO_COMM_CH,     &EcuM_ResetReasonList[2], 1U  },
  /* ECUM_WKSOURCE_INTERNAL_WDG */
  {ECUM_NO_COMM_CH,     &EcuM_ResetReasonList[3], 1U  },
  /* ECUM_WKSOURCE_EXTERNAL_WDG */
  {ECUM_NO_COMM_CH,     &EcuM_ResetReasonList[4], 1U  },
};

/*------------------[Sleep Modes]-------------------------------------------*/
CONST(EcuM_SleepModeConfigType, ECUM_CONST) EcuM_SleepModeConfigList[ECUM_SLEEPMODECONFIGNUM] =
{
  { /* Sleep mode: ECUM_SLEEPMODE_0, ID: 0 */
    0U, /* Mcu Mode */
FALSE, /* Suspend flag */
    0x1fU /* Wakeup Mask */
  },
};

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
