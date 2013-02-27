/* --------{ EB Automotive C Source File }-------- */ 


/*==================[includes]==============================================*/

#include <PduR_Cfg.h>
#include <PduR_Lcfg.h>

#if (PDUR_CANIF_SUPPORT == STD_ON)
#include <CanIf.h>
#endif /* (PDUR_CANIF_SUPPORT == STD_ON) */

#if (PDUR_CANTP_SUPPORT == STD_ON)
#include <CanTp.h>
#endif /* (PDUR_CANTP_SUPPORT == STD_ON) */

#if (PDUR_FRIF_SUPPORT == STD_ON)
#include <FrIf.h>
#endif /* (PDUR_FRIF_SUPPORT == STD_ON) */

#if (PDUR_FRTP_SUPPORT == STD_ON)
#include <FrTp.h>
#endif /* (PDUR_FRTP_SUPPORT == STD_ON) */

#if ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_LINTP_SUPPORT == STD_ON))
#include <LinIf.h>
#endif /* ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_LINTP_SUPPORT == STD_ON)) */

#if (PDUR_IPDUM_SUPPORT == STD_ON)
#include <Ipdum.h>
#endif /* (PDUR_IPDUM_SUPPORT == STD_ON) */

#if (PDUR_DCM_SUPPORT == STD_ON)
#include <Dcm_Cbk.h>
#endif /* (PDUR_DCM_SUPPORT == STD_ON) */

#if (PDUR_COM_SUPPORT == STD_ON)
#include <Com.h>
#endif /* (PDUR_COM_SUPPORT == STD_ON) */

#if ((PDUR_GATEWAY_OPERATION == STD_ON) \
	|| (PDUR_MULTICAST_TOIF_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_FROMIF_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_TOTP_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_FROMTP_TODCM == STD_ON))
	
#include <PduR_Internal_Static.h>

#endif /* ((PDUR_GATEWAY_OPERATION == STD_ON) \
	|| (PDUR_MULTICAST_TOIF_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_FROMIF_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_TOTP_SUPPORT == STD_ON) \
	|| (PDUR_MULTICAST_FROMTP_TODCM == STD_ON)) */
		
#include <Dbg_Cbk.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/* start data section declaration */
#define PDUR_START_SEC_VAR_NOINIT_32BIT
#include <MemMap.h>

/**
 * Internal memory statically allocated upon link-time. - Size depends on
 * post build configuration => memory requirements of post build config
 * must be smaller than PDUR_DATA_MEM_SIZE in order to avoid buffer
 * overflows. - Memory is 32-bit aligned in oder to enable 32 Bit accesses
 * to memory
 */
#if (PDUR_MEM_SIZE > 0) /* To prevent empty arrays */
STATIC VAR(uint32, PDUR_VAR_NOINIT) PduR_Mem[PDUR_MEM_SIZE_32BIT_WORDS];
#endif /* (PDUR_MEM_SIZE > 0) */

/* stop data section declaration */
#define PDUR_STOP_SEC_VAR_NOINIT_32BIT
#include <MemMap.h>

/* start const section declaration */
#define PDUR_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/**
 * Pointer to internal memory
 */
#if (PDUR_MEM_SIZE > 0) /* To prevent empty arrays */
CONSTP2VAR(uint8, PDUR_CONST, PDUR_VAR_NOINIT) PduR_gMemPtr = (CONSTP2VAR(uint8, PDUR_CONST, PDUR_VAR_NOINIT)) PduR_Mem;
#else /* (PDUR_MEM_SIZE > 0) */
CONSTP2VAR(uint8, PDUR_CONST, PDUR_VAR_NOINIT) PduR_gMemPtr = NULL_PTR;
#endif /* (PDUR_MEM_SIZE > 0) */

/* stop const section declaration */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/* start const section declaration */
#define PDUR_START_SEC_CONST_8BIT
#include <MemMap.h>

CONST(uint8, PDUR_CONST) PduR_CanIfRTabLoConfigIdx = 0U;
CONST(uint8, PDUR_CONST) PduR_ComRTabUpTxConfigIdx = 0U;
CONST(uint8, PDUR_CONST) PduR_DbgRTabUpTxConfigIdx = 1U;

/* stop const section declaration */
#define PDUR_STOP_SEC_CONST_8BIT
#include <MemMap.h>

/* start const section declaration */
#define PDUR_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/**
 * API function pointer table for modules with interface archetype
 */
CONST(PduR_IfModuleAPIType, PDUR_CONST) PduR_IfModuleAPI[] =
{
	{ /* CanIf */
		CanIf_Transmit /* Transmit */
		, NULL_PTR /* TriggerTransmit */
		, NULL_PTR /* TxConfirmation */
		, NULL_PTR /* RxIndication */
#if (PDUR_DYNPAYLOAD_SUPPORT == STD_ON)		
		, NULL_PTR /* RxIndicationDynPyld */
#endif /* (PDUR_DYNPAYLOAD_SUPPORT == STD_ON) */		
	}
	, { /* Com */
		NULL_PTR /* Transmit */
		, Com_TriggerTransmit /* TriggerTransmit */
		, Com_TxConfirmation /* TxConfirmation */
		, Com_RxIndication /* RxIndication */
#if (PDUR_DYNPAYLOAD_SUPPORT == STD_ON)		
		, NULL_PTR /* RxIndicationDynPyld */
#endif /* (PDUR_DYNPAYLOAD_SUPPORT == STD_ON) */		
	}
	, { /* Dbg */
		NULL_PTR /* Transmit */
		, Dbg_TriggerTransmit /* TriggerTransmit */
		, Dbg_TxConfirmation /* TxConfirmation */
		, Dbg_RxIndication /* RxIndication */
#if (PDUR_DYNPAYLOAD_SUPPORT == STD_ON)		
		, NULL_PTR /* RxIndicationDynPyld */
#endif /* (PDUR_DYNPAYLOAD_SUPPORT == STD_ON) */		
	}
};

/**
 * API function pointer table for modules with interface archetype
 */
CONST(PduR_TpModuleAPIType, PDUR_CONST) PduR_TpModuleAPI[] =
{
	{ /* NullTp */
		NULL_PTR /* Transmit */
		, NULL_PTR /* ProvideTxBuffer */
		, NULL_PTR /* TxConfirmation */
		, NULL_PTR /* ProvideRxBuffer */
		, NULL_PTR /* RxIndication */
	}
};

/* stop const section declaration */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/

