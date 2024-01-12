// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
#ifdef TACTICALVRCORE_TVREjectionPort_generated_h
#error "TVREjectionPort.generated.h already included, missing '#pragma once' in TVREjectionPort.h"
#endif
#define TACTICALVRCORE_TVREjectionPort_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPooledCartridgeDestroyed); \
	DECLARE_FUNCTION(execGetEjectionDir);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPooledCartridgeDestroyed); \
	DECLARE_FUNCTION(execGetEjectionDir);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTVREjectionPort(); \
	friend struct Z_Construct_UClass_UTVREjectionPort_Statics; \
public: \
	DECLARE_CLASS(UTVREjectionPort, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVREjectionPort)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTVREjectionPort(); \
	friend struct Z_Construct_UClass_UTVREjectionPort_Statics; \
public: \
	DECLARE_CLASS(UTVREjectionPort, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVREjectionPort)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVREjectionPort(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVREjectionPort) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVREjectionPort); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVREjectionPort); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVREjectionPort(UTVREjectionPort&&); \
	NO_API UTVREjectionPort(const UTVREjectionPort&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVREjectionPort(UTVREjectionPort&&); \
	NO_API UTVREjectionPort(const UTVREjectionPort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVREjectionPort); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVREjectionPort); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVREjectionPort)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EjectionArrow() { return STRUCT_OFFSET(UTVREjectionPort, EjectionArrow); } \
	FORCEINLINE static uint32 __PPO__EjectionDir() { return STRUCT_OFFSET(UTVREjectionPort, EjectionDir); } \
	FORCEINLINE static uint32 __PPO__CartridgePoolSize() { return STRUCT_OFFSET(UTVREjectionPort, CartridgePoolSize); } \
	FORCEINLINE static uint32 __PPO__CartridgePool() { return STRUCT_OFFSET(UTVREjectionPort, CartridgePool); } \
	FORCEINLINE static uint32 __PPO__bAllowChamberload() { return STRUCT_OFFSET(UTVREjectionPort, bAllowChamberload); } \
	FORCEINLINE static uint32 __PPO__SpentCartridgeClass() { return STRUCT_OFFSET(UTVREjectionPort, SpentCartridgeClass); }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_15_PROLOG
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_INCLASS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_PRIVATE_PROPERTY_OFFSET \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_INCLASS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVREjectionPort>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVREjectionPort_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
