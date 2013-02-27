#if (!defined COM_PBCFG_H)
#define COM_PBCFG_H
/* --------{ EB Automotive C Source File }-------- */ 

/*==================[includes]==============================================*/

#include <TSAutosar.h>         /* EB specific standard types */
#include <Com_Cfg.h>           /* Module pre-compile time config */
#include <Com_Types.h>         /* Module public types */
#include <Compiler.h>


/*==================[macros]================================================*/

#if (defined COM_IPDU_INIT_ARRAY_SIZE) /* To prevent double declaration */
#error COM_IPDU_INIT_ARRAY_SIZE already defined
#endif /* if (defined COM_IPDU_INIT_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_IPDU_INIT_ARRAY_SIZE */
#define COM_IPDU_INIT_ARRAY_SIZE 1U


#if (defined COM_IPDU_TMS_FLAGS_INIT_VALUES_ARRAY_SIZE) /* To prevent double declaration */
#error COM_IPDU_TMS_FLAGS_INIT_VALUES_ARRAY_SIZE already defined
#endif /* if (defined COM_IPDU_TMS_FLAGS_INIT_VALUES_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_IPDU_TMS_FLAGS_INIT_VALUES_ARRAY_SIZE */
#define COM_IPDU_TMS_FLAGS_INIT_VALUES_ARRAY_SIZE 0U

#if (defined COM_RX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE */
#define COM_RX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE 0U


#if (defined COM_TX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE */
#define COM_TX_IPDU_TIMEOUT_NOTIFICATION_ARRAY_SIZE 0U


#if (defined COM_TX_IPDU_NOTIFICATION_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_NOTIFICATION_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_NOTIFICATION_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_NOTIFICATION_ARRAY_SIZE */
#define COM_TX_IPDU_NOTIFICATION_ARRAY_SIZE 0U


#if (defined COM_RX_SIGNAL_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_SIGNAL_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_SIGNAL_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_SIGNAL_ARRAY_SIZE */
#define COM_RX_SIGNAL_ARRAY_SIZE 1U

#if (defined COM_TX_SIGNAL_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_SIGNAL_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_SIGNAL_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_SIGNAL_ARRAY_SIZE */
#define COM_TX_SIGNAL_ARRAY_SIZE 1U


#if (defined COM_SIGNAL_INIT_VALUE_UINT16_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_UINT16_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INIT_VALUE_UINT16_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INIT_VALUE_UINT16_ARRAY_SIZE */
#define COM_SIGNAL_INIT_VALUE_UINT16_ARRAY_SIZE 0U /* still hardcoded */

#if (defined COM_SIGNAL_INIT_VALUE_SINT16_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_SINT16_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INIT_VALUE_SINT16_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INIT_VALUE_SINT16_ARRAY_SIZE */
#define COM_SIGNAL_INIT_VALUE_SINT16_ARRAY_SIZE 0U /* still hardcoded */

#if (defined COM_SIGNAL_INIT_VALUE_UINT32_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_UINT32_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INIT_VALUE_UINT32_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INIT_VALUE_UINT32_ARRAY_SIZE */
#define COM_SIGNAL_INIT_VALUE_UINT32_ARRAY_SIZE 0U /* still hardcoded */

#if (defined COM_SIGNAL_INIT_VALUE_SINT32_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_SINT32_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INIT_VALUE_SINT32_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INIT_VALUE_SINT32_ARRAY_SIZE */
#define COM_SIGNAL_INIT_VALUE_SINT32_ARRAY_SIZE 0U /* still hardcoded */

#if (defined COM_SIGNAL_INIT_VALUE_UINT8_N_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INIT_VALUE_UINT8_N_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INIT_VALUE_UINT8_N_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INIT_VALUE_UINT8_N_ARRAY_SIZE */
#define COM_SIGNAL_INIT_VALUE_UINT8_N_ARRAY_SIZE 0U /* still hardcoded */


#if (defined COM_SIGNAL_INVALID_VALUE_UINT16_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INVALID_VALUE_UINT16_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INVALID_VALUE_UINT16_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INVALID_VALUE_UINT16_ARRAY_SIZE */
#define COM_SIGNAL_INVALID_VALUE_UINT16_ARRAY_SIZE 0U

#if (defined COM_SIGNAL_INVALID_VALUE_SINT16_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INVALID_VALUE_SINT16_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INVALID_VALUE_SINT16_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INVALID_VALUE_SINT16_ARRAY_SIZE */
#define COM_SIGNAL_INVALID_VALUE_SINT16_ARRAY_SIZE 0U

#if (defined COM_SIGNAL_INVALID_VALUE_UINT32_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INVALID_VALUE_UINT32_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INVALID_VALUE_UINT32_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INVALID_VALUE_UINT32_ARRAY_SIZE */
#define COM_SIGNAL_INVALID_VALUE_UINT32_ARRAY_SIZE 0U

#if (defined COM_SIGNAL_INVALID_VALUE_SINT32_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INVALID_VALUE_SINT32_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INVALID_VALUE_SINT32_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INVALID_VALUE_SINT32_ARRAY_SIZE */
#define COM_SIGNAL_INVALID_VALUE_SINT32_ARRAY_SIZE 0U

#if (defined COM_SIGNAL_INVALID_VALUE_UINT8_N_ARRAY_SIZE) /* To prevent double declaration */
#error COM_SIGNAL_INVALID_VALUE_UINT8_N_ARRAY_SIZE already defined
#endif /* if (defined COM_SIGNAL_INVALID_VALUE_UINT8_N_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_SIGNAL_INVALID_VALUE_UINT8_N_ARRAY_SIZE */
#define COM_SIGNAL_INVALID_VALUE_UINT8_N_ARRAY_SIZE 0U

#if (defined COM_RX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE */
#define COM_RX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE 0U

#if (defined COM_TX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE */
#define COM_TX_SIGNAL_GROUP_GROUP_SIGNAL_LIST_ARRAY_SIZE 0U

#if (defined COM_RX_FIRST_TIMEOUT_FACTOR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_FIRST_TIMEOUT_FACTOR_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_FIRST_TIMEOUT_FACTOR_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_FIRST_TIMEOUT_FACTOR_ARRAY_SIZE */
#define COM_RX_FIRST_TIMEOUT_FACTOR_ARRAY_SIZE 0U


#if (defined COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE */
#define COM_RX_TIMEOUT_FACTOR_ARRAY_SIZE 0U

#if (defined COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE */
#define COM_TX_TIMEOUT_FACTOR_ARRAY_SIZE 0U

#if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE */
#define COM_TX_IPDU_MINIMUM_DELAY_TIME_FACTOR_ARRAY_SIZE 1U


#if (defined COM_IPDU_GROUP_ARRAY_SIZE) /* To prevent double declaration */
#error COM_IPDU_GROUP_ARRAY_SIZE already defined
#endif /* if (defined COM_IPDU_GROUP_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_IPDU_GROUP_ARRAY_SIZE */
#define COM_IPDU_GROUP_ARRAY_SIZE 4U


#if (defined COM_IPDU_GROUP_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_IPDU_GROUP_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_IPDU_GROUP_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_IPDU_GROUP_LIST_ARRAY_SIZE */
#define COM_IPDU_GROUP_LIST_ARRAY_SIZE 2U

#if (defined COM_RX_IPDU_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_IPDU_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_IPDU_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_IPDU_ARRAY_SIZE */
#define COM_RX_IPDU_ARRAY_SIZE 1U


#if (defined COM_TX_IPDU_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_ARRAY_SIZE */
#define COM_TX_IPDU_ARRAY_SIZE 1U

#if (defined COM_RX_SIGNAL_GROUP_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_SIGNAL_GROUP_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_SIGNAL_GROUP_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_SIGNAL_GROUP_ARRAY_SIZE */
#define COM_RX_SIGNAL_GROUP_ARRAY_SIZE 0U

#if (defined COM_TX_SIGNAL_GROUP_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_SIGNAL_GROUP_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_SIGNAL_GROUP_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_SIGNAL_GROUP_ARRAY_SIZE */
#define COM_TX_SIGNAL_GROUP_ARRAY_SIZE 0U


#if (defined COM_TX_MODE_N_TIMES_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_N_TIMES_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_MODE_N_TIMES_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_MODE_N_TIMES_ARRAY_SIZE */
#define COM_TX_MODE_N_TIMES_ARRAY_SIZE 1U

#if (defined COM_TX_MODE_PERIODIC_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_PERIODIC_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_MODE_PERIODIC_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_MODE_PERIODIC_ARRAY_SIZE
 * Note: in the TxModePeriodicArray also the parameters of the 
 * COM_TX_MODE_MIXED_DIRECT are stored */
#define COM_TX_MODE_PERIODIC_ARRAY_SIZE 0U

#if (defined COM_TX_MODE_MIXED_N_TIMES_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_MODE_MIXED_N_TIMES_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_MODE_MIXED_N_TIMES_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_MODE_MIXED_N_TIMES_ARRAY_SIZE */
#define COM_TX_MODE_MIXED_N_TIMES_ARRAY_SIZE 0U


#if (defined COM_RX_IPDU_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_IPDU_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_IPDU_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_IPDU_LIST_ARRAY_SIZE */
#define COM_RX_IPDU_LIST_ARRAY_SIZE 1U


#if (defined COM_TX_IPDU_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_LIST_ARRAY_SIZE */
#define COM_TX_IPDU_LIST_ARRAY_SIZE 1U


#if (defined COM_RX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE */
#define COM_RX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE 0U


#if (defined COM_TX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE */
#define COM_TX_IPDU_SIGNAL_GROUP_LIST_ARRAY_SIZE 0U


#if (defined COM_RX_IPDU_SIGNAL_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_IPDU_SIGNAL_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_IPDU_SIGNAL_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_IPDU_SIGNAL_LIST_ARRAY_SIZE */
#define COM_RX_IPDU_SIGNAL_LIST_ARRAY_SIZE 1U

#if (defined COM_TX_IPDU_SIGNAL_LIST_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_IPDU_SIGNAL_LIST_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_IPDU_SIGNAL_LIST_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_IPDU_SIGNAL_LIST_ARRAY_SIZE */
#define COM_TX_IPDU_SIGNAL_LIST_ARRAY_SIZE 1U


#if (defined COM_RX_GROUP_SIGNAL_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_GROUP_SIGNAL_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_GROUP_SIGNAL_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_GROUP_SIGNAL_ARRAY_SIZE */
#define COM_RX_GROUP_SIGNAL_ARRAY_SIZE 0U

#if (defined COM_TX_GROUP_SIGNAL_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_GROUP_SIGNAL_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_GROUP_SIGNAL_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_GROUP_SIGNAL_ARRAY_SIZE */
#define COM_TX_GROUP_SIGNAL_ARRAY_SIZE  0U


#if (defined COM_MDT_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_MDT_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_MDT_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_MDT_QUEUE_ARRAY_SIZE */
#define COM_MDT_QUEUE_ARRAY_SIZE 0U


#if (defined COM_PERIODIC_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_PERIODIC_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_PERIODIC_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_PERIODIC_QUEUE_ARRAY_SIZE */
#define COM_PERIODIC_QUEUE_ARRAY_SIZE 0U


#if (defined COM_N_TIMES_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_N_TIMES_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_N_TIMES_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_N_TIMES_QUEUE_ARRAY_SIZE */
#define COM_N_TIMES_QUEUE_ARRAY_SIZE 1U

#if (defined COM_RX_TIMEOUT_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_TIMEOUT_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_TIMEOUT_QUEUE_ARRAY_SIZE */
#define COM_RX_TIMEOUT_QUEUE_ARRAY_SIZE 0U

#if (defined COM_RX_TIMEOUT_SIGNAL_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_SIGNAL_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_TIMEOUT_SIGNAL_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_TIMEOUT_SIGNAL_QUEUE_ARRAY_SIZE */
#define COM_RX_TIMEOUT_SIGNAL_QUEUE_ARRAY_SIZE 0U

#if (defined COM_RX_TIMEOUT_SIGNAL_GROUP_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_TIMEOUT_SIGNAL_GROUP_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_TIMEOUT_SIGNAL_GROUP_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_RX_TIMEOUT_SIGNAL_GROUP_QUEUE_ARRAY_SIZE */
#define COM_RX_TIMEOUT_SIGNAL_GROUP_QUEUE_ARRAY_SIZE 0U

#if (defined COM_TX_TIMEOUT_QUEUE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_TIMEOUT_QUEUE_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_TIMEOUT_QUEUE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_TX_TIMEOUT_QUEUE_ARRAY_SIZE */
#define COM_TX_TIMEOUT_QUEUE_ARRAY_SIZE 0U

#if (defined COM_CBK_TX_ACK_DEFERRED_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_TX_ACK_DEFERRED_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_TX_ACK_DEFERRED_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_CBK_TX_ACK_DEFERRED_ARRAY_SIZE */
#define COM_CBK_TX_ACK_DEFERRED_ARRAY_SIZE 0U


#if (defined COM_CONFIGURATION_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CONFIGURATION_ARRAY_SIZE already defined
#endif /* if (defined COM_CONFIGURATION_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_CONFIGURATION_ARRAY_SIZE */
#define COM_CONFIGURATION_ARRAY_SIZE 0U /* still hardcoded */


#if (defined COM_GW_SOURCE_ARRAY_SIZE) /* To prevent double declaration */
#error COM_GW_SOURCE_ARRAY_SIZE already defined
#endif /* if (defined COM_GW_SOURCE_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_GW_SOURCE_ARRAY_SIZE */
#define COM_GW_SOURCE_ARRAY_SIZE 0U


#if (defined COM_GW_DESTINATION_ARRAY_SIZE) /* To prevent double declaration */
#error COM_GW_DESTINATION_ARRAY_SIZE already defined
#endif /* if (defined COM_GW_DESTINATION_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_GW_DESTINATION_ARRAY_SIZE */
#define COM_GW_DESTINATION_ARRAY_SIZE 0U


#if (defined COM_FILTER_8_BIT_MASK_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_8_BIT_MASK_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_8_BIT_MASK_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_8_BIT_MASK_ARRAY_SIZE */
#define COM_FILTER_8_BIT_MASK_ARRAY_SIZE 0U

#if (defined COM_FILTER_16_BIT_MASK_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_16_BIT_MASK_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_16_BIT_MASK_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_16_BIT_MASK_ARRAY_SIZE */
#define COM_FILTER_16_BIT_MASK_ARRAY_SIZE 0U

#if (defined COM_FILTER_32_BIT_MASK_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_32_BIT_MASK_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_32_BIT_MASK_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_32_BIT_MASK_ARRAY_SIZE */
#define COM_FILTER_32_BIT_MASK_ARRAY_SIZE 0U

#if (defined COM_FILTER_8_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_8_BIT_MASK_X_MIN_MAX_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_8_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_8_BIT_MASK_X_MIN_MAX_ARRAY_SIZE */
#define COM_FILTER_8_BIT_MASK_X_MIN_MAX_ARRAY_SIZE 0U

#if (defined COM_FILTER_16_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_16_BIT_MASK_X_MIN_MAX_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_16_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_16_BIT_MASK_X_MIN_MAX_ARRAY_SIZE */
#define COM_FILTER_16_BIT_MASK_X_MIN_MAX_ARRAY_SIZE 0U

#if (defined COM_FILTER_32_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_32_BIT_MASK_X_MIN_MAX_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_32_BIT_MASK_X_MIN_MAX_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_32_BIT_MASK_X_MIN_MAX_ARRAY_SIZE */
#define COM_FILTER_32_BIT_MASK_X_MIN_MAX_ARRAY_SIZE 0U

#if (defined COM_FILTER_ONE_EVERY_N_ARRAY_SIZE) /* To prevent double declaration */
#error COM_FILTER_ONE_EVERY_N_ARRAY_SIZE already defined
#endif /* if (defined COM_FILTER_ONE_EVERY_N_ARRAY_SIZE) */

/* Generator has to set the value */
/** \brief Define COM_FILTER_ONE_EVERY_N_ARRAY_SIZE */
#define COM_FILTER_ONE_EVERY_N_ARRAY_SIZE 0U

/*
 * Global Macros
 */
#define COM_CONFIG_NAME Com_Configuration

/*
 * Name of configuration structure that has to be passed to Com_Init()
 */
#define ComConfig (Com_Configuration.Com_RootConfig)

/*==================[type definitions]======================================*/
/**
 * Com_ConfigLayoutType
 */
typedef struct {
    Com_ConfigType Com_RootConfig; /* Com_RootConfig */
    ComRxIPduType ComRxIPdu[1]; /* ComRxIPdu */
    ComTxIPduType ComTxIPdu[1]; /* ComTxIPdu */
    ComTxIPduMinimumDelayTimeFactorType ComTxIPduMinimumDelayTimeFactor[1]; /* ComTxIPduMinimumDelayTimeFactor */
    ComTxModeNTimesType ComTxModeNTimes[1]; /* ComTxModeNTimes */
    ComIPduGroupType ComIPduGroup[4]; /* ComIPduGroup */
    ComIPduGroupRefType ComIPduGroupList[2]; /* ComIPduGroupList */
    ComIPduRefType ComRxIPduList[1]; /* ComRxIPduList */
    ComIPduRefType ComTxIPduList[1]; /* ComTxIPduList */
    ComSignalRefType ComRxIPduSignalList[1]; /* ComRxIPduSignalList */
    ComSignalRefType ComTxIPduSignalList[1]; /* ComTxIPduSignalList */
    ComRxSignalType ComRxSignal[1]; /* ComRxSignal */
    ComTxSignalType ComTxSignal[1]; /* ComTxSignal */
    ComIPduRefType ComNTimesQueueList[1]; /* ComNTimesQueueList */
    uint8 ComIPduInit[1]; /* ComIPduInit */
} Com_ConfigLayoutType;

/**
 * Com_ConstConfigLayoutType
 */
typedef CONST( Com_ConfigLayoutType, COM_APPL_CONST ) Com_ConstConfigLayoutType;



/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/* start data section declaration */
#define COM_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/**
 * Com post build config. - Static code accesses this config
 * solely via the pointer of type Com_ConfigType * passed to \a 
 * Com_Init() as parameter.
 */
extern Com_ConstConfigLayoutType COM_CONFIG_NAME;

/* stop data section declaration */
#define COM_STOP_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* if !defined( COM_PBCFG_H ) */
/*==================[end of file]===========================================*/
