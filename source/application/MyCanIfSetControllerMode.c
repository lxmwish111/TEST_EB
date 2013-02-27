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
#include <CanIf.h>
#include <MyCanIfSetControllerMode.h>

#define CANIF_START_SEC_APPL_CODE
#include <MemMap.h>
FUNC(void,CANIF_APPL_CODE) MyCanIfSetControllerMode_Do(void)
{
   CanIf_SetControllerMode(0,CANIF_CS_STARTED);
}
#define CANIF_STOP_SEC_APPL_CODE
#include <MemMap.h>
