// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
class UPrimitiveComponent;
class AActor;
#ifdef TACTICALVRCORE_TVRHoverInputVolume_generated_h
#error "TVRHoverInputVolume.generated.h already included, missing '#pragma once' in TVRHoverInputVolume.h"
#endif
#define TACTICALVRCORE_TVRHoverInputVolume_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_10_DELEGATE \
struct _Script_TacticalVRCore_eventOnHoveredInputEvent_Parms \
{ \
	UGripMotionControllerComponent* Controller; \
}; \
static inline void FOnHoveredInputEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredInputEvent, UGripMotionControllerComponent* Controller) \
{ \
	_Script_TacticalVRCore_eventOnHoveredInputEvent_Parms Parms; \
	Parms.Controller=Controller; \
	OnHoveredInputEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRHoverInputVolume(); \
	friend struct Z_Construct_UClass_UTVRHoverInputVolume_Statics; \
public: \
	DECLARE_CLASS(UTVRHoverInputVolume, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRHoverInputVolume)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTVRHoverInputVolume(); \
	friend struct Z_Construct_UClass_UTVRHoverInputVolume_Statics; \
public: \
	DECLARE_CLASS(UTVRHoverInputVolume, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRHoverInputVolume)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRHoverInputVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRHoverInputVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRHoverInputVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRHoverInputVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRHoverInputVolume(UTVRHoverInputVolume&&); \
	NO_API UTVRHoverInputVolume(const UTVRHoverInputVolume&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRHoverInputVolume(UTVRHoverInputVolume&&); \
	NO_API UTVRHoverInputVolume(const UTVRHoverInputVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRHoverInputVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRHoverInputVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTVRHoverInputVolume)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MagReleasePressed() { return STRUCT_OFFSET(UTVRHoverInputVolume, MagReleasePressed); } \
	FORCEINLINE static uint32 __PPO__BoltReleasePressed() { return STRUCT_OFFSET(UTVRHoverInputVolume, BoltReleasePressed); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_12_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRHoverInputVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Components_TVRHoverInputVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
