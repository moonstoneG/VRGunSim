// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTVRAttachmentPoint;
class ATVRWeaponAttachment;
class ATVRGunBase;
#ifdef TACTICALVRCORE_TVRAttachmentPoint_generated_h
#error "TVRAttachmentPoint.generated.h already included, missing '#pragma once' in TVRAttachmentPoint.h"
#endif
#define TACTICALVRCORE_TVRAttachmentPoint_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_11_DELEGATE \
struct _Script_TacticalVRCore_eventOnWeaponAttachmentAttachedDelegate_Parms \
{ \
	UTVRAttachmentPoint* AttachmentPoint; \
	ATVRWeaponAttachment* NewWeaponAttachment; \
}; \
static inline void FOnWeaponAttachmentAttachedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttachmentAttachedDelegate, UTVRAttachmentPoint* AttachmentPoint, ATVRWeaponAttachment* NewWeaponAttachment) \
{ \
	_Script_TacticalVRCore_eventOnWeaponAttachmentAttachedDelegate_Parms Parms; \
	Parms.AttachmentPoint=AttachmentPoint; \
	Parms.NewWeaponAttachment=NewWeaponAttachment; \
	OnWeaponAttachmentAttachedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPreferredColorVariant); \
	DECLARE_FUNCTION(execGetGunOwner); \
	DECLARE_FUNCTION(execGetCurrentAttachment); \
	DECLARE_FUNCTION(execGetAllowedAttachments); \
	DECLARE_FUNCTION(execGetCurrentAttachmentClass);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPreferredColorVariant); \
	DECLARE_FUNCTION(execGetGunOwner); \
	DECLARE_FUNCTION(execGetCurrentAttachment); \
	DECLARE_FUNCTION(execGetAllowedAttachments); \
	DECLARE_FUNCTION(execGetCurrentAttachmentClass);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVRAttachmentPoint(); \
	friend struct Z_Construct_UClass_UTVRAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(UTVRAttachmentPoint, UChildActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRAttachmentPoint)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTVRAttachmentPoint(); \
	friend struct Z_Construct_UClass_UTVRAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(UTVRAttachmentPoint, UChildActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRAttachmentPoint)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRAttachmentPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRAttachmentPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRAttachmentPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRAttachmentPoint(UTVRAttachmentPoint&&); \
	NO_API UTVRAttachmentPoint(const UTVRAttachmentPoint&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRAttachmentPoint(UTVRAttachmentPoint&&); \
	NO_API UTVRAttachmentPoint(const UTVRAttachmentPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRAttachmentPoint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRAttachmentPoint)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedCurrentAttachment() { return STRUCT_OFFSET(UTVRAttachmentPoint, CachedCurrentAttachment); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_13_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRAttachmentPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRAttachmentPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
