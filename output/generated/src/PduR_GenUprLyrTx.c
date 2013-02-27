/* --------{ EB Automotive C Source File }-------- */ 


/*==================[includes]==============================================*/
#include <TSAutosar.h>               /* 3SOFT specific standard types */
#include <ComStack_Types.h>          /* AUTOSAR Communication Stack types */
#include <PduR_Internal_Static.h>    /* Internal API (static part) */
#include <PduR_GenUprLyrTx.h>        /* Header provided to Generic Upper Layers */
#include <PduR_Lcfg.h>               /* Link-time configurable data */
#include <PduR_Types.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/
/* AUTOSAR Memory Mapping - start section for code */
#define PDUR_START_SEC_CODE
#include <MemMap.h>


FUNC (Std_ReturnType,PDUR_CODE) PduR_DbgTransmit
(
   PduIdType  DbgTxPduId,
   P2CONST(PduInfoType,AUTOMATIC,PDUR_APPL_DATA)   PduInfoPtr
)
{
	  /* Call generic Transmit function with service ID of PduR_DbgTransmit
	   * and index PduR_DbgRTabUpTxConfigIdx */
	  return PduR_GenericIfTransmit(
	  	(PduR_PduIdType)DbgTxPduId,
	  	PduInfoPtr,
	    PDUR_SID_DBG_TX,
	    PduR_DbgRTabUpTxConfigIdx
	    );
}


/* AUTOSAR Memory Mapping - end section for code */
#define PDUR_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/

