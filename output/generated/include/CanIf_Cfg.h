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
#if (!defined CANIF_CFG_H)
#define CANIF_CFG_H


/*
 *  Misra-C:2004 Deviations:
 *
 *  MISRA-1) Deviated Rule: 8.12 (required)
 *    When an array is declared with external linkage, its size shall be
 *    stated explicitely or defined implicitely by initialisation.
 *
 *    Reason:
 *    Value is only calculated in .c file and not available here.
 *
 *  MISRA-2) Deviated Rule: 19.1 (advisory)
 *    '#include' statements in a file should only be preceded by other
 *    preprocessor directives or comments.
 *
 *    Reason:
 *    AUTOSAR compiler and memory abstraction.
 */

/*==================[includes]===============================================*/

#include <TSAutosar.h>          /* EB specific standard types */
#include <ComStack_Types.h>     /* AUTOSAR COM types */

#include <Can.h>                /* AUTOSAR Can definitions */



/*==================[macros]=================================================*/

/** \brief Switch for DET usage */
#define CANIF_DEV_ERROR_DETECT   STD_ON

/** \brief Support of CanIf_TxConfirmation() callback function
 **
 ** This constant defines whether the callback CanIf_TxConfirmation() is
 ** provided.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_TX_CONFIRMATION_CB   STD_ON


/** \brief Support of CanIf_RxIndication() callback function
 **
 ** This constant defines whether the callback CanIf_RxIndication() is
 ** provided.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_RX_INDICATION_CB   STD_ON


/** \brief Support of CanIf_CancelTxConfirmation() callback function
 **
 ** This constant defines whether the callback CanIf_CancelTxConfirmation()
 ** is provided.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_CANCEL_TX_CONFIRMATION_CB   STD_OFF


/** \brief Support of CanIf_ControllerBusOff() callback function
 **
 ** This constant defines whether the callback CanIf_ControllerBusOff()
 ** is provided.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_BUSOFF_NOTIFICATION_CB   STD_ON


/** \brief Support of wakeup API
 **
 ** This constant defines whether the wakeup APIs are provided.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_WAKEUP_SUPPORT_API   STD_OFF


/** \brief Support of function CanIf_SetDynamicTxId()
 **
 ** This constant defines whether CanIf_SetDynamicTxId() is supported.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_SETDYNAMICTXID_API   STD_OFF


/** \brief Support of function CanIf_ReadRxPduData()
 **
 ** This constant defines whether CanIf_ReadRxPduData() is supported.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_READRXPDU_DATA_API   STD_OFF


/** \brief Support of function CanIf_ReadRxNotifStatus()
 **
 ** This constant defines whether CanIf_ReadRxNotifStatus() is supported.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_READRXPDU_NOTIF_STATUS_API   STD_OFF


/** \brief Support of function CanIf_ReadTxNotifStatus()
 **
 ** This constant defines whether CanIf_ReadTxNotifStatus() is supported.
 ** STD_ON    Function is provided
 ** STD_OFF   Function is not provided
 */
#define CANIF_READTXPDU_NOTIF_STATUS_API   STD_OFF


/** \brief Support of range reception
 **
 ** This constant defines if range reception is configured and used.
 ** STD_ON    Range reception is used
 ** STD_OFF   No reception range is used
 */
#define CANIF_RANGE_RECEPTION   STD_OFF


/** \brief Number of CanTrcv drivers
 **
 ** This constant defines the number of CAN transceiver drivers configured in
 ** this configuration.
 */
#define CANIF_NUMBER_OF_TRCV_DRIVERS          0U



/** \brief Number of Tx buffers
 **
 ** This constant defines the number of configured Tx buffers.
 */
#define CANIF_NUMBER_OF_TXBUFFERS                 0U



/*==================[type definitions]=======================================*/

  /* --- Rx buffering ---------------------------------------------------- */

/** \brief Index type for Rx buffers
 **
 ** This type defines the index width for Rx buffers and is dependent on the
 ** number and length of Rx buffers configured.
 */
typedef uint8 CanIf_RxBufferIndexType;



  /* --- L-PDU related data ---------------------------------------------- */

/** \brief Index type for L-PDU related data
 **
 ** This type defines the index type for L-PDU related data. Dependent on the
 ** number of configured L-PDUs it can be either of type uint8 or uint16.
 */
typedef uint8 CanIf_LPduIndexType;



/** \brief Tx L-PDU configuration type
 **
 ** This type is used for configuration of Tx L-PDUs.
 */
typedef struct
{
  uint8 hth;              /**< HTH */
  uint8 userType;         /**< type of callback function */
#if( CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON )
  CanIf_LPduIndexType notifyIndex;
      /**< CANIF_INVALID_LPDU_INDEX if L-PDU is not configured for extended
           API; index of notification flag otherwise */
#endif /* CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON */
  Can_IdType canId;       /**< CAN ID */
} CanIf_TxLPduConfigType;



/** \brief Rx L-PDU configuration type
 **
 ** This type defines the configuraiton of a Rx L-PDU.
 ** It is used for the elements in the array (14) of the design.
 */
typedef struct
{
  uint8 userType;           /**< type of callback function */
  uint8 dlc;                /**< CAN DLC */
#if( CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON )
  CanIf_LPduIndexType notifyIndex;
      /**< CANIF_INVALID_LPDU_INDEX if L-PDU is not configured for extended
           API; index of notification flag otherwise */
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */
#if( CANIF_READRXPDU_DATA_API == STD_ON )
  CanIf_RxBufferIndexType rxBufferIndex;
      /**< CANIF_INVALID_RX_BUFFER_INDEX if L-PDU is not configured for data
           read API; start index for the Rx buffer otherwise */
#endif /* CANIF_READRXPDU_DATA_API == STD_ON */
  PduIdType targetPduId;    /**< target PDU ID */
  Can_IdType canId;         /**< CAN ID */
#if( CANIF_RANGE_RECEPTION == STD_ON )
  uint32 upperRangeCanId;   /**< Upper range CAN ID/no range flag */
#endif /* CANIF_RANGE_RECEPTION == STD_ON */
} CanIf_RxLPduConfigType;



  /* --- HOHs ------------------------------------------------------------ */

/** \brief HTH configuration type
 **
 ** This is the data type used for HTH configuration.
 */
typedef struct
{
  CanIf_LPduIndexType firstIndex; /**< index of first pending Tx request */
} CanIf_HthConfigType;



/** \brief HRH configuration type
 **
 ** This is the data type used for HRH configuration.
 */
typedef struct
{
  uint8 swFiltering;    /**< CANIF_BINARY_SOFTWARE_FILTERING - binary search;
                             CANIF_NO_SOFTWARE_FILTERING - no sw filtering */
  CanIf_LPduIndexType firstIndex;
                        /**< index of first Rx L-PDU for this HRH */
  CanIf_LPduIndexType lastIndex;
                        /**< index of last Rx L-PDU for this HRH */
} CanIf_HrhConfigType;



  /* --- Controller configuration ---------------------------------------- */

/** \brief Controller configuration
 **
 ** This is the type used for controller configuration.
 */
typedef struct
{
#if( CANIF_WAKEUP_SUPPORT_API == STD_ON )
  EcuM_WakeupSourceType wakeupEvent;        /**< wakeup event */
  EcuM_WakeupSourceType wakeupValidEvent;   /**< wakeup validation events */
#endif /* CANIF_WAKEUP_SUPPORT_API == STD_ON */
  P2CONST( Can_ControllerConfigType, TYPEDEF, CANIF_APPL_CONST )
      canCtrlConfigPtr;               /**< pointer to the CAN ctrl. config */
} CanIf_CanControllerConfigType;



  /* --- Driver configuration -------------------------------------------- */

/** \brief Driver configuration type
 **
 ** This type defines the driver configuration used in the CAN interface.
 */
typedef struct
{
  uint8 nrOfHrhs;         /**< number of configured HRHs (== hthOffset ) */
  uint8 nrOfHths;         /**< number of configured HTHs */

  P2CONST( CanIf_CanControllerConfigType, TYPEDEF, CANIF_APPL_CONST )
    ctrlConfigPtr;        /**< array of controller configurations */
  P2CONST( CanIf_HthConfigType, TYPEDEF, CANIF_APPL_CONST )
    hthConfigPtr;         /**< array of HTH configurations */
  P2CONST( CanIf_HrhConfigType, TYPEDEF, CANIF_APPL_CONST )
    hrhConfigPtr;         /**< array of HRH configurations */
} CanIf_CanDriverConfigType;



  /* --- CanIf global configuration -------------------------------------- */

/** \brief Type for the CAN interface configuration
 **
 ** This type defines the global configuration of the CAN interface.
 */
typedef struct
{
  CanIf_LPduIndexType nrOfStaticTxLPdus;  /**< number of static Tx L-PDUs */
  CanIf_LPduIndexType nrOfTxLPdus;        /**< number of Tx L-PDUs */
  CanIf_LPduIndexType nrOfRxLPdus;        /**< number of Rx L-PDUs */

  P2CONST( CanIf_TxLPduConfigType, TYPEDEF, CANIF_APPL_CONST )
    txLPduConfigPtr;
                  /**< ptr. to array of Tx L-PDU configurations */

  P2CONST( CanIf_RxLPduConfigType, TYPEDEF, CANIF_APPL_CONST )
    rxLPduConfigPtr;
                  /**< ptr. to array of Rx L-PDU configurations */

  P2CONST( CanIf_LPduIndexType, TYPEDEF, CANIF_APPL_CONST )
    sortedRxLPduConfigPtr;
                  /**< ptr. to array of sorted Rx L-PDU configurations */

  P2CONST( CanIf_CanDriverConfigType, TYPEDEF, CANIF_APPL_CONST )
      driverConfigPtr;
                  /**< pointer a driver configuration */
} CanIf_ConfigType;



/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

#define CANIF_START_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/** \brief CanIf configuration
 **
 ** This is the CanIf configuration that can be given to CanIf_Init as
 ** configuration parameter.
 ** Please note that the name of this element is configuration dependent.
 */
extern CONST( CanIf_ConfigType, CANIF_APPL_CONST ) CanIfInitConfiguration;

#define CANIF_STOP_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#endif /* if !defined( CANIF_CFG_H ) */
/*==================[end of file]============================================*/
