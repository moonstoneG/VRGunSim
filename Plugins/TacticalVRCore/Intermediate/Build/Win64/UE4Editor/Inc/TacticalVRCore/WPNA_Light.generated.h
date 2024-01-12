// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
#ifdef TACTICALVRCORE_WPNA_Light_generated_h
#error "WPNA_Light.generated.h already included, missing '#pragma once' in WPNA_Light.h"
#endif
#define TACTICALVRCORE_WPNA_Light_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLightOn); \
	DECLARE_FUNCTION(execToggleLight);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLightOn); \
	DECLARE_FUNCTION(execToggleLight);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_Light(); \
	friend struct Z_Construct_UClass_AWPNA_Light_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Light, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Light)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_Light(); \
	friend struct Z_Construct_UClass_AWPNA_Light_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Light, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Light)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_Light(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Light) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Light); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Light); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Light(AWPNA_Light&&); \
	NO_API AWPNA_Light(const AWPNA_Light&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Light(AWPNA_Light&&); \
	NO_API AWPNA_Light(const AWPNA_Light&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Light); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Light); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Light)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HoverInputComponent() { return STRUCT_OFFSET(AWPNA_Light, HoverInputComponent); } \
	FORCEINLINE static uint32 __PPO__LightToggleSound() { return STRUCT_OFFSET(AWPNA_Light, LightToggleSound); } \
	FORCEINLINE static uint32 __PPO__SpotLight() { return STRUCT_OFFSET(AWPNA_Light, SpotLight); } \
	FORCEINLINE static uint32 __PPO__LightOnMaterialParam() { return STRUCT_OFFSET(AWPNA_Light, LightOnMaterialParam); } \
	FORCEINLINE static uint32 __PPO__LightMaterialSlot() { return STRUCT_OFFSET(AWPNA_Light, LightMaterialSlot); } \
	FORCEINLINE static uint32 __PPO__LightMaterialInstance() { return STRUCT_OFFSET(AWPNA_Light, LightMaterialInstance); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_12_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_Light>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Light_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
