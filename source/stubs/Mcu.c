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
#include <Mcu.h>

#define MCU_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(Mcu_Init_StubType, MCU_VAR)
		Mcu_Init_Stub = MCU_INIT_STUB_INIT;
VAR(Mcu_InitRamSection_StubType, MCU_VAR)
		Mcu_InitRamSection_Stub = MCU_INITRAMSECTION_STUB_INIT;
VAR(Mcu_InitClock_StubType, MCU_VAR)
		Mcu_InitClock_Stub = MCU_INITCLOCK_STUB_INIT;
VAR(Mcu_DistributePllClock_StubType, MCU_VAR)
		Mcu_DistributePllClock_Stub = MCU_DISTRIBUTEPLLCLOCK_STUB_INIT;
VAR(Mcu_GetPllStatus_StubType, MCU_VAR)
		Mcu_GetPllStatus_Stub = MCU_GETPLLSTATUS_STUB_INIT;
VAR(Mcu_GetResetReason_StubType, MCU_VAR)
		Mcu_GetResetReason_Stub = MCU_GETRESETREASON_STUB_INIT;
VAR(Mcu_GetResetRawValue_StubType, MCU_VAR)
		Mcu_GetResetRawValue_Stub = MCU_GETRESETRAWVALUE_STUB_INIT;
VAR(Mcu_PerformReset_StubType, MCU_VAR)
		Mcu_PerformReset_Stub = MCU_PERFORMRESET_STUB_INIT;
VAR(Mcu_SetMode_StubType, MCU_VAR)
		Mcu_SetMode_Stub = MCU_SETMODE_STUB_INIT;
VAR(Mcu_GetVersionInfo_StubType, MCU_VAR)
		Mcu_GetVersionInfo_Stub = MCU_GETVERSIONINFO_STUB_INIT;

#define MCU_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define MCU_START_SEC_CODE
#include <MemMap.h>

FUNC(void, MCU_CODE) Mcu_Init
(
	P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_CONST) ConfigPtr
)
{
	Mcu_Init_Stub.Count++;
	Mcu_Init_Stub.ConfigPtr = ConfigPtr;
	if (Mcu_Init_Stub.Callout != NULL_PTR)
	{
		Mcu_Init_Stub.Callout ();
	}
}

FUNC(Std_ReturnType, MCU_CODE) Mcu_InitRamSection
(
	VAR(Mcu_RamSectionType, AUTOMATIC) RamSection
)
{
	Mcu_InitRamSection_Stub.Count++;
	Mcu_InitRamSection_Stub.RamSection = RamSection;
	if (Mcu_InitRamSection_Stub.Callout != NULL_PTR)
	{
		Mcu_InitRamSection_Stub.RetVal = Mcu_InitRamSection_Stub.Callout ();
	}
	return Mcu_InitRamSection_Stub.RetVal;
}

FUNC(Std_ReturnType, MCU_CODE) Mcu_InitClock
(
	VAR(Mcu_ClockType, AUTOMATIC) ClockSetting
)
{
	Mcu_InitClock_Stub.Count++;
	Mcu_InitClock_Stub.ClockSetting = ClockSetting;
	if (Mcu_InitClock_Stub.Callout != NULL_PTR)
	{
		Mcu_InitClock_Stub.RetVal = Mcu_InitClock_Stub.Callout ();
	}
	return Mcu_InitClock_Stub.RetVal;
}

FUNC(void, MCU_CODE) Mcu_DistributePllClock
(
	void
)
{
	Mcu_DistributePllClock_Stub.Count++;
	if (Mcu_DistributePllClock_Stub.Callout != NULL_PTR)
	{
		Mcu_DistributePllClock_Stub.Callout ();
	}
}

FUNC(Mcu_PllStatusType, MCU_CODE) Mcu_GetPllStatus
(
	void
)
{
	Mcu_GetPllStatus_Stub.Count++;
	if (Mcu_GetPllStatus_Stub.Callout != NULL_PTR)
	{
		Mcu_GetPllStatus_Stub.RetVal = Mcu_GetPllStatus_Stub.Callout ();
	}
	return Mcu_GetPllStatus_Stub.RetVal;
}

FUNC(Mcu_ResetType, MCU_CODE) Mcu_GetResetReason
(
	void
)
{
	Mcu_GetResetReason_Stub.Count++;
	if (Mcu_GetResetReason_Stub.Callout != NULL_PTR)
	{
		Mcu_GetResetReason_Stub.RetVal = Mcu_GetResetReason_Stub.Callout ();
	}
	return Mcu_GetResetReason_Stub.RetVal;
}

FUNC(Mcu_RawResetType, MCU_CODE) Mcu_GetResetRawValue
(
	void
)
{
	Mcu_GetResetRawValue_Stub.Count++;
	if (Mcu_GetResetRawValue_Stub.Callout != NULL_PTR)
	{
		Mcu_GetResetRawValue_Stub.RetVal = Mcu_GetResetRawValue_Stub.Callout ();
	}
	return Mcu_GetResetRawValue_Stub.RetVal;
}

FUNC(void, MCU_CODE) Mcu_PerformReset
(
	void
)
{
	Mcu_PerformReset_Stub.Count++;
	if (Mcu_PerformReset_Stub.Callout != NULL_PTR)
	{
		Mcu_PerformReset_Stub.Callout ();
	}
}

FUNC(void, MCU_CODE) Mcu_SetMode
(
	VAR(Mcu_ModeType, AUTOMATIC) McuMode
)
{
	Mcu_SetMode_Stub.Count++;
	Mcu_SetMode_Stub.McuMode = McuMode;
	if (Mcu_SetMode_Stub.Callout != NULL_PTR)
	{
		Mcu_SetMode_Stub.Callout ();
	}
}

FUNC(void, MCU_CODE) Mcu_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, MCU_APPL_DATA) versioninfo
)
{
	Mcu_GetVersionInfo_Stub.Count++;
	Mcu_GetVersionInfo_Stub.versioninfo = versioninfo;
	if (Mcu_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		Mcu_GetVersionInfo_Stub.Callout ();
	}
}

#define MCU_STOP_SEC_CODE
#include <MemMap.h>

