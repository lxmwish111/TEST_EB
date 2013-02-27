/* This file is generated automatically. DO NOT EDIT!!
 * 
 * EB tresos AutoCore OS 4.2.5 WINDOWS/WIN32X86
 * (Build 20101123)
 * 
 * (c) 1998-2013 Elektrobit Automotive GmbH
 * Am Wolfmantel 46
 * 91058 Erlangen
 * GERMANY
 * 
 * http://www.automotive.elektrobit.com
 * 
 * Host-System  : Windows Vista
 * Date         : 2/27/13 10:02 AM           !!!IGNORE-LINE!!!
 */

#ifndef OS_CONFIG_H
#define OS_CONFIG_H
#ifdef __cplusplus
extern "C" {
#endif

#include <Os.h>
#include <WINDOWS/Os_Windows_timer.h>

#define OS_GENERATION_ID_OS_CONF_H 0x32ff9bf2UL

#define OS_AUTOSAROS_VER__ 4

#define OS_AUTOSAROS_REV__ 2

#define OS_AUTOSAROS_CORE_BUILD__ 20101123

#define OS_AUTOSAROS_ARCH_BUILD__ 20101123

#ifndef OS_ASM
extern const os_uint32_t OS_os_GenBuildId;
#endif  /* OS_ASM */
/*===================================================================
 * Alarms
 *==================================================================*/

#define OS_NALARMS 2
#define OS_FIRSTINTERNALALARM 3
#define OS_NINTERNALALARMS 0
#define OS_NALARMCALLBACKS 0
#define OS_Rte_DefaultScheduleTable 2
#define OS_ALARM OS_ALARM_INIT(    /* AlarmIncrementRteCounter */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  OS_WrapIncrementCounter,  /* Counter wrapper */  \
  0,  /* Not used */  \
  SwCounter_1ms,  /* Incremented counter */  \
  HwCounter  /* Alarm counter */  \
),  \
OS_ALARM_INIT(    /* SchM_Alarm */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  OS_WrapActivateTask,  /* Task wrapper */  \
  0,  /* Not used */  \
  SchM_Task,  /* Activated task */  \
  SwCounter_1ms  /* Alarm counter */  \
),  \
OS_ALARM_INIT(    /* OS_Rte_DefaultScheduleTable */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  OS_WrapRunSchedule,  /* Schedule table wrapper */  \
  0,  /* Not used */  \
  Rte_DefaultScheduleTable,  /* Schedule table */  \
  SwCounter_1ms  /* Alarm counter */  \
)

/*===================================================================
 * Application modes
 *==================================================================*/

#define OS_NSTARTMODES 2
#define OS_AUTOSTARTTASKS   OS_NULLTASK,  \
  Init_Task,  \
  OS_NULLTASK
#define OS_STARTMODETASKS   0,  1
#define OS_AUTOSTARTALARMS     {  \
      OS_NULLALARM,  \
      OS_STARTMETHOD_REL,  \
      0,  \
      0  \
    },  \
    {  \
      AlarmIncrementRteCounter,  \
      OS_STARTMETHOD_REL,  \
      10,  \
      10  \
    },  \
    {  \
      SchM_Alarm,  \
      OS_STARTMETHOD_REL,  \
      1,  \
      1  \
    },  \
    {  \
      OS_NULLALARM,  \
      OS_STARTMETHOD_REL,  \
      0,  \
      0  \
    }
#define OS_STARTMODEALARMS   0,  1

/*===================================================================
 * Applications
 *==================================================================*/

#define OS_NAPPS 0
#define OS_NAPPSNONPRIV 0
#define OS_NFUNCTIONS 0
#define OS_SHOOKSTACKLEN 0
#define OS_EHOOKSTACKLEN 0

/*===================================================================
 * Configured Modes
 *==================================================================*/

#define OS_CONFIGMODE (OS_ECC1|OS_SCHEDMIX|OS_EXTENDED|OS_DBGPROT_FULL)
#define OS_IECMODE (OS_IEC_AUTOSAR)
#define OS_HOOKSELECTION (OS_ACTION_PROTECTIONHOOK|OS_ACTION_ERRORHOOK)
#define OS_PERMITTEDCONTEXT (OS_permittedContextAutosar)

/*===================================================================
 * Counters
 *==================================================================*/

#define OS_NCOUNTERS 2
#define OS_NGPTTICKERS 0
#define OS_COUNTER OS_COUNTER_INIT(    /* HwCounter */  \
  NULL,  /* Application */  \
  OS_HwCounterUpdate,  \
  0x0U,  /* Permissions */  \
  &OS_hwTimer[0],  /* Hardware timer */  \
  (os_tick_t)4294967295U,  /* Max allowed value */  \
  (os_tick_t)1000U,  /* Ticks per base */  \
  (os_tick_t)1U  /* Min cycle */  \
),  \
OS_COUNTER_INIT(    /* SwCounter_1ms */  \
  NULL,  /* Application */  \
  NULL,  \
  0x0U,  /* Permissions */  \
  NULL,  /* Hardware timer */  \
  (os_tick_t)4294967295U,  /* Max allowed value */  \
  (os_tick_t)1U,  /* Ticks per base */  \
  (os_tick_t)1U  /* Min cycle */  \
)
#define OS_NINTERNALTICKERS 0

/*===================================================================
 * Events
 *==================================================================*/

#define OS_NEVENTS 3
/*===================================================================
 * Hardware Timers
 *==================================================================*/

#define OS_NHWTIMERS 1
#define OS_HWTIMER {    /* TIMER0 */  \
  &OS_frcDriver,  /* Driver table */  \
  &OS_hwtLastValue[0],  \
  3221225472U,  /* Max delta */  \
  2147483648U,  /* Default delta if max exceeded */  \
  4294967295U,  /* Wrap mask */  \
  0U,  /* Driver number */  \
  0U  /* Driver channel */  \
}

/*===================================================================
 * Hook Functions
 *==================================================================*/

#define OS_ERRORHOOK ErrorHook
/*===================================================================
 * Interrupts
 *==================================================================*/

#define OS_IRQ00_NAME _OS_VECTOR_INTUSER01
#define OS_IRQ00_ISRID Can_Rx_Interrupt
#define OS_IRQ00_ENTRY OS_Cat2Handler
#define OS_IRQ00_TYPE OS_VECTOR_TYPE_CAT2
#define OS_IRQ01_NAME _OS_VECTOR_INTUSER02
#define OS_IRQ01_ISRID Can_Tx_Interrupt
#define OS_IRQ01_ENTRY OS_Cat2Handler
#define OS_IRQ01_TYPE OS_VECTOR_TYPE_CAT2
#define OS_IRQ1c_NAME _OS_VECTOR_TIMER0
#define OS_IRQ1c_ISRID Os_Counter_TIMER0
#define OS_IRQ1c_ENTRY OS_Cat2Handler
#define OS_IRQ1c_TYPE OS_VECTOR_TYPE_CAT2
#define OS_NINTERRUPTS 3
#define OS_NCAT1_INTERRUPTS 0
#define OS_NCAT2_INTERRUPTS 3
#define OS_NCATK_INTERRUPTS 0
#define OS_NCAT2K_INTERRUPTS 0
#define OS_NISRSEXECTIMELIMIT 0
#define OS_NISRSINTLOCKLIMIT 0
#define OS_NISRSRESLOCKLIMIT 0
#define OS_NISRACCOUNTING 0
#define OS_CAT1LOCK 1
#define OS_CAT2LOCK 1
#define OS_KERNLOCK 1
#define Os_Counter_TIMER0 2
#define OS_ISRCONFIG OS_ISRCONFIG_INIT(    /* Can_Rx_Interrupt */  \
  NULL,  /* Application */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  OS_ISR_Can_Rx_Interrupt,  /* Interrupt entry */  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  27560U,  /* Stack size */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  Can_Rx_Interrupt,  /* Isr id */  \
  (OS_ISRF_CAT2|OS_ISRF_ENABLE),  /* Flags */  \
    OS_ARCHISR_INIT(  \
      1  /* Run priority */  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* Can_Tx_Interrupt */  \
  NULL,  /* Application */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  OS_ISR_Can_Tx_Interrupt,  /* Interrupt entry */  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  27560U,  /* Stack size */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  Can_Tx_Interrupt,  /* Isr id */  \
  (OS_ISRF_CAT2|OS_ISRF_ENABLE),  /* Flags */  \
    OS_ARCHISR_INIT(  \
      1  /* Run priority */  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* Os_Counter_TIMER0 */  \
  NULL,  /* Application */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  OS_CounterIsr_HwCounter,  /* Interrupt entry */  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  45000U,  /* Stack size */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  Os_Counter_TIMER0,  /* Isr id */  \
  (OS_ISRF_CAT2),  /* Flags */  \
    OS_ARCHISR_INIT(  \
      1  /* Run priority */  \
    )  \
)
#define OS_ISTACKBASE OS_kernStack
#define OS_ISTACKLEN 115000

/*===================================================================
 * Optimization
 *==================================================================*/

#define OS_CAT1_DIRECTCALL 0
/*===================================================================
 * Rate Monitor
 *==================================================================*/

#define OS_NRATEMONS 0
/*===================================================================
 * Resource Lock Timing
 *==================================================================*/

#define OS_NRESLOCKTIMES 0
/*===================================================================
 * Resources
 *==================================================================*/

#define OS_NRESOURCES 2
#define OS_RESOURCES OS_RESOURCES_INIT(    /* OS_RESSCHEDULER */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  6  /* Priority */  \
),  \
OS_RESOURCES_INIT(    /* Rte_Res_0 */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  4  /* Priority */  \
)

/*===================================================================
 * Schedule Tables
 *==================================================================*/

#define OS_NSCHEDULES 1
#define OS_NSCHEDULESSYNC 0
#define OS_STCONFIG OS_STCONFIG_INIT(    /* Rte_DefaultScheduleTable */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
  &OS_stEntries[0],  /* Schedule table entries */  \
  10,  /* Duration */  \
  0,  /* Cut off */  \
  0,  /* Precision */  \
  2,  /* Alarm index */  \
  1,  /* Number of expiry points */  \
  (OS_ST_REPEATING)  /* Flags */  \
)
#define OS_NSTENTRIES 1
#define OS_STENTRIES     /* EP_0 */  \
    {  \
      0,  /* Offset */  \
      0,  /* Max advance */  \
      0,  /* Max retard */  \
      0,  /* Not used */  \
      Rte_TimedTask  /* Task */  \
    }

/*===================================================================
 * Stacks
 *==================================================================*/

#ifndef OS_ASM
extern os_stackelement_t OS_taskStack_slot0[22620];
#endif  /* OS_ASM */
#ifndef OS_ASM
extern os_stackelement_t OS_taskStack_slot1[22620];
#endif  /* OS_ASM */
#ifndef OS_ASM
extern os_stackelement_t OS_taskStack_slot2[22620];
#endif  /* OS_ASM */
#ifndef OS_ASM
extern os_stackelement_t OS_taskStack_slot3[22620];
#endif  /* OS_ASM */
#ifndef OS_ASM
extern os_stackelement_t OS_taskStack_slot4[17620];
#endif  /* OS_ASM */
#ifndef OS_ASM
extern os_stackelement_t OS_kernStack[28750];
#endif  /* OS_ASM */

/*===================================================================
 * Tasks
 *==================================================================*/

#ifndef OS_ASM
DeclareTask(Rte_TimedTask);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(Init_Task);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(Rte_EventTask);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(SchM_Task);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(Background_Task);
#endif  /* OS_ASM */
#define OS_NTASKS 5
#define OS_NETASKS 1
#define OS_NTASKSEXECTIMELIMIT 0
#define OS_NTASKSINTLOCKLIMIT 0
#define OS_NTASKSRESLOCKLIMIT 0
#define OS_NPRIORITIES 7
#define OS_MAXTASKPRIO 6
#define OS_NPRIORITYQUEUEDYNAMICS 0
#define OS_NPRIORITYSLOTS 7
#define OS_PRIORITYQUEUE {    /* Priority 0 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[0U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x2000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 1 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[1U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x4000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 2 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[2U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x8000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 3 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[3U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x10000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 4 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[4U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x20000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 5 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[5U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x40000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
},  \
{    /* Priority 6 */  \
  NULL,  /* Prio queue dynamic data */  \
  &OS_prioritySlot[6U],  \
  &OS_slavePrioWord[0U],  /* Priority slave word */  \
  0x80000000U,  /* Priority slave bit */  \
  0x80000000U,  /* Priority master bit */  \
  1U  /* Number of priority queue entries */  \
}
#define OS_NTASKACCOUNTING 0
#define OS_NTASKACTIVATIONS 5
#define OS_TASKCONFIG OS_TASKCONFIG_INIT(    /* Rte_TimedTask */  \
  &OS_taskDynamic[0],  /* Dynamic task structure */  \
  3U,  /* Run priority */  \
  3U,  /* Queuing priority */  \
  1,  /* Activation index */  \
  OS_TASK_Rte_TimedTask,  /* Task entry */  \
  &OS_taskStack_slot0[0U],  /* Stack base */  \
  90480U,  /* Stack size */  \
  0U,  /* Max. activations */  \
  0,  /* Flags */  \
  Rte_TimedTask,  /* Task ID */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
    OS_ARCHTASK_INIT(  \
      0  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* Init_Task */  \
  &OS_taskDynamic[1],  /* Dynamic task structure */  \
  6U,  /* Run priority */  \
  1U,  /* Queuing priority */  \
  2,  /* Activation index */  \
  OS_TASK_Init_Task,  /* Task entry */  \
  &OS_taskStack_slot4[0U],  /* Stack base */  \
  70480U,  /* Stack size */  \
  0U,  /* Max. activations */  \
  (OS_TF_NONPREEMPT),  /* Flags */  \
  Init_Task,  /* Task ID */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
    OS_ARCHTASK_INIT(  \
      0  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* Rte_EventTask */  \
  &OS_taskDynamic[2],  /* Dynamic task structure */  \
  2U,  /* Run priority */  \
  2U,  /* Queuing priority */  \
  3,  /* Activation index */  \
  OS_TASK_Rte_EventTask,  /* Task entry */  \
  &OS_taskStack_slot1[0U],  /* Stack base */  \
  90480U,  /* Stack size */  \
  0U,  /* Max. activations */  \
  (OS_TF_EXTENDED),  /* Flags */  \
  Rte_EventTask,  /* Task ID */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
    OS_ARCHTASK_INIT(  \
      0  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* SchM_Task */  \
  &OS_taskDynamic[3],  /* Dynamic task structure */  \
  5U,  /* Run priority */  \
  5U,  /* Queuing priority */  \
  4,  /* Activation index */  \
  OS_TASK_SchM_Task,  /* Task entry */  \
  &OS_taskStack_slot2[0U],  /* Stack base */  \
  90480U,  /* Stack size */  \
  0U,  /* Max. activations */  \
  0,  /* Flags */  \
  SchM_Task,  /* Task ID */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
    OS_ARCHTASK_INIT(  \
      0  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* Background_Task */  \
  &OS_taskDynamic[4],  /* Dynamic task structure */  \
  0U,  /* Run priority */  \
  0U,  /* Queuing priority */  \
  5,  /* Activation index */  \
  OS_TASK_Background_Task,  /* Task entry */  \
  &OS_taskStack_slot3[0U],  /* Stack base */  \
  90480U,  /* Stack size */  \
  0U,  /* Max. activations */  \
  0,  /* Flags */  \
  Background_Task,  /* Task ID */  \
  NULL,  /* Accounting structure */  \
  NULL,  \
  NULL,  \
  NULL,  \
  NULL,  \
  0U,  /* Execution budget */  \
  0U,  /* Os interrupt lock budget */  \
  0U,  /* All interrupt lock budget */  \
  NULL,  /* Resource lock budget */  \
  OS_NULLRATEMONITOR,  /* Rate monitor */  \
  NULL,  /* Application */  \
  0x0U,  /* Permissions */  \
    OS_ARCHTASK_INIT(  \
      0  \
    )  \
)
#define OS_TASKACTIVATIONS   &OS_taskTable[Rte_TimedTask],  \
  &OS_taskTable[Init_Task],  \
  &OS_taskTable[Rte_EventTask],  \
  &OS_taskTable[SchM_Task],  \
  &OS_taskTable[Background_Task]

#ifdef __cplusplus
}
#endif
#endif  /* OS_CONFIG_H */
