// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ATVRCartridge;
struct FHitResult;
enum class ETVRFireMode : uint8;
#ifdef TACTICALVRCORE_TVRGunFireComponent_generated_h
#error "TVRGunFireComponent.generated.h already included, missing '#pragma once' in TVRGunFireComponent.h"
#endif
#define TACTICALVRCORE_TVRGunFireComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_25_DELEGATE \
struct _Script_TacticalVRCore_eventFireOverrideEvent_Parms \
{ \
	FVector FireDirection; \
	TSubclassOf<ATVRCartridge>  CartridgeClass; \
}; \
static inline void FFireOverrideEvent_DelegateWrapper(const FMulticastScriptDelegate& FireOverrideEvent, FVector const& FireDirection, TSubclassOf<ATVRCartridge>  CartridgeClass) \
{ \
	_Script_TacticalVRCore_eventFireOverrideEvent_Parms Parms; \
	Parms.FireDirection=FireDirection; \
	Parms.CartridgeClass=CartridgeClass; \
	FireOverrideEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_22_DELEGATE \
struct _Script_TacticalVRCore_eventFireHitEvent_Parms \
{ \
	FHitResult Hit; \
	TSubclassOf<ATVRCartridge>  CartridgeClass; \
}; \
static inline void FFireHitEvent_DelegateWrapper(const FMulticastScriptDelegate& FireHitEvent, FHitResult const& Hit, TSubclassOf<ATVRCartridge>  CartridgeClass) \
{ \
	_Script_TacticalVRCore_eventFireHitEvent_Parms Parms; \
	Parms.Hit=Hit; \
	Parms.CartridgeClass=CartridgeClass; \
	FireHitEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_19_DELEGATE \
static inline void FFiringCompEvent_DelegateWrapper(const FMulticastScriptDelegate& FiringCompEvent) \
{ \
	FiringCompEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_RPC_WRAPPERS \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void MulticastSimulateHit_Implementation(FHitResult const& Hit, TSubclassOf<ATVRCartridge>  Cartridge); \
	virtual bool ServerReceiveHit_Validate(FHitResult const& , TSubclassOf<ATVRCartridge>  ); \
	virtual void ServerReceiveHit_Implementation(FHitResult const& Hit, TSubclassOf<ATVRCartridge>  Cartridge); \
	virtual void MulticastSimulateEmpty_Implementation(); \
	virtual void MulticastSimulateFire_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCartridgeSpent); \
	DECLARE_FUNCTION(execGetLoadedCartridge); \
	DECLARE_FUNCTION(execTryEjectCartridge); \
	DECLARE_FUNCTION(execTryLoadCartridge); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execHasRoundLoaded); \
	DECLARE_FUNCTION(execHasFiringMode); \
	DECLARE_FUNCTION(execSetFireMode); \
	DECLARE_FUNCTION(execGetCurrentFireMode); \
	DECLARE_FUNCTION(execMulticastSimulateHit); \
	DECLARE_FUNCTION(execServerReceiveHit); \
	DECLARE_FUNCTION(execFireBuckshot); \
	DECLARE_FUNCTION(execLocalSimulateEmpty); \
	DECLARE_FUNCTION(execMulticastSimulateEmpty); \
	DECLARE_FUNCTION(execMulticastSimulateFire);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCartridgeSpent); \
	DECLARE_FUNCTION(execGetLoadedCartridge); \
	DECLARE_FUNCTION(execTryEjectCartridge); \
	DECLARE_FUNCTION(execTryLoadCartridge); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execHasRoundLoaded); \
	DECLARE_FUNCTION(execHasFiringMode); \
	DECLARE_FUNCTION(execSetFireMode); \
	DECLARE_FUNCTION(execGetCurrentFireMode); \
	DECLARE_FUNCTION(execMulticastSimulateHit); \
	DECLARE_FUNCTION(execServerReceiveHit); \
	DECLARE_FUNCTION(execFireBuckshot); \
	DECLARE_FUNCTION(execLocalSimulateEmpty); \
	DECLARE_FUNCTION(execMulticastSimulateEmpty); \
	DECLARE_FUNCTION(execMulticastSimulateFire);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_EVENT_PARMS \
	struct TVRGunFireComponent_eventMulticastSimulateHit_Parms \
	{ \
		FHitResult Hit; \
		TSubclassOf<ATVRCartridge>  Cartridge; \
	}; \
	struct TVRGunFireComponent_eventServerReceiveHit_Parms \
	{ \
		FHitResult Hit; \
		TSubclassOf<ATVRCartridge>  Cartridge; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRGunFireComponent(); \
	friend struct Z_Construct_UClass_UTVRGunFireComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRGunFireComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRGunFireComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUTVRGunFireComponent(); \
	friend struct Z_Construct_UClass_UTVRGunFireComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRGunFireComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRGunFireComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRGunFireComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRGunFireComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRGunFireComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGunFireComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRGunFireComponent(UTVRGunFireComponent&&); \
	NO_API UTVRGunFireComponent(const UTVRGunFireComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRGunFireComponent(UTVRGunFireComponent&&); \
	NO_API UTVRGunFireComponent(const UTVRGunFireComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRGunFireComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGunFireComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRGunFireComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsSuppressed() { return STRUCT_OFFSET(UTVRGunFireComponent, bIsSuppressed); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlashPSC() { return STRUCT_OFFSET(UTVRGunFireComponent, MuzzleFlashPSC); } \
	FORCEINLINE static uint32 __PPO__FireAudioComp() { return STRUCT_OFFSET(UTVRGunFireComponent, FireAudioComp); } \
	FORCEINLINE static uint32 __PPO__EmptyAudioComp() { return STRUCT_OFFSET(UTVRGunFireComponent, EmptyAudioComp); } \
	FORCEINLINE static uint32 __PPO__FireSoundCue() { return STRUCT_OFFSET(UTVRGunFireComponent, FireSoundCue); } \
	FORCEINLINE static uint32 __PPO__EmptySoundCue() { return STRUCT_OFFSET(UTVRGunFireComponent, EmptySoundCue); } \
	FORCEINLINE static uint32 __PPO__RateOfFireRPM() { return STRUCT_OFFSET(UTVRGunFireComponent, RateOfFireRPM); } \
	FORCEINLINE static uint32 __PPO__BurstCount() { return STRUCT_OFFSET(UTVRGunFireComponent, BurstCount); } \
	FORCEINLINE static uint32 __PPO__ImpactSoundComp() { return STRUCT_OFFSET(UTVRGunFireComponent, ImpactSoundComp); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_30_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRGunFireComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRGunFireComponent_h


#define FOREACH_ENUM_ETVRFIREMODE(op) \
	op(ETVRFireMode::Single) \
	op(ETVRFireMode::Burst) \
	op(ETVRFireMode::Automatic) 

enum class ETVRFireMode : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
