/**
 * \file
 *
 * \brief Autosar Dbg
 *
 * This file contains the implementation of the Autosar
 * module Dbg.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined DBG_CFG_INTERNAL_H)
#define DBG_CFG_INTERNAL_H

/*==================[includes]==============================================*/
#include <TSAutosar.h>              /* EB specific standard types */
#include <Std_Types.h>             /* AUTOSAR standard types (ON/OFF) */


/*==================[version check]=========================================*/

/*==================[macros]================================================*/
#if (DBG_VALUE_TRACING==STD_OFF)
/* map generator used API to the AUTOSAR std API  -> last parameter not used */
#define Dbg_InternalRTEVfbSignalSend(aU16,bU8,cU8,dU8,eU32) \
    Dbg_TraceRTEVfbSignalSend(aU16,bU8,cU8,dU8)
#define Dbg_InternalRTEVfbSignalReceive(aU16,bU8,cU8,dU8,eU32) \
    Dbg_TraceRTEVfbSignalReceive(aU16,bU8,cU8,dU8)
#else
/* map generator used API to the EB API function  -> last parameter used */
#define Dbg_InternalRTEVfbSignalSend(aU16,bU8,cU8,dU8,eU32) \
    Dbg_TraceRTEVfbSignalSendVal(aU16,bU8,cU8,dU8,eU32)
#define Dbg_InternalRTEVfbSignalReceive(aU16,bU8,cU8,dU8,eU32) \
    Dbg_TraceRTEVfbSignalReceiveVal(aU16,bU8,cU8,dU8,eU32)
#endif

/* size of direct send buffer in bytes */
/* FIXME: needs to be calculated */
#define DBG_SIZE_OF_DIRECT_BUFFER  255

/*==================[STATE CONFIG]==========================================*/
      /* init by compiler startup */
/* no real (Gpt or Os counter) timestamp possible */
#define DBG_DRV_STATE_CFG (DBG_STATE_INIT|DBG_STATE_BUFFERED|DBG_STATE_ACTIVE)
/* init by Dbg_Init */
/* DBG_STATE_BUFFERED if configured
 * DBG_STATE_ACTIVE no DID's accepted */
#define DBG_DRV_DEFAULT_CFG \
    DBG_DRV_STATE_CFG, \
    (DBG_STATE_INIT|DBG_STATE_BUFFERED|DBG_STATE_TIMESTAMP|DBG_STATE_ACTIVE|DBG_STATE_DIRECT_TX), \
    (DBG_CFG_FLAG_INIT|DBG_CFG_FLAG_BUFFER_OVERWRITE|DBG_CFG_FLAG_TX_BUFFER_ON_REQ), \
    4, /* size of timestamp */ \
    DBG_SIZE_OF_DIRECT_BUFFER-1, \
    DBG_SIZE_OF_RING_BUFFER-1

/*==================[DID CONFIG]==========================================*/
#define DBG_NUM_STATIC_DID 0U

#define DBG_NUM_DYNAMIC_DID 0U

#define DBG_NUM_PREDEF_DID 21U

#define DBG_PREDEF_DID_STATUS_SIZE (5u)

#define DBG_NUM_STATIC_ADDR_SIZE_PAIRS 0U

#define DBG_NUM_CONST_ADDR_SIZE_PAIRS DBG_NUM_STATIC_ADDR_SIZE_PAIRS+DBG_NUM_PREDEF_DID


#define DBG_VALUE_SIZE_RTE_VFB_RECEIVE (4u)
#define DBG_VALUE_SIZE_RTE_VFB_SEND    (4u)

#define DBG_SIZE_GENERIC_FUNCTION (8u)

#define DBG_SIZE_GENERIC_STATE (2u)

#define DBG_CONST_ADDR_SIZE_CFG \
{ \
   /* address, size pairs */ \
   /* predefined DID: addr not used size=fix for predefined DID's*/\
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_STATUS)+DBG_PREDEF_DID_STATUS_SIZE)}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RESERVED_236))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_GENERIC_FUNC)+DBG_SIZE_GENERIC_FUNCTION)}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_GENERIC_STATE)+DBG_SIZE_GENERIC_STATE)}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_POST_TASK_HOOK))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_PRE_TASK_HOOK))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RUNNABLE_TERMINATE))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RUNNABLE_START))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_CALL))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_COM_CALLBACK))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_VFB_RECEIVE)+DBG_VALUE_SIZE_RTE_VFB_RECEIVE)}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_VFB_SEND)+DBG_VALUE_SIZE_RTE_VFB_SEND)}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_COM_SIG_IV))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_COM_SIG_TX))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RTE_COM_SIG_RX))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_DET_CALL))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_TIMESTAMP))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_FUNC_EXIT))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_FUNC_ENTRY))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RESERVED_254))}, \
   {0u,(Dbg_DIDsizeType)(DBG_PREDEF_DID_SIZE(DBG_DID_RESERVED_255))}, \
}

#define DBG_NUM_DID DBG_NUM_STATIC_DID+DBG_NUM_DYNAMIC_DID+DBG_NUM_PREDEF_DID
#define DBG_DID_CFG \
{ \
    /* number of pairs, pointer to start pair */ \
    /* static DID's */ \
    /* dynamic DID's */ \
    /* dredef DID's */ \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+0]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+1]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+2]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+3]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+4]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+5]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+6]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+7]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+8]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+9]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+10]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+11]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+12]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+13]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+14]}, \
    {1,DBG_S_STATE_INIT|DBG_S_STATE_CONFIGURED,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+15]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+16]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+17]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+18]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+19]}, \
    {1,DBG_S_STATE_INIT,&Dbg_ConstDIDAddrSizePairs[DBG_NUM_STATIC_ADDR_SIZE_PAIRS+20]}, \
}

/* DID state must be initialized by var init */
#define DBG_DID_STATE_CFG \
{ \
    /* static DID's */ \
    /* dynamic DID's */ \
    /* predefined DID's */ \
    (DBG_STATE_INIT), /* 236 reserved_235 */ \
    (DBG_STATE_INIT), /* 237 reserved_236 */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 238 Dbg_TraceGenericFunction */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 239 Dbg_TraceGenericStatemachine */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 240 Dbg_PostTaskHook */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 241 Dbg_PreTaskHook */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 242 Dbg_TraceRunnableTermination */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 243 Dbg_TraceRunnableStart */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 244 Dbg_TraceRTECall */ \
    (DBG_STATE_INIT), /* 245 Dbg_TraceRTEComCallback */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 246 Dbg_TraceRTEVfbSignalReceive */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 247 Dbg_TraceRTEVfbSignalSend */ \
    (DBG_STATE_INIT), /* 248 Dbg_TraceRTEComSignalIv */ \
    (DBG_STATE_INIT), /* 249 Dbg_TraceRTEComSignalRx */ \
    (DBG_STATE_INIT), /* 250 Dbg_TraceRTEComSignalTx */ \
    (DBG_STATE_INIT|DBG_STATE_TIMESTAMP|DBG_STATE_BUFFERED), /* 251 Dbg_TraceDetCall */ \
    (DBG_STATE_INIT), /* 252 Dbg_TraceTimestamps */ \
    (DBG_STATE_INIT), /* 253 Dbg_TraceFunctionExit */ \
    (DBG_STATE_INIT), /* 254 Dbg_TraceFunctionEntry */ \
    (DBG_STATE_INIT), /* 255 reserved_254 */ \
    (DBG_STATE_INIT), /* 256 reserved_255 */ \
}

/*==================[TP PDUR CONFIG]========================================*/

#define DBG_COM_TP_PDUR_CFG \
{ \
    0, /* txId */ \
    0 /* rxId */ \
}
#define DBG_COM_TP_PDUR_CHUNKSIZE 8

/*==================[Process Id]============================================*/

#define DBG_PROCESSID_SIZE 1U
/*==================[type definitions]======================================*/

typedef uint8 Dbg_ProcessIdType;

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/


#endif /* if !defined( DBG_CFG_INTERNAL_H ) */
/*==================[end of file]===========================================*/
