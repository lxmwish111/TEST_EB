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

#include "Rte_SWC_ModifyEcho.h"

/*------------------------[runnable entity skeletons]------------------------*/
#define RTE_START_SEC_APPL_CODE
#include "MemMap.h"

FUNC(void, RTE_APPL_CODE) SWC_ModifyEcho_R_ModifyEcho(void)
{
  UInt8 EchoValue;
  UInt8 InputValue;

  /* Get InputValue from CAN */
  Rte_Read_P_NewCounterIn_CounterValue(&InputValue);

  /* this was an additional request that will be handled otherwise */
  if( (InputValue >= 0xF0) && (InputValue <= 0xFF) )
  {
     Rte_Send_P_SpecialRequest_EventMessage(InputValue);
  }
  /* calc output value using Server function */
  Rte_Call_CS_EchoResult_SetCounterAndAdd(InputValue,&EchoValue);

  /* write output */
  Rte_IWrite_R_ModifyEcho_P_EchoOut_CounterValue(EchoValue);
}

#define RTE_STOP_SEC_APPL_CODE
#include "MemMap.h"
