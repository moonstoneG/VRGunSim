// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UHandSocketComponent;
struct FTransform;
class UAnimSequence;
struct FPoseSnapshot;
class USkeletalMeshComponent;
#ifdef VREXPANSIONPLUGIN_HandSocketComponent_generated_h
#error "HandSocketComponent.generated.h already included, missing '#pragma once' in HandSocketComponent.h"
#endif
#define VREXPANSIONPLUGIN_HandSocketComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRHandPoseBonePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRHandPoseBonePair>();

#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandSocketComponentFromObject); \
	DECLARE_FUNCTION(execGetMeshRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapShot); \
	DECLARE_FUNCTION(execGetBlendedPoseSnapShot); \
	DECLARE_FUNCTION(execGetTargetAnimation);


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandSocketComponentFromObject); \
	DECLARE_FUNCTION(execGetMeshRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapShot); \
	DECLARE_FUNCTION(execGetBlendedPoseSnapShot); \
	DECLARE_FUNCTION(execGetTargetAnimation);


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHandSocketComponent, NO_API)


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandSocketComponent(); \
	friend struct Z_Construct_UClass_UHandSocketComponent_Statics; \
public: \
	DECLARE_CLASS(UHandSocketComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketComponent) \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHandSocketComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUHandSocketComponent(); \
	friend struct Z_Construct_UClass_UHandSocketComponent_Statics; \
public: \
	DECLARE_CLASS(UHandSocketComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketComponent) \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHandSocketComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketComponent(UHandSocketComponent&&); \
	NO_API UHandSocketComponent(const UHandSocketComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketComponent(UHandSocketComponent&&); \
	NO_API UHandSocketComponent(const UHandSocketComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketComponent)


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_PRIVATE_PROPERTY_OFFSET
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_92_PROLOG
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_INCLASS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UHandSocketComponent>();

#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_RPC_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_RPC_WRAPPERS_NO_PURE_DECLS
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandSocketAnimInstance(); \
	friend struct Z_Construct_UClass_UHandSocketAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHandSocketAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketAnimInstance)


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_INCLASS \
private: \
	static void StaticRegisterNativesUHandSocketAnimInstance(); \
	friend struct Z_Construct_UClass_UHandSocketAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHandSocketAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHandSocketAnimInstance)


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketAnimInstance(UHandSocketAnimInstance&&); \
	NO_API UHandSocketAnimInstance(const UHandSocketAnimInstance&); \
public:


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandSocketAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandSocketAnimInstance(UHandSocketAnimInstance&&); \
	NO_API UHandSocketAnimInstance(const UHandSocketAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandSocketAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandSocketAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandSocketAnimInstance)


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_PRIVATE_PROPERTY_OFFSET
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_435_PROLOG
#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_INCLASS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h_438_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UHandSocketAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_VRExpansion_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_HandSocketComponent_h


#define FOREACH_ENUM_EVRAXIS(op) \
	op(EVRAxis::X) \
	op(EVRAxis::Y) \
	op(EVRAxis::Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS