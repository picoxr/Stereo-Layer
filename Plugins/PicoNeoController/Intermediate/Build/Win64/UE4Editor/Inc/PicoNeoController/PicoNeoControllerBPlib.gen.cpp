// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoNeoController/Public/PicoNeoControllerBPlib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoNeoControllerBPlib() {}
// Cross Module References
	PICONEOCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PicoNeoController();
	PICONEOCONTROLLER_API UEnum* Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior();
	PICONEOCONTROLLER_API UEnum* Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint();
	PICONEOCONTROLLER_API UClass* Z_Construct_UClass_UPicoNeoControllerBPlib_NoRegister();
	PICONEOCONTROLLER_API UClass* Z_Construct_UClass_UPicoNeoControllerBPlib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PicoNeoController, nullptr, "DelegateWithoutParam__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ENeoGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior, Z_Construct_UPackage__Script_PicoNeoController(), TEXT("ENeoGazeBehavior"));
		}
		return Singleton;
	}
	template<> PICONEOCONTROLLER_API UEnum* StaticEnum<ENeoGazeBehavior>()
	{
		return ENeoGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENeoGazeBehavior(ENeoGazeBehavior_StaticEnum, TEXT("/Script/PicoNeoController"), TEXT("ENeoGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior_Hash() { return 1241191011U; }
	UEnum* Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoNeoController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENeoGazeBehavior"), 0, Get_Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENeoGazeBehavior::Never", (int64)ENeoGazeBehavior::Never },
				{ "ENeoGazeBehavior::DuringMotion", (int64)ENeoGazeBehavior::DuringMotion },
				{ "ENeoGazeBehavior::Always", (int64)ENeoGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "ENeoGazeBehavior::Always" },
				{ "BlueprintType", "true" },
				{ "DuringMotion.Name", "ENeoGazeBehavior::DuringMotion" },
				{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
				{ "Never.Name", "ENeoGazeBehavior::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoNeoController,
				nullptr,
				"ENeoGazeBehavior",
				"ENeoGazeBehavior",
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
	static UEnum* EPicoNeoArmModelJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint, Z_Construct_UPackage__Script_PicoNeoController(), TEXT("EPicoNeoArmModelJoint"));
		}
		return Singleton;
	}
	template<> PICONEOCONTROLLER_API UEnum* StaticEnum<EPicoNeoArmModelJoint>()
	{
		return EPicoNeoArmModelJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoNeoArmModelJoint(EPicoNeoArmModelJoint_StaticEnum, TEXT("/Script/PicoNeoController"), TEXT("EPicoNeoArmModelJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint_Hash() { return 118861897U; }
	UEnum* Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoNeoController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoNeoArmModelJoint"), 0, Get_Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoNeoArmModelJoint::Controller", (int64)EPicoNeoArmModelJoint::Controller },
				{ "EPicoNeoArmModelJoint::Wrist", (int64)EPicoNeoArmModelJoint::Wrist },
				{ "EPicoNeoArmModelJoint::Elbow", (int64)EPicoNeoArmModelJoint::Elbow },
				{ "EPicoNeoArmModelJoint::Shoulder", (int64)EPicoNeoArmModelJoint::Shoulder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EPicoNeoArmModelJoint::Controller" },
				{ "Elbow.Name", "EPicoNeoArmModelJoint::Elbow" },
				{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
				{ "Shoulder.Name", "EPicoNeoArmModelJoint::Shoulder" },
				{ "Wrist.Name", "EPicoNeoArmModelJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoNeoController,
				nullptr,
				"EPicoNeoArmModelJoint",
				"EPicoNeoArmModelJoint",
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
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetMainControllerValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetMainControllerValue(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoSubControllerGetArmModel)
	{
		P_GET_ENUM_REF(EPicoNeoArmModelJoint,Z_Param_Out_outArmJoint);
		P_GET_ENUM_REF(ENeoGazeBehavior,Z_Param_Out_outGazeType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outEHeight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outEDepth);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoSubControllerGetArmModel((EPicoNeoArmModelJoint&)(Z_Param_Out_outArmJoint),(ENeoGazeBehavior&)(Z_Param_Out_outGazeType),Z_Param_Out_outEHeight,Z_Param_Out_outEDepth,Z_Param_Out_outPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoMainControllerGetArmModel)
	{
		P_GET_ENUM_REF(EPicoNeoArmModelJoint,Z_Param_Out_outArmJoint);
		P_GET_ENUM_REF(ENeoGazeBehavior,Z_Param_Out_outGazeType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outEHeight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outEDepth);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoMainControllerGetArmModel((EPicoNeoArmModelJoint&)(Z_Param_Out_outArmJoint),(ENeoGazeBehavior&)(Z_Param_Out_outGazeType),Z_Param_Out_outEHeight,Z_Param_Out_outEDepth,Z_Param_Out_outPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoSubControllerSetArmModel)
	{
		P_GET_ENUM(EPicoNeoArmModelJoint,Z_Param_inArmJoint);
		P_GET_ENUM(ENeoGazeBehavior,Z_Param_inGazeType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inEHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inEDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoSubControllerSetArmModel(EPicoNeoArmModelJoint(Z_Param_inArmJoint),ENeoGazeBehavior(Z_Param_inGazeType),Z_Param_inEHeight,Z_Param_inEDepth,Z_Param_inPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoMainControllerSetArmModel)
	{
		P_GET_ENUM(EPicoNeoArmModelJoint,Z_Param_inArmJoint);
		P_GET_ENUM(ENeoGazeBehavior,Z_Param_inGazeType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inEHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inEDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inPointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoMainControllerSetArmModel(EPicoNeoArmModelJoint(Z_Param_inArmJoint),ENeoGazeBehavior(Z_Param_inGazeType),Z_Param_inEHeight,Z_Param_inEDepth,Z_Param_inPointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoShakeCV2Controller)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_time);
		P_GET_PROPERTY(FIntProperty,Z_Param_hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoShakeCV2Controller(Z_Param_strength,Z_Param_time,Z_Param_hand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoShakeSubController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoShakeSubController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoShakeMainController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoShakeMainController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetRightControllerLvc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetRightControllerLvc(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetLeftControllerLvc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetLeftControllerLvc(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetRightControllerAgl)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetRightControllerAgl(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetLeftControllerAgl)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetLeftControllerAgl(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetRightControllerAcc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetRightControllerAcc(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execPicoGetLeftControllerAcc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::PicoGetLeftControllerAcc(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execSetControllerConnectedStatusDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnMainControllerConnect);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnMainControllerDisconnect);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSubControllerConnect);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSubControllerDisconnect);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::SetControllerConnectedStatusDelegate(FDelegateWithoutParam(Z_Param_OnMainControllerConnect),FDelegateWithoutParam(Z_Param_OnMainControllerDisconnect),FDelegateWithoutParam(Z_Param_OnSubControllerConnect),FDelegateWithoutParam(Z_Param_OnSubControllerDisconnect));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execSetNativeTreadStartDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNativeTreadStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoNeoControllerBPlib::SetNativeTreadStartDelegate(FDelegateWithoutParam(Z_Param_OnNativeTreadStart));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execGetSubControllerBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoNeoControllerBPlib::GetSubControllerBatteryLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execGetMainControllerBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoNeoControllerBPlib::GetMainControllerBatteryLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execIsSubControllerSupport6Dof)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoNeoControllerBPlib::IsSubControllerSupport6Dof();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execIsMainControllerSupport6Dof)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoNeoControllerBPlib::IsMainControllerSupport6Dof();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execIsSubControllerConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoNeoControllerBPlib::IsSubControllerConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execIsMainControllerConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoNeoControllerBPlib::IsMainControllerConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoNeoControllerBPlib::execGetNeoDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoNeoControllerBPlib::GetNeoDeviceType();
		P_NATIVE_END;
	}
	void UPicoNeoControllerBPlib::StaticRegisterNativesUPicoNeoControllerBPlib()
	{
		UClass* Class = UPicoNeoControllerBPlib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainControllerBatteryLevel", &UPicoNeoControllerBPlib::execGetMainControllerBatteryLevel },
			{ "GetNeoDeviceType", &UPicoNeoControllerBPlib::execGetNeoDeviceType },
			{ "GetSubControllerBatteryLevel", &UPicoNeoControllerBPlib::execGetSubControllerBatteryLevel },
			{ "IsMainControllerConnect", &UPicoNeoControllerBPlib::execIsMainControllerConnect },
			{ "IsMainControllerSupport6Dof", &UPicoNeoControllerBPlib::execIsMainControllerSupport6Dof },
			{ "IsSubControllerConnect", &UPicoNeoControllerBPlib::execIsSubControllerConnect },
			{ "IsSubControllerSupport6Dof", &UPicoNeoControllerBPlib::execIsSubControllerSupport6Dof },
			{ "PicoGetLeftControllerAcc", &UPicoNeoControllerBPlib::execPicoGetLeftControllerAcc },
			{ "PicoGetLeftControllerAgl", &UPicoNeoControllerBPlib::execPicoGetLeftControllerAgl },
			{ "PicoGetLeftControllerLvc", &UPicoNeoControllerBPlib::execPicoGetLeftControllerLvc },
			{ "PicoGetMainControllerValue", &UPicoNeoControllerBPlib::execPicoGetMainControllerValue },
			{ "PicoGetRightControllerAcc", &UPicoNeoControllerBPlib::execPicoGetRightControllerAcc },
			{ "PicoGetRightControllerAgl", &UPicoNeoControllerBPlib::execPicoGetRightControllerAgl },
			{ "PicoGetRightControllerLvc", &UPicoNeoControllerBPlib::execPicoGetRightControllerLvc },
			{ "PicoMainControllerGetArmModel", &UPicoNeoControllerBPlib::execPicoMainControllerGetArmModel },
			{ "PicoMainControllerSetArmModel", &UPicoNeoControllerBPlib::execPicoMainControllerSetArmModel },
			{ "PicoShakeCV2Controller", &UPicoNeoControllerBPlib::execPicoShakeCV2Controller },
			{ "PicoShakeMainController", &UPicoNeoControllerBPlib::execPicoShakeMainController },
			{ "PicoShakeSubController", &UPicoNeoControllerBPlib::execPicoShakeSubController },
			{ "PicoSubControllerGetArmModel", &UPicoNeoControllerBPlib::execPicoSubControllerGetArmModel },
			{ "PicoSubControllerSetArmModel", &UPicoNeoControllerBPlib::execPicoSubControllerSetArmModel },
			{ "SetControllerConnectedStatusDelegate", &UPicoNeoControllerBPlib::execSetControllerConnectedStatusDelegate },
			{ "SetNativeTreadStartDelegate", &UPicoNeoControllerBPlib::execSetNativeTreadStartDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics
	{
		struct PicoNeoControllerBPlib_eventGetMainControllerBatteryLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventGetMainControllerBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "GetMainControllerBatteryLevel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventGetMainControllerBatteryLevel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics
	{
		struct PicoNeoControllerBPlib_eventGetNeoDeviceType_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventGetNeoDeviceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "GetNeoDeviceType", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventGetNeoDeviceType_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics
	{
		struct PicoNeoControllerBPlib_eventGetSubControllerBatteryLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventGetSubControllerBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "GetSubControllerBatteryLevel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventGetSubControllerBatteryLevel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics
	{
		struct PicoNeoControllerBPlib_eventIsMainControllerConnect_Parms
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
	void Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoNeoControllerBPlib_eventIsMainControllerConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoNeoControllerBPlib_eventIsMainControllerConnect_Parms), &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "IsMainControllerConnect", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventIsMainControllerConnect_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics
	{
		struct PicoNeoControllerBPlib_eventIsMainControllerSupport6Dof_Parms
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
	void Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoNeoControllerBPlib_eventIsMainControllerSupport6Dof_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoNeoControllerBPlib_eventIsMainControllerSupport6Dof_Parms), &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "IsMainControllerSupport6Dof", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventIsMainControllerSupport6Dof_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics
	{
		struct PicoNeoControllerBPlib_eventIsSubControllerConnect_Parms
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
	void Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoNeoControllerBPlib_eventIsSubControllerConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoNeoControllerBPlib_eventIsSubControllerConnect_Parms), &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "IsSubControllerConnect", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventIsSubControllerConnect_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics
	{
		struct PicoNeoControllerBPlib_eventIsSubControllerSupport6Dof_Parms
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
	void Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoNeoControllerBPlib_eventIsSubControllerSupport6Dof_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoNeoControllerBPlib_eventIsSubControllerSupport6Dof_Parms), &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "IsSubControllerSupport6Dof", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventIsSubControllerSupport6Dof_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetLeftControllerAcc_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetLeftControllerAcc_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetLeftControllerAcc", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetLeftControllerAcc_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetLeftControllerAgl_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetLeftControllerAgl_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetLeftControllerAgl", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetLeftControllerAgl_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetLeftControllerLvc_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetLeftControllerLvc_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetLeftControllerLvc", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetLeftControllerLvc_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetMainControllerValue_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetMainControllerValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetMainControllerValue", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetMainControllerValue_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetRightControllerAcc_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetRightControllerAcc_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetRightControllerAcc", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetRightControllerAcc_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetRightControllerAgl_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetRightControllerAgl_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetRightControllerAgl", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetRightControllerAgl_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoGetRightControllerLvc_Parms
		{
			FVector value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoGetRightControllerLvc_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoGetRightControllerLvc", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoGetRightControllerLvc_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms
		{
			EPicoNeoArmModelJoint outArmJoint;
			ENeoGazeBehavior outGazeType;
			float outEHeight;
			float outEDepth;
			float outPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outGazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outEHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outEDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outArmJoint = { "outArmJoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms, outArmJoint), Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outGazeType = { "outGazeType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms, outGazeType), Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outEHeight = { "outEHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms, outEHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outEDepth = { "outEDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms, outEDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outPointerTiltAngle = { "outPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms, outPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outGazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outEHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outEDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::NewProp_outPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoMainControllerGetArmModel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoMainControllerGetArmModel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms
		{
			EPicoNeoArmModelJoint inArmJoint;
			ENeoGazeBehavior inGazeType;
			float inEHeight;
			float inEDepth;
			float inPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inEHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inEDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inArmJoint = { "inArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms, inArmJoint), Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inGazeType = { "inGazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms, inGazeType), Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inEHeight = { "inEHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms, inEHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inEDepth = { "inEDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms, inEDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inPointerTiltAngle = { "inPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms, inPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inGazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inEHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inEDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::NewProp_inPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "inArmJoint", "Controller" },
		{ "inEDepth", "0.0" },
		{ "inEHeight", "0.0" },
		{ "inGazeType", "DuringMotion" },
		{ "inPointerTiltAngle", "15.0" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoMainControllerSetArmModel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoMainControllerSetArmModel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoShakeCV2Controller_Parms
		{
			float strength;
			int32 time;
			int32 hand;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strength;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoShakeCV2Controller_Parms, strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoShakeCV2Controller_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_hand = { "hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoShakeCV2Controller_Parms, hand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::NewProp_hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoShakeCV2Controller", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoShakeCV2Controller_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoShakeMainController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoShakeSubController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms
		{
			EPicoNeoArmModelJoint outArmJoint;
			ENeoGazeBehavior outGazeType;
			float outEHeight;
			float outEDepth;
			float outPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outGazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outEHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outEDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outArmJoint = { "outArmJoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms, outArmJoint), Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outGazeType = { "outGazeType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms, outGazeType), Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outEHeight = { "outEHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms, outEHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outEDepth = { "outEDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms, outEDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outPointerTiltAngle = { "outPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms, outPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outGazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outEHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outEDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::NewProp_outPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoSubControllerGetArmModel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoSubControllerGetArmModel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics
	{
		struct PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms
		{
			EPicoNeoArmModelJoint inArmJoint;
			ENeoGazeBehavior inGazeType;
			float inEHeight;
			float inEDepth;
			float inPointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inEHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inEDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inPointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inArmJoint = { "inArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms, inArmJoint), Z_Construct_UEnum_PicoNeoController_EPicoNeoArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inGazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inGazeType = { "inGazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms, inGazeType), Z_Construct_UEnum_PicoNeoController_ENeoGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inEHeight = { "inEHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms, inEHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inEDepth = { "inEDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms, inEDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inPointerTiltAngle = { "inPointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms, inPointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inGazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inGazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inEHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inEDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::NewProp_inPointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "inArmJoint", "Controller" },
		{ "inEDepth", "0.0" },
		{ "inEHeight", "0.0" },
		{ "inGazeType", "DuringMotion" },
		{ "inPointerTiltAngle", "15.0" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "PicoSubControllerSetArmModel", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventPicoSubControllerSetArmModel_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics
	{
		struct PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms
		{
			FScriptDelegate OnMainControllerConnect;
			FScriptDelegate OnMainControllerDisconnect;
			FScriptDelegate OnSubControllerConnect;
			FScriptDelegate OnSubControllerDisconnect;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMainControllerConnect;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMainControllerDisconnect;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubControllerConnect;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubControllerDisconnect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnMainControllerConnect = { "OnMainControllerConnect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms, OnMainControllerConnect), Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnMainControllerDisconnect = { "OnMainControllerDisconnect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms, OnMainControllerDisconnect), Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnSubControllerConnect = { "OnSubControllerConnect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms, OnSubControllerConnect), Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnSubControllerDisconnect = { "OnSubControllerDisconnect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms, OnSubControllerDisconnect), Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnMainControllerConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnMainControllerDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnSubControllerConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::NewProp_OnSubControllerDisconnect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "SetControllerConnectedStatusDelegate", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventSetControllerConnectedStatusDelegate_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics
	{
		struct PicoNeoControllerBPlib_eventSetNativeTreadStartDelegate_Parms
		{
			FScriptDelegate OnNativeTreadStart;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNativeTreadStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::NewProp_OnNativeTreadStart = { "OnNativeTreadStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoNeoControllerBPlib_eventSetNativeTreadStartDelegate_Parms, OnNativeTreadStart), Z_Construct_UDelegateFunction_PicoNeoController_DelegateWithoutParam__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::NewProp_OnNativeTreadStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Neo|Controller" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoNeoControllerBPlib, nullptr, "SetNativeTreadStartDelegate", nullptr, nullptr, sizeof(PicoNeoControllerBPlib_eventSetNativeTreadStartDelegate_Parms), Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoNeoControllerBPlib_NoRegister()
	{
		return UPicoNeoControllerBPlib::StaticClass();
	}
	struct Z_Construct_UClass_UPicoNeoControllerBPlib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoNeoController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_GetMainControllerBatteryLevel, "GetMainControllerBatteryLevel" }, // 3676281980
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_GetNeoDeviceType, "GetNeoDeviceType" }, // 2945793196
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_GetSubControllerBatteryLevel, "GetSubControllerBatteryLevel" }, // 3814063488
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerConnect, "IsMainControllerConnect" }, // 2030007178
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsMainControllerSupport6Dof, "IsMainControllerSupport6Dof" }, // 28182015
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerConnect, "IsSubControllerConnect" }, // 2325655711
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_IsSubControllerSupport6Dof, "IsSubControllerSupport6Dof" }, // 1059139462
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAcc, "PicoGetLeftControllerAcc" }, // 428812435
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerAgl, "PicoGetLeftControllerAgl" }, // 3997366978
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetLeftControllerLvc, "PicoGetLeftControllerLvc" }, // 1203509350
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetMainControllerValue, "PicoGetMainControllerValue" }, // 2597676420
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAcc, "PicoGetRightControllerAcc" }, // 272983947
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerAgl, "PicoGetRightControllerAgl" }, // 869729432
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoGetRightControllerLvc, "PicoGetRightControllerLvc" }, // 1228949458
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerGetArmModel, "PicoMainControllerGetArmModel" }, // 1636603621
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoMainControllerSetArmModel, "PicoMainControllerSetArmModel" }, // 384346318
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeCV2Controller, "PicoShakeCV2Controller" }, // 737132940
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeMainController, "PicoShakeMainController" }, // 1550911619
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoShakeSubController, "PicoShakeSubController" }, // 2688194352
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerGetArmModel, "PicoSubControllerGetArmModel" }, // 1546211457
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_PicoSubControllerSetArmModel, "PicoSubControllerSetArmModel" }, // 1328919932
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_SetControllerConnectedStatusDelegate, "SetControllerConnectedStatusDelegate" }, // 1718614183
		{ &Z_Construct_UFunction_UPicoNeoControllerBPlib_SetNativeTreadStartDelegate, "SetNativeTreadStartDelegate" }, // 351310046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PicoNeoControllerBPlib.h" },
		{ "ModuleRelativePath", "Public/PicoNeoControllerBPlib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoNeoControllerBPlib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::ClassParams = {
		&UPicoNeoControllerBPlib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoNeoControllerBPlib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoNeoControllerBPlib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoNeoControllerBPlib, 491768481);
	template<> PICONEOCONTROLLER_API UClass* StaticClass<UPicoNeoControllerBPlib>()
	{
		return UPicoNeoControllerBPlib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoNeoControllerBPlib(Z_Construct_UClass_UPicoNeoControllerBPlib, &UPicoNeoControllerBPlib::StaticClass, TEXT("/Script/PicoNeoController"), TEXT("UPicoNeoControllerBPlib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoNeoControllerBPlib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
