// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPicoNeoArmModelJoint : uint8;
enum class ENeoGazeBehavior : uint8;
struct FVector;
#ifdef PICONEOCONTROLLER_PicoNeoControllerBPlib_generated_h
#error "PicoNeoControllerBPlib.generated.h already included, missing '#pragma once' in PicoNeoControllerBPlib.h"
#endif
#define PICONEOCONTROLLER_PicoNeoControllerBPlib_generated_h

#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_8_DELEGATE \
static inline void FDelegateWithoutParam_DelegateWrapper(const FScriptDelegate& DelegateWithoutParam) \
{ \
	DelegateWithoutParam.ProcessDelegate<UObject>(NULL); \
}


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_SPARSE_DATA
#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPicoGetMainControllerValue); \
	DECLARE_FUNCTION(execPicoSubControllerGetArmModel); \
	DECLARE_FUNCTION(execPicoMainControllerGetArmModel); \
	DECLARE_FUNCTION(execPicoSubControllerSetArmModel); \
	DECLARE_FUNCTION(execPicoMainControllerSetArmModel); \
	DECLARE_FUNCTION(execPicoShakeCV2Controller); \
	DECLARE_FUNCTION(execPicoShakeSubController); \
	DECLARE_FUNCTION(execPicoShakeMainController); \
	DECLARE_FUNCTION(execPicoGetRightControllerLvc); \
	DECLARE_FUNCTION(execPicoGetLeftControllerLvc); \
	DECLARE_FUNCTION(execPicoGetRightControllerAgl); \
	DECLARE_FUNCTION(execPicoGetLeftControllerAgl); \
	DECLARE_FUNCTION(execPicoGetRightControllerAcc); \
	DECLARE_FUNCTION(execPicoGetLeftControllerAcc); \
	DECLARE_FUNCTION(execSetControllerConnectedStatusDelegate); \
	DECLARE_FUNCTION(execSetNativeTreadStartDelegate); \
	DECLARE_FUNCTION(execGetSubControllerBatteryLevel); \
	DECLARE_FUNCTION(execGetMainControllerBatteryLevel); \
	DECLARE_FUNCTION(execIsSubControllerSupport6Dof); \
	DECLARE_FUNCTION(execIsMainControllerSupport6Dof); \
	DECLARE_FUNCTION(execIsSubControllerConnect); \
	DECLARE_FUNCTION(execIsMainControllerConnect); \
	DECLARE_FUNCTION(execGetNeoDeviceType);


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPicoGetMainControllerValue); \
	DECLARE_FUNCTION(execPicoSubControllerGetArmModel); \
	DECLARE_FUNCTION(execPicoMainControllerGetArmModel); \
	DECLARE_FUNCTION(execPicoSubControllerSetArmModel); \
	DECLARE_FUNCTION(execPicoMainControllerSetArmModel); \
	DECLARE_FUNCTION(execPicoShakeCV2Controller); \
	DECLARE_FUNCTION(execPicoShakeSubController); \
	DECLARE_FUNCTION(execPicoShakeMainController); \
	DECLARE_FUNCTION(execPicoGetRightControllerLvc); \
	DECLARE_FUNCTION(execPicoGetLeftControllerLvc); \
	DECLARE_FUNCTION(execPicoGetRightControllerAgl); \
	DECLARE_FUNCTION(execPicoGetLeftControllerAgl); \
	DECLARE_FUNCTION(execPicoGetRightControllerAcc); \
	DECLARE_FUNCTION(execPicoGetLeftControllerAcc); \
	DECLARE_FUNCTION(execSetControllerConnectedStatusDelegate); \
	DECLARE_FUNCTION(execSetNativeTreadStartDelegate); \
	DECLARE_FUNCTION(execGetSubControllerBatteryLevel); \
	DECLARE_FUNCTION(execGetMainControllerBatteryLevel); \
	DECLARE_FUNCTION(execIsSubControllerSupport6Dof); \
	DECLARE_FUNCTION(execIsMainControllerSupport6Dof); \
	DECLARE_FUNCTION(execIsSubControllerConnect); \
	DECLARE_FUNCTION(execIsMainControllerConnect); \
	DECLARE_FUNCTION(execGetNeoDeviceType);


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoNeoControllerBPlib(); \
	friend struct Z_Construct_UClass_UPicoNeoControllerBPlib_Statics; \
public: \
	DECLARE_CLASS(UPicoNeoControllerBPlib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoNeoController"), NO_API) \
	DECLARE_SERIALIZER(UPicoNeoControllerBPlib)


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPicoNeoControllerBPlib(); \
	friend struct Z_Construct_UClass_UPicoNeoControllerBPlib_Statics; \
public: \
	DECLARE_CLASS(UPicoNeoControllerBPlib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoNeoController"), NO_API) \
	DECLARE_SERIALIZER(UPicoNeoControllerBPlib)


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoNeoControllerBPlib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoNeoControllerBPlib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoNeoControllerBPlib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoNeoControllerBPlib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoNeoControllerBPlib(UPicoNeoControllerBPlib&&); \
	NO_API UPicoNeoControllerBPlib(const UPicoNeoControllerBPlib&); \
public:


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoNeoControllerBPlib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoNeoControllerBPlib(UPicoNeoControllerBPlib&&); \
	NO_API UPicoNeoControllerBPlib(const UPicoNeoControllerBPlib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoNeoControllerBPlib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoNeoControllerBPlib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoNeoControllerBPlib)


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_PRIVATE_PROPERTY_OFFSET
#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_26_PROLOG
#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_PRIVATE_PROPERTY_OFFSET \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_SPARSE_DATA \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_RPC_WRAPPERS \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_INCLASS \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_PRIVATE_PROPERTY_OFFSET \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_SPARSE_DATA \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_INCLASS_NO_PURE_DECLS \
	Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICONEOCONTROLLER_API UClass* StaticClass<class UPicoNeoControllerBPlib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pico_Layer_Demo_Plugins_PicoNeoController_Source_PicoNeoController_Public_PicoNeoControllerBPlib_h


#define FOREACH_ENUM_ENEOGAZEBEHAVIOR(op) \
	op(ENeoGazeBehavior::Never) \
	op(ENeoGazeBehavior::DuringMotion) \
	op(ENeoGazeBehavior::Always) 

enum class ENeoGazeBehavior : uint8;
template<> PICONEOCONTROLLER_API UEnum* StaticEnum<ENeoGazeBehavior>();

#define FOREACH_ENUM_EPICONEOARMMODELJOINT(op) \
	op(EPicoNeoArmModelJoint::Controller) \
	op(EPicoNeoArmModelJoint::Wrist) \
	op(EPicoNeoArmModelJoint::Elbow) \
	op(EPicoNeoArmModelJoint::Shoulder) 

enum class EPicoNeoArmModelJoint : uint8;
template<> PICONEOCONTROLLER_API UEnum* StaticEnum<EPicoNeoArmModelJoint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
