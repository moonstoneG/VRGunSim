// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPActorGripInformation;
struct FVector;
enum class EControllerHand : uint8;
class UGripMotionControllerComponent;
struct FVector_NetQuantize100;
struct FGrabObjectInfo;
class UObject;
class USphereComponent;
struct FTransform_NetQuantize;
struct FTransform;
class UTVREquipmentPoint;
#ifdef TACTICALVRCORE_TVRCharacter_generated_h
#error "TVRCharacter.generated.h already included, missing '#pragma once' in TVRCharacter.h"
#endif
#define TACTICALVRCORE_TVRCharacter_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrabObjectInfo_Statics; \
	TACTICALVRCORE_API static class UScriptStruct* StaticStruct();


template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<struct FGrabObjectInfo>();

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_RPC_WRAPPERS \
	virtual bool ServerTryDropObject_Validate(UGripMotionControllerComponent* , FVector_NetQuantize100 , FVector_NetQuantize100 , uint8 ); \
	virtual void ServerTryDropObject_Implementation(UGripMotionControllerComponent* MotionController, FVector_NetQuantize100 AngleVel, FVector_NetQuantize100 TransVel, uint8 GripHash); \
	virtual bool ServerTryGrabObject_Validate(FGrabObjectInfo const& , EControllerHand ); \
	virtual void ServerTryGrabObject_Implementation(FGrabObjectInfo const& GripInfo, EControllerHand HandType); \
	virtual bool ServerRemoveSecondaryAttachmentGrip_Validate(UGripMotionControllerComponent* , UObject* ); \
	virtual void ServerRemoveSecondaryAttachmentGrip_Implementation(UGripMotionControllerComponent* GrippingHand, UObject* ObjectToRemove); \
	virtual USphereComponent* GetLeftGrabSphere_Implementation() const; \
	virtual USphereComponent* GetRightGrabSphere_Implementation() const; \
	virtual bool ServerSetControllerProfile_Validate(bool , FTransform_NetQuantize ); \
	virtual void ServerSetControllerProfile_Implementation(bool bIsRightHand, FTransform_NetQuantize NewTransform); \
	virtual void ClientPossessed_Implementation(); \
 \
	DECLARE_FUNCTION(execOnCycleFireMode_Right); \
	DECLARE_FUNCTION(execOnCycleFireMode_Left); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased_Right); \
	DECLARE_FUNCTION(execOnBoltReleasePressed_Right); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased_Left); \
	DECLARE_FUNCTION(execOnBoltReleasePressed_Left); \
	DECLARE_FUNCTION(execOnMagReleaseReleased_Right); \
	DECLARE_FUNCTION(execOnMagReleasePressed_Right); \
	DECLARE_FUNCTION(execOnMagReleaseReleased_Left); \
	DECLARE_FUNCTION(execOnMagReleasePressed_Left); \
	DECLARE_FUNCTION(execTryClosePauseMenu); \
	DECLARE_FUNCTION(execOpenPauseMenu); \
	DECLARE_FUNCTION(execOnGrippedObjectRight); \
	DECLARE_FUNCTION(execOnGrippedObjectLeft); \
	DECLARE_FUNCTION(execGetFilteredHandVelocity); \
	DECLARE_FUNCTION(execServerTryDropObject); \
	DECLARE_FUNCTION(execLocalTryDropObject); \
	DECLARE_FUNCTION(execTryDropObject); \
	DECLARE_FUNCTION(execServerTryGrabObject); \
	DECLARE_FUNCTION(execTryGrabObject); \
	DECLARE_FUNCTION(execServerRemoveSecondaryAttachmentGrip); \
	DECLARE_FUNCTION(execTryDrop); \
	DECLARE_FUNCTION(execTryGrip); \
	DECLARE_FUNCTION(execOnTriggerAxisR); \
	DECLARE_FUNCTION(execOnTriggerAxisL); \
	DECLARE_FUNCTION(execOnAxisMoveY); \
	DECLARE_FUNCTION(execOnAxisMoveX); \
	DECLARE_FUNCTION(execOnAxisTurnX); \
	DECLARE_FUNCTION(execSnapTurnLeft); \
	DECLARE_FUNCTION(execSnapTurnRight); \
	DECLARE_FUNCTION(execGetSprintStrength); \
	DECLARE_FUNCTION(execGetLeftGrabSphere); \
	DECLARE_FUNCTION(execGetRightGrabSphere); \
	DECLARE_FUNCTION(execOnTriggerReleaseLeft); \
	DECLARE_FUNCTION(execOnTriggerTouchLeft); \
	DECLARE_FUNCTION(execOnTriggerReleaseRight); \
	DECLARE_FUNCTION(execOnTriggerTouchRight); \
	DECLARE_FUNCTION(execOnStopUseOrGrabSmallRight); \
	DECLARE_FUNCTION(execOnStopUseOrGrabSmallLeft); \
	DECLARE_FUNCTION(execOnUseOrGrabSmallRight); \
	DECLARE_FUNCTION(execOnUseOrGrabSmallLeft); \
	DECLARE_FUNCTION(execOnStopGrabLargeRight); \
	DECLARE_FUNCTION(execOnStopGrabLargeLeft); \
	DECLARE_FUNCTION(execOnGrabLargeRight); \
	DECLARE_FUNCTION(execOnGrabLargeLeft); \
	DECLARE_FUNCTION(execOnRepLeftControllerOffset); \
	DECLARE_FUNCTION(execOnRepRightControllerOffset); \
	DECLARE_FUNCTION(execServerSetControllerProfile); \
	DECLARE_FUNCTION(execOnLeftControllerProfileChanged); \
	DECLARE_FUNCTION(execOnRightControllerProfileChanged); \
	DECLARE_FUNCTION(execClientPossessed);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCycleFireMode_Right); \
	DECLARE_FUNCTION(execOnCycleFireMode_Left); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased_Right); \
	DECLARE_FUNCTION(execOnBoltReleasePressed_Right); \
	DECLARE_FUNCTION(execOnBoltReleaseReleased_Left); \
	DECLARE_FUNCTION(execOnBoltReleasePressed_Left); \
	DECLARE_FUNCTION(execOnMagReleaseReleased_Right); \
	DECLARE_FUNCTION(execOnMagReleasePressed_Right); \
	DECLARE_FUNCTION(execOnMagReleaseReleased_Left); \
	DECLARE_FUNCTION(execOnMagReleasePressed_Left); \
	DECLARE_FUNCTION(execTryClosePauseMenu); \
	DECLARE_FUNCTION(execOpenPauseMenu); \
	DECLARE_FUNCTION(execOnGrippedObjectRight); \
	DECLARE_FUNCTION(execOnGrippedObjectLeft); \
	DECLARE_FUNCTION(execGetFilteredHandVelocity); \
	DECLARE_FUNCTION(execServerTryDropObject); \
	DECLARE_FUNCTION(execLocalTryDropObject); \
	DECLARE_FUNCTION(execTryDropObject); \
	DECLARE_FUNCTION(execServerTryGrabObject); \
	DECLARE_FUNCTION(execTryGrabObject); \
	DECLARE_FUNCTION(execServerRemoveSecondaryAttachmentGrip); \
	DECLARE_FUNCTION(execTryDrop); \
	DECLARE_FUNCTION(execTryGrip); \
	DECLARE_FUNCTION(execOnTriggerAxisR); \
	DECLARE_FUNCTION(execOnTriggerAxisL); \
	DECLARE_FUNCTION(execOnAxisMoveY); \
	DECLARE_FUNCTION(execOnAxisMoveX); \
	DECLARE_FUNCTION(execOnAxisTurnX); \
	DECLARE_FUNCTION(execSnapTurnLeft); \
	DECLARE_FUNCTION(execSnapTurnRight); \
	DECLARE_FUNCTION(execGetSprintStrength); \
	DECLARE_FUNCTION(execGetLeftGrabSphere); \
	DECLARE_FUNCTION(execGetRightGrabSphere); \
	DECLARE_FUNCTION(execOnTriggerReleaseLeft); \
	DECLARE_FUNCTION(execOnTriggerTouchLeft); \
	DECLARE_FUNCTION(execOnTriggerReleaseRight); \
	DECLARE_FUNCTION(execOnTriggerTouchRight); \
	DECLARE_FUNCTION(execOnStopUseOrGrabSmallRight); \
	DECLARE_FUNCTION(execOnStopUseOrGrabSmallLeft); \
	DECLARE_FUNCTION(execOnUseOrGrabSmallRight); \
	DECLARE_FUNCTION(execOnUseOrGrabSmallLeft); \
	DECLARE_FUNCTION(execOnStopGrabLargeRight); \
	DECLARE_FUNCTION(execOnStopGrabLargeLeft); \
	DECLARE_FUNCTION(execOnGrabLargeRight); \
	DECLARE_FUNCTION(execOnGrabLargeLeft); \
	DECLARE_FUNCTION(execOnRepLeftControllerOffset); \
	DECLARE_FUNCTION(execOnRepRightControllerOffset); \
	DECLARE_FUNCTION(execServerSetControllerProfile); \
	DECLARE_FUNCTION(execOnLeftControllerProfileChanged); \
	DECLARE_FUNCTION(execOnRightControllerProfileChanged); \
	DECLARE_FUNCTION(execClientPossessed);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_EVENT_PARMS \
	struct TVRCharacter_eventGetLeftGrabSphere_Parms \
	{ \
		USphereComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRCharacter_eventGetLeftGrabSphere_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRCharacter_eventGetPrimaryWeaponSlot_Parms \
	{ \
		UTVREquipmentPoint* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRCharacter_eventGetPrimaryWeaponSlot_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRCharacter_eventGetRightGrabSphere_Parms \
	{ \
		USphereComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRCharacter_eventGetRightGrabSphere_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRCharacter_eventGetSidearmSlot_Parms \
	{ \
		UTVREquipmentPoint* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRCharacter_eventGetSidearmSlot_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRCharacter_eventServerRemoveSecondaryAttachmentGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingHand; \
		UObject* ObjectToRemove; \
	}; \
	struct TVRCharacter_eventServerSetControllerProfile_Parms \
	{ \
		bool bIsRightHand; \
		FTransform_NetQuantize NewTransform; \
	}; \
	struct TVRCharacter_eventServerTryDropObject_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		FVector_NetQuantize100 AngleVel; \
		FVector_NetQuantize100 TransVel; \
		uint8 GripHash; \
	}; \
	struct TVRCharacter_eventServerTryGrabObject_Parms \
	{ \
		FGrabObjectInfo GripInfo; \
		EControllerHand HandType; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRCharacter(); \
	friend struct Z_Construct_UClass_ATVRCharacter_Statics; \
public: \
	DECLARE_CLASS(ATVRCharacter, AVRCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RightControllerOffset=NETFIELD_REP_START, \
		LeftControllerOffset, \
		bIsInMenu, \
		NETFIELD_REP_END=bIsInMenu	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_INCLASS \
private: \
	static void StaticRegisterNativesATVRCharacter(); \
	friend struct Z_Construct_UClass_ATVRCharacter_Statics; \
public: \
	DECLARE_CLASS(ATVRCharacter, AVRCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RightControllerOffset=NETFIELD_REP_START, \
		LeftControllerOffset, \
		bIsInMenu, \
		NETFIELD_REP_END=bIsInMenu	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRCharacter(ATVRCharacter&&); \
	NO_API ATVRCharacter(const ATVRCharacter&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRCharacter(ATVRCharacter&&); \
	NO_API ATVRCharacter(const ATVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRCharacter)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuOpenTimer() { return STRUCT_OFFSET(ATVRCharacter, MenuOpenTimer); } \
	FORCEINLINE static uint32 __PPO__MenuOpenTime() { return STRUCT_OFFSET(ATVRCharacter, MenuOpenTime); } \
	FORCEINLINE static uint32 __PPO__bIsInMenu() { return STRUCT_OFFSET(ATVRCharacter, bIsInMenu); } \
	FORCEINLINE static uint32 __PPO__PauseMenuActor() { return STRUCT_OFFSET(ATVRCharacter, PauseMenuActor); } \
	FORCEINLINE static uint32 __PPO__VelocitySampleSize() { return STRUCT_OFFSET(ATVRCharacter, VelocitySampleSize); } \
	FORCEINLINE static uint32 __PPO__bSampleGripVelocity() { return STRUCT_OFFSET(ATVRCharacter, bSampleGripVelocity); } \
	FORCEINLINE static uint32 __PPO__bUseControllerVelocityOnRelease() { return STRUCT_OFFSET(ATVRCharacter, bUseControllerVelocityOnRelease); } \
	FORCEINLINE static uint32 __PPO__bScaleThrowingVelocityByMass() { return STRUCT_OFFSET(ATVRCharacter, bScaleThrowingVelocityByMass); } \
	FORCEINLINE static uint32 __PPO__MaxThrowingGripMass() { return STRUCT_OFFSET(ATVRCharacter, MaxThrowingGripMass); } \
	FORCEINLINE static uint32 __PPO__MinThrowingMassScale() { return STRUCT_OFFSET(ATVRCharacter, MinThrowingMassScale); } \
	FORCEINLINE static uint32 __PPO__bLimitMaxThrowingVelocity() { return STRUCT_OFFSET(ATVRCharacter, bLimitMaxThrowingVelocity); } \
	FORCEINLINE static uint32 __PPO__MaxThrowingVelocity() { return STRUCT_OFFSET(ATVRCharacter, MaxThrowingVelocity); } \
	FORCEINLINE static uint32 __PPO__RightGraspingHandClass() { return STRUCT_OFFSET(ATVRCharacter, RightGraspingHandClass); } \
	FORCEINLINE static uint32 __PPO__WidgetHitResult() { return STRUCT_OFFSET(ATVRCharacter, WidgetHitResult); } \
	FORCEINLINE static uint32 __PPO__SprintMinWeaponDown() { return STRUCT_OFFSET(ATVRCharacter, SprintMinWeaponDown); } \
	FORCEINLINE static uint32 __PPO__SprintMaxWeaponDown() { return STRUCT_OFFSET(ATVRCharacter, SprintMaxWeaponDown); } \
	FORCEINLINE static uint32 __PPO__SprintMinAim() { return STRUCT_OFFSET(ATVRCharacter, SprintMinAim); } \
	FORCEINLINE static uint32 __PPO__SprintMaxAim() { return STRUCT_OFFSET(ATVRCharacter, SprintMaxAim); } \
	FORCEINLINE static uint32 __PPO__WidgetInteraction() { return STRUCT_OFFSET(ATVRCharacter, WidgetInteraction); } \
	FORCEINLINE static uint32 __PPO__GrabSphereLeft() { return STRUCT_OFFSET(ATVRCharacter, GrabSphereLeft); } \
	FORCEINLINE static uint32 __PPO__GrabSphereRight() { return STRUCT_OFFSET(ATVRCharacter, GrabSphereRight); } \
	FORCEINLINE static uint32 __PPO__HandMeshRight() { return STRUCT_OFFSET(ATVRCharacter, HandMeshRight); } \
	FORCEINLINE static uint32 __PPO__HandMeshLeft() { return STRUCT_OFFSET(ATVRCharacter, HandMeshLeft); } \
	FORCEINLINE static uint32 __PPO__RightGraspingHand() { return STRUCT_OFFSET(ATVRCharacter, RightGraspingHand); } \
	FORCEINLINE static uint32 __PPO__LeftGraspingHand() { return STRUCT_OFFSET(ATVRCharacter, LeftGraspingHand); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_62_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRCharacter_h


#define FOREACH_ENUM_ETURNDIRECTION(op) \
	op(ETurnDirection::Left) \
	op(ETurnDirection::Right) 

enum class ETurnDirection : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETurnDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
