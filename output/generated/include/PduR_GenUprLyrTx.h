/* --------{ EB Automotive C Source File }-------- */ 

#if (!defined PDUR_GENUPRLYR_H)
#define PDUR_GENUPRLYR_H

/*==================[includes]==============================================*/
#include <TSAutosar.h>         /* 3SOFT AUTOSAR standard types */
#include <ComStack_Types.h>    /* AUTOSAR Communication Stack types */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function declarations]========================*/
#define PDUR_START_SEC_CODE
#include "MemMap.h"


/** \brief This function is called by Dbg module to request a transmission.
 **
 **
 ** \param[in]  DbgTxPduId    ID of PDU sent by Dbg module
 ** \param[in]  PduInfoPtr    Pointer to a structure with PDU related data
 **                           that shall be transmitted: data length and
 **                           pointer to data buffer
 **
 **
 ** \retval E_OK        Transmit request has been accepted
 ** \retval E_NOT_OK    Transmit request has not been accepted
 **/
extern FUNC(Std_ReturnType,PDUR_CODE) PduR_DbgTransmit
(
    PduIdType      DbgTxPduId,
    P2CONST(PduInfoType,AUTOMATIC,PDUR_APPL_DATA)  PduInfoPtr
);


#define PDUR_STOP_SEC_CODE
#include "MemMap.h"

/*==================[internal function declarations]========================*/

#endif /* if !defined( PDUR_GENUPRLYR_H ) */
/*==================[end of file]===========================================*/
