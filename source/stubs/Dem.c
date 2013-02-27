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
#include <Dem.h>

#define DEM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(Dem_GetVersionInfo_StubType, DEM_VAR)
		Dem_GetVersionInfo_Stub = DEM_GETVERSIONINFO_STUB_INIT;
VAR(Dem_PreInit_StubType, DEM_VAR)
		Dem_PreInit_Stub = DEM_PREINIT_STUB_INIT;
VAR(Dem_Init_StubType, DEM_VAR)
		Dem_Init_Stub = DEM_INIT_STUB_INIT;
VAR(Dem_Shutdown_StubType, DEM_VAR)
		Dem_Shutdown_Stub = DEM_SHUTDOWN_STUB_INIT;
VAR(Dem_SetEventStatus_StubType, DEM_VAR)
		Dem_SetEventStatus_Stub = DEM_SETEVENTSTATUS_STUB_INIT;
VAR(Dem_ResetEventStatus_StubType, DEM_VAR)
		Dem_ResetEventStatus_Stub = DEM_RESETEVENTSTATUS_STUB_INIT;
VAR(Dem_PrestoreFreezeFrame_StubType, DEM_VAR)
		Dem_PrestoreFreezeFrame_Stub = DEM_PRESTOREFREEZEFRAME_STUB_INIT;
VAR(Dem_ClearPrestoredFreezeFrame_StubType, DEM_VAR)
		Dem_ClearPrestoredFreezeFrame_Stub = DEM_CLEARPRESTOREDFREEZEFRAME_STUB_INIT;
VAR(Dem_SetOperationCycleState_StubType, DEM_VAR)
		Dem_SetOperationCycleState_Stub = DEM_SETOPERATIONCYCLESTATE_STUB_INIT;
VAR(Dem_GetEventStatus_StubType, DEM_VAR)
		Dem_GetEventStatus_Stub = DEM_GETEVENTSTATUS_STUB_INIT;
VAR(Dem_GetEventFailed_StubType, DEM_VAR)
		Dem_GetEventFailed_Stub = DEM_GETEVENTFAILED_STUB_INIT;
VAR(Dem_GetEventTested_StubType, DEM_VAR)
		Dem_GetEventTested_Stub = DEM_GETEVENTTESTED_STUB_INIT;
VAR(Dem_GetDTCOfEvent_StubType, DEM_VAR)
		Dem_GetDTCOfEvent_Stub = DEM_GETDTCOFEVENT_STUB_INIT;
VAR(Dem_SetValueByOemId_StubType, DEM_VAR)
		Dem_SetValueByOemId_Stub = DEM_SETVALUEBYOEMID_STUB_INIT;
VAR(Dem_SetEnableCondition_StubType, DEM_VAR)
		Dem_SetEnableCondition_Stub = DEM_SETENABLECONDITION_STUB_INIT;
VAR(Dem_GetFaultDetectionCounter_StubType, DEM_VAR)
		Dem_GetFaultDetectionCounter_Stub = DEM_GETFAULTDETECTIONCOUNTER_STUB_INIT;
VAR(Dem_GetIndicatorStatus_StubType, DEM_VAR)
		Dem_GetIndicatorStatus_Stub = DEM_GETINDICATORSTATUS_STUB_INIT;
VAR(Dem_ReportErrorStatus_StubType, DEM_VAR)
		Dem_ReportErrorStatus_Stub = DEM_REPORTERRORSTATUS_STUB_INIT;
VAR(Dem_SetDTCFilter_StubType, DEM_VAR)
		Dem_SetDTCFilter_Stub = DEM_SETDTCFILTER_STUB_INIT;
VAR(Dem_SetDTCFilterForRecords_StubType, DEM_VAR)
		Dem_SetDTCFilterForRecords_Stub = DEM_SETDTCFILTERFORRECORDS_STUB_INIT;
VAR(Dem_SetViewFilter_StubType, DEM_VAR)
		Dem_SetViewFilter_Stub = DEM_SETVIEWFILTER_STUB_INIT;
VAR(Dem_GetStatusOfDTC_StubType, DEM_VAR)
		Dem_GetStatusOfDTC_Stub = DEM_GETSTATUSOFDTC_STUB_INIT;
VAR(Dem_GetDTCStatusAvailabilityMask_StubType, DEM_VAR)
		Dem_GetDTCStatusAvailabilityMask_Stub = DEM_GETDTCSTATUSAVAILABILITYMASK_STUB_INIT;
VAR(Dem_GetNumberOfFilteredDTC_StubType, DEM_VAR)
		Dem_GetNumberOfFilteredDTC_Stub = DEM_GETNUMBEROFFILTEREDDTC_STUB_INIT;
VAR(Dem_GetNextFilteredDTC_StubType, DEM_VAR)
		Dem_GetNextFilteredDTC_Stub = DEM_GETNEXTFILTEREDDTC_STUB_INIT;
VAR(Dem_GetDTCByOccurrenceTime_StubType, DEM_VAR)
		Dem_GetDTCByOccurrenceTime_Stub = DEM_GETDTCBYOCCURRENCETIME_STUB_INIT;
VAR(Dem_GetViewIDOfDTC_StubType, DEM_VAR)
		Dem_GetViewIDOfDTC_Stub = DEM_GETVIEWIDOFDTC_STUB_INIT;
VAR(Dem_GetNextFilteredRecord_StubType, DEM_VAR)
		Dem_GetNextFilteredRecord_Stub = DEM_GETNEXTFILTEREDRECORD_STUB_INIT;
VAR(Dem_GetNextFilteredDTCAndFDC_StubType, DEM_VAR)
		Dem_GetNextFilteredDTCAndFDC_Stub = DEM_GETNEXTFILTEREDDTCANDFDC_STUB_INIT;
VAR(Dem_GetNextFilteredDTCAndSeverity_StubType, DEM_VAR)
		Dem_GetNextFilteredDTCAndSeverity_Stub = DEM_GETNEXTFILTEREDDTCANDSEVERITY_STUB_INIT;
VAR(Dem_GetTranslationType_StubType, DEM_VAR)
		Dem_GetTranslationType_Stub = DEM_GETTRANSLATIONTYPE_STUB_INIT;
VAR(Dem_GetSeverityOfDTC_StubType, DEM_VAR)
		Dem_GetSeverityOfDTC_Stub = DEM_GETSEVERITYOFDTC_STUB_INIT;
VAR(Dem_DisableDTCRecordUpdate_StubType, DEM_VAR)
		Dem_DisableDTCRecordUpdate_Stub = DEM_DISABLEDTCRECORDUPDATE_STUB_INIT;
VAR(Dem_EnableDTCRecordUpdate_StubType, DEM_VAR)
		Dem_EnableDTCRecordUpdate_Stub = DEM_ENABLEDTCRECORDUPDATE_STUB_INIT;
VAR(Dem_GetDTCOfFreezeFrameRecord_StubType, DEM_VAR)
		Dem_GetDTCOfFreezeFrameRecord_Stub = DEM_GETDTCOFFREEZEFRAMERECORD_STUB_INIT;
VAR(Dem_GetFreezeFrameDataByDTC_StubType, DEM_VAR)
		Dem_GetFreezeFrameDataByDTC_Stub = DEM_GETFREEZEFRAMEDATABYDTC_STUB_INIT;
VAR(Dem_GetFreezeFrameDataIdentifierByDTC_StubType, DEM_VAR)
		Dem_GetFreezeFrameDataIdentifierByDTC_Stub = DEM_GETFREEZEFRAMEDATAIDENTIFIERBYDTC_STUB_INIT;
VAR(Dem_GetSizeOfFreezeFrame_StubType, DEM_VAR)
		Dem_GetSizeOfFreezeFrame_Stub = DEM_GETSIZEOFFREEZEFRAME_STUB_INIT;
VAR(Dem_GetExtendedDataRecordByDTC_StubType, DEM_VAR)
		Dem_GetExtendedDataRecordByDTC_Stub = DEM_GETEXTENDEDDATARECORDBYDTC_STUB_INIT;
VAR(Dem_GetSizeOfExtendedDataRecordByDTC_StubType, DEM_VAR)
		Dem_GetSizeOfExtendedDataRecordByDTC_Stub = DEM_GETSIZEOFEXTENDEDDATARECORDBYDTC_STUB_INIT;
VAR(Dem_ClearDTC_StubType, DEM_VAR)
		Dem_ClearDTC_Stub = DEM_CLEARDTC_STUB_INIT;
VAR(Dem_DisableDTCStorage_StubType, DEM_VAR)
		Dem_DisableDTCStorage_Stub = DEM_DISABLEDTCSTORAGE_STUB_INIT;
VAR(Dem_EnableDTCStorage_StubType, DEM_VAR)
		Dem_EnableDTCStorage_Stub = DEM_ENABLEDTCSTORAGE_STUB_INIT;
VAR(Dem_DisableEventStatusUpdate_StubType, DEM_VAR)
		Dem_DisableEventStatusUpdate_Stub = DEM_DISABLEEVENTSTATUSUPDATE_STUB_INIT;
VAR(Dem_EnableEventStatusUpdate_StubType, DEM_VAR)
		Dem_EnableEventStatusUpdate_Stub = DEM_ENABLEEVENTSTATUSUPDATE_STUB_INIT;
VAR(Dem_MainFunction_StubType, DEM_VAR)
		Dem_MainFunction_Stub = DEM_MAINFUNCTION_STUB_INIT;

#define DEM_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define DEM_START_SEC_CODE
#include <MemMap.h>

FUNC(void, DEM_CODE) Dem_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, DEM_APPL_DATA) versioninfo
)
{
	Dem_GetVersionInfo_Stub.Count++;
	Dem_GetVersionInfo_Stub.versioninfo = versioninfo;
	if (Dem_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		Dem_GetVersionInfo_Stub.Callout ();
	}
}

FUNC(void, DEM_CODE) Dem_PreInit
(
	void
)
{
	Dem_PreInit_Stub.Count++;
	if (Dem_PreInit_Stub.Callout != NULL_PTR)
	{
		Dem_PreInit_Stub.Callout ();
	}
}

FUNC(void, DEM_CODE) Dem_Init
(
	void
)
{
	Dem_Init_Stub.Count++;
	if (Dem_Init_Stub.Callout != NULL_PTR)
	{
		Dem_Init_Stub.Callout ();
	}
}

FUNC(void, DEM_CODE) Dem_Shutdown
(
	void
)
{
	Dem_Shutdown_Stub.Count++;
	if (Dem_Shutdown_Stub.Callout != NULL_PTR)
	{
		Dem_Shutdown_Stub.Callout ();
	}
}

FUNC(Std_ReturnType, DEM_CODE) Dem_SetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) EventStatus
)
{
	Dem_SetEventStatus_Stub.Count++;
	Dem_SetEventStatus_Stub.EventId = EventId;
	Dem_SetEventStatus_Stub.EventStatus = EventStatus;
	if (Dem_SetEventStatus_Stub.Callout != NULL_PTR)
	{
		Dem_SetEventStatus_Stub.RetVal = Dem_SetEventStatus_Stub.Callout ();
	}
	return Dem_SetEventStatus_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_ResetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
)
{
	Dem_ResetEventStatus_Stub.Count++;
	Dem_ResetEventStatus_Stub.EventId = EventId;
	if (Dem_ResetEventStatus_Stub.Callout != NULL_PTR)
	{
		Dem_ResetEventStatus_Stub.RetVal = Dem_ResetEventStatus_Stub.Callout ();
	}
	return Dem_ResetEventStatus_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_PrestoreFreezeFrame
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
)
{
	Dem_PrestoreFreezeFrame_Stub.Count++;
	Dem_PrestoreFreezeFrame_Stub.EventId = EventId;
	if (Dem_PrestoreFreezeFrame_Stub.Callout != NULL_PTR)
	{
		Dem_PrestoreFreezeFrame_Stub.RetVal = Dem_PrestoreFreezeFrame_Stub.Callout ();
	}
	return Dem_PrestoreFreezeFrame_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_ClearPrestoredFreezeFrame
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
)
{
	Dem_ClearPrestoredFreezeFrame_Stub.Count++;
	Dem_ClearPrestoredFreezeFrame_Stub.EventId = EventId;
	if (Dem_ClearPrestoredFreezeFrame_Stub.Callout != NULL_PTR)
	{
		Dem_ClearPrestoredFreezeFrame_Stub.RetVal = Dem_ClearPrestoredFreezeFrame_Stub.Callout ();
	}
	return Dem_ClearPrestoredFreezeFrame_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_SetOperationCycleState
(
	VAR(uint8, AUTOMATIC) OperationCycleId,
	VAR(uint8, AUTOMATIC) CycleState
)
{
	Dem_SetOperationCycleState_Stub.Count++;
	Dem_SetOperationCycleState_Stub.OperationCycleId = OperationCycleId;
	Dem_SetOperationCycleState_Stub.CycleState = CycleState;
	if (Dem_SetOperationCycleState_Stub.Callout != NULL_PTR)
	{
		Dem_SetOperationCycleState_Stub.RetVal = Dem_SetOperationCycleState_Stub.Callout ();
	}
	return Dem_SetOperationCycleState_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) EventStatusExtended
)
{
	Dem_GetEventStatus_Stub.Count++;
	Dem_GetEventStatus_Stub.EventId = EventId;
	Dem_GetEventStatus_Stub.EventStatusExtended = EventStatusExtended;
	if (Dem_GetEventStatus_Stub.Callout != NULL_PTR)
	{
		Dem_GetEventStatus_Stub.RetVal = Dem_GetEventStatus_Stub.Callout ();
	}
	return Dem_GetEventStatus_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventFailed
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventFailed
)
{
	Dem_GetEventFailed_Stub.Count++;
	Dem_GetEventFailed_Stub.EventId = EventId;
	Dem_GetEventFailed_Stub.EventFailed = EventFailed;
	if (Dem_GetEventFailed_Stub.Callout != NULL_PTR)
	{
		Dem_GetEventFailed_Stub.RetVal = Dem_GetEventFailed_Stub.Callout ();
	}
	return Dem_GetEventFailed_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventTested
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventTested
)
{
	Dem_GetEventTested_Stub.Count++;
	Dem_GetEventTested_Stub.EventId = EventId;
	Dem_GetEventTested_Stub.EventTested = EventTested;
	if (Dem_GetEventTested_Stub.Callout != NULL_PTR)
	{
		Dem_GetEventTested_Stub.RetVal = Dem_GetEventTested_Stub.Callout ();
	}
	return Dem_GetEventTested_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTCOfEvent
)
{
	Dem_GetDTCOfEvent_Stub.Count++;
	Dem_GetDTCOfEvent_Stub.EventId = EventId;
	Dem_GetDTCOfEvent_Stub.DTCKind = DTCKind;
	Dem_GetDTCOfEvent_Stub.DTCOfEvent = DTCOfEvent;
	if (Dem_GetDTCOfEvent_Stub.Callout != NULL_PTR)
	{
		Dem_GetDTCOfEvent_Stub.RetVal = Dem_GetDTCOfEvent_Stub.Callout ();
	}
	return Dem_GetDTCOfEvent_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_SetValueByOemId
(
	VAR(uint16, AUTOMATIC) OemID,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DataValue,
	VAR(uint8, AUTOMATIC) BufferLength
)
{
	Dem_SetValueByOemId_Stub.Count++;
	Dem_SetValueByOemId_Stub.OemID = OemID;
	Dem_SetValueByOemId_Stub.DataValue = DataValue;
	Dem_SetValueByOemId_Stub.BufferLength = BufferLength;
	if (Dem_SetValueByOemId_Stub.Callout != NULL_PTR)
	{
		Dem_SetValueByOemId_Stub.RetVal = Dem_SetValueByOemId_Stub.Callout ();
	}
	return Dem_SetValueByOemId_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_SetEnableCondition
(
	VAR(uint8, AUTOMATIC) EnableConditionID,
	VAR(boolean, AUTOMATIC) ConditionFulfilled
)
{
	Dem_SetEnableCondition_Stub.Count++;
	Dem_SetEnableCondition_Stub.EnableConditionID = EnableConditionID;
	Dem_SetEnableCondition_Stub.ConditionFulfilled = ConditionFulfilled;
	if (Dem_SetEnableCondition_Stub.Callout != NULL_PTR)
	{
		Dem_SetEnableCondition_Stub.RetVal = Dem_SetEnableCondition_Stub.Callout ();
	}
	return Dem_SetEnableCondition_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetFaultDetectionCounter
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) EventIdFaultDetectionCounter
)
{
	Dem_GetFaultDetectionCounter_Stub.Count++;
	Dem_GetFaultDetectionCounter_Stub.EventId = EventId;
	Dem_GetFaultDetectionCounter_Stub.EventIdFaultDetectionCounter = EventIdFaultDetectionCounter;
	if (Dem_GetFaultDetectionCounter_Stub.Callout != NULL_PTR)
	{
		Dem_GetFaultDetectionCounter_Stub.RetVal = Dem_GetFaultDetectionCounter_Stub.Callout ();
	}
	return Dem_GetFaultDetectionCounter_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetIndicatorStatus
(
	VAR(uint8, AUTOMATIC) IndicatorId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) IndicatorStatus
)
{
	Dem_GetIndicatorStatus_Stub.Count++;
	Dem_GetIndicatorStatus_Stub.IndicatorId = IndicatorId;
	Dem_GetIndicatorStatus_Stub.IndicatorStatus = IndicatorStatus;
	if (Dem_GetIndicatorStatus_Stub.Callout != NULL_PTR)
	{
		Dem_GetIndicatorStatus_Stub.RetVal = Dem_GetIndicatorStatus_Stub.Callout ();
	}
	return Dem_GetIndicatorStatus_Stub.RetVal;
}

FUNC(void, DEM_CODE) Dem_ReportErrorStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) EventStatus
)
{
	Dem_ReportErrorStatus_Stub.Count++;
	Dem_ReportErrorStatus_Stub.EventId = EventId;
	Dem_ReportErrorStatus_Stub.EventStatus = EventStatus;
	if (Dem_ReportErrorStatus_Stub.Callout != NULL_PTR)
	{
		Dem_ReportErrorStatus_Stub.Callout ();
	}
}

FUNC(Dem_ReturnSetDTCFilterType, DEM_CODE) Dem_SetDTCFilter
(
	VAR(uint8, AUTOMATIC) DTCStatusMask,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) FilterWithSeverity,
	VAR(uint8, AUTOMATIC) DTCSeverity,
	VAR(uint8, AUTOMATIC) FilterForFaultDetectionCounter
)
{
	Dem_SetDTCFilter_Stub.Count++;
	Dem_SetDTCFilter_Stub.DTCStatusMask = DTCStatusMask;
	Dem_SetDTCFilter_Stub.DTCKind = DTCKind;
	Dem_SetDTCFilter_Stub.DTCOrigin = DTCOrigin;
	Dem_SetDTCFilter_Stub.FilterWithSeverity = FilterWithSeverity;
	Dem_SetDTCFilter_Stub.DTCSeverity = DTCSeverity;
	Dem_SetDTCFilter_Stub.FilterForFaultDetectionCounter = FilterForFaultDetectionCounter;
	if (Dem_SetDTCFilter_Stub.Callout != NULL_PTR)
	{
		Dem_SetDTCFilter_Stub.RetVal = Dem_SetDTCFilter_Stub.Callout ();
	}
	return Dem_SetDTCFilter_Stub.RetVal;
}

FUNC(Dem_ReturnSetDTCFilterType, DEM_CODE) Dem_SetDTCFilterForRecords
(
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredRecords
)
{
	Dem_SetDTCFilterForRecords_Stub.Count++;
	Dem_SetDTCFilterForRecords_Stub.NumberOfFilteredRecords = NumberOfFilteredRecords;
	if (Dem_SetDTCFilterForRecords_Stub.Callout != NULL_PTR)
	{
		Dem_SetDTCFilterForRecords_Stub.RetVal = Dem_SetDTCFilterForRecords_Stub.Callout ();
	}
	return Dem_SetDTCFilterForRecords_Stub.RetVal;
}

FUNC(Dem_ReturnSetViewFilterType, DEM_CODE) Dem_SetViewFilter
(
	VAR(uint8, AUTOMATIC) ViewId
)
{
	Dem_SetViewFilter_Stub.Count++;
	Dem_SetViewFilter_Stub.ViewId = ViewId;
	if (Dem_SetViewFilter_Stub.Callout != NULL_PTR)
	{
		Dem_SetViewFilter_Stub.RetVal = Dem_SetViewFilter_Stub.Callout ();
	}
	return Dem_SetViewFilter_Stub.RetVal;
}

FUNC(Dem_ReturnGetStatusOfDTCType, DEM_CODE) Dem_GetStatusOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus
)
{
	Dem_GetStatusOfDTC_Stub.Count++;
	Dem_GetStatusOfDTC_Stub.DTC = DTC;
	Dem_GetStatusOfDTC_Stub.DTCKind = DTCKind;
	Dem_GetStatusOfDTC_Stub.DTCOrigin = DTCOrigin;
	Dem_GetStatusOfDTC_Stub.DTCStatus = DTCStatus;
	if (Dem_GetStatusOfDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetStatusOfDTC_Stub.RetVal = Dem_GetStatusOfDTC_Stub.Callout ();
	}
	return Dem_GetStatusOfDTC_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCStatusAvailabilityMask
(
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatusMask
)
{
	Dem_GetDTCStatusAvailabilityMask_Stub.Count++;
	Dem_GetDTCStatusAvailabilityMask_Stub.DTCStatusMask = DTCStatusMask;
	if (Dem_GetDTCStatusAvailabilityMask_Stub.Callout != NULL_PTR)
	{
		Dem_GetDTCStatusAvailabilityMask_Stub.RetVal = Dem_GetDTCStatusAvailabilityMask_Stub.Callout ();
	}
	return Dem_GetDTCStatusAvailabilityMask_Stub.RetVal;
}

FUNC(Dem_ReturnGetNumberOfFilteredDTCType, DEM_CODE) Dem_GetNumberOfFilteredDTC
(
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredDTC
)
{
	Dem_GetNumberOfFilteredDTC_Stub.Count++;
	Dem_GetNumberOfFilteredDTC_Stub.NumberOfFilteredDTC = NumberOfFilteredDTC;
	if (Dem_GetNumberOfFilteredDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetNumberOfFilteredDTC_Stub.RetVal = Dem_GetNumberOfFilteredDTC_Stub.Callout ();
	}
	return Dem_GetNumberOfFilteredDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTC
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus
)
{
	Dem_GetNextFilteredDTC_Stub.Count++;
	Dem_GetNextFilteredDTC_Stub.DTC = DTC;
	Dem_GetNextFilteredDTC_Stub.DTCStatus = DTCStatus;
	if (Dem_GetNextFilteredDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetNextFilteredDTC_Stub.RetVal = Dem_GetNextFilteredDTC_Stub.Callout ();
	}
	return Dem_GetNextFilteredDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetDTCByOccurrenceTimeType, DEM_CODE) Dem_GetDTCByOccurrenceTime
(
	VAR(uint8, AUTOMATIC) DTCRequest,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC
)
{
	Dem_GetDTCByOccurrenceTime_Stub.Count++;
	Dem_GetDTCByOccurrenceTime_Stub.DTCRequest = DTCRequest;
	Dem_GetDTCByOccurrenceTime_Stub.DTCKind = DTCKind;
	Dem_GetDTCByOccurrenceTime_Stub.DTC = DTC;
	if (Dem_GetDTCByOccurrenceTime_Stub.Callout != NULL_PTR)
	{
		Dem_GetDTCByOccurrenceTime_Stub.RetVal = Dem_GetDTCByOccurrenceTime_Stub.Callout ();
	}
	return Dem_GetDTCByOccurrenceTime_Stub.RetVal;
}

FUNC(Dem_ReturnGetViewIDOfDTCType, DEM_CODE) Dem_GetViewIDOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ViewId
)
{
	Dem_GetViewIDOfDTC_Stub.Count++;
	Dem_GetViewIDOfDTC_Stub.DTC = DTC;
	Dem_GetViewIDOfDTC_Stub.DTCKind = DTCKind;
	Dem_GetViewIDOfDTC_Stub.ViewId = ViewId;
	if (Dem_GetViewIDOfDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetViewIDOfDTC_Stub.RetVal = Dem_GetViewIDOfDTC_Stub.Callout ();
	}
	return Dem_GetViewIDOfDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredRecord
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) SnapshotRecord
)
{
	Dem_GetNextFilteredRecord_Stub.Count++;
	Dem_GetNextFilteredRecord_Stub.DTC = DTC;
	Dem_GetNextFilteredRecord_Stub.SnapshotRecord = SnapshotRecord;
	if (Dem_GetNextFilteredRecord_Stub.Callout != NULL_PTR)
	{
		Dem_GetNextFilteredRecord_Stub.RetVal = Dem_GetNextFilteredRecord_Stub.Callout ();
	}
	return Dem_GetNextFilteredRecord_Stub.RetVal;
}

FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTCAndFDC
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) DTCFaultDetectionCounter
)
{
	Dem_GetNextFilteredDTCAndFDC_Stub.Count++;
	Dem_GetNextFilteredDTCAndFDC_Stub.DTC = DTC;
	Dem_GetNextFilteredDTCAndFDC_Stub.DTCFaultDetectionCounter = DTCFaultDetectionCounter;
	if (Dem_GetNextFilteredDTCAndFDC_Stub.Callout != NULL_PTR)
	{
		Dem_GetNextFilteredDTCAndFDC_Stub.RetVal = Dem_GetNextFilteredDTCAndFDC_Stub.Callout ();
	}
	return Dem_GetNextFilteredDTCAndFDC_Stub.RetVal;
}

FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTCAndSeverity
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCFunctionalUnit
)
{
	Dem_GetNextFilteredDTCAndSeverity_Stub.Count++;
	Dem_GetNextFilteredDTCAndSeverity_Stub.DTC = DTC;
	Dem_GetNextFilteredDTCAndSeverity_Stub.DTCStatus = DTCStatus;
	Dem_GetNextFilteredDTCAndSeverity_Stub.DTCSeverity = DTCSeverity;
	Dem_GetNextFilteredDTCAndSeverity_Stub.DTCFunctionalUnit = DTCFunctionalUnit;
	if (Dem_GetNextFilteredDTCAndSeverity_Stub.Callout != NULL_PTR)
	{
		Dem_GetNextFilteredDTCAndSeverity_Stub.RetVal = Dem_GetNextFilteredDTCAndSeverity_Stub.Callout ();
	}
	return Dem_GetNextFilteredDTCAndSeverity_Stub.RetVal;
}

FUNC(uint8, DEM_CODE) Dem_GetTranslationType
(
	void
)
{
	Dem_GetTranslationType_Stub.Count++;
	if (Dem_GetTranslationType_Stub.Callout != NULL_PTR)
	{
		Dem_GetTranslationType_Stub.RetVal = Dem_GetTranslationType_Stub.Callout ();
	}
	return Dem_GetTranslationType_Stub.RetVal;
}

FUNC(Dem_ReturnGetSeverityOfDTCType, DEM_CODE) Dem_GetSeverityOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity
)
{
	Dem_GetSeverityOfDTC_Stub.Count++;
	Dem_GetSeverityOfDTC_Stub.DTC = DTC;
	Dem_GetSeverityOfDTC_Stub.DTCSeverity = DTCSeverity;
	if (Dem_GetSeverityOfDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetSeverityOfDTC_Stub.RetVal = Dem_GetSeverityOfDTC_Stub.Callout ();
	}
	return Dem_GetSeverityOfDTC_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_DisableDTCRecordUpdate
(
	void
)
{
	Dem_DisableDTCRecordUpdate_Stub.Count++;
	if (Dem_DisableDTCRecordUpdate_Stub.Callout != NULL_PTR)
	{
		Dem_DisableDTCRecordUpdate_Stub.RetVal = Dem_DisableDTCRecordUpdate_Stub.Callout ();
	}
	return Dem_DisableDTCRecordUpdate_Stub.RetVal;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_EnableDTCRecordUpdate
(
	void
)
{
	Dem_EnableDTCRecordUpdate_Stub.Count++;
	if (Dem_EnableDTCRecordUpdate_Stub.Callout != NULL_PTR)
	{
		Dem_EnableDTCRecordUpdate_Stub.RetVal = Dem_EnableDTCRecordUpdate_Stub.Callout ();
	}
	return Dem_EnableDTCRecordUpdate_Stub.RetVal;
}

FUNC(Dem_ReturnGetDTCOfFreezeFrameRecordType, DEM_CODE) Dem_GetDTCOfFreezeFrameRecord
(
	VAR(uint8, AUTOMATIC) RecordNumber,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC
)
{
	Dem_GetDTCOfFreezeFrameRecord_Stub.Count++;
	Dem_GetDTCOfFreezeFrameRecord_Stub.RecordNumber = RecordNumber;
	Dem_GetDTCOfFreezeFrameRecord_Stub.DTCOrigin = DTCOrigin;
	Dem_GetDTCOfFreezeFrameRecord_Stub.DTCKind = DTCKind;
	Dem_GetDTCOfFreezeFrameRecord_Stub.DTC = DTC;
	if (Dem_GetDTCOfFreezeFrameRecord_Stub.Callout != NULL_PTR)
	{
		Dem_GetDTCOfFreezeFrameRecord_Stub.RetVal = Dem_GetDTCOfFreezeFrameRecord_Stub.Callout ();
	}
	return Dem_GetDTCOfFreezeFrameRecord_Stub.RetVal;
}

FUNC(Dem_ReturnGetFreezeFrameDataByDTCType, DEM_CODE) Dem_GetFreezeFrameDataByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	VAR(uint16, AUTOMATIC) DataId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize
)
{
	Dem_GetFreezeFrameDataByDTC_Stub.Count++;
	Dem_GetFreezeFrameDataByDTC_Stub.DTC = DTC;
	Dem_GetFreezeFrameDataByDTC_Stub.DTCKind = DTCKind;
	Dem_GetFreezeFrameDataByDTC_Stub.DTCOrigin = DTCOrigin;
	Dem_GetFreezeFrameDataByDTC_Stub.RecordNumber = RecordNumber;
	Dem_GetFreezeFrameDataByDTC_Stub.DataId = DataId;
	Dem_GetFreezeFrameDataByDTC_Stub.DestBuffer = DestBuffer;
	Dem_GetFreezeFrameDataByDTC_Stub.BufSize = BufSize;
	if (Dem_GetFreezeFrameDataByDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetFreezeFrameDataByDTC_Stub.RetVal = Dem_GetFreezeFrameDataByDTC_Stub.Callout ();
	}
	return Dem_GetFreezeFrameDataByDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetFreezeFrameDataIdentifierByDTCType, DEM_CODE) Dem_GetFreezeFrameDataIdentifierByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ArraySize,
	P2CONST(uint16, AUTOMATIC, DEM_APPL_CONST) DataId
)
{
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.Count++;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.DTC = DTC;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.DTCKind = DTCKind;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.DTCOrigin = DTCOrigin;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.RecordNumber = RecordNumber;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.ArraySize = ArraySize;
	Dem_GetFreezeFrameDataIdentifierByDTC_Stub.DataId = DataId;
	if (Dem_GetFreezeFrameDataIdentifierByDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetFreezeFrameDataIdentifierByDTC_Stub.RetVal = Dem_GetFreezeFrameDataIdentifierByDTC_Stub.Callout ();
	}
	return Dem_GetFreezeFrameDataIdentifierByDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetSizeOfFreezeFrameType, DEM_CODE) Dem_GetSizeOfFreezeFrame
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfFreezeFrame
)
{
	Dem_GetSizeOfFreezeFrame_Stub.Count++;
	Dem_GetSizeOfFreezeFrame_Stub.DTC = DTC;
	Dem_GetSizeOfFreezeFrame_Stub.DTCKind = DTCKind;
	Dem_GetSizeOfFreezeFrame_Stub.DTCOrigin = DTCOrigin;
	Dem_GetSizeOfFreezeFrame_Stub.RecordNumber = RecordNumber;
	Dem_GetSizeOfFreezeFrame_Stub.SizeOfFreezeFrame = SizeOfFreezeFrame;
	if (Dem_GetSizeOfFreezeFrame_Stub.Callout != NULL_PTR)
	{
		Dem_GetSizeOfFreezeFrame_Stub.RetVal = Dem_GetSizeOfFreezeFrame_Stub.Callout ();
	}
	return Dem_GetSizeOfFreezeFrame_Stub.RetVal;
}

FUNC(Dem_ReturnGetExtendedDataRecordByDTCType, DEM_CODE) Dem_GetExtendedDataRecordByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) ExtendedDataNumber,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize
)
{
	Dem_GetExtendedDataRecordByDTC_Stub.Count++;
	Dem_GetExtendedDataRecordByDTC_Stub.DTC = DTC;
	Dem_GetExtendedDataRecordByDTC_Stub.DTCKind = DTCKind;
	Dem_GetExtendedDataRecordByDTC_Stub.DTCOrigin = DTCOrigin;
	Dem_GetExtendedDataRecordByDTC_Stub.ExtendedDataNumber = ExtendedDataNumber;
	Dem_GetExtendedDataRecordByDTC_Stub.DestBuffer = DestBuffer;
	Dem_GetExtendedDataRecordByDTC_Stub.BufSize = BufSize;
	if (Dem_GetExtendedDataRecordByDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetExtendedDataRecordByDTC_Stub.RetVal = Dem_GetExtendedDataRecordByDTC_Stub.Callout ();
	}
	return Dem_GetExtendedDataRecordByDTC_Stub.RetVal;
}

FUNC(Dem_ReturnGetSizeOfExtendedDataRecordByDTCType, DEM_CODE) Dem_GetSizeOfExtendedDataRecordByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) ExtendedDataNumber,
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfExtendedDataRecord
)
{
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.Count++;
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.DTC = DTC;
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.DTCKind = DTCKind;
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.DTCOrigin = DTCOrigin;
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.ExtendedDataNumber = ExtendedDataNumber;
	Dem_GetSizeOfExtendedDataRecordByDTC_Stub.SizeOfExtendedDataRecord = SizeOfExtendedDataRecord;
	if (Dem_GetSizeOfExtendedDataRecordByDTC_Stub.Callout != NULL_PTR)
	{
		Dem_GetSizeOfExtendedDataRecordByDTC_Stub.RetVal = Dem_GetSizeOfExtendedDataRecordByDTC_Stub.Callout ();
	}
	return Dem_GetSizeOfExtendedDataRecordByDTC_Stub.RetVal;
}

FUNC(Dem_ReturnClearDTCType, DEM_CODE) Dem_ClearDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin
)
{
	Dem_ClearDTC_Stub.Count++;
	Dem_ClearDTC_Stub.DTC = DTC;
	Dem_ClearDTC_Stub.DTCKind = DTCKind;
	Dem_ClearDTC_Stub.DTCOrigin = DTCOrigin;
	if (Dem_ClearDTC_Stub.Callout != NULL_PTR)
	{
		Dem_ClearDTC_Stub.RetVal = Dem_ClearDTC_Stub.Callout ();
	}
	return Dem_ClearDTC_Stub.RetVal;
}

FUNC(Dem_ReturnControlDTCStorageType, DEM_CODE) Dem_DisableDTCStorage
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
)
{
	Dem_DisableDTCStorage_Stub.Count++;
	Dem_DisableDTCStorage_Stub.DTCGroup = DTCGroup;
	Dem_DisableDTCStorage_Stub.DTCKind = DTCKind;
	if (Dem_DisableDTCStorage_Stub.Callout != NULL_PTR)
	{
		Dem_DisableDTCStorage_Stub.RetVal = Dem_DisableDTCStorage_Stub.Callout ();
	}
	return Dem_DisableDTCStorage_Stub.RetVal;
}

FUNC(Dem_ReturnControlDTCStorageType, DEM_CODE) Dem_EnableDTCStorage
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
)
{
	Dem_EnableDTCStorage_Stub.Count++;
	Dem_EnableDTCStorage_Stub.DTCGroup = DTCGroup;
	Dem_EnableDTCStorage_Stub.DTCKind = DTCKind;
	if (Dem_EnableDTCStorage_Stub.Callout != NULL_PTR)
	{
		Dem_EnableDTCStorage_Stub.RetVal = Dem_EnableDTCStorage_Stub.Callout ();
	}
	return Dem_EnableDTCStorage_Stub.RetVal;
}

FUNC(Dem_ReturnControlEventUpdateType, DEM_CODE) Dem_DisableEventStatusUpdate
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
)
{
	Dem_DisableEventStatusUpdate_Stub.Count++;
	Dem_DisableEventStatusUpdate_Stub.DTCGroup = DTCGroup;
	Dem_DisableEventStatusUpdate_Stub.DTCKind = DTCKind;
	if (Dem_DisableEventStatusUpdate_Stub.Callout != NULL_PTR)
	{
		Dem_DisableEventStatusUpdate_Stub.RetVal = Dem_DisableEventStatusUpdate_Stub.Callout ();
	}
	return Dem_DisableEventStatusUpdate_Stub.RetVal;
}

FUNC(Dem_ReturnControlEventUpdateType, DEM_CODE) Dem_EnableEventStatusUpdate
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
)
{
	Dem_EnableEventStatusUpdate_Stub.Count++;
	Dem_EnableEventStatusUpdate_Stub.DTCGroup = DTCGroup;
	Dem_EnableEventStatusUpdate_Stub.DTCKind = DTCKind;
	if (Dem_EnableEventStatusUpdate_Stub.Callout != NULL_PTR)
	{
		Dem_EnableEventStatusUpdate_Stub.RetVal = Dem_EnableEventStatusUpdate_Stub.Callout ();
	}
	return Dem_EnableEventStatusUpdate_Stub.RetVal;
}

FUNC(void, DEM_CODE) Dem_MainFunction
(
	void
)
{
	Dem_MainFunction_Stub.Count++;
	if (Dem_MainFunction_Stub.Callout != NULL_PTR)
	{
		Dem_MainFunction_Stub.Callout ();
	}
}

#define DEM_STOP_SEC_CODE
#include <MemMap.h>

