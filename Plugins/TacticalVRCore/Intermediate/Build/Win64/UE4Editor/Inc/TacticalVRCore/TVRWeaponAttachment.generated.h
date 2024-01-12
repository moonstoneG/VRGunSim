// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
struct FBPActorGripInformation;
enum class ETVRRailType : uint8;
class ATVRWeaponAttachment;
class ATVRGunBase;
class UTVRAttachmentPoint;
#ifdef TACTICALVRCORE_TVRWeaponAttachment_generated_h
#error "TVRWeaponAttachment.generated.h already included, missing '#pragma once' in TVRWeaponAttachment.h"
#endif
#define TACTICALVRCORE_TVRWeaponAttachment_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_RPC_WRAPPERS \
	virtual float GetMuzzleVelocityModifier_Implementation() const; \
	virtual float GetDamageModifier_Implementation() const; \
	virtual float GetSprayModifier_Implementation() const; \
	virtual float GetRecoilModifier_Implementation() const; \
	virtual TSubclassOf<ATVRWeaponAttachment>  GetReplacementClass_Implementation(ETVRRailType RailType, uint8 CustomType) const; \
 \
	DECLARE_FUNCTION(execOnOwnerDropped); \
	DECLARE_FUNCTION(execOnOwnerGripped); \
	DECLARE_FUNCTION(execGetMuzzleVelocityModifier); \
	DECLARE_FUNCTION(execGetDamageModifier); \
	DECLARE_FUNCTION(execGetSprayModifier); \
	DECLARE_FUNCTION(execGetRecoilModifier); \
	DECLARE_FUNCTION(execGetWeaponAttachmentName); \
	DECLARE_FUNCTION(execSetRailType); \
	DECLARE_FUNCTION(execGetReplacementClass); \
	DECLARE_FUNCTION(execSetColorVariant); \
	DECLARE_FUNCTION(execSetVariant); \
	DECLARE_FUNCTION(execGetGunOwner); \
	DECLARE_FUNCTION(execAttachToWeapon);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOwnerDropped); \
	DECLARE_FUNCTION(execOnOwnerGripped); \
	DECLARE_FUNCTION(execGetMuzzleVelocityModifier); \
	DECLARE_FUNCTION(execGetDamageModifier); \
	DECLARE_FUNCTION(execGetSprayModifier); \
	DECLARE_FUNCTION(execGetRecoilModifier); \
	DECLARE_FUNCTION(execGetWeaponAttachmentName); \
	DECLARE_FUNCTION(execSetRailType); \
	DECLARE_FUNCTION(execGetReplacementClass); \
	DECLARE_FUNCTION(execSetColorVariant); \
	DECLARE_FUNCTION(execSetVariant); \
	DECLARE_FUNCTION(execGetGunOwner); \
	DECLARE_FUNCTION(execAttachToWeapon);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_EVENT_PARMS \
	struct TVRWeaponAttachment_eventGetDamageModifier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRWeaponAttachment_eventGetDamageModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRWeaponAttachment_eventGetMuzzleVelocityModifier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRWeaponAttachment_eventGetMuzzleVelocityModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRWeaponAttachment_eventGetRecoilModifier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRWeaponAttachment_eventGetRecoilModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRWeaponAttachment_eventGetReplacementClass_Parms \
	{ \
		ETVRRailType RailType; \
		uint8 CustomType; \
		TSubclassOf<ATVRWeaponAttachment>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRWeaponAttachment_eventGetReplacementClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRWeaponAttachment_eventGetSprayModifier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRWeaponAttachment_eventGetSprayModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRWeaponAttachment_eventOnRailTypeChanged_Parms \
	{ \
		ETVRRailType RailType; \
		uint8 CustomType; \
	}; \
	struct TVRWeaponAttachment_eventOnVariantChanged_Parms \
	{ \
		uint8 Variant; \
		uint8 ColorVariant; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATVRWeaponAttachment(); \
	friend struct Z_Construct_UClass_ATVRWeaponAttachment_Statics; \
public: \
	DECLARE_CLASS(ATVRWeaponAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRWeaponAttachment)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATVRWeaponAttachment(); \
	friend struct Z_Construct_UClass_ATVRWeaponAttachment_Statics; \
public: \
	DECLARE_CLASS(ATVRWeaponAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(ATVRWeaponAttachment)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATVRWeaponAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRWeaponAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRWeaponAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRWeaponAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRWeaponAttachment(ATVRWeaponAttachment&&); \
	NO_API ATVRWeaponAttachment(const ATVRWeaponAttachment&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATVRWeaponAttachment(ATVRWeaponAttachment&&); \
	NO_API ATVRWeaponAttachment(const ATVRWeaponAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATVRWeaponAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATVRWeaponAttachment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATVRWeaponAttachment)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ATVRWeaponAttachment, Mesh); } \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ATVRWeaponAttachment, RootScene); } \
	FORCEINLINE static uint32 __PPO__AttachmentMeshes() { return STRUCT_OFFSET(ATVRWeaponAttachment, AttachmentMeshes); } \
	FORCEINLINE static uint32 __PPO__AttachmentPoint() { return STRUCT_OFFSET(ATVRWeaponAttachment, AttachmentPoint); } \
	FORCEINLINE static uint32 __PPO__SelectedVariant() { return STRUCT_OFFSET(ATVRWeaponAttachment, SelectedVariant); } \
	FORCEINLINE static uint32 __PPO__SelectedColor() { return STRUCT_OFFSET(ATVRWeaponAttachment, SelectedColor); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachmentName() { return STRUCT_OFFSET(ATVRWeaponAttachment, WeaponAttachmentName); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_21_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class ATVRWeaponAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_TVRWeaponAttachment_h


#define FOREACH_ENUM_ETVRRAILTYPE(op) \
	op(ETVRRailType::Picatinny) \
	op(ETVRRailType::MLok) \
	op(ETVRRailType::Keymod) \
	op(ETVRRailType::Basis) \
	op(ETVRRailType::Custom) 

enum class ETVRRailType : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRRailType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
