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

#include <TSAutosar.h>
#include <Com.h>
#include <MyComIpduGroupStart.h>

#define COM_START_SEC_APPL_CODE
#include <MemMap.h>
FUNC(void,COM_APPL_CODE) MyComIpduGroupStart_Do(void)
{
   Com_IpduGroupStart(TGCanNetwork, FALSE);
   Com_IpduGroupStart(RGCanNetwork, FALSE);
}
#define COM_STOP_SEC_APPL_CODE
#include <MemMap.h>
