// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TACTICALVRCORE_TVRPistolSlide_generated_h
#error "TVRPistolSlide.generated.h already included, missing '#pragma once' in TVRPistolSlide.h"
#endif
#define TACTICALVRCORE_TVRPistolSlide_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndFiringCycle);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndFiringCycle);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRPistolSlide(); \
	friend struct Z_Construct_UClass_UTVRPistolSlide_Statics; \
public: \
	DECLARE_CLASS(UTVRPistolSlide, UGrippableStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRPistolSlide) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRPistolSlide*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTVRPistolSlide(); \
	friend struct Z_Construct_UClass_UTVRPistolSlide_Statics; \
public: \
	DECLARE_CLASS(UTVRPistolSlide, UGrippableStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRPistolSlide) \
	virtual UObject* _getUObject() const override { return const_cast<UTVRPistolSlide*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRPistolSlide(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRPistolSlide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRPistolSlide); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRPistolSlide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRPistolSlide(UTVRPistolSlide&&); \
	NO_API UTVRPistolSlide(const UTVRPistolSlide&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRPistolSlide(UTVRPistolSlide&&); \
	NO_API UTVRPistolSlide(const UTVRPistolSlide&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRPistolSlide); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRPistolSlide); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRPistolSlide)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChargingHandleStiffness() { return STRUCT_OFFSET(UTVRPistolSlide, ChargingHandleStiffness); } \
	FORCEINLINE static uint32 __PPO__MaxDeflection() { return STRUCT_OFFSET(UTVRPistolSlide, MaxDeflection); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UTVRPistolSlide, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__SlideSoundCue() { return STRUCT_OFFSET(UTVRPistolSlide, SlideSoundCue); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_13_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRPistolSlide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRPistolSlide_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
