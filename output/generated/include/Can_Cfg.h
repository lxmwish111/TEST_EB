/**
 * \file
 *
 * \brief Autosar Can
 *
 * This file contains the implementation of the Autosar
 * module Can.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined CAN_CFG_H)
#define CAN_CFG_H
/*==================[inclusions]============================================*/

#include <Std_Types.h>

/*==================[macros]================================================*/

/** \brief CAN event processing via interrupts */
#define CAN_MODE_INTERRUPT        0U

/** \brief CAN event processing via polling (MainFunctions) */
#define CAN_MODE_POLLING          1U

/** \brief CAN Buffer mode "Keep oldest" */
#define CAN_BUFFER_KEEP_OLDEST    0U

/** \brief CAN Buffer mode "Keep newest" */
#define CAN_BUFFER_KEEP_NEWEST    1U

/*---------------[generated code begins here]-------------------------------*/

/** \brief Configuration parameter CanControllerId - mapping parameter name <-> id */
#define CanController0                 0U

/** \brief Name of CanConfigSet */
#define CAN_CONFIG_SET                    CanConfigSet_0

/** \brief Configuration parameter CanControllerId - fixed macro name for internal use */
#define CAN_CONTROLLER_ID                 0U

/** \brief Configuration parameter CanRxProcessing */
#define CAN_RX_MODE                       CAN_MODE_INTERRUPT

/** \brief Configuration parameter CanTxProcessing */
#define CAN_TX_MODE                       CAN_MODE_INTERRUPT

/** \brief Configuration parameter CanFilterMaskValue */
#define CAN_FILTER_MASK                   2047U

/** \brief Configuration parameter CanIndex */
#define CAN_INDEX                         0U

/** \brief Configuration parameter CanDevErrorDetection */
#define CAN_DEV_ERROR_DETECTION           STD_ON

/** \brief Configuration parameter CanTraceUsage */
#define CAN_TRACE_USAGE                   STD_OFF

/** \brief Configuration parameter CanVersionInfoApi */
#define CAN_GET_VERSION_INFO_API          STD_ON

/** \brief Configuration parameter CanVirtualDeviceIp */
#define CAN_VIRTUAL_DEVICE_IP             "127.0.0.1"

/** \brief Configuration parameter CanVirtualDevicePort */
#define CAN_VIRTUAL_DEVICE_PORT           10020U

/** \brief Configuration parameter CanVirtualDeviceBus */
#define CAN_VIRTUAL_DEVICE_BUS            SD_CAN1

/** \brief Configuration parameter CanBufferSize */
#define CAN_BUFFER_SIZE                   (8U + 1U)

/** \brief Configuration parameter CanBufferMode */
#define CAN_BUFFER_MODE                   CAN_BUFFER_KEEP_OLDEST

/** \brief Number of receive objects */
#define CAN_NUM_HRH                       2U

/** \brief Number of transmit objects */
#define CAN_NUM_HTH                       2U



/** \brief CanObjectId of receive object CanHardwareObject_Rx_0 */
#define CanHardwareObject_Rx_0                0U


/** \brief CanObjectId of receive object CanHardwareObject_Dbg_Rx */
#define CanHardwareObject_Dbg_Rx                1U




/** \brief CanObjectId of transmit object CanHardwareObject_Tx_0 */
#define CanHardwareObject_Tx_0                2U


/** \brief CanObjectId of transmit object CanHardwareObject_Dbg_Tx */
#define CanHardwareObject_Dbg_Tx                3U



/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[external data]=========================================*/

#endif /* if !defined( CAN_CFG_H ) */
/*==================[end of file]===========================================*/
