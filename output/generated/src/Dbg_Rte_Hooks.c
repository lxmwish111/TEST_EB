  
/** \file
 ** \brief AUTOSAR Dbg
 **
 ** This file contains the all configuration declarations for
 ** the AUTOSAR module Dbg that are target independent.
 **
 ** \project AutoCore - AUTOSAR Standard Core
 ** \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 **
 ** $Id$
 ** Release: $3SOFT_DELIVERY_VERSION_INFORMATION$
 **
 ** \controller <Microcontroller, Family, Derivative, Stepping>
 ** \compiler <Supported Compiler and Version>
 ** \hardware <Supported Hardware, e.g. external EEPROM>
 **
 ** Copyright 2005,2006 by Elektrobit Automotive GmbH
 ** All rights exclusively reserved for Elektrobit Automotive GmbH,
 ** unless expressly agreed to otherwise */

/** \addtogroup Dbg
 ** @{ */

#include <Dbg.h>
#include <Dbg_Cfg_Internal.h>
#if (DBG_TRACE_RTE_VFB==STD_ON) || (DBG_TRACE_RTE_CALL==STD_ON) || (DBG_TRACE_RUNNABLE==STD_ON)
#include <Rte_Type.h>
#include <Rte_Hook.h>
#endif
FUNC(void,RTE_APPL_CODE) Rte_CallHook_SWC_ModifyEcho_CS_EchoResult_SetCounterAndAdd_Start
(
  UInt8 newCounterValue,
P2VAR(UInt8,AUTOMATIC,RTE_APPL_DATA) ReturnSum
)
{  
  TS_PARAM_UNUSED(newCounterValue);
TS_PARAM_UNUSED(ReturnSum);
  Dbg_TraceRTECall(2,0,4,1);
}	
FUNC(void,RTE_APPL_CODE) Rte_ReadHook_SWC_ModifyEcho_P_NewCounterIn_CounterValue_Return
(
  P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) value
)
{  
  TS_PARAM_UNUSED(value);
  Dbg_InternalRTEVfbSignalReceive(2,0,5,1,*value);
}	
FUNC(void,RTE_APPL_CODE) Rte_ReceiveHook_SWC_CyclicCounter_P_SpecialHandling_EventMessage_Return
(
  P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) value
)
{  
  TS_PARAM_UNUSED(value);
  Dbg_InternalRTEVfbSignalReceive(1,0,3,2,*value);
}	
FUNC(void,RTE_APPL_CODE) Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_CounterValue_Start
(
  UInt8 value
)
{  
  TS_PARAM_UNUSED(value);
  Dbg_InternalRTEVfbSignalSend(2,0,6,1,value);
}	
FUNC(void,RTE_APPL_CODE) Rte_SendHook_SWC_ModifyEcho_P_SpecialRequest_EventMessage_Start
(
  UInt8 value
)
{  
  TS_PARAM_UNUSED(value);
  Dbg_InternalRTEVfbSignalSend(2,0,7,2,value);
}	
FUNC(void,RTE_APPL_CODE) Rte_WriteHook_SWC_CyclicCounter_P_CounterOut_CounterValue_Start
(
  UInt8 value
)
{  
  TS_PARAM_UNUSED(value);
  Dbg_InternalRTEVfbSignalSend(1,0,2,1,value);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_ModifyEcho_R_ModifyEcho_Start
(
  void 
)
{  
  
  Dbg_TraceRunnableStart(2,0,3);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_CyclicCounter_R_SetCounterAndAdd_Start
(
  void 
)
{  
  
  Dbg_TraceRunnableStart(1,0,1);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_CyclicCounter_R_Cyclic_Start
(
  void 
)
{  
  
  Dbg_TraceRunnableStart(1,0,2);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_ModifyEcho_R_ModifyEcho_Return
(
  void 
)
{  
  
  Dbg_TraceRunnableTerminate(2,0,3);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_CyclicCounter_R_SetCounterAndAdd_Return
(
  void 
)
{  
  
  Dbg_TraceRunnableTerminate(1,0,1);
}	
FUNC(void,RTE_APPL_CODE) Rte_Runnable_SWC_CyclicCounter_R_Cyclic_Return
(
  void 
)
{  
  
  Dbg_TraceRunnableTerminate(1,0,2);
}	

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
