// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
#ifdef TACTICALVRCORE_TVRTriggerComponent_generated_h
#error "TVRTriggerComponent.generated.h already included, missing '#pragma once' in TVRTriggerComponent.h"
#endif
#define TACTICALVRCORE_TVRTriggerComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_12_DELEGATE \
static inline void FTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& TriggerEvent) \
{ \
	TriggerEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoesTriggerNeedReset); \
	DECLARE_FUNCTION(execGetTriggerResetValue); \
	DECLARE_FUNCTION(execGetTriggerActivateValue); \
	DECLARE_FUNCTION(execGetTriggerValue); \
	DECLARE_FUNCTION(execDeactivateTrigger); \
	DECLARE_FUNCTION(execActivateTrigger);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoesTriggerNeedReset); \
	DECLARE_FUNCTION(execGetTriggerResetValue); \
	DECLARE_FUNCTION(execGetTriggerActivateValue); \
	DECLARE_FUNCTION(execGetTriggerValue); \
	DECLARE_FUNCTION(execDeactivateTrigger); \
	DECLARE_FUNCTION(execActivateTrigger);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRTriggerComponent(); \
	friend struct Z_Construct_UClass_UTVRTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRTriggerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRTriggerComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTVRTriggerComponent(); \
	friend struct Z_Construct_UClass_UTVRTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRTriggerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRTriggerComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRTriggerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRTriggerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRTriggerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRTriggerComponent(UTVRTriggerComponent&&); \
	NO_API UTVRTriggerComponent(const UTVRTriggerComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRTriggerComponent(UTVRTriggerComponent&&); \
	NO_API UTVRTriggerComponent(const UTVRTriggerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTVRTriggerComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerActivate() { return STRUCT_OFFSET(UTVRTriggerComponent, TriggerActivate); } \
	FORCEINLINE static uint32 __PPO__TriggerReset() { return STRUCT_OFFSET(UTVRTriggerComponent, TriggerReset); } \
	FORCEINLINE static uint32 __PPO__bDualStageTrigger() { return STRUCT_OFFSET(UTVRTriggerComponent, bDualStageTrigger); } \
	FORCEINLINE static uint32 __PPO__TriggerActivate2() { return STRUCT_OFFSET(UTVRTriggerComponent, TriggerActivate2); } \
	FORCEINLINE static uint32 __PPO__TriggerReset2() { return STRUCT_OFFSET(UTVRTriggerComponent, TriggerReset2); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_13_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRTriggerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRTriggerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
