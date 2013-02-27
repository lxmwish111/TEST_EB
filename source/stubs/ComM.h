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

#if (!defined COMM_H)
#define COMM_H

#include <Std_Types.h>
#include <ComStack_Types.h>

/* module administrative information */
#define COMM_VENDOR_ID 0x01
#define COMM_MODULE_ID 12        /* Fill in correct module ID */
#define COMM_AR_MAJOR_VERSION 2  /* stub AR version is 3.0.0 for all stubs */
#define COMM_AR_MINOR_VERSION 0
#define COMM_AR_PATCH_VERSION 0
#define COMM_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define COMM_SW_MINOR_VERSION 0
#define COMM_SW_PATCH_VERSION 0

/* error codes */

/* service IDs */
#define       COMM_INIT_ID                0x01
#define       COMM_DEINIT_ID                            0x02
#define       COMM_GETSTATUS_ID                         0x03
#define       COMM_GETINHIBITIONSTATUS_ID               0x04
#define       COMM_REQUESTCOMMODE_ID                    0x05
#define       COMM_GETMAXCOMMODE_ID                     0x06
#define       COMM_GETREQUESTEDCOMMODE_ID               0x07
#define       COMM_GETCURRENTCOMMODE_ID                 0x08
#define       COMM_PREVENTWAKEUP_ID                     0x09
#define       COMM_LIMITCHANNELTONOCOMMODE_ID                         0x0b
#define       COMM_LIMITECUTONOCOMMODE_ID               0x0c
#define       COMM_READINHIBITCOUNTER_ID                0x0d
#define       COMM_RESETINHIBITCOUNTER_ID               0x0e
#define       COMM_SETECUGROUPCLASSIFICATION_ID                       0x0f
#define       COMM_GETVERSIONINFO_ID                    0x10
#define       COMM_NM_NETWORKSTARTINDICATION_ID                       0x15
#define       COMM_NM_NETWORKMODE_ID                    0x18
#define       COMM_NM_PREPAREBUSSLEEPMODE_ID                          0x19
#define       COMM_NM_BUSSLEEPMODE_ID                   0x1a
#define       COMM_NM_RESTARTINDICATION_ID                            0x1b
#define       COMM_DCM_ACTIVEDIAGNOSTIC_ID                            0x1f
#define       COMM_DCM_INACTIVEDIAGNOSTIC_ID                          0x20
#define       COMM_ECUM_RUNMODEINDICATION_ID                          0x29
#define       COMM_ECUM_WAKEUPINDICATION_ID                           0x2a
#define       COMM_BUSSM_MODEINDICATION_ID                            0x33

/* initialisation definitions */
#define COMM_INIT_STUB_INIT { 0, NULL_PTR }
#define COMM_DEINIT_STUB_INIT { 0, NULL_PTR }
#define COMM_GETSTATUS_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define COMM_GETINHIBITIONSTATUS_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define COMM_REQUESTCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define COMM_GETMAXCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define COMM_GETREQUESTEDCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define COMM_GETCURRENTCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define COMM_PREVENTWAKEUP_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define COMM_LIMITCHANNELTONOCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define COMM_LIMITECUTONOCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define COMM_READINHIBITCOUNTER_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define COMM_RESETINHIBITCOUNTER_STUB_INIT { 0, NULL_PTR , 0 }
#define COMM_SETECUGROUPCLASSIFICATION_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define COMM_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define COMM_NM_NETWORKSTARTINDICATION_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_NM_NETWORKMODE_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_NM_PREPAREBUSSLEEPMODE_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_NM_BUSSLEEPMODE_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_NM_RESTARTINDICATION_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_DCM_ACTIVEDIAGNOSTIC_STUB_INIT { 0, NULL_PTR }
#define COMM_DCM_INACTIVEDIAGNOSTIC_STUB_INIT { 0, NULL_PTR }
#define COMM_ECUM_RUNMODEINDICATION_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_ECUM_WAKEUPINDICATION_STUB_INIT { 0, NULL_PTR, 0 }
#define COMM_BUSSM_MODEINDICATION_STUB_INIT { 0, NULL_PTR, 0, NULL_PTR }

typedef       uint8         ComM_InitStatusType;
typedef       uint8         ComM_UserHandleType;
typedef       uint8         ComM_ModeType;

#define COMM_UNINIT          ((ComM_InitStatusType)1)
#define COMM_INIT            ((ComM_InitStatusType)2)


#define COMM_NO_COMMUNICATION              ((ComM_ModeType)1)
#define COMM_SILENT_COMMUNICATION          ((ComM_ModeType)2)
#define COMM_FULL_COMMUNICATION            ((ComM_ModeType)3)



typedef       uint8                       ComM_InhibitionStatusType   ;
typedef       uint8                       ComM_Init_StatusType;
typedef void(*ComM_Init_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Init_CalloutType Callout;
} ComM_Init_StubType;

typedef void(*ComM_DeInit_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_DeInit_CalloutType Callout;
} ComM_DeInit_StubType;

typedef Std_ReturnType(*ComM_GetStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	P2VAR(ComM_Init_StatusType, AUTOMATIC, COMM_APPL_DATA) Status;
} ComM_GetStatus_StubType;

typedef Std_ReturnType(*ComM_GetInhibitionStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetInhibitionStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
	P2VAR(ComM_InhibitionStatusType, AUTOMATIC, COMM_APPL_DATA) Status;
} ComM_GetInhibitionStatus_StubType;

typedef Std_ReturnType(*ComM_RequestComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_RequestComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(ComM_UserHandleType, AUTOMATIC) User;
	VAR(ComM_ModeType, AUTOMATIC) ComMode;
} ComM_RequestComMode_StubType;

typedef Std_ReturnType(*ComM_GetMaxComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetMaxComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(ComM_UserHandleType, AUTOMATIC) User;
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode;
} ComM_GetMaxComMode_StubType;

typedef Std_ReturnType(*ComM_GetRequestedComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetRequestedComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(ComM_UserHandleType, AUTOMATIC) User;
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode;
} ComM_GetRequestedComMode_StubType;

typedef Std_ReturnType(*ComM_GetCurrentComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetCurrentComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(ComM_UserHandleType, AUTOMATIC) User;
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode;
} ComM_GetCurrentComMode_StubType;

typedef Std_ReturnType(*ComM_PreventWakeUp_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_PreventWakeUp_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
	VAR(boolean, AUTOMATIC) Status;
} ComM_PreventWakeUp_StubType;

typedef Std_ReturnType(*ComM_LimitChannelToNoComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_LimitChannelToNoComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
	VAR(boolean, AUTOMATIC) Status;
} ComM_LimitChannelToNoComMode_StubType;

typedef Std_ReturnType(*ComM_LimitECUToNoComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_LimitECUToNoComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(boolean, AUTOMATIC) Status;
} ComM_LimitECUToNoComMode_StubType;

typedef Std_ReturnType(*ComM_ReadInhibitCounter_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_ReadInhibitCounter_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	P2VAR(uint16, AUTOMATIC, COMM_APPL_DATA) CounterValue;
} ComM_ReadInhibitCounter_StubType;

typedef Std_ReturnType(*ComM_ResetInhibitCounter_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_ResetInhibitCounter_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
} ComM_ResetInhibitCounter_StubType;

typedef Std_ReturnType(*ComM_SetECUGroupClassification_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_SetECUGroupClassification_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(ComM_InhibitionStatusType, AUTOMATIC) Status;
} ComM_SetECUGroupClassification_StubType;

typedef void(*ComM_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC,COMM_APPL_DATA) versioninfo;
} ComM_GetVersionInfo_StubType;

typedef void(*ComM_Nm_NetworkStartIndication_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Nm_NetworkStartIndication_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_Nm_NetworkStartIndication_StubType;

typedef void(*ComM_Nm_NetworkMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Nm_NetworkMode_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_Nm_NetworkMode_StubType;

typedef void(*ComM_Nm_PrepareBusSleepMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Nm_PrepareBusSleepMode_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_Nm_PrepareBusSleepMode_StubType;

typedef void(*ComM_Nm_BusSleepMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Nm_BusSleepMode_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_Nm_BusSleepMode_StubType;

typedef void(*ComM_Nm_RestartIndication_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_Nm_RestartIndication_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_Nm_RestartIndication_StubType;

typedef void(*ComM_DCM_ActiveDiagnostic_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_DCM_ActiveDiagnostic_CalloutType Callout;
} ComM_DCM_ActiveDiagnostic_StubType;

typedef void(*ComM_DCM_InactiveDiagnostic_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_DCM_InactiveDiagnostic_CalloutType Callout;
} ComM_DCM_InactiveDiagnostic_StubType;

typedef void(*ComM_EcuM_RunModeIndication_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_EcuM_RunModeIndication_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) channel;
} ComM_EcuM_RunModeIndication_StubType;

typedef void(*ComM_EcuM_WakeUpIndication_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	ComM_EcuM_WakeUpIndication_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
} ComM_EcuM_WakeUpIndication_StubType;

typedef void(*ComM_BusSM_ModeIndication_CalloutType)
(
	void
);

typedef struct
{
	uint32 Count;
	ComM_BusSM_ModeIndication_CalloutType Callout;
	VAR(NetworkHandleType, AUTOMATIC) Channel;
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode;
} ComM_BusSM_ModeIndication_StubType;

#define COMM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(ComM_Init_StubType,COMM_VAR)
		ComM_Init_Stub;
extern VAR(ComM_DeInit_StubType,COMM_VAR)
		ComM_DeInit_Stub;
extern VAR(ComM_GetStatus_StubType,COMM_VAR)
		ComM_GetStatus_Stub;
extern VAR(ComM_GetInhibitionStatus_StubType,COMM_VAR)
		ComM_GetInhibitionStatus_Stub;
extern VAR(ComM_RequestComMode_StubType,COMM_VAR)
		ComM_RequestComMode_Stub;
extern VAR(ComM_GetMaxComMode_StubType,COMM_VAR)
		ComM_GetMaxComMode_Stub;
extern VAR(ComM_GetRequestedComMode_StubType,COMM_VAR)
		ComM_GetRequestedComMode_Stub;
extern VAR(ComM_GetCurrentComMode_StubType,COMM_VAR)
		ComM_GetCurrentComMode_Stub;
extern VAR(ComM_PreventWakeUp_StubType,COMM_VAR)
		ComM_PreventWakeUp_Stub;
extern VAR(ComM_LimitChannelToNoComMode_StubType,COMM_VAR)
		ComM_LimitChannelToNoComMode_Stub;
extern VAR(ComM_LimitECUToNoComMode_StubType,COMM_VAR)
		ComM_LimitECUToNoComMode_Stub;
extern VAR(ComM_ReadInhibitCounter_StubType,COMM_VAR)
		ComM_ReadInhibitCounter_Stub;
extern VAR(ComM_ResetInhibitCounter_StubType,COMM_VAR)
		ComM_ResetInhibitCounter_Stub;
extern VAR(ComM_SetECUGroupClassification_StubType,COMM_VAR)
		ComM_SetECUGroupClassification_Stub;
extern VAR(ComM_GetVersionInfo_StubType,COMM_VAR)
		ComM_GetVersionInfo_Stub;
extern VAR(ComM_Nm_NetworkStartIndication_StubType,COMM_VAR)
		ComM_Nm_NetworkStartIndication_Stub;
extern VAR(ComM_Nm_NetworkMode_StubType,COMM_VAR)
		ComM_Nm_NetworkMode_Stub;
extern VAR(ComM_Nm_PrepareBusSleepMode_StubType,COMM_VAR)
		ComM_Nm_PrepareBusSleepMode_Stub;
extern VAR(ComM_Nm_BusSleepMode_StubType,COMM_VAR)
		ComM_Nm_BusSleepMode_Stub;
extern VAR(ComM_Nm_RestartIndication_StubType,COMM_VAR)
		ComM_Nm_RestartIndication_Stub;
extern VAR(ComM_DCM_ActiveDiagnostic_StubType,COMM_VAR)
		ComM_DCM_ActiveDiagnostic_Stub;
extern VAR(ComM_DCM_InactiveDiagnostic_StubType,COMM_VAR)
		ComM_DCM_InactiveDiagnostic_Stub;
extern VAR(ComM_EcuM_RunModeIndication_StubType,COMM_VAR)
		ComM_EcuM_RunModeIndication_Stub;
extern VAR(ComM_EcuM_WakeUpIndication_StubType,COMM_VAR)
		ComM_EcuM_WakeUpIndication_Stub;
extern VAR(ComM_BusSM_ModeIndication_StubType,COMM_VAR)
		ComM_BusSM_ModeIndication_Stub;

#define COMM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define COMM_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, COMM_CODE) ComM_Init
(
	void
);

extern FUNC(void, COMM_CODE) ComM_DeInit
(
	void
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetStatus
(
	P2VAR(ComM_Init_StatusType, AUTOMATIC, COMM_APPL_DATA) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetInhibitionStatus
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	P2VAR(ComM_InhibitionStatusType, AUTOMATIC, COMM_APPL_DATA) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_RequestComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	VAR(ComM_ModeType, AUTOMATIC) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetMaxComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetRequestedComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_GetCurrentComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_PreventWakeUp
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	VAR(boolean, AUTOMATIC) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_LimitChannelToNoComMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	VAR(boolean, AUTOMATIC) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_LimitECUToNoComMode
(
	VAR(boolean, AUTOMATIC) Status
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_ReadInhibitCounter
(
	P2VAR(uint16, AUTOMATIC, COMM_APPL_DATA) CounterValue
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_ResetInhibitCounter
(
	void
);

extern FUNC(Std_ReturnType, COMM_CODE) ComM_SetECUGroupClassification
(
	VAR(ComM_InhibitionStatusType, AUTOMATIC) Status
);

extern FUNC(void, COMM_CODE) ComM_GetVersionInfo
(
	P2VAR(Std_VersionInfoType,AUTOMATIC,COMM_APPL_DATA) versioninfo
);

extern FUNC(void, COMM_CODE) ComM_Nm_NetworkStartIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_Nm_NetworkMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_Nm_PrepareBusSleepMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_Nm_BusSleepMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_Nm_RestartIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_DCM_ActiveDiagnostic
(
	void
);

extern FUNC(void, COMM_CODE) ComM_DCM_InactiveDiagnostic
(
	void
);

extern FUNC(void, COMM_CODE) ComM_EcuM_RunModeIndication
(
	VAR(NetworkHandleType, AUTOMATIC) channel
);

extern FUNC(void, COMM_CODE) ComM_EcuM_WakeUpIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
);

extern FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
);

#define COMM_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( COMM_H ) */

