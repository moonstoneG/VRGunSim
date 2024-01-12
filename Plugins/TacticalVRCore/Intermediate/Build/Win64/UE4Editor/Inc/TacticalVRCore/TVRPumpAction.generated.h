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
#ifdef TACTICALVRCORE_TVRPumpAction_generated_h
#error "TVRPumpAction.generated.h already included, missing '#pragma once' in TVRPumpAction.h"
#endif
#define TACTICALVRCORE_TVRPumpAction_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStopUse); \
	DECLARE_FUNCTION(execOnStartUse); \
	DECLARE_FUNCTION(execOnGripped);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStopUse); \
	DECLARE_FUNCTION(execOnStartUse); \
	DECLARE_FUNCTION(execOnGripped);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRPumpAction(); \
	friend struct Z_Construct_UClass_UTVRPumpAction_Statics; \
public: \
	DECLARE_CLASS(UTVRPumpAction, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRPumpAction) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRPumpAction*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTVRPumpAction(); \
	friend struct Z_Construct_UClass_UTVRPumpAction_Statics; \
public: \
	DECLARE_CLASS(UTVRPumpAction, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRPumpAction) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRPumpAction*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRPumpAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRPumpAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRPumpAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRPumpAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRPumpAction(UTVRPumpAction&&); \
	NO_API UTVRPumpAction(const UTVRPumpAction&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRPumpAction(UTVRPumpAction&&); \
	NO_API UTVRPumpAction(const UTVRPumpAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRPumpAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRPumpAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRPumpAction)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UTVRPumpAction, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__PumpActionSoundCue() { return STRUCT_OFFSET(UTVRPumpAction, PumpActionSoundCue); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_14_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRPumpAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPumpAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
