// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FBPActorGripInformation;
class ATVRCharacter;
class UVREPhysicalAnimationComponent;
class UVREPhysicsConstraintComponent;
#ifdef TACTICALVRCORE_TVRGraspingHand_generated_h
#error "TVRGraspingHand.generated.h already included, missing '#pragma once' in TVRGraspingHand.h"
#endif
#define TACTICALVRCORE_TVRGraspingHand_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPinky02EndOverlap); \
	DECLARE_FUNCTION(execOnPinky02BeginOverlap); \
	DECLARE_FUNCTION(execOnPinky03EndOverlap); \
	DECLARE_FUNCTION(execOnPinky03BeginOverlap); \
	DECLARE_FUNCTION(execOnRing02EndOverlap); \
	DECLARE_FUNCTION(execOnRing02BeginOverlap); \
	DECLARE_FUNCTION(execOnRing03EndOverlap); \
	DECLARE_FUNCTION(execOnRing03BeginOverlap); \
	DECLARE_FUNCTION(execOnMiddle02EndOverlap); \
	DECLARE_FUNCTION(execOnMiddle02BeginOverlap); \
	DECLARE_FUNCTION(execOnMiddle03EndOverlap); \
	DECLARE_FUNCTION(execOnMiddle03BeginOverlap); \
	DECLARE_FUNCTION(execOnIndex02EndOverlap); \
	DECLARE_FUNCTION(execOnIndex02BeginOverlap); \
	DECLARE_FUNCTION(execOnIndex03EndOverlap); \
	DECLARE_FUNCTION(execOnIndex03BeginOverlap); \
	DECLARE_FUNCTION(execOnThumb02EndOverlap); \
	DECLARE_FUNCTION(execOnThumb02BeginOverlap); \
	DECLARE_FUNCTION(execOnThumb03EndOverlap); \
	DECLARE_FUNCTION(execOnThumb03BeginOverlap); \
	DECLARE_FUNCTION(execClearFingers); \
	DECLARE_FUNCTION(execSetFingerCollisions); \
	DECLARE_FUNCTION(execSetupPhysicsIfNeededNative); \
	DECLARE_FUNCTION(execStopLerpHand); \
	DECLARE_FUNCTION(execStartLerpHand); \
	DECLARE_FUNCTION(execOnOwnerTeleported); \
	DECLARE_FUNCTION(execOnSecondaryAddedOnOther); \
	DECLARE_FUNCTION(execOnSecondaryRemovedOnOther); \
	DECLARE_FUNCTION(execOnDroppedObject); \
	DECLARE_FUNCTION(execOnGrippedObject); \
	DECLARE_FUNCTION(execSetFingerOverlaps); \
	DECLARE_FUNCTION(execGetOwnerCharacter); \
	DECLARE_FUNCTION(execInitPhysics);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPinky02EndOverlap); \
	DECLARE_FUNCTION(execOnPinky02BeginOverlap); \
	DECLARE_FUNCTION(execOnPinky03EndOverlap); \
	DECLARE_FUNCTION(execOnPinky03BeginOverlap); \
	DECLARE_FUNCTION(execOnRing02EndOverlap); \
	DECLARE_FUNCTION(execOnRing02BeginOverlap); \
	DECLARE_FUNCTION(execOnRing03EndOverlap); \
	DECLARE_FUNCTION(execOnRing03BeginOverlap); \
	DECLARE_FUNCTION(execOnMiddle02EndOverlap); \
	DECLARE_FUNCTION(execOnMiddle02BeginOverlap); \
	DECLARE_FUNCTION(execOnMiddle03EndOverlap); \
	DECLARE_FUNCTION(execOnMiddle03BeginOverlap); \
	DECLARE_FUNCTION(execOnIndex02EndOverlap); \
	DECLARE_FUNCTION(execOnIndex02BeginOverlap); \
	DECLARE_FUNCTION(execOnIndex03EndOverlap); \
	DECLARE_FUNCTION(execOnIndex03BeginOverlap); \
	DECLARE_FUNCTION(execOnThumb02EndOverlap); \
	DECLARE_FUNCTION(execOnThumb02BeginOverlap); \
	DECLARE_FUNCTION(execOnThumb03EndOverlap); \
	DECLARE_FUNCTION(execOnThumb03BeginOverlap); \
	DECLARE_FUNCTION(execClearFingers); \
	DECLARE_FUNCTION(execSetFingerCollisions); \
	DECLARE_FUNCTION(execSetupPhysicsIfNeededNative); \
	DECLARE_FUNCTION(execStopLerpHand); \
	DECLARE_FUNCTION(execStartLerpHand); \
	DECLARE_FUNCTION(execOnOwnerTeleported); \
	DECLARE_FUNCTION(execOnSecondaryAddedOnOther); \
	DECLARE_FUNCTION(execOnSecondaryRemovedOnOther); \
	DECLARE_FUNCTION(execOnDroppedObject); \
	DECLARE_FUNCTION(execOnGrippedObject); \
	DECLARE_FUNCTION(execSetFingerOverlaps); \
	DECLARE_FUNCTION(execGetOwnerCharacter); \
	DECLARE_FUNCTION(execInitPhysics);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_EVENT_PARMS \
	struct TVRGraspingHand_eventGetPhysicalAnimation_Parms \
	{ \
		UVREPhysicalAnimationComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGraspingHand_eventGetPhysicalAnimation_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGraspingHand_eventGetRootPhysics_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGraspingHand_eventGetRootPhysics_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGraspingHand_eventGetSimulatingHandConstraint_Parms \
	{ \
		UVREPhysicsConstraintComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGraspingHand_eventGetSimulatingHandConstraint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRGraspingHand(); \
	friend struct Z_Construct_UClass_ATVRGraspingHand_Statics; \
public: \
	DECLARE_CLASS(ATVRGraspingHand, AOptionalRepGrippableSkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGraspingHand)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_INCLASS \
private: \
	static void StaticRegisterNativesATVRGraspingHand(); \
	friend struct Z_Construct_UClass_ATVRGraspingHand_Statics; \
public: \
	DECLARE_CLASS(ATVRGraspingHand, AOptionalRepGrippableSkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGraspingHand)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRGraspingHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGraspingHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGraspingHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGraspingHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGraspingHand(ATVRGraspingHand&&); \
	NO_API ATVRGraspingHand(const ATVRGraspingHand&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGraspingHand(ATVRGraspingHand&&); \
	NO_API ATVRGraspingHand(const ATVRGraspingHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGraspingHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGraspingHand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGraspingHand)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrippedObject() { return STRUCT_OFFSET(ATVRGraspingHand, GrippedObject); } \
	FORCEINLINE static uint32 __PPO__GraspID() { return STRUCT_OFFSET(ATVRGraspingHand, GraspID); } \
	FORCEINLINE static uint32 __PPO__bIsGripping() { return STRUCT_OFFSET(ATVRGraspingHand, bIsGripping); } \
	FORCEINLINE static uint32 __PPO__BaseRelativeTransform() { return STRUCT_OFFSET(ATVRGraspingHand, BaseRelativeTransform); } \
	FORCEINLINE static uint32 __PPO__BeginLerpTransform() { return STRUCT_OFFSET(ATVRGraspingHand, BeginLerpTransform); } \
	FORCEINLINE static uint32 __PPO__OriginalGripTransform() { return STRUCT_OFFSET(ATVRGraspingHand, OriginalGripTransform); } \
	FORCEINLINE static uint32 __PPO__HandLerpSpeed() { return STRUCT_OFFSET(ATVRGraspingHand, HandLerpSpeed); } \
	FORCEINLINE static uint32 __PPO__CurlSpeed() { return STRUCT_OFFSET(ATVRGraspingHand, CurlSpeed); } \
	FORCEINLINE static uint32 __PPO__bHadCurled() { return STRUCT_OFFSET(ATVRGraspingHand, bHadCurled); } \
	FORCEINLINE static uint32 __PPO__bHasCustomAnimation() { return STRUCT_OFFSET(ATVRGraspingHand, bHasCustomAnimation); } \
	FORCEINLINE static uint32 __PPO__bCustomAnimIsSnapShot() { return STRUCT_OFFSET(ATVRGraspingHand, bCustomAnimIsSnapShot); } \
	FORCEINLINE static uint32 __PPO__TargetMeshTransform() { return STRUCT_OFFSET(ATVRGraspingHand, TargetMeshTransform); } \
	FORCEINLINE static uint32 __PPO__CustomPose() { return STRUCT_OFFSET(ATVRGraspingHand, CustomPose); } \
	FORCEINLINE static uint32 __PPO__HandSocketComponent() { return STRUCT_OFFSET(ATVRGraspingHand, HandSocketComponent); } \
	FORCEINLINE static uint32 __PPO__FingerCollisionZones() { return STRUCT_OFFSET(ATVRGraspingHand, FingerCollisionZones); } \
	FORCEINLINE static uint32 __PPO__FingersBlocked() { return STRUCT_OFFSET(ATVRGraspingHand, FingersBlocked); } \
	FORCEINLINE static uint32 __PPO__FingerFlex() { return STRUCT_OFFSET(ATVRGraspingHand, FingerFlex); } \
	FORCEINLINE static uint32 __PPO__FingersOverlapping() { return STRUCT_OFFSET(ATVRGraspingHand, FingersOverlapping); } \
	FORCEINLINE static uint32 __PPO__HandBoneLoc() { return STRUCT_OFFSET(ATVRGraspingHand, HandBoneLoc); } \
	FORCEINLINE static uint32 __PPO__HandPoseComp() { return STRUCT_OFFSET(ATVRGraspingHand, HandPoseComp); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_50_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRGraspingHand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRGraspingHand_h


#define FOREACH_ENUM_EHANDANIMSTATE(op) \
	op(EHandAnimState::Animated) \
	op(EHandAnimState::Dynamic) \
	op(EHandAnimState::Frozen) \
	op(EHandAnimState::Custom) 

enum class EHandAnimState : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<EHandAnimState>();

#define FOREACH_ENUM_ECURLDIRECTION(op) \
	op(ECurlDirection::None) \
	op(ECurlDirection::Forward) \
	op(ECurlDirection::Reverse) 

enum class ECurlDirection : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ECurlDirection>();

#define FOREACH_ENUM_ETRIGGERINDICES(op) \
	op(ETriggerIndices::Thumb3) \
	op(ETriggerIndices::Thumb2) \
	op(ETriggerIndices::Index3) \
	op(ETriggerIndices::Index2) \
	op(ETriggerIndices::Middle3) \
	op(ETriggerIndices::Middle2) \
	op(ETriggerIndices::Ring3) \
	op(ETriggerIndices::Ring2) \
	op(ETriggerIndices::Pinky3) \
	op(ETriggerIndices::Pinky2) 

enum class ETriggerIndices : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETriggerIndices>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
