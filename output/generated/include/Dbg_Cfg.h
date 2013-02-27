/**
 * \file
 *
 * \brief Autosar Dbg
 *
 * This file contains the implementation of the Autosar
 * module Dbg.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined DBG_CFG_H)
#define DBG_CFG_H

/*==================[includes]==============================================*/

#include <TSAutosar.h>              /* EB specific standard types */
#include <Std_Types.h>             /* AUTOSAR standard types (ON/OFF) */

/*==================[version check]=========================================*/
#define DBG_GEN_MODULE_ID           332U
#define DBG_GEN_VENDOR_ID           1U
#define DBG_GEN_AR_MAJOR_VERSION    1U
#define DBG_GEN_AR_MINOR_VERSION    0U
#define DBG_GEN_AR_PATCH_VERSION    0U
#define DBG_GEN_SW_MAJOR_VERSION    2U
#define DBG_GEN_SW_MINOR_VERSION    0U
#define DBG_GEN_SW_PATCH_VERSION    1U

/*==================[macros]================================================*/

#define DBG_GET_VERSION_INFO_API             STD_ON

#define DBG_DEV_ERROR_DETECT             STD_ON

#define DBG_VALUE_TRACING                STD_ON

#define DBG_TRACE_OS                         STD_ON
#define DBG_TRACE_DET                        STD_ON
#define DBG_TRACE_RTE_CALL                   STD_ON
#define DBG_TRACE_RTE_VFB                    STD_ON
#define DBG_TRACE_RTE_COM                    STD_OFF
#define DBG_TRACE_RTE_COM_SIGNAL             STD_OFF
#define DBG_TRACE_RUNNABLE                   STD_ON
#define DBG_TRACE_TIMESTAMP                  STD_OFF
#define DBG_TRACE_FUNC                       STD_OFF
#define DBG_TRACE_GENERIC_FUNC               STD_ON
#define DBG_TRACE_GENERIC_STATE              STD_ON

/* buffer configured ??? */
#define DBG_CFG_BUFFER                       STD_ON
/* size of ring buffer in bytes */
#define DBG_SIZE_OF_RING_BUFFER              1000U


/* - handle timestamp implemetation.
 * - says nothing about enable/disable at runtime, this will be done via
 *   defaultState, initState of Cfg_Internal
 */
#define DBG_CFG_TIMESTAMP                    STD_ON
#define DBG_TIMESTAMP_VIA_OS_TIMESTAMP       STD_ON
#define DBG_TIMESTAMP_VIA_OS                 STD_OFF
#define DBG_TIMESTAMP_VIA_GPT                STD_OFF
#define DBG_TIMESTAMP_EMU                    STD_OFF
#define DBG_TIMESTAMP_CHANNEL                


#define DBG_LAUTERBACH_TARGET_SUPPORT           STD_OFF
#define DBG_LAUTERBACH_DIRECT_SUPPORT           STD_OFF

#define DBG_COM_VIA_TP_PDUR                     STD_ON


#define DBG_PROCESSID_SUPPORT                   STD_OFF

/*******************[static DID name references]*****************************/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* if !defined( DBG_CFG_H ) */
/*==================[end of file]===========================================*/
