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

#include "Rte_SWC_CyclicCounter.h"
#include "Det.h"
#include <stdio.h>

/*------------------------[runnable entities]--------------------------------*/

FUNC(void, RTE_APPL_CODE) SWC_cyclic_R_Cyclic(void)
{
  volatile UInt8 CounterValue;
  volatile UInt8 specialReceiveCommands[10] = { 0 };
  uint8 i;
  /* Read counter value from inter-runnable variable */
  CounterValue = Rte_IrvRead_R_Cyclic_CurrentCounterValue();

  /* get all special commands received since last run */
  i=0;
  while(Rte_Receive_P_SpecialHandling_EventMessage((UInt8*)&specialReceiveCommands[0]) == E_OK)
  {
    /* save all reuests in an temp array, can be used for later processing */
    specialReceiveCommands[sizeof(specialReceiveCommands)-i]=specialReceiveCommands[0];
    if(i>=sizeof(specialReceiveCommands)) break;

    /* If a special command was received, generate pseudo det error */
    if (specialReceiveCommands[i] == 0xf1)
    {
      Det_ReportError(0xaa55,1,2,3);
    }
    i++;
  }

  /* Write incremented counter value to inter-runnable variable */
  Rte_IrvWrite_R_Cyclic_CurrentCounterValue(CounterValue+1);

  /* Print counter value to standard out */
  printf("Counter: %d\n", CounterValue);

  /* Write current counter value */
  Rte_Write_P_CounterOut_CounterValue(CounterValue);
}


FUNC(void, RTE_APPL_CODE) SWC_cyclic_R_SetCounter(UInt8 newCounterValue, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) ReturnSum)
{
    UInt8 currentCounter;
    /* read actual cyclic counter value */
    currentCounter = Rte_IrvRead_R_SetCounterAndAdd_CurrentCounterValue();

    /* replace the current counter value with new */
    Rte_IrvWrite_R_SetCounterAndAdd_CurrentCounterValue(newCounterValue);

    /* return the sum */
    *ReturnSum = currentCounter+newCounterValue;
}
/*------------------------[Mode API]-----------------------------------------*/

/*------------------------[port handle API]----------------------------------*/

/*------------------------[per instance memory API]--------------------------*/

/** @} doxygen end group definition */
/*==================[end of file]============================================*/

