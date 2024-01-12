// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETVRLeftRight : uint8;
class APlayerController;
#ifdef TACTICALVRCORE_TVRGunHapticsComponent_generated_h
#error "TVRGunHapticsComponent.generated.h already included, missing '#pragma once' in TVRGunHapticsComponent.h"
#endif
#define TACTICALVRCORE_TVRGunHapticsComponent_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_RPC_WRAPPERS \
	virtual void PistolKick_Implementation(uint8 Strength, float Duration, ETVRLeftRight Type); \
	virtual void ButtstockKick_Implementation(uint8 Strength, float Duration); \
	virtual void ClientPistolKick_Implementation(uint8 Strength, float Duration, ETVRLeftRight Type); \
	virtual void ClientButtstockKick_Implementation(uint8 Strength, float Duration); \
	virtual void LocalBeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execPistolKick); \
	DECLARE_FUNCTION(execButtstockKick); \
	DECLARE_FUNCTION(execGetOwnerPlayerController); \
	DECLARE_FUNCTION(execClientPistolKick); \
	DECLARE_FUNCTION(execClientButtstockKick); \
	DECLARE_FUNCTION(execLocalBeginPlay);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientPistolKick_Implementation(uint8 Strength, float Duration, ETVRLeftRight Type); \
	virtual void ClientButtstockKick_Implementation(uint8 Strength, float Duration); \
 \
	DECLARE_FUNCTION(execPistolKick); \
	DECLARE_FUNCTION(execButtstockKick); \
	DECLARE_FUNCTION(execGetOwnerPlayerController); \
	DECLARE_FUNCTION(execClientPistolKick); \
	DECLARE_FUNCTION(execClientButtstockKick); \
	DECLARE_FUNCTION(execLocalBeginPlay);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_EVENT_PARMS \
	struct TVRGunHapticsComponent_eventButtstockKick_Parms \
	{ \
		uint8 Strength; \
		float Duration; \
	}; \
	struct TVRGunHapticsComponent_eventClientButtstockKick_Parms \
	{ \
		uint8 Strength; \
		float Duration; \
	}; \
	struct TVRGunHapticsComponent_eventClientPistolKick_Parms \
	{ \
		uint8 Strength; \
		float Duration; \
		ETVRLeftRight Type; \
	}; \
	struct TVRGunHapticsComponent_eventPistolKick_Parms \
	{ \
		uint8 Strength; \
		float Duration; \
		ETVRLeftRight Type; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRGunHapticsComponent(); \
	friend struct Z_Construct_UClass_UTVRGunHapticsComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRGunHapticsComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRGunHapticsComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTVRGunHapticsComponent(); \
	friend struct Z_Construct_UClass_UTVRGunHapticsComponent_Statics; \
public: \
	DECLARE_CLASS(UTVRGunHapticsComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRGunHapticsComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRGunHapticsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRGunHapticsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRGunHapticsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGunHapticsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRGunHapticsComponent(UTVRGunHapticsComponent&&); \
	NO_API UTVRGunHapticsComponent(const UTVRGunHapticsComponent&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRGunHapticsComponent(UTVRGunHapticsComponent&&); \
	NO_API UTVRGunHapticsComponent(const UTVRGunHapticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRGunHapticsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGunHapticsComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTVRGunHapticsComponent)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_10_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRGunHapticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRGunHapticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
