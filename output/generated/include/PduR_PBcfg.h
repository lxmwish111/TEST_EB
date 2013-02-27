/* --------{ EB Automotive C Source File }-------- */ 
#if (!defined PDUR_PBCFG_H)
#define PDUR_PBCFG_H

/*==================[includes]==============================================*/

#include <TSAutosar.h>         /* global configuration */
#include <PduR_Cfg.h>          /* Module pre-compile time config */
#include <PduR_Types.h>        /* Module public types */
#include <Compiler.h>

/*==================[macros]================================================*/

/*
 * Name of configuration structure that has to be passed to PduR_Init()
 */
#define PduRGlobalConfig (PduR_Configuration.PduR_RootConfig)

#define PDUR_CONFIG_LAYOUT_TYPE PduR_PBConfigLayoutType

/*==================[type definitions]======================================*/
/**
 * PduR_PBConfigLayoutType
 */
typedef struct {
    PduR_PBConfigType PduR_RootConfig; /* PduR_RootConfig */
    PduR_RTabLoIfType PduR_RTabLoIfRx[2]; /* PduR_RTabLoIfRx */
    PduR_RTabLoIfType PduR_RTabLoIfTx[2]; /* PduR_RTabLoIfTx */
    PduR_RTabUpIfTxType PduR_RTabUpIfTx[2]; /* PduR_RTabUpIfTx */
} PduR_PBConfigLayoutType;

/**
 * PduR_PBConstConfigLayoutType
 */
typedef CONST( PduR_PBConfigLayoutType, PDUR_APPL_CONST ) PduR_PBConstConfigLayoutType;



/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/* start data section declaration */
#define PDUR_START_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/**
 * PduR post build configuration. - Static code accesses this configuration
 * solely via this pointer which is passed to PduR_Init().
 */
extern PduR_PBConstConfigLayoutType PduR_Configuration;

/* stop data section declaration */
#define PDUR_STOP_CONFIG_DATA_UNSPECIFIED
#include <MemMap.h>

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* if !defined( PDUR_PBCFG_H ) */
/*==================[end of file]===========================================*/
