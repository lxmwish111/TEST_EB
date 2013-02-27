/* --------{ EB Automotive C Source File }-------- */ 


/*==================[inclusions]============================================*/

#include <Com_Lcfg.h>
#include <Com_Lcfg_Static.h>

/* start data section declaration */
#define COM_START_SEC_VAR_NOINIT_32BIT
#include <MemMap.h>

/**
 * Internal memory statically allocated upon link-time. - Size depends on
 * post build configuration => memory requirements of post build config
 * must be smaller than COM_DATA_MEM_SIZE in order to avoid buffer
 * overflows. - Memory is 32-bit aligned in oder to enable 32 Bit accesses
 * to memory
 */
VAR(uint32, COM_VAR_NOINIT) Com_DataMem[COM_DATA_MEM_SIZE_32BIT_WORDS];

/* stop data section declaration */
#define COM_STOP_SEC_VAR_NOINIT_32BIT
#include <MemMap.h>



/* start data section declaration */
#define COM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

CONSTP2VAR(uint8, COM_CONST, COM_VAR_NOINIT) Com_gDataMemPtr = (CONSTP2VAR(uint8, COM_CONST, COM_VAR_NOINIT)) Com_DataMem;

/* stop data section declaration */
#define COM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>



#define COM_START_SEC_APPL_CODE
#include <MemMap.h>

/* send callouts */

/* receive callouts */

#define COM_STOP_SEC_APPL_CODE
#include <MemMap.h>


#define RTE_START_SEC_CODE
#include <MemMap.h>

/* TX acknowledge callbacks */

/* TX timeout callbacks */

/* TX error callbacks */

/* RX timeout callbacks */

/* RX acknowledge callbacks */
extern FUNC(void, RTE_APPL_CODE) Rte_COMCbk_SGCounterIn(void);

#define RTE_STOP_SEC_CODE
#include <MemMap.h>

#define COM_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>


#if (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0)
/* send callouts */
CONSTP2VAR(Com_TxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_TxCallouts[COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_TxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_TxCallouts[1] =
{
	NULL_PTR
};
#endif /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */


#if (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0)
/* receive callouts */
CONSTP2VAR(Com_RxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_RxCallouts[COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_RxCalloutType, AUTOMATIC, COM_APPL_CODE) Com_RxCallouts[1] =
{
	NULL_PTR
};
#endif /* (COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxAck_Array[COM_CBK_TX_ACK_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxAck_Array[1] =
{
	NULL_PTR
};
#endif /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxTOut_Array[COM_CBK_TX_T_OUT_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxTOut_Array[1] =
{
	NULL_PTR
};
#endif /* (COM_CBK_TX_T_OUT_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkTxErr_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxErr_Array[COM_CBK_TX_ERR_PTR_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkTxErr_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkTxErr_Array[1] =
{
	NULL_PTR
};
#endif /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkRxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxAck_Array[COM_CBK_RX_ACK_PTR_ARRAY_SIZE] =
{
     Rte_COMCbk_SGCounterIn
};
#else /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)) */
CONSTP2VAR(Com_CbkRxAck_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxAck_Array[1] =
{
	NULL_PTR
};
#endif /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE > 0)) */
#endif /* (COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#if (COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE)
#if (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0)
CONSTP2VAR(Com_CbkRxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxTOut_Array[COM_CBK_RX_T_OUT_ARRAY_SIZE] =
{
};
#else /* (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0) */
CONSTP2VAR(Com_CbkRxTOut_Type, AUTOMATIC, COM_RTE_CODE) Com_CbkRxTOut_Array[1] =
{
	NULL_PTR
};
#endif /* (COM_CBK_RX_T_OUT_ARRAY_SIZE > 0) */
#endif /* (COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX != COM_INDEX_NONE) */


#define COM_STOP_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
