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

#ifndef OS_USER_H
#define OS_USER_H
#ifdef __cplusplus
extern "C" {
#endif

#define OS_GENERATION_ID_OS_H 0x32ff9bf2UL

#define OS_AUTOSAROS_VER__ 4

#define OS_AUTOSAROS_REV__ 2

#define OS_AUTOSAROS_CORE_BUILD__ 20101123

#define OS_AUTOSAROS_ARCH_BUILD__ 20101123

#ifndef OS_INTERRUPT_KEYWORD
#define OS_INTERRUPT_KEYWORD
#endif

#include <Os_autosar.h>
/*===================================================================
 * Alarms
 *==================================================================*/

#define AlarmIncrementRteCounter 0
#define SchM_Alarm 1
/*===================================================================
 * Application modes
 *==================================================================*/

#define OSDEFAULTAPPMODE 0
#define OsAppMode_0 1
/*===================================================================
 * Counters
 *==================================================================*/

#define OSMAXALLOWEDVALUE_HwCounter 4294967295
#define OSTICKSPERBASE_HwCounter 1000
#define OSMINCYCLE_HwCounter 1
#ifndef OS_ASM
extern void OS_CounterIsr_HwCounter(void);
#endif  /* OS_ASM */
#define OS_NsToTicks_HwCounter(x) OS_NsToTicks_TIMER0((x))
#define OS_TicksToNs_HwCounter(x) OS_TicksToNs_TIMER0((x))
#define OS_TICKS2NS_HwCounter(x) (OS_TicksToNs_TIMER0((x)))
#define OS_TICKS2US_HwCounter(x) (OS_TicksToNs_TIMER0((x))/1000)
#define OS_TICKS2MS_HwCounter(x) (OS_TicksToNs_TIMER0((x))/1000000)
#define OS_TICKS2SEC_HwCounter(x) (OS_TicksToNs_TIMER0((x))/1000000000)
#define OSMAXALLOWEDVALUE_SwCounter_1ms 4294967295
#define OSTICKSPERBASE_SwCounter_1ms 1
#define OSMINCYCLE_SwCounter_1ms 1
#define HwCounter 0
#define SwCounter_1ms 1
#define OSMAXALLOWEDVALUE OSMAXALLOWEDVALUE_HwCounter
#define OSTICKSPERBASE OSTICKSPERBASE_HwCounter
#define OSMINCYCLE OSMINCYCLE_HwCounter
#define OSTICKDURATION OS_TicksToNs_HwCounter(1)

/*===================================================================
 * Events
 *==================================================================*/

#define Rte_OSShutdownEvent  0x0001u
#define Rte_OSTriggerRunnableEvent_0_0  0x0002u
#define Rte_OSResolveWaitPointEvent_0_1  0x0004u
/*===================================================================
 * Interrupts
 *==================================================================*/

#ifndef OS_ASM
extern void OS_ISR_Can_Rx_Interrupt(void);
#endif  /* OS_ASM */
#define Can_Rx_Interrupt_ISR_CATEGORY 2
#define Can_Rx_Interrupt_ISR_VECTOR 0
#define Can_Rx_Interrupt_ISR_LEVEL 1
#ifndef OS_ASM
extern void OS_ISR_Can_Tx_Interrupt(void);
#endif  /* OS_ASM */
#define Can_Tx_Interrupt_ISR_CATEGORY 2
#define Can_Tx_Interrupt_ISR_VECTOR 1
#define Can_Tx_Interrupt_ISR_LEVEL 1
#define Os_Counter_TIMER0_ISR_CATEGORY 2
#define Os_Counter_TIMER0_ISR_VECTOR 28
#define Os_Counter_TIMER0_ISR_LEVEL 1
#define Can_Rx_Interrupt 0
#define Can_Tx_Interrupt 1

/*===================================================================
 * Resources
 *==================================================================*/

#define OS_RESSCHEDULER 0
#define Rte_Res_0 1
/*===================================================================
 * Schedule Tables
 *==================================================================*/

#define Rte_DefaultScheduleTable 0
/*===================================================================
 * Tasks
 *==================================================================*/

#define Rte_TimedTask 0
#define Init_Task 1
#define Rte_EventTask 2
#define SchM_Task 3
#define Background_Task 4

#ifdef __cplusplus
}
#endif
#endif  /* OS_USER_H */
