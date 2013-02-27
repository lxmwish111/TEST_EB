/**
 * \file
 *
 * \brief Autosar CanIf
 *
 * This file contains the implementation of the Autosar
 * module CanIf.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


/*
 *  Possible Misra-C:2004 Deviations:
 *
 *  MISRA-1) Deviated Rule: 11.3 (advisory)
 *    A cast should not be performed between a pointer type and an integral
 *    type.
 *
 *    Reason:
 *    Implicit conversion of the NULL_PTR #define to other pointer types.
 *
 *  MISRA-2) Deviated Rule: 19.1 (advisory)
 *    '#include' statements in a file should only be preceded by other
 *    preprocessor directives or comments.
 *
 *    Reason:
 *    AUTOSAR compiler and memory abstraction.
 */

/*==================[inclusions]=============================================*/

#include <TSAutosar.h>            /* EB specific standard types */
#include <ComStack_Types.h>       /* AUTOSAR COM types */
#include <CanIf_Cfg.h>            /* Generated configuration */
#include <CanIf_Int_Cfg.h>        /* Generated internal configuration */

#include <Can.h>                  /* AUTOSAR Can definitions */



/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[internal constants]=====================================*/

#define CANIF_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/** \brief Transmit L-PDU configuration 0
 **
 ** This is transmit L-PDU configuration 0.
 */
STATIC CONST( CanIf_TxLPduConfigType, CANIF_APPL_CONST )
  CanIf_TxLPduConfig_0[CANIF_ARRAY_LENGTH_TXPDUIDS] =
{
  {
    2U,   /* HTH */
    0U,   /* type of callback function (PDUR) */
#if( CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON )
    CANIF_INVALID_LPDU_INDEX,   /* no notification */
#endif /* CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON */
    (272U)   /* CAN ID */
  },
  {
    3U,   /* HTH */
    0U,   /* type of callback function (PDUR) */
#if( CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON )
    CANIF_INVALID_LPDU_INDEX,   /* no notification */
#endif /* CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON */
    (273U)   /* CAN ID */
  },
};



/** \brief Receive L-PDU configuration 0
 **
 ** This is receive L-PDU configuration 0.
 **
 ** Preconditions
 ** - CanIf_ReadRxPduData() or CanIf_ReadRxNotifStatus() are enabled during
 **   the configuration.
 */
STATIC CONST( CanIf_RxLPduConfigType, CANIF_APPL_CONST )
  CanIf_RxLPduConfig_0[CANIF_ARRAY_LENGTH_RXPDUIDS] =
{
  {
    /* Rx-PDU 0 */
    0U,   /* type of callback function (PDUR) */
    1U,   /* CAN DLC */
#if( CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON )
    CANIF_INVALID_LPDU_INDEX,       /* notification flag index */
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */
#if( CANIF_READRXPDU_DATA_API == STD_ON )
    CANIF_INVALID_RX_BUFFER_INDEX,   /* no Rx buffer used */
#endif /* CANIF_READRXPDU_DATA_API == STD_ON */
    0U,   /* target PDU ID */
    (256U),   /* CAN ID */
#if( CANIF_RANGE_RECEPTION == STD_ON )
    CANIF_NO_RANGE_CONFIG       /* no range assigned to this PDU */
#endif /* CANIF_RANGE_RECEPTION == STD_ON */
  },
  {
    /* Rx-PDU 1 */
    0U,   /* type of callback function (PDUR) */
    8U,   /* CAN DLC */
#if( CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON )
    CANIF_INVALID_LPDU_INDEX,       /* notification flag index */
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */
#if( CANIF_READRXPDU_DATA_API == STD_ON )
    CANIF_INVALID_RX_BUFFER_INDEX,   /* no Rx buffer used */
#endif /* CANIF_READRXPDU_DATA_API == STD_ON */
    1U,   /* target PDU ID */
    (257U),   /* CAN ID */
#if( CANIF_RANGE_RECEPTION == STD_ON )
    CANIF_NO_RANGE_CONFIG       /* no range assigned to this PDU */
#endif /* CANIF_RANGE_RECEPTION == STD_ON */
  },
};



/** \brief HTH configuration <n> (<n> = 0)
 **
 ** This array contains the HTH configuration concerning Tx buffering of
 ** pending messages.
 */
STATIC CONST( CanIf_HthConfigType, CANIF_APPL_CONST ) CanIf_DriverHthConfig_0[2] =
{
  {
    0U
  },
  {
    1U
  },
};



/** \brief HRH configuration <n> (<n> = 0)
 **
 ** This array contains the information to find the PDUs assigned to each
 ** HRH in the sorted Rx L-PDU array as well as whether to use software
 ** filtering.
 */
STATIC CONST( CanIf_HrhConfigType, CANIF_APPL_CONST ) CanIf_DriverHrhConfig_0[2] =
{
  { CANIF_BINARY_SOFTWARE_FILTERING,   /* software filtering */
    
          /* one Rx L-PDU assigned -> direct link to PDU ID */
    0U,   /* Rx L-PDU ID */
    CANIF_LPDU_ID_DIRECT
  },
  { CANIF_BINARY_SOFTWARE_FILTERING,   /* software filtering */
    
          /* one Rx L-PDU assigned -> direct link to PDU ID */
    1U,   /* Rx L-PDU ID */
    CANIF_LPDU_ID_DIRECT
  },
};



/** \brief CAN controllers configuration <n> (<n> = 0)
 **
 ** This array defines the CAN controllers used in this configuration. The
 ** controllers are sorted according to the corresponding driver number in
 ** ascending order. For each driver the controllers are sorted according to
 ** their index in the driver. */
STATIC CONST( CanIf_CanControllerConfigType, CANIF_APPL_CONST )
    CanIf_CanControllerConfig_0[CANIF_NUMBER_OF_CAN_CONTROLLERS] =
{
  {
#if( CANIF_WAKEUP_SUPPORT_API == STD_ON )
    0U,   /* no wakeup event */
    0U,   /* wakeup validation events */
#endif /* CANIF_WAKEUP_SUPPORT_API == STD_ON */
    /* Deviation MISRA-1 */
    NULL_PTR   /* pointer to the CAN ctrl. config */
  },
};



/** \brief Configuration <n> for the driver (<n> = 0)
 **
 ** This configuration structure contains the configuration of the driver.
 */
STATIC CONST( CanIf_CanDriverConfigType, CANIF_APPL_CONST )
  CanIf_CanDriverConfig_0 =
{
  2U,   /* number of configured HRHs (== hthOffset ) */
  2U,   /* number of configured HTHs */

  CanIf_CanControllerConfig_0,   /* array of controller configurations */
  CanIf_DriverHthConfig_0,       /* array of HTH configurations */
  CanIf_DriverHrhConfig_0        /* array of HRH configurations */
};



#define CANIF_STOP_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/*==================[external constants]=====================================*/

#define CANIF_START_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/** \brief Sorted Rx L-PDU configuration
 **
 ** This array contains the Rx L-PDU configurations sorted according to the
 ** HRHs, the Rx L-PDUs are assigned to.
 */
CONST( CanIf_LPduIndexType, CANIF_APPL_CONST )
  CanIf_SortedRxLPduConfig_0[] =
{

  0U   /* dummy entry */
};



/** \brief Array of CanIf configurations */
CONST( CanIf_ConfigType, CANIF_APPL_CONST ) CanIfInitConfiguration =
{
  2,        /* number of static Tx L-PDUs */
  2,        /* number of all Tx L-PDUs */
  2,        /* number of all Rx L-PDUs */

  CanIf_TxLPduConfig_0,
    /* ptr. to array of Tx L-PDU configurations */
  CanIf_RxLPduConfig_0,
    /* ptr. to array of Rx L-PDU configurations */
  CanIf_SortedRxLPduConfig_0,
    /* ptr. to array of sorted Rx L-PDU configurations */

  &CanIf_CanDriverConfig_0   /* pointer a driver configuration */
};



#define CANIF_STOP_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/*==================[external data]==========================================*/

#define CANIF_START_SEC_VAR_FAST_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

#if( CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON )
/** \brief Bit-array of Tx notification flags (if enabled) */
VAR( uint8, CANIF_VAR_FAST )
  CanIf_TxLPduNotifyFlags[(CANIF_NUMBER_OF_TX_NOTIFYS+7U)/8U];
#endif /* CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON */

#if( CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON )
/** \brief Bit-array of Rx notification flags (if enabled) */
VAR( uint8, CANIF_VAR_FAST )
  CanIf_RxLPduNotifyFlags[(CANIF_NUMBER_OF_RX_NOTIFYS+7U)/8U];
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */

#if( CANIF_READRXPDU_DATA_API == STD_ON )
/** \brief Array of Rx buffers */
VAR( uint8, CANIF_VAR_FAST ) CanIf_RxBuffer[0];
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */


#define CANIF_STOP_SEC_VAR_FAST_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>



/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

/*==================[end of file]============================================*/
