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



/*
 *  Misra Deviations (MISRA 2004)
 *  MISRA-1) Deviated rule: [ISO 6.6.2] (required)
 *     Variable not used.
 *
 *  Reason: only empty function body has been implemented, so the
 *          function parameters are not used
 *
 */

/*==================[inclusions]============================================*/

#include <os.h>              /* include Os header */
#include <TSAutosar.h>       /* EB specific standard types */
#include <Std_Types.h>       /* AUTOSAR standard types */
#include <SchM_Mcu.h>    /* generated SchM/Mcu configuration */
#include <SchM_Internal.h>
#if( SCHM_DEV_ERROR_DETECT == STD_ON )
#include <Det.h>
#endif


/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/
#define SCHM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>


#define SCHM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>
/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/


/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[generated code, do not edit !]=========================*/




/* AUTOSAR Memory Mapping - start section for code */
#define SCHM_START_SEC_CODE
#include <MemMap.h>

/**
 ** \brief This function is called by the Mcu module to enter a critical
 ** section
 **
 **
 ** \param[in]  InstanceId ID of the Mcu module
 ** \param[in]  ExclusiveArea identifier of the exclusive area
 **
 **/
FUNC(void,SCHM_CODE) SchM_Enter_Mcu
(
  uint8 ExclusiveArea
)
{

    
    switch (ExclusiveArea)
    {

      
      
      
      case SCHM_MCU_EXCLUSIVE_AREA:
      
      
      
      SuspendAllInterrupts();
      
      
      
      
      
      break;
      
      default:
      /* no error handling in SchM */
      break;

    
    }

}

/**
 ** \brief This function is called by the Mcu module to leave a critical
 ** section
 **
 **
 ** \param[in]  InstanceId ID of the Mcu module
 ** \param[in]  ExclusiveArea identifier of the exclusive area
 **
 **/
FUNC(void,SCHM_CODE) SchM_Exit_Mcu
(
  uint8 ExclusiveArea
)
{

    
    switch (ExclusiveArea)
    {

      
      
      
      case SCHM_MCU_EXCLUSIVE_AREA:
      
      
      
      ResumeAllInterrupts();
      
      
      
      
      
      break;
      
      default:
      /* no error handling in SchM */
      break;

    
    }

}

/**
 ** \brief This function is called by the Mcu module to trigger a
 ** main function
 **
 **
 ** \param[in]  InstanceId ID of the Mcu module
 ** \param[in]  Id of the activation point
 **
 **/
FUNC(SchM_ReturnType, SCHM_CODE) SchM_ActMainFunction_Mcu
(
  uint8 ActivationPoint
)
{
  SchM_ReturnType RetVal = SCHM_E_NOFUNC;


  TS_PARAM_UNUSED(ActivationPoint);

  return RetVal;
}

/**
 ** \brief This function is called by the Mcu module to cancel the
 ** activation of a main function
 **
 **
 ** \param[in]  InstanceId ID of the Mcu module
 ** \param[in]  Id of the activation point
 **
 **/
FUNC(SchM_ReturnType, SCHM_CODE) SchM_CancelMainFunction_Mcu
(
  uint8 ActivationPoint
)
{
  SchM_ReturnType RetVal = SCHM_E_NOFUNC;



  TS_PARAM_UNUSED(ActivationPoint);

  return RetVal;
}
/* AUTOSAR Memory Mapping - end section for code */
#define SCHM_STOP_SEC_CODE
#include <MemMap.h>
/*==================[end of file]===========================================*/
