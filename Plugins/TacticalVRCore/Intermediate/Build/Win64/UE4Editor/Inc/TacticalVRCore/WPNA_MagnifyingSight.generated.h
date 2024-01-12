// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef TACTICALVRCORE_WPNA_MagnifyingSight_generated_h
#error "WPNA_MagnifyingSight.generated.h already included, missing '#pragma once' in WPNA_MagnifyingSight.h"
#endif
#define TACTICALVRCORE_WPNA_MagnifyingSight_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetZoomLevelFromCurve);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetZoomLevelFromCurve);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_EVENT_PARMS \
	struct WPNA_MagnifyingSight_eventSetReticleMaterial_Parms \
	{ \
		UMaterialInterface* NewMaterial; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWPNA_MagnifyingSight(); \
	friend struct Z_Construct_UClass_AWPNA_MagnifyingSight_Statics; \
public: \
	DECLARE_CLASS(AWPNA_MagnifyingSight, AWPNA_Sight, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_MagnifyingSight)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWPNA_MagnifyingSight(); \
	friend struct Z_Construct_UClass_AWPNA_MagnifyingSight_Statics; \
public: \
	DECLARE_CLASS(AWPNA_MagnifyingSight, AWPNA_Sight, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(AWPNA_MagnifyingSight)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWPNA_MagnifyingSight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_MagnifyingSight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_MagnifyingSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_MagnifyingSight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_MagnifyingSight(AWPNA_MagnifyingSight&&); \
	NO_API AWPNA_MagnifyingSight(const AWPNA_MagnifyingSight&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWPNA_MagnifyingSight(AWPNA_MagnifyingSight&&); \
	NO_API AWPNA_MagnifyingSight(const AWPNA_MagnifyingSight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWPNA_MagnifyingSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWPNA_MagnifyingSight); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWPNA_MagnifyingSight)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneCaptureComponent() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, SceneCaptureComponent); } \
	FORCEINLINE static uint32 __PPO__ApertureRadius() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ApertureRadius); } \
	FORCEINLINE static uint32 __PPO__ZoomFactor() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ZoomFactor); } \
	FORCEINLINE static uint32 __PPO__BaseFactor1x() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, BaseFactor1x); } \
	FORCEINLINE static uint32 __PPO__ReticleMaterialTemplate() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterialTemplate); } \
	FORCEINLINE static uint32 __PPO__ReticleMaterialPassive() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterialPassive); } \
	FORCEINLINE static uint32 __PPO__ReticleMaterial() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterial); } \
	FORCEINLINE static uint32 __PPO__bFirstFocalPointReticle() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, bFirstFocalPointReticle); } \
	FORCEINLINE static uint32 __PPO__bUseSimpleApproach() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, bUseSimpleApproach); } \
	FORCEINLINE static uint32 __PPO__bIsVariableOptic() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, bIsVariableOptic); } \
	FORCEINLINE static uint32 __PPO__ZoomDialCurve() { return STRUCT_OFFSET(AWPNA_MagnifyingSight, ZoomDialCurve); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_12_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class AWPNA_MagnifyingSight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Attachments_WPNA_MagnifyingSight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
