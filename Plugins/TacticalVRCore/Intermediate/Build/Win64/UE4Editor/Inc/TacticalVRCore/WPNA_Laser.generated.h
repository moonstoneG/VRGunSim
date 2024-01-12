// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
struct FHitResult;
#ifdef TACTICALVRCORE_WPNA_Laser_generated_h
#error "WPNA_Laser.generated.h already included, missing '#pragma once' in WPNA_Laser.h"
#endif
#define TACTICALVRCORE_WPNA_Laser_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_11_DELEGATE \
struct _Script_TacticalVRCore_eventLaserToggleEvent_Parms \
{ \
	bool bIsLaserOn; \
	UGripMotionControllerComponent* UsingHand; \
}; \
static inline void FLaserToggleEvent_DelegateWrapper(const FMulticastScriptDelegate& LaserToggleEvent, bool bIsLaserOn, UGripMotionControllerComponent* UsingHand) \
{ \
	_Script_TacticalVRCore_eventLaserToggleEvent_Parms Parms; \
	Parms.bIsLaserOn=bIsLaserOn ? true : false; \
	Parms.UsingHand=UsingHand; \
	LaserToggleEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLaserOn); \
	DECLARE_FUNCTION(execToggleLaser);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLaserOn); \
	DECLARE_FUNCTION(execToggleLaser);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_EVENT_PARMS \
	struct WPNA_Laser_eventOnToggleLaser_Parms \
	{ \
		bool NewLaserStatus; \
		UGripMotionControllerComponent* UsingHand; \
	}; \
	struct WPNA_Laser_eventPostLaserTrace_Parms \
	{ \
		FHitResult Hit; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_Laser(); \
	friend struct Z_Construct_UClass_AWPNA_Laser_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Laser, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Laser)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_Laser(); \
	friend struct Z_Construct_UClass_AWPNA_Laser_Statics; \
public: \
	DECLARE_CLASS(AWPNA_Laser, ATVRWeaponAttachment, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_Laser)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_Laser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Laser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Laser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Laser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Laser(AWPNA_Laser&&); \
	NO_API AWPNA_Laser(const AWPNA_Laser&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_Laser(AWPNA_Laser&&); \
	NO_API AWPNA_Laser(const AWPNA_Laser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_Laser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_Laser); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_Laser)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HoverInputComponent() { return STRUCT_OFFSET(AWPNA_Laser, HoverInputComponent); } \
	FORCEINLINE static uint32 __PPO__LaserBeam() { return STRUCT_OFFSET(AWPNA_Laser, LaserBeam); } \
	FORCEINLINE static uint32 __PPO__LaserImpactMesh() { return STRUCT_OFFSET(AWPNA_Laser, LaserImpactMesh); } \
	FORCEINLINE static uint32 __PPO__LaserToggleSound() { return STRUCT_OFFSET(AWPNA_Laser, LaserToggleSound); } \
	FORCEINLINE static uint32 __PPO__Spread() { return STRUCT_OFFSET(AWPNA_Laser, Spread); } \
	FORCEINLINE static uint32 __PPO__BaseThickness() { return STRUCT_OFFSET(AWPNA_Laser, BaseThickness); } \
	FORCEINLINE static uint32 __PPO__LaserOnMaterialParam() { return STRUCT_OFFSET(AWPNA_Laser, LaserOnMaterialParam); } \
	FORCEINLINE static uint32 __PPO__LaserMaterialSlot() { return STRUCT_OFFSET(AWPNA_Laser, LaserMaterialSlot); } \
	FORCEINLINE static uint32 __PPO__LaserMaterialInstance() { return STRUCT_OFFSET(AWPNA_Laser, LaserMaterialInstance); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_16_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_Laser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_Laser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
