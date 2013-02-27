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

#if (!defined DEM_H)
#define DEM_H

#include <Std_Types.h>

/* Include Error Ids */
#include <Dem_IntErrId.h>

/* module administrative information */
#define DEM_VENDOR_ID 0x01
#define DEM_MODULE_ID 54U
#define DEM_AR_MAJOR_VERSION 3  /* stub AR version is 3.0.0 for all stubs */
#define DEM_AR_MINOR_VERSION 0
#define DEM_AR_PATCH_VERSION 0
#define DEM_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define DEM_SW_MINOR_VERSION 0
#define DEM_SW_PATCH_VERSION 0

/* error codes */
#define       DEM_E_PARAM_CONFIG                        0x10
#define       DEM_E_PARAM_ADDRESS                       0x11
#define       DEM_E_PARAM_DATA                          0x12
#define       DEM_E_PARAM_LENGTH                        0x13
#define       DEM_E_UNINIT                0x20
#define       DEM_E_NODATAAVAILABLE                     0x30

/* service IDs */
#define       DEM_GETVERSIONINFO_ID                     0x00
#define       DEM_PREINIT_ID                            0x01
#define       DEM_INIT_ID                 0x02
#define       DEM_SHUTDOWN_ID                           0x03
#define       DEM_SETEVENTSTATUS_ID                     0x04
#define       DEM_RESETEVENTSTATUS_ID                   0x05
#define       DEM_PRESTOREFREEZEFRAME_ID                0x06
#define       DEM_CLEARPRESTOREDFREEZEFRAME_ID                        0x07
#define       DEM_SETOPERATIONCYCLESTATE_ID                           0x08
#define       DEM_GETEVENTSTATUS_ID                     0x0a
#define       DEM_GETEVENTFAILED_ID                     0x0b
#define       DEM_GETEVENTTESTED_ID                     0x0c
#define       DEM_GETDTCOFEVENT_ID                      0x0d
#define       DEM_SETVALUEBYOEMID_ID                    0x38
#define       DEM_SETENABLECONDITION_ID                 0x39
#define       DEM_GETFAULTDETECTIONCOUNTER_ID                         0x3e
#define       DEM_GETINDICATORSTATUS_ID                 0x29
#define       DEM_REPORTERRORSTATUS_ID                  0x0f
#define       DEM_SETDTCFILTER_ID                       0x13
#define       DEM_SETDTCFILTERFORRECORDS_ID                           0x3f
#define       DEM_SETVIEWFILTER_ID                      0x14
#define       DEM_GETSTATUSOFDTC_ID                     0x15
#define       DEM_GETDTCSTATUSAVAILABILITYMASK_ID                     0x16
#define       DEM_GETNUMBEROFFILTEREDDTC_ID                           0x17
#define       DEM_GETNEXTFILTEREDDTC_ID                 0x18
#define       DEM_GETDTCBYOCCURRENCETIME_ID                           0x19
#define       DEM_GETVIEWIDOFDTC_ID                     0x36
#define       DEM_GETNEXTFILTEREDRECORD_ID                            0x3a
#define       DEM_GETNEXTFILTEREDDTCANDFDC_ID                         0x3b
#define       DEM_GETNEXTFILTEREDDTCANDSEVERITY_ID                    0x3d
#define       DEM_GETTRANSLATIONTYPE_ID                 0x3c
#define       DEM_GETSEVERITYOFDTC_ID                   0x0e
#define       DEM_DISABLEDTCRECORDUPDATE_ID                           0x1a
#define       DEM_ENABLEDTCRECORDUPDATE_ID                            0x1b
#define       DEM_GETDTCOFFREEZEFRAMERECORD_ID                        0x1c
#define       DEM_GETFREEZEFRAMEDATABYDTC_ID                          0x1d
#define       DEM_GETFREEZEFRAMEDATAIDENTIFIERBYDTC_ID                0x1e
#define       DEM_GETSIZEOFFREEZEFRAME_ID               0x1f
#define       DEM_GETEXTENDEDDATARECORDBYDTC_ID                       0x20
#define       DEM_GETSIZEOFEXTENDEDDATARECORDBYDTC_ID                 0x21
#define       DEM_CLEARDTC_ID                           0x22
#define       DEM_DISABLEDTCSTORAGE_ID                  0x24
#define       DEM_ENABLEDTCSTORAGE_ID                   0x25
#define       DEM_DISABLEEVENTSTATUSUPDATE_ID                         0x26
#define       DEM_ENABLEEVENTSTATUSUPDATE_ID                          0x27
#define       DEM_MAINFUNCTION_ID                       0x55

/* event status */
#define       DEM_EVENT_STATUS_PASSED                   0x00
#define       DEM_EVENT_STATUS_FAILED                   0x01
#define       DEM_EVENT_STATUS_PREPASSED                0x02
#define       DEM_EVENT_STATUS_PREFAILED                0x03

/* initialisation definitions */
#define DEM_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define DEM_PREINIT_STUB_INIT { 0, NULL_PTR }
#define DEM_INIT_STUB_INIT { 0, NULL_PTR }
#define DEM_SHUTDOWN_STUB_INIT { 0, NULL_PTR }
#define DEM_SETEVENTSTATUS_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_RESETEVENTSTATUS_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DEM_PRESTOREFREEZEFRAME_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DEM_CLEARPRESTOREDFREEZEFRAME_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DEM_SETOPERATIONCYCLESTATE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_GETEVENTSTATUS_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_GETEVENTFAILED_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_GETEVENTTESTED_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_GETDTCOFEVENT_STUB_INIT { 0, NULL_PTR , 0, 0, 0, NULL_PTR }
#define DEM_SETVALUEBYOEMID_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR, 0 }
#define DEM_SETENABLECONDITION_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_GETFAULTDETECTIONCOUNTER_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_GETINDICATORSTATUS_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_REPORTERRORSTATUS_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define DEM_SETDTCFILTER_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, 0, 0 }
#define DEM_SETDTCFILTERFORRECORDS_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define DEM_SETVIEWFILTER_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DEM_GETSTATUSOFDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, NULL_PTR }
#define DEM_GETDTCSTATUSAVAILABILITYMASK_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define DEM_GETNUMBEROFFILTEREDDTC_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define DEM_GETNEXTFILTEREDDTC_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR, NULL_PTR }
#define DEM_GETDTCBYOCCURRENCETIME_STUB_INIT { 0, NULL_PTR , 0, 0, 0, NULL_PTR }
#define DEM_GETVIEWIDOFDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, NULL_PTR }
#define DEM_GETNEXTFILTEREDRECORD_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR, NULL_PTR }
#define DEM_GETNEXTFILTEREDDTCANDFDC_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR, NULL_PTR }
#define DEM_GETNEXTFILTEREDDTCANDSEVERITY_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR }
#define DEM_GETTRANSLATIONTYPE_STUB_INIT { 0, NULL_PTR , 0 }
#define DEM_GETSEVERITYOFDTC_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define DEM_DISABLEDTCRECORDUPDATE_STUB_INIT { 0, NULL_PTR , 0 }
#define DEM_ENABLEDTCRECORDUPDATE_STUB_INIT { 0, NULL_PTR , 0 }
#define DEM_GETDTCOFFREEZEFRAMERECORD_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, NULL_PTR }
#define DEM_GETFREEZEFRAMEDATABYDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, 0, NULL_PTR, NULL_PTR }
#define DEM_GETFREEZEFRAMEDATAIDENTIFIERBYDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, NULL_PTR, NULL_PTR }
#define DEM_GETSIZEOFFREEZEFRAME_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, NULL_PTR }
#define DEM_GETEXTENDEDDATARECORDBYDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, NULL_PTR, NULL_PTR }
#define DEM_GETSIZEOFEXTENDEDDATARECORDBYDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0, 0, NULL_PTR }
#define DEM_CLEARDTC_STUB_INIT { 0, NULL_PTR , 0, 0, 0, 0 }
#define DEM_DISABLEDTCSTORAGE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_ENABLEDTCSTORAGE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_DISABLEEVENTSTATUSUPDATE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_ENABLEEVENTSTATUSUPDATE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define DEM_MAINFUNCTION_STUB_INIT { 0, NULL_PTR }




typedef       uint8 /* TODO: chose data type from uint8,uint16 */                   Dem_EventIdType             ;
typedef       uint8                       Dem_EventStatusType;
typedef       uint8                       Dem_ReturnSetDTCFilterType  ;
typedef       uint8                       Dem_ReturnSetViewFilterType ;
typedef       uint8                       Dem_ReturnGetStatusOfDTCType              ;
typedef       uint8                       Dem_ReturnGetNextFilteredDTCType          ;
typedef       uint8                       Dem_ReturnGetNumberOfFilteredDTCType      ;
typedef       uint8                       Dem_ReturnClearDTCType      ;
typedef       uint8                       Dem_ReturnControlDTCStorageType           ;
typedef       uint8                       Dem_ReturnControlEventUpdateType          ;
typedef       uint8                       Dem_ReturnGetDTCOfFreezeFrameRecordType   ;
typedef       uint8                       Dem_ReturnGetFreezeFrameDataIdentifierByDTCType         ;
typedef       uint8                       Dem_ReturnGetExtendedDataRecordByDTCType  ;
typedef       uint8                       Dem_ReturnGetDTCByOccurrenceTimeType      ;
typedef       uint8                       Dem_ReturnGetFreezeFrameDataByDTCType     ;
typedef       uint8                       Dem_ReturnGetSizeOfExtendedDataRecordByDTCType          ;
typedef       uint8                       Dem_ReturnGetSizeOfFreezeFrameType        ;
typedef       uint8                       Dem_ReturnGetSeverityOfDTCType            ;
typedef       uint8                       Dem_ReturnGetViewIDOfDTCType              ;

typedef void(*Dem_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC, DEM_APPL_DATA) versioninfo;
} Dem_GetVersionInfo_StubType;

typedef void(*Dem_PreInit_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_PreInit_CalloutType Callout;
} Dem_PreInit_StubType;

typedef void(*Dem_Init_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_Init_CalloutType Callout;
} Dem_Init_StubType;

typedef void(*Dem_Shutdown_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_Shutdown_CalloutType Callout;
} Dem_Shutdown_StubType;

typedef Std_ReturnType(*Dem_SetEventStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetEventStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	VAR(uint8, AUTOMATIC) EventStatus;
} Dem_SetEventStatus_StubType;

typedef Std_ReturnType(*Dem_ResetEventStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_ResetEventStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
} Dem_ResetEventStatus_StubType;

typedef Std_ReturnType(*Dem_PrestoreFreezeFrame_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_PrestoreFreezeFrame_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
} Dem_PrestoreFreezeFrame_StubType;

typedef Std_ReturnType(*Dem_ClearPrestoredFreezeFrame_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_ClearPrestoredFreezeFrame_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
} Dem_ClearPrestoredFreezeFrame_StubType;

typedef Std_ReturnType(*Dem_SetOperationCycleState_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetOperationCycleState_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) OperationCycleId;
	VAR(uint8, AUTOMATIC) CycleState;
} Dem_SetOperationCycleState_StubType;

typedef Std_ReturnType(*Dem_GetEventStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetEventStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) EventStatusExtended;
} Dem_GetEventStatus_StubType;

typedef Std_ReturnType(*Dem_GetEventFailed_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetEventFailed_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventFailed;
} Dem_GetEventFailed_StubType;

typedef Std_ReturnType(*Dem_GetEventTested_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetEventTested_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventTested;
} Dem_GetEventTested_StubType;

typedef Std_ReturnType(*Dem_GetDTCOfEvent_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetDTCOfEvent_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	VAR(uint8, AUTOMATIC) DTCKind;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTCOfEvent;
} Dem_GetDTCOfEvent_StubType;

typedef Std_ReturnType(*Dem_SetValueByOemId_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetValueByOemId_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(uint16, AUTOMATIC) OemID;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DataValue;
	VAR(uint8, AUTOMATIC) BufferLength;
} Dem_SetValueByOemId_StubType;

typedef Std_ReturnType(*Dem_SetEnableCondition_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetEnableCondition_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) EnableConditionID;
	VAR(boolean, AUTOMATIC) ConditionFulfilled;
} Dem_SetEnableCondition_StubType;

typedef Std_ReturnType(*Dem_GetFaultDetectionCounter_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetFaultDetectionCounter_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) EventIdFaultDetectionCounter;
} Dem_GetFaultDetectionCounter_StubType;

typedef Std_ReturnType(*Dem_GetIndicatorStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetIndicatorStatus_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) IndicatorId;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) IndicatorStatus;
} Dem_GetIndicatorStatus_StubType;

typedef void(*Dem_ReportErrorStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_ReportErrorStatus_CalloutType Callout;
	VAR(Dem_EventIdType, AUTOMATIC) EventId;
	VAR(uint8, AUTOMATIC) EventStatus;
} Dem_ReportErrorStatus_StubType;

typedef Dem_ReturnSetDTCFilterType(*Dem_SetDTCFilter_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetDTCFilter_CalloutType Callout;
	VAR(Dem_ReturnSetDTCFilterType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) DTCStatusMask;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) FilterWithSeverity;
	VAR(uint8, AUTOMATIC) DTCSeverity;
	VAR(uint8, AUTOMATIC) FilterForFaultDetectionCounter;
} Dem_SetDTCFilter_StubType;

typedef Dem_ReturnSetDTCFilterType(*Dem_SetDTCFilterForRecords_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetDTCFilterForRecords_CalloutType Callout;
	VAR(Dem_ReturnSetDTCFilterType, AUTOMATIC) RetVal;
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredRecords;
} Dem_SetDTCFilterForRecords_StubType;

typedef Dem_ReturnSetViewFilterType(*Dem_SetViewFilter_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_SetViewFilter_CalloutType Callout;
	VAR(Dem_ReturnSetViewFilterType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) ViewId;
} Dem_SetViewFilter_StubType;

typedef Dem_ReturnGetStatusOfDTCType(*Dem_GetStatusOfDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetStatusOfDTC_CalloutType Callout;
	VAR(Dem_ReturnGetStatusOfDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus;
} Dem_GetStatusOfDTC_StubType;

typedef Std_ReturnType(*Dem_GetDTCStatusAvailabilityMask_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetDTCStatusAvailabilityMask_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatusMask;
} Dem_GetDTCStatusAvailabilityMask_StubType;

typedef Dem_ReturnGetNumberOfFilteredDTCType(*Dem_GetNumberOfFilteredDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetNumberOfFilteredDTC_CalloutType Callout;
	VAR(Dem_ReturnGetNumberOfFilteredDTCType, AUTOMATIC) RetVal;
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredDTC;
} Dem_GetNumberOfFilteredDTC_StubType;

typedef Dem_ReturnGetNextFilteredDTCType(*Dem_GetNextFilteredDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetNextFilteredDTC_CalloutType Callout;
	VAR(Dem_ReturnGetNextFilteredDTCType, AUTOMATIC) RetVal;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus;
} Dem_GetNextFilteredDTC_StubType;

typedef Dem_ReturnGetDTCByOccurrenceTimeType(*Dem_GetDTCByOccurrenceTime_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetDTCByOccurrenceTime_CalloutType Callout;
	VAR(Dem_ReturnGetDTCByOccurrenceTimeType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) DTCRequest;
	VAR(uint8, AUTOMATIC) DTCKind;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
} Dem_GetDTCByOccurrenceTime_StubType;

typedef Dem_ReturnGetViewIDOfDTCType(*Dem_GetViewIDOfDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetViewIDOfDTC_CalloutType Callout;
	VAR(Dem_ReturnGetViewIDOfDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ViewId;
} Dem_GetViewIDOfDTC_StubType;

typedef Dem_ReturnGetNextFilteredDTCType(*Dem_GetNextFilteredRecord_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetNextFilteredRecord_CalloutType Callout;
	VAR(Dem_ReturnGetNextFilteredDTCType, AUTOMATIC) RetVal;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) SnapshotRecord;
} Dem_GetNextFilteredRecord_StubType;

typedef Dem_ReturnGetNextFilteredDTCType(*Dem_GetNextFilteredDTCAndFDC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetNextFilteredDTCAndFDC_CalloutType Callout;
	VAR(Dem_ReturnGetNextFilteredDTCType, AUTOMATIC) RetVal;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) DTCFaultDetectionCounter;
} Dem_GetNextFilteredDTCAndFDC_StubType;

typedef Dem_ReturnGetNextFilteredDTCType(*Dem_GetNextFilteredDTCAndSeverity_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetNextFilteredDTCAndSeverity_CalloutType Callout;
	VAR(Dem_ReturnGetNextFilteredDTCType, AUTOMATIC) RetVal;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCFunctionalUnit;
} Dem_GetNextFilteredDTCAndSeverity_StubType;

typedef uint8(*Dem_GetTranslationType_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetTranslationType_CalloutType Callout;
	VAR(uint8, AUTOMATIC) RetVal;
} Dem_GetTranslationType_StubType;

typedef Dem_ReturnGetSeverityOfDTCType(*Dem_GetSeverityOfDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetSeverityOfDTC_CalloutType Callout;
	VAR(Dem_ReturnGetSeverityOfDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity;
} Dem_GetSeverityOfDTC_StubType;

typedef Std_ReturnType(*Dem_DisableDTCRecordUpdate_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_DisableDTCRecordUpdate_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
} Dem_DisableDTCRecordUpdate_StubType;

typedef Std_ReturnType(*Dem_EnableDTCRecordUpdate_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_EnableDTCRecordUpdate_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
} Dem_EnableDTCRecordUpdate_StubType;

typedef Dem_ReturnGetDTCOfFreezeFrameRecordType(*Dem_GetDTCOfFreezeFrameRecord_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetDTCOfFreezeFrameRecord_CalloutType Callout;
	VAR(Dem_ReturnGetDTCOfFreezeFrameRecordType, AUTOMATIC) RetVal;
	VAR(uint8, AUTOMATIC) RecordNumber;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) DTCKind;
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC;
} Dem_GetDTCOfFreezeFrameRecord_StubType;

typedef Dem_ReturnGetFreezeFrameDataByDTCType(*Dem_GetFreezeFrameDataByDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetFreezeFrameDataByDTC_CalloutType Callout;
	VAR(Dem_ReturnGetFreezeFrameDataByDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) RecordNumber;
	VAR(uint16, AUTOMATIC) DataId;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize;
} Dem_GetFreezeFrameDataByDTC_StubType;

typedef Dem_ReturnGetFreezeFrameDataIdentifierByDTCType(*Dem_GetFreezeFrameDataIdentifierByDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetFreezeFrameDataIdentifierByDTC_CalloutType Callout;
	VAR(Dem_ReturnGetFreezeFrameDataIdentifierByDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) RecordNumber;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ArraySize;
	P2CONST(uint16, AUTOMATIC, DEM_APPL_CONST) DataId;
} Dem_GetFreezeFrameDataIdentifierByDTC_StubType;

typedef Dem_ReturnGetSizeOfFreezeFrameType(*Dem_GetSizeOfFreezeFrame_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetSizeOfFreezeFrame_CalloutType Callout;
	VAR(Dem_ReturnGetSizeOfFreezeFrameType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) RecordNumber;
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfFreezeFrame;
} Dem_GetSizeOfFreezeFrame_StubType;

typedef Dem_ReturnGetExtendedDataRecordByDTCType(*Dem_GetExtendedDataRecordByDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetExtendedDataRecordByDTC_CalloutType Callout;
	VAR(Dem_ReturnGetExtendedDataRecordByDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) ExtendedDataNumber;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer;
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize;
} Dem_GetExtendedDataRecordByDTC_StubType;

typedef Dem_ReturnGetSizeOfExtendedDataRecordByDTCType(*Dem_GetSizeOfExtendedDataRecordByDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_GetSizeOfExtendedDataRecordByDTC_CalloutType Callout;
	VAR(Dem_ReturnGetSizeOfExtendedDataRecordByDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
	VAR(uint8, AUTOMATIC) ExtendedDataNumber;
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfExtendedDataRecord;
} Dem_GetSizeOfExtendedDataRecordByDTC_StubType;

typedef Dem_ReturnClearDTCType(*Dem_ClearDTC_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_ClearDTC_CalloutType Callout;
	VAR(Dem_ReturnClearDTCType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTC;
	VAR(uint8, AUTOMATIC) DTCKind;
	VAR(uint8, AUTOMATIC) DTCOrigin;
} Dem_ClearDTC_StubType;

typedef Dem_ReturnControlDTCStorageType(*Dem_DisableDTCStorage_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_DisableDTCStorage_CalloutType Callout;
	VAR(Dem_ReturnControlDTCStorageType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTCGroup;
	VAR(uint8, AUTOMATIC) DTCKind;
} Dem_DisableDTCStorage_StubType;

typedef Dem_ReturnControlDTCStorageType(*Dem_EnableDTCStorage_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_EnableDTCStorage_CalloutType Callout;
	VAR(Dem_ReturnControlDTCStorageType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTCGroup;
	VAR(uint8, AUTOMATIC) DTCKind;
} Dem_EnableDTCStorage_StubType;

typedef Dem_ReturnControlEventUpdateType(*Dem_DisableEventStatusUpdate_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_DisableEventStatusUpdate_CalloutType Callout;
	VAR(Dem_ReturnControlEventUpdateType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTCGroup;
	VAR(uint8, AUTOMATIC) DTCKind;
} Dem_DisableEventStatusUpdate_StubType;

typedef Dem_ReturnControlEventUpdateType(*Dem_EnableEventStatusUpdate_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_EnableEventStatusUpdate_CalloutType Callout;
	VAR(Dem_ReturnControlEventUpdateType, AUTOMATIC) RetVal;
	VAR(uint32, AUTOMATIC) DTCGroup;
	VAR(uint8, AUTOMATIC) DTCKind;
} Dem_EnableEventStatusUpdate_StubType;

typedef void(*Dem_MainFunction_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dem_MainFunction_CalloutType Callout;
} Dem_MainFunction_StubType;

#define DEM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(Dem_GetVersionInfo_StubType,DEM_VAR)
		Dem_GetVersionInfo_Stub;
extern VAR(Dem_PreInit_StubType,DEM_VAR)
		Dem_PreInit_Stub;
extern VAR(Dem_Init_StubType,DEM_VAR)
		Dem_Init_Stub;
extern VAR(Dem_Shutdown_StubType,DEM_VAR)
		Dem_Shutdown_Stub;
extern VAR(Dem_SetEventStatus_StubType,DEM_VAR)
		Dem_SetEventStatus_Stub;
extern VAR(Dem_ResetEventStatus_StubType,DEM_VAR)
		Dem_ResetEventStatus_Stub;
extern VAR(Dem_PrestoreFreezeFrame_StubType,DEM_VAR)
		Dem_PrestoreFreezeFrame_Stub;
extern VAR(Dem_ClearPrestoredFreezeFrame_StubType,DEM_VAR)
		Dem_ClearPrestoredFreezeFrame_Stub;
extern VAR(Dem_SetOperationCycleState_StubType,DEM_VAR)
		Dem_SetOperationCycleState_Stub;
extern VAR(Dem_GetEventStatus_StubType,DEM_VAR)
		Dem_GetEventStatus_Stub;
extern VAR(Dem_GetEventFailed_StubType,DEM_VAR)
		Dem_GetEventFailed_Stub;
extern VAR(Dem_GetEventTested_StubType,DEM_VAR)
		Dem_GetEventTested_Stub;
extern VAR(Dem_GetDTCOfEvent_StubType,DEM_VAR)
		Dem_GetDTCOfEvent_Stub;
extern VAR(Dem_SetValueByOemId_StubType,DEM_VAR)
		Dem_SetValueByOemId_Stub;
extern VAR(Dem_SetEnableCondition_StubType,DEM_VAR)
		Dem_SetEnableCondition_Stub;
extern VAR(Dem_GetFaultDetectionCounter_StubType,DEM_VAR)
		Dem_GetFaultDetectionCounter_Stub;
extern VAR(Dem_GetIndicatorStatus_StubType,DEM_VAR)
		Dem_GetIndicatorStatus_Stub;
extern VAR(Dem_ReportErrorStatus_StubType,DEM_VAR)
		Dem_ReportErrorStatus_Stub;
extern VAR(Dem_SetDTCFilter_StubType,DEM_VAR)
		Dem_SetDTCFilter_Stub;
extern VAR(Dem_SetDTCFilterForRecords_StubType,DEM_VAR)
		Dem_SetDTCFilterForRecords_Stub;
extern VAR(Dem_SetViewFilter_StubType,DEM_VAR)
		Dem_SetViewFilter_Stub;
extern VAR(Dem_GetStatusOfDTC_StubType,DEM_VAR)
		Dem_GetStatusOfDTC_Stub;
extern VAR(Dem_GetDTCStatusAvailabilityMask_StubType,DEM_VAR)
		Dem_GetDTCStatusAvailabilityMask_Stub;
extern VAR(Dem_GetNumberOfFilteredDTC_StubType,DEM_VAR)
		Dem_GetNumberOfFilteredDTC_Stub;
extern VAR(Dem_GetNextFilteredDTC_StubType,DEM_VAR)
		Dem_GetNextFilteredDTC_Stub;
extern VAR(Dem_GetDTCByOccurrenceTime_StubType,DEM_VAR)
		Dem_GetDTCByOccurrenceTime_Stub;
extern VAR(Dem_GetViewIDOfDTC_StubType,DEM_VAR)
		Dem_GetViewIDOfDTC_Stub;
extern VAR(Dem_GetNextFilteredRecord_StubType,DEM_VAR)
		Dem_GetNextFilteredRecord_Stub;
extern VAR(Dem_GetNextFilteredDTCAndFDC_StubType,DEM_VAR)
		Dem_GetNextFilteredDTCAndFDC_Stub;
extern VAR(Dem_GetNextFilteredDTCAndSeverity_StubType,DEM_VAR)
		Dem_GetNextFilteredDTCAndSeverity_Stub;
extern VAR(Dem_GetTranslationType_StubType,DEM_VAR)
		Dem_GetTranslationType_Stub;
extern VAR(Dem_GetSeverityOfDTC_StubType,DEM_VAR)
		Dem_GetSeverityOfDTC_Stub;
extern VAR(Dem_DisableDTCRecordUpdate_StubType,DEM_VAR)
		Dem_DisableDTCRecordUpdate_Stub;
extern VAR(Dem_EnableDTCRecordUpdate_StubType,DEM_VAR)
		Dem_EnableDTCRecordUpdate_Stub;
extern VAR(Dem_GetDTCOfFreezeFrameRecord_StubType,DEM_VAR)
		Dem_GetDTCOfFreezeFrameRecord_Stub;
extern VAR(Dem_GetFreezeFrameDataByDTC_StubType,DEM_VAR)
		Dem_GetFreezeFrameDataByDTC_Stub;
extern VAR(Dem_GetFreezeFrameDataIdentifierByDTC_StubType,DEM_VAR)
		Dem_GetFreezeFrameDataIdentifierByDTC_Stub;
extern VAR(Dem_GetSizeOfFreezeFrame_StubType,DEM_VAR)
		Dem_GetSizeOfFreezeFrame_Stub;
extern VAR(Dem_GetExtendedDataRecordByDTC_StubType,DEM_VAR)
		Dem_GetExtendedDataRecordByDTC_Stub;
extern VAR(Dem_GetSizeOfExtendedDataRecordByDTC_StubType,DEM_VAR)
		Dem_GetSizeOfExtendedDataRecordByDTC_Stub;
extern VAR(Dem_ClearDTC_StubType,DEM_VAR)
		Dem_ClearDTC_Stub;
extern VAR(Dem_DisableDTCStorage_StubType,DEM_VAR)
		Dem_DisableDTCStorage_Stub;
extern VAR(Dem_EnableDTCStorage_StubType,DEM_VAR)
		Dem_EnableDTCStorage_Stub;
extern VAR(Dem_DisableEventStatusUpdate_StubType,DEM_VAR)
		Dem_DisableEventStatusUpdate_Stub;
extern VAR(Dem_EnableEventStatusUpdate_StubType,DEM_VAR)
		Dem_EnableEventStatusUpdate_Stub;
extern VAR(Dem_MainFunction_StubType, DEM_VAR)
		Dem_MainFunction_Stub;

#define DEM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define DEM_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, DEM_CODE) Dem_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, DEM_APPL_DATA) versioninfo
);

extern FUNC(void, DEM_CODE) Dem_PreInit
(
	void
);

extern FUNC(void, DEM_CODE) Dem_Init
(
	void
);

extern FUNC(void, DEM_CODE) Dem_Shutdown
(
	void
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) EventStatus
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_ResetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_PrestoreFreezeFrame
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_ClearPrestoredFreezeFrame
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetOperationCycleState
(
	VAR(uint8, AUTOMATIC) OperationCycleId,
	VAR(uint8, AUTOMATIC) CycleState
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) EventStatusExtended
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventFailed
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventFailed
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventTested
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) EventTested
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTCOfEvent
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetValueByOemId
(
	VAR(uint16, AUTOMATIC) OemID,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DataValue,
	VAR(uint8, AUTOMATIC) BufferLength
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetEnableCondition
(
	VAR(uint8, AUTOMATIC) EnableConditionID,
	VAR(boolean, AUTOMATIC) ConditionFulfilled
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetFaultDetectionCounter
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) EventIdFaultDetectionCounter
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetIndicatorStatus
(
	VAR(uint8, AUTOMATIC) IndicatorId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) IndicatorStatus
);

extern FUNC(void, DEM_CODE) Dem_ReportErrorStatus
(
	VAR(Dem_EventIdType, AUTOMATIC) EventId,
	VAR(uint8, AUTOMATIC) EventStatus
);

extern FUNC(Dem_ReturnSetDTCFilterType, DEM_CODE) Dem_SetDTCFilter
(
	VAR(uint8, AUTOMATIC) DTCStatusMask,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) FilterWithSeverity,
	VAR(uint8, AUTOMATIC) DTCSeverity,
	VAR(uint8, AUTOMATIC) FilterForFaultDetectionCounter
);

extern FUNC(Dem_ReturnSetDTCFilterType, DEM_CODE) Dem_SetDTCFilterForRecords
(
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredRecords
);

extern FUNC(Dem_ReturnSetViewFilterType, DEM_CODE) Dem_SetViewFilter
(
	VAR(uint8, AUTOMATIC) ViewId
);

extern FUNC(Dem_ReturnGetStatusOfDTCType, DEM_CODE) Dem_GetStatusOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCStatusAvailabilityMask
(
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatusMask
);

extern FUNC(Dem_ReturnGetNumberOfFilteredDTCType, DEM_CODE) Dem_GetNumberOfFilteredDTC
(
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) NumberOfFilteredDTC
);

extern FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTC
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus
);

extern FUNC(Dem_ReturnGetDTCByOccurrenceTimeType, DEM_CODE) Dem_GetDTCByOccurrenceTime
(
	VAR(uint8, AUTOMATIC) DTCRequest,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC
);

extern FUNC(Dem_ReturnGetViewIDOfDTCType, DEM_CODE) Dem_GetViewIDOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ViewId
);

extern FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredRecord
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) SnapshotRecord
);

extern FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTCAndFDC
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) DTCFaultDetectionCounter
);

extern FUNC(Dem_ReturnGetNextFilteredDTCType, DEM_CODE) Dem_GetNextFilteredDTCAndSeverity
(
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCStatus,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCFunctionalUnit
);

extern FUNC(uint8, DEM_CODE) Dem_GetTranslationType
(
	void
);

extern FUNC(Dem_ReturnGetSeverityOfDTCType, DEM_CODE) Dem_GetSeverityOfDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DTCSeverity
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_DisableDTCRecordUpdate
(
	void
);

extern FUNC(Std_ReturnType, DEM_CODE) Dem_EnableDTCRecordUpdate
(
	void
);

extern FUNC(Dem_ReturnGetDTCOfFreezeFrameRecordType, DEM_CODE) Dem_GetDTCOfFreezeFrameRecord
(
	VAR(uint8, AUTOMATIC) RecordNumber,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) DTCKind,
	P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTC
);

extern FUNC(Dem_ReturnGetFreezeFrameDataByDTCType, DEM_CODE) Dem_GetFreezeFrameDataByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	VAR(uint16, AUTOMATIC) DataId,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize
);

extern FUNC(Dem_ReturnGetFreezeFrameDataIdentifierByDTCType, DEM_CODE) Dem_GetFreezeFrameDataIdentifierByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) ArraySize,
	P2CONST(uint16, AUTOMATIC, DEM_APPL_CONST) DataId
);

extern FUNC(Dem_ReturnGetSizeOfFreezeFrameType, DEM_CODE) Dem_GetSizeOfFreezeFrame
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) RecordNumber,
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfFreezeFrame
);

extern FUNC(Dem_ReturnGetExtendedDataRecordByDTCType, DEM_CODE) Dem_GetExtendedDataRecordByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) ExtendedDataNumber,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) DestBuffer,
	P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) BufSize
);

extern FUNC(Dem_ReturnGetSizeOfExtendedDataRecordByDTCType, DEM_CODE) Dem_GetSizeOfExtendedDataRecordByDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin,
	VAR(uint8, AUTOMATIC) ExtendedDataNumber,
	P2VAR(uint16, AUTOMATIC, DEM_APPL_DATA) SizeOfExtendedDataRecord
);

extern FUNC(Dem_ReturnClearDTCType, DEM_CODE) Dem_ClearDTC
(
	VAR(uint32, AUTOMATIC) DTC,
	VAR(uint8, AUTOMATIC) DTCKind,
	VAR(uint8, AUTOMATIC) DTCOrigin
);

extern FUNC(Dem_ReturnControlDTCStorageType, DEM_CODE) Dem_DisableDTCStorage
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
);

extern FUNC(Dem_ReturnControlDTCStorageType, DEM_CODE) Dem_EnableDTCStorage
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
);

extern FUNC(Dem_ReturnControlEventUpdateType, DEM_CODE) Dem_DisableEventStatusUpdate
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
);

extern FUNC(Dem_ReturnControlEventUpdateType, DEM_CODE) Dem_EnableEventStatusUpdate
(
	VAR(uint32, AUTOMATIC) DTCGroup,
	VAR(uint8, AUTOMATIC) DTCKind
);

extern FUNC(void, DEM_CODE) Dem_MainFunction
(
	void
);

#define DEM_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( DEM_H ) */

