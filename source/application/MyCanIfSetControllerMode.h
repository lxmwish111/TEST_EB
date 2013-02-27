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

#ifndef MY_CANIF_SET_CONTROLLER_MODE
#define MY_CANIF_SET_CONTROLLER_MODE 0

#include <TSAutosar.h>

#define CANIF_START_SEC_APPL_CODE
#include <MemMap.h>
extern FUNC(void,CANIF_APPL_CODE) MyCanIfSetControllerMode_Do(void);
#define CANIF_STOP_SEC_APPL_CODE
#include <MemMap.h>

#endif