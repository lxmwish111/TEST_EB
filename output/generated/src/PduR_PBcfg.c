/* --------{ EB Automotive C Source File }-------- */ 


/*==================[includes]==============================================*/

#include <PduR_PBcfg.h>

/*==================[macros]================================================*/

#define TS_PB_CFG_NAME PduR_Configuration
#define TS_PB_CFG_LAYOUT_TYPE PDUR_CONFIG_LAYOUT_TYPE
#define TS_RELOCATABLE_CFG_ENABLE PDUR_RELOCATABLE_CFG_ENABLE

/*==================[external constants]====================================*/

/* start data section declaration */
#define PDUR_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>
/**
 * PduR_Configuration
 */
PduR_PBConstConfigLayoutType PduR_Configuration = {
    { /* PduR_RootConfig */
        UINT32_C( 0 ), /* PduR_ConfigurationId */
        TS_MAKENULLREF2CFG, /* PduR_BufDefaultRef */
        TS_MAKENULLREF2CFG, /* PduR_BufSbConfigRef */
        TS_MAKENULLREF2CFG, /* PduR_BufDfConfigRef */
        TS_MAKENULLREF2CFG, /* PduR_BufTfConfigRef */
        TS_MAKENULLREF2CFG, /* PduR_BufTpConfigRef */
        { /* PduR_MTabLoIfConfig */
            TS_MAKENULLREF2CFG, /* MTabRxRef */
            UINT16_C( 0 )  /* MTabRxCount */
        },
        { /* PduR_MTabUpIfConfig */
            TS_MAKENULLREF2CFG, /* MTabTxRef */
            UINT16_C( 0 )  /* MTabTxCount */
        },
        { /* PduR_MTabLoTpConfig */
            TS_MAKENULLREF2CFG, /* MTabRxRef */
            UINT16_C( 0 )  /* MTabRxCount */
        },
        { /* PduR_MTabUpTpConfig */
            TS_MAKENULLREF2CFG, /* MTabTxRef */
            UINT16_C( 0 )  /* MTabTxCount */
        },
        { /* PduR_GTabIfConfig */
            TS_MAKENULLREF2CFG, /* GTabRxRef */
            UINT16_C( 0 )  /* GTabRxCount */
        },
        { /* PduR_GTabTpConfig */
            TS_MAKENULLREF2CFG, /* GTabRxRef */
            UINT16_C( 0 )  /* GTabRxCount */
        },
        { /* PduR_RTabLoIfConfig */
            { /* CanIf */
                TS_MAKEREF2CFG( PduR_RTabLoIfRx[0] ), /* RTabRxRef */
                TS_MAKEREF2CFG( PduR_RTabLoIfTx[0] ), /* RTabTxRef */
                UINT16_C( 2 ), /* RTabRxCount */
                UINT16_C( 2 ), /* RTabTxCount */
                UINT16_C( 0 )  /* TxConfPduIdMin */
            } 
        },
        { /* PduR_RTabUpIfTxConfig */
            { /* Com */
                TS_MAKEREF2CFG( PduR_RTabUpIfTx[0] ), /* RTabTxRef */
                UINT16_C( 1 ), /* RTabTxCount */
                UINT16_C( 0 )  /* TargetModuleAPIRef: CanIf */
            },
            { /* Dbg */
                TS_MAKEREF2CFG( PduR_RTabUpIfTx[1] ), /* RTabTxRef */
                UINT16_C( 1 ), /* RTabTxCount */
                UINT16_C( 0 )  /* TargetModuleAPIRef: CanIf */
            } 
        },
        UINT16_C( 0 ), /* PduR_MaxRoutingPathNumber */
        UINT16_C( 0 ), /* PduR_BufSbCount */
        UINT16_C( 0 ), /* PduR_BufDfCount */
        UINT16_C( 0 ), /* PduR_BufTfCount */
        UINT16_C( 0 ), /* PduR_BufTpCount */
        UINT16_C( 0 ), /* PduR_MultiTpTxSessionInfoRef */
        UINT16_C( 0 ), /* PduR_MultiTpRxSessionInfoRef */
        UINT16_C( 0 ), /* PduR_BufDfInfoRef */
        UINT16_C( 0 ), /* PduR_BufTfInfoRef */
        UINT16_C( 0 ), /* PduR_BufTpInfoRef */
        UINT16_C( 0 ), /* PduR_TpSessionInfoRef */
        UINT16_C( 0 ), /* PduR_BufTpPduInfoRef */
        UINT8_C( 0 ), /* PduR_HandleMultiTpRxInParallel */
        UINT8_C( 0 )  /* PduR_HandleMultiTpTxInParallel */
    },
    { /* PduR_RTabLoIfRx */
        { /* [0] */
            UINT16_C( 0 ), /* TargetPduId */
            UINT16_C( 1 )  /* TargetModuleAPIRef: Com */
        },
        { /* [1] */
            UINT16_C( 0 ), /* TargetPduId */
            UINT16_C( 2 )  /* TargetModuleAPIRef: Dbg */
        } 
    },
    { /* PduR_RTabLoIfTx */
        { /* [0] */
            UINT16_C( 0 ), /* TargetPduId */
            UINT16_C( 1 )  /* TargetModuleAPIRef: Com */
        },
        { /* [1] */
            UINT16_C( 0 ), /* TargetPduId */
            UINT16_C( 2 )  /* TargetModuleAPIRef: Dbg */
        } 
    },
    { /* PduR_RTabUpIfTx */
        { /* [0] */
            UINT16_C( 0 )  /* TargetPduId */
        },
        { /* [1] */
            UINT16_C( 1 )  /* TargetPduId */
        } 
    } 
};




/* stop data section declaration */
#define PDUR_STOP_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/

