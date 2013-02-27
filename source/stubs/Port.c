#include <Std_Types.h>
#include <Port.h>

#define PORT_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(Port_Init_StubType, PORT_VAR)
		Port_Init_Stub = PORT_INIT_STUB_INIT;
VAR(Port_SetPinDirection_StubType, PORT_VAR)
		Port_SetPinDirection_Stub = PORT_SETPINDIRECTION_STUB_INIT;
VAR(Port_RefreshPortDirection_StubType, PORT_VAR)
		Port_RefreshPortDirection_Stub = PORT_REFRESHPORTDIRECTION_STUB_INIT;
VAR(Port_GetVersionInfo_StubType, PORT_VAR)
		Port_GetVersionInfo_Stub = PORT_GETVERSIONINFO_STUB_INIT;
VAR(Port_SetPinMode_StubType, PORT_VAR)
		Port_SetPinMode_Stub = PORT_SETPINMODE_STUB_INIT;

#define PORT_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define PORT_START_SEC_CODE
#include <MemMap.h>

FUNC(void, PORT_CODE) Port_Init
(
	P2CONST(Port_ConfigType, AUTOMATIC, PORT_APPL_CONST) ConfigPtr
)
{
	Port_Init_Stub.Count++;
	Port_Init_Stub.ConfigPtr = ConfigPtr;
	if (Port_Init_Stub.Callout != NULL_PTR)
	{
		Port_Init_Stub.Callout ();
	}
}

FUNC(void, PORT_CODE) Port_SetPinDirection
(
	VAR(Port_PinType, AUTOMATIC) Pin,
	VAR(Port_PinDirectionType, AUTOMATIC) Direction
)
{
	Port_SetPinDirection_Stub.Count++;
	Port_SetPinDirection_Stub.Pin = Pin;
	Port_SetPinDirection_Stub.Direction = Direction;
	if (Port_SetPinDirection_Stub.Callout != NULL_PTR)
	{
		Port_SetPinDirection_Stub.Callout ();
	}
}

FUNC(void, PORT_CODE) Port_RefreshPortDirection
(
	void
)
{
	Port_RefreshPortDirection_Stub.Count++;
	if (Port_RefreshPortDirection_Stub.Callout != NULL_PTR)
	{
		Port_RefreshPortDirection_Stub.Callout ();
	}
}

FUNC(void, PORT_CODE) Port_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, PORT_APPL_DATA) versioninfo
)
{
	Port_GetVersionInfo_Stub.Count++;
	Port_GetVersionInfo_Stub.versioninfo = versioninfo;
	if (Port_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		Port_GetVersionInfo_Stub.Callout ();
	}
}

FUNC(void, PORT_CODE) Port_SetPinMode
(
	VAR(Port_PinType, AUTOMATIC) Pin,
	VAR(Port_PinModeType, AUTOMATIC) Mode
)
{
	Port_SetPinMode_Stub.Count++;
	Port_SetPinMode_Stub.Pin = Pin;
	Port_SetPinMode_Stub.Mode = Mode;
	if (Port_SetPinMode_Stub.Callout != NULL_PTR)
	{
		Port_SetPinMode_Stub.Callout ();
	}
}

#define PORT_STOP_SEC_CODE
#include <MemMap.h>

