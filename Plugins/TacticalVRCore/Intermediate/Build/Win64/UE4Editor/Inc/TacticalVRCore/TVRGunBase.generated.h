// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class AActor;
struct FVector;
struct FHitResult;
class USkeletalMeshComponent;
class UHandSocketComponent;
struct FTransform;
enum class EControllerHand : uint8;
class UGripMotionControllerComponent;
class UTVRMagazineCompInterface;
class USceneComponent;
enum class ETVRGunType : uint8;
class UTVRGunFireComponent;
class UTVRTriggerComponent;
class AWPNA_Barrel;
class ATVRCartridge;
#ifdef TACTICALVRCORE_TVRGunBase_generated_h
#error "TVRGunBase.generated.h already included, missing '#pragma once' in TVRGunBase.h"
#endif
#define TACTICALVRCORE_TVRGunBase_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_27_DELEGATE \
static inline void FOnGunSecondaryUsedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGunSecondaryUsedDelegate) \
{ \
	OnGunSecondaryUsedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_RPC_WRAPPERS \
	virtual bool ShouldLockBolt_Implementation() const; \
	virtual UHandSocketComponent* GetSecondaryHandSocket_Implementation() const; \
	virtual UHandSocketComponent* GetPrimaryHandSocket_Implementation() const; \
	virtual bool GetPrimaryHandTransform_Implementation(FTransform& OutTransform, EControllerHand HandType) const; \
	virtual void GetRecoilPointOfAttack_Implementation(FTransform& OutTransform) const; \
	virtual void ToggleLight_Implementation(UGripMotionControllerComponent* UsingHand); \
	virtual void ToggleLaser_Implementation(UGripMotionControllerComponent* UsingHand); \
	virtual void InitMagInterface_Implementation(); \
	virtual USceneComponent* GetSecondarySlotComponent_Implementation() const; \
	virtual void SetCollisionProfile_Implementation(FName NewProfile); \
 \
	DECLARE_FUNCTION(execUnlockBoltIfNecessary); \
	DECLARE_FUNCTION(execLockBoltIfNecessary); \
	DECLARE_FUNCTION(execOnOpenDustCover); \
	DECLARE_FUNCTION(execSetBoltMesh); \
	DECLARE_FUNCTION(execSetColorVariant); \
	DECLARE_FUNCTION(execShouldLockBolt); \
	DECLARE_FUNCTION(execOnPhysicsHit); \
	DECLARE_FUNCTION(execGetMovablePartsMesh); \
	DECLARE_FUNCTION(execGetSecondaryHandSocket); \
	DECLARE_FUNCTION(execGetPrimaryHandSocket); \
	DECLARE_FUNCTION(execGetPrimaryHandTransform); \
	DECLARE_FUNCTION(execGetRecoilPointOfAttack); \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execToggleLaser); \
	DECLARE_FUNCTION(execIsMagReleasePressed); \
	DECLARE_FUNCTION(execIsBoltReleasePressed); \
	DECLARE_FUNCTION(execGetHammerProgress); \
	DECLARE_FUNCTION(execGetBoltProgress); \
	DECLARE_FUNCTION(execIsGrippedAtPrimaryGrip); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased); \
	DECLARE_FUNCTION(execOnBoltReleasePressed); \
	DECLARE_FUNCTION(execGetMagInterface); \
	DECLARE_FUNCTION(execInitMagInterface); \
	DECLARE_FUNCTION(execOnMagReleaseReleased); \
	DECLARE_FUNCTION(execOnMagReleasePressed); \
	DECLARE_FUNCTION(execGetChargingHandleInterface); \
	DECLARE_FUNCTION(execGetGunType); \
	DECLARE_FUNCTION(execOnCartridgeSpent); \
	DECLARE_FUNCTION(execOnEmpty); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execAddCustomRecoil); \
	DECLARE_FUNCTION(execAddRecoil); \
	DECLARE_FUNCTION(execOnStopFire); \
	DECLARE_FUNCTION(execOnStartFire); \
	DECLARE_FUNCTION(execGetSecondarySlotComponent); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execGetFiringComponent); \
	DECLARE_FUNCTION(execGetTriggerComponent); \
	DECLARE_FUNCTION(execOnEndFiringCycle);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnlockBoltIfNecessary); \
	DECLARE_FUNCTION(execLockBoltIfNecessary); \
	DECLARE_FUNCTION(execOnOpenDustCover); \
	DECLARE_FUNCTION(execSetBoltMesh); \
	DECLARE_FUNCTION(execSetColorVariant); \
	DECLARE_FUNCTION(execShouldLockBolt); \
	DECLARE_FUNCTION(execOnPhysicsHit); \
	DECLARE_FUNCTION(execGetMovablePartsMesh); \
	DECLARE_FUNCTION(execGetSecondaryHandSocket); \
	DECLARE_FUNCTION(execGetPrimaryHandSocket); \
	DECLARE_FUNCTION(execGetPrimaryHandTransform); \
	DECLARE_FUNCTION(execGetRecoilPointOfAttack); \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execToggleLaser); \
	DECLARE_FUNCTION(execIsMagReleasePressed); \
	DECLARE_FUNCTION(execIsBoltReleasePressed); \
	DECLARE_FUNCTION(execGetHammerProgress); \
	DECLARE_FUNCTION(execGetBoltProgress); \
	DECLARE_FUNCTION(execIsGrippedAtPrimaryGrip); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased); \
	DECLARE_FUNCTION(execOnBoltReleasePressed); \
	DECLARE_FUNCTION(execGetMagInterface); \
	DECLARE_FUNCTION(execInitMagInterface); \
	DECLARE_FUNCTION(execOnMagReleaseReleased); \
	DECLARE_FUNCTION(execOnMagReleasePressed); \
	DECLARE_FUNCTION(execGetChargingHandleInterface); \
	DECLARE_FUNCTION(execGetGunType); \
	DECLARE_FUNCTION(execOnCartridgeSpent); \
	DECLARE_FUNCTION(execOnEmpty); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execAddCustomRecoil); \
	DECLARE_FUNCTION(execAddRecoil); \
	DECLARE_FUNCTION(execOnStopFire); \
	DECLARE_FUNCTION(execOnStartFire); \
	DECLARE_FUNCTION(execGetSecondarySlotComponent); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execGetFiringComponent); \
	DECLARE_FUNCTION(execGetTriggerComponent); \
	DECLARE_FUNCTION(execOnEndFiringCycle);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_EVENT_PARMS \
	struct TVRGunBase_eventFoldSights_Parms \
	{ \
		bool bFold; \
	}; \
	struct TVRGunBase_eventGetPrimaryHandSocket_Parms \
	{ \
		UHandSocketComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunBase_eventGetPrimaryHandSocket_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGunBase_eventGetPrimaryHandTransform_Parms \
	{ \
		FTransform OutTransform; \
		EControllerHand HandType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunBase_eventGetPrimaryHandTransform_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRGunBase_eventGetRecoilPointOfAttack_Parms \
	{ \
		FTransform OutTransform; \
	}; \
	struct TVRGunBase_eventGetSecondaryHandSocket_Parms \
	{ \
		UHandSocketComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunBase_eventGetSecondaryHandSocket_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGunBase_eventGetSecondarySlotComponent_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunBase_eventGetSecondarySlotComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGunBase_eventGetWeaponMeshes_Parms \
	{ \
		TArray<UStaticMeshComponent*> Meshes; \
	}; \
	struct TVRGunBase_eventHideRearSight_Parms \
	{ \
		bool bFold; \
	}; \
	struct TVRGunBase_eventOnBarrelChanged_Parms \
	{ \
		TSubclassOf<AWPNA_Barrel>  NewBarrel; \
	}; \
	struct TVRGunBase_eventOnColorVariantChanged_Parms \
	{ \
		uint8 newVariant; \
	}; \
	struct TVRGunBase_eventOnEjectRound_Parms \
	{ \
		bool bSpent; \
		TSubclassOf<ATVRCartridge>  CartridgeType; \
	}; \
	struct TVRGunBase_eventSetCollisionProfile_Parms \
	{ \
		FName NewProfile; \
	}; \
	struct TVRGunBase_eventShouldLockBolt_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunBase_eventShouldLockBolt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRGunBase_eventToggleLaser_Parms \
	{ \
		UGripMotionControllerComponent* UsingHand; \
	}; \
	struct TVRGunBase_eventToggleLight_Parms \
	{ \
		UGripMotionControllerComponent* UsingHand; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRGunBase(); \
	friend struct Z_Construct_UClass_ATVRGunBase_Statics; \
public: \
	DECLARE_CLASS(ATVRGunBase, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGunBase) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRGunBase*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesATVRGunBase(); \
	friend struct Z_Construct_UClass_ATVRGunBase_Statics; \
public: \
	DECLARE_CLASS(ATVRGunBase, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGunBase) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRGunBase*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRGunBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGunBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGunBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGunBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGunBase(ATVRGunBase&&); \
	NO_API ATVRGunBase(const ATVRGunBase&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGunBase(ATVRGunBase&&); \
	NO_API ATVRGunBase(const ATVRGunBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGunBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGunBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGunBase)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerComponent() { return STRUCT_OFFSET(ATVRGunBase, TriggerComponent); } \
	FORCEINLINE static uint32 __PPO__FiringComponent() { return STRUCT_OFFSET(ATVRGunBase, FiringComponent); } \
	FORCEINLINE static uint32 __PPO__GunManipulationAudioComponent() { return STRUCT_OFFSET(ATVRGunBase, GunManipulationAudioComponent); } \
	FORCEINLINE static uint32 __PPO__MovablePartsMesh() { return STRUCT_OFFSET(ATVRGunBase, MovablePartsMesh); } \
	FORCEINLINE static uint32 __PPO__SelectorAudio() { return STRUCT_OFFSET(ATVRGunBase, SelectorAudio); } \
	FORCEINLINE static uint32 __PPO__SecondaryController() { return STRUCT_OFFSET(ATVRGunBase, SecondaryController); } \
	FORCEINLINE static uint32 __PPO__GunMeshes() { return STRUCT_OFFSET(ATVRGunBase, GunMeshes); } \
	FORCEINLINE static uint32 __PPO__BoltMesh() { return STRUCT_OFFSET(ATVRGunBase, BoltMesh); } \
	FORCEINLINE static uint32 __PPO__EjectionPort() { return STRUCT_OFFSET(ATVRGunBase, EjectionPort); } \
	FORCEINLINE static uint32 __PPO__ChargingHandleInterface() { return STRUCT_OFFSET(ATVRGunBase, ChargingHandleInterface); } \
	FORCEINLINE static uint32 __PPO__OneHandStiffness() { return STRUCT_OFFSET(ATVRGunBase, OneHandStiffness); } \
	FORCEINLINE static uint32 __PPO__OneHandDamping() { return STRUCT_OFFSET(ATVRGunBase, OneHandDamping); } \
	FORCEINLINE static uint32 __PPO__OneHandAngularStiffness() { return STRUCT_OFFSET(ATVRGunBase, OneHandAngularStiffness); } \
	FORCEINLINE static uint32 __PPO__OneHandAngularDamping() { return STRUCT_OFFSET(ATVRGunBase, OneHandAngularDamping); } \
	FORCEINLINE static uint32 __PPO__TwoHandStiffness() { return STRUCT_OFFSET(ATVRGunBase, TwoHandStiffness); } \
	FORCEINLINE static uint32 __PPO__TwoHandDamping() { return STRUCT_OFFSET(ATVRGunBase, TwoHandDamping); } \
	FORCEINLINE static uint32 __PPO__TwoHandAngularStiffness() { return STRUCT_OFFSET(ATVRGunBase, TwoHandAngularStiffness); } \
	FORCEINLINE static uint32 __PPO__TwoHandAngularDamping() { return STRUCT_OFFSET(ATVRGunBase, TwoHandAngularDamping); } \
	FORCEINLINE static uint32 __PPO__LoadedBullet() { return STRUCT_OFFSET(ATVRGunBase, LoadedBullet); } \
	FORCEINLINE static uint32 __PPO__GripScript() { return STRUCT_OFFSET(ATVRGunBase, GripScript); } \
	FORCEINLINE static uint32 __PPO__BoltProgress() { return STRUCT_OFFSET(ATVRGunBase, BoltProgress); } \
	FORCEINLINE static uint32 __PPO__BoltMovePct() { return STRUCT_OFFSET(ATVRGunBase, BoltMovePct); } \
	FORCEINLINE static uint32 __PPO__bIsBoltLocked() { return STRUCT_OFFSET(ATVRGunBase, bIsBoltLocked); } \
	FORCEINLINE static uint32 __PPO__bBoltReleasePressed() { return STRUCT_OFFSET(ATVRGunBase, bBoltReleasePressed); } \
	FORCEINLINE static uint32 __PPO__SelectorSound() { return STRUCT_OFFSET(ATVRGunBase, SelectorSound); } \
	FORCEINLINE static uint32 __PPO__GunType() { return STRUCT_OFFSET(ATVRGunBase, GunType); } \
	FORCEINLINE static uint32 __PPO__bHandSwapToPrimaryGripSlot() { return STRUCT_OFFSET(ATVRGunBase, bHandSwapToPrimaryGripSlot); } \
	FORCEINLINE static uint32 __PPO__MagInterface() { return STRUCT_OFFSET(ATVRGunBase, MagInterface); } \
	FORCEINLINE static uint32 __PPO__RecoilImpulse() { return STRUCT_OFFSET(ATVRGunBase, RecoilImpulse); } \
	FORCEINLINE static uint32 __PPO__RecoilAngularImpulse() { return STRUCT_OFFSET(ATVRGunBase, RecoilAngularImpulse); } \
	FORCEINLINE static uint32 __PPO__RecoilReductionTwoHand() { return STRUCT_OFFSET(ATVRGunBase, RecoilReductionTwoHand); } \
	FORCEINLINE static uint32 __PPO__HapticFeedback_Fire() { return STRUCT_OFFSET(ATVRGunBase, HapticFeedback_Fire); } \
	FORCEINLINE static uint32 __PPO__BoltProgressOpenDustCover() { return STRUCT_OFFSET(ATVRGunBase, BoltProgressOpenDustCover); } \
	FORCEINLINE static uint32 __PPO__BoltProgressEjectRound() { return STRUCT_OFFSET(ATVRGunBase, BoltProgressEjectRound); } \
	FORCEINLINE static uint32 __PPO__BoltProgressFeedRound() { return STRUCT_OFFSET(ATVRGunBase, BoltProgressFeedRound); } \
	FORCEINLINE static uint32 __PPO__BoltStiffness() { return STRUCT_OFFSET(ATVRGunBase, BoltStiffness); } \
	FORCEINLINE static uint32 __PPO__BoltStroke() { return STRUCT_OFFSET(ATVRGunBase, BoltStroke); } \
	FORCEINLINE static uint32 __PPO__BoltProgressHammerCocked() { return STRUCT_OFFSET(ATVRGunBase, BoltProgressHammerCocked); } \
	FORCEINLINE static uint32 __PPO__bHammerDoubleAction() { return STRUCT_OFFSET(ATVRGunBase, bHammerDoubleAction); } \
	FORCEINLINE static uint32 __PPO__DisplayName() { return STRUCT_OFFSET(ATVRGunBase, DisplayName); } \
	FORCEINLINE static uint32 __PPO__ColorVariant() { return STRUCT_OFFSET(ATVRGunBase, ColorVariant); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_32_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRGunBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunBase_h


#define FOREACH_ENUM_ETVRGUNCLASS(op) \
	op(ETVRGunClass::Pistol) \
	op(ETVRGunClass::Rifle) 

enum class ETVRGunClass : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRGunClass>();

#define FOREACH_ENUM_ETVRGUNTYPE(op) \
	op(ETVRGunType::Primary) \
	op(ETVRGunType::Sidearm) 

enum class ETVRGunType : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRGunType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
