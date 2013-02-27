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

#include <Std_Types.h>
#include <ComM.h>

#define COMM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(ComM_Init_StubType, COMM_VAR)
		ComM_Init_Stub = COMM_INIT_STUB_INIT;
VAR(ComM_DeInit_StubType, COMM_VAR)
		ComM_DeInit_Stub = COMM_DEINIT_STUB_INIT;
VAR(ComM_GetStatus_StubType, COMM_VAR)
		ComM_GetStatus_Stub = COMM_GETSTATUS_STUB_INIT;
VAR(ComM_GetInhibitionStatus_StubType, COMM_VAR)
		ComM_GetInhibitionStatus_Stub = COMM_GETINHIBITIONSTATUS_STUB_INIT;
VAR(ComM_RequestComMode_StubType, COMM_VAR)
		ComM_RequestComMode_Stub = COMM_REQUESTCOMMODE_STUB_INIT;
VAR(ComM_GetMaxComMode_StubType, COMM_VAR)
		ComM_GetMaxComMode_Stub = COMM_GETMAXCOMMODE_STUB_INIT;
VAR(ComM_GetRequestedComMode_StubType, COMM_VAR)
		ComM_GetRequestedComMode_Stub = COMM_GETREQUESTEDCOMMODE_STUB_INIT;
VAR(ComM_GetCurrentComMode_StubType, COMM_VAR)
		ComM_GetCurrentComMode_Stub = COMM_GETCURRENTCOMMODE_STUB_INIT;
VAR(ComM_PreventWakeUp_StubType, COMM_VAR)
		ComM_PreventWakeUp_Stub = COMM_PREVENTWAKEUP_STUB_INIT;
VAR(ComM_LimitChannelToNoComMode_StubType, COMM_VAR)
		ComM_LimitChannelToNoComMode_Stub = COMM_LIMITCHANNELTONOCOMMODE_STUB_INIT;
VAR(ComM_LimitECUToNoComMode_StubType, COMM_VAR)
		ComM_LimitECUToNoComMode_Stub = COMM_LIMITECUTONOCOMMODE_STUB_INIT;
VAR(ComM_ReadInhibitCounter_StubType, COMM_VAR)
		ComM_ReadInhibitCounter_Stub = COMM_READINHIBITCOUNTER_STUB_INIT;
VAR(ComM_ResetInhibitCounter_StubType, COMM_VAR)
		ComM_ResetInhibitCounter_Stub = COMM_RESETINHIBITCOUNTER_STUB_INIT;
VAR(ComM_SetECUGroupClassification_StubType, COMM_VAR)
		ComM_SetECUGroupClassification_Stub = COMM_SETECUGROUPCLASSIFICATION_STUB_INIT;
VAR(ComM_GetVersionInfo_StubType, COMM_VAR)
		ComM_GetVersionInfo_Stub = COMM_GETVERSIONINFO_STUB_INIT;
VAR(ComM_Nm_NetworkStartIndication_StubType, COMM_VAR)
		ComM_Nm_NetworkStartIndication_Stub = COMM_NM_NETWORKSTARTINDICATION_STUB_INIT;
VAR(ComM_Nm_NetworkMode_StubType, COMM_VAR)
		ComM_Nm_NetworkMode_Stub = COMM_NM_NETWORKMODE_STUB_INIT;
VAR(ComM_Nm_PrepareBusSleepMode_StubType, COMM_VAR)
		ComM_Nm_PrepareBusSleepMode_Stub = COMM_NM_PREPAREBUSSLEEPMODE_STUB_INIT;
VAR(ComM_Nm_BusSleepMode_StubType, COMM_VAR)
		ComM_Nm_BusSleepMode_Stub = COMM_NM_BUSSLEEPMODE_STUB_INIT;
VAR(ComM_Nm_RestartIndication_StubType, COMM_VAR)
		ComM_Nm_RestartIndication_Stub = COMM_NM_RESTARTINDICATION_STUB_INIT;
VAR(ComM_DCM_ActiveDiagnostic_StubType, COMM_VAR)
		ComM_DCM_ActiveDiagnostic_Stub = COMM_DCM_ACTIVEDIAGNOSTIC_STUB_INIT;
VAR(ComM_DCM_InactiveDiagnostic_StubType, COMM_VAR)
		ComM_DCM_InactiveDiagnostic_Stub = COMM_DCM_INACTIVEDIAGNOSTIC_STUB_INIT;
VAR(ComM_EcuM_RunModeIndication_StubType, COMM_VAR)
		ComM_EcuM_RunModeIndication_Stub = COMM_ECUM_RUNMODEINDICATION_STUB_INIT;
VAR(ComM_EcuM_WakeUpIndication_StubType, COMM_VAR)
		ComM_EcuM_WakeUpIndication_Stub = COMM_ECUM_WAKEUPINDICATION_STUB_INIT;
VAR(ComM_BusSM_ModeIndication_StubType, COMM_VAR)
		ComM_BusSM_ModeIndication_Stub = COMM_BUSSM_MODEINDICATION_STUB_INIT;

#define COMM_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define COMM_START_SEC_CODE
#include <MemMap.h>

FUNC(void, COMM_CODE) ComM_Init
(
	void
)
{
	ComM_Init_Stub.Count++;
	if (ComM_Init_Stub.Callout != NULL_PTR)
	{
		ComM_Init_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_DeInit
(
	void
)
{
	ComM_DeInit_Stub.Count++;
	if (ComM_DeInit_Stub.Callout != NULL_PTR)
	{
		ComM_DeInit_Stub.Callout ();
	}
}

FUNC(Std_ReturnType, COMM_CODE) ComM_GetStatus
(
	P2VAR(ComM_Init_StatusType, AUTOMATIC, COMM_APPL_DATA) Status
)
{
	ComM_GetStatus_Stub.Count++;
	ComM_GetStatus_Stub.Status = Status;
	if (ComM_GetStatus_Stub.Callout != NULL_PTR)
	{
		ComM_GetStatus_Stub.RetVal = ComM_GetStatus_Stub.Callout ();
	}
	return ComM_GetStatus_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_GetInhibitionStatus
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	P2VAR(ComM_InhibitionStatusType, AUTOMATIC, COMM_APPL_DATA) Status
)
{
	ComM_GetInhibitionStatus_Stub.Count++;
	ComM_GetInhibitionStatus_Stub.Channel = Channel;
	ComM_GetInhibitionStatus_Stub.Status = Status;
	if (ComM_GetInhibitionStatus_Stub.Callout != NULL_PTR)
	{
		ComM_GetInhibitionStatus_Stub.RetVal = ComM_GetInhibitionStatus_Stub.Callout ();
	}
	return ComM_GetInhibitionStatus_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_RequestComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	VAR(ComM_ModeType, AUTOMATIC) ComMode
)
{
	ComM_RequestComMode_Stub.Count++;
	ComM_RequestComMode_Stub.User = User;
	ComM_RequestComMode_Stub.ComMode = ComMode;
	if (ComM_RequestComMode_Stub.Callout != NULL_PTR)
	{
		ComM_RequestComMode_Stub.RetVal = ComM_RequestComMode_Stub.Callout ();
	}
	return ComM_RequestComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_GetMaxComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
)
{
	ComM_GetMaxComMode_Stub.Count++;
	ComM_GetMaxComMode_Stub.User = User;
	ComM_GetMaxComMode_Stub.ComMode = ComMode;
	if (ComM_GetMaxComMode_Stub.Callout != NULL_PTR)
	{
		ComM_GetMaxComMode_Stub.RetVal = ComM_GetMaxComMode_Stub.Callout ();
	}
	return ComM_GetMaxComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_GetRequestedComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
)
{
	ComM_GetRequestedComMode_Stub.Count++;
	ComM_GetRequestedComMode_Stub.User = User;
	ComM_GetRequestedComMode_Stub.ComMode = ComMode;
	if (ComM_GetRequestedComMode_Stub.Callout != NULL_PTR)
	{
		ComM_GetRequestedComMode_Stub.RetVal = ComM_GetRequestedComMode_Stub.Callout ();
	}
	return ComM_GetRequestedComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_GetCurrentComMode
(
	VAR(ComM_UserHandleType, AUTOMATIC) User,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
)
{
	ComM_GetCurrentComMode_Stub.Count++;
	ComM_GetCurrentComMode_Stub.User = User;
	ComM_GetCurrentComMode_Stub.ComMode = ComMode;
	if (ComM_GetCurrentComMode_Stub.Callout != NULL_PTR)
	{
		ComM_GetCurrentComMode_Stub.RetVal = ComM_GetCurrentComMode_Stub.Callout ();
	}
	return ComM_GetCurrentComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_PreventWakeUp
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	VAR(boolean, AUTOMATIC) Status
)
{
	ComM_PreventWakeUp_Stub.Count++;
	ComM_PreventWakeUp_Stub.Channel = Channel;
	ComM_PreventWakeUp_Stub.Status = Status;
	if (ComM_PreventWakeUp_Stub.Callout != NULL_PTR)
	{
		ComM_PreventWakeUp_Stub.RetVal = ComM_PreventWakeUp_Stub.Callout ();
	}
	return ComM_PreventWakeUp_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_LimitChannelToNoComMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	VAR(boolean, AUTOMATIC) Status
)
{
	ComM_LimitChannelToNoComMode_Stub.Count++;
	ComM_LimitChannelToNoComMode_Stub.Channel = Channel;
	ComM_LimitChannelToNoComMode_Stub.Status = Status;
	if (ComM_LimitChannelToNoComMode_Stub.Callout != NULL_PTR)
	{
		ComM_LimitChannelToNoComMode_Stub.RetVal = ComM_LimitChannelToNoComMode_Stub.Callout ();
	}
	return ComM_LimitChannelToNoComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_LimitECUToNoComMode
(
	VAR(boolean, AUTOMATIC) Status
)
{
	ComM_LimitECUToNoComMode_Stub.Count++;
	ComM_LimitECUToNoComMode_Stub.Status = Status;
	if (ComM_LimitECUToNoComMode_Stub.Callout != NULL_PTR)
	{
		ComM_LimitECUToNoComMode_Stub.RetVal = ComM_LimitECUToNoComMode_Stub.Callout ();
	}
	return ComM_LimitECUToNoComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_ReadInhibitCounter
(
	P2VAR(uint16, AUTOMATIC, COMM_APPL_DATA) CounterValue
)
{
	ComM_ReadInhibitCounter_Stub.Count++;
	ComM_ReadInhibitCounter_Stub.CounterValue = CounterValue;
	if (ComM_ReadInhibitCounter_Stub.Callout != NULL_PTR)
	{
		ComM_ReadInhibitCounter_Stub.RetVal = ComM_ReadInhibitCounter_Stub.Callout ();
	}
	return ComM_ReadInhibitCounter_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_ResetInhibitCounter
(
	void
)
{
	ComM_ResetInhibitCounter_Stub.Count++;
	if (ComM_ResetInhibitCounter_Stub.Callout != NULL_PTR)
	{
		ComM_ResetInhibitCounter_Stub.RetVal = ComM_ResetInhibitCounter_Stub.Callout ();
	}
	return ComM_ResetInhibitCounter_Stub.RetVal;
}

FUNC(Std_ReturnType, COMM_CODE) ComM_SetECUGroupClassification
(
	VAR(ComM_InhibitionStatusType, AUTOMATIC) Status
)
{
	ComM_SetECUGroupClassification_Stub.Count++;
	ComM_SetECUGroupClassification_Stub.Status = Status;
	if (ComM_SetECUGroupClassification_Stub.Callout != NULL_PTR)
	{
		ComM_SetECUGroupClassification_Stub.RetVal = ComM_SetECUGroupClassification_Stub.Callout ();
	}
	return ComM_SetECUGroupClassification_Stub.RetVal;
}

FUNC(void, COMM_CODE) ComM_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, COMM_APPL_DATA) versioninfo
)
{
	ComM_GetVersionInfo_Stub.Count++;
	ComM_GetVersionInfo_Stub.versioninfo = versioninfo;
	if (ComM_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		ComM_GetVersionInfo_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_Nm_NetworkStartIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_Nm_NetworkStartIndication_Stub.Count++;
	ComM_Nm_NetworkStartIndication_Stub.Channel = Channel;
	if (ComM_Nm_NetworkStartIndication_Stub.Callout != NULL_PTR)
	{
		ComM_Nm_NetworkStartIndication_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_Nm_NetworkMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_Nm_NetworkMode_Stub.Count++;
	ComM_Nm_NetworkMode_Stub.Channel = Channel;
	if (ComM_Nm_NetworkMode_Stub.Callout != NULL_PTR)
	{
		ComM_Nm_NetworkMode_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_Nm_PrepareBusSleepMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_Nm_PrepareBusSleepMode_Stub.Count++;
	ComM_Nm_PrepareBusSleepMode_Stub.Channel = Channel;
	if (ComM_Nm_PrepareBusSleepMode_Stub.Callout != NULL_PTR)
	{
		ComM_Nm_PrepareBusSleepMode_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_Nm_BusSleepMode
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_Nm_BusSleepMode_Stub.Count++;
	ComM_Nm_BusSleepMode_Stub.Channel = Channel;
	if (ComM_Nm_BusSleepMode_Stub.Callout != NULL_PTR)
	{
		ComM_Nm_BusSleepMode_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_Nm_RestartIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_Nm_RestartIndication_Stub.Count++;
	ComM_Nm_RestartIndication_Stub.Channel = Channel;
	if (ComM_Nm_RestartIndication_Stub.Callout != NULL_PTR)
	{
		ComM_Nm_RestartIndication_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_DCM_ActiveDiagnostic
(
	void
)
{
	ComM_DCM_ActiveDiagnostic_Stub.Count++;
	if (ComM_DCM_ActiveDiagnostic_Stub.Callout != NULL_PTR)
	{
		ComM_DCM_ActiveDiagnostic_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_DCM_InactiveDiagnostic
(
	void
)
{
	ComM_DCM_InactiveDiagnostic_Stub.Count++;
	if (ComM_DCM_InactiveDiagnostic_Stub.Callout != NULL_PTR)
	{
		ComM_DCM_InactiveDiagnostic_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_EcuM_RunModeIndication
(
	VAR(NetworkHandleType, AUTOMATIC) channel
)
{
	ComM_EcuM_RunModeIndication_Stub.Count++;
	ComM_EcuM_RunModeIndication_Stub.channel = channel;
	if (ComM_EcuM_RunModeIndication_Stub.Callout != NULL_PTR)
	{
		ComM_EcuM_RunModeIndication_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_EcuM_WakeUpIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel
)
{
	ComM_EcuM_WakeUpIndication_Stub.Count++;
	ComM_EcuM_WakeUpIndication_Stub.Channel = Channel;
	if (ComM_EcuM_WakeUpIndication_Stub.Callout != NULL_PTR)
	{
		ComM_EcuM_WakeUpIndication_Stub.Callout ();
	}
}

FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication
(
	VAR(NetworkHandleType, AUTOMATIC) Channel,
	P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_DATA) ComMode
)
{
	ComM_BusSM_ModeIndication_Stub.Count++;
	ComM_BusSM_ModeIndication_Stub.Channel = Channel;
	ComM_BusSM_ModeIndication_Stub.ComMode = ComMode;
	if (ComM_BusSM_ModeIndication_Stub.Callout != NULL_PTR)
	{
		ComM_BusSM_ModeIndication_Stub.Callout ();
	}
}

#define COMM_STOP_SEC_CODE
#include <MemMap.h>

