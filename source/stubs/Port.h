#if (!defined PORT_H)
#define PORT_H

#include <Std_Types.h>

/* module administrative information */
#define PORT_VENDOR_ID 0x01
#define PORT_MODULE_ID 0         /* TODO: Fill in correct module ID */
#define PORT_AR_MAJOR_VERSION 3  /* stub AR version is 3.0.0 for all stubs */
#define PORT_AR_MINOR_VERSION 0
#define PORT_AR_PATCH_VERSION 1
#define PORT_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define PORT_SW_MINOR_VERSION 0
#define PORT_SW_PATCH_VERSION 0

/* error codes */
#define PORT_E_PARAM_PIN 0x0A
#define PORT_E_DIRECTION_UNCHANGEABLE 0x0B
#define PORT_E_PARAM_CONFIG 0x0C
#define PORT_E_PARAM_INVALID_MODE 0x0D
#define PORT_E_MODE_UNCHANGEABLE 0x0E
#define PORT_E_UNINIT 0x0F

/* service IDs */
#define       PORT_INIT_ID                0x00
#define       PORT_SETPINDIRECTION_ID                   0x01
#define       PORT_REFRESHPORTDIRECTION_ID                            0x02
#define       PORT_GETVERSIONINFO_ID                    0x03
#define       PORT_SETPINMODE_ID                        0x04

/* initialisation definitions */
#define PORT_INIT_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define PORT_SETPINDIRECTION_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define PORT_REFRESHPORTDIRECTION_STUB_INIT { 0, NULL_PTR }
#define PORT_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }
#define PORT_SETPINMODE_STUB_INIT { 0, NULL_PTR, 0, 0 }

typedef       uint8         Port_PinDirectionType;

#define PORT_PIN_IN          ((Port_PinDirectionType)1)
#define PORT_PIN_OUT         ((Port_PinDirectionType)2)


typedef struct {
	uint8 dummy; /* TODO: Fill appropriately! */
} Port_ConfigType;

typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Port_PinType  ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                          Port_PinModeType            ;

typedef void(*Port_Init_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Port_Init_CalloutType Callout;
	P2CONST(Port_ConfigType, AUTOMATIC, PORT_APPL_CONST) ConfigPtr;
} Port_Init_StubType;

typedef void(*Port_SetPinDirection_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Port_SetPinDirection_CalloutType Callout;
	VAR(Port_PinType, AUTOMATIC) Pin;
	VAR(Port_PinDirectionType, AUTOMATIC) Direction;
} Port_SetPinDirection_StubType;

typedef void(*Port_RefreshPortDirection_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Port_RefreshPortDirection_CalloutType Callout;
} Port_RefreshPortDirection_StubType;

typedef void(*Port_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Port_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC, PORT_APPL_DATA) versioninfo;
} Port_GetVersionInfo_StubType;

typedef void(*Port_SetPinMode_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Port_SetPinMode_CalloutType Callout;
	VAR(Port_PinType, AUTOMATIC) Pin;
	VAR(Port_PinModeType, AUTOMATIC) Mode;
} Port_SetPinMode_StubType;

#define PORT_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(Port_Init_StubType,PORT_VAR)
		Port_Init_Stub;
extern VAR(Port_SetPinDirection_StubType,PORT_VAR)
		Port_SetPinDirection_Stub;
extern VAR(Port_RefreshPortDirection_StubType,PORT_VAR)
		Port_RefreshPortDirection_Stub;
extern VAR(Port_GetVersionInfo_StubType,PORT_VAR)
		Port_GetVersionInfo_Stub;
extern VAR(Port_SetPinMode_StubType,PORT_VAR)
		Port_SetPinMode_Stub;

#define PORT_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define PORT_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, PORT_CODE) Port_Init
(
	P2CONST(Port_ConfigType, AUTOMATIC, PORT_APPL_CONST) ConfigPtr
);

extern FUNC(void, PORT_CODE) Port_SetPinDirection
(
	VAR(Port_PinType, AUTOMATIC) Pin,
	VAR(Port_PinDirectionType, AUTOMATIC) Direction
);

extern FUNC(void, PORT_CODE) Port_RefreshPortDirection
(
	void
);

extern FUNC(void, PORT_CODE) Port_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, PORT_APPL_DATA) versioninfo
);

extern FUNC(void, PORT_CODE) Port_SetPinMode
(
	VAR(Port_PinType, AUTOMATIC) Pin,
	VAR(Port_PinModeType, AUTOMATIC) Mode
);

#define PORT_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( PORT_H ) */

