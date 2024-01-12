// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHandSocketComponent;
#ifdef TACTICALVRCORE_WPNA_ForeGrip_generated_h
#error "WPNA_ForeGrip.generated.h already included, missing '#pragma once' in WPNA_ForeGrip.h"
#endif
#define TACTICALVRCORE_WPNA_ForeGrip_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_RPC_WRAPPERS \
	virtual UHandSocketComponent* GetPrimaryHandSocket_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetPrimaryHandSocket);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimaryHandSocket);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_EVENT_PARMS \
	struct WPNA_ForeGrip_eventGetPrimaryHandSocket_Parms \
	{ \
		UHandSocketComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WPNA_ForeGrip_eventGetPrimaryHandSocket_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_ForeGrip(); \
	friend struct Z_Construct_UClass_AWPNA_ForeGrip_Statics; \
public: \
	DECLARE_CLASS(AWPNA_ForeGrip, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_ForeGrip) \
	virtual UObject* _getUObject() const override { return const_cast<AWPNA_ForeGrip*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_ForeGrip(); \
	friend struct Z_Construct_UClass_AWPNA_ForeGrip_Statics; \
public: \
	DECLARE_CLASS(AWPNA_ForeGrip, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_ForeGrip) \
	virtual UObject* _getUObject() const override { return const_cast<AWPNA_ForeGrip*>(this); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_ForeGrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_ForeGrip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_ForeGrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_ForeGrip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_ForeGrip(AWPNA_ForeGrip&&); \
	NO_API AWPNA_ForeGrip(const AWPNA_ForeGrip&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_ForeGrip(AWPNA_ForeGrip&&); \
	NO_API AWPNA_ForeGrip(const AWPNA_ForeGrip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_ForeGrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_ForeGrip); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_ForeGrip)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrimarySlotGripDistance() { return STRUCT_OFFSET(AWPNA_ForeGrip, PrimarySlotGripDistance); } \
	FORCEINLINE static uint32 __PPO__RecoilModifier() { return STRUCT_OFFSET(AWPNA_ForeGrip, RecoilModifier); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_13_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_ForeGrip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_ForeGrip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
