// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHandSocketComponent;
class UTVRTriggerComponent;
#ifdef TACTICALVRCORE_WPNA_UnderbarrelWeapon_generated_h
#error "WPNA_UnderbarrelWeapon.generated.h already included, missing '#pragma once' in WPNA_UnderbarrelWeapon.h"
#endif
#define TACTICALVRCORE_WPNA_UnderbarrelWeapon_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_11_DELEGATE \
static inline void FUnderbarrelWeaponActionEvent_DelegateWrapper(const FMulticastScriptDelegate& UnderbarrelWeaponActionEvent) \
{ \
	UnderbarrelWeaponActionEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_RPC_WRAPPERS \
	virtual void OnFire_Implementation(); \
	virtual void OnStopFire_Implementation(); \
	virtual void OnStartFire_Implementation(); \
	virtual UHandSocketComponent* GetSecondaryHandSocket_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execOnStopFire); \
	DECLARE_FUNCTION(execOnStartFire); \
	DECLARE_FUNCTION(execGetSecondaryHandSocket); \
	DECLARE_FUNCTION(execGetTriggerComponent); \
	DECLARE_FUNCTION(execIsGripped); \
	DECLARE_FUNCTION(execIsMagReleasePressed);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execOnStopFire); \
	DECLARE_FUNCTION(execOnStartFire); \
	DECLARE_FUNCTION(execGetSecondaryHandSocket); \
	DECLARE_FUNCTION(execGetTriggerComponent); \
	DECLARE_FUNCTION(execIsGripped); \
	DECLARE_FUNCTION(execIsMagReleasePressed);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_EVENT_PARMS \
	struct WPNA_UnderbarrelWeapon_eventGetSecondaryHandSocket_Parms \
	{ \
		UHandSocketComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WPNA_UnderbarrelWeapon_eventGetSecondaryHandSocket_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_UnderbarrelWeapon(); \
	friend struct Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics; \
public: \
	DECLARE_CLASS(AWPNA_UnderbarrelWeapon, AWPNA_ForeGrip, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_UnderbarrelWeapon)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_UnderbarrelWeapon(); \
	friend struct Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics; \
public: \
	DECLARE_CLASS(AWPNA_UnderbarrelWeapon, AWPNA_ForeGrip, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_UnderbarrelWeapon)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_UnderbarrelWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_UnderbarrelWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_UnderbarrelWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_UnderbarrelWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_UnderbarrelWeapon(AWPNA_UnderbarrelWeapon&&); \
	NO_API AWPNA_UnderbarrelWeapon(const AWPNA_UnderbarrelWeapon&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_UnderbarrelWeapon(AWPNA_UnderbarrelWeapon&&); \
	NO_API AWPNA_UnderbarrelWeapon(const AWPNA_UnderbarrelWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_UnderbarrelWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_UnderbarrelWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_UnderbarrelWeapon)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Movables() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, Movables); } \
	FORCEINLINE static uint32 __PPO__TriggerComponent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, TriggerComponent); } \
	FORCEINLINE static uint32 __PPO__FiringComponent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, FiringComponent); } \
	FORCEINLINE static uint32 __PPO__OnMagReleasePressedEvent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnMagReleasePressedEvent); } \
	FORCEINLINE static uint32 __PPO__OnMagReleaseReleasedEvent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnMagReleaseReleasedEvent); } \
	FORCEINLINE static uint32 __PPO__OnBoltReleasePressedEvent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnBoltReleasePressedEvent); } \
	FORCEINLINE static uint32 __PPO__OnBoltReleaseReleasedEvent() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnBoltReleaseReleasedEvent); } \
	FORCEINLINE static uint32 __PPO__RecoilImpulse() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, RecoilImpulse); } \
	FORCEINLINE static uint32 __PPO__AngularRecoilImpulse() { return STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, AngularRecoilImpulse); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_15_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_UnderbarrelWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_UnderbarrelWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
