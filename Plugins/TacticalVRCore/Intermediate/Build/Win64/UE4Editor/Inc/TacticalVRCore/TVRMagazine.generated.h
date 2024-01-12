// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTVRMagWellComponent;
class ATVRCartridge;
struct FTransform;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UGripMotionControllerComponent;
struct FVector;
struct FRotator;
#ifdef TACTICALVRCORE_TVRMagazine_generated_h
#error "TVRMagazine.generated.h already included, missing '#pragma once' in TVRMagazine.h"
#endif
#define TACTICALVRCORE_TVRMagazine_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_RPC_WRAPPERS \
	virtual void UpdateRoundInstances_Implementation(); \
	virtual void UpdateFollowerLocation_Implementation(); \
	virtual FTransform GetRoundTransform_Implementation(int32 Index) const; \
	virtual USkeletalMeshComponent* GetSpringComponent_Implementation() const; \
	virtual UStaticMeshComponent* GetFollowerComponent_Implementation() const; \
	virtual UInstancedStaticMeshComponent* GetRoundsComponent_Implementation() const; \
	virtual FTransform GetGripSlotTransform_Implementation(UGripMotionControllerComponent* Hand) const; \
	virtual void GetFollowerLocationAndRotation_Implementation(FVector& OutVector, FRotator& OutRotator) const; \
 \
	DECLARE_FUNCTION(execGetInsertProgress); \
	DECLARE_FUNCTION(execGetAttachedMagWell); \
	DECLARE_FUNCTION(execGetCartridgeType); \
	DECLARE_FUNCTION(execUpdateRoundInstances); \
	DECLARE_FUNCTION(execUpdateFollowerLocation); \
	DECLARE_FUNCTION(execGetRoundTransform); \
	DECLARE_FUNCTION(execGetSpringComponent); \
	DECLARE_FUNCTION(execGetFollowerComponent); \
	DECLARE_FUNCTION(execGetRoundsComponent); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsInserted); \
	DECLARE_FUNCTION(execSetMagazineOriginToTransform); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execInitMagazine); \
	DECLARE_FUNCTION(execGetGripSlotTransform); \
	DECLARE_FUNCTION(execGetFollowerLocationAndRotation);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInsertProgress); \
	DECLARE_FUNCTION(execGetAttachedMagWell); \
	DECLARE_FUNCTION(execGetCartridgeType); \
	DECLARE_FUNCTION(execUpdateRoundInstances); \
	DECLARE_FUNCTION(execUpdateFollowerLocation); \
	DECLARE_FUNCTION(execGetRoundTransform); \
	DECLARE_FUNCTION(execGetSpringComponent); \
	DECLARE_FUNCTION(execGetFollowerComponent); \
	DECLARE_FUNCTION(execGetRoundsComponent); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsInserted); \
	DECLARE_FUNCTION(execSetMagazineOriginToTransform); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execInitMagazine); \
	DECLARE_FUNCTION(execGetGripSlotTransform); \
	DECLARE_FUNCTION(execGetFollowerLocationAndRotation);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_EVENT_PARMS \
	struct TVRMagazine_eventGetFollowerComponent_Parms \
	{ \
		UStaticMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRMagazine_eventGetFollowerComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRMagazine_eventGetFollowerLocationAndRotation_Parms \
	{ \
		FVector OutVector; \
		FRotator OutRotator; \
	}; \
	struct TVRMagazine_eventGetGripSlotTransform_Parms \
	{ \
		UGripMotionControllerComponent* Hand; \
		FTransform ReturnValue; \
	}; \
	struct TVRMagazine_eventGetRoundsComponent_Parms \
	{ \
		UInstancedStaticMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRMagazine_eventGetRoundsComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRMagazine_eventGetRoundTransform_Parms \
	{ \
		int32 Index; \
		FTransform ReturnValue; \
	}; \
	struct TVRMagazine_eventGetSpringComponent_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRMagazine_eventGetSpringComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRMagazine(); \
	friend struct Z_Construct_UClass_ATVRMagazine_Statics; \
public: \
	DECLARE_CLASS(ATVRMagazine, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRMagazine) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRMagazine*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATVRMagazine(); \
	friend struct Z_Construct_UClass_ATVRMagazine_Statics; \
public: \
	DECLARE_CLASS(ATVRMagazine, AGrippableStaticMeshActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRMagazine) \
	virtual UObject* _getUObject() const override { return const_cast<ATVRMagazine*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRMagazine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRMagazine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRMagazine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRMagazine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRMagazine(ATVRMagazine&&); \
	NO_API ATVRMagazine(const ATVRMagazine&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRMagazine(ATVRMagazine&&); \
	NO_API ATVRMagazine(const ATVRMagazine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRMagazine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRMagazine); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRMagazine)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FollowerMesh() { return STRUCT_OFFSET(ATVRMagazine, FollowerMesh); } \
	FORCEINLINE static uint32 __PPO__RoundsInstances() { return STRUCT_OFFSET(ATVRMagazine, RoundsInstances); } \
	FORCEINLINE static uint32 __PPO__MagazineCollider() { return STRUCT_OFFSET(ATVRMagazine, MagazineCollider); } \
	FORCEINLINE static uint32 __PPO__HandSocket() { return STRUCT_OFFSET(ATVRMagazine, HandSocket); } \
	FORCEINLINE static uint32 __PPO__bNotFull() { return STRUCT_OFFSET(ATVRMagazine, bNotFull); } \
	FORCEINLINE static uint32 __PPO__AmmoCapacity() { return STRUCT_OFFSET(ATVRMagazine, AmmoCapacity); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(ATVRMagazine, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__LimitDisplayAmmo() { return STRUCT_OFFSET(ATVRMagazine, LimitDisplayAmmo); } \
	FORCEINLINE static uint32 __PPO__AttachedMagWell() { return STRUCT_OFFSET(ATVRMagazine, AttachedMagWell); } \
	FORCEINLINE static uint32 __PPO__GripSlot() { return STRUCT_OFFSET(ATVRMagazine, GripSlot); } \
	FORCEINLINE static uint32 __PPO__AttachOrigin() { return STRUCT_OFFSET(ATVRMagazine, AttachOrigin); } \
	FORCEINLINE static uint32 __PPO__bIsMagReleasePressed() { return STRUCT_OFFSET(ATVRMagazine, bIsMagReleasePressed); } \
	FORCEINLINE static uint32 __PPO__MagazineMeshes() { return STRUCT_OFFSET(ATVRMagazine, MagazineMeshes); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_15_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRMagazine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRMagazine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
