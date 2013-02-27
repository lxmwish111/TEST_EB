/**
 * \file
 *
 * \brief Autosar asc_Dbg
 *
 * This file contains the implementation of the Autosar
 * module asc_Dbg.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005-2009 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined DBG_TRACE_STATE_HOOKS_H)
#define DBG_TRACE_STATE_HOOKS_H

/*==================[inclusions]============================================*/
#include <TSAutosar.h>       /* 3SOFT specific standard types           */
#include <Std_Types.h>       /* AUTOSAR standard types                  */

/*==================[macros]================================================*/

#define OS_TRACE_STATE_TASK(StateId, OldValue, NewValue) \
   OS_TASK(StateId, OldValue, NewValue)

#define OS_TASK(StateId, OldValue, NewValue) \
   if ((StateId==0)||(StateId==1)||(StateId==2)||(StateId==3)||(StateId==4)) Dbg_Trace_State(1, 0, StateId, OldValue, NewValue)

#define OS_TRACE_STATE_TASK_RTE_EVENTTASK(OldValue, NewValue) \
   OS_TASK_RTE_EVENTTASK(OldValue, NewValue)

#define OS_TASK_RTE_EVENTTASK(OldValue, NewValue) \
   Dbg_Trace_State(1, 0, 0, OldValue, NewValue)

#define OS_TRACE_STATE_TASK_INIT_TASK(OldValue, NewValue) \
   OS_TASK_INIT_TASK(OldValue, NewValue)

#define OS_TASK_INIT_TASK(OldValue, NewValue) \
   Dbg_Trace_State(1, 0, 1, OldValue, NewValue)

#define OS_TRACE_STATE_TASK_RTE_TIMEDTASK(OldValue, NewValue) \
   OS_TASK_RTE_TIMEDTASK(OldValue, NewValue)

#define OS_TASK_RTE_TIMEDTASK(OldValue, NewValue) \
   Dbg_Trace_State(1, 0, 2, OldValue, NewValue)

#define OS_TRACE_STATE_TASK_SCHM_TASK(OldValue, NewValue) \
   OS_TASK_SCHM_TASK(OldValue, NewValue)

#define OS_TASK_SCHM_TASK(OldValue, NewValue) \
   Dbg_Trace_State(1, 0, 3, OldValue, NewValue)

#define OS_TRACE_STATE_TASK_BACKGROUND_TASK(OldValue, NewValue) \
   OS_TASK_BACKGROUND_TASK(OldValue, NewValue)

#define OS_TASK_BACKGROUND_TASK(OldValue, NewValue) \
   Dbg_Trace_State(1, 0, 4, OldValue, NewValue)

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

#define DBG_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, DBG_CODE) Dbg_Trace_State(uint16 ModuleId, uint8 StateGroupId, uint8 StateId, uint8 OldValue, uint8 NewValue);

#define DBG_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#endif /* if !defined( DBG_TRACE_STATE_HOOKS_H ) */
/*==================[end of file]===========================================*/
