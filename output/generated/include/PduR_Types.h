/* --------{ EB Automotive C Source File }-------- */ 
#if (!defined PDUR_TYPES_H)
#define PDUR_TYPES_H

/* 
 * MISRA-C:2004 Deviations:
 *
 * MISRA-1) Deviated Rule: 19.6 (required)
 *   '#undef' shall not be used.
 *
 *   Reason:
 *   The macros TS_RELOCATABLE_CFG_ENABLE and TS_PB_CFG_PTR_CLASS might be used by more
 *   modules than the PduR modules. To avoid that this macro is used by other modules
 *   accidentally an undef is used here.
 */

#include <TSAutosar.h> /* Standard Types */
#include <ComStack_Types.h>   /* Comstack Types */
#include <PduR_Cfg.h>   /* Pre-compile time configuration */
#define TS_RELOCATABLE_CFG_ENABLE PDUR_RELOCATABLE_CFG_ENABLE
#define TS_PB_CFG_PTR_CLASS PDUR_APPL_CONST
#include <TSPBConfig.h> /* Post Build Config Helpers */

/*==================[type definitions]======================================*/

typedef enum
{
	PDUR_UNINIT,
	PDUR_ONLINE
} PduR_StateType;

typedef enum
{
	PDU_CNLDO,
	PDU_CNLNB,
	PDU_CNLOR
} PduR_CancelReasonType;

typedef uint8 PduR_ParameterValueType;

/**
 * PduR_RefToRAM
 */
typedef uint16 PduR_RefToRAM;

/**
 * PduR_RefToModuleAPI
 */
typedef uint16 PduR_RefToModuleAPI;

/**
 * PduR_PduIdType
 */
typedef uint16 PduR_PduIdType;

/**
 * PduR_AbstractRoutingTableEntry
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
} PduR_AbstractRoutingTableEntry;

/**
 * PduR_RTabUpIfTxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
} PduR_RTabUpIfTxType;

/**
 * PduR_RTabUpIfTxConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_RTabUpIfTxType ) RTabTxRef; /* RTabTxRef */
    PduR_PduIdType RTabTxCount; /* RTabTxCount */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef: CanIf */
} PduR_RTabUpIfTxConfigType;

/**
 * PduR_RTabLoIfType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef: Com */
} PduR_RTabLoIfType;

/**
 * PduR_RTabLoIfConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_RTabLoIfType ) RTabRxRef; /* RTabRxRef */
    TS_REF2CFG( PduR_RTabLoIfType ) RTabTxRef; /* RTabTxRef */
    PduR_PduIdType RTabRxCount; /* RTabRxCount */
    PduR_PduIdType RTabTxCount; /* RTabTxCount */
    PduR_PduIdType TxConfPduIdMin; /* TxConfPduIdMin */
} PduR_RTabLoIfConfigType;

/**
 * PduR_GMPduIdType
 */
typedef uint16 PduR_GMPduIdType;

/**
 * PduR_GTabTpRxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_GMPduIdType GMPduId; /* GMPduId */
    uint16 NumBufferMax; /* NumBufferMax */
    uint16 TpChunkSize; /* TpChunkSize */
    PduR_GMPduIdType GMPduIdCount; /* GMPduIdCount */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
} PduR_GTabTpRxType;

/**
 * PduR_GTabTpConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_GTabTpRxType ) GTabRxRef; /* GTabRxRef */
    PduR_PduIdType GTabRxCount; /* GTabRxCount */
} PduR_GTabTpConfigType;

/**
 * PduR_GTabIfRxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    uint16 BufferId; /* BufferId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
    uint8 SduLength; /* SduLength */
} PduR_GTabIfRxType;

/**
 * PduR_GTabIfConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_GTabIfRxType ) GTabRxRef; /* GTabRxRef */
    PduR_PduIdType GTabRxCount; /* GTabRxCount */
} PduR_GTabIfConfigType;

/**
 * PduR_MTabUpTpTxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_PduIdType UprLyrTxPduId; /* UprLyrTxPduId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
    PduR_RefToModuleAPI SourceModuleAPIRef; /* SourceModuleAPIRef */
    uint8 MoreEntries; /* MoreEntries */
} PduR_MTabUpTpTxType;

/**
 * PduR_MTabUpTpConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_MTabUpTpTxType ) MTabTxRef; /* MTabTxRef */
    PduR_PduIdType MTabTxCount; /* MTabTxCount */
} PduR_MTabUpTpConfigType;

/**
 * PduR_MTabLoTpRxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
} PduR_MTabLoTpRxType;

/**
 * PduR_MTabLoTpConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_MTabLoTpRxType ) MTabRxRef; /* MTabRxRef */
    PduR_PduIdType MTabRxCount; /* MTabRxCount */
} PduR_MTabLoTpConfigType;

/**
 * PduR_MTabUpIfTxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
    uint8 MoreEntries; /* MoreEntries */
} PduR_MTabUpIfTxType;

/**
 * PduR_MTabUpIfConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_MTabUpIfTxType ) MTabTxRef; /* MTabTxRef */
    PduR_PduIdType MTabTxCount; /* MTabTxCount */
} PduR_MTabUpIfConfigType;

/**
 * PduR_MTabLoIfRxType
 */
typedef struct {
    PduR_PduIdType TargetPduId; /* TargetPduId */
    PduR_RefToModuleAPI TargetModuleAPIRef; /* TargetModuleAPIRef */
    uint8 MoreEntries; /* MoreEntries */
} PduR_MTabLoIfRxType;

/**
 * PduR_MTabLoIfConfigType
 */
typedef struct {
    TS_REF2CFG( PduR_MTabLoIfRxType ) MTabRxRef; /* MTabRxRef */
    PduR_PduIdType MTabRxCount; /* MTabRxCount */
} PduR_MTabLoIfConfigType;

/**
 * PduR_PduLengthType
 */
typedef uint32 PduR_PduLengthType;

/**
 * PduR_TpBufferInfoType
 */
typedef struct {
    PduR_PduLengthType BufferLength; /* BufferLength */
    PduR_RefToRAM BufferDataRef; /* BufferDataRef */
} PduR_TpBufferInfoType;

/**
 * PduR_BufTpConfigType
 */
typedef struct {
    PduR_TpBufferInfoType TpBuffer; /* TpBuffer */
    uint16 Index; /* Index */
} PduR_BufTpConfigType;

/**
 * PduR_BufTfConfigType
 */
typedef struct {
    TS_REF2CFG( uint8 ) DefaultRef; /* DefaultRef */
    PduR_RefToRAM MemRef; /* MemRef */
    uint8 Length; /* Length */
    uint8 Depth; /* Depth */
} PduR_BufTfConfigType;

/**
 * PduR_BufDfConfigType
 */
typedef struct {
    PduR_RefToRAM MemRef; /* MemRef */
    uint8 Length; /* Length */
    uint8 Depth; /* Depth */
} PduR_BufDfConfigType;

/**
 * PduR_BufSbConfigType
 */
typedef struct {
    TS_REF2CFG( uint8 ) DefaultRef; /* DefaultRef */
    PduR_RefToRAM MemRef; /* MemRef */
    uint8 Length; /* Length */
} PduR_BufSbConfigType;

/**
 * PduR_PBConfigType
 */
typedef struct {
    uint32 PduR_ConfigurationId; /* PduR_ConfigurationId */
    TS_REF2CFG( uint8 ) PduR_BufDefaultRef; /* PduR_BufDefaultRef */
    TS_REF2CFG( PduR_BufSbConfigType ) PduR_BufSbConfigRef; /* PduR_BufSbConfigRef */
    TS_REF2CFG( PduR_BufDfConfigType ) PduR_BufDfConfigRef; /* PduR_BufDfConfigRef */
    TS_REF2CFG( PduR_BufTfConfigType ) PduR_BufTfConfigRef; /* PduR_BufTfConfigRef */
    TS_REF2CFG( PduR_BufTpConfigType ) PduR_BufTpConfigRef; /* PduR_BufTpConfigRef */
    PduR_MTabLoIfConfigType PduR_MTabLoIfConfig; /* PduR_MTabLoIfConfig */
    PduR_MTabUpIfConfigType PduR_MTabUpIfConfig; /* PduR_MTabUpIfConfig */
    PduR_MTabLoTpConfigType PduR_MTabLoTpConfig; /* PduR_MTabLoTpConfig */
    PduR_MTabUpTpConfigType PduR_MTabUpTpConfig; /* PduR_MTabUpTpConfig */
    PduR_GTabIfConfigType PduR_GTabIfConfig; /* PduR_GTabIfConfig */
    PduR_GTabTpConfigType PduR_GTabTpConfig; /* PduR_GTabTpConfig */
    PduR_RTabLoIfConfigType PduR_RTabLoIfConfig[1]; /* PduR_RTabLoIfConfig */
    PduR_RTabUpIfTxConfigType PduR_RTabUpIfTxConfig[2]; /* PduR_RTabUpIfTxConfig */
    uint16 PduR_MaxRoutingPathNumber; /* PduR_MaxRoutingPathNumber */
    uint16 PduR_BufSbCount; /* PduR_BufSbCount */
    uint16 PduR_BufDfCount; /* PduR_BufDfCount */
    uint16 PduR_BufTfCount; /* PduR_BufTfCount */
    uint16 PduR_BufTpCount; /* PduR_BufTpCount */
    PduR_RefToRAM PduR_MultiTpTxSessionInfoRef; /* PduR_MultiTpTxSessionInfoRef */
    PduR_RefToRAM PduR_MultiTpRxSessionInfoRef; /* PduR_MultiTpRxSessionInfoRef */
    PduR_RefToRAM PduR_BufDfInfoRef; /* PduR_BufDfInfoRef */
    PduR_RefToRAM PduR_BufTfInfoRef; /* PduR_BufTfInfoRef */
    PduR_RefToRAM PduR_BufTpInfoRef; /* PduR_BufTpInfoRef */
    PduR_RefToRAM PduR_TpSessionInfoRef; /* PduR_TpSessionInfoRef */
    PduR_RefToRAM PduR_BufTpPduInfoRef; /* PduR_BufTpPduInfoRef */
    uint8 PduR_HandleMultiTpRxInParallel; /* PduR_HandleMultiTpRxInParallel */
    uint8 PduR_HandleMultiTpTxInParallel; /* PduR_HandleMultiTpTxInParallel */
} PduR_PBConfigType;

/**
 * PduR_TpSessionInfoType
 */
typedef struct {
    PduR_PduLengthType TpSduLength; /* TpSduLength */
    PduR_PduIdType GMPduId; /* GMPduId */
    uint16 NumBuffer; /* NumBuffer */
    PduR_RefToRAM RxBufferCurRef; /* RxBufferCurRef */
    PduR_RefToRAM TxBufferCurRef; /* TxBufferCurRef */
    PduR_RefToRAM TxBufferQueueRef; /* TxBufferQueueRef */
    uint8 GMTxConfCount; /* GMTxConfCount */
    uint8 RejTxCount; /* RejTxCount */
    uint8 State; /* State */
} PduR_TpSessionInfoType;

/**
 * PduR_BufTpInfoType
 */
typedef struct {
    P2CONST( PduR_BufTpConfigType, TYPEDEF, PDUR_APPL_CONST ) BufTpConfigRef; /* BufTpConfigRef */
    PduR_RefToRAM NextBuffer; /* NextBuffer */
} PduR_BufTpInfoType;

/**
 * PduR_BufDfInfoType
 */
typedef struct {
    uint8 ConfP; /* ConfP */
    uint8 Count; /* Count */
    uint8 HeadPos; /* HeadPos */
    uint8 InTransmission; /* InTransmission */
} PduR_BufDfInfoType;

/**
 * PduR_BufTfInfoType
 */
typedef struct {
    uint8 ConfP; /* ConfP */
    uint8 Count; /* Count */
    uint8 HeadPos; /* HeadPos */
} PduR_BufTfInfoType;

/**
 * PduR_BufSbDynPyldInfoType
 */
typedef struct {
    uint8 UsedSduLength; /* UsedSduLength */
} PduR_BufSbDynPyldInfoType;

/**
 * PduR_MultiTpTxSessionInfoType
 */
typedef struct {
    PduInfoType *UpTpTxPduInfoPtr; /* UpTpTxPduInfoPtr */
    PduR_PduIdType MTpTxPduId; /* MTpTxPduId */
    NotifResultType ResultTxConf; /* ResultTxConf */
    uint8 RetValProvTxBufToLoTp; /* RetValProvTxBufToLoTp */
    uint8 Status; /* Status */
} PduR_MultiTpTxSessionInfoType;

/**
 * PduR_MultiTpRxSessionInfoType
 */
typedef struct {
    PduInfoType *GateTpRxPduInfoPtr; /* GateTpRxPduInfoPtr */
    PduR_PduIdType MTpRxPduId; /* MTpRxPduId */
} PduR_MultiTpRxSessionInfoType;



/** \brief Pointer to PduInfoType
 ** Avoids nested compiler abstractions due to requirement COMPILER058 **/
typedef P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduR_PduInfoPtrType;

/*------------------[function pointer types]--------------------------------*/

/** \brief Function pointer type used for indication functions of interface
 ** modules **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_IfRxIndFpType)
(
  PduIdType RxPduId,
  P2CONST(uint8,AUTOMATIC,PDUR_APPL_DATA) SduPtr
);

/** \brief Function pointer type used for indication functions of interface
 ** modules (dynamic payload) **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_IfRxIndDynPyldFpType)
(
  PduIdType RxPduId,
  P2CONST(PduInfoType,AUTOMATIC,PDUR_APPL_DATA) PduInfoPtr
);

/** \brief Function pointer type used for confirmation functions of interface
 ** modules **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_IfTxConfFpType)
(
  PduIdType TxPduId
);

/** \brief Function pointer type used for trigger transmit functions of
 ** interface modules **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_IfTrTxFpType)
(
  PduIdType TxPduId,
  P2VAR(uint8,AUTOMATIC,PDUR_APPL_DATA) SduPtr
);


/** \brief Function pointer type used for provide reception buffer functions
 ** of TP modules **/
typedef P2FUNC(BufReq_ReturnType,PDUR_APPL_CODE,PduR_TpProvRxBufFpType)
(
  PduIdType RxPduId,
  PduLengthType TpSduLength,
  P2VAR(PduR_PduInfoPtrType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
);

/** \brief Function pointer type used for indication functions
 ** of TP modules **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_TpRxIndFpType)
(
  PduIdType RxPduId,
  NotifResultType Result
);

/** \brief Function pointer type used for provide transmission buffer
 ** functions of TP modules **/
typedef P2FUNC(BufReq_ReturnType,PDUR_APPL_CODE,PduR_TpProvTxBufFpType)
(
  PduIdType TxPduId,
  P2VAR(PduR_PduInfoPtrType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr,
  PduLengthType Length
);

/** \brief Function pointer type used for confirmation functions
 ** of TP modules **/
typedef P2FUNC(void,PDUR_APPL_CODE,PduR_TpTxConfFpType)
(
  PduIdType TxPduId,
  NotifResultType Result
);

/** \brief Function pointer type used for transmit functions provided to
 ** upper layer modules **/
typedef P2FUNC(Std_ReturnType,PDUR_APPL_CODE,PduR_TransmitFpType)
(
  PduIdType TxPduId,
  P2CONST(PduInfoType,AUTOMATIC,PDUR_APPL_DATA) PduInfoPtr
);

#if (PDUR_CANCEL_TRANSMIT_SUPPORT == STD_ON)
/** \brief Function pointer type used for cancel transmit request functions provided to
 ** upper layer module Dcm **/
typedef P2FUNC(Std_ReturnType,PDUR_APPL_CODE,PduR_CancelTransmitRequestFpType)
(
  PduIdType      PduId,
  PduR_CancelReasonType      PduCancelReason
);
#endif /*if (PDUR_CANCEL_TRANSMIT_SUPPORT == STD_ON)*/

#if (PDUR_CHANGE_PARAMETER_SUPPORT == STD_ON)
/** \brief Function pointer type used for change parameter request functions provided to
 ** upper layer module Dcm **/
typedef P2FUNC(void,PDUR_APPL_CODE, PduR_ChangeParameterRequestFpType)
(
  PduIdType      PduId,
  PduR_ParameterValueType      PduParameterValue
);

typedef P2FUNC(void,PDUR_APPL_CODE, PduR_ChangeParameterConfirmationFpType)
(
  PduIdType    PduId,
  NotifResultType  Result
);
#endif /*if (PDUR_CHANGE_PARAMETER_SUPPORT == STD_ON)*/


/*------------------[Module API table type]---------------------------------*/

/**
 * type for If module API
 */
typedef struct
{
    PduR_TransmitFpType IfTransmit; /**< pointer to xIf_Transmit() */
    PduR_IfTrTxFpType IfTriggerTransmit; /**< pointer to x_TriggerTransmit() */
    PduR_IfTxConfFpType IfTxConfirmation; /**< pointer to x_TxConfirmation() */
    PduR_IfRxIndFpType IfRxIndication; /**< pointer to x_RxIndication() */
#if (PDUR_DYNPAYLOAD_SUPPORT == STD_ON)
    PduR_IfRxIndDynPyldFpType IfRxIndicationDynPyld; /**< pointer to x_RxIndicationDynPyld() */
#endif /* (PDUR_DYNPAYLOAD_SUPPORT == STD_ON) */
} PduR_IfModuleAPIType;

/**
 * type for Tp module API
 */
typedef struct
{
    PduR_TransmitFpType TpTransmit; /**< pointer to xTp_Transmit() */
    PduR_TpProvTxBufFpType TpProvideTxBuffer; /**< pointer to x_ProvideTxBuffer() */
    PduR_TpTxConfFpType TpTxConfirmation; /**< pointer to x_TxConfirmation() */
    PduR_TpProvRxBufFpType TpProvideRxBuffer; /**< pointer to x_ProvideRxBuffer() */
    PduR_TpRxIndFpType TpRxIndication; /**< pointer to x_RxIndication() */
} PduR_TpModuleAPIType;

/* Deviation MISRA-1 */
#undef TS_RELOCATABLE_CFG_ENABLE

/* Deviation MISRA-1 */
#undef TS_PB_CFG_PTR_CLASS

#endif /* if !defined( PDUR_TYPES_H ) */
/*==================[end of file]===========================================*/
