// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
struct FBPActorGripInformation;
struct FTransform;
#ifdef TACTICALVRCORE_TVRChargingHandle_generated_h
#error "TVRChargingHandle.generated.h already included, missing '#pragma once' in TVRChargingHandle.h"
#endif
#define TACTICALVRCORE_TVRChargingHandle_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_13_DELEGATE \
struct _Script_TacticalVRCore_eventTickChargingHandleDelegate_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FTickChargingHandleDelegate_DelegateWrapper(const FMulticastScriptDelegate& TickChargingHandleDelegate, float DeltaTime) \
{ \
	_Script_TacticalVRCore_eventTickChargingHandleDelegate_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	TickChargingHandleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_12_DELEGATE \
struct _Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms \
{ \
	UGripMotionControllerComponent* GrippingController; \
	FBPActorGripInformation GripInformation; \
	float DeltaTime; \
}; \
static inline void FTickChargignHandleGripDelegate_DelegateWrapper(const FMulticastScriptDelegate& TickChargignHandleGripDelegate, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime) \
{ \
	_Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms Parms; \
	Parms.GrippingController=GrippingController; \
	Parms.GripInformation=GripInformation; \
	Parms.DeltaTime=DeltaTime; \
	TickChargignHandleGripDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRelativeGripTransform);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRelativeGripTransform);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRChargingHandle(); \
	friend struct Z_Construct_UClass_UTVRChargingHandle_Statics; \
public: \
	DECLARE_CLASS(UTVRChargingHandle, UGrippableBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRChargingHandle) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRChargingHandle*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTVRChargingHandle(); \
	friend struct Z_Construct_UClass_UTVRChargingHandle_Statics; \
public: \
	DECLARE_CLASS(UTVRChargingHandle, UGrippableBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRChargingHandle) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRChargingHandle*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRChargingHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRChargingHandle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRChargingHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRChargingHandle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRChargingHandle(UTVRChargingHandle&&); \
	NO_API UTVRChargingHandle(const UTVRChargingHandle&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRChargingHandle(UTVRChargingHandle&&); \
	NO_API UTVRChargingHandle(const UTVRChargingHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRChargingHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRChargingHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRChargingHandle)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChargingHandleStiffness() { return STRUCT_OFFSET(UTVRChargingHandle, ChargingHandleStiffness); } \
	FORCEINLINE static uint32 __PPO__MaxDeflection() { return STRUCT_OFFSET(UTVRChargingHandle, MaxDeflection); } \
	FORCEINLINE static uint32 __PPO__bIsReciprocating() { return STRUCT_OFFSET(UTVRChargingHandle, bIsReciprocating); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UTVRChargingHandle, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__ChargingHandleSoundCue() { return STRUCT_OFFSET(UTVRChargingHandle, ChargingHandleSoundCue); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_18_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRChargingHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
