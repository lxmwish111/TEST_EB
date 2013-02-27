/**
 * \file
 *
 * \brief Autosar SchM
 *
 * This file contains the implementation of the Autosar
 * module SchM.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/
#include <os.h>              /* include Os header */
#include <TSAutosar.h>       /* EB specific standard types */
#include <Std_Types.h>       /* AUTOSAR standard types */
#include <SchM_Cfg.h>        /* Generated configuration */
#include <MyLed.h> /* main function prototypes */
#include <EcuM.h> /* main function prototypes */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/
DeclareTask(SchM_Task);

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[generated code, do not edit !]=========================*/
/* AUTOSAR Memory Mapping - start section for code */
#define SCHM_START_SEC_CODE
#include <MemMap.h>
TASK(SchM_Task)
{
  MyLed_MainFunction();
  EcuM_MainFunction();
  TerminateTask();
}
/* AUTOSAR Memory Mapping - end section for code */
#define SCHM_STOP_SEC_CODE
#include <MemMap.h>

/*==================[end of file]===========================================*/
