// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTVRGunHapticsComponent;
#ifdef TACTICALVRCORE_TVRPlayerController_generated_h
#error "TVRPlayerController.generated.h already included, missing '#pragma once' in TVRPlayerController.h"
#endif
#define TACTICALVRCORE_TVRPlayerController_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_RPC_WRAPPERS \
	virtual UTVRGunHapticsComponent* GetGunHapticsComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetGunHapticsComponent);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGunHapticsComponent);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_EVENT_PARMS \
	struct TVRPlayerController_eventGetGunHapticsComponent_Parms \
	{ \
		UTVRGunHapticsComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRPlayerController_eventGetGunHapticsComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRPlayerController(); \
	friend struct Z_Construct_UClass_ATVRPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATVRPlayerController, AVRPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRPlayerController)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATVRPlayerController(); \
	friend struct Z_Construct_UClass_ATVRPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATVRPlayerController, AVRPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRPlayerController)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRPlayerController(ATVRPlayerController&&); \
	NO_API ATVRPlayerController(const ATVRPlayerController&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRPlayerController(ATVRPlayerController&&); \
	NO_API ATVRPlayerController(const ATVRPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRPlayerController)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_12_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Player_TVRPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
