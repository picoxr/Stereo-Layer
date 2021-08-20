// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoMobile/Private/PicoMobileSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoMobileSettings() {}
// Cross Module References
	PICOMOBILE_API UEnum* Z_Construct_UEnum_PicoMobile_EFoveationLevel();
	UPackage* Z_Construct_UPackage__Script_PicoMobile();
	PICOMOBILE_API UClass* Z_Construct_UClass_UPicoMobileSettings_NoRegister();
	PICOMOBILE_API UClass* Z_Construct_UClass_UPicoMobileSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PICOMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FPicoSplashDesc();
// End Cross Module References
	static UEnum* EFoveationLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoMobile_EFoveationLevel, Z_Construct_UPackage__Script_PicoMobile(), TEXT("EFoveationLevel"));
		}
		return Singleton;
	}
	template<> PICOMOBILE_API UEnum* StaticEnum<EFoveationLevel::Type>()
	{
		return EFoveationLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoveationLevel(EFoveationLevel_StaticEnum, TEXT("/Script/PicoMobile"), TEXT("EFoveationLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoMobile_EFoveationLevel_Hash() { return 2691658799U; }
	UEnum* Z_Construct_UEnum_PicoMobile_EFoveationLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoveationLevel"), 0, Get_Z_Construct_UEnum_PicoMobile_EFoveationLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoveationLevel::Low", (int64)EFoveationLevel::Low },
				{ "EFoveationLevel::Med", (int64)EFoveationLevel::Med },
				{ "EFoveationLevel::High", (int64)EFoveationLevel::High },
				{ "EFoveationLevel::TopHigh", (int64)EFoveationLevel::TopHigh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.Name", "EFoveationLevel::High" },
				{ "Low.Name", "EFoveationLevel::Low" },
				{ "Med.Name", "EFoveationLevel::Med" },
				{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
				{ "TopHigh.Name", "EFoveationLevel::TopHigh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoMobile,
				nullptr,
				"EFoveationLevel",
				"EFoveationLevel::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPicoMobileSettings::StaticRegisterNativesUPicoMobileSettings()
	{
	}
	UClass* Z_Construct_UClass_UPicoMobileSettings_NoRegister()
	{
		return UPicoMobileSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoMobileSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePSensor_MetaData[];
#endif
		static void NewProp_bEnablePSensor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFoveationRendering_MetaData[];
#endif
		static void NewProp_bEnableFoveationRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFoveationRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoveationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHomeKey_MetaData[];
#endif
		static void NewProp_bEnableHomeKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHomeKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableController6DofModule_MetaData[];
#endif
		static void NewProp_bDisableController6DofModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableController6DofModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableHmd6DofModule_MetaData[];
#endif
		static void NewProp_bDisableHmd6DofModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableHmd6DofModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNeckModel_MetaData[];
#endif
		static void NewProp_bEnableNeckModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNeckModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomNeckParameter_MetaData[];
#endif
		static void NewProp_bUseCustomNeckParameter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomNeckParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neckOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_neckOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVRStandardInput_MetaData[];
#endif
		static void NewProp_bEnableVRStandardInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVRStandardInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEyeTracking_MetaData[];
#endif
		static void NewProp_bEnableEyeTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEyeTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdvanceInterface_MetaData[];
#endif
		static void NewProp_bUseAdvanceInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdvanceInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsForeign_MetaData[];
#endif
		static void NewProp_bIsForeign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForeign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_merchantID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_merchantID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_payKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_payKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartTimeEntitlementCheck_MetaData[];
#endif
		static void NewProp_bStartTimeEntitlementCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartTimeEntitlementCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementCheckAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementCheckAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementCheckSimulation_MetaData[];
#endif
		static void NewProp_EntitlementCheckSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EntitlementCheckSimulation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceSN_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceSN_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceSN;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoShow_MetaData[];
#endif
		static void NewProp_bEnableAutoShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDescs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoMobileSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PicoMobileSettings.h" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Enable PSensor?" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "If you want to get PSensor state, Please enable it!" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnablePSensor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor = { "bEnablePSensor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Enable FoveationRendering?" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "If you want to get FoveationRendering, Please enable it!" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableFoveationRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering = { "bEnableFoveationRendering", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_FoveationLevel_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Foveation Level" },
		{ "EditCondition", "bEnableFoveationRendering" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_FoveationLevel = { "FoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, FoveationLevel), Z_Construct_UEnum_PicoMobile_EFoveationLevel, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_FoveationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_FoveationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey_MetaData[] = {
		{ "Category", "Controller" },
		{ "DisplayName", "Enable HomeKey?" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableHomeKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey = { "bEnableHomeKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Only Controller Rotation Tracking" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bDisableController6DofModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule = { "bDisableController6DofModule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Only HMD Rotation Tracking" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bDisableHmd6DofModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule = { "bDisableHmd6DofModule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Enable Neck Model" },
		{ "EditCondition", "bDisableHmd6DofModule" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableNeckModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel = { "bEnableNeckModel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Use Custom NeckParameter" },
		{ "EditCondition", "bDisableHmd6DofModule" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bUseCustomNeckParameter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter = { "bUseCustomNeckParameter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_neckOffset_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "NeckOffset" },
		{ "EditCondition", "bUseCustomNeckParameter" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_neckOffset = { "neckOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, neckOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_neckOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_neckOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Enable VR Standard Input Event" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "EnableMotionControllerInputEvent" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableVRStandardInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput = { "bEnableVRStandardInput", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Enable EyeTracking" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "Only Neo2 Eye Supports!" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableEyeTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking = { "bEnableEyeTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface_MetaData[] = {
		{ "Category", "PicoMobile" },
		{ "DisplayName", "Use Pico Advance Interface" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bUseAdvanceInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface = { "bUseAdvanceInterface", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign_MetaData[] = {
		{ "Category", "Payment" },
		{ "Comment", "// payment\n" },
		{ "DisplayName", "Is Foreign" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "payment" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bIsForeign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign = { "bIsForeign", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_merchantID_MetaData[] = {
		{ "Category", "Payment" },
		{ "DisplayName", "MerchantID" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_merchantID = { "merchantID", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, merchantID), METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_merchantID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_merchantID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appID_MetaData[] = {
		{ "Category", "Payment" },
		{ "DisplayName", "AppID" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, appID), METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appKey_MetaData[] = {
		{ "Category", "Payment" },
		{ "DisplayName", "AppKey" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appKey = { "appKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, appKey), METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_payKey_MetaData[] = {
		{ "Category", "Payment" },
		{ "DisplayName", "PayKey" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_payKey = { "payKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, payKey), METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_payKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_payKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "User Entitlement Check" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "If selected, you will need to enter the APPID that is obtained from Pico Developer Platform after uploading the app for an entitlement check upon the app launch." },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bStartTimeEntitlementCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck = { "bStartTimeEntitlementCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckAppID_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "App ID" },
		{ "EditCondition", "bStartTimeEntitlementCheck" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckAppID = { "EntitlementCheckAppID", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, EntitlementCheckAppID), METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "Entitlement Check Simulation" },
		{ "EditCondition", "bStartTimeEntitlementCheck" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
		{ "ToolTip", "If true, Development devices will simulate Entitlement Check, you should enter a valid device SN codes list. The SN code can be obtain in Settings-General-Device serial number or input 'adb devices ' in cmd" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->EntitlementCheckSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation = { "EntitlementCheckSimulation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN_Inner = { "DeviceSN", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "Device SN Code List" },
		{ "EditCondition", "bStartTimeEntitlementCheck" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN = { "DeviceSN", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, DeviceSN), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow_MetaData[] = {
		{ "Category", "SplashScreen" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow_SetBit(void* Obj)
	{
		((UPicoMobileSettings*)Obj)->bEnableAutoShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow = { "bEnableAutoShow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoMobileSettings), &Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "SplashScreen" },
		{ "DisplayName", "SplashDescs" },
		{ "ModuleRelativePath", "Private/PicoMobileSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoMobileSettings, SplashDescs), Z_Construct_UScriptStruct_FPicoSplashDesc, METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_SplashDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_SplashDescs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoMobileSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnablePSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableFoveationRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_FoveationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableHomeKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableController6DofModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bDisableHmd6DofModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableNeckModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseCustomNeckParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_neckOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableVRStandardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableEyeTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bUseAdvanceInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bIsForeign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_merchantID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_appKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_payKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bStartTimeEntitlementCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_EntitlementCheckSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_DeviceSN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_bEnableAutoShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoMobileSettings_Statics::NewProp_SplashDescs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoMobileSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoMobileSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoMobileSettings_Statics::ClassParams = {
		&UPicoMobileSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoMobileSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoMobileSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoMobileSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoMobileSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoMobileSettings, 3038676244);
	template<> PICOMOBILE_API UClass* StaticClass<UPicoMobileSettings>()
	{
		return UPicoMobileSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoMobileSettings(Z_Construct_UClass_UPicoMobileSettings, &UPicoMobileSettings::StaticClass, TEXT("/Script/PicoMobile"), TEXT("UPicoMobileSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoMobileSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
