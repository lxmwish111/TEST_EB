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

#if (!defined MCU_H)
#define MCU_H

#include <Std_Types.h>

/* module administrative information */
#define MCU_VENDOR_ID 0x01
#define MCU_MODULE_ID 0         /* TODO: Fill in correct module ID */
#define MCU_AR_MAJOR_VERSION 2  /* stub AR version is 3.0.0 for all stubs */
#define MCU_AR_MINOR_VERSION 2
#define MCU_AR_PATCH_VERSION 1
#define MCU_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define MCU_SW_MINOR_VERSION 0
#define MCU_SW_PATCH_VERSION 0

/* error codes */
#define       MCU_E_PARAM_CONFIG                        0x0A
#define       MCU_E_PARAM_CLOCK                         0x0B
#define       MCU_E_PARAM_MODE                          0x0C
#define       MCU_E_PARAM_RAMSECTION                    0x0D
#define       MCU_E_PLL_NOT_LOCKED                      0x0E
#define       MCU_E_UNINIT                0x0F
#define       PRODUCTION_ERROR                          0x00 /* TODO: Assign production error codes in DEM */

/* service IDs */
#define       MCU_INIT_ID                 0x00
#define       MCU_INITRAMSECTION_ID                     0x01
#define       MCU_INITCLOCK_ID                          0x02
#define       MCU_DISTRIBUTEPLLCLOCK_ID                 0x03
#define       MCU_GETPLLSTATUS_ID                       0x04
#define       MCU_GETRESETREASON_ID                     0x05
#define       MCU_GETRESETRAWVALUE_ID                   0x06
#define       MCU_PERFORMRESET_ID                       0x07
#define       MCU_SETMODE_ID                            0x08
#define       MCU_GETVERSIONINFO_ID                     0x09

/* initialisation definitions */
#define MCU_INIT_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define MCU_INITRAMSECTION_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define MCU_INITCLOCK_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define MCU_DISTRIBUTEPLLCLOCK_STUB_INIT { 0, NULL_PTR }
#define MCU_GETPLLSTATUS_STUB_INIT { 0, NULL_PTR , 0 }
#define MCU_GETRESETREASON_STUB_INIT { 0, NULL_PTR , 0 }
#define MCU_GETRESETRAWVALUE_STUB_INIT { 0, NULL_PTR , 0 }
#define MCU_PERFORMRESET_STUB_INIT { 0, NULL_PTR }
#define MCU_SETMODE_STUB_INIT { 0, NULL_PTR, 0 }
#define MCU_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }

typedef       uint8         Mcu_PllStatusType;
typedef       uint8         Mcu_ResetType;

#define MCU_PLL_LOCKED       ((Mcu_PllStatusType)1)
#define MCU_PLL_UNLOCKED     ((Mcu_PllStatusType)2)
#define MCU_PLL_STATUS_UNDEFINED           ((Mcu_PllStatusType)3)

#define MCU_POWER_ON_RESET   ((Mcu_ResetType)1)
#define MCU_WATCHDOG_RESET   ((Mcu_ResetType)2)
#define MCU_SW_RESET         ((Mcu_ResetType)3)
#define MCU_RESET_UNDEFINED  ((Mcu_ResetType)4)


typedef struct {
	uint8 dummy; /* TODO: Fill appropriately! */
} Mcu_ConfigType;

typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Mcu_ClockType ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Mcu_RawResetType            ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Mcu_ModeType  ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Mcu_RamSectionType          ;

typedef void(*Mcu_Init_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_Init_CalloutType Callout;
	P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_CONST) ConfigPtr;
} Mcu_Init_StubType;

typedef Std_ReturnType(*Mcu_InitRamSection_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_InitRamSection_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Mcu_RamSectionType, AUTOMATIC) RamSection;
} Mcu_InitRamSection_StubType;

typedef Std_ReturnType(*Mcu_InitClock_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_InitClock_CalloutType Callout;
	VAR(Std_ReturnType, AUTOMATIC) RetVal;
	VAR(Mcu_ClockType, AUTOMATIC) ClockSetting;
} Mcu_InitClock_StubType;

typedef void(*Mcu_DistributePllClock_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_DistributePllClock_CalloutType Callout;
} Mcu_DistributePllClock_StubType;

typedef Mcu_PllStatusType(*Mcu_GetPllStatus_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_GetPllStatus_CalloutType Callout;
	VAR(Mcu_PllStatusType, AUTOMATIC) RetVal;
} Mcu_GetPllStatus_StubType;

typedef Mcu_ResetType(*Mcu_GetResetReason_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_GetResetReason_CalloutType Callout;
	VAR(Mcu_ResetType, AUTOMATIC) RetVal;
} Mcu_GetResetReason_StubType;

typedef Mcu_RawResetType(*Mcu_GetResetRawValue_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_GetResetRawValue_CalloutType Callout;
	VAR(Mcu_RawResetType, AUTOMATIC) RetVal;
} Mcu_GetResetRawValue_StubType;

typedef void(*Mcu_PerformReset_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_PerformReset_CalloutType Callout;
} Mcu_PerformReset_StubType;

typedef void(*Mcu_SetMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_SetMode_CalloutType Callout;
	VAR(Mcu_ModeType, AUTOMATIC) McuMode;
} Mcu_SetMode_StubType;

typedef void(*Mcu_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Mcu_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC, MCU_APPL_DATA) versioninfo;
} Mcu_GetVersionInfo_StubType;

#define MCU_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(Mcu_Init_StubType,MCU_VAR)
		Mcu_Init_Stub;
extern VAR(Mcu_InitRamSection_StubType,MCU_VAR)
		Mcu_InitRamSection_Stub;
extern VAR(Mcu_InitClock_StubType,MCU_VAR)
		Mcu_InitClock_Stub;
extern VAR(Mcu_DistributePllClock_StubType,MCU_VAR)
		Mcu_DistributePllClock_Stub;
extern VAR(Mcu_GetPllStatus_StubType,MCU_VAR)
		Mcu_GetPllStatus_Stub;
extern VAR(Mcu_GetResetReason_StubType,MCU_VAR)
		Mcu_GetResetReason_Stub;
extern VAR(Mcu_GetResetRawValue_StubType,MCU_VAR)
		Mcu_GetResetRawValue_Stub;
extern VAR(Mcu_PerformReset_StubType,MCU_VAR)
		Mcu_PerformReset_Stub;
extern VAR(Mcu_SetMode_StubType,MCU_VAR)
		Mcu_SetMode_Stub;
extern VAR(Mcu_GetVersionInfo_StubType,MCU_VAR)
		Mcu_GetVersionInfo_Stub;

#define MCU_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define MCU_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, MCU_CODE) Mcu_Init
(
	P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_CONST) ConfigPtr
);

extern FUNC(Std_ReturnType, MCU_CODE) Mcu_InitRamSection
(
	VAR(Mcu_RamSectionType, AUTOMATIC) RamSection
);

extern FUNC(Std_ReturnType, MCU_CODE) Mcu_InitClock
(
	VAR(Mcu_ClockType, AUTOMATIC) ClockSetting
);

extern FUNC(void, MCU_CODE) Mcu_DistributePllClock
(
	void
);

extern FUNC(Mcu_PllStatusType, MCU_CODE) Mcu_GetPllStatus
(
	void
);

extern FUNC(Mcu_ResetType, MCU_CODE) Mcu_GetResetReason
(
	void
);

extern FUNC(Mcu_RawResetType, MCU_CODE) Mcu_GetResetRawValue
(
	void
);

extern FUNC(void, MCU_CODE) Mcu_PerformReset
(
	void
);

extern FUNC(void, MCU_CODE) Mcu_SetMode
(
	VAR(Mcu_ModeType, AUTOMATIC) McuMode
);

extern FUNC(void, MCU_CODE) Mcu_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, MCU_APPL_DATA) versioninfo
);

#define MCU_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( MCU_H ) */

