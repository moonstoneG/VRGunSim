// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATVRMagazine;
#ifdef TACTICALVRCORE_TVRMagWellComponent_generated_h
#error "TVRMagWellComponent.generated.h already included, missing '#pragma once' in TVRMagWellComponent.h"
#endif
#define TACTICALVRCORE_TVRMagWellComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_18_DELEGATE \
static inline void FOnMagReleaseReleasedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagReleaseReleasedDelegate) \
{ \
	OnMagReleaseReleasedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_17_DELEGATE \
static inline void FOnMagReleasePressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagReleasePressedDelegate) \
{ \
	OnMagReleasePressedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_15_DELEGATE \
static inline void FOnMagazineStartDropDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineStartDropDelegate) \
{ \
	OnMagazineStartDropDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_14_DELEGATE \
static inline void FOnMagazineFullyDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineFullyDroppedDelegate) \
{ \
	OnMagazineFullyDroppedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_13_DELEGATE \
static inline void FOnMagazineFullyInsertedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineFullyInsertedDelegate) \
{ \
	OnMagazineFullyInsertedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_12_DELEGATE \
static inline void FOnMagazineStartInsertDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineStartInsertDelegate) \
{ \
	OnMagazineStartInsertDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnMagazineAttached); \
	DECLARE_FUNCTION(execGetCurrentMagazine);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnMagazineAttached); \
	DECLARE_FUNCTION(execGetCurrentMagazine);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRMagWellComponent(); \
	friend struct Z_Construct_UClass_UTVRMagWellComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRMagWellComponent, UTVRMagazineCompInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRMagWellComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTVRMagWellComponent(); \
	friend struct Z_Construct_UClass_UTVRMagWellComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRMagWellComponent, UTVRMagazineCompInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRMagWellComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRMagWellComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRMagWellComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRMagWellComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRMagWellComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRMagWellComponent(UTVRMagWellComponent&&); \
	NO_API UTVRMagWellComponent(const UTVRMagWellComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRMagWellComponent(UTVRMagWellComponent&&); \
	NO_API UTVRMagWellComponent(const UTVRMagWellComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRMagWellComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRMagWellComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRMagWellComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MagAudioComp() { return STRUCT_OFFSET(UTVRMagWellComponent, MagAudioComp); } \
	FORCEINLINE static uint32 __PPO__CurrentMagazine() { return STRUCT_OFFSET(UTVRMagWellComponent, CurrentMagazine); } \
	FORCEINLINE static uint32 __PPO__CachedMagSpline() { return STRUCT_OFFSET(UTVRMagWellComponent, CachedMagSpline); } \
	FORCEINLINE static uint32 __PPO__bHasMagRelease() { return STRUCT_OFFSET(UTVRMagWellComponent, bHasMagRelease); } \
	FORCEINLINE static uint32 __PPO__bUseCurve() { return STRUCT_OFFSET(UTVRMagWellComponent, bUseCurve); } \
	FORCEINLINE static uint32 __PPO__MagRoll() { return STRUCT_OFFSET(UTVRMagWellComponent, MagRoll); } \
	FORCEINLINE static uint32 __PPO__MagPitch() { return STRUCT_OFFSET(UTVRMagWellComponent, MagPitch); } \
	FORCEINLINE static uint32 __PPO__MagYaw() { return STRUCT_OFFSET(UTVRMagWellComponent, MagYaw); } \
	FORCEINLINE static uint32 __PPO__MagazineSound() { return STRUCT_OFFSET(UTVRMagWellComponent, MagazineSound); } \
	FORCEINLINE static uint32 __PPO__bNeedsToBeReleasedByHand() { return STRUCT_OFFSET(UTVRMagWellComponent, bNeedsToBeReleasedByHand); } \
	FORCEINLINE static uint32 __PPO__AllowedMagazines() { return STRUCT_OFFSET(UTVRMagWellComponent, AllowedMagazines); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_22_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRMagWellComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRMagWellComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
