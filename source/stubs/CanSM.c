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
#include <CanSM.h>
#include <CanSM_Cbk.h>

#define CANSM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(CanSM_Init_StubType, CANSM_VAR)
		CanSM_Init_Stub = CANSM_INIT_STUB_INIT;
VAR(CanSM_GetVersionInfo_StubType, CANSM_VAR)
		CanSM_GetVersionInfo_Stub = CANSM_GETVERSIONINFO_STUB_INIT;
VAR(CanSM_RequestComMode_StubType, CANSM_VAR)
		CanSM_RequestComMode_Stub = CANSM_REQUESTCOMMODE_STUB_INIT;
VAR(CanSM_GetCurrentComMode_StubType, CANSM_VAR)
		CanSM_GetCurrentComMode_Stub = CANSM_GETCURRENTCOMMODE_STUB_INIT;
VAR(CanSM_ControllerBusOff_StubType, CANSM_VAR)
		CanSM_ControllerBusOff_Stub = CANSM_CONTROLLERBUSOFF_STUB_INIT;

#define CANSM_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define CANSM_START_SEC_CODE
#include <MemMap.h>

FUNC(void, CANSM_CODE) CanSM_Init
(
	P2CONST(CanSM_ConfigType, AUTOMATIC, CANSM_APPL_CONST) ConfigPtr
)
{
	CanSM_Init_Stub.Count++;
	CanSM_Init_Stub.ConfigPtr = ConfigPtr;
	if (CanSM_Init_Stub.Callout != NULL_PTR)
	{
		CanSM_Init_Stub.Callout ();
	}
}

FUNC(void, CANSM_CODE) CanSM_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, CANSM_APPL_DATA) VersionInfo
)
{
	CanSM_GetVersionInfo_Stub.Count++;
	CanSM_GetVersionInfo_Stub.VersionInfo = VersionInfo;
	if (CanSM_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		CanSM_GetVersionInfo_Stub.Callout ();
	}
}

FUNC(Std_ReturnType, CANSM_CODE) CanSM_RequestComMode
(
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle,
	VAR(ComM_ModeType, AUTOMATIC) ComM_Mode
)
{
	CanSM_RequestComMode_Stub.Count++;
	CanSM_RequestComMode_Stub.NetworkHandle = NetworkHandle;
	CanSM_RequestComMode_Stub.ComM_Mode = ComM_Mode;
	if (CanSM_RequestComMode_Stub.Callout != NULL_PTR)
	{
		CanSM_RequestComMode_Stub.RetVal = CanSM_RequestComMode_Stub.Callout ();
	}
	return CanSM_RequestComMode_Stub.RetVal;
}

FUNC(Std_ReturnType, CANSM_CODE) CanSM_GetCurrentComMode
(
	VAR(NetworkHandleType, AUTOMATIC) NetworkHandle,
	P2VAR(ComM_ModeType, AUTOMATIC, CANSM_APPL_DATA) ComM_ModePtr
)
{
	CanSM_GetCurrentComMode_Stub.Count++;
	CanSM_GetCurrentComMode_Stub.NetworkHandle = NetworkHandle;
	CanSM_GetCurrentComMode_Stub.ComM_ModePtr = ComM_ModePtr;
	if (CanSM_GetCurrentComMode_Stub.Callout != NULL_PTR)
	{
		CanSM_GetCurrentComMode_Stub.RetVal = CanSM_GetCurrentComMode_Stub.Callout ();
	}
	return CanSM_GetCurrentComMode_Stub.RetVal;
}



/** \brief CanSM_ControllerBusOff() stub */
FUNC( void, CANSM_CODE ) CanSM_ControllerBusOff( uint8 Controller )
{
  CanSM_ControllerBusOff_Stub.Count++;
  CanSM_ControllerBusOff_Stub.Controller = Controller;
  if( CanSM_ControllerBusOff_Stub.Callout != NULL_PTR )
  {
    CanSM_ControllerBusOff_Stub.Callout( Controller );
  }
}

#define CANSM_STOP_SEC_CODE
#include <MemMap.h>

