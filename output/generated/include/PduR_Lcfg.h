/* --------{ EB Automotive C Source File }-------- */ 

#if (!defined PDUR_LCFG_H)
#define PDUR_LCFG_H

/*==================[includes]==============================================*/

#include <PduR_Cfg.h>
#include <PduR_Types.h>
#include <PduR_Lcfg_Static.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/* start const section declaration */
#define PDUR_START_SEC_CONST_8BIT
#include <MemMap.h>

extern CONST(uint8, PDUR_CONST) PduR_CanIfRTabLoConfigIdx;
extern CONST(uint8, PDUR_CONST) PduR_ComRTabUpTxConfigIdx;
extern CONST(uint8, PDUR_CONST) PduR_DbgRTabUpTxConfigIdx;

/* stop const section declaration */
#define PDUR_STOP_SEC_CONST_8BIT
#include <MemMap.h>

/* start const section declaration */
#define PDUR_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/**
 * API function pointer table for modules with interface archetype
 */
extern CONST(PduR_IfModuleAPIType, PDUR_CONST) PduR_IfModuleAPI[3];
/**
 * API function pointer table for modules with TP archetype
 */
extern CONST(PduR_TpModuleAPIType, PDUR_CONST) PduR_TpModuleAPI[1];

/* stop const section declaration */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* if !defined( PDUR_LCFG_H ) */
/*==================[end of file]===========================================*/
