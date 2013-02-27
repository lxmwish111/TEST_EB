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
 *  Misra-C:2004 Deviations:
 *
 *  MISRA-1) Deviated Rule: 19.1 (advisory)
 *    '#include' statements in a file should only be preceded by other
 *    preprocessor directives or comments.
 *
 *    Reason:
 *    AUTOSAR compiler and memory abstraction.
 */

/*==================[inclusions]=============================================*/

#include <TSAutosar.h>              /* EB specific standard types */
#include <ComStack_Types.h>         /* AUTOSAR COM types */
#include <CanIf_Int.h>              /* CanIf internals */
#include <CanIf_Cfg.h>              /* CanIf configuration */
#include <CanIf_Int_Cfg.h>          /* Generated internal configuration */

#include <PduR_CanIf.h>              /* PduR callback functions */

/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

#define CANIF_START_SEC_CODE
/* Deviation MISRA-1 */
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
  )
{

  switch( RxLPduConfig->userType )
  {
    case 0:   /* PDUR */
      PduR_CanIfRxIndication( RxLPduConfig->targetPduId, CanSduPtr );
      break;

    default:
      /* No Rx indication shall be provided */
      break;
  }
}



/** \brief Send upper layer Tx confirmation */
FUNC( void, CANIF_CODE ) CanIf_SendTxConfirmation
  ( PduIdType CanTxPduId )
{
  /* call upper layer transmit confirmation function */
  switch( CanIf_TxPduConfigPtr[CanTxPduId].userType )
  {
    case 0:   /* PDUR */
      PduR_CanIfTxConfirmation( CanTxPduId );
      break;

    default:
      /* No Tx confirmation shall be provided */
      break;
  }
}



#define CANIF_STOP_SEC_CODE
/* Deviation MISRA-1 */
#include <MemMap.h>

/*==================[internal function definitions]==========================*/

/*==================[end of file]============================================*/
