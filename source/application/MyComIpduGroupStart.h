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

#ifndef MY_COM_IPDU_GROUP_START
#define MY_COM_IPDU_GROUP_START 0

#include <TSAutosar.h>

#define COM_START_SEC_APPL_CODE
#include <MemMap.h>
extern FUNC(void,COM_APPL_CODE) MyComIpduGroupStart_Do(void);
#define COM_STOP_SEC_APPL_CODE
#include <MemMap.h>

#endif
