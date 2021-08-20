// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoMobileController/Public/PicoMobileControllerBFlib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoMobileControllerBFlib() {}
// Cross Module References
	PICOMOBILECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PicoMobileController();
	PICOMOBILECONTROLLER_API UEnum* Z_Construct_UEnum_PicoMobileController_EGazeBehavior();
	PICOMOBILECONTROLLER_API UEnum* Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint();
	PICOMOBILECONTROLLER_API UClass* Z_Construct_UClass_UPicoMobileControllerBFlib_NoRegister();
	PICOMOBILECONTROLLER_API UClass* Z_Construct_UClass_UPicoMobileControllerBFlib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PicoMobileController, nullptr, "DelegateWithoutParam__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoMobileController_EGazeBehavior, Z_Construct_UPackage__Script_PicoMobileController(), TEXT("EGazeBehavior"));
		}
		return Singleton;
	}
	template<> PICOMOBILECONTROLLER_API UEnum* StaticEnum<EGazeBehavior>()
	{
		return EGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGazeBehavior(EGazeBehavior_StaticEnum, TEXT("/Script/PicoMobileController"), TEXT("EGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoMobileController_EGazeBehavior_Hash() { return 3441764810U; }
	UEnum* Z_Construct_UEnum_PicoMobileController_EGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoMobileController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGazeBehavior"), 0, Get_Z_Construct_UEnum_PicoMobileController_EGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGazeBehavior::Never", (int64)EGazeBehavior::Never },
				{ "EGazeBehavior::DuringMotion", (int64)EGazeBehavior::DuringMotion },
				{ "EGazeBehavior::Always", (int64)EGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EGazeBehavior::Always" },
				{ "BlueprintType", "true" },
				{ "DuringMotion.Name", "EGazeBehavior::DuringMotion" },
				{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
				{ "Never.Name", "EGazeBehavior::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoMobileController,
				nullptr,
				"EGazeBehavior",
				"EGazeBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoArmModelJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint, Z_Construct_UPackage__Script_PicoMobileController(), TEXT("EPicoArmModelJoint"));
		}
		return Singleton;
	}
	template<> PICOMOBILECONTROLLER_API UEnum* StaticEnum<EPicoArmModelJoint>()
	{
		return EPicoArmModelJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoArmModelJoint(EPicoArmModelJoint_StaticEnum, TEXT("/Script/PicoMobileController"), TEXT("EPicoArmModelJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint_Hash() { return 3214269776U; }
	UEnum* Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoMobileController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoArmModelJoint"), 0, Get_Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoArmModelJoint::Controller", (int64)EPicoArmModelJoint::Controller },
				{ "EPicoArmModelJoint::Wrist", (int64)EPicoArmModelJoint::Wrist },
				{ "EPicoArmModelJoint::Elbow", (int64)EPicoArmModelJoint::Elbow },
				{ "EPicoArmModelJoint::Shoulder", (int64)EPicoArmModelJoint::Shoulder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EPicoArmModelJoint::Controller" },
				{ "Elbow.Name", "EPicoArmModelJoint::Elbow" },
				{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
				{ "Shoulder.Name", "EPicoArmModelJoint::Shoulder" },
				{ "Wrist.Name", "EPicoArmModelJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoMobileController,
				nullptr,
				"EPicoArmModelJoint",
				"EPicoArmModelJoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoResetG1Controller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoMobileControllerBFlib::PicoResetG1Controller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSetControllerConnectedStatusChangedDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPicoControllerConnected);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPicoControllerDisconnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSetControllerConnectedStatusChangedDelegate(FDelegateWithoutParam(Z_Param_OnPicoControllerConnected),FDelegateWithoutParam(Z_Param_OnPicoControllerDisconnected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSwitchArmModelJoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSwitchArmModelJoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetArmModelJoint)
	{
		P_GET_ENUM_REF(EPicoArmModelJoint,Z_Param_Out_OutArmJoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoGetArmModelJoint((EPicoArmModelJoint&)(Z_Param_Out_OutArmJoint));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoChooseArmModelJoint)
	{
		P_GET_ENUM(EPicoArmModelJoint,Z_Param_chosenArmJoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoChooseArmModelJoint(EPicoArmModelJoint(Z_Param_chosenArmJoint));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSetPointerTiltAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSetPointerTiltAngle(Z_Param_NewPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetPointerTiltAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoGetPointerTiltAngle(Z_Param_Out_OutPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetElbowDepth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoGetElbowDepth(Z_Param_Out_OutDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSetElbowDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSetElbowDepth(Z_Param_NewDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetElbowHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoGetElbowHeight(Z_Param_Out_OutHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSetElbowHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSetElbowHeight(Z_Param_NewHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetGazeType)
	{
		P_GET_ENUM_REF(EGazeBehavior,Z_Param_Out_OutGazeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoGetGazeType((EGazeBehavior&)(Z_Param_Out_OutGazeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoSetGazeType)
	{
		P_GET_ENUM(EGazeBehavior,Z_Param_NewGazeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::PicoSetGazeType(EGazeBehavior(Z_Param_NewGazeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execPicoGetControllerBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoMobileControllerBFlib::PicoGetControllerBatteryLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execGetPicoControllerOrientationAndPosition)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoMobileControllerBFlib::GetPicoControllerOrientationAndPosition(Z_Param_Out_OutOrientation,Z_Param_Out_OutPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execGetDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoMobileControllerBFlib::GetDeviceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoMobileControllerBFlib::execIsPicoControllerAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoMobileControllerBFlib::IsPicoControllerAvailable();
		P_NATIVE_END;
	}
	void UPicoMobileControllerBFlib::StaticRegisterNativesUPicoMobileControllerBFlib()
	{
		UClass* Class = UPicoMobileControllerBFlib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceType", &UPicoMobileControllerBFlib::execGetDeviceType },
			{ "GetPicoControllerOrientationAndPosition", &UPicoMobileControllerBFlib::execGetPicoControllerOrientationAndPosition },
			{ "IsPicoControllerAvailable", &UPicoMobileControllerBFlib::execIsPicoControllerAvailable },
			{ "PicoChooseArmModelJoint", &UPicoMobileControllerBFlib::execPicoChooseArmModelJoint },
			{ "PicoGetArmModelJoint", &UPicoMobileControllerBFlib::execPicoGetArmModelJoint },
			{ "PicoGetControllerBatteryLevel", &UPicoMobileControllerBFlib::execPicoGetControllerBatteryLevel },
			{ "PicoGetElbowDepth", &UPicoMobileControllerBFlib::execPicoGetElbowDepth },
			{ "PicoGetElbowHeight", &UPicoMobileControllerBFlib::execPicoGetElbowHeight },
			{ "PicoGetGazeType", &UPicoMobileControllerBFlib::execPicoGetGazeType },
			{ "PicoGetPointerTiltAngle", &UPicoMobileControllerBFlib::execPicoGetPointerTiltAngle },
			{ "PicoResetG1Controller", &UPicoMobileControllerBFlib::execPicoResetG1Controller },
			{ "PicoSetControllerConnectedStatusChangedDelegate", &UPicoMobileControllerBFlib::execPicoSetControllerConnectedStatusChangedDelegate },
			{ "PicoSetElbowDepth", &UPicoMobileControllerBFlib::execPicoSetElbowDepth },
			{ "PicoSetElbowHeight", &UPicoMobileControllerBFlib::execPicoSetElbowHeight },
			{ "PicoSetGazeType", &UPicoMobileControllerBFlib::execPicoSetGazeType },
			{ "PicoSetPointerTiltAngle", &UPicoMobileControllerBFlib::execPicoSetPointerTiltAngle },
			{ "PicoSwitchArmModelJoint", &UPicoMobileControllerBFlib::execPicoSwitchArmModelJoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics
	{
		struct PicoMobileControllerBFlib_eventGetDeviceType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventGetDeviceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoMobile" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "GetDeviceType", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventGetDeviceType_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics
	{
		struct PicoMobileControllerBFlib_eventGetPicoControllerOrientationAndPosition_Parms
		{
			FRotator OutOrientation;
			FVector OutPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventGetPicoControllerOrientationAndPosition_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventGetPicoControllerOrientationAndPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::NewProp_OutPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "GetPicoControllerOrientationAndPosition", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventGetPicoControllerOrientationAndPosition_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics
	{
		struct PicoMobileControllerBFlib_eventIsPicoControllerAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoMobileControllerBFlib_eventIsPicoControllerAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoMobileControllerBFlib_eventIsPicoControllerAvailable_Parms), &Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "IsPicoControllerAvailable", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventIsPicoControllerAvailable_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoChooseArmModelJoint_Parms
		{
			EPicoArmModelJoint chosenArmJoint;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chosenArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chosenArmJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::NewProp_chosenArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::NewProp_chosenArmJoint = { "chosenArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoChooseArmModelJoint_Parms, chosenArmJoint), Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::NewProp_chosenArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::NewProp_chosenArmJoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoChooseArmModelJoint", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoChooseArmModelJoint_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetArmModelJoint_Parms
		{
			EPicoArmModelJoint OutArmJoint;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutArmJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::NewProp_OutArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::NewProp_OutArmJoint = { "OutArmJoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetArmModelJoint_Parms, OutArmJoint), Z_Construct_UEnum_PicoMobileController_EPicoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::NewProp_OutArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::NewProp_OutArmJoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetArmModelJoint", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetArmModelJoint_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetControllerBatteryLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetControllerBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetControllerBatteryLevel", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetControllerBatteryLevel_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetElbowDepth_Parms
		{
			float OutDepth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::NewProp_OutDepth = { "OutDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetElbowDepth_Parms, OutDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::NewProp_OutDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetElbowDepth", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetElbowDepth_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetElbowHeight_Parms
		{
			float OutHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetElbowHeight_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::NewProp_OutHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetElbowHeight", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetElbowHeight_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetGazeType_Parms
		{
			EGazeBehavior OutGazeType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutGazeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::NewProp_OutGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::NewProp_OutGazeType = { "OutGazeType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetGazeType_Parms, OutGazeType), Z_Construct_UEnum_PicoMobileController_EGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::NewProp_OutGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::NewProp_OutGazeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetGazeType", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetGazeType_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoGetPointerTiltAngle_Parms
		{
			float OutPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::NewProp_OutPointerTiltAngle = { "OutPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoGetPointerTiltAngle_Parms, OutPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::NewProp_OutPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoGetPointerTiltAngle", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoGetPointerTiltAngle_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoResetG1Controller_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoMobileControllerBFlib_eventPicoResetG1Controller_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoMobileControllerBFlib_eventPicoResetG1Controller_Parms), &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoResetG1Controller", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoResetG1Controller_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoSetControllerConnectedStatusChangedDelegate_Parms
		{
			FScriptDelegate OnPicoControllerConnected;
			FScriptDelegate OnPicoControllerDisconnected;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPicoControllerConnected;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPicoControllerDisconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::NewProp_OnPicoControllerConnected = { "OnPicoControllerConnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetControllerConnectedStatusChangedDelegate_Parms, OnPicoControllerConnected), Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::NewProp_OnPicoControllerDisconnected = { "OnPicoControllerDisconnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetControllerConnectedStatusChangedDelegate_Parms, OnPicoControllerDisconnected), Z_Construct_UDelegateFunction_PicoMobileController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::NewProp_OnPicoControllerConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::NewProp_OnPicoControllerDisconnected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSetControllerConnectedStatusChangedDelegate", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoSetControllerConnectedStatusChangedDelegate_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoSetElbowDepth_Parms
		{
			float NewDepth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::NewProp_NewDepth = { "NewDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetElbowDepth_Parms, NewDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::NewProp_NewDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSetElbowDepth", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoSetElbowDepth_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoSetElbowHeight_Parms
		{
			float NewHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetElbowHeight_Parms, NewHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::NewProp_NewHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSetElbowHeight", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoSetElbowHeight_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoSetGazeType_Parms
		{
			EGazeBehavior NewGazeType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewGazeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::NewProp_NewGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::NewProp_NewGazeType = { "NewGazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetGazeType_Parms, NewGazeType), Z_Construct_UEnum_PicoMobileController_EGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::NewProp_NewGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::NewProp_NewGazeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSetGazeType", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoSetGazeType_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics
	{
		struct PicoMobileControllerBFlib_eventPicoSetPointerTiltAngle_Parms
		{
			float NewPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::NewProp_NewPointerTiltAngle = { "NewPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoMobileControllerBFlib_eventPicoSetPointerTiltAngle_Parms, NewPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::NewProp_NewPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSetPointerTiltAngle", nullptr, nullptr, sizeof(PicoMobileControllerBFlib_eventPicoSetPointerTiltAngle_Parms), Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Goblin|Controller" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoMobileControllerBFlib, nullptr, "PicoSwitchArmModelJoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoMobileControllerBFlib_NoRegister()
	{
		return UPicoMobileControllerBFlib::StaticClass();
	}
	struct Z_Construct_UClass_UPicoMobileControllerBFlib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoMobileController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_GetDeviceType, "GetDeviceType" }, // 4157598019
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_GetPicoControllerOrientationAndPosition, "GetPicoControllerOrientationAndPosition" }, // 1979287909
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_IsPicoControllerAvailable, "IsPicoControllerAvailable" }, // 2332462847
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoChooseArmModelJoint, "PicoChooseArmModelJoint" }, // 330735242
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetArmModelJoint, "PicoGetArmModelJoint" }, // 3726287924
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetControllerBatteryLevel, "PicoGetControllerBatteryLevel" }, // 516195218
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowDepth, "PicoGetElbowDepth" }, // 3397566172
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetElbowHeight, "PicoGetElbowHeight" }, // 3602374656
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetGazeType, "PicoGetGazeType" }, // 3588553365
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoGetPointerTiltAngle, "PicoGetPointerTiltAngle" }, // 360594664
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoResetG1Controller, "PicoResetG1Controller" }, // 4105533514
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetControllerConnectedStatusChangedDelegate, "PicoSetControllerConnectedStatusChangedDelegate" }, // 2891175194
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowDepth, "PicoSetElbowDepth" }, // 1468148922
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetElbowHeight, "PicoSetElbowHeight" }, // 349128102
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetGazeType, "PicoSetGazeType" }, // 2218707213
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSetPointerTiltAngle, "PicoSetPointerTiltAngle" }, // 1651308264
		{ &Z_Construct_UFunction_UPicoMobileControllerBFlib_PicoSwitchArmModelJoint, "PicoSwitchArmModelJoint" }, // 3183723222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PicoMobileControllerBFlib.h" },
		{ "ModuleRelativePath", "Public/PicoMobileControllerBFlib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoMobileControllerBFlib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::ClassParams = {
		&UPicoMobileControllerBFlib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoMobileControllerBFlib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoMobileControllerBFlib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoMobileControllerBFlib, 2226684639);
	template<> PICOMOBILECONTROLLER_API UClass* StaticClass<UPicoMobileControllerBFlib>()
	{
		return UPicoMobileControllerBFlib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoMobileControllerBFlib(Z_Construct_UClass_UPicoMobileControllerBFlib, &UPicoMobileControllerBFlib::StaticClass, TEXT("/Script/PicoMobileController"), TEXT("UPicoMobileControllerBFlib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoMobileControllerBFlib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
