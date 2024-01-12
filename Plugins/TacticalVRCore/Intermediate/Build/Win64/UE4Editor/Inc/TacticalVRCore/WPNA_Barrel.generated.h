// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef TACTICALVRCORE_WPNA_Barrel_generated_h
#error "WPNA_Barrel.generated.h already included, missing '#pragma once' in WPNA_Barrel.h"
#endif
#define TACTICALVRCORE_WPNA_Barrel_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_RPC_WRAPPERS \
	virtual USceneComponent* GetSecondarySlotComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetSecondarySlotComponent);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSecondarySlotComponent);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_EVENT_PARMS \
	struct WPNA_Barrel_eventGetSecondarySlotComponent_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WPNA_Barrel_eventGetSecondarySlotComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct WPNA_Barrel_eventOnFoldSights_Parms \
	{ \
		bool bShouldFold; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_Barrel(); \
	friend struct Z_Construct_UClass_AWPNA_Barrel_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Barrel, ATVRWeaponAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Barrel) \
	virtual UObject* _getUObject() const override { return const_cast<AWPNA_Barrel*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_Barrel(); \
	friend struct Z_Construct_UClass_AWPNA_Barrel_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Barrel, ATVRWeaponAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Barrel) \
	virtual UObject* _getUObject() const override { return const_cast<AWPNA_Barrel*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_Barrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Barrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Barrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Barrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Barrel(AWPNA_Barrel&&); \
	NO_API AWPNA_Barrel(const AWPNA_Barrel&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Barrel(AWPNA_Barrel&&); \
	NO_API AWPNA_Barrel(const AWPNA_Barrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Barrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Barrel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Barrel)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringLocOverride() { return STRUCT_OFFSET(AWPNA_Barrel, FiringLocOverride); } \
	FORCEINLINE static uint32 __PPO__bIsSuppressor() { return STRUCT_OFFSET(AWPNA_Barrel, bIsSuppressor); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_13_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_Barrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Barrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
