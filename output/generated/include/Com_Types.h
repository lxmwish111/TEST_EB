#if (!defined COM_TYPES_H)
#define COM_TYPES_H
/* --------{ EB Automotive C Source File }-------- */ 

/* MISRA-C:2004 Deviations
 *
 * MISRA-1) Deviated Rule: 19.6 (required)
 * "'#undef' shall not be used"
 *
 * Reason:
 * The macros TS_RELOCATABLE_CFG_ENABLE and TS_RELOCATABLE_CFG_ENABLE might be used
 * by more modules than the Com modules. To avoid that this macro is used by other
 * modules accidentally an undef is used here.
 *
 */

#include <TSAutosar.h> /* EB specific standard types */
#include <Com_Cfg.h>   /* Pre-compile time configuration */
#define TS_RELOCATABLE_CFG_ENABLE COM_RELOCATABLE_CFG_ENABLE
#define TS_PB_CFG_PTR_CLASS COM_APPL_CONST
#include <TSPBConfig.h> /* Post Build Config Helpers */
/**
 * ComRxGroupSignalRefType
 */
typedef uint16 ComRxGroupSignalRefType;

/**
 * ComTxGroupSignalRefType
 */
typedef ComRxGroupSignalRefType ComTxGroupSignalRefType;

/**
 * ComSignalGroupRefType
 */
typedef uint16 ComSignalGroupRefType;

/**
 * ComFilterRefType
 */
typedef uint16 ComFilterRefType;

/**
 * ComSignalRefType
 */
typedef uint16 ComSignalRefType;

/**
 * ComIPduRefType
 */
typedef uint16 ComIPduRefType;

/**
 * ComConfigCheckType
 */
typedef uint16 ComConfigCheckType;

/**
 * ComGWDestinationType
 */
typedef struct {
    TS_REF2CFG( uint8 ) ComGWDestinationRef; /* ComGWDestinationRef */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComGWDestinationType; /* ComGWDestinationType */
} ComGWDestinationType;

/**
 * ComGWDestinationRefType
 */
typedef uint16 ComGWDestinationRefType;

/**
 * ComGWSourceType
 */
typedef struct {
    TS_REF2CFG( uint8 ) ComGWSourceRef; /* ComGWSourceRef */
    ComGWDestinationRefType ComGWDestinationNumRef; /* ComGWDestinationNumRef */
    ComGWDestinationRefType ComGWDestinationFirstRef; /* ComGWDestinationFirstRef */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComGWSourceType; /* ComGWSourceType */
} ComGWSourceType;

/**
 * Com_CbkTxAckIdxType
 */
typedef uint16 Com_CbkTxAckIdxType;

/**
 * Com_CbkRxTOutIdxType
 */
typedef uint16 Com_CbkRxTOutIdxType;

/**
 * ComSignalBitSizeType
 */
typedef uint8 ComSignalBitSizeType;

/**
 * ComTMSFlagsRefType
 */
typedef uint16 ComTMSFlagsRefType;

/**
 * ComSignalBufferRefType
 */
typedef uint16 ComSignalBufferRefType;

/**
 * Com_CbkTxErrPtrIdxType
 */
typedef uint16 Com_CbkTxErrPtrIdxType;

/**
 * ComSignalDescBitType
 */
typedef uint16 ComSignalDescBitType;

/**
 * ComTxSignalBasicType
 */
typedef struct {
    ComIPduRefType ComIPduRef; /* ComIPduRef */
    ComSignalDescBitType ComSignalPositionInBit; /* ComSignalPositionInBit */
    ComSignalDescBitType ComUpdateBitPositionInBit; /* ComUpdateBitPositionInBit */
    uint8 ComTxSignalFlags; /* ComTxSignalFlags (UINT8,LITTLE_ENDIAN,TRIGGERED,updateBit on) */
} ComTxSignalBasicType;

/**
 * ComTxSignalType
 */
typedef struct {
    ComTxSignalBasicType TxBasicParam; /* TxBasicParam */
    Com_CbkTxErrPtrIdxType ComErrorNotification; /* ComErrorNotification */
    ComFilterRefType ComFilterRef; /* ComFilterRef */
    ComSignalBufferRefType ComFilterSignalValueRef; /* ComFilterSignalValueRef */
    ComTMSFlagsRefType ComPositionOfTMSFlag; /* ComPositionOfTMSFlag */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    ComSignalBitSizeType ComBitSize; /* ComBitSize */
    uint8 ComFilterType; /* ComFilterType (ALWAYS) */
} ComTxSignalType;

/**
 * ComRxTimeoutFactorRefType
 */
typedef uint16 ComRxTimeoutFactorRefType;

/**
 * Com_CbkRxAckIdxType
 */
typedef uint16 Com_CbkRxAckIdxType;

/**
 * ComRxSignalFlagsType
 */
typedef uint8 ComRxSignalFlagsType;

/**
 * ComRxSignalBasicType
 */
typedef struct {
    ComIPduRefType ComIPduRef; /* ComIPduRef */
    ComSignalDescBitType ComSignalPositionInBit; /* ComSignalPositionInBit */
    ComSignalDescBitType ComUpdateBitPositionInBit; /* ComUpdateBitPositionInBit */
    ComRxSignalFlagsType ComRxSignalFlags; /* ComRxSignalFlags (UINT8,LITTLE_ENDIAN,COM_RX_DATA_TOUT_ACTION_NONE,COM_UPDATE_BIT_ABSENT,COM_RX_DM_OFF) */
    ComSignalBitSizeType ComBitSize; /* ComBitSize */
} ComRxSignalBasicType;

/**
 * ComRxSignalType
 */
typedef struct {
    ComRxSignalBasicType RxBasicParam; /* RxBasicParam */
    Com_CbkRxAckIdxType ComNotification; /* ComNotification */
    ComFilterRefType ComFilterRef; /* ComFilterRef */
    ComSignalBufferRefType ComFilterSignalValueRef; /* ComFilterSignalValueRef */
    ComRxTimeoutFactorRefType ComRxTimeoutFactorRef; /* ComRxTimeoutFactorRef */
    ComRxTimeoutFactorRefType ComRxFirstTimeoutFactorRef; /* ComRxFirstTimeoutFactorRef */
    ComSignalRefType RxSigDMQueueRef; /* RxSigDMQueueRef */
    Com_CbkRxTOutIdxType ComRxTimeoutNotification; /* ComRxTimeoutNotification */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComFilterType; /* ComFilterType */
} ComRxSignalType;

/**
 * ComFilterOneEveryNSizeType
 */
typedef uint16 ComFilterOneEveryNSizeType;

/**
 * ComFilterOneEveryNType
 */
typedef struct {
    ComFilterOneEveryNSizeType ComFilterPeriodFactor; /* ComFilterPeriodFactor */
    ComFilterOneEveryNSizeType ComFilterOffset; /* ComFilterOffset */
    ComFilterRefType ComFilterOccurrence; /* ComFilterOccurrence */
} ComFilterOneEveryNType;

/**
 * ComFilter32BitMaskXMinMaxType
 */
typedef struct {
    uint32 ComFilterMaskOrMin; /* ComFilterMaskOrMin */
    uint32 ComFilterXOrMax; /* ComFilterXOrMax */
} ComFilter32BitMaskXMinMaxType;

/**
 * ComFilter16BitMaskXMinMaxType
 */
typedef struct {
    uint16 ComFilterMaskOrMin; /* ComFilterMaskOrMin */
    uint16 ComFilterXOrMax; /* ComFilterXOrMax */
} ComFilter16BitMaskXMinMaxType;

/**
 * ComFilter8BitMaskXMinMaxType
 */
typedef struct {
    uint8 ComFilterMaskOrMin; /* ComFilterMaskOrMin */
    uint8 ComFilterXOrMax; /* ComFilterXOrMax */
} ComFilter8BitMaskXMinMaxType;

/**
 * ComFilter32BitMaskType
 */
typedef uint32 ComFilter32BitMaskType;

/**
 * ComFilter16BitMaskType
 */
typedef uint16 ComFilter16BitMaskType;

/**
 * ComFilter8BitMaskType
 */
typedef uint8 ComFilter8BitMaskType;

/**
 * ComRAMIdxType
 */
typedef uint16 ComRAMIdxType;

/**
 * ComTxGroupSignalType
 */
typedef struct {
    ComSignalDescBitType ComSignalPositionInBit; /* ComSignalPositionInBit */
    ComSignalGroupRefType ComSignalGroupRef; /* ComSignalGroupRef */
    ComFilterRefType ComFilterRef; /* ComFilterRef */
    ComSignalBufferRefType ComFilterSignalValueRef; /* ComFilterSignalValueRef */
    ComRAMIdxType ComPositionInComSignalGTMSFlags; /* ComPositionInComSignalGTMSFlags */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComTxGroupSignalFlags; /* ComTxGroupSignalFlags */
    ComSignalBitSizeType ComBitSize; /* ComBitSize */
    uint8 ComFilterType; /* ComFilterType */
} ComTxGroupSignalType;

/**
 * ComRxGroupSignalType
 */
typedef struct {
    ComSignalGroupRefType ComSignalGroupRef; /* ComSignalGroupRef */
    ComSignalDescBitType ComSignalPositionInBit; /* ComSignalPositionInBit */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComRxGroupSignalFlags; /* ComRxGroupSignalFlags */
    ComSignalBitSizeType ComBitSize; /* ComBitSize */
} ComRxGroupSignalType;

/**
 * ComTxTimeoutFactorType
 */
typedef uint16 ComTxTimeoutFactorType;

/**
 * ComRxFirstTimeoutFactorType
 */
typedef uint16 ComRxFirstTimeoutFactorType;

/**
 * ComRxTimeoutFactorType
 */
typedef uint16 ComRxTimeoutFactorType;

/**
 * ComSignalDescByteType
 */
typedef uint8 ComSignalDescByteType;

/**
 * ComTxSignalGroupType
 */
typedef struct {
    ComIPduRefType ComIPduRef; /* ComIPduRef */
    ComRAMIdxType ComSignalGroupValueRef; /* ComSignalGroupValueRef */
    ComSignalDescBitType ComUpdateBitPositionInBit; /* ComUpdateBitPositionInBit */
    Com_CbkTxErrPtrIdxType ComErrorNotification; /* ComErrorNotification */
    ComTxGroupSignalRefType ComGroupSignalWithFilterRefNum; /* ComGroupSignalWithFilterRefNum */
    ComRAMIdxType ComSignalGTMSFlagsRef; /* ComSignalGTMSFlagsRef */
    TS_REF2CFG( uint8 ) ComSignalGTMSFlagsInitValueRef; /* ComSignalGTMSFlagsInitValueRef */
    ComRAMIdxType ComPositionOfTMSFlag; /* ComPositionOfTMSFlag */
    ComTxGroupSignalRefType ComGroupSignalRefFirst; /* ComGroupSignalRefFirst */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComTxSignalGroupFlags; /* ComTxSignalGroupFlags */
    ComSignalDescByteType ComSignalPositionInByte; /* ComSignalPositionInByte */
    ComSignalDescByteType ComSignalPositionInByteLastPart; /* ComSignalPositionInByteLastPart */
    uint8 ComBitMaskFirstPart; /* ComBitMaskFirstPart */
    uint8 ComBitMaskLastPart; /* ComBitMaskLastPart */
    ComSignalDescByteType ComByteSize; /* ComByteSize */
} ComTxSignalGroupType;

/**
 * ComRxSignalGroupType
 */
typedef struct {
    ComIPduRefType ComIPduRef; /* ComIPduRef */
    ComRAMIdxType ComSignalGroupValueRef; /* ComSignalGroupValueRef */
    ComSignalDescBitType ComUpdateBitPositionInBit; /* ComUpdateBitPositionInBit */
    Com_CbkRxAckIdxType ComNotification; /* ComNotification */
    ComSignalGroupRefType RxGroupSignalFlagsRef; /* RxGroupSignalFlagsRef */
    ComRxTimeoutFactorRefType ComRxTimeoutFactorRef; /* ComRxTimeoutFactorRef */
    ComRxTimeoutFactorRefType ComRxFirstTimeoutFactorRef; /* ComRxFirstTimeoutFactorRef */
    Com_CbkRxTOutIdxType ComRxTimeoutNotification; /* ComRxTimeoutNotification */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComRxSignalGroupFlags; /* ComRxSignalGroupFlags */
    ComSignalDescByteType ComSignalPositionInByte; /* ComSignalPositionInByte */
    ComSignalDescByteType ComByteSize; /* ComByteSize */
} ComRxSignalGroupType;

/**
 * ComIPduGroupRefType
 */
typedef uint16 ComIPduGroupRefType;

/**
 * ComIPduGroupType
 */
typedef struct {
    ComIPduRefType ComIPduRefNum; /* ComIPduRefNum */
    ComIPduRefType ComIPduRefFirst; /* ComIPduRefFirst */
    ComIPduRefType ComRxIPduWithSigGWRefNum; /* ComRxIPduWithSigGWRefNum */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    uint8 ComIPduGroupFlags; /* ComIPduGroupFlags (RX,GROUP_OF_IPDUGROUPS) */
} ComIPduGroupType;

/**
 * ComTxModeTimePeriodFactorType
 */
typedef uint16 ComTxModeTimePeriodFactorType;

/**
 * ComTxModeTimeOffsetFactorType
 */
typedef uint16 ComTxModeTimeOffsetFactorType;

/**
 * ComTxModeRepetitionPeriodFactorType
 */
typedef uint16 ComTxModeRepetitionPeriodFactorType;

/**
 * ComTxModeMixedNTimesType
 */
typedef struct {
    ComTxModeRepetitionPeriodFactorType ComTxModeRepetitionPeriodFactor; /* ComTxModeRepetitionPeriodFactor */
    ComTxModeTimeOffsetFactorType ComTxModeTimeOffsetFactor; /* ComTxModeTimeOffsetFactor */
    ComTxModeTimePeriodFactorType ComTxModeTimePeriodFactor; /* ComTxModeTimePeriodFactor */
    uint8 ComTxModeNumberOfRepetitions; /* ComTxModeNumberOfRepetitions */
} ComTxModeMixedNTimesType;

/**
 * ComTxModePeriodicType
 */
typedef struct {
    ComTxModeTimeOffsetFactorType ComTxModeTimeOffsetFactor; /* ComTxModeTimeOffsetFactor */
    ComTxModeTimePeriodFactorType ComTxModeTimePeriodFactor; /* ComTxModeTimePeriodFactor */
} ComTxModePeriodicType;

/**
 * ComTxModeNTimesType
 */
typedef struct {
    ComTxModeRepetitionPeriodFactorType ComTxModeRepetitionPeriodFactor; /* ComTxModeRepetitionPeriodFactor */
    uint8 ComTxModeNumberOfRepetitions; /* ComTxModeNumberOfRepetitions */
} ComTxModeNTimesType;

/**
 * ComTxIPduMinimumDelayTimeFactorType
 */
typedef uint16 ComTxIPduMinimumDelayTimeFactorType;

/**
 * ComIPduSizeType
 */
typedef uint8 ComIPduSizeType;

/**
 * ComTxTimeoutFactorRefType
 */
typedef uint16 ComTxTimeoutFactorRefType;

/**
 * Com_CbkTxTOutIdxType
 */
typedef uint16 Com_CbkTxTOutIdxType;

/**
 * ComTxModeIdxType
 */
typedef uint16 ComTxModeIdxType;

/**
 * ComTxIPduMinimumDelayTimeFactorRefType
 */
typedef uint16 ComTxIPduMinimumDelayTimeFactorRefType;

/**
 * Com_CallOutFuncPtrRefType
 */
typedef uint16 Com_CallOutFuncPtrRefType;

/**
 * ComTxIPduType
 */
typedef struct {
    TS_REF2CFG( uint8 ) ComInitValueRef; /* ComInitValueRef */
    ComRAMIdxType ComIPduValueRef; /* ComIPduValueRef */
    ComSignalGroupRefType ComIPduSignalGroupRefNum; /* ComIPduSignalGroupRefNum */
    ComSignalGroupRefType ComIPduSignalGroupRefFirst; /* ComIPduSignalGroupRefFirst */
    ComSignalRefType ComIPduSignalRefNum; /* ComIPduSignalRefNum */
    ComTMSFlagsRefType ComIPduSignalWithFilterRefNum; /* ComIPduSignalWithFilterRefNum */
    ComTMSFlagsRefType ComIPduSignalGroupWithFilterRefNum; /* ComIPduSignalGroupWithFilterRefNum */
    ComRAMIdxType ComIPduTMSFlagsRef; /* ComIPduTMSFlagsRef */
    TS_REF2CFG( uint8 ) ComIPduTMSFlagsInitValueRef; /* ComIPduTMSFlagsInitValueRef */
    ComSignalRefType ComIPduSignalRefFirst; /* ComIPduSignalRefFirst */
    Com_CallOutFuncPtrRefType ComIPduCallOutFuncPtrRef; /* ComIPduCallOutFuncPtrRef */
    ComTxIPduMinimumDelayTimeFactorRefType ComTxIPduMinimumDelayTimeFactorRef; /* ComTxIPduMinimumDelayTimeFactorRef */
    ComIPduRefType MDTQueueRef; /* MDTQueueRef */
    ComTxModeIdxType ComTxModeTrueRef; /* ComTxModeTrueRef */
    ComTxModeIdxType ComTxModeFalseRef; /* ComTxModeFalseRef */
    ComIPduRefType PeriodicQueueRef; /* PeriodicQueueRef */
    ComIPduRefType NTimesQueueRef; /* NTimesQueueRef */
    Com_CbkTxTOutIdxType ComTxTimeoutNotificationFirst; /* ComTxTimeoutNotificationFirst */
    Com_CbkTxTOutIdxType ComTxTimeoutNotificationNum; /* ComTxTimeoutNotificationNum */
    ComTxTimeoutFactorRefType ComTxTimeoutFactorRef; /* ComTxTimeoutFactorRef */
    ComIPduRefType TxDMQueueRef; /* TxDMQueueRef */
    Com_CbkTxAckIdxType ComNotificationFirst; /* ComNotificationFirst */
    Com_CbkTxAckIdxType ComNotificationNum; /* ComNotificationNum */
    ComIPduRefType ComNotificationDeferredQueueRef; /* ComNotificationDeferredQueueRef */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    ComIPduSizeType ComIPduSize; /* ComIPduSize */
    uint8 ComTxIPduFlags; /* ComTxIPduFlags (IMMEDIATE,TM_TRUE,COM_RX_DM_OFF) */
    uint8 ComTxModeModes; /* ComTxModeModes (True=N_TIMES,False=<undef>) */
} ComTxIPduType;

/**
 * ComGWSourceRefType
 */
typedef uint16 ComGWSourceRefType;

/**
 * ComRxIPduType
 */
typedef struct {
    TS_REF2CFG( uint8 ) ComInitValueRef; /* ComInitValueRef */
    ComRAMIdxType ComIPduValueRef; /* ComIPduValueRef */
    ComSignalGroupRefType ComIPduSignalGroupRefNum; /* ComIPduSignalGroupRefNum */
    ComSignalGroupRefType ComIPduSignalGroupRefFirst; /* ComIPduSignalGroupRefFirst */
    ComSignalRefType ComIPduSignalRefNum; /* ComIPduSignalRefNum */
    ComSignalRefType ComIPduSignalWithBufferRefNum; /* ComIPduSignalWithBufferRefNum */
    ComSignalRefType ComIPduSignalW_F_A_NotiRefNum; /* ComIPduSignalW_F_A_NotiRefNum */
    ComSignalRefType ComIPduSignalWithDMOnly; /* ComIPduSignalWithDMOnly */
    ComSignalRefType ComIPduSignalRefFirst; /* ComIPduSignalRefFirst */
    Com_CallOutFuncPtrRefType ComIPduCallOutFuncPtrRef; /* ComIPduCallOutFuncPtrRef */
    Com_CbkRxTOutIdxType ComRxTimeoutNotificationFirst; /* ComRxTimeoutNotificationFirst */
    Com_CbkRxTOutIdxType ComRxTimeoutNotificationNum; /* ComRxTimeoutNotificationNum */
    ComRxTimeoutFactorRefType ComRxTimeoutFactorRef; /* ComRxTimeoutFactorRef */
    ComRxTimeoutFactorRefType ComRxFirstTimeoutFactorRef; /* ComRxFirstTimeoutFactorRef */
    ComIPduRefType RxDMQueueRef; /* RxDMQueueRef */
    ComIPduRefType ComIPduSigGWFlagBit; /* ComIPduSigGWFlagBit */
    ComGWSourceRefType ComIPduGWSourceRefNum; /* ComIPduGWSourceRefNum */
    ComGWSourceRefType ComIPduGWSourceRefFirst; /* ComIPduGWSourceRefFirst */
    ComConfigCheckType ComConfigCheckData; /* ComConfigCheckData */
    ComIPduSizeType ComIPduSize; /* ComIPduSize */
    uint8 ComRxIPduFlags; /* ComRxIPduFlags (IMMEDIATE,COM_RX_DM_OFF) */
} ComRxIPduType;

/**
 * Com_ConfigType
 */
typedef struct {
    uint32 ComConfigurationId; /* ComConfigurationId */
    ComRAMIdxType ComRxIPduStatusBase; /* ComRxIPduStatusBase */
    ComRAMIdxType ComTxIPduStatusBase; /* ComTxIPduStatusBase */
    ComRAMIdxType ComTxSignalGroupStatusBase; /* ComTxSignalGroupStatusBase */
    ComRAMIdxType ComBufferBaseUInt32; /* ComBufferBaseUInt32 */
    ComRAMIdxType ComBufferBaseSInt32; /* ComBufferBaseSInt32 */
    ComRAMIdxType ComBufferBaseUInt16; /* ComBufferBaseUInt16 */
    ComRAMIdxType ComBufferBaseSInt16; /* ComBufferBaseSInt16 */
    ComRAMIdxType ComBufferBaseUInt8; /* ComBufferBaseUInt8 */
    ComRAMIdxType ComBufferBaseSInt8; /* ComBufferBaseSInt8 */
    ComRAMIdxType ComBufferBaseBool; /* ComBufferBaseBool */
    ComRAMIdxType ComFilterOneEveryNBase; /* ComFilterOneEveryNBase */
    ComRAMIdxType ComSigGWRxPduFlagBase; /* ComSigGWRxPduFlagBase */
    ComRAMIdxType ComMDTQueueBase; /* ComMDTQueueBase */
    ComIPduRefType ComMDTQueueMax; /* ComMDTQueueMax */
    ComRAMIdxType ComPeriodicQueueBase; /* ComPeriodicQueueBase */
    ComIPduRefType ComPeriodicQueueMax; /* ComPeriodicQueueMax */
    ComRAMIdxType ComNTimesQueueBaseNextTime; /* ComNTimesQueueBaseNextTime */
    ComRAMIdxType ComNTimesQueueBaseRemaining; /* ComNTimesQueueBaseRemaining */
    ComIPduRefType ComNTimesQueueMax; /* ComNTimesQueueMax */
    ComRAMIdxType ComRxTimeoutQueueBase; /* ComRxTimeoutQueueBase */
    ComIPduRefType ComRxTimeoutQueueMax; /* ComRxTimeoutQueueMax */
    TS_REF2CFG( ComIPduRefType ) ComRxTimeoutQueueListRef; /* ComRxTimeoutQueueListRef */
    Com_CbkRxTOutIdxType ComRxTimeoutSignalQueueBase; /* ComRxTimeoutSignalQueueBase */
    ComRAMIdxType ComRxTimeoutSignalStatusQueueBase; /* ComRxTimeoutSignalStatusQueueBase */
    ComSignalRefType ComRxTimeoutSignalQueueMax; /* ComRxTimeoutSignalQueueMax */
    TS_REF2CFG( ComSignalRefType ) ComRxTimeoutSignalQueueListRef; /* ComRxTimeoutSignalQueueListRef */
    ComRAMIdxType ComRxDMInvSignalGroupStatusQueueBase; /* ComRxDMInvSignalGroupStatusQueueBase */
    ComRAMIdxType ComRxTimeoutSignalGroupQueueBase; /* ComRxTimeoutSignalGroupQueueBase */
    ComSignalGroupRefType ComRxTimeoutSignalGroupQueueMax; /* ComRxTimeoutSignalGroupQueueMax */
    TS_REF2CFG( ComSignalGroupRefType ) ComRxTimeoutSignalGroupQueueListRef; /* ComRxTimeoutSignalGroupQueueListRef */
    ComRAMIdxType ComTxTimeoutQueueBase; /* ComTxTimeoutQueueBase */
    ComIPduRefType ComTxTimeoutQueueMax; /* ComTxTimeoutQueueMax */
    ComRAMIdxType ComCbkTxAckDeferredStatusBase; /* ComCbkTxAckDeferredStatusBase */
    ComIPduRefType ComCbkTxAckDeferredListMax; /* ComCbkTxAckDeferredListMax */
    TS_REF2CFG( ComRxIPduType ) ComRxIPduRef; /* ComRxIPduRef */
    TS_REF2CFG( ComTxIPduType ) ComTxIPduRef; /* ComTxIPduRef */
    TS_REF2CFG( ComTxIPduMinimumDelayTimeFactorType ) ComTxIPduMinimumDelayTimeFactorRef; /* ComTxIPduMinimumDelayTimeFactorRef */
    TS_REF2CFG( ComTxModeNTimesType ) ComTxModeNTimesRef; /* ComTxModeNTimesRef */
    TS_REF2CFG( ComTxModePeriodicType ) ComTxModePeriodicRef; /* ComTxModePeriodicRef */
    TS_REF2CFG( ComTxModeMixedNTimesType ) ComTxModeMixedNTimesRef; /* ComTxModeMixedNTimesRef */
    TS_REF2CFG( ComIPduGroupType ) ComIPduGroupRef; /* ComIPduGroupRef */
    TS_REF2CFG( ComIPduGroupRefType ) ComIPduGroupListRef; /* ComIPduGroupListRef */
    TS_REF2CFG( ComIPduRefType ) ComRxIPduListRef; /* ComRxIPduListRef */
    TS_REF2CFG( ComIPduRefType ) ComTxIPduListRef; /* ComTxIPduListRef */
    TS_REF2CFG( ComSignalGroupRefType ) ComRxIPduSignalGroupListRef; /* ComRxIPduSignalGroupListRef */
    TS_REF2CFG( ComSignalGroupRefType ) ComTxIPduSignalGroupListRef; /* ComTxIPduSignalGroupListRef */
    TS_REF2CFG( ComSignalRefType ) ComRxIPduSignalListRef; /* ComRxIPduSignalListRef */
    TS_REF2CFG( ComSignalRefType ) ComTxIPduSignalListRef; /* ComTxIPduSignalListRef */
    TS_REF2CFG( ComRxSignalGroupType ) ComRxSignalGroupRef; /* ComRxSignalGroupRef */
    TS_REF2CFG( ComTxSignalGroupType ) ComTxSignalGroupRef; /* ComTxSignalGroupRef */
    TS_REF2CFG( ComTxGroupSignalRefType ) ComTxSignalGroupGroupSignalListRef; /* ComTxSignalGroupGroupSignalListRef */
    TS_REF2CFG( ComRxTimeoutFactorType ) ComRxTimeoutFactorRef; /* ComRxTimeoutFactorRef */
    TS_REF2CFG( ComRxFirstTimeoutFactorType ) ComRxFirstTimeoutFactorRef; /* ComRxFirstTimeoutFactorRef */
    TS_REF2CFG( ComTxTimeoutFactorType ) ComTxTimeoutFactorRef; /* ComTxTimeoutFactorRef */
    TS_REF2CFG( ComRxGroupSignalType ) ComRxGroupSignalRef; /* ComRxGroupSignalRef */
    TS_REF2CFG( ComTxGroupSignalType ) ComTxGroupSignalRef; /* ComTxGroupSignalRef */
    TS_REF2CFG( ComFilter8BitMaskType ) ComFilter8BitMaskRef; /* ComFilter8BitMaskRef */
    TS_REF2CFG( ComFilter16BitMaskType ) ComFilter16BitMaskRef; /* ComFilter16BitMaskRef */
    TS_REF2CFG( ComFilter32BitMaskType ) ComFilter32BitMaskRef; /* ComFilter32BitMaskRef */
    TS_REF2CFG( ComFilter8BitMaskXMinMaxType ) ComFilter8BitMaskXMinMaxRef; /* ComFilter8BitMaskXMinMaxRef */
    TS_REF2CFG( ComFilter16BitMaskXMinMaxType ) ComFilter16BitMaskXMinMaxRef; /* ComFilter16BitMaskXMinMaxRef */
    TS_REF2CFG( ComFilter32BitMaskXMinMaxType ) ComFilter32BitMaskXMinMaxRef; /* ComFilter32BitMaskXMinMaxRef */
    TS_REF2CFG( ComFilterOneEveryNType ) ComFilterOneEveryNRef; /* ComFilterOneEveryNRef */
    TS_REF2CFG( ComRxSignalType ) ComRxSignalRef; /* ComRxSignalRef */
    TS_REF2CFG( ComTxSignalType ) ComTxSignalRef; /* ComTxSignalRef */
    TS_REF2CFG( Com_CbkRxTOutIdxType ) ComRxTimeoutNotificationRef; /* ComRxTimeoutNotificationRef */
    TS_REF2CFG( Com_CbkRxTOutIdxType ) ComTxTimeoutNotificationRef; /* ComTxTimeoutNotificationRef */
    TS_REF2CFG( Com_CbkTxAckIdxType ) ComTxNotificationRef; /* ComTxNotificationRef */
    TS_REF2CFG( ComGWSourceType ) ComGWSourceRef; /* ComGWSourceRef */
    TS_REF2CFG( ComGWDestinationType ) ComGWDestinationRef; /* ComGWDestinationRef */
    ComIPduRefType ComRxIPduArraySize; /* ComRxIPduArraySize */
    ComIPduRefType ComTxIPduArraySize; /* ComTxIPduArraySize */
    ComSignalRefType ComRxSignalArraySize; /* ComRxSignalArraySize */
    ComSignalRefType ComTxSignalArraySize; /* ComTxSignalArraySize */
    ComFilterRefType ComFilterOneEveryNArraySize; /* ComFilterOneEveryNArraySize */
    uint16 ComIPduGroupArraySize; /* ComIPduGroupArraySize */
    uint16 ComIPduGroupsWithSigGW; /* ComIPduGroupsWithSigGW */
    ComSignalGroupRefType ComTxSignalGroupArraySize; /* ComTxSignalGroupArraySize */
    ComSignalGroupRefType ComRxSignalGroupArraySize; /* ComRxSignalGroupArraySize */
    ComTxGroupSignalRefType ComTxGroupSignalArraySize; /* ComTxGroupSignalArraySize */
    ComRxGroupSignalRefType ComRxGroupSignalArraySize; /* ComRxGroupSignalArraySize */
} Com_ConfigType;



/* Deviation MISRA-1 */
#undef TS_PB_CFG_PTR_CLASS

/* Deviation MISRA-1 */
#undef TS_RELOCATABLE_CFG_ENABLE

#endif /* if !defined( COM_TYPES_H ) */
/*==================[end of file]===========================================*/
