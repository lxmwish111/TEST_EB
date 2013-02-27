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

#if (!defined CANSM_H)
#define CANSM_H

#include <Std_Types.h>
#include <ComM.h>

/* module administrative information */
#define CANSM_VENDOR_ID 0x01
#define CANSM_MODULE_ID 0         /* TODO: Fill in correct module ID */
#define CANSM_AR_MAJOR_VERSION 1  /* stub AR version is 3.0.0 for all stubs */
#define CANSM_AR_MINOR_VERSION 0
#define CANSM_AR_PATCH_VERSION 0
#define CANSM_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define CANSM_SW_MINOR_VERSION 0
#define CANSM_SW_PATCH_VERSION 0

/* error codes */
#define       CANSM_E_UNINIT                            0x01
#define       CANSM_E_PARAM_POINTER                     0x02
#define       CANSM_E_INVALID_NETWORK_HANDLE                          0x03
#define       CANSM_E_INVALID_NETWORK_MODE                            0x04
#define       PRODUCTION_ERROR                          0x00 /* TODO: Assign production error codes in DEM */

/* service IDs */
#define       CANSM_INIT_ID               0x00
#define       CANSM_GETVERSIONINFO_ID                   0x01
#define       CANSM_REQUESTCOMMODE_ID                   0x02
#define       CANSM_GETCURRENTCOMMODE_ID                0x03

/* initialisation definitions */
#define CANSM_INIT_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define CANSM_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define CANSM_REQUESTCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, 0 }
#define CANSM_GETCURRENTCOMMODE_STUB_INIT { 0, NULL_PTR , 0, 0, NULL_PTR }
#define CANSM_CONTROLLERBUSOFF_STUB_INIT { 0U, NULL_PTR, 0U }

typedef       uint8         CanSM_NetworkModeStateType;
typedef       uint8         CanSM_BusOffRecoveryStateType;

#define CANSM_UNINITED       ((CanSM_NetworkModeStateType)1)
#define CANSM_NO_COMMUNICATION             ((CanSM_NetworkModeStateType)2)
#define CANSM_SILENT_COMMUNICATION         ((CanSM_NetworkModeStateType)3)
#define CANSM_FULL_COMMUNICATION           ((CanSM_NetworkModeStateType)4)

#define CANSM_BOR_IDLE       ((CanSM_BusOffRecoveryStateType)1)
#define CANSM_BOR_CHECK      ((CanSM_BusOffRecoveryStateType)2)
#define CANSM_BOR_NO_BUS_OFF               ((CanSM_BusOffRecoveryStateType)3)
#define CANSM_BOR_TXOFF_L1   ((CanSM_BusOffRecoveryStateType)4)
#define CANSM_BOR_CHECK_L1   ((CanSM_BusOffRecoveryStateType)5)
#define CANSM_BOR_TXOFF_L2   ((CanSM_BusOffRecoveryStateType)6)
#define CANSM_BOR_CHECK_L2   ((CanSM_BusOffRecoveryStateType)7)


typedef struct {
	uint8 dummy; /* TODO: Fill appropriately! */
} CanSM_ConfigType;


typedef void(*CanSM_Init_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	CanSM_Init_CalloutType Callout;
	P2CONST(CanSM_ConfigType, AUTOMATIC, CANSM_APPL_CONST) ConfigPtr;
} CanSM_Init_StubType;

typedef void(*CanSM_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	CanSM_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC, CANSM_APPL_DATA) VersionInfo;
} CanSM_GetVersionInfo_StubType;

typedef Std_ReturnType(*CanSM_RequestComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	CanSM_RequestComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle;
	VAR(ComM_ModeType, AUTOMATIC) ComM_Mode;
} CanSM_RequestComMode_StubType;

typedef Std_ReturnType(*CanSM_GetCurrentComMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	CanSM_GetCurrentComMode_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle;
	P2VAR(ComM_ModeType, AUTOMATIC, CANSM_APPL_DATA) ComM_ModePtr;
} CanSM_GetCurrentComMode_StubType;

/** \brief Function pointer for CanSM_ControllerBusOff() stub */
typedef void (*CanSM_ControllerBusOff_CalloutType) ( uint8 Controller );
/** \brief Internal data for CanSM_ControllerBusOff() stub */
typedef struct
{
  uint32 Count;
  CanSM_ControllerBusOff_CalloutType Callout;
  uint8 Controller;
} CanSM_ControllerBusOff_StubType;

#define CANSM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(CanSM_Init_StubType,CANSM_VAR)
		CanSM_Init_Stub;
extern VAR(CanSM_GetVersionInfo_StubType,CANSM_VAR)
		CanSM_GetVersionInfo_Stub;
extern VAR(CanSM_RequestComMode_StubType,CANSM_VAR)
		CanSM_RequestComMode_Stub;
extern VAR(CanSM_GetCurrentComMode_StubType,CANSM_VAR)
		CanSM_GetCurrentComMode_Stub;
extern VAR(CanSM_ControllerBusOff_StubType, CANSM_VAR)
    CanSM_ControllerBusOff_Stub;

#define CANSM_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define CANSM_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, CANSM_CODE) CanSM_Init
(
	P2CONST(CanSM_ConfigType, AUTOMATIC, CANSM_APPL_CONST) ConfigPtr
);

extern FUNC(void, CANSM_CODE) CanSM_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, CANSM_APPL_DATA) VersionInfo
);

extern FUNC(Std_ReturnType, CANSM_CODE) CanSM_RequestComMode
(
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle,
	VAR(ComM_ModeType, AUTOMATIC) ComM_Mode
);

extern FUNC(Std_ReturnType, CANSM_CODE) CanSM_GetCurrentComMode
(
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle,
	P2VAR(ComM_ModeType, AUTOMATIC, CANSM_APPL_DATA) ComM_ModePtr
);

#define CANSM_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( CANSM_H ) */

