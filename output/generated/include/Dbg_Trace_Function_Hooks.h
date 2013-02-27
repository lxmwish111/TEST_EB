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
#if (!defined DBG_TRACE_FUNCTION_HOOKS_H)
#define DBG_TRACE_FUNCTION_HOOKS_H

/*==================[inclusions]============================================*/
#include <TSAutosar.h>       /* 3SOFT specific standard types           */
#include <Std_Types.h>       /* AUTOSAR standard types                  */

/*==================[macros]================================================*/

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_ACTIVATETASK_ENTRY(TaskId) \
   ACTIVATETASK_ENTRY(TaskId)

/* Definition of instrumentation macro. */
#define ACTIVATETASK_ENTRY(TaskId) \
   Dbg_Trace_Func(1, 0, 0, 1, TaskId, 0)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_ACTIVATETASK_EXIT() \
   ACTIVATETASK_EXIT(0)

/* Definition of instrumentation macro. */
#define ACTIVATETASK_EXIT(TaskId) \
   Dbg_Trace_Func(1, 0, 0, 2, TaskId, 0)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_SETEVENT_ENTRY(TaskId, EventMask) \
   SETEVENT_ENTRY(TaskId, EventMask)

/* Definition of instrumentation macro. */
#define SETEVENT_ENTRY(TaskId, EventMask) \
   Dbg_Trace_Func(1, 0, 8, 1, TaskId, EventMask)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_SETEVENT_EXIT() \
   SETEVENT_EXIT(0, 0)

/* Definition of instrumentation macro. */
#define SETEVENT_EXIT(TaskId, EventMask) \
   Dbg_Trace_Func(1, 0, 8, 2, TaskId, EventMask)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_CLEAREVENT_ENTRY(EventMask) \
   CLEAREVENT_ENTRY(EventMask)

/* Definition of instrumentation macro. */
#define CLEAREVENT_ENTRY(EventMask) \
   Dbg_Trace_Func(1, 0, 9, 1, EventMask, 0)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_CLEAREVENT_EXIT() \
   CLEAREVENT_EXIT(0)

/* Definition of instrumentation macro. */
#define CLEAREVENT_EXIT(EventMask) \
   Dbg_Trace_Func(1, 0, 9, 2, EventMask, 0)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_WAITEVENT_ENTRY(EventMask) \
   WAITEVENT_ENTRY(EventMask)

/* Definition of instrumentation macro. */
#define WAITEVENT_ENTRY(EventMask) \
   Dbg_Trace_Func(1, 0, 11, 1, EventMask, 0)

/* Legacy definition for compatibility to older versions. */
#define OS_TRACE_WAITEVENT_EXIT() \
   WAITEVENT_EXIT(0)

/* Definition of instrumentation macro. */
#define WAITEVENT_EXIT(EventMask) \
   Dbg_Trace_Func(1, 0, 11, 2, EventMask, 0)

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

#define DBG_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, DBG_CODE) Dbg_Trace_Func(uint16 ModuleId, uint8 GroupId, uint8 ApiId, uint8 EntryExit, uint32 Param0, uint32 Param1);

#define DBG_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#endif /* if !defined( DBG_TRACE_FUNCTION_HOOKS_H ) */
/*==================[end of file]===========================================*/
