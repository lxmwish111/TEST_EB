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
#if (!defined CANIF_INT_CFG_H)
#define CANIF_INT_CFG_H


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

#include <TSAutosar.h>                /* EB specific standard types */
#include <ComStack_Types.h>           /* AUTOSAR COM types */
#include <CanIf_Int.h>                /* CanIf internals */
#include <CanIf_Types.h>              /* CanIf data types */
#include <CanIf_Cfg.h>                /* CanIf external configuration */

#if( CANIF_WAKEUP_SUPPORT_API == STD_ON )
#include <EcuM_Cbk.h>                 /* AUTOSAR EcuM callout definitions */
#endif /* CANIF_WAKEUP_SUPPORT_API == STD_ON */
#include <CanSM_Cbk.h>                /* AUTOSAR CanSM callback definitions */

/*==================[macros]=================================================*/

/** \brief Number of configurations
 **
 ** This constant defines the number of configuration sets of this
 ** configuration. Please note that at the moment only one configuration is
 ** supported!
 */
#define CANIF_NR_OF_CONFIGURATIONS            1U



/** \brief DLC check switch
 **
 ** This constant defines whether the DLC check is used or not.
 ** STD_ON    DLC check is enabled
 ** STD_OFF   DLC check is disabled
 */
#define CANIF_DLC_CHECK_ENABLED   STD_ON


/** \brief Support of wakeup notification function
 **
 ** This constant defines whether the upper layer wakeup notification
 ** function will be called.
 ** STD_ON    Notification is called
 ** STD_OFF   Notification is not called
 */
#define CANIF_WAKEUP_NOTIF_CALLBACK   STD_OFF


/** \brief Support of wakeup validation function
 **
 ** This constant defines whether the upper layer wakeup validation
 ** notification function will be called.
 ** STD_ON    Notification is called
 ** STD_OFF   Notification is not called
 */
#define CANIF_WAKEUP_VALID_CALLBACK   STD_OFF


/** \brief Number of CAN drivers
 **
 ** This constant defines the number of CAN drivers in this configuration.
 */
#define CANIF_NUMBER_OF_CAN_HW_UNITS          1U



/** \brief Number of CAN controllers
 **
 ** This constant defines the number of CAN controllers configured.
 */
#define CANIF_NUMBER_OF_CAN_CONTROLLERS       1U



/** \brief Single CAN controller optimization switch
 **
 ** This constant defines, if the CanIf single controller optimization is
 ** switched on. It is automatically activated, if only one controller is
 ** configured.
 */
#define CANIF_SINGLE_CAN_CTRL_OPT   STD_ON


/** \brief ID of single CAN controller
 **
 ** This constant defines the CAN controller ID of the single CAN controller,
 ** if only one controller is configured.
 ** Please note, that at least one CAN controller must be configured and the
 ** CanIf currently assumes that the controller ID of this single controller
 ** is 0.
 */
#define CANIF_SINGLE_CAN_CTRL_ID              0U



/** \brief Number of CanTrcv channels
 **
 ** This constant defines the number of CAN transceiver driver channels
 ** configured in this configuration.
 */
#define CANIF_NUMBER_OF_TRCV_CHANNELS         0U



/** \brief Number of Rx L-PDUs
 **
 ** This is the number of Rx L-PDUs configured for the interface.
 */
#define CANIF_NUMBER_OF_CANRXPDUIDS           2U



/** \brief Number of all configured Tx L-PDUs
 **
 ** This constant defines the number of all configured CAN Tx L-PDUs.
 */
#define CANIF_NUMBER_OF_CANTXPDUIDS           2U



/** \brief Number of dynamic Tx L-PDUs
 **
 ** This is the number of dynamic Tx L-PDUs used in the interface.
 */
#define CANIF_NUMBER_OF_DYNAMIC_CANTXPDUIDS   0U



/** \brief Array length for all Tx L-PDUs
 **
 ** This is the length for arrays which are created for all Tx L-PDUs
 */
#define CANIF_ARRAY_LENGTH_TXPDUIDS           2U



/** \brief Array length for Rx L-PDUs
 **
 ** This is the length for arrays which are created for all Rx L-PDUs
 */
#define CANIF_ARRAY_LENGTH_RXPDUIDS           2U



/** \brief Number of Tx notifications
 **
 ** This constant defines the number of Tx L-PDUs for which Tx notification
 ** is enabled.
 */
#define CANIF_NUMBER_OF_TX_NOTIFYS            0U



/** \brief Number of Rx notifications
 **
 ** This constant defines the number of Rx L-PDUs for which Rx notification
 ** is enabled.
 */
#define CANIF_NUMBER_OF_RX_NOTIFYS            0U



/** \brief invalid index for Tx L-PDU buffers
 **
 ** This constant defines the index used for the state "no Tx L-PDU buffer"
 ** assigned.
 ** Its width is dependent on the configuration of CanIf_TxBufferIndexType.
 */
#define CANIF_INVALID_TX_BUFFER_INDEX         0xFF



/** \brief invalid index for Rx L-PDU buffers
 **
 ** This constant defines the index used for the state "no Rx L-PDU buffer"
 ** assigned.
 ** Its width is dependent on the configuration of CanIf_RxBufferIndexType.
 */
#define CANIF_INVALID_RX_BUFFER_INDEX         0xFF



/** \brief Invalid L-PDU index constant
 **
 ** This constant defines an index value which is interpreted as "invalid
 ** index". It must therefore be greater than all valid L-PDU indices and is
 ** dependent on the type CanIf_LPduIndexType.
 */
#define CANIF_INVALID_LPDU_INDEX              0xFF



#if( CANIF_NUMBER_OF_TRCV_DRIVERS > 0 )
/** \brief Invalid transceiver index
 **
 ** This constant defines a transceiver index value which is interpreted as
 ** "no transceiver assigned" in the network configuration (element
 ** CanIf_NetworkConfigType.canTrcvDrvIdx).
 */
#define CANIF_INVALID_TRCV_INDEX              255U
#endif /* CANIF_NUMBER_OF_TRCV_DRIVERS > 0 */



#if( CANIF_RANGE_RECEPTION == STD_ON )
/** \brief "No range configuration" index
 **
 ** This constant is used for Rx L-PDUs that have no reception range assigned.
 */
#define CANIF_NO_RANGE_CONFIG                 0xFFFFFFFFUL
#endif /* CANIF_RANGE_RECEPTION == STD_ON */



/** \brief Default initialization configuration
 **
 ** This macro defines the default initialization symbol to be used by CanIf_Init()
 ** in case of a NULL pointer being provided by the caller.
 */
#define CANIF_INIT_DEFAULT_CONFIG             CanIfInitConfiguration



/** \brief Handling of production errors
 **
 ** This macro is used to specify if production errors shall be treated as
 ** normal production errors, as development errors or if they shall be
 ** disabled.
 */
#define CANIF_PROD_ERR_HANDLING   CANIF_PROD_ERR_REP_TO_DEM



  /* --- function like macros -------------------------------------------- */

/** \brief Macro for bus-off callback function
 **
 ** This macro shall be used for calling the bus-off notification function.
 */
#define CANIF_BUSOFF_CALLBACK( Controller ) \
    CanSM_ControllerBusOff( Controller )



/** \brief Macro for calling the upper layer wakeup notification function
 **
 ** This macro shall be used for calling the configured upper layer wakeup
 ** notification function.
 */

#define CANIF_SET_WAKEUP_EVENT( Sources )



/** \brief Macro for calling the upper layer wakeup validation function
 **
 ** This macro shall be used for calling the configured upper layer wakeup
 ** validation function.
 */

#define CANIF_VALIDATE_WAKEUP_EVENT( Sources )



/** \brief Get number of CAN controllers
 **
 ** This macro can be used, to read the number of CAN controllers from the
 ** driver configuration.
 */
#define CANIF_GET_NR_OF_CAN_CTRLS()  CANIF_NUMBER_OF_CAN_CONTROLLERS



/** \brief Get CAN controller assigned to an HOH
 **
 ** This macro is used to get the controller ID of a CAN controller assigned
 ** to an HOH.
 **
 ** \param[in] HohCfg HOH configuration (both, HRH and HTH)
 */
#define CANIF_GET_HOH_CAN_CTRL(HohCfg)  CANIF_SINGLE_CAN_CTRL_ID



/** \brief Access macro for CanIf_SendRxIndication()
 **
 ** This macro is used for accessing function CanIf_SendRxIndication()
 ** independently from the current configuration by translating its parameter
 ** list into the correct parameter list of this function.
 */
#define CANIF_SEND_RX_INDICATION( RxLPduConfig, CanDlc, CanSduPtr ) \
  CanIf_SendRxIndication( RxLPduConfig, CanSduPtr )



/** \def CANIF_TL_TX_CAN_ID_SUPPORT
 **
 ** \brief Switch for Tx CAN ID translation
 **
 ** This switch defines, if Tx CAN ID translation is supported.
 */

/** \def CANIF_TRANSLATE_TX_CAN_ID(CanId)
 **
 ** \brief Translate Tx CAN ID
 **
 ** This macro is used to translate the configured CAN ID of a Tx PDU into the
 ** CAN ID that shall really be used for the transmission.
 **
 ** \param[in] CanId CAN ID to be translated
 **
 ** \return Translated CAN ID
 */

#define CANIF_TL_TX_CAN_ID_SUPPORT        STD_OFF
#define CANIF_TRANSLATE_TX_CAN_ID(CanId)  (CanId)



/** \def CANIF_TL_RX_CAN_ID_SUPPORT
 **
 ** \brief Switch for Rx CAN ID translation
 **
 ** This switch defines, if Rx CAN ID translation is supported.
 */

/** \def CANIF_TRANSLATE_RX_CAN_ID(CanId)
 **
 ** \brief Translate Rx CAN ID
 **
 ** This macro is used to translate the CAN ID of a received message into the
 ** CAN ID, that was previously configured for the associated Rx PDU.
 **
 ** \param[in] CanId CAN ID to be translated
 **
 ** \return Translated CAN ID
 */

#define CANIF_TL_RX_CAN_ID_SUPPORT        STD_OFF
#define CANIF_TRANSLATE_RX_CAN_ID(CanId)  (CanId)



/*==================[type definitions]=======================================*/

  /* --- Tx buffering ---------------------------------------------------- */

/** \brief Index type for Tx buffers
 **
 ** This type defines the index width for Tx buffers and is dependent on the
 ** number of Tx buffers configured. It can be either uint8 or uint16. */
typedef uint8 CanIf_TxBufferIndexType;



  /* --- CAN Transceiver Configuration ----------------------------------- */

/** \brief CAN Transceiver Driver function configuration
 **
 ** This type is used for configuring the CAN Transceiver Driver functions.
 */
typedef struct
{
  CanIf_TrcvSetOpModeFctPtrType setOpMode;        /**< set operation mode */
  CanIf_TrcvGetOpModeFctPtrType getOpMode;        /**< get operation mode */
  CanIf_TrcvGetBusWuRFctPtrType getBusWuReason;   /**< get wakeup reason */
  CanIf_TrcvSetWuModeFctPtrType setWakeupMode;    /**< set wakeup mode */
#if( CANIF_WAKEUP_SUPPORT_API == STD_ON )
  CanIf_CBWakeupByBusFctPtrType cbWakeupByBus;    /**< wakeup polling */
#endif /* CANIF_WAKEUP_SUPPORT_API == STD_ON */
} CanIf_CanTrcvConfigType;



/** \brief CAN Transceiver Driver channel configuration
 **
 ** This type is used for configuring the wakable CAN Transceiver Driver
 ** channels.
 */
typedef struct
{
  uint8 trcvChnlId;                         /**< transceiver channel ID */
  uint8 trcvDrvIdx;                         /**< driver index */
#if( CANIF_WAKEUP_SUPPORT_API == STD_ON )
  EcuM_WakeupSourceType wakeupEvent;        /**< wakeup event */
#endif /* CANIF_WAKEUP_SUPPORT_API == STD_ON */
} CanIf_CanTrcvChnlConfigType;



/*==================[external function declarations]=========================*/

#define CANIF_START_SEC_CODE
#include <MemMap.h>

/** \brief Send receive indication
 **
 ** This function calls the receive indication function for the upper layer.
 **
 ** \param[in] CbkType Type of callback to be used
 ** \param[in] CanSduPtr Pointer to the received data
 **
 ** \remarks The different callback types must be added according to the
 **          configuration.
 */
FUNC( void, CANIF_CODE ) CanIf_SendRxIndication
  (
    CONSTP2CONST( CanIf_RxLPduConfigType, AUTOMATIC, CANIF_APPL_CONST )
      RxLPduConfig,
    P2CONST( uint8, AUTOMATIC, CANIF_APPL_DATA ) CanSduPtr
  );



/** \brief Send upper layer Tx confirmation
 **
 ** This function sends the Tx confirmation of the given Tx L-PDU to the
 ** upper layer that was specified for this L-PDU.
 **
 ** Preconditions:
 ** - This function doesn't check the given parameter. It must be checked
 **   before.
 **
 ** \param[in] CanTxPduId Tx L-PDU ID
 */
extern FUNC( void, CANIF_CODE ) CanIf_SendTxConfirmation
  ( PduIdType CanTxPduId );



#define CANIF_STOP_SEC_CODE
/* Deviation MISRA-2 */
#include <MemMap.h>



/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

#define CANIF_START_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

/* Deviation MISRA-1 */
/** \brief Sorted Rx L-PDU configuration
 **
 ** This array contains the Rx L-PDU configurations sorted according to the
 ** HRHs, the Rx L-PDUs are assigned to.
 */
extern CONST( CanIf_LPduIndexType, CANIF_APPL_CONST )
  CanIf_SortedRxLPduConfig_0[];

#define CANIF_STOP_CONFIG_DATA_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>



/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

#define CANIF_START_SEC_VAR_FAST_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>

#if( CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON )
/** \brief Bit-array of Tx notification flags (if enabled)
 **
 ** This array contains a Tx notification flag for each Tx L-PDU for which
 ** this feature is enabled.
 */
extern VAR( uint8, CANIF_VAR_FAST )
  CanIf_TxLPduNotifyFlags[(CANIF_NUMBER_OF_TX_NOTIFYS+7U)/8U];
#endif /* CANIF_READTXPDU_NOTIF_STATUS_API == STD_ON */

#if( CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON )
/** \brief Bit-array of Rx notification flags (if enabled)
 **
 ** This array contains a Rx notification flag for each Rx L-PDU for which
 ** this feature is enabled.
 */
extern VAR( uint8, CANIF_VAR_FAST )
  CanIf_RxLPduNotifyFlags[(CANIF_NUMBER_OF_RX_NOTIFYS+7U)/8U];
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */

#if( CANIF_READRXPDU_DATA_API == STD_ON )
/* Deviation MISRA-1 */
/** \brief Array of Rx buffers
 **
 ** This is an array which is used for buffering of Rx messages.
 */
extern VAR( uint8, CANIF_VAR_FAST ) CanIf_RxBuffer[];
#endif /* CANIF_READRXPDU_NOTIF_STATUS_API == STD_ON */


#define CANIF_STOP_SEC_VAR_FAST_UNSPECIFIED
/* Deviation MISRA-2 */
#include <MemMap.h>



/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#endif /* if !defined( CANIF_INT_CFG_H ) */
/*==================[end of file]============================================*/
