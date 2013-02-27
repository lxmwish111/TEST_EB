/**
 * \file
 *
 * \brief Autosar ApplTemplates
 *
 * This file contains the implementation of the Autosar
 * module ApplTemplates.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#if (!defined NVM_H)
#define NVM_H

#include <Std_Types.h>

/* module administrative information */
#define NVM_VENDOR_ID 0x01 /* XXX: problem if we check for others */
#define NVM_MODULE_ID 20
#define NVM_AR_MAJOR_VERSION 2 /* XXX: problems if we test this */
#define NVM_AR_MINOR_VERSION 2
#define NVM_AR_PATCH_VERSION 0
#define NVM_SW_MAJOR_VERSION 0 /* XXX: problems if we test this */
#define NVM_SW_MINOR_VERSION 0
#define NVM_SW_PATCH_VERSION 0

/* error codes */
#define       NVM_E_PARAM_BLOCK_ID                      0x0A
#define       NVM_E_PARAM_BLOCK_TYPE                    0x0B
#define       NVM_E_PARAM_BLOCK_DATA_IDX                0x0C
#define       NVM_E_PARAM_ADDRESS                       0x0D
#define       NVM_E_PARAM_DATA                          0x0E
#define       NVM_E_NOT_INITIALIZED                     0x14
#define       NVM_E_BLOCK_PENDING                       0x15
#define       NVM_E_LIST_OVERFLOW                       0x16
#define       NVM_E_NV_WRITE_PROTECTED                  0x17
#define       NVM_E_BLOCK_CONFIG                        0x18

/* service IDs */
#define       NVM_INIT_ID                               0x0
#define       NVM_SETDATAINDEX_ID                       0x1
#define       NVM_GETDATAINDEX_ID                       0x2
#define       NVM_SETBLOCKPROTECTION_ID                 0x3
#define       NVM_GETERRORSTATUS_ID                     0x4
#define       NVM_GETVERSIONINFO_ID                     0xF
#define       NVM_SETRAMBLOCKSTATUS_ID                  0x5
#define       NVM_READBLOCK_ID                          0x6
#define       NVM_WRITEBLOCK_ID                         0x7
#define       NVM_RESTOREBLOCKDEFAULTS_ID               0x8
#define       NVM_ERASENVBLOCK_ID                       0x9
#define       NVM_CANCELWRITEALL_ID                     0xA
#define       NVM_INVALIDATENVBLOCK_ID                  0xB
#define       NVM_READALL_ID                            0xC
#define       NVM_WRITEALL_ID                           0xD

/* initialisation definitions */
#define NVM_INIT_STUB_INIT { 0, NULL_PTR }
#define NVM_SETDATAINDEX_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define NVM_GETDATAINDEX_STUB_INIT { 0, NULL_PTR, 0, NULL_PTR }
#define NVM_SETBLOCKPROTECTION_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define NVM_GETERRORSTATUS_STUB_INIT { 0, NULL_PTR, 0, NULL_PTR }
#define NVM_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define NVM_SETRAMBLOCKSTATUS_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define NVM_READBLOCK_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define NVM_WRITEBLOCK_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define NVM_RESTOREBLOCKDEFAULTS_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define NVM_ERASENVBLOCK_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define NVM_CANCELWRITEALL_STUB_INIT { 0, NULL_PTR }
#define NVM_INVALIDATENVBLOCK_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define NVM_READALL_STUB_INIT { 0, NULL_PTR }
#define NVM_WRITEALL_STUB_INIT { 0, NULL_PTR }
#define NVM_JOBENDNOTIFICATION_STUB_INIT { 0, NULL_PTR }
#define NVM_JOBERRORNOTIFICATION_STUB_INIT { 0, NULL_PTR }

typedef       uint8           NvM_RequestResultType;
typedef       uint8           NvM_BlockIdType;

#define NVM_REQ_OK                    ((NvM_RequestResultType) 0)
#define NVM_REQ_NOT_OK                ((NvM_RequestResultType) 1)
#define NVM_REQ_PENDING               ((NvM_RequestResultType) 2)
#define NVM_REQ_INTEGRITY_FAILED      ((NvM_RequestResultType) 3)
#define NVM_REQ_BLOCK_SKIPPED         ((NvM_RequestResultType) 4)
#define NVM_REQ_NV_INVALIDATED        ((NvM_RequestResultType) 5)
#define NVM_REQ_CANCELLED             ((NvM_RequestResultType) 6)


typedef void(*NvM_Init_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_Init_CalloutType Callout;
} NvM_Init_StubType;

typedef void(*NvM_SetDataIndex_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_SetDataIndex_CalloutType Callout;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  VAR(uint8, AUTOMATIC) DataIndex;
} NvM_SetDataIndex_StubType;

typedef void(*NvM_GetDataIndex_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_GetDataIndex_CalloutType Callout;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) DataIndexPtr;
} NvM_GetDataIndex_StubType;

typedef void(*NvM_SetBlockProtection_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_SetBlockProtection_CalloutType Callout;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  VAR(boolean, AUTOMATIC) ProtectionEnabled;
} NvM_SetBlockProtection_StubType;

typedef void(*NvM_GetErrorStatus_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_GetErrorStatus_CalloutType Callout;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) RequestResultPtr;
} NvM_GetErrorStatus_StubType;

typedef void(*NvM_GetVersionInfo_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_GetVersionInfo_CalloutType Callout;
  P2VAR(Std_VersionInfoType, AUTOMATIC, NVM_APPL_DATA) versioninfo;
} NvM_GetVersionInfo_StubType;

typedef void(*NvM_SetRamBlockStatus_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_SetRamBlockStatus_CalloutType Callout;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  VAR(boolean, AUTOMATIC) BlockChanged;
} NvM_SetRamBlockStatus_StubType;

typedef Std_ReturnType(*NvM_ReadBlock_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_ReadBlock_CalloutType Callout;
  VAR(Std_ReturnType, AUTOMATIC) RetVal;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_DstPtr;
} NvM_ReadBlock_StubType;

typedef Std_ReturnType(*NvM_WriteBlock_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_WriteBlock_CalloutType Callout;
  VAR(Std_ReturnType, AUTOMATIC) RetVal;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  P2CONST(uint8, AUTOMATIC, NVM_APPL_CONST) NvM_SrcPtr;
} NvM_WriteBlock_StubType;

typedef Std_ReturnType(*NvM_RestoreBlockDefaults_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_RestoreBlockDefaults_CalloutType Callout;
  VAR(Std_ReturnType, AUTOMATIC) RetVal;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_DestPtr;
} NvM_RestoreBlockDefaults_StubType;

typedef Std_ReturnType(*NvM_EraseNvBlock_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_EraseNvBlock_CalloutType Callout;
  VAR(Std_ReturnType, AUTOMATIC) RetVal;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
} NvM_EraseNvBlock_StubType;

typedef void(*NvM_CancelWriteAll_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_CancelWriteAll_CalloutType Callout;
} NvM_CancelWriteAll_StubType;

typedef Std_ReturnType(*NvM_InvalidateNvBlock_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_InvalidateNvBlock_CalloutType Callout;
  VAR(Std_ReturnType, AUTOMATIC) RetVal;
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId;
} NvM_InvalidateNvBlock_StubType;

typedef void(*NvM_ReadAll_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_ReadAll_CalloutType Callout;
} NvM_ReadAll_StubType;

typedef void(*NvM_WriteAll_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_WriteAll_CalloutType Callout;
} NvM_WriteAll_StubType;

typedef void(*NvM_JobEndNotification_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_JobEndNotification_CalloutType Callout;
} NvM_JobEndNotification_StubType;

typedef void(*NvM_JobErrorNotification_CalloutType)
(
  void
);
typedef struct
{
  uint32 Count;
  NvM_JobErrorNotification_CalloutType Callout;
} NvM_JobErrorNotification_StubType;


#define NVM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(NvM_Init_StubType,NVM_VAR)
    NvM_Init_Stub;
extern VAR(NvM_SetDataIndex_StubType,NVM_VAR)
    NvM_SetDataIndex_Stub;
extern VAR(NvM_GetDataIndex_StubType,NVM_VAR)
    NvM_GetDataIndex_Stub;
extern VAR(NvM_SetBlockProtection_StubType,NVM_VAR)
    NvM_SetBlockProtection_Stub;
extern VAR(NvM_GetErrorStatus_StubType,NVM_VAR)
    NvM_GetErrorStatus_Stub;
extern VAR(NvM_GetVersionInfo_StubType,NVM_VAR)
    NvM_GetVersionInfo_Stub;
extern VAR(NvM_SetRamBlockStatus_StubType,NVM_VAR)
    NvM_SetRamBlockStatus_Stub;
extern VAR(NvM_ReadBlock_StubType,NVM_VAR)
    NvM_ReadBlock_Stub;
extern VAR(NvM_WriteBlock_StubType,NVM_VAR)
    NvM_WriteBlock_Stub;
extern VAR(NvM_RestoreBlockDefaults_StubType,NVM_VAR)
    NvM_RestoreBlockDefaults_Stub;
extern VAR(NvM_EraseNvBlock_StubType,NVM_VAR)
    NvM_EraseNvBlock_Stub;
extern VAR(NvM_CancelWriteAll_StubType,NVM_VAR)
    NvM_CancelWriteAll_Stub;
extern VAR(NvM_InvalidateNvBlock_StubType,NVM_VAR)
    NvM_InvalidateNvBlock_Stub;
extern VAR(NvM_ReadAll_StubType,NVM_VAR)
    NvM_ReadAll_Stub;
extern VAR(NvM_WriteAll_StubType,NVM_VAR)
    NvM_WriteAll_Stub;
extern VAR(NvM_JobEndNotification_StubType,NVM_VAR)
    NvM_JobEndNotification_Stub;
extern VAR(NvM_JobErrorNotification_StubType,NVM_VAR)
    NvM_JobErrorNotification_Stub;

#define NVM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define NVM_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, NVM_CODE) NvM_Init
(
  void
);

extern FUNC(void, NVM_CODE) NvM_SetDataIndex
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  VAR(uint8, AUTOMATIC) DataIndex
);

extern FUNC(void, NVM_CODE) NvM_GetDataIndex
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) DataIndexPtr
);

extern FUNC(void, NVM_CODE) NvM_SetBlockProtection
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  VAR(boolean, AUTOMATIC) ProtectionEnabled
);

extern FUNC(void, NVM_CODE) NvM_GetErrorStatus
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) RequestResultPtr
);

extern FUNC(void, NVM_CODE) NvM_GetVersionInfo
(
  P2VAR(Std_VersionInfoType, AUTOMATIC, NVM_APPL_DATA) versioninfo
);

extern FUNC(void, NVM_CODE) NvM_SetRamBlockStatus
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  VAR(boolean, AUTOMATIC) BlockChanged
);

extern FUNC(Std_ReturnType, NVM_CODE) NvM_ReadBlock
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_DstPtr
);

extern FUNC(Std_ReturnType, NVM_CODE) NvM_WriteBlock
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  P2CONST(uint8, AUTOMATIC, NVM_APPL_CONST) NvM_SrcPtr
);

extern FUNC(Std_ReturnType, NVM_CODE) NvM_RestoreBlockDefaults
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId,
  P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_DestPtr
);

extern FUNC(Std_ReturnType, NVM_CODE) NvM_EraseNvBlock
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId
);

extern FUNC(void, NVM_CODE) NvM_CancelWriteAll
(
  void
);

extern FUNC(Std_ReturnType, NVM_CODE) NvM_InvalidateNvBlock
(
  VAR(NvM_BlockIdType, AUTOMATIC) BlockId
);

extern FUNC(void, NVM_CODE) NvM_ReadAll
(
  void
);

extern FUNC(void, NVM_CODE) NvM_WriteAll
(
  void
);

#define NVM_STOP_SEC_CODE
#include <MemMap.h>

#endif /* if !defined( NVM_H ) */
