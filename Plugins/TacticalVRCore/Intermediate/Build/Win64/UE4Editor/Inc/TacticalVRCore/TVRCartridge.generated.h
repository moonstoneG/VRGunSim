// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UDamageType;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TACTICALVRCORE_TVRCartridge_generated_h
#error "TVRCartridge.generated.h already included, missing '#pragma once' in TVRCartridge.h"
#endif
#define TACTICALVRCORE_TVRCartridge_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImpactDecalData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<struct FImpactDecalData>();

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImpactParticleData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<struct FImpactParticleData>();

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBaseDamage); \
	DECLARE_FUNCTION(execGetTraceDistance); \
	DECLARE_FUNCTION(execGetSpentCartridgeMesh); \
	DECLARE_FUNCTION(execGetBuckshotSpread); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetNumBuckshot); \
	DECLARE_FUNCTION(execIsBuckshot); \
	DECLARE_FUNCTION(execOnComponentHit);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBaseDamage); \
	DECLARE_FUNCTION(execGetTraceDistance); \
	DECLARE_FUNCTION(execGetSpentCartridgeMesh); \
	DECLARE_FUNCTION(execGetBuckshotSpread); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetNumBuckshot); \
	DECLARE_FUNCTION(execIsBuckshot); \
	DECLARE_FUNCTION(execOnComponentHit);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRCartridge(); \
	friend struct Z_Construct_UClass_ATVRCartridge_Statics; \
public: \
	DECLARE_CLASS(ATVRCartridge, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRCartridge) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRCartridge*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_INCLASS \
private: \
	static void StaticRegisterNativesATVRCartridge(); \
	friend struct Z_Construct_UClass_ATVRCartridge_Statics; \
public: \
	DECLARE_CLASS(ATVRCartridge, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRCartridge) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRCartridge*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRCartridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRCartridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRCartridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRCartridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRCartridge(ATVRCartridge&&); \
	NO_API ATVRCartridge(const ATVRCartridge&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRCartridge(ATVRCartridge&&); \
	NO_API ATVRCartridge(const ATVRCartridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRCartridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRCartridge); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRCartridge)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionCapsule() { return STRUCT_OFFSET(ATVRCartridge, CollisionCapsule); } \
	FORCEINLINE static uint32 __PPO__HitAudioComponent() { return STRUCT_OFFSET(ATVRCartridge, HitAudioComponent); } \
	FORCEINLINE static uint32 __PPO__bIsBuckshot() { return STRUCT_OFFSET(ATVRCartridge, bIsBuckshot); } \
	FORCEINLINE static uint32 __PPO__NumBucks() { return STRUCT_OFFSET(ATVRCartridge, NumBucks); } \
	FORCEINLINE static uint32 __PPO__BuckshotSpread() { return STRUCT_OFFSET(ATVRCartridge, BuckshotSpread); } \
	FORCEINLINE static uint32 __PPO__SpentCartridgeMesh() { return STRUCT_OFFSET(ATVRCartridge, SpentCartridgeMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ATVRCartridge, DamageType); } \
	FORCEINLINE static uint32 __PPO__bIsProjectile() { return STRUCT_OFFSET(ATVRCartridge, bIsProjectile); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ATVRCartridge, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__TraceDistance() { return STRUCT_OFFSET(ATVRCartridge, TraceDistance); } \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(ATVRCartridge, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__ImpactDecals() { return STRUCT_OFFSET(ATVRCartridge, ImpactDecals); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(ATVRCartridge, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ATVRCartridge, BaseDamage); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_47_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRCartridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRCartridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
