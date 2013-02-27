/**
 * \file
 *
 * \brief Autosar asc_Dbg
 *
 * This file contains the implementation of the Autosar
 * module asc_Dbg.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005-2009 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/
#include <Dbg_Internal.h>
#include <Dbg_Trace_Function_Hooks.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#define DBG_START_SEC_CODE
#include <MemMap.h>

FUNC(void, DBG_CODE) Dbg_Trace_Func(uint16 ModuleId, uint8 GroupId, uint8 ApiId, uint8 EntryExit, uint32 Param0, uint32 Param1)
{
  Dbg_BufferPtrType currentPtr = NULL_PTR;
  Dbg_DIDsizeType currentSize = 0;
  currentPtr = Dbg_CoreMemWriteLock(DBG_DID_GENERIC_FUNC,&currentSize);

  /* no pointer if did not active */
  if( currentPtr != NULL_PTR )
  {
    DBG_CONVERT_SHORT(&currentPtr[0],ModuleId);
    currentPtr[2]=GroupId;
    currentPtr[3]=ApiId;
    currentPtr[4]=EntryExit;
    DBG_CONVERT_LONG(&currentPtr[5],Param0);
    DBG_CONVERT_LONG(&currentPtr[9],Param1);

    if( !Dbg_CoreMemWriteUnlock(currentPtr) )
    {
#if (DBG_DEV_ERROR_DETECT == STD_ON)
      DBG_DET_REPORT_ERROR(DBG_DET_DID_TO_API_ID(DBG_DID_GENERIC_FUNC),DBG_E_I_REENTRANCE);
#endif /* if (DBG_DEV_ERROR_DETECT == STD_ON) */
    }

#if (DBG_DEV_ERROR_DETECT == STD_ON)
    if(currentSize != 13U)
    {
      DBG_DET_REPORT_ERROR(DBG_DET_DID_TO_API_ID(DBG_DID_GENERIC_FUNC),DBG_E_I_MEM_SIZE);
    }
#endif /* if (DBG_DEV_ERROR_DETECT == STD_ON) */
  }
}
#define DBG_STOP_SEC_CODE
#include <MemMap.h>
/*==================[end of file]===========================================*/

