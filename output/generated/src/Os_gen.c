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

#include <Os_config.h>
#include <Os_kernel.h>
#include <Os_tool.h>

#if OS_GENERATION_ID_OS_H!=0x32ff9bf2UL
#error "Build-Ids of src\Os_gen.c and include\Os_user.h did not match! Hint: A wrong include\Os_user.h was most probably included."
#endif
#if OS_GENERATION_ID_OS_CONF_H!=0x32ff9bf2UL
#error "Build-Ids of src\Os_gen.c and include\Os_config.h did not match! Hint: A wrong include\Os_config.h was most probably included."
#endif

const os_uint32_t OS_os_GenBuildId = 0x32ff9bf2UL;

/*===================================================================
 * Counters
 *==================================================================*/

void OS_CounterIsr_HwCounter(void)
{
  OS_HwCounterUpdate(&OS_counter[HwCounter], &OS_counterDynamic[HwCounter]);
}

/*===================================================================
 * Stacks
 *==================================================================*/

os_stackelement_t OS_taskStack_slot0[22620];
os_stackelement_t OS_taskStack_slot1[22620];
os_stackelement_t OS_taskStack_slot2[22620];
os_stackelement_t OS_taskStack_slot3[22620];
os_stackelement_t OS_taskStack_slot4[17620];
os_stackelement_t OS_kernStack[28750];

