#include <Std_Types.h>
#include <Dio.h>

#define DIO_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

/* stub structures */
VAR(Dio_ReadChannel_StubType, DIO_VAR)
		Dio_ReadChannel_Stub = DIO_READCHANNEL_STUB_INIT;
VAR(Dio_WriteChannel_StubType, DIO_VAR)
		Dio_WriteChannel_Stub = DIO_WRITECHANNEL_STUB_INIT;
VAR(Dio_ReadPort_StubType, DIO_VAR)
		Dio_ReadPort_Stub = DIO_READPORT_STUB_INIT;
VAR(Dio_WritePort_StubType, DIO_VAR)
		Dio_WritePort_Stub = DIO_WRITEPORT_STUB_INIT;
VAR(Dio_ReadChannelGroup_StubType, DIO_VAR)
		Dio_ReadChannelGroup_Stub = DIO_READCHANNELGROUP_STUB_INIT;
VAR(Dio_WriteChannelGroup_StubType, DIO_VAR)
		Dio_WriteChannelGroup_Stub = DIO_WRITECHANNELGROUP_STUB_INIT;
VAR(Dio_GetVersionInfo_StubType, DIO_VAR)
		Dio_GetVersionInfo_Stub = DIO_GETVERSIONINFO_STUB_INIT;

#define DIO_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define DIO_START_SEC_CODE
#include <MemMap.h>

FUNC(Dio_LevelType, DIO_CODE) Dio_ReadChannel
(
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId
)
{
	Dio_ReadChannel_Stub.Count++;
	Dio_ReadChannel_Stub.ChannelId = ChannelId;
	if (Dio_ReadChannel_Stub.Callout != NULL_PTR)
	{
		Dio_ReadChannel_Stub.RetVal = Dio_ReadChannel_Stub.Callout ();
	}
	return Dio_ReadChannel_Stub.RetVal;
}

FUNC(void, DIO_CODE) Dio_WriteChannel
(
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId,
	VAR(Dio_LevelType, AUTOMATIC) Level
)
{
	Dio_WriteChannel_Stub.Count++;
	Dio_WriteChannel_Stub.ChannelId = ChannelId;
	Dio_WriteChannel_Stub.Level = Level;

	if (Dio_WriteChannel_Stub.Callout != NULL_PTR)
	{
		Dio_WriteChannel_Stub.Callout ();
	}
}

FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadPort
(
	VAR(Dio_PortType, AUTOMATIC) PortId
)
{
	Dio_ReadPort_Stub.Count++;
	Dio_ReadPort_Stub.PortId = PortId;
	if (Dio_ReadPort_Stub.Callout != NULL_PTR)
	{
		Dio_ReadPort_Stub.RetVal = Dio_ReadPort_Stub.Callout ();
	}
	return Dio_ReadPort_Stub.RetVal;
}

FUNC(void, DIO_CODE) Dio_WritePort
(
	VAR(Dio_PortType, AUTOMATIC) PortId,
	VAR(Dio_PortLevelType, AUTOMATIC) Level
)
{
	Dio_WritePort_Stub.Count++;
	Dio_WritePort_Stub.PortId = PortId;
	Dio_WritePort_Stub.Level = Level;

	if (Dio_WritePort_Stub.Callout != NULL_PTR)
	{
		Dio_WritePort_Stub.Callout ();
	}
}

FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadChannelGroup
(
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr
)
{
	Dio_ReadChannelGroup_Stub.Count++;
	Dio_ReadChannelGroup_Stub.ChannelGroupIdPtr = ChannelGroupIdPtr;
	if (Dio_ReadChannelGroup_Stub.Callout != NULL_PTR)
	{
		Dio_ReadChannelGroup_Stub.RetVal = Dio_ReadChannelGroup_Stub.Callout ();
	}
	return Dio_ReadChannelGroup_Stub.RetVal;
}

FUNC(void, DIO_CODE) Dio_WriteChannelGroup
(
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr,
	VAR(Dio_PortLevelType, AUTOMATIC) Level
)
{
	Dio_WriteChannelGroup_Stub.Count++;
	Dio_WriteChannelGroup_Stub.ChannelGroupIdPtr = ChannelGroupIdPtr;
	Dio_WriteChannelGroup_Stub.Level = Level;
	if (Dio_WriteChannelGroup_Stub.Callout != NULL_PTR)
	{
		Dio_WriteChannelGroup_Stub.Callout ();
	}
}

FUNC(void, DIO_CODE) Dio_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, DIO_APPL_DATA) VersionInfo
)
{
	Dio_GetVersionInfo_Stub.Count++;
	Dio_GetVersionInfo_Stub.VersionInfo = VersionInfo;
	if (Dio_GetVersionInfo_Stub.Callout != NULL_PTR)
	{
		Dio_GetVersionInfo_Stub.Callout ();
	}
}

#define DIO_STOP_SEC_CODE
#include <MemMap.h>

