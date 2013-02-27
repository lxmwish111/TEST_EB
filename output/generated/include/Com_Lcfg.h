#if (!defined COM_LCFG_H)
#define COM_LCFG_H
/* --------{ EB Automotive C Source File }-------- */ 

/*==================[includes]==============================================*/

#include <TSAutosar.h>         /* EB specific standard types */
#include <Com_Api.h>           /* Module interface */
#include <Com_Callout.h>
#include <Com_Cbk.h>
#include <Com_Cfg.h>


/*==================[macros]================================================*/

/**
 * Size of internal Com data in units of bytes (static memory
 * allocation) - Memory required by post-build config must be smaller
 * than this constant
 */
#define COM_DATA_MEM_SIZE 7

#if (COM_RAM_SIZE_MAX < COM_DATA_MEM_SIZE)
 #error (COM_RAM_SIZE_MAX < COM_DATA_MEM_SIZE)
#endif /* #if (COM_RAM_SIZE_MAX < COM_DATA_MEM_SIZE) */

#define COM_DATA_MEM_SIZE_32BIT_WORDS \
    ((COM_DATA_MEM_SIZE + sizeof(uint32) - 1) / sizeof(uint32))

#if (defined COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE already defined
#endif /* if (defined COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE) */

/** \brief Define COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE */
#define COM_TX_CALL_OUT_FUNC_PTR_ARRAY_SIZE 0U

#if (defined COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE already defined
#endif /* if (defined COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE) */

/** \brief Define COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE */
#define COM_RX_CALL_OUT_FUNC_PTR_ARRAY_SIZE 0U


#if (defined COM_CBK_TX_ACK_PTR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_TX_ACK_PTR_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_TX_ACK_PTR_ARRAY_SIZE) */

/** \brief Define COM_CBK_TX_ACK_PTR_ARRAY_SIZE */
#define COM_CBK_TX_ACK_PTR_ARRAY_SIZE 0U


#if (defined COM_CBK_RX_ACK_PTR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_RX_ACK_PTR_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_RX_ACK_PTR_ARRAY_SIZE) */

/** \brief Define COM_CBK_RX_ACK_PTR_ARRAY_SIZE */
#define COM_CBK_RX_ACK_PTR_ARRAY_SIZE 1U


#if (defined COM_CBK_TX_T_OUT_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_TX_T_OUT_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_TX_T_OUT_ARRAY_SIZE) */

/** \brief Define COM_CBK_TX_T_OUT_ARRAY_SIZE */
#define COM_CBK_TX_T_OUT_ARRAY_SIZE 0U


#if (defined COM_CBK_RX_T_OUT_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_RX_T_OUT_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_RX_T_OUT_ARRAY_SIZE) */

/** \brief Define COM_CBK_RX_T_OUT_ARRAY_SIZE */
#define COM_CBK_RX_T_OUT_ARRAY_SIZE 0U


#if (defined COM_CBK_TX_ERR_PTR_ARRAY_SIZE) /* To prevent double declaration */
#error COM_CBK_TX_ERR_PTR_ARRAY_SIZE already defined
#endif /* if (defined COM_CBK_TX_ERR_PTR_ARRAY_SIZE) */

/** \brief Define COM_CBK_TX_ERR_PTR_ARRAY_SIZE */
#define COM_CBK_TX_ERR_PTR_ARRAY_SIZE 0U

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
#endif /* if !defined( COM_LCFG_H ) */
/*==================[end of file]===========================================*/
