#if (!defined COM_CFG_H)
#define COM_CFG_H
/* --------{ EB Automotive C Source File }-------- */ 

/*==================[includes]==============================================*/

#include <TSAutosar.h>              /* EB specific standard types */
#include <ComStack_Types.h>         /* AUTOSAR standard types (ON/OFF) */
#include <Com_Local_Cfg.h>          /* local configuration */
#include <Com_Defs.h>               /* Definitions of macros */


/*==================[macros]================================================*/

#if (defined COM_DEV_ERROR_DETECT) /* To prevent double declaration */
#error COM_DEV_ERROR_DETECT already defined
#endif /* #if (defined COM_DEV_ERROR_DETECT) */
/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/ComConfigurationUseDet
 * Pre-processor switch for enabling the usage of the development error tracer
 * optimization
 */
#define COM_DEV_ERROR_DETECT STD_ON

#if (defined COM_CONFIGURATION_TIME_BASE) /* To prevent double declaration */
#error COM_CONFIGURATION_TIME_BASE already defined
#endif /* #if (defined COM_CONFIGURATION_TIME_BASE) */

/** \brief Define COM_CONFIGURATION_TIME_BASE
 * Parameter corresponds with Com/ComGeneral/ComConfigurationTimeBase (ECUC:1043df78-282c-4b02-a7ed-273edca6d590)
 * ComGeneral ComConfigurationTimeBase COM186: The period between successive
 * calls to the Main Functions (Rx, Tx, Routing) of AUTOSAR COM in seconds.
 * In the configuration the value has the type FloatParamDef. Nevertheless,
 * the COM_CONFIGURATION_TIME_BASE is the time in nano seconds, the type is
 * uint32 */
#define COM_CONFIGURATION_TIME_BASE UINT32_C(10000)

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComConstCfgAddressEnable (ECUC:8d65e20c-e6f9-4cf2-b228-9fbad9a85eaa)
 * Pre-processor switch for enabling constant configuration address
 * optimization
 */
#define COM_CONST_CFG_ADDRESS_ENABLE STD_OFF


#if (defined COM_CHECK_VALUE_SIZE_ENABLE) /* To prevent double declaration */
#error COM_CHECK_VALUE_SIZE_ENABLE already defined
#endif /* #if (defined COM_CHECK_VALUE_SIZE_ENABLE) */

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCheckValueSizeEnable (ECUC:3eae89a2-cae0-4436-ab33-336f29d7b247)
 * Pre-processor switch for enabling value size checks for Tx signals and signal groups
 */
#define COM_CHECK_VALUE_SIZE_ENABLE STD_OFF

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComReportToDetEnable (ECUC:1043df78-282c-4b02-a7ed-273edca6d590)
 * Pre-processor switch for enabling the reporting of development errors to
 * DET.
 */
#define COM_REPORT_TO_DET_ENABLE STD_ON

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComReportToDemEnable (ECUC:40f45cc0-37f5-419a-b337-d428951773c3)
 * Pre-processor switch for enabling the reporting of production errors to DEM.
 */
#define COM_REPORT_TO_DEM_ENABLE STD_OFF

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRelocatableCfgEnable (ECUC:f3e5ef96-0b97-4796-8949-3c91800bcbc4)
 * Pre-processor switch for enabling relocatable configuration support.
 */
#define COM_RELOCATABLE_CFG_ENABLE STD_ON

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCfgAlignmentEnable (ECUC:69738811-80f2-495f-b133-40d3bafb331f)
 * Pre-processor switch for enforcing the alignment of the relocatable
 * configuration.
 */
#define COM_CFG_ALIGNMENT_ENABLE STD_ON

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCfgAlignmentPaddingU8Value (ECUC:d92808ef-cb66-4b49-879f-360eabab8160)
 * Pre-processor value for the padding byte values for the alignment of the
 * relocatable configuration.
 */
#define COM_CFG_ALIGNMENT_PADDING_U8_VALUE UINT8_C(0xff)

/**
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCfgSignatureEnable (ECUC:0dcbcdb9-7b5d-4e78-93cd-faa8be2f7e4e)
 * Configuration Signature  
 */
#define COM_CFG_SIGNATURE_ENABLE STD_OFF

#if (defined COM_VERSION_INFO_API) /* To prevent double declaration */
#error COM_VERSION_INFO_API already defined
#endif /* #if (defined COM_VERSION_INFO_API) */

/** \brief Define COM_VERSION_INFO_API
 * Parameter corresponds with Com/ComGeneral/ComVersionInfoApi (ECUC:391f5569-abda-4a3d-bfb1-af45fba3d69a)
 * Development Error detection see ComGeneral ComVersionInfoApi
 * Possible values STD_ON/STD_OFF */
#define COM_VERSION_INFO_API STD_ON

#if (defined COM_RAM_SIZE_MAX) /* To prevent double declaration */
#error COM_RAM_SIZE_MAX already defined
#endif /* if (defined COM_RAM_SIZE_MAX) */

/** \brief Define COM_RAM_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRamSizeMax (ECUC:53bd9700-8040-426f-86cc-a54829e39716)
 * defines the maximum number of values which can addressed in RAM 
 * Possible values are
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index 
 * COM_INDEX_UINT32 uint32 is used as array index */
#define COM_RAM_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_RAM_BUFFER_SIZE_MAX) /* To prevent double declaration */
#error COM_RAM_BUFFER_SIZE_MAX already defined
#endif /* if (defined COM_RAM_BUFFER_SIZE_MAX) */


#if (defined COM_CONFIGURATION_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CONFIGURATION_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_CONFIGURATION_ARRAY_SIZE_MAX) */

/** \brief Define COM_CONFIGURATION_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComConfigurationArraySizeMax (ECUC:1043df78-282c-4b02-a7ed-273edca6d590)
 * Maximum size of the PBCfg
 * Possible values 
 * COM_INDEX_UINT16 uint16 is used as array index
 * COM_INDEX_UINT32 uint32 is used as array index */
#define COM_CONFIGURATION_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_TX_TIMEOUT_FACTOR_SIZE) /* To prevent double declaration */
#error COM_TX_TIMEOUT_FACTOR_SIZE already defined
#endif /* #if (defined COM_TX_TIMEOUT_FACTOR_SIZE) */

/** \brief Define COM_TX_TIMEOUT_FACTOR_SIZE
 * Parameter corresponds with ComTxTimeoutFactorSize
 * defines the size of Com/ComConfig/ComGeneral/VendorSpecific/ComTxTimeoutFactorSize (ECUC:ee94c5ec-4758-44ff-a95e-9c7c42d2922a)
 * Possible values are
 * COM_0BIT ComTxTimeoutFactor is not available, or
 * COM_8BIT ComTxTimeoutFactor is a 8 bit value, or
 * COM_16BIT ComTxTimeoutFactor is a 16 bit value, or
 * COM_32BIT ComTxTimeoutFactor is a 32 bit value */
#define COM_TX_TIMEOUT_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX) */

/** \brief Define COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCbkTxTOutArraySizeMax (ECUC:50311a8a-cbc2-4723-a311-4de060a07239)
 * defines the maximum number of Callback Tx Timeout function pointers in
 * array of RTE (Com_CbkTxTOut).
 * NOTE: if (COM_TX_TIMEOUT_FACTOR_SIZE == COM_0BIT) COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX has to be INDEX_NONE
 * Possible values are 
 * COM_INDEX_NONE no values available (Deadline Monitoring on Sender side is not supported, NON AUTOSAR COM 3.0 behavior)
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CBK_TX_T_OUT_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX) */

/** \brief Define COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCbkRxTOutArraySizeMax (ECUC:cddcd9a2-db29-4e62-8f6d-4a9562a0673d)
 * defines the maximum number of Callback Rx Timeout function pointers in
 * array of RTE (Com_CbkRxTOut).
 * Possible values are 
 * COM_INDEX_NONE no values available (Deadline Monitoring on Receiver side is not supported, NON AUTOSAR COM 3.0 behavior)
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CBK_RX_T_OUT_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX) */

/** \brief Define COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCbkRxAckPtrArraySizeMax (ECUC:35f768ef-9b57-47f6-9a9d-a2875410c116)
 * defines the maximum number of Callback Rx Notification function pointers in
 * array of RTE (Com_CbkRxAck).
 * Possible values are 
 * COM_INDEX_NONE no callbacks available)
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CBK_RX_ACK_PTR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX) */

/** \brief Define COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCbkTxAckPtrArraySizeMax (ECUC:f9697e48-e91c-47f9-9334-ecdd0b1ca914)
 * defines the maximum number of Callback Tx Notification function pointers in
 * array of RTE (Com_CbkTxAck).
 * Possible values are 
 * COM_INDEX_NONE no callbacks available
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CBK_TX_ACK_PTR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX) */

/** \brief Define COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCbkTxErrPtrArraySizeMax (ECUC:5235927a-ad91-4bd5-8751-be677da35637)
 * defines the maximum number of Callback Tx Error Notification function pointers in
 * array of RTE (Com_CbkTxErr).
 * Possible values are 
 * COM_INDEX_NONE no callbacks available
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CBK_TX_ERR_PTR_ARRAY_SIZE_MAX COM_INDEX_UINT16


#if (defined COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX) */

/** \brief Define COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComCallOutFuncPtrArraySizeMax (ECUC:57f19a382-01fd-42f7-901f-34a3cdd1d8c7)
 * defines the maximum number of Call-out function pointers in
 * Com_RxCallouts and Com_TxCallouts.
 * Possible values are 
 * COM_INDEX_NONE no callouts available
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_CALL_OUT_FUNC_PTR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_SIGNAL_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_SIGNAL_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_SIGNAL_ARRAY_SIZE_MAX) */

/** \brief Define COM_SIGNAL_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalArraySizeMax (ECUC:301ccd1b-c3ee-4260-b8a2-2ce22b14c76f)
 * defines the maximum number of values which can be hold in the array 
 * ComSignal.
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_SIGNAL_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_SIGNAL_INIT_VALUE_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_ENABLE already defined
#endif /* #if (defined COM_SIGNAL_INIT_VALUE_ENABLE) */

/** \brief Define COM_SIGNAL_INIT_VALUE_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalInitValueEnable (ECUC:b7bc5d36-1e52-4496-9137-fab752b56f79)
 * Initial values of signals
 * Possible values
 * STD_ON  Initial values are available (if defined with ComSignalInitValue) (AUTOSAR COM 3.0)
 * STD_OFF feature is disabled (for all signal no initial values are used) */
#define COM_SIGNAL_INIT_VALUE_ENABLE STD_ON

#if (defined COM_SIGNAL_INVALIDATION_EQUALS_INIT_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_INVALIDATION_EQUALS_INIT_ENABLE already defined
#endif /* #if (defined COM_SIGNAL_INVALIDATION_EQUALS_INIT_ENABLE) */


#if (defined COM_RX_DATA_TOUT_ACTION) /* To prevent double declaration */
#error COM_RX_DATA_TOUT_ACTION already defined
#endif /* #if (defined COM_RX_DATA_TOUT_ACTION) */

/** \brief Define COM_RX_DATA_TOUT_ACTION
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxDataTimeoutAction (ECUC:b71903fd0-6452-4a7c-81c5-a0f933638ea9)
 * Action performed upon a reception of a timeout violation
 * Possible values
 * COM_RX_DATA_TOUT_ACTION_NONE for all signals no replacement takes place
 * COM_RX_DATA_TOUT_ACTION_REPLACE for all signals a replacement with ComInitValue takes place
 * COM_RX_DATA_TOUT_ACTION_CONFIG AUTOSAR behavior is enabled (for each signal the action can be defined) */
#define COM_RX_DATA_TOUT_ACTION COM_RX_DATA_TOUT_ACTION_CONFIG

#if (defined COM_ENDIANNESS_CONVERSION) /* To prevent double declaration */
#error COM_ENDIANNESS_CONVERSION already defined
#endif /* #if (defined COM_ENDIANNESS_CONVERSION) */

/** \brief Define COM_ENDIANNESS_CONVERSION
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComEndiannessConversion (ECUC:19b3a940-2b68-406a-8835-3540ea15875a)
 * Conversion of endianness of values of signals
 * Possible values
 * COM_BIG_ENDIAN all signals have the big endianness
 * COM_LITTLE_ENDIAN all signals have the little endianness
 * COM_OPAQUE all signals are of type uint8[n]
 * COM_ENDIAN_ENABLE for each signal the endianness is defined separately (AUTOSAR COM 3.0)
 * COM_ENDIAN_DISABLE conversion is disabled at all */
#define COM_ENDIANNESS_CONVERSION COM_ENDIAN_ENABLE

#if (defined COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX) */

/** \brief Define COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxTimeoutFactorArraySMax (ECUC:95327a43-0b93-47d1-adb1-1f488eb8fe49)
 * defines the maximum number of values which can be hold in the array 
 * ComRxTimeoutFactorList.
 * Only valid if COM_RX_TIMEOUT_FACTOR_STORAGE == COM_STORAGE_REFERENCE (ComRxTimeoutFactorStorage == STORAGE_REFERENCE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_RX_TIMEOUT_FACTOR_SIZE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_FACTOR_SIZE already defined
#endif /* #if (defined COM_RX_TIMEOUT_FACTOR_SIZE) */

/** \brief Define COM_RX_TIMEOUT_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxTimeoutFactorSize (ECUC:ce501157-856c-48c8-9c2c-c54dedcf6ac0)
 * defines the size of ComRxTimeoutFactor
 * Possible values are
 * COM_0BIT ComRxTimeoutFactor is not available, or
 * COM_8BIT ComRxTimeoutFactor is a 8 bit value, or
 * COM_16BIT ComRxTimeoutFactor is a 16 bit value, or
 * COM_32BIT (the ComRxTimeoutFactor is a 32 bit value) */
#define COM_RX_TIMEOUT_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_RX_TIMEOUT_FACTOR_STORAGE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_FACTOR_STORAGE already defined
#endif /* if (defined COM_RX_TIMEOUT_FACTOR_STORAGE) */

/** \brief Define COM_RX_TIMEOUT_FACTOR_STORAGE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxTimeoutFactorStorage (ECUC:b7776406-8945-4874-9ba5-0ca4f21846d9)
 * defines whether ComRxTimeoutFactor is stored direct or in a array.
 * Note: Only valid if ComRxTimeoutFactorSize != COM_0BIT
 * Possible values are
 * COM_STORAGE_DIRECT ComRxTimeoutFactor and ComRxFirstTimeoutFactor are stored
 * direct
 * COM_STORAGE_REFERENCE ComRxTimeoutFactor and ComRxFirstTimeoutFactor are
 * stored in the array ComRxTimeoutFactorList */
#define COM_RX_TIMEOUT_FACTOR_STORAGE COM_STORAGE_REFERENCE

#if (defined (COM_RX_FIRST_TIMEOUT_FACTOR_SIZE)) /* To prevent double declaration */
#error COM_RX_FIRST_TIMEOUT_FACTOR_SIZE already defined
#endif /* #if (defined COM_RX_FIRST_TIMEOUT_FACTOR_SIZE) */

/** \brief Define COM_RX_FIRST_TIMEOUT_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxFirstTimeoutFactorSize (ECUC:03a01d69-04ca-4b41-b05f-6d39d247bad5)
 * defines the size of ComRxFirstTimeoutFactor
 * Possible values are
 * COM_0BIT ComTxFirstTimeoutFactor is not available, or
 * COM_8BIT ComTxFirstTimeoutFactor is a 8 bit value, or
 * COM_16BIT ComTxFirstTimeoutFactor is a 16 bit value, or
 * COM_32BIT ComTxFirstTimeoutFactor is a 32 bit value. */
#define COM_RX_FIRST_TIMEOUT_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX) */

/** \brief Define COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxTimeoutFactorArraySizeMax (ECUC:25e2db7e-929f-43a9-831f-4d55703b4d41)
 * defines the maximum number of values which can be hold in the array 
 * ComTxTimeoutFactorList.
 * Only valid if COM_TX_TIMEOUT_FACTOR_STORAGE == COM_STORAGE_REFERENCE (ComTxTimeoutFactorStorage == STORAGE_REFERENCE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_TX_TIMEOUT_FACTOR_STORAGE) /* To prevent double declaration */
#error COM_TX_TIMEOUT_FACTOR_STORAGE already defined
#endif /* if (defined COM_TX_TIMEOUT_FACTOR_STORAGE) */

/** \brief Define COM_TX_TIMEOUT_FACTOR_STORAGE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxTimeoutFactorStorage (ECUC:d3edae76-5a38-4d02-8b1b-f27fc4c0f6ea)
 * defines whether ComTxTimeoutFactor is stored direct or in a array 
 * Note: Only valid if ComTxTimeoutFactorSize != COM_0BIT
 * COM_STORAGE_DIRECT ComTxTimeoutFactor is stored direct
 * COM_STORAGE_REFERENCE  ComTxTimeoutFactor is stored in the array
 * ComTxTimeoutFactorList */
#define COM_TX_TIMEOUT_FACTOR_STORAGE COM_STORAGE_REFERENCE

#if (defined COM_TX_MODE_REPETITION_PERIOD_FACTOR_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_REPETITION_PERIOD_FACTOR_SIZE already defined
#endif /* #if (defined COM_TX_MODE_REPETITION_PERIOD_FACTOR_SIZE) */

/** \brief Define COM_TX_MODE_REPETITION_PERIOD_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeRepetitionPeriodFactorS (ECUC:169b9070-bd15-449a-9407-1146d2a63666)
 * This definition is used for all ComTxModeRepetitionPeriodFactorType
 * Possible values are
 * COM_0BIT ComTxModeRepetitionPeriodFactor is not available, or
 * COM_8BIT ComTxModeRepetitionPeriodFactor is a 8 bit value, or
 * COM_16BIT ComTxModeRepetitionPeriodFactor is a 16 bit value, or
 * COM_32BIT ComTxModeRepetitionPeriodFactor is a 32 bit value. */
#define COM_TX_MODE_REPETITION_PERIOD_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_TX_MODE_TIME_OFFSET_FACTOR_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_TIME_OFFSET_FACTOR_SIZE already defined
#endif /* #if (defined COM_TX_MODE_TIME_OFFSET_FACTOR_SIZE) */

/** \brief Define COM_TX_MODE_TIME_OFFSET_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeTimeOffsetFactorSize (ECUC:3f776183-b3f7-4acf-8ec6-8f88d34ef0fc)
 * This definition is used for ComTxModeTimeOffsetFactorType. Only valid if ComTxModeTimePeriodFactor != COM_0BIT
 * Possible values are
 * COM_0BIT ComTxModeTimeOffsetFactor is not available, or
 * COM_8BIT ComTxModeTimeOffsetFactor is a 8 bit value, or
 * COM_16BIT ComTxModeTimeOffsetFactor is a 16 bit value, or
 * COM_32BIT ComTxModeTimeOffsetFactor is a 32 bit value. */
#define COM_TX_MODE_TIME_OFFSET_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_TX_MODE_TIME_PERIOD_FACTOR_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_TIME_PERIOD_FACTOR_SIZE already defined
#endif /* #if (defined COM_TX_MODE_TIME_PERIOD_FACTOR_SIZE) */

/** \brief Define COM_TX_MODE_TIME_PERIOD_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeTimePeriodFactorSize (ECUC:143beb84-9cfc-4139-b681-a8bb1f56abde)
 * This definition is used for all ComTxModeTimePeriodFactorType
 * Possible values are
 * COM_0BIT ComTxModeTimePeriodFactor is not available, or
 * COM_8BIT ComTxModeTimePeriodFactor is a 8 bit value, or
 * COM_16BIT ComTxModeTimePeriodFactor is a 16 bit value, or
 * COM_32BIT ComTxModeTimePeriodFactor is a 32 bit value */
#define COM_TX_MODE_TIME_PERIOD_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE_MAX) */

/** \brief Define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxIpduMDTFactorArraySizeMax (ECUC:8faa65c0-52a5-446e-b38b-880fd7d630c2)
 * defines the maximum number of values which can be hold in the array 
 * ComTxIPduMinimumDelayTimeFactor.
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_SIZE already defined
#endif /* #if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_SIZE) */

/** \brief Define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_SIZE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxIpduMDTFactorSize (ECUC:f9684e88-ff0e-4706-9290-fa5a86320b09)
 * This definition is used for the definition of ComTxIPduMinimumDelayTimeFactorType.
 * Possible values are 
 * COM_0BIT ComTxIpduMinimumDelayTimeFactor is not available, or
 * COM_8BIT ComTxIpduMinimumDelayTimeFactor is a 8 bit value, or
 * COM_16BIT ComTxIpduMinimumDelayTimeFactor is a 16 bit value, or
 * COM_32BIT ComTxIpduMinimumDelayTimeFactor is a 32 bit value */
#define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_SIZE COM_SIZE_16_BIT

#if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_STORAGE) /* To prevent double declaration */
#error COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_STORAGE already defined
#endif /* #if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_STORAGE) */

/** \brief Define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_STORAGE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxIpduMDTFactorStorage (ECUC:a44e775d-da3b-4f66-b1c0-819db9de2367)
 * defines whether ComTxIPduMinimumDelayTimeFactor is stored direct or in a
 * array Note: Only valid if ComTxIpduMDTFactorSize != COM_0BIT
 * COM_STORAGE_DIRECT ComTxIPduMinimumDelayTimeFactor is stored direct
 * COM_STORAGE_REFERENCE  ComTxIPduMinimumDelayTimeFactor is stored in the array ComTxIPduMinimumDelayTimeFactor */
#define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_STORAGE COM_STORAGE_REFERENCE

#if (defined COM_IPDU_GROUP_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_IPDU_GROUP_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_IPDU_GROUP_ARRAY_SIZE_MAX) */

/** \brief Define COM_IPDU_GROUP_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComIpduGroupArraySizeMax (ECUC:e24b884d-bde1-42c2-b815-151925b3e1c6)
 * [COM187] The number of supported I-PDU groups per ECU shall be limited to a
 * maximum of 32 to simplify implementation For this implementation the
 * maximum of I-PDU groups can be set up to 254 */
#define COM_IPDU_GROUP_ARRAY_SIZE_MAX 32U

#if (defined COM_IPDU_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_IPDU_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_IPDU_ARRAY_SIZE_MAX) */

/** \brief Define COM_IPDU_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComIpduArraySizeMax (ECUC:c8e9528b-b177-4f04-8c33-f6f23738ceed)
 * defines the maximum number of values which can be hold in the arrays 
 * ComRxIPdu and ComTxIPdu.
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_IPDU_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_SIGNAL_GROUP_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_SIGNAL_GROUP_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_SIGNAL_GROUP_ARRAY_SIZE_MAX) */

/** \brief Define COM_SIGNAL_GROUP_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalGroupArraySizeMax (ECUC:d1803ebd-60f4-4088-8244-c2af7ec82c8a)
 * defines the maximum number of values which can be hold in the array
 * ComSignalGroup
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_SIGNAL_GROUP_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_GROUP_SIGNAL_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_GROUP_SIGNAL_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_GROUP_SIGNAL_ARRAY_SIZE_MAX) */

/** \brief Define COM_GROUP_SIGNAL_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComGroupSignalArraySizeMax (ECUC:40c59dec-8aa0-4cda-a536-5b485266f4e1)
 * defines the maximum number of values which can be hold in the array
 * ComGroupSignal
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_GROUP_SIGNAL_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_SIGNAL_BYTE_ALIGN) /* To prevent double declaration */
#error COM_SIGNAL_BYTE_ALIGN already defined
#endif /* if (defined COM_SIGNAL_BYTE_ALIGN) */

/** \brief Define COM_SIGNAL_BYTE_ALIGN
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalByteAlign (ECUC:4c57bf77-96a4-457c-892f-a64cb1e74e15)
 * Possible values are 
 * STD_ON EB optimization is switch on (requires a alignment of the signals of
 * all IPDUs meaning starting position of a signal has to be on a byte border)
 * STD_OFF the signals do not have to be aligned (as defined in the SWS AUTOSAR COM 3.0) */
#define COM_SIGNAL_BYTE_ALIGN STD_OFF

#if (defined COM_IPDU_LENGTH_MAX) /* To prevent double declaration */
#error COM_IPDU_LENGTH_MAX already defined
#endif /* if (defined COM_IPDU_LENGTH_MAX) */

/** \brief Define COM_IPDU_LENGTH_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComIpduLengthMax (ECUC:b9120222-48fc-4ff0-ace0-8ca95a5e64df)
 * It defines the maximum length of a I-Pdu.
 * Possible values are
 * COM_8_BYTES the maximum size of a IPDU is 8 bytes (CAN or LIN)
 * COM_32_BYTES the maximum size of a IPDU is 32 bytes (only with FlexRay optimization for smaller configuration size)
 * COM_254_BYTES the maximum size of a IPDU is 254 bytes (only with FlexRay). */
#define COM_IPDU_LENGTH_MAX COM_SIZE_254_BYTES

#if (defined COM_UPDATE_BIT_RX_CONFIG) /* To prevent double declaration */
#error COM_UPDATE_BIT_RX_CONFIG already defined
#endif /* if (defined COM_UPDATE_BIT_RX_CONFIG) */

/** \brief Define COM_UPDATE_BIT_RX_CONFIG
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComUpdateBitRxConfig
 * Possible values are
 * COM_UPDATE_BIT_ABSENT_FOR_ALL Update bits are not supported on receiver side
 * COM_UPDATE_BIT_PRESENT_FOR_ALL Update bits on receiver side are supported
 * and present for every ComSignal and ComSignalGroup
 * COM_UPDATE_BIT_INDIVIDUAL Update bits are supported on receiver side (as defined in the SWS
 * AUTOSAR COM 3.0) */
#define COM_UPDATE_BIT_RX_CONFIG COM_UPDATE_BIT_INDIVIDUAL

#if (defined COM_UPDATE_BIT_TX_CONFIG) /* To prevent double declaration */
#error COM_UPDATE_BIT_TX_CONFIG already defined
#endif /* if (defined COM_UPDATE_BIT_TX_CONFIG) */

/** \brief Define COM_UPDATE_BIT_TX_CONFIG
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComUpdateBitTxConfig (ECUC:e5991134-f080-4b93-9e4a-4a2a253f477b)
 * defines the update bit behavior on sender side
 * Possible values are
 * COM_UPDATE_BIT_ABSENT_FOR_ALL Update bits are not supported on sender side
 * COM_UPDATE_BIT_PRESENT_FOR_ALL Update bits are supported and present for every ComSignal and 
 * ComSignalGroup on sender side
 * COM_UPDATE_BIT_INDIVIDUAL Update bits are supported on sender side (as defined in the SWS 
 * AUTOSAR COM 3.0) */
#define COM_UPDATE_BIT_TX_CONFIG COM_UPDATE_BIT_INDIVIDUAL

#if (defined COM_TMS_ENABLE) /* To prevent double declaration */
#error COM_TMS_ENABLE already defined
#endif /* if (defined COM_TMS_ENABLE) */

/** \brief Define COM_TMS_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTmsEnable (ECUC:e9fb2a4f-3d5f-44b9-af9b-eec3b2e5b20a)
 * Note if Transmission Mode Selection (TMS) is disabled, also filtering on
 * sender side is disabled
 * Possible values are
 * STD_ON TMS is enabled (as defined in the SWS AUTOSAR COM 3.0) 
 * STD_OFF TMS is not supported */
#define COM_TMS_ENABLE STD_ON


#if (defined COM_FILTER_RECEIVER_ENABLE) /* To prevent double declaration */
#error COM_FILTER_RECEIVER_ENABLE already defined
#endif /* if (defined COM_FILTER_RECEIVER_ENABLE) */

/** \brief Define COM_FILTER_RECEIVER_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComFilterReceiverEnable (ECUC:478e8f64-982b-4d14-88d0-86ae2c7660b1)
 * Possible values are
 * STD_ON Filtering on receiver side is enabled (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF Filtering on receiver side is not supported */
#define COM_FILTER_RECEIVER_ENABLE STD_ON

#if (defined COM_FILTER_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_FILTER_ARRAY_SIZE_MAX already defined
#endif /* #if (defined COM_FILTER_ARRAY_SIZE_MAX) */

/** \brief Define COM_FILTER_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComFilterArraySizeMax (ECUC:40c59dec-8aa0-4cda-a536-5b485266f4e1)
 * defines the maximum number of filters (for all filter arrays separately).
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_FILTER_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_SIGNAL_TYPE_BOOLEAN_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_BOOLEAN_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_BOOLEAN_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_BOOLEAN_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeBooleanEnable (ECUC:04cebbcc-1125-4e56-8b0a-30c633139d5e)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_BOOLEAN_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_UINT8_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_UINT8_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_UINT8_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_UINT8_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeUint8Enable (ECUC:59709146-cda5-4225-bc9a-c4724cc97547)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_UINT8_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_SINT8_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_SINT8_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_SINT8_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_SINT8_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeSint8Enable (ECUC:13738898-1b8e-4a69-a4a9-b7c5259f4b71)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_SINT8_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_UINT16_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_UINT16_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_UINT16_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_UINT16_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeUint16Enable (ECUC:5583e7f3-919b-4590-aed6-26e587028b2a)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_UINT16_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_SINT16_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_SINT16_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_SINT16_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_SINT16_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeSint16Enable (ECUC:15e78e6f-2921-47f0-ba02-8d5a6a03eeed)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_SINT16_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_UINT32_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_UINT32_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_UINT32_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_UINT32_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeUint32Enable (ECUC:9d336624-0c80-4a7f-85b4-b54d345b877c)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_UINT32_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_SINT32_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_SINT32_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_SINT32_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_SINT32_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeSint32Enable (ECUC:74984cb9-a3cf-4329-ae88-37eb087e72c7)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_SINT32_ENABLE STD_ON

#if (defined COM_SIGNAL_TYPE_UINT8_N_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_TYPE_UINT8_N_ENABLE already defined
#endif /* if (defined COM_SIGNAL_TYPE_UINT8_N_ENABLE) */

/** \brief Define COM_SIGNAL_TYPE_UINT8_N_ENABLE
 * defines if the signal data type is supported
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalTypeUint8NEnable (ECUC:6785b31c-4c44-454b-84e3-a4cf61d88485)
 * Possible values are 
 * STD_ON data type supported (as defined in the SWS AUTOSAR COM 3.0)
 * STD_OFF data type not supported */
#define COM_SIGNAL_TYPE_UINT8_N_ENABLE STD_ON

#if (defined COM_FILTER_ONE_EVERY_N_PERIOD_OFFSET_SIZE_MAX) /* To prevent double declaration */
#error COM_FILTER_ONE_EVERY_N_PERIOD_OFFSET_SIZE_MAX already defined
#endif /* if (defined COM_FILTER_ONE_EVERY_N_PERIOD_OFFSET_SIZE_MAX) */

/** \brief Define COM_FILTER_ONE_EVERY_N_PERIOD_OFFSET_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComFilterOneEveryNPeriodOffSMax (ECUC:e9f943d0-70c0-4c83-af6b-6c13d7100413)
 * defines the bit size of ComFilterOneEveryNSizePeriodOffset
 * Possible values are
 * COM_0BIT the filter OneEveryN is not available
 * COM_8BIT the size of the values is uint8
 * COM_16BIT the size of the values is uint16
 * COM_32BIT the size of the values is uint32 */
#define COM_FILTER_ONE_EVERY_N_PERIOD_OFFSET_SIZE_MAX COM_SIZE_16_BIT

#if (defined COM_FILTER_ONE_EVERY_N_OCCURANCE_MAX) /* To prevent double declaration */
#error COM_FILTER_ONE_EVERY_N_OCCURANCE_MAX already defined
#endif /* if (defined COM_FILTER_ONE_EVERY_N_OCCURANCE_MAX) */

/** \brief Define COM_FILTER_ONE_EVERY_N_OCCURANCE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComFilterOneEveryNOccuranceMax (ECUC:b7787700-c711-449d-9978-0e1161a604de)
 * defines the bit size of ComFilterOneEveryNOccurrence
 * Possible values are 
 * COM_0BIT the filter OneEveryN is not available
 * COM_8BIT the size of OneEveryN is uint8
 * COM_16BIT the size of OneEveryN is uint16
 * COM_32BIT the size of OneEveryN is uint32 */
#define COM_FILTER_ONE_EVERY_N_OCCURANCE_MAX COM_SIZE_16_BIT

#if (defined COM_TX_MODE_DIRECT_ENABLE) /* To prevent double declaration */
#error COM_TX_MODE_DIRECT_ENABLE already defined
#endif /* if (defined COM_TX_MODE_DIRECT_ENABLE) */

/** \brief Define COM_TX_MODE_DIRECT_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeDirectEnable (ECUC:4c1e5688-95a6-418f-be07-1172808261e9)
 * Enables the Direct transmission mode (for en-/disabling N-Times mode use
 * ComTxModeNTimesEnable)
 * Possible values
 * STD_ON Direct transmission mode is enabled (AUTOSAR COM 3.0)
 * STD_OFF Direct transmission mode is disabled */
#define COM_TX_MODE_DIRECT_ENABLE STD_ON

#if (defined COM_TX_MODE_N_TIMES_ENABLE) /* To prevent double declaration */
#error COM_TX_MODE_N_TIMES_ENABLE already defined
#endif /* if (defined COM_TX_MODE_N_TIMES_ENABLE) */

/** \brief Define COM_TX_MODE_N_TIMES_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeNTimesEnable (ECUC:8fc330e5-1e0f-4b28-a343-5b6aebb004e5)
 * Enables the N-Times transmission mode (for en-/disabling Direct mode use
 * ComTxModeDirectEnable)
 * Possible values
 * STD_ON N-Times transmission mode is enabled (AUTOSAR COM 3.0)
 * STD_OFF N-Times transmission mode is disabled */
#define COM_TX_MODE_N_TIMES_ENABLE STD_ON

#if (defined COM_TX_MODE_PERIODIC_ENABLE) /* To prevent double declaration */
#error COM_TX_MODE_PERIODIC_ENABLE already defined
#endif /* if (defined COM_TX_MODE_PERIODIC_ENABLE) */

/** \brief Define COM_TX_MODE_PERIODIC_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModePeriodicEnable (ECUC:201b1fc2-f7a1-4363-aaaf-68b85e20bf60)
 * Enables the Periodic (cyclic) transmission mode
 * Possible values
 * STD_ON Periodic transmission mode is enabled (AUTOSAR COM 3.0)
 * STD_OFF Periodic transmission mode is disabled */
#define COM_TX_MODE_PERIODIC_ENABLE STD_ON

#if (defined COM_TX_MODE_MIXED_DIRECT_ENABLE) /* To prevent double declaration */
#error COM_TX_MODE_MIXED_DIRECT_ENABLE already defined
#endif /* if (defined COM_TX_MODE_MIXED_DIRECT_ENABLE) */

/** \brief Define COM_TX_MODE_MIXED_DIRECT_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeMixedDirectEnable (ECUC:d1ea41a8-3d79-446f-ba26-1dffd772c1e5)
 * Enables the Mixed transmission mode with direct transmission
 * Possible values
 * STD_ON Mixed transmission mode with direct transmission is enabled (AUTOSAR COM 3.0)
 * STD_OFF Mixed transmission mode with direct transmission is disabled */
#define COM_TX_MODE_MIXED_DIRECT_ENABLE STD_ON

#if (defined COM_TX_MODE_MIXED_N_TIMES_ENABLE) /* To prevent double declaration */
#error COM_TX_MODE_MIXED_N_TIMES_ENABLE already defined
#endif /* if (defined COM_TX_MODE_MIXED_N_TIMES_ENABLE) */

/** \brief Define COM_TX_MODE_MIXED_N_TIMES_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeMixedNTimesEnable (ECUC:36408013-56d1-4cff-b9d3-cc84c4128509)
 * Enables the Mixed transmission mode with N-Times transmission
 * Possible values
 * STD_ON Mixed transmission mode with N-Times transmission is enabled (AUTOSAR COM 3.0)
 * STD_OFF Mixed transmission mode with N-Times transmission is disabled */
#define COM_TX_MODE_MIXED_N_TIMES_ENABLE STD_ON

#if (defined COM_TX_MODE_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_TX_MODE_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_TX_MODE_ARRAY_SIZE_MAX) */

/** \brief Define COM_TX_MODE_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxModeArraySizeMax (ECUC:a708669a-e137-4b92-9b46-fd735c705cfd)
 * defines the maximum number of values which can be hold in the arrays
 * ComTxModeNTimes, ComTxModePeriodic, ComTxModeMixed. Note this parameter is
 * only valid if at least one of the parameters ComTxModeNTimesEnable, 
 * ComTxModePeriodicEnable or ComTxModeMixedNTimesEnable is set to STD_ON
 * (COM_TX_MODE_DIRECT_ENABLE, COM_TX_MODE_PERIODIC_ENABLE,
 * COM_TX_MODE_MIXED_N_TIMES_ENABLE )
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_TX_MODE_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_TX_SIG_CONF_DEFERRED_ENABLE) /* To prevent double declaration */
#error COM_TX_SIG_CONF_DEFERRED_ENABLE already defined
#endif /* if (defined COM_TX_SIG_CONF_DEFERRED_ENABLE) */

/** \brief Define COM_TX_SIG_CONF_DEFERRED_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxSigConfDeferredEnable (ECUC:d82b2368-ae89-4de1-88ad-23b658af64c8)
 * Enables deferred confirmation of TX signals
 * Possible values
 * STD_ON deferred confirmation of TX signals is enabled (AUTOSAR COM 3.0)
 * STD_OFF deferred confirmation of TX signals is disabled */
#define COM_TX_SIG_CONF_DEFERRED_ENABLE STD_ON

#if (defined COM_TX_SIG_CONF_IMMEDIATE_ENABLE) /* To prevent double declaration */
#error COM_TX_SIG_CONF_IMMEDIATE_ENABLE already defined
#endif /* if (defined COM_TX_SIG_CONF_IMMEDIATE_ENABLE) */

/** \brief Define COM_TX_SIG_CONF_IMMEDIATE_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxSigConfImmediateEnable (ECUC:1ef8ac5e-3635-45f5-8cb6-f6bcc1cc0358)
 * Enables immediate confirmation of TX signals
 * Possible values
 * STD_ON immediate confirmation of TX signals is enabled (AUTOSAR COM 3.0)
 * STD_OFF immediate confirmation of TX signals is disabled */
#define COM_TX_SIG_CONF_IMMEDIATE_ENABLE STD_ON

#if (defined COM_RX_SIG_CONF_DEFERRED_ENABLE) /* To prevent double declaration */
#error COM_RX_SIG_CONF_DEFERRED_ENABLE already defined
#endif /* if (defined COM_RX_SIG_CONF_DEFERRED_ENABLE) */

/** \brief Define COM_RX_SIG_CONF_DEFERRED_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxSigConfDeferredEnable (ECUC:f10e2d71-4719-463e-8fc6-cc3dfbe153d9)
 * Enables deferred confirmation of RX signals
 * Possible values
 * STD_ON deferred confirmation of RX signals is enabled (AUTOSAR COM 3.0)
 * STD_OFF deferred confirmation of RX signals is disabled */
#define COM_RX_SIG_CONF_DEFERRED_ENABLE STD_ON

#if (defined COM_RX_SIG_CONF_IMMEDIATE_ENABLE) /* To prevent double declaration */
#error COM_RX_SIG_CONF_IMMEDIATE_ENABLE already defined
#endif /* if (defined COM_RX_SIG_CONF_IMMEDIATE_ENABLE) */

/** \brief Define COM_RX_SIG_CONF_IMMEDIATE_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComRxSigConfImmediateEnable (ECUC:764b53ef-8353-4bbe-b72e-7e87e60d69e8)
 * Enables immediate confirmation of RX signals
 * Possible values
 * STD_ON immediate confirmation of RX signals is enabled (AUTOSAR COM 3.0)
 * STD_OFF immediate confirmation of RX signals is disabled */
#define COM_RX_SIG_CONF_IMMEDIATE_ENABLE STD_ON

#if (defined COM_SIGNAL_GW_ENABLE) /* To prevent double declaration */
#error COM_SIGNAL_GW_ENABLE already defined
#endif /* #if (defined COM_SIGNAL_GW_ENABLE) */

/** \brief Define COM_SIGNAL_GW_ENABLE
 * Enables the signal gateway
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalGwEnable (ECUC:ff53b32c-d748-4310-946b-5d0221f2b4ef)
 * Possible values
 * STD_ON Signal GW is enabled (AUTOSAR COM 3.0)
 * STD_OFF Signal GW is disabled */
#define COM_SIGNAL_GW_ENABLE STD_ON


#if (COM_SIGNAL_GW_ENABLE == STD_ON)

#if (defined COM_GW_SOURCE_DESCRIPTION_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_GW_SOURCE_DESCRIPTION_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_GW_SOURCE_DESCRIPTION_ARRAY_SIZE_MAX) */

/** \brief Define COM_GW_SOURCE_DESCRIPTION_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComGwSourceDescArraySizeMax (ECUC:19a1f270-26fd-4893-a057-953456595d51)
 * defines the maximum number of values which can be hold in the array
 * ComGWSourceDescription. Only valid if (COM_SIGNAL_GW_ENABLE == STD_ON) (ComSignalGwEnable == TRUE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_GW_SOURCE_DESCRIPTION_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_GW_SOURCE_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_GW_SOURCE_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_GW_SOURCE_ARRAY_SIZE_MAX) */

/** \brief Define COM_GW_SOURCE_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComGwSourceArraySizeMax (ECUC:b1ebdeba-c1dc-4643-9de2-7a937e26300a)
 * defines the maximum number of values which can be hold in the array
 * ComGwSource. Only valid if (COM_SIGNAL_GW_ENABLE == STD_ON) (ComSignalGwEnable == TRUE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_GW_SOURCE_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_GW_DESTINATION_DESCRIPTION_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_GW_DESTINATION_DESCRIPTION_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_GW_DESTINATION_DESCRIPTION_ARRAY_SIZE_MAX) */

/** \brief Define COM_GW_DESTINATION_DESCRIPTION_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComGwDestDescArraySizeMax (ECUC:38045863-dc94-4326-a110-f1192971aaca)
 * defines the maximum number of values which can be hold in the array
 * ComGwDestinationDescription. Only valid if (COM_SIGNAL_GW_ENABLE == STD_ON) (ComSignalGwEnable == TRUE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_GW_DESTINATION_DESCRIPTION_ARRAY_SIZE_MAX COM_INDEX_UINT16

#if (defined COM_GW_DESTINATION_ARRAY_SIZE_MAX) /* To prevent double declaration */
#error COM_GW_DESTINATION_ARRAY_SIZE_MAX already defined
#endif /* if (defined COM_GW_DESTINATION_ARRAY_SIZE_MAX) */

/** \brief Define COM_GW_DESTINATION_ARRAY_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComGwDestinationArraySizeMax (ECUC:ea43d87e-2099-4d00-ae07-893b3b33f5e1)
 * defines the maximum number of values which can be hold in the array
 * ComGwDestination. Only valid if (COM_SIGNAL_GW_ENABLE == STD_ON) (ComSignalGwEnable == TRUE)
 * Possible values are 
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_GW_DESTINATION_ARRAY_SIZE_MAX COM_INDEX_UINT16

#endif /* (COM_SIGNAL_GW_ENABLE == STD_ON) */


#if (defined COM_SIGNAL_BUFFER_REF_SIZE_MAX)        /* To prevent double declaration */
#error COM_SIGNAL_BUFFER_REF_SIZE_MAX already defined
#endif /* #if (defined COM_SIGNAL_BUFFER_REF_SIZE_MAX) */

/** \brief Define COM_SIGNAL_BUFFER_REF_SIZE_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSignalBufferRefSizeMax (ECUC:60c8f511-888d-4fa9-a6de-680c28b91e00)
 * defines the maximum number of (group) signal buffers per data type.
 * Rx signals need a buffer when they have a filter different from
 * ALWAYS of NEVER,
 * Tx (group) signals need a buffer when they have the filter
 * MASK_NEW_DIFFERS_MASK_OLD
 * E.g there are 200 uint8 Rx signals with a filter and 200 sint8 Tx group
 * signals with a filter MASK_NEW_DIFFERS_MASK_OLD, COM_INDEX_UINT8 is
 * sufficient. In case the Rx signals and the Tx group signals have the same
 * data type (e.g uint8), COM_INDEX_UINT16 has to be chosen.
 * Parameter is only relevant when the signals have a buffer configured.
 * Possible values are
 * COM_INDEX_UINT8 uint8 is used as array index
 * COM_INDEX_UINT16 uint16 is used as array index */
#define COM_SIGNAL_BUFFER_REF_SIZE_MAX COM_INDEX_UINT16


#if (defined COM_TXF_MASKNEWDIFFERSMASKOLD_EN)        /* To prevent double declaration */
#error COM_TXF_MASKNEWDIFFERSMASKOLD_EN already defined
#endif /* #if (defined COM_TXF_MASKNEWDIFFERSMASKOLD_EN) */

/** \brief Define COM_TXF_MASKNEWDIFFERSMASKOLD_EN
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTxFilterMaskedNewDiffersMaskOldEnable (ECUC:c8320727-310a-4285-bcb4-ffc9dd54679e)
 * defines if the Filter MaskedNewDiffersMaskOld is available for Tx (group)
 * signals.
 * Possible values
 * STD_ON MaskedNewDiffersMaskOld is available for Tx (group) signals (AUTOSAR COM)
 * STD_OFF MaskedNewDiffersMaskOld is disabled */
#define COM_TXF_MASKNEWDIFFERSMASKOLD_EN STD_ON



#if (defined COM_TMS_PER_PDU_MAX) /* To prevent double declaration */
#error COM_TMS_PER_PDU_MAX already defined
#endif /* if (defined COM_TMS_PER_PDU_MAX) */

/** \brief Define COM_TMS_PER_PDU_MAX
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComTMSperPduMax (ECUC:d29acc36-e68a-4708-a9c3-e472db430727)
 * defines the maximum number of signals and group signals which contribute to
 * Transmission Mode Selection for an I-Pdu.
 * Possible values are
 * COM_INDEX_UINT8 maximum 255 signals / signal groups can contribute to TMS per I-Pdu
 * COM_INDEX_UINT16 maximum 65535 signals / signal groups can contribute to TMS per I-Pdu. */
#define COM_TMS_PER_PDU_MAX COM_INDEX_UINT16


#if (defined COM_SIGGW_RX_FILTER_ENABLE) /* To prevent double declaration */
#error COM_SIGGW_RX_FILTER_ENABLE already defined
#endif /* if (defined COM_SIGGW_RX_FILTER_ENABLE) */

/** \brief Define COM_SIGGW_RX_FILTER_ENABLE
 * Parameter corresponds with Com/ComConfig/ComGeneral/VendorSpecific/ComSigGwRxFilterEnable (ECUC:1c911484-4273-43fa-a202-b6ece2a66d67)
 * defines if the Rx fitler is applied to decide if the signal is gated.
 * NOTE: Parameter is only valid/enabled if signal gateway (ComSignalGwEnable)
 * and Rx Filter is enabled (ComFilterReceiverEnable).
 * Possible values are
 * STD_ON the filtering of gated signals is switched on
 * STD_OFF  the filtering of gated signals is switched off (as defined in the SWS
 * AUTOSAR COM 3.x). */
#define COM_SIGGW_RX_FILTER_ENABLE STD_OFF


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* if !defined( COM_CFG_H ) */
/*==================[end of file]===========================================*/
