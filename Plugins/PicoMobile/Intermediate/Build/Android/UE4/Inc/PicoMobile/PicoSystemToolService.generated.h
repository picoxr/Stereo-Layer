// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUSBConfigModeEnum : uint8;
enum class ESystemFunctionSwitchEnum : uint8;
enum class ESwitchEnum : uint8;
enum class ESleepDelayTimeEnum : uint8;
enum class EScreenOffDelayTimeEnum : uint8;
enum class EHomeEventEnum : uint8;
enum class EHomeFunctionEnum : uint8;
enum class EPackageControlEnum : uint8;
enum class EDeviceControlEnum : uint8;
enum class ESystemInfoEnum : uint8;
#ifdef PICOMOBILE_PicoSystemToolService_generated_h
#error "PicoSystemToolService.generated.h already included, missing '#pragma once' in PicoSystemToolService.h"
#endif
#define PICOMOBILE_PicoSystemToolService_generated_h

#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppManagerStruct_Statics; \
	PICOMOBILE_API static class UScriptStruct* StaticStruct();


template<> PICOMOBILE_API UScriptStruct* StaticStruct<struct FAppManagerStruct>();

#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_148_DELEGATE \
struct _Script_PicoMobile_eventPicoResetAllKeyToDefaultDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoResetAllKeyToDefaultDelegate_DelegateWrapper(const FScriptDelegate& PicoResetAllKeyToDefaultDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoResetAllKeyToDefaultDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoResetAllKeyToDefaultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_147_DELEGATE \
struct _Script_PicoMobile_eventPicoWriteConfigFileToDataLocalDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoWriteConfigFileToDataLocalDelegate_DelegateWrapper(const FScriptDelegate& PicoWriteConfigFileToDataLocalDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoWriteConfigFileToDataLocalDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoWriteConfigFileToDataLocalDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_146_DELEGATE \
struct _Script_PicoMobile_eventPicoSetScreenOffDelayDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPicoSetScreenOffDelayDelegate_DelegateWrapper(const FScriptDelegate& PicoSetScreenOffDelayDelegate, int32 Result) \
{ \
	_Script_PicoMobile_eventPicoSetScreenOffDelayDelegate_Parms Parms; \
	Parms.Result=Result; \
	PicoSetScreenOffDelayDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_145_DELEGATE \
struct _Script_PicoMobile_eventPicoDisablePowerKeyDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPicoDisablePowerKeyDelegate_DelegateWrapper(const FScriptDelegate& PicoDisablePowerKeyDelegate, int32 Result) \
{ \
	_Script_PicoMobile_eventPicoDisablePowerKeyDelegate_Parms Parms; \
	Parms.Result=Result; \
	PicoDisablePowerKeyDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_144_DELEGATE \
struct _Script_PicoMobile_eventPicoSetHomeKeyAllDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoSetHomeKeyAllDelegate_DelegateWrapper(const FScriptDelegate& PicoSetHomeKeyAllDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoSetHomeKeyAllDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoSetHomeKeyAllDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_143_DELEGATE \
struct _Script_PicoMobile_eventPicoSetHomeKeyDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoSetHomeKeyDelegate_DelegateWrapper(const FScriptDelegate& PicoSetHomeKeyDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoSetHomeKeyDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoSetHomeKeyDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_142_DELEGATE \
struct _Script_PicoMobile_eventPicoClearAutoConnectWifiDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoClearAutoConnectWifiDelegate_DelegateWrapper(const FScriptDelegate& PicoClearAutoConnectWifiDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoClearAutoConnectWifiDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoClearAutoConnectWifiDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_141_DELEGATE \
struct _Script_PicoMobile_eventPicoSetAutoConnectWifiDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPicoSetAutoConnectWifiDelegate_DelegateWrapper(const FScriptDelegate& PicoSetAutoConnectWifiDelegate, bool Result) \
{ \
	_Script_PicoMobile_eventPicoSetAutoConnectWifiDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PicoSetAutoConnectWifiDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_140_DELEGATE \
struct _Script_PicoMobile_eventPicoAppManagerDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPicoAppManagerDelegate_DelegateWrapper(const FScriptDelegate& PicoAppManagerDelegate, int32 Result) \
{ \
	_Script_PicoMobile_eventPicoAppManagerDelegate_Parms Parms; \
	Parms.Result=Result; \
	PicoAppManagerDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_139_DELEGATE \
struct _Script_PicoMobile_eventPicoSetDeviceActionDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPicoSetDeviceActionDelegate_DelegateWrapper(const FScriptDelegate& PicoSetDeviceActionDelegate, int32 Result) \
{ \
	_Script_PicoMobile_eventPicoSetDeviceActionDelegate_Parms Parms; \
	Parms.Result=Result; \
	PicoSetDeviceActionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_SPARSE_DATA
#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableBackKey); \
	DECLARE_FUNCTION(execEnableBackKey); \
	DECLARE_FUNCTION(execDisableVolumeKey); \
	DECLARE_FUNCTION(execEnableVolumeKey); \
	DECLARE_FUNCTION(execDisableEnterKey); \
	DECLARE_FUNCTION(execEnableEnterKey); \
	DECLARE_FUNCTION(execResetAllKeyToDefault); \
	DECLARE_FUNCTION(execWriteConfigFileToDataLocal); \
	DECLARE_FUNCTION(execReleaseWakeLock); \
	DECLARE_FUNCTION(execAcquireWakeLock); \
	DECLARE_FUNCTION(execScreenOff); \
	DECLARE_FUNCTION(execScreenOn); \
	DECLARE_FUNCTION(execSetUsbConfigurationOption); \
	DECLARE_FUNCTION(execSwitchSystemFunction); \
	DECLARE_FUNCTION(execSetSleepDelay); \
	DECLARE_FUNCTION(execSetScreenOffDelay); \
	DECLARE_FUNCTION(execDisablePowerKey); \
	DECLARE_FUNCTION(execSetHomeKeyAll); \
	DECLARE_FUNCTION(execSetHomeKey); \
	DECLARE_FUNCTION(execClearAutoConnectWifi); \
	DECLARE_FUNCTION(execSetAutoConnectWifi); \
	DECLARE_FUNCTION(execAppManager); \
	DECLARE_FUNCTION(execSetDeviceAction); \
	DECLARE_FUNCTION(execGetDeviceInfo);


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableBackKey); \
	DECLARE_FUNCTION(execEnableBackKey); \
	DECLARE_FUNCTION(execDisableVolumeKey); \
	DECLARE_FUNCTION(execEnableVolumeKey); \
	DECLARE_FUNCTION(execDisableEnterKey); \
	DECLARE_FUNCTION(execEnableEnterKey); \
	DECLARE_FUNCTION(execResetAllKeyToDefault); \
	DECLARE_FUNCTION(execWriteConfigFileToDataLocal); \
	DECLARE_FUNCTION(execReleaseWakeLock); \
	DECLARE_FUNCTION(execAcquireWakeLock); \
	DECLARE_FUNCTION(execScreenOff); \
	DECLARE_FUNCTION(execScreenOn); \
	DECLARE_FUNCTION(execSetUsbConfigurationOption); \
	DECLARE_FUNCTION(execSwitchSystemFunction); \
	DECLARE_FUNCTION(execSetSleepDelay); \
	DECLARE_FUNCTION(execSetScreenOffDelay); \
	DECLARE_FUNCTION(execDisablePowerKey); \
	DECLARE_FUNCTION(execSetHomeKeyAll); \
	DECLARE_FUNCTION(execSetHomeKey); \
	DECLARE_FUNCTION(execClearAutoConnectWifi); \
	DECLARE_FUNCTION(execSetAutoConnectWifi); \
	DECLARE_FUNCTION(execAppManager); \
	DECLARE_FUNCTION(execSetDeviceAction); \
	DECLARE_FUNCTION(execGetDeviceInfo);


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoSystemToolService(); \
	friend struct Z_Construct_UClass_UPicoSystemToolService_Statics; \
public: \
	DECLARE_CLASS(UPicoSystemToolService, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PicoMobile"), NO_API) \
	DECLARE_SERIALIZER(UPicoSystemToolService)


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUPicoSystemToolService(); \
	friend struct Z_Construct_UClass_UPicoSystemToolService_Statics; \
public: \
	DECLARE_CLASS(UPicoSystemToolService, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PicoMobile"), NO_API) \
	DECLARE_SERIALIZER(UPicoSystemToolService)


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoSystemToolService(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoSystemToolService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoSystemToolService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoSystemToolService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoSystemToolService(UPicoSystemToolService&&); \
	NO_API UPicoSystemToolService(const UPicoSystemToolService&); \
public:


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoSystemToolService(UPicoSystemToolService&&); \
	NO_API UPicoSystemToolService(const UPicoSystemToolService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoSystemToolService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoSystemToolService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPicoSystemToolService)


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_PRIVATE_PROPERTY_OFFSET
#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_149_PROLOG
#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_PRIVATE_PROPERTY_OFFSET \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_SPARSE_DATA \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_RPC_WRAPPERS \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_INCLASS \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_PRIVATE_PROPERTY_OFFSET \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_SPARSE_DATA \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_INCLASS_NO_PURE_DECLS \
	Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOMOBILE_API UClass* StaticClass<class UPicoSystemToolService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Layer_Demo_Plugins_PicoMobile_Source_PicoMobile_Public_PicoSystemToolService_h


#define FOREACH_ENUM_EUSBCONFIGMODEENUM(op) \
	op(EUSBConfigModeEnum::MTP) \
	op(EUSBConfigModeEnum::CHARGE) 

enum class EUSBConfigModeEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EUSBConfigModeEnum>();

#define FOREACH_ENUM_ESYSTEMFUNCTIONSWITCHENUM(op) \
	op(ESystemFunctionSwitchEnum::SFS_USB) \
	op(ESystemFunctionSwitchEnum::SFS_AUTOSLEEP) \
	op(ESystemFunctionSwitchEnum::SFS_SCREENON_CHARGING) \
	op(ESystemFunctionSwitchEnum::SFS_OTG_CHARGING) \
	op(ESystemFunctionSwitchEnum::SFS_RETURN_MENU_IN_2DMODE) \
	op(ESystemFunctionSwitchEnum::SFS_COMBINATION_KEY) \
	op(ESystemFunctionSwitchEnum::SFS_CALIBRATION_WITH_POWER_ON) \
	op(ESystemFunctionSwitchEnum::SFS_SYSTEM_UPDATE) \
	op(ESystemFunctionSwitchEnum::SFS_CAST_SERVICE) \
	op(ESystemFunctionSwitchEnum::SFS_EYE_PROTECTION) \
	op(ESystemFunctionSwitchEnum::SFS_SECURITY_ZONE_PERMANENTLY) \
	op(ESystemFunctionSwitchEnum::SFS_GLOBAL_CALIBRATION) \
	op(ESystemFunctionSwitchEnum::SFS_Auto_Calibration) \
	op(ESystemFunctionSwitchEnum::SFS_USB_BOOT) 

enum class ESystemFunctionSwitchEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<ESystemFunctionSwitchEnum>();

#define FOREACH_ENUM_ESLEEPDELAYTIMEENUM(op) \
	op(ESleepDelayTimeEnum::FIFTEEN) \
	op(ESleepDelayTimeEnum::THIRTY) \
	op(ESleepDelayTimeEnum::SIXTY) \
	op(ESleepDelayTimeEnum::THREE_HUNDRED) \
	op(ESleepDelayTimeEnum::SIX_HUNDRED) \
	op(ESleepDelayTimeEnum::ONE_THOUSAND_AND_EIGHT_HUNDRED) \
	op(ESleepDelayTimeEnum::NEVER) 

enum class ESleepDelayTimeEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<ESleepDelayTimeEnum>();

#define FOREACH_ENUM_ESCREENOFFDELAYTIMEENUM(op) \
	op(EScreenOffDelayTimeEnum::THREE) \
	op(EScreenOffDelayTimeEnum::TEN) \
	op(EScreenOffDelayTimeEnum::THIRTY) \
	op(EScreenOffDelayTimeEnum::SIXTY) \
	op(EScreenOffDelayTimeEnum::THREE_HUNDRED) \
	op(EScreenOffDelayTimeEnum::SIX_HUNDRED) \
	op(EScreenOffDelayTimeEnum::NEVER) 

enum class EScreenOffDelayTimeEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EScreenOffDelayTimeEnum>();

#define FOREACH_ENUM_EHOMEFUNCTIONENUM(op) \
	op(EHomeFunctionEnum::VALUE_HOME_GO_TO_SETTING) \
	op(EHomeFunctionEnum::VALUE_HOME_BACK) \
	op(EHomeFunctionEnum::VALUE_HOME_RECENTER) \
	op(EHomeFunctionEnum::VALUE_HOME_OPEN_APP) \
	op(EHomeFunctionEnum::VALUE_HOME_DISABLE) \
	op(EHomeFunctionEnum::VALUE_HOME_GO_TO_HOME) \
	op(EHomeFunctionEnum::VALUE_HOME_SEND_BROADCAST) \
	op(EHomeFunctionEnum::VALUE_HOME_CLEAN_MEMORY) 

enum class EHomeFunctionEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EHomeFunctionEnum>();

#define FOREACH_ENUM_EHOMEEVENTENUM(op) \
	op(EHomeEventEnum::HOME_SINGLE_CLICK) \
	op(EHomeEventEnum::HOME_DOUBLE_CLICK) \
	op(EHomeEventEnum::HOMR_LONG_PRESS) 

enum class EHomeEventEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EHomeEventEnum>();

#define FOREACH_ENUM_ESWITCHENUM(op) \
	op(ESwitchEnum::S_ON) \
	op(ESwitchEnum::S_OFF) 

enum class ESwitchEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<ESwitchEnum>();

#define FOREACH_ENUM_EPACKAGECONTROLENUM(op) \
	op(EPackageControlEnum::PACKAGE_SILENCE_INSTALL) \
	op(EPackageControlEnum::PACKAGE_SILENCE_UNINSTALL) 

enum class EPackageControlEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EPackageControlEnum>();

#define FOREACH_ENUM_EDEVICECONTROLENUM(op) \
	op(EDeviceControlEnum::DEVICE_CONTROL_REBOOT) \
	op(EDeviceControlEnum::DEVICE_CONTROL_SHUTDOWN) 

enum class EDeviceControlEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<EDeviceControlEnum>();

#define FOREACH_ENUM_ESYSTEMINFOENUM(op) \
	op(ESystemInfoEnum::ELECTRIC_QUANTITY) \
	op(ESystemInfoEnum::PUI_VERSION) \
	op(ESystemInfoEnum::EQUIPMENT_MODEL) \
	op(ESystemInfoEnum::EQUIPMENT_SN) \
	op(ESystemInfoEnum::CUSTOMER_SN) \
	op(ESystemInfoEnum::INTERNAL_STORAGE_SPACE_OF_THE_DEVICE) \
	op(ESystemInfoEnum::DEVICE_BLUETOOTH_STATUS) \
	op(ESystemInfoEnum::BLUETOOTH_NAME_CONNECTED) \
	op(ESystemInfoEnum::BLUETOOTH_MAC_ADDRESS) \
	op(ESystemInfoEnum::DEVICE_WIFI_STATUS) \
	op(ESystemInfoEnum::WIFI_NAME_CONNECTED) \
	op(ESystemInfoEnum::WLAN_MAC_ADDRESS) \
	op(ESystemInfoEnum::DEVICE_IP) 

enum class ESystemInfoEnum : uint8;
template<> PICOMOBILE_API UEnum* StaticEnum<ESystemInfoEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
