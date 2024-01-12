// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetComponent;
#ifdef TACTICALVRCORE_PauseMenuActor_generated_h
#error "PauseMenuActor.generated.h already included, missing '#pragma once' in PauseMenuActor.h"
#endif
#define TACTICALVRCORE_PauseMenuActor_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentlyActiveWidget);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentlyActiveWidget);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_EVENT_PARMS \
	struct PauseMenuActor_eventFocusWidget_Parms \
	{ \
		UWidgetComponent* NewFocusWidget; \
	}; \
	struct PauseMenuActor_eventUnfocusWidget_Parms \
	{ \
		UWidgetComponent* OldFocusWidget; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPauseMenuActor(); \
	friend struct Z_Construct_UClass_APauseMenuActor_Statics; \
public: \
	DECLARE_CLASS(APauseMenuActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(APauseMenuActor)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPauseMenuActor(); \
	friend struct Z_Construct_UClass_APauseMenuActor_Statics; \
public: \
	DECLARE_CLASS(APauseMenuActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(APauseMenuActor)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APauseMenuActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APauseMenuActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APauseMenuActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APauseMenuActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APauseMenuActor(APauseMenuActor&&); \
	NO_API APauseMenuActor(const APauseMenuActor&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APauseMenuActor(APauseMenuActor&&); \
	NO_API APauseMenuActor(const APauseMenuActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APauseMenuActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APauseMenuActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APauseMenuActor)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentlyActiveWidget() { return STRUCT_OFFSET(APauseMenuActor, CurrentlyActiveWidget); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_10_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class APauseMenuActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_PauseMenuActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
