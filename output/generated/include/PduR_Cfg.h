/* --------{ EB Automotive C Source File }-------- */ 
#if (!defined PDUR_CFG_H)
#define PDUR_CFG_H

/*==================[includes]==============================================*/

#include <TSAutosar.h>              /* global configuration */

/*==================[macros]================================================*/

/**
 * Always using 16 bit unsigned indices for references into PB RAM.
 */
#define PDUR_MEM_SIZE_MAX 0xFFFFU

/**
 * Size of internal PduR data in units of bytes (static memory
 * allocation) - Memory required by post-build config must be smaller
 * than this constant
 */
#define PDUR_MEM_SIZE 0

#if (PDUR_MEM_SIZE_MAX < PDUR_MEM_SIZE)
 #error (PDUR_MEM_SIZE_MAX < PDUR_MEM_SIZE)
#endif /* #if (PDUR_MEM_SIZE_MAX < PDUR_MEM_SIZE) */

#define PDUR_MEM_SIZE_32BIT_WORDS \
    ((PDUR_MEM_SIZE + sizeof(uint32) - 1) / sizeof(uint32))


#if (defined PDUR_DEV_ERROR_DETECT) /* to prevent double declaration */
#error PDUR_DEV_ERROR_DETECT already defined
#endif /* if (defined PDUR_DEV_ERROR_DETECT) */

/** \brief This macro specifies if development error detection is provided. **/
#define PDUR_DEV_ERROR_DETECT STD_OFF


#if (defined PDUR_INVALID_PDUID) /* to prevent double declaration */
#error PDUR_INVALID_PDUID already defined
#endif /* if (defined PDUR_INVALID_PDUID) */

/** \brief This macro specifies the invalid PDU id value. **/
#define PDUR_INVALID_PDUID 65535U


#if (defined PDUR_INVALID_APIREF) /* to prevent double declaration */
#error PDUR_INVALID_APIREF already defined
#endif /* if (defined PDUR_INVALID_APIREF) */

/** \brief This macro specifies the invalid API ref value. **/
#define PDUR_INVALID_APIREF 65535U


#if (defined PDUR_ZERO_COST_OPERATION) /* to prevent double declaration */
#error PDUR_ZERO_COST_OPERATION already defined
#endif /* if (defined PDUR_ZERO_COST_OPERATION) */

/** \brief This macro specifies if zero cost operation is provided. **/
#define PDUR_ZERO_COST_OPERATION STD_OFF


#if (defined PDUR_VERSION_INFO_API) /* to prevent double declaration */
#error PDUR_VERSION_INFO_API already defined
#endif /* if (defined PDUR_VERSION_INFO_API) */

/** \brief This macro specifies if the version API is provided. **/
#define PDUR_VERSION_INFO_API STD_OFF


#if (defined PDUR_RTAB_UPIF_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_RTAB_UPIF_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_RTAB_UPIF_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_RTabUpIfTxType has been moved to PduR_RTabUpIfTxConfigType
 */
#define PDUR_RTAB_UPIF_CMN_TGT_MOD STD_ON


#if (defined PDUR_RTAB_UPTP_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_RTAB_UPTP_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_RTAB_UPTP_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_RTabUpTpTxType has been moved to PduR_RTabUpTpTxConfigType
 */
#define PDUR_RTAB_UPTP_CMN_TGT_MOD STD_OFF


#if (defined PDUR_RTAB_LOIF_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_RTAB_LOIF_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_RTAB_LOIF_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_RTabLoIfType has been moved to PduR_RTabLoIfConfigType
 */
#define PDUR_RTAB_LOIF_CMN_TGT_MOD STD_OFF


#if (defined PDUR_RTAB_LOTP_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_RTAB_LOTP_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_RTAB_LOTP_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_RTabLoTpType has been moved to PduR_RTabLoTpConfigType
 */
#define PDUR_RTAB_LOTP_CMN_TGT_MOD STD_OFF


#if (defined PDUR_GTAB_IF_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_GTAB_IF_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_GTAB_IF_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_GTabIfRxType has been moved to PduR_GTabIfConfigType
 */
#define PDUR_GTAB_IF_CMN_TGT_MOD STD_OFF


#if (defined PDUR_GTAB_TP_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_GTAB_TP_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_GTAB_TP_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_GTabTpRxType has been moved to PduR_GTabTpConfigType
 */
#define PDUR_GTAB_TP_CMN_TGT_MOD STD_OFF


#if (defined PDUR_MTAB_LOIF_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_MTAB_LOIF_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_MTAB_LOIF_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_MTabLoIfRxType has been moved to PduR_MTabLoIfConfigType
 */
#define PDUR_MTAB_LOIF_CMN_TGT_MOD STD_OFF


#if (defined PDUR_MTAB_UPIF_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_MTAB_UPIF_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_MTAB_UPIF_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_MTabUpIfTxType has been moved to PduR_RTabUpIfConfigConfigType
 */
#define PDUR_MTAB_UPIF_CMN_TGT_MOD STD_OFF


#if (defined PDUR_MTAB_LOTP_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_MTAB_LOTP_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_MTAB_LOTP_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_MTabLoTpRxType has been moved to PduR_MTabLoTpConfigType
 */
#define PDUR_MTAB_LOTP_CMN_TGT_MOD STD_OFF


#if (defined PDUR_MTAB_UPTP_CMN_TGT_MOD) /* to prevent double declaration */
#error PDUR_MTAB_UPTP_CMN_TGT_MOD already defined
#endif /* if (defined PDUR_MTAB_UPTP_CMN_TGT_MOD) */

/** \brief This macro specifies whether the TargetModuleAPIRef member of
 *         struct PduR_MTabUpTpTxType has been moved to PduR_RTabUpTpConfigConfigType
 */
#define PDUR_MTAB_UPTP_CMN_TGT_MOD STD_OFF


#if (defined PDUR_MTAB_UPTP_CMN_SRC_MOD) /* to prevent double declaration */
#error PDUR_MTAB_UPTP_CMN_SRC_MOD already defined
#endif /* if (defined PDUR_MTAB_UPTP_CMN_SRC_MOD) */

/** \brief This macro specifies whether the SourceModuleAPIRef member of
 *         struct PduR_MTabUpTpTxType has been moved to PduR_RTabUpTpConfigConfigType
 */
#define PDUR_MTAB_UPTP_CMN_SRC_MOD STD_OFF


#if (defined PDUR_CONST_CFG_ADDRESS_ENABLE) /* to prevent double declaration */
#error PDUR_CONST_CFG_ADDRESS_ENABLE already defined
#endif /* if (defined PDUR_CONST_CFG_ADDRESS_ENABLE) */

/**
 * Parameter corresponds with PduR/PduRConfig/PduRGeneral/PduRConstCfgAddressEnable
 * Pre-processor switch for enabling constant configuration address
 * optimization
 */
#define PDUR_CONST_CFG_ADDRESS_ENABLE STD_OFF



#if (defined PDUR_RELOCATABLE_CFG_ENABLE) /* to prevent double declaration */
#error PDUR_RELOCATABLE_CFG_ENABLE already defined
#endif /* if (defined PDUR_RELOCATABLE_CFG_ENABLE) */

/**
 * Parameter corresponds with PduR/PduRConfig/PduRGeneral/PduRRelocatableCfgEnable (ECUC:f3e5ef96-0b97-4796-8949-3c91800bcbc4)
 * Pre-processor switch for enabling relocatable configuration support.
 */
#define PDUR_RELOCATABLE_CFG_ENABLE STD_OFF


#if (defined PDUR_CFG_SIGNATURE_ENABLE) /* to prevent double declaration */
#error PDUR_CFG_SIGNATURE_ENABLE already defined
#endif /* if (defined PDUR_CFG_SIGNATURE_ENABLE) */

/**
 * Parameter corresponds with PduR/PduRConfig/PduRGeneral/PduRCfgSignatureEnable
 * Pre-processor switch for enabling configuration signature support.
 */
#define PDUR_CFG_SIGNATURE_ENABLE STD_OFF


/*------------------[module support]----------------------------------------*/

#if (defined PDUR_CANIF_SUPPORT) /* to prevent double declaration */
#error PDUR_CANIF_SUPPORT already defined
#endif /* if (defined PDUR_CANIF_SUPPORT) */

/** \brief This macro specifies if the version API is provided. **/
#define PDUR_CANIF_SUPPORT STD_ON

#if (defined PDUR_CANTP_SUPPORT) /* to prevent double declaration */
#error PDUR_CANTP_SUPPORT already defined
#endif /* if (defined PDUR_CANTP_SUPPORT) */

/** \brief This macro specifies if module support for CANTP is enabled **/
#define PDUR_CANTP_SUPPORT STD_OFF

#if (defined PDUR_FRIF_SUPPORT) /* to prevent double declaration */
#error PDUR_FRIF_SUPPORT already defined
#endif /* if (defined PDUR_FRIF_SUPPORT) */

/** \brief This macro specifies if module support for FRIF is enabled **/
#define PDUR_FRIF_SUPPORT STD_OFF


#if (defined PDUR_FRTP_SUPPORT) /* to prevent double declaration */
#error PDUR_FRTP_SUPPORT already defined
#endif /* if (defined PDUR_FRTP_SUPPORT) */

/** \brief This macro specifies if module support for FRTP is enabled **/
#define PDUR_FRTP_SUPPORT STD_OFF


#if (defined PDUR_LINIF_SUPPORT) /* to prevent double declaration */
#error PDUR_LINIF_SUPPORT already defined
#endif /* if (defined PDUR_LINIF_SUPPORT) */

/** \brief This macro specifies if module support for LINIF is enabled **/
#define PDUR_LINIF_SUPPORT STD_OFF


#if (defined PDUR_LINTP_SUPPORT) /* to prevent double declaration */
#error PDUR_LINTP_SUPPORT already defined
#endif /* if (defined PDUR_LINTP_SUPPORT) */

/** \brief This macro specifies if module support for LINTP is enabled **/
#define PDUR_LINTP_SUPPORT STD_OFF


#if (defined PDUR_DCM_SUPPORT) /* to prevent double declaration */
#error PDUR_DCM_SUPPORT already defined
#endif /* if (defined PDUR_DCM_SUPPORT) */

/** \brief This macro specifies if module support for DCM is enabled **/
#define PDUR_DCM_SUPPORT STD_OFF


#if (defined PDUR_COM_SUPPORT) /* to prevent double declaration */
#error PDUR_COM_SUPPORT already defined
#endif /* if (defined PDUR_COM_SUPPORT) */

/** \brief This macro specifies if module support for COM is enabled **/
#define PDUR_COM_SUPPORT STD_ON


#if (defined PDUR_IPDUM_SUPPORT) /* to prevent double declaration */
#error PDUR_IPDUM_SUPPORT already defined
#endif /* if (defined PDUR_IPDUM_SUPPORT) */

/** \brief This macro specifies if module support for IPDUM is enabled **/
#define PDUR_IPDUM_SUPPORT STD_OFF


#if (defined PDUR_GENUPIF_SUPPORT) /* to prevent double declaration */
#error PDUR_GENUPIF_SUPPORT already defined
#endif /* if (defined PDUR_GENUPIF_SUPPORT) */

/** \brief If at least one Generic Upper Layer of the non-TP type is configured
 * this macro is set to STD_ON. Otherwise it will be set to STD_OFF. **/
#define PDUR_GENUPIF_SUPPORT STD_ON


#if (defined PDUR_GENUPTP_SUPPORT) /* to prevent double declaration */
#error PDUR_GENUPTP_SUPPORT already defined
#endif /* if (defined PDUR_GENUPTP_SUPPORT) */

/** \brief If at least one Generic Upper Layer of the TP type is configured this
 * macro is set to STD_ON. Otherwise it will be set to STD_OFF.d **/
#define PDUR_GENUPTP_SUPPORT STD_OFF


#if (defined PDUR_GENUP_SUPPORT) /* to prevent double declaration */
#error PDUR_GENUP_SUPPORT already defined
#endif /* if (defined PDUR_GENUP_SUPPORT) */

/** \brief If at least one Generic Upper Layer (regardless of the type) is
 * configured this macro is set to STD_ON. Otherwise it will be set to STD_OFF. **/
#define PDUR_GENUP_SUPPORT STD_ON

/*------------------[gateway operation]-------------------------------------*/

#if (defined PDUR_GATEWAY_OPERATION) /* to prevent double declaration */
#error PDUR_GATEWAY_OPERATION already defined
#endif /* if (defined PDUR_GATEWAY_OPERATION) */

/** \brief This macro specifies if gateway operations are supported **/
#define PDUR_GATEWAY_OPERATION STD_OFF

#if (defined PDUR_TPGATEWAY_SUPPORT) /* to prevent double declaration */
#error PDUR_TPGATEWAY_SUPPORT already defined
#endif /* if (defined PDUR_TPGATEWAY_SUPPORT) */

/** \brief This macro specifies if the Tp gateway is supported **/
#define PDUR_TPGATEWAY_SUPPORT STD_OFF

#if (defined PDUR_IFGATEWAY_SUPPORT) /* to prevent double declaration */
#error PDUR_IFGATEWAY_SUPPORT already defined
#endif /* if (defined PDUR_IFGATEWAY_SUPPORT) */

/** \brief This macro specifies if module support for IPDUM is enabled **/
#define PDUR_IFGATEWAY_SUPPORT STD_OFF

#if (defined PDUR_SB_TX_BUFFER_SUPPORT) /* to prevent double declaration */
#error PDUR_SB_TX_BUFFER_SUPPORT already defined
#endif /* if (defined PDUR_SB_TX_BUFFER_SUPPORT) */

/** \brief This macro specifies if single buffers for gateway operations are
 ** available **/
#define PDUR_SB_TX_BUFFER_SUPPORT STD_OFF


#if (defined PDUR_FIFO_TX_BUFFER_SUPPORT) /* to prevent double declaration */
#error PDUR_FIFO_TX_BUFFER_SUPPORT already defined
#endif /* if (defined PDUR_FIFO_TX_BUFFER_SUPPORT) */

/** \brief If support of FIFO Tx-buffers is enabled this macro is set to STD_ON.
 * Otherwise it will be set to STD_OFF. **/
#define PDUR_FIFO_TX_BUFFER_SUPPORT STD_OFF


/*------------------[Multicast operations]-------------------------------------*/

#if (defined PDUR_MULTICAST_TOIF_SUPPORT) /* to prevent double declaration */
#error PDUR_MULTICAST_TOIF_SUPPORT already defined
#endif /* if (defined PDUR_MULTICAST_TOIF_SUPPORT) */

/** \brief This macro specifies if multicast operations to If-modules are supported **/
#define PDUR_MULTICAST_TOIF_SUPPORT STD_OFF


#if (defined PDUR_MULTICAST_FROMIF_SUPPORT) /* to prevent double declaration */
#error PDUR_MULTICAST_FROMIF_SUPPORT already defined
#endif /* if (defined PDUR_MULTICAST_FROMIF_SUPPORT) */

/** \brief This macro specifies if multicast operations from If-modules are supported **/
#define PDUR_MULTICAST_FROMIF_SUPPORT STD_OFF


#if (defined PDUR_MULTICAST_TOTP_SUPPORT) /* to prevent double declaration */
#error PDUR_MULTICAST_TOTP_SUPPORT already defined
#endif /* if (defined PDUR_MULTICAST_TOTP_SUPPORT) */

/** \brief This macro specifies if multicast operations to Tp-modules are supported **/
#define PDUR_MULTICAST_TOTP_SUPPORT STD_OFF


#if (defined PDUR_MULTICAST_FROMTP_SUPPORT) /* to prevent double declaration */
#error PDUR_MULTICAST_FROMTP_SUPPORT already defined
#endif /* if (defined PDUR_MULTICAST_FROMTP_SUPPORT) */

/** \brief If PDU Router support for multicast operations from an Transport Protocol
 * module to upper layer modules or lower layer Transport Protocol modules is enabled
 * this macro is set to STD_ON. Otherwise it is set to STD_OFF. **/
#define PDUR_MULTICAST_FROMTP_SUPPORT STD_OFF


#if (defined PDUR_MULTICAST_FROMTP_TODCM) /* to prevent double declaration */
#error PDUR_MULTICAST_FROMTP_TODCM already defined
#endif /* if (defined PDUR_MULTICAST_FROMTP_TODCM) */

/** \brief If PDU Router support for multicast operations from an Transport Protocol
 * module to upper layer modules or lower layer Transport Protocol modules is enabled
 * and support for Dcm module is enabled this macro is set to STD_ON. Otherwise it is
 * set to STD_OFF. **/
#define PDUR_MULTICAST_FROMTP_TODCM STD_OFF


/*---------------[Change Parameter and Cancel Transmit Functionality]---------------------------*/

#if (defined PDUR_CANTPCHANGEPARAMETER_SUPPORT) /* to prevent double declaration */
#error PDUR_CANTPCHANGEPARAMETER_SUPPORT already defined
#endif /* if (defined PDUR_CANTPCHANGEPARAMETER_SUPPORT) */

/** \brief This macro specifies if the Change Parameter Confirmation Functionality is
 ** available for the CanTp-module **/
#define PDUR_CANTPCHANGEPARAMETER_SUPPORT STD_OFF


#if (defined PDUR_FRTPCHANGEPARAMETER_SUPPORT) /* to prevent double declaration */
#error PDUR_FRTPCHANGEPARAMETER_SUPPORT already defined
#endif /* if (defined PDUR_FRTPCHANGEPARAMETER_SUPPORT) */

/** \brief This macro specifies if the Change Parameter Confirmation Functionality is
 ** available for the FrTp-module **/
#define PDUR_FRTPCHANGEPARAMETER_SUPPORT STD_OFF


#if (defined PDUR_LINTPCHANGEPARAMETER_SUPPORT) /* to prevent double declaration */
#error PDUR_LINTPCHANGEPARAMETER_SUPPORT already defined
#endif /* if (defined PDUR_LINTPCHANGEPARAMETER_SUPPORT) */

/** \brief This macro specifies if the Change Parameter Confirmation Functionality is
 ** available for the LionTp-module **/
#define PDUR_LINTPCHANGEPARAMETER_SUPPORT STD_OFF


#if (defined PDUR_CHANGE_PARAMETER_SUPPORT) /* to prevent double declaration */
#error PDUR_CHANGE_PARAMETER_SUPPORT already defined
#endif /* if (defined PDUR_CHANGE_PARAMETER_SUPPORT) */

/** \brief Specifies if the Change Parameter Functionality is available. If at least one
 * of the configuration parameters PduR<Lo>TpChangeParameterSupport is enabled this macro
 * is set to STD_ON. Otherwise it is set to STD_OFF.
 */
#define PDUR_CHANGE_PARAMETER_SUPPORT STD_OFF


#if (defined PDUR_CANCEL_TRANSMIT_SUPPORT) /* to prevent double declaration */
#error PDUR_CANCEL_TRANSMIT_SUPPORT already defined
#endif /* if (defined PDUR_CANCEL_TRANSMIT_SUPPORT) */

/** \brief Specifies if the Cancel Transmit Functionality is available. If at least one
 * of the configuration parameters PduR<Lo>TpCancelTransmitSupport is enabled this macro
 * is set to STD_ON. Otherwise it is set to STD_OFF.
 */
#define PDUR_CANCEL_TRANSMIT_SUPPORT STD_OFF


/*-------------------------------------[optional DEM reporting]---------------------------------*/

#if (defined PDUR_E_PDU_INSTANCE_LOST_REPORT_DEM) /* to prevent double declaration */
#error PDUR_E_PDU_INSTANCE_LOST_REPORT_DEM already defined
#endif /* if (defined PDUR_E_PDU_INSTANCE_LOST_REPORT_DEM) */

/** \brief This macro specifies if the DEM reporting for error PDUR_E_PDU_INSTANCE_LOST is
 ** enabled **/
#define PDUR_E_PDU_INSTANCE_LOST_REPORT_DEM STD_ON


/*-----------------------[Dynamic Payload functionality]--------------------*/

#if (defined PDUR_CANIF_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_CANIF_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_CANIF_DYNPAYLOAD_SUPPORT) */

/** \brief This macro specifies whether dynamic payload length support is enabled
 ** for CanIf **/
#define PDUR_CANIF_DYNPAYLOAD_SUPPORT STD_OFF


#if (defined PDUR_FRIF_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_FRIF_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_FRIF_DYNPAYLOAD_SUPPORT) */

/** \brief This macro specifies whether dynamic payload length support is enabled
 ** for FrIf **/
#define PDUR_FRIF_DYNPAYLOAD_SUPPORT STD_OFF


#if (defined PDUR_LINIF_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_LINIF_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_LINIF_DYNPAYLOAD_SUPPORT) */

/** \brief This macro specifies whether dynamic payload length support is enabled
 ** for LinIf **/
#define PDUR_LINIF_DYNPAYLOAD_SUPPORT STD_OFF


#if (defined PDUR_UPIF_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_UPIF_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_LOIFPDUR_UPIF_DYNPAYLOAD_SUPPORT_DYNPAYLOAD_SUPPORT) */

/** \brief If at least one Generic Upper Layer of the non-TP type has dynamic payload
 * length enabled this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#define PDUR_UPIF_DYNPAYLOAD_SUPPORT STD_OFF


#if (defined PDUR_UPIF_DYNPAYLOAD_OFF) /* to prevent double declaration */
#error PDUR_UPIF_DYNPAYLOAD_OFF already defined
#endif /* if (defined PDUR_UPIF_DYNPAYLOAD_OFF) */

/** \brief If at least one Generic Upper Layer of the non-TP type has dynamic
 * payload length disabled this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#define PDUR_UPIF_DYNPAYLOAD_OFF STD_ON


/*-----------------------[composed macros]------------------------*/

#if (defined PDUR_LOIF_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_LOIF_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_LOIF_DYNPAYLOAD_SUPPORT) */

/** \def PDUR_LOIF_DYNPAYLOAD_SUPPORT
 * \brief If support of dynamic payload length is enabled for at least one LoIf
 * module this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_ON) || (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_ON) || (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_ON) )
#define PDUR_LOIF_DYNPAYLOAD_SUPPORT STD_ON
#else /* (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_ON ) */
#define PDUR_LOIF_DYNPAYLOAD_SUPPORT STD_OFF
#endif /* (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_ON ) */


#if (defined PDUR_CANIF_TO_GENUPLYR_DYNPYLD) /* to prevent double declaration */
#error PDUR_CANIF_TO_GENUPLYR_DYNPYLD already defined
#endif /* if (defined PDUR_CANIF_TO_GENUPLYR_DYNPYLD) */

/** \def PDUR_CANIF_TO_GENUPLYR_DYNPYLD
 * \brief If support for CanIf module is enabled while support of dynamic payload
 * length is disabled and at least one Generic Upper Layer has dynamic payload functionality
 * enabled this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_CANIF_SUPPORT == STD_ON) && (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_OFF) && (PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON))
#define PDUR_CANIF_TO_GENUPLYR_DYNPYLD STD_ON
#else
#define PDUR_CANIF_TO_GENUPLYR_DYNPYLD STD_OFF
#endif


#if (defined PDUR_FRIF_TO_GENUPLYR_DYNPYLD) /* to prevent double declaration */
#error PDUR_FRIF_TO_GENUPLYR_DYNPYLD already defined
#endif /* if (defined PDUR_FRIF_TO_GENUPLYR_DYNPYLD) */

/** \def PDUR_FRIF_TO_GENUPLYR_DYNPYLD
 * \brief If support for FrIf module is enabled while support of dynamic payload length
 * is disabled and at least one Generic Upper Layer has dynamic payload functionality enabled
 * this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_FRIF_SUPPORT == STD_ON) && (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_OFF) && (PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON))
#define PDUR_FRIF_TO_GENUPLYR_DYNPYLD STD_ON
#else
#define PDUR_FRIF_TO_GENUPLYR_DYNPYLD STD_OFF
#endif


#if (defined PDUR_LINIF_TO_GENUPLYR_DYNPYLD) /* to prevent double declaration */
#error PDUR_LINIF_TO_GENUPLYR_DYNPYLD already defined
#endif /* if (defined PDUR_LINIF_TO_GENUPLYR_DYNPYLD) */

/** \def PDUR_LINIF_TO_GENUPLYR_DYNPYLD
 * \brief If support for LinIf module is enabled while support of dynamic payload
 * length is disabled and at least one Generic Upper Layer has dynamic payload functionality
 * enabled this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_LINIF_SUPPORT == STD_ON) && (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_OFF) && (PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON))
#define PDUR_LINIF_TO_GENUPLYR_DYNPYLD STD_ON
#else
#define PDUR_LINIF_TO_GENUPLYR_DYNPYLD STD_OFF
#endif


#if (defined PDUR_LOIF_TO_GENUPLYR_DYNPYLD) /* to prevent double declaration */
#error PDUR_LOIF_TO_GENUPLYR_DYNPYLD already defined
#endif /* if (defined PDUR_LOIF_TO_GENUPLYR_DYNPYLD) */

/** \def PDUR_LOIF_TO_GENUPLYR_DYNPYLD
 * \brief If support of at least one LoIf module is enabled while its support of
 * dynamic payload length is disabled and at least one Generic Upper Layer has dynamic
 * payload functionality enabled this macro is set to STD_ON. Otherwise it will be set
 * to STD_OFF.
 */
#if ((PDUR_CANIF_TO_GENUPLYR_DYNPYLD == STD_ON) || (PDUR_FRIF_TO_GENUPLYR_DYNPYLD == STD_ON) || (PDUR_LINIF_TO_GENUPLYR_DYNPYLD == STD_ON) )
#define PDUR_LOIF_TO_GENUPLYR_DYNPYLD STD_ON
#else /* (PDUR_CANIF_TO_GENUPLYR_DYNPYLD == STD_ON || PDUR_FRIF_TO_GENUPLYR_DYNPYLD == STD_ON || PDUR_LINIF_TO_GENUPLYR_DYNPYLD == STD_ON ) */
#define PDUR_LOIF_TO_GENUPLYR_DYNPYLD STD_OFF
#endif /* (PDUR_CANIF_TO_GENUPLYR_DYNPYLD == STD_ON || PDUR_FRIF_TO_GENUPLYR_DYNPYLD == STD_ON || PDUR_LINIF_TO_GENUPLYR_DYNPYLD == STD_ON ) */


#if (defined PDUR_DYNPAYLOAD_SUPPORT) /* to prevent double declaration */
#error PDUR_DYNPAYLOAD_SUPPORT already defined
#endif /* if (defined PDUR_DYNPAYLOAD_SUPPORT) */

/** \def PDUR_DYNPAYLOAD_SUPPORT
 * \brief If dynamic length support of at least one LoIf module or Generic
 * Upper Layer is enabled this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON) || (PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON))
#define PDUR_DYNPAYLOAD_SUPPORT STD_ON
#else /* (PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) */
#define PDUR_DYNPAYLOAD_SUPPORT STD_OFF
#endif /* (PDUR_UPIF_DYNPAYLOAD_SUPPORT == STD_ON || PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) */


#if (defined PDUR_RPATH_NODYNPAYLOAD_EXISTS) /* to prevent double declaration */
#error PDUR_RPATH_NODYNPAYLOAD_EXISTS already defined
#endif /* if (defined PDUR_RPATH_NODYNPAYLOAD_EXISTS) */

/** \def PDUR_RPATH_NODYNPAYLOAD_EXISTS
 * \brief Existence of a possible Rx-routing path not affected by dynamic payload
 * functionality. If at least one LoIf module exists having its dynamic payload length
 * parameter disabled while possible destinations do not offer enabled dynamic payload
 * functionality (i.e. either a Generic Upper Layer with disabled dynamic payload
 * functionality or enabled Com module or enabled If-gateway routing exist) this macro is
 * set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ( \
        (((PDUR_CANIF_SUPPORT == STD_ON) && (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_FRIF_SUPPORT == STD_ON) && (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_LINIF_SUPPORT == STD_ON) && (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_OFF))) && \
        ( (PDUR_IFGATEWAY_SUPPORT == STD_ON) || (PDUR_UPIF_DYNPAYLOAD_OFF == STD_ON) || (PDUR_COM_SUPPORT == STD_ON) ) \
        )
#define PDUR_RPATH_NODYNPAYLOAD_EXISTS STD_ON
#else
#define PDUR_RPATH_NODYNPAYLOAD_EXISTS STD_OFF
#endif

#if (defined PDUR_PATH_MULTIIF_DYNPYLD_EXISTS) /* to prevent double declaration */
#error PDUR_PATH_MULTIIF_DYNPYLD_EXISTS already defined
#endif /* if (defined PDUR_PATH_MULTIIF_DYNPYLD_EXISTS) */

/** \def PDUR_PATH_MULTIIF_DYNPYLD_EXISTS
 * \brief If PDU Router support for multicast operations from an interface module
 * to upper layer modules or lower layer interface modules is enabled and at least one
 * LoIf module has dynamic payload length functionality enabled this macro is set
 * to STD_ON. Otherwise it is set to STD_OFF.
 */
#if ((PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) && (PDUR_MULTICAST_FROMIF_SUPPORT == STD_ON))
#define PDUR_PATH_MULTIIF_DYNPYLD_EXISTS STD_ON
#else
#define PDUR_PATH_MULTIIF_DYNPYLD_EXISTS STD_OFF
#endif


#if (defined PDUR_PATH_MULTIIFUL_DYNPYLD_EXST) /* to prevent double declaration */
#error PDUR_PATH_MULTIIFUL_DYNPYLD_EXST already defined
#endif /* if (defined PDUR_PATH_MULTIIFUL_DYNPYLD_EXST) */

/** \def PDUR_PATH_MULTIIFUL_DYNPYLD_EXST
 * \brief If PDU Router support for multicast operations from an interface module
 * is enabled and at least one LoIf module is enabled having its support of dynamic
 * payload length disabled while at least one Generic Upper Layer exists having dynamic
 * payload functionality enabled this macro is set to STD_ON. Otherwise it is set to STD_OFF.
 */
#if ((PDUR_LOIF_TO_GENUPLYR_DYNPYLD == STD_ON) && (PDUR_MULTICAST_FROMIF_SUPPORT == STD_ON))
#define PDUR_PATH_MULTIIFUL_DYNPYLD_EXST STD_ON
#else
#define PDUR_PATH_MULTIIFUL_DYNPYLD_EXST STD_OFF
#endif

#if (defined PDUR_PATH_MULTIIF_EXISTS) /* to prevent double declaration */
#error PDUR_PATH_MULTIIF_EXISTS already defined
#endif /* if (defined PDUR_PATH_MULTIIF_EXISTS) */

/** \def PDUR_PATH_MULTIIF_EXISTS
 * \brief Existence of a possible Rx-multicast routing path not affected by dynamic
 * payload functionality. If at least one LoIf module exists having its dynamic payload
 * length parameter disabled while possible multiple destinations do not offer enabled
 * dynamic payload functionality (i.e. either a Generic Upper Layer with disabled
 * dynamic payload functionality or enabled Com module or enabled If-gateway routing exist)
 * this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_MULTICAST_FROMIF_SUPPORT == STD_ON) && (PDUR_RPATH_NODYNPAYLOAD_EXISTS == STD_ON))
#define PDUR_PATH_MULTIIF_EXISTS STD_ON
#else
#define PDUR_PATH_MULTIIF_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_NB_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_NB_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_NB_EXISTS) */

/** \def PDUR_GATEIF_NB_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing no buffer by
 * direct data provision. If at least one LoIf module exists having its dynamic payload
 * functionality disabled while If-gateway routing is enabled to destinations providing
 * direct data provision (CanIf, FrIfImmediate) this macro is set to STD_ON.
 * Otherwise it will be set to STD_OFF.
 */
#if ( \
        (((PDUR_CANIF_SUPPORT == STD_ON) && (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_FRIF_SUPPORT == STD_ON) && (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_LINIF_SUPPORT == STD_ON) && (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_OFF))) && \
        (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_CANIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)) \
        )
#define PDUR_GATEIF_NB_EXISTS STD_ON
#else
#define PDUR_GATEIF_NB_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_SB_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_SB_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_SB_EXISTS) */

/** \def PDUR_GATEIF_SB_EXISTS
 * \brief Description:Existence of a possible If-gateway routing path referencing a
 * single buffer by trigger transmit data provision. If at least one LoIf module exists
 * having its dynamic payload functionality disabled while If-gateway routing is enabled
 * to destinations providing trigger transmit data provision (LinIf, FrIf) and single
 * buffers are supported this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ( \
        (((PDUR_CANIF_SUPPORT == STD_ON) && (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_FRIF_SUPPORT == STD_ON) && (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_LINIF_SUPPORT == STD_ON) && (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_OFF))) && \
        (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)) \
        && PDUR_SB_TX_BUFFER_SUPPORT == STD_ON \
        )
#define PDUR_GATEIF_SB_EXISTS STD_ON
#else
#define PDUR_GATEIF_SB_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_DF_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_DF_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_DF_EXISTS) */

/** \def PDUR_GATEIF_DF_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing a FIFO buffer
 * by direct data provision. If at least one LoIf module exists having its dynamic payload
 * functionality disabled while If-gateway routing is enabled to destinations
 * providing direct data provision (CanIf, FrIfImmediate) and FIFO Tx-buffers are
 * supported this macro is set to STD_ON. Otherwise it will be set to STD_OFF. */
#if ((PDUR_GATEIF_NB_EXISTS == STD_ON) && (PDUR_FIFO_TX_BUFFER_SUPPORT == STD_ON))
#define PDUR_GATEIF_DF_EXISTS STD_ON
#else
#define PDUR_GATEIF_DF_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_TF_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_TF_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_TF_EXISTS) */

/** \def PDUR_GATEIF_TF_EXISTS
 * \brief This macro specifies whether a gateway path with a triggered FIFO buffer exists
 */
#if ( \
        (((PDUR_CANIF_SUPPORT == STD_ON) && (PDUR_CANIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_FRIF_SUPPORT == STD_ON) && (PDUR_FRIF_DYNPAYLOAD_SUPPORT == STD_OFF)) \
        || ((PDUR_LINIF_SUPPORT == STD_ON) && (PDUR_LINIF_DYNPAYLOAD_SUPPORT == STD_OFF))) && \
        (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)) \
        && (PDUR_FIFO_TX_BUFFER_SUPPORT == STD_ON) \
        )
#define PDUR_GATEIF_TF_EXISTS STD_ON
#else
#define PDUR_GATEIF_TF_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_NB_DYNPYLD_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_NB_DYNPYLD_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_NB_DYNPYLD_EXISTS) */

/** \def PDUR_GATEIF_NB_DYNPYLD_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing no buffer by
 * direct data provision with dynamic payload functionality. If at least one LoIf
 * module exists having its dynamic payload functionality enabled while If-gateway
 * routing is enabled to destinations providing direct data provision (CanIf, FrIfImmediate)
 * this macro is set to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ( (PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) && (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_CANIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)))
#define PDUR_GATEIF_NB_DYNPYLD_EXISTS STD_ON
#else
#define PDUR_GATEIF_NB_DYNPYLD_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_SB_DYNPYLD_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_SB_DYNPYLD_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_SB_DYNPYLD_EXISTS) */

/** \def PDUR_GATEIF_SB_DYNPYLD_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing a single
 * buffer by trigger transmit data provision with dynamic payload functionality.
 * If at least one LoIf module exists having its dynamic payload functionality enabled
 * while If-gateway routing is enabled to destinations providing trigger transmit
 * data provision (LinIf, FrIf) in using single buffer support this macro is set
 * to STD_ON. Otherwise it will be set to STD_OFF.
 */
#if ((PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) && (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)) && (PDUR_SB_TX_BUFFER_SUPPORT == STD_ON))
#define PDUR_GATEIF_SB_DYNPYLD_EXISTS STD_ON
#else
#define PDUR_GATEIF_SB_DYNPYLD_EXISTS STD_OFF
#endif

#if (defined PDUR_GATEIF_DF_DYNPYLD_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_DF_DYNPYLD_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_DF_DYNPYLD_EXISTS) */

/** \def PDUR_GATEIF_DF_DYNPYLD_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing a FIFO buffer
 * by direct data provision with dynamic payload functionality. If at least one LoIf
 * module exists having its dynamic payload functionality enabled while If-gateway
 * routing is enabled to destinations providing direct data provision (CanIf, FrIfImmediate)
 * and FIFO Tx-buffers are supported this macro is set to STD_ON. Otherwise it will
 * be set to STD_OFF.
 */
#if ((PDUR_GATEIF_NB_DYNPYLD_EXISTS == STD_ON) && (PDUR_FIFO_TX_BUFFER_SUPPORT == STD_ON))
#define PDUR_GATEIF_DF_DYNPYLD_EXISTS STD_ON
#else
#define PDUR_GATEIF_DF_DYNPYLD_EXISTS STD_OFF
#endif


#if (defined PDUR_GATEIF_TF_DYNPYLD_EXISTS) /* to prevent double declaration */
#error PDUR_GATEIF_TF_DYNPYLD_EXISTS already defined
#endif /* if (defined PDUR_GATEIF_TF_DYNPYLD_EXISTS) */

/** \def PDUR_GATEIF_TF_DYNPYLD_EXISTS
 * \brief Existence of a possible If-gateway routing path referencing a FIFO buffer
 * by trigger transmit data provision with dynamic payload functionality. If at least
 * one LoIf module exists having its dynamic payload functionality enabled while
 * If-gateway routing is enabled to destinations providing trigger transmit data provision
 * (LinIf, FrIf) and FIFO Tx-buffers are supported this macro is set to STD_ON. Otherwise
 * it will be set to STD_OFF.
 */
#if ((PDUR_LOIF_DYNPAYLOAD_SUPPORT == STD_ON) && (PDUR_IFGATEWAY_SUPPORT == STD_ON) && ((PDUR_LINIF_SUPPORT == STD_ON) || (PDUR_FRIF_SUPPORT == STD_ON)) && (PDUR_FIFO_TX_BUFFER_SUPPORT == STD_ON))
#define PDUR_GATEIF_TF_DYNPYLD_EXISTS STD_ON
#else
#define PDUR_GATEIF_TF_DYNPYLD_EXISTS STD_OFF
#endif


/*-----------------------[Service IDs]------------------------*/

#if (defined PDUR_SID_DBG_TX) /* to prevent double declaration */
#error PDUR_SID_DBG_TX already defined
#endif /* if (defined PDUR_SID_DBG_TX) */

/** Definition of service ID for PduR_DbgTransmit */
#define PDUR_SID_DBG_TX 63U


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* if !defined( PDUR_CFG_H ) */
/*==================[end of file]===========================================*/
