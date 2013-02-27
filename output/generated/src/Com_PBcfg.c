/* --------{ EB Automotive C Source File }-------- */ 
/**
 ** Misra Deviations:
 ** 1) Deviation against MISRA-C:2004 Rule 19.6 (required) @ MisraDeviation_1:
 **
 **    Description:
 **    '#undef' shall not be used
 **
 **    Reason:
 **    The macro TS_RELOCATABLE_CFG_ENABLE, TS_PB_CFG_NAME, TS_RELOCATABLE_CFG_ENABLE
 **    might be used by more modules than the Com module. To avoid that this macro is
 **    used by other modules accidentally a undef is used here.
 **/

/*==================[inclusions]============================================*/

#include <Com_Defs.h>
#include <TSAutosar.h>    /* EB specific standard types */
#include <Com_PBcfg.h>    /* Post Build configuration */
#include <Com_Api.h>      /* get SET_REF2CONFIG macro */
#include <Compiler.h>
#include <Com_Cfg.h>      /* Post pre-compile configuration */

#define COM_CONFIG_LAYOUT_TYPE Com_ConfigLayoutType
#define TS_PB_CFG_NAME COM_CONFIG_NAME
#define TS_PB_CFG_LAYOUT_TYPE COM_CONFIG_LAYOUT_TYPE
#define TS_RELOCATABLE_CFG_ENABLE COM_RELOCATABLE_CFG_ENABLE
#include <TSPBConfig.h>


/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/* start data section declaration */
#define COM_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/**
 * COM_CONFIG_NAME
 */
Com_ConstConfigLayoutType COM_CONFIG_NAME = {
    { /* Com_RootConfig */
        UINT32_C( 0 ), /* ComConfigurationId */
        UINT16_C( 4 ), /* ComRxIPduStatusBase */
        UINT16_C( 5 ), /* ComTxIPduStatusBase */
        UINT16_C( 0 ), /* ComTxSignalGroupStatusBase */
        UINT16_C( 0 ), /* ComBufferBaseUInt32 */
        UINT16_C( 0 ), /* ComBufferBaseSInt32 */
        UINT16_C( 0 ), /* ComBufferBaseUInt16 */
        UINT16_C( 0 ), /* ComBufferBaseSInt16 */
        UINT16_C( 0 ), /* ComBufferBaseUInt8 */
        UINT16_C( 0 ), /* ComBufferBaseSInt8 */
        UINT16_C( 0 ), /* ComBufferBaseBool */
        UINT16_C( 0 ), /* ComFilterOneEveryNBase */
        UINT16_C( 0 ), /* ComSigGWRxPduFlagBase */
        UINT16_C( 0 ), /* ComMDTQueueBase */
        UINT16_C( 0 ), /* ComMDTQueueMax */
        UINT16_C( 0 ), /* ComPeriodicQueueBase */
        UINT16_C( 0 ), /* ComPeriodicQueueMax */
        UINT16_C( 0 ), /* ComNTimesQueueBaseNextTime */
        UINT16_C( 6 ), /* ComNTimesQueueBaseRemaining */
        UINT16_C( 1 ), /* ComNTimesQueueMax */
        UINT16_C( 0 ), /* ComRxTimeoutQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutQueueMax */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutQueueListRef */
        UINT16_C( 0 ), /* ComRxTimeoutSignalQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalStatusQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalQueueMax */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutSignalQueueListRef */
        UINT16_C( 0 ), /* ComRxDMInvSignalGroupStatusQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalGroupQueueBase */
        UINT16_C( 0 ), /* ComRxTimeoutSignalGroupQueueMax */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutSignalGroupQueueListRef */
        UINT16_C( 0 ), /* ComTxTimeoutQueueBase */
        UINT16_C( 0 ), /* ComTxTimeoutQueueMax */
        UINT16_C( 0 ), /* ComCbkTxAckDeferredStatusBase */
        UINT16_C( 0 ), /* ComCbkTxAckDeferredListMax */
        TS_MAKEREF2CFG( ComRxIPdu[0] ), /* ComRxIPduRef */
        TS_MAKEREF2CFG( ComTxIPdu[0] ), /* ComTxIPduRef */
        TS_MAKEREF2CFG( ComTxIPduMinimumDelayTimeFactor[0] ), /* ComTxIPduMinimumDelayTimeFactorRef */
        TS_MAKEREF2CFG( ComTxModeNTimes[0] ), /* ComTxModeNTimesRef */
        TS_MAKENULLREF2CFG, /* ComTxModePeriodicRef */
        TS_MAKENULLREF2CFG, /* ComTxModeMixedNTimesRef */
        TS_MAKEREF2CFG( ComIPduGroup[0] ), /* ComIPduGroupRef */
        TS_MAKEREF2CFG( ComIPduGroupList[0] ), /* ComIPduGroupListRef */
        TS_MAKEREF2CFG( ComRxIPduList[0] ), /* ComRxIPduListRef */
        TS_MAKEREF2CFG( ComTxIPduList[0] ), /* ComTxIPduListRef */
        TS_MAKENULLREF2CFG, /* ComRxIPduSignalGroupListRef */
        TS_MAKENULLREF2CFG, /* ComTxIPduSignalGroupListRef */
        TS_MAKEREF2CFG( ComRxIPduSignalList[0] ), /* ComRxIPduSignalListRef */
        TS_MAKEREF2CFG( ComTxIPduSignalList[0] ), /* ComTxIPduSignalListRef */
        TS_MAKENULLREF2CFG, /* ComRxSignalGroupRef */
        TS_MAKENULLREF2CFG, /* ComTxSignalGroupRef */
        TS_MAKENULLREF2CFG, /* ComTxSignalGroupGroupSignalListRef */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutFactorRef */
        TS_MAKENULLREF2CFG, /* ComRxFirstTimeoutFactorRef */
        TS_MAKENULLREF2CFG, /* ComTxTimeoutFactorRef */
        TS_MAKENULLREF2CFG, /* ComRxGroupSignalRef */
        TS_MAKENULLREF2CFG, /* ComTxGroupSignalRef */
        TS_MAKENULLREF2CFG, /* ComFilter8BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter16BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter32BitMaskRef */
        TS_MAKENULLREF2CFG, /* ComFilter8BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilter16BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilter32BitMaskXMinMaxRef */
        TS_MAKENULLREF2CFG, /* ComFilterOneEveryNRef */
        TS_MAKEREF2CFG( ComRxSignal[0] ), /* ComRxSignalRef */
        TS_MAKEREF2CFG( ComTxSignal[0] ), /* ComTxSignalRef */
        TS_MAKENULLREF2CFG, /* ComRxTimeoutNotificationRef */
        TS_MAKENULLREF2CFG, /* ComTxTimeoutNotificationRef */
        TS_MAKENULLREF2CFG, /* ComTxNotificationRef */
        TS_MAKENULLREF2CFG, /* ComGWSourceRef */
        TS_MAKENULLREF2CFG, /* ComGWDestinationRef */
        UINT16_C( 1 ), /* ComRxIPduArraySize */
        UINT16_C( 1 ), /* ComTxIPduArraySize */
        UINT16_C( 1 ), /* ComRxSignalArraySize */
        UINT16_C( 1 ), /* ComTxSignalArraySize */
        UINT16_C( 0 ), /* ComFilterOneEveryNArraySize */
        UINT16_C( 4 ), /* ComIPduGroupArraySize */
        UINT16_C( 0 ), /* ComIPduGroupsWithSigGW */
        UINT16_C( 0 ), /* ComTxSignalGroupArraySize */
        UINT16_C( 0 ), /* ComRxSignalGroupArraySize */
        UINT16_C( 0 ), /* ComTxGroupSignalArraySize */
        UINT16_C( 0 )  /* ComRxGroupSignalArraySize */
    },
    { /* ComRxIPdu */
        { /* [0] PDPdu_Rx */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 2 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithBufferRefNum */
            UINT16_C( 1 ), /* ComIPduSignalW_F_A_NotiRefNum */
            UINT16_C( 1 ), /* ComIPduSignalWithDMOnly */
            UINT16_C( 0 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComRxTimeoutNotificationNum */
            UINT16_C( 65535 ), /* ComRxTimeoutFactorRef */
            UINT16_C( 65535 ), /* ComRxFirstTimeoutFactorRef */
            UINT16_C( 65535 ), /* RxDMQueueRef */
            UINT16_C( 65535 ), /* ComIPduSigGWFlagBit */
            UINT16_C( 0 ), /* ComIPduGWSourceRefNum */
            UINT16_C( 0 ), /* ComIPduGWSourceRefFirst */
            UINT16_C( 43680 ), /* ComConfigCheckData */
            UINT8_C( 1 ), /* ComIPduSize */
            UINT8_C( 1 )  /* ComRxIPduFlags (IMMEDIATE,COM_RX_DM_OFF) */
        } 
    },
    { /* ComTxIPdu */
        { /* [0] PDPdu_Tx */
            TS_MAKEREF2CFG( ComIPduInit[0] ), /* ComInitValueRef */
            UINT16_C( 3 ), /* ComIPduValueRef */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupRefFirst */
            UINT16_C( 1 ), /* ComIPduSignalRefNum */
            UINT16_C( 0 ), /* ComIPduSignalWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduSignalGroupWithFilterRefNum */
            UINT16_C( 0 ), /* ComIPduTMSFlagsRef */
            TS_MAKENULLREF2CFG, /* ComIPduTMSFlagsInitValueRef */
            UINT16_C( 0 ), /* ComIPduSignalRefFirst */
            UINT16_C( 65535 ), /* ComIPduCallOutFuncPtrRef */
            UINT16_C( 0 ), /* ComTxIPduMinimumDelayTimeFactorRef */
            UINT16_C( 65535 ), /* MDTQueueRef */
            UINT16_C( 0 ), /* ComTxModeTrueRef */
            UINT16_C( 65535 ), /* ComTxModeFalseRef */
            UINT16_C( 0 ), /* PeriodicQueueRef */
            UINT16_C( 0 ), /* NTimesQueueRef */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationFirst */
            UINT16_C( 0 ), /* ComTxTimeoutNotificationNum */
            UINT16_C( 0 ), /* ComTxTimeoutFactorRef */
            UINT16_C( 65535 ), /* TxDMQueueRef */
            UINT16_C( 0 ), /* ComNotificationFirst */
            UINT16_C( 0 ), /* ComNotificationNum */
            UINT16_C( 0 ), /* ComNotificationDeferredQueueRef */
            UINT16_C( 43681 ), /* ComConfigCheckData */
            UINT8_C( 1 ), /* ComIPduSize */
            UINT8_C( 5 ), /* ComTxIPduFlags (IMMEDIATE,TM_TRUE,COM_RX_DM_OFF) */
            UINT8_C( 5 )  /* ComTxModeModes (True=N_TIMES,False=<undef>) */
        } 
    },
    { /* ComTxIPduMinimumDelayTimeFactor */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComTxModeNTimes */
        { /* [0] */
            UINT16_C( 1 ), /* ComTxModeRepetitionPeriodFactor */
            UINT8_C( 1 )  /* ComTxModeNumberOfRepetitions */
        } 
    },
    { /* ComIPduGroup */
        { /* [0] RXPDUS_GLOBAL */
            UINT16_C( 1 ), /* ComIPduRefNum */
            UINT16_C( 0 ), /* ComIPduRefFirst */
            UINT16_C( 0 ), /* ComRxIPduWithSigGWRefNum */
            UINT16_C( 43682 ), /* ComConfigCheckData */
            UINT8_C( 0 )  /* ComIPduGroupFlags (RX,GROUP_OF_IPDUGROUPS) */
        },
        { /* [1] TXPDUS_GLOBAL */
            UINT16_C( 1 ), /* ComIPduRefNum */
            UINT16_C( 1 ), /* ComIPduRefFirst */
            UINT16_C( 0 ), /* ComRxIPduWithSigGWRefNum */
            UINT16_C( 43682 ), /* ComConfigCheckData */
            UINT8_C( 2 )  /* ComIPduGroupFlags (TX,GROUP_OF_IPDUGROUPS) */
        },
        { /* [2] RGCanNetwork */
            UINT16_C( 1 ), /* ComIPduRefNum */
            UINT16_C( 0 ), /* ComIPduRefFirst */
            UINT16_C( 0 ), /* ComRxIPduWithSigGWRefNum */
            UINT16_C( 43682 ), /* ComConfigCheckData */
            UINT8_C( 1 )  /* ComIPduGroupFlags (RX,GROUP_OF_IPDUS) */
        },
        { /* [3] TGCanNetwork */
            UINT16_C( 1 ), /* ComIPduRefNum */
            UINT16_C( 0 ), /* ComIPduRefFirst */
            UINT16_C( 0 ), /* ComRxIPduWithSigGWRefNum */
            UINT16_C( 43682 ), /* ComConfigCheckData */
            UINT8_C( 3 )  /* ComIPduGroupFlags (TX,GROUP_OF_IPDUS) */
        } 
    },
    { /* ComIPduGroupList */
        UINT16_C( 2 ), /* [0] */
        UINT16_C( 3 )  /* [1] */
    },
    { /* ComRxIPduList */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComTxIPduList */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComRxIPduSignalList */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComTxIPduSignalList */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComRxSignal */
        { /* [0] SGCounterIn */
            { /* RxBasicParam */
                UINT16_C( 0 ), /* ComIPduRef */
                UINT16_C( 7 ), /* ComSignalPositionInBit */
                UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
                UINT8_C( 22 ), /* ComRxSignalFlags (UINT8,LITTLE_ENDIAN,COM_RX_DATA_TOUT_ACTION_NONE,COM_UPDATE_BIT_ABSENT,COM_RX_DM_OFF) */
                UINT8_C( 8 )  /* ComBitSize */
            },
            UINT16_C( 0 ), /* ComNotification */
            UINT16_C( 0 ), /* ComFilterRef */
            UINT16_C( 65535 ), /* ComFilterSignalValueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutFactorRef */
            UINT16_C( 65535 ), /* ComRxFirstTimeoutFactorRef */
            UINT16_C( 65535 ), /* RxSigDMQueueRef */
            UINT16_C( 65535 ), /* ComRxTimeoutNotification */
            UINT16_C( 43687 ), /* ComConfigCheckData */
            UINT8_C( 1 )  /* ComFilterType */
        } 
    },
    { /* ComTxSignal */
        { /* [0] SGCounterOut */
            { /* TxBasicParam */
                UINT16_C( 0 ), /* ComIPduRef */
                UINT16_C( 0 ), /* ComSignalPositionInBit */
                UINT16_C( 0 ), /* ComUpdateBitPositionInBit */
                UINT8_C( 54 )  /* ComTxSignalFlags (UINT8,LITTLE_ENDIAN,TRIGGERED,updateBit on) */
            },
            UINT16_C( 65535 ), /* ComErrorNotification */
            UINT16_C( 0 ), /* ComFilterRef */
            UINT16_C( 65535 ), /* ComFilterSignalValueRef */
            UINT16_C( 0 ), /* ComPositionOfTMSFlag */
            UINT16_C( 43688 ), /* ComConfigCheckData */
            UINT8_C( 8 ), /* ComBitSize */
            UINT8_C( 1 )  /* ComFilterType (ALWAYS) */
        } 
    },
    { /* ComNTimesQueueList */
        UINT16_C( 0 )  /* [0] */
    },
    { /* ComIPduInit */
        UINT8_C( 0 )  /* [0] */
    } 
};



/* stop data section declaration */
#define COM_STOP_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
