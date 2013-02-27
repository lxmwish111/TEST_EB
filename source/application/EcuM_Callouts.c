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

/*==================[inclusions]============================================*/

#include <Std_Types.h>         /* AUTOSAR standard types           */
#include <TSAutosar.h>         /* EB specific standard types */

#include <EcuM_Cbk.h>          /* prototypes of callouts of EcuM   */

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

/*------------------[Generic callouts]--------------------------------------*/

FUNC(void,ECUM_APPL_CODE) EcuM_ErrorHook
(
  Std_ReturnType reason
)
{
  TS_PARAM_UNUSED(reason); /* remove if parameter is used */

  /* insert your code here */
}

/*------------------[Callouts from STARTUP state]---------------------------*/

FUNC(EcuM_DeterminePbConfigurationRetType, ECUM_APPL_CODE)
  EcuM_DeterminePbConfiguration(void)
{
  /* Only the default configuration structure must be returned here as post
   * build time configuration is not yet supported. */
  return &(ECUM_CONFIG_NAME);
}


FUNC(void, ECUM_APPL_CODE) EcuM_OnRTEStartup(void)
{
  /* insert your code here */
}

/*------------------[Callouts from RUN state]-------------------------------*/

FUNC(void, ECUM_APPL_CODE) EcuM_OnEnterRun(void)
{
  /* insert your code here */
}


FUNC(void, ECUM_APPL_CODE) EcuM_OnExitRun(void)
{
  /* insert your code here */
}


FUNC(void, ECUM_APPL_CODE) EcuM_OnExitPostRun(void)
{
  /* insert your code here */
}

/*------------------[Callouts from SHUTDOWN state]--------------------------*/

FUNC(void, ECUM_APPL_CODE) EcuM_OnPrepShutdown(void)
{
  /* insert your code here */
}

FUNC(void, ECUM_APPL_CODE) EcuM_OnGoSleep(void)
{
  /* insert your code here */
}

FUNC(void, ECUM_APPL_CODE) EcuM_OnGoOffOne(void)
{
  /* insert your code here */
}

FUNC(void, ECUM_APPL_CODE) EcuM_OnGoOffTwo(void)
{
  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_EnableWakeupSources
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_GenerateRamHash(void)
{
  /* insert your code here */
}

FUNC(void, ECUM_APPL_CODE) EcuM_AL_SwitchOff(void)
{
  /* insert your code here */
}

/*------------------[Callouts from WAKEUP state]----------------------------*/

FUNC(uint8, ECUM_APPL_CODE) EcuM_CheckRamHash(void)
{
  return 1;
}

FUNC(void,ECUM_APPL_CODE) EcuM_DisableWakeupSources
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_StartWakeupSources
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_CheckValidation
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_StopWakeupSources
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

FUNC(EcuM_WakeupReactionType,ECUM_APPL_CODE) EcuM_OnWakeupReaction
(
    EcuM_WakeupReactionType wact
)
{
  /* implement your wakeup reaction conversion here */
  return wact;
}

/*------------------[Callouts from SLEEP state]-----------------------------*/

FUNC(void,ECUM_APPL_CODE) EcuM_SleepActivity(void)
{
  /* insert your code here */
}

FUNC(void,ECUM_APPL_CODE) EcuM_CheckWakeup
(
  EcuM_WakeupSourceType wakeupSource
)
{
  TS_PARAM_UNUSED(wakeupSource); /* remove if parameter is used */

  /* insert your code here */
}

/*------------------[EB callout functions]----------------------------------*/

#if (ECUM_INCLUDE_NVM == STD_ON)
FUNC(void,ECUM_APPL_CODE) EcuM_NvMReadAllHook(void)
{
  /* insert your code here */
}
#endif /* (ECUM_INCLUDE_NVM == STD_ON) */

FUNC(void,ECUM_APPL_CODE) EcuM_DemInitHook(void)
{
  /* insert your code here */
}

#if (ECUM_INCLUDE_NVM == STD_ON)
FUNC(void,ECUM_APPL_CODE) EcuM_NvMWriteAllHook(void)
{
  /* insert your code here */
}
#endif

#define ECUM_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
