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
class ATVRCartridge;
class UTVRGunFireComponent;
class UAudioComponent;
enum class ETVRLoadableBreechState : uint8;
#ifdef TACTICALVRCORE_TVRLoadableBreechComponent_generated_h
#error "TVRLoadableBreechComponent.generated.h already included, missing '#pragma once' in TVRLoadableBreechComponent.h"
#endif
#define TACTICALVRCORE_TVRLoadableBreechComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_23_DELEGATE \
static inline void FLoadableBreechEvent_DelegateWrapper(const FMulticastScriptDelegate& LoadableBreechEvent) \
{ \
	LoadableBreechEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCartridgeDropped); \
	DECLARE_FUNCTION(execOnCartridgeGrabbed); \
	DECLARE_FUNCTION(execOnCartridgeSpent); \
	DECLARE_FUNCTION(execIsAllowedAmmo); \
	DECLARE_FUNCTION(execAssignFiringComp); \
	DECLARE_FUNCTION(execGetFiringComp); \
	DECLARE_FUNCTION(execGetOpenCloseAudioComp); \
	DECLARE_FUNCTION(execGetCartridgeInsertAudioComp); \
	DECLARE_FUNCTION(execGetBreechOpenState); \
	DECLARE_FUNCTION(execCloseBreech); \
	DECLARE_FUNCTION(execOpenBreech);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCartridgeDropped); \
	DECLARE_FUNCTION(execOnCartridgeGrabbed); \
	DECLARE_FUNCTION(execOnCartridgeSpent); \
	DECLARE_FUNCTION(execIsAllowedAmmo); \
	DECLARE_FUNCTION(execAssignFiringComp); \
	DECLARE_FUNCTION(execGetFiringComp); \
	DECLARE_FUNCTION(execGetOpenCloseAudioComp); \
	DECLARE_FUNCTION(execGetCartridgeInsertAudioComp); \
	DECLARE_FUNCTION(execGetBreechOpenState); \
	DECLARE_FUNCTION(execCloseBreech); \
	DECLARE_FUNCTION(execOpenBreech);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadableBreechComponent(); \
	friend struct Z_Construct_UClass_ULoadableBreechComponent_Statics; \
public: \
	DECLARE_CLASS(ULoadableBreechComponent, UTVRMagazineCompInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadableBreechComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesULoadableBreechComponent(); \
	friend struct Z_Construct_UClass_ULoadableBreechComponent_Statics; \
public: \
	DECLARE_CLASS(ULoadableBreechComponent, UTVRMagazineCompInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ULoadableBreechComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadableBreechComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadableBreechComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadableBreechComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadableBreechComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadableBreechComponent(ULoadableBreechComponent&&); \
	NO_API ULoadableBreechComponent(const ULoadableBreechComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadableBreechComponent(ULoadableBreechComponent&&); \
	NO_API ULoadableBreechComponent(const ULoadableBreechComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadableBreechComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadableBreechComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadableBreechComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CartridgeInsertAudioComp() { return STRUCT_OFFSET(ULoadableBreechComponent, CartridgeInsertAudioComp); } \
	FORCEINLINE static uint32 __PPO__OpenCloseAudioComp() { return STRUCT_OFFSET(ULoadableBreechComponent, OpenCloseAudioComp); } \
	FORCEINLINE static uint32 __PPO__FiringComp() { return STRUCT_OFFSET(ULoadableBreechComponent, FiringComp); } \
	FORCEINLINE static uint32 __PPO__CurrentCartridge() { return STRUCT_OFFSET(ULoadableBreechComponent, CurrentCartridge); } \
	FORCEINLINE static uint32 __PPO__AllowedCartridges() { return STRUCT_OFFSET(ULoadableBreechComponent, AllowedCartridges); } \
	FORCEINLINE static uint32 __PPO__TargetTransform() { return STRUCT_OFFSET(ULoadableBreechComponent, TargetTransform); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(ULoadableBreechComponent, Distance); } \
	FORCEINLINE static uint32 __PPO__BreechOpenTime() { return STRUCT_OFFSET(ULoadableBreechComponent, BreechOpenTime); } \
	FORCEINLINE static uint32 __PPO__bReleaseCartridgeWhenOpened() { return STRUCT_OFFSET(ULoadableBreechComponent, bReleaseCartridgeWhenOpened); } \
	FORCEINLINE static uint32 __PPO__EjectorForce() { return STRUCT_OFFSET(ULoadableBreechComponent, EjectorForce); } \
	FORCEINLINE static uint32 __PPO__CartridgeInsertSound() { return STRUCT_OFFSET(ULoadableBreechComponent, CartridgeInsertSound); } \
	FORCEINLINE static uint32 __PPO__OpenCloseSound() { return STRUCT_OFFSET(ULoadableBreechComponent, OpenCloseSound); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_28_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ULoadableBreechComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRLoadableBreechComponent_h


#define FOREACH_ENUM_ETVRLOADABLEBREECHSTATE(op) \
	op(ETVRLoadableBreechState::Closed) \
	op(ETVRLoadableBreechState::Closing) \
	op(ETVRLoadableBreechState::Open) \
	op(ETVRLoadableBreechState::Opening) 

enum class ETVRLoadableBreechState : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRLoadableBreechState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
