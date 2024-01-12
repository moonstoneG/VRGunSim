// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATVRGunBase;
class UGripMotionControllerComponent;
struct FVector;
class UTVRHoverInputVolume;
#ifdef TACTICALVRCORE_TVRGunWithChild_generated_h
#error "TVRGunWithChild.generated.h already included, missing '#pragma once' in TVRGunWithChild.h"
#endif
#define TACTICALVRCORE_TVRGunWithChild_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_RPC_WRAPPERS \
	virtual bool CanPressMagRelease_Implementation(FVector const& PressLocation) const; \
 \
	DECLARE_FUNCTION(execOnChildGunDestroyed); \
	DECLARE_FUNCTION(execSetChildGun); \
	DECLARE_FUNCTION(execOnMagReleasePressedHovered); \
	DECLARE_FUNCTION(execCanPressMagRelease);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChildGunDestroyed); \
	DECLARE_FUNCTION(execSetChildGun); \
	DECLARE_FUNCTION(execOnMagReleasePressedHovered); \
	DECLARE_FUNCTION(execCanPressMagRelease);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_EVENT_PARMS \
	struct TVRGunWithChild_eventCanPressMagRelease_Parms \
	{ \
		FVector PressLocation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunWithChild_eventCanPressMagRelease_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRGunWithChild_eventGetChildHoverInputComp_Parms \
	{ \
		UTVRHoverInputVolume* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGunWithChild_eventGetChildHoverInputComp_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRGunWithChild(); \
	friend struct Z_Construct_UClass_ATVRGunWithChild_Statics; \
public: \
	DECLARE_CLASS(ATVRGunWithChild, ATVRGunBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGunWithChild)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATVRGunWithChild(); \
	friend struct Z_Construct_UClass_ATVRGunWithChild_Statics; \
public: \
	DECLARE_CLASS(ATVRGunWithChild, ATVRGunBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRGunWithChild)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRGunWithChild(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGunWithChild) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGunWithChild); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGunWithChild); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGunWithChild(ATVRGunWithChild&&); \
	NO_API ATVRGunWithChild(const ATVRGunWithChild&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRGunWithChild(ATVRGunWithChild&&); \
	NO_API ATVRGunWithChild(const ATVRGunWithChild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRGunWithChild); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRGunWithChild); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRGunWithChild)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChildGun() { return STRUCT_OFFSET(ATVRGunWithChild, ChildGun); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_9_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRGunWithChild>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_TVRGunWithChild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
