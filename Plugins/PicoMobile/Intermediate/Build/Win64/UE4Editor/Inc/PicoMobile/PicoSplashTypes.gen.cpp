// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoMobile/Public/PicoSplashTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSplashTypes() {}
// Cross Module References
	PICOMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FPicoSplashDesc();
	UPackage* Z_Construct_UPackage__Script_PicoMobile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FPicoSplashDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FPicoSplashDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoSplashDesc, Z_Construct_UPackage__Script_PicoMobile(), TEXT("PicoSplashDesc"), sizeof(FPicoSplashDesc), Get_Z_Construct_UScriptStruct_FPicoSplashDesc_Hash());
	}
	return Singleton;
}
template<> PICOMOBILE_API UScriptStruct* StaticStruct<FPicoSplashDesc>()
{
	return FPicoSplashDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoSplashDesc(FPicoSplashDesc::StaticStruct, TEXT("/Script/PicoMobile"), TEXT("PicoSplashDesc"), false, nullptr, nullptr);
static struct FScriptStruct_PicoMobile_StaticRegisterNativesFPicoSplashDesc
{
	FScriptStruct_PicoMobile_StaticRegisterNativesFPicoSplashDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PicoSplashDesc")),new UScriptStruct::TCppStructOps<FPicoSplashDesc>);
	}
} ScriptStruct_PicoMobile_StaticRegisterNativesFPicoSplashDesc;
	struct Z_Construct_UScriptStruct_FPicoSplashDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PicoSplashTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoSplashDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PicoSplashTypes.h" },
		{ "ToolTip", "Texture to display" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TexturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PicoSplashTypes.h" },
		{ "ToolTip", "transform of center of quad (meters)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TransformInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TransformInMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PicoSplashTypes.h" },
		{ "ToolTip", "Dimensions in meters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_TransformInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::NewProp_QuadSizeInMeters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PicoMobile,
		nullptr,
		&NewStructOps,
		"PicoSplashDesc",
		sizeof(FPicoSplashDesc),
		alignof(FPicoSplashDesc),
		Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoSplashDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoSplashDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PicoMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoSplashDesc"), sizeof(FPicoSplashDesc), Get_Z_Construct_UScriptStruct_FPicoSplashDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoSplashDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoSplashDesc_Hash() { return 738852006U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
