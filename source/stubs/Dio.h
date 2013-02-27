#if (!defined DIO_H)
#define DIO_H

#include <Std_Types.h>
#include "Dio_Cfg.h"

/* module administrative information */
#define DIO_VENDOR_ID 0x01
#define DIO_MODULE_ID 120
#define DIO_AR_MAJOR_VERSION 2  /* stub AR version is 3.0.0 for all stubs */
#define DIO_AR_MINOR_VERSION 2
#define DIO_AR_PATCH_VERSION 0
#define DIO_SW_MAJOR_VERSION 0  /* stub SW version is 3.0.0 for all stubs */
#define DIO_SW_MINOR_VERSION 0
#define DIO_SW_PATCH_VERSION 0

/* error codes */
#define       DIO_E_PARAM_INVALID_CHANNEL_ID                          0x00 /* TODO: Assign production error codes in DEM */
#define       DIO_E_PARAM_INVALID_PORT_ID               0x00 /* TODO: Assign production error codes in DEM */
#define       DIO_E_PARAM_INVALID_GROUP_ID                            0x00 /* TODO: Assign production error codes in DEM */

/* service IDs */
#define       DIO_READCHANNEL_ID                        0x00
#define       DIO_WRITECHANNEL_ID                       0x01
#define       DIO_READPORT_ID                           0x02
#define       DIO_WRITEPORT_ID                          0x03
#define       DIO_READCHANNELGROUP_ID                   0x04
#define       DIO_WRITECHANNELGROUP_ID                  0x05
#define       DIO_GETVERSIONINFO_ID                     0x12

/* initialisation definitions */
#define DIO_READCHANNEL_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DIO_WRITECHANNEL_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define DIO_READPORT_STUB_INIT { 0, NULL_PTR , 0, 0 }
#define DIO_WRITEPORT_STUB_INIT { 0, NULL_PTR, 0, 0 }
#define DIO_READCHANNELGROUP_STUB_INIT { 0, NULL_PTR , 0, NULL_PTR }
#define DIO_WRITECHANNELGROUP_STUB_INIT { 0, NULL_PTR, NULL_PTR, 0 }
#define DIO_GETVERSIONINFO_STUB_INIT { 0, NULL_PTR, NULL_PTR }

typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                 Dio_ChannelType             ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                 Dio_PortType  ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                 Dio_ChannelGroupType        ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                 Dio_LevelType ;
typedef       uint8 /* TODO: chose data type from uint8,uint16,uint32 */                 Dio_PortLevelType           ;

typedef Dio_LevelType(*Dio_ReadChannel_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_ReadChannel_CalloutType Callout;
	VAR(Dio_LevelType, AUTOMATIC) RetVal;
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId;
} Dio_ReadChannel_StubType;

typedef void(*Dio_WriteChannel_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_WriteChannel_CalloutType Callout;
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId;
	VAR(Dio_LevelType, AUTOMATIC) Level;
} Dio_WriteChannel_StubType;

typedef Dio_PortLevelType(*Dio_ReadPort_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_ReadPort_CalloutType Callout;
	VAR(Dio_PortLevelType, AUTOMATIC) RetVal;
	VAR(Dio_PortType, AUTOMATIC) PortId;
} Dio_ReadPort_StubType;

typedef void(*Dio_WritePort_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_WritePort_CalloutType Callout;
	VAR(Dio_PortType, AUTOMATIC) PortId;
	VAR(Dio_PortLevelType, AUTOMATIC) Level;
} Dio_WritePort_StubType;

typedef Dio_PortLevelType(*Dio_ReadChannelGroup_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_ReadChannelGroup_CalloutType Callout;
	VAR(Dio_PortLevelType, AUTOMATIC) RetVal;
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr;
} Dio_ReadChannelGroup_StubType;

typedef void(*Dio_WriteChannelGroup_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_WriteChannelGroup_CalloutType Callout;
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr;
	VAR(Dio_PortLevelType, AUTOMATIC) Level;
} Dio_WriteChannelGroup_StubType;

typedef void(*Dio_GetVersionInfo_CalloutType)
(
	void
);
typedef struct
{
	uint32 Count;
	Dio_GetVersionInfo_CalloutType Callout;
	P2VAR(Std_VersionInfoType, AUTOMATIC, DIO_APPL_DATA) VersionInfo;
} Dio_GetVersionInfo_StubType;

#define DIO_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

extern VAR(Dio_ReadChannel_StubType,DIO_VAR)
		Dio_ReadChannel_Stub;
extern VAR(Dio_WriteChannel_StubType,DIO_VAR)
		Dio_WriteChannel_Stub;
extern VAR(Dio_ReadPort_StubType,DIO_VAR)
		Dio_ReadPort_Stub;
extern VAR(Dio_WritePort_StubType,DIO_VAR)
		Dio_WritePort_Stub;
extern VAR(Dio_ReadChannelGroup_StubType,DIO_VAR)
		Dio_ReadChannelGroup_Stub;
extern VAR(Dio_WriteChannelGroup_StubType,DIO_VAR)
		Dio_WriteChannelGroup_Stub;
extern VAR(Dio_GetVersionInfo_StubType,DIO_VAR)
		Dio_GetVersionInfo_Stub;

#define DIO_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>

#define DIO_START_SEC_CODE
#include <MemMap.h>

extern FUNC(Dio_LevelType, DIO_CODE) Dio_ReadChannel
(
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId
);

extern FUNC(void, DIO_CODE) Dio_WriteChannel
(
	VAR(Dio_ChannelType, AUTOMATIC) ChannelId,
	VAR(Dio_LevelType, AUTOMATIC) Level
);

extern FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadPort
(
	VAR(Dio_PortType, AUTOMATIC) PortId
);

extern FUNC(void, DIO_CODE) Dio_WritePort
(
	VAR(Dio_PortType, AUTOMATIC) PortId,
	VAR(Dio_PortLevelType, AUTOMATIC) Level
);

extern FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadChannelGroup
(
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr
);

extern FUNC(void, DIO_CODE) Dio_WriteChannelGroup
(
	P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr,
	VAR(Dio_PortLevelType, AUTOMATIC) Level
);

extern FUNC(void, DIO_CODE) Dio_GetVersionInfo
(
	P2VAR(Std_VersionInfoType, AUTOMATIC, DIO_APPL_DATA) VersionInfo
);

#define DIO_STOP_SEC_CODE
#include <MemMap.h>


#endif /* if !defined( DIO_H ) */

