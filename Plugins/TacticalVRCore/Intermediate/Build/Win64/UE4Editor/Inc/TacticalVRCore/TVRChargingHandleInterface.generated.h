// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
enum class ETVRLeftRight : uint8;
#ifdef TACTICALVRCORE_TVRChargingHandleInterface_generated_h
#error "TVRChargingHandleInterface.generated.h already included, missing '#pragma once' in TVRChargingHandleInterface.h"
#endif
#define TACTICALVRCORE_TVRChargingHandleInterface_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_RPC_WRAPPERS \
	virtual void OnBoltClosed_Implementation() const {}; \
	virtual float GetBoltProgress_Implementation() const { return 0; }; \
	virtual void SetBoltProgress_Implementation(float NewProgress) {}; \
	virtual bool CanSuccessfullyFire_Implementation() { return false; }; \
	virtual bool CanInitiateFire_Implementation() { return false; }; \
	virtual void UnlockChargingHandle_Implementation() {}; \
	virtual void LockChargingHandle_Implementation(float LockProgress) {}; \
	virtual void SetProgress_Implementation(float NewProgress) {}; \
	virtual void SetMaxTravel_Implementation(float NewTravel) {}; \
	virtual void SetStiffness_Implementation(float NewStiffness) {}; \
	virtual void SetAudioComponent_Implementation(UAudioComponent* NewComp) {}; \
	virtual ETVRLeftRight GetGrabLocation_Implementation() const { return (ETVRLeftRight)0; }; \
	virtual bool IsReciprocating_Implementation() const { return false; }; \
	virtual bool IsInUse_Implementation() const { return false; }; \
	virtual bool IsLocked_Implementation() const { return false; }; \
	virtual float GetStiffness_Implementation() const { return 0; }; \
	virtual float GetMaxTavel_Implementation() const { return 0; }; \
	virtual float GetProgress_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execOnBoltClosed); \
	DECLARE_FUNCTION(execGetBoltProgress); \
	DECLARE_FUNCTION(execSetBoltProgress); \
	DECLARE_FUNCTION(execCanSuccessfullyFire); \
	DECLARE_FUNCTION(execCanInitiateFire); \
	DECLARE_FUNCTION(execUnlockChargingHandle); \
	DECLARE_FUNCTION(execLockChargingHandle); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetMaxTravel); \
	DECLARE_FUNCTION(execSetStiffness); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetGrabLocation); \
	DECLARE_FUNCTION(execIsReciprocating); \
	DECLARE_FUNCTION(execIsInUse); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execGetStiffness); \
	DECLARE_FUNCTION(execGetMaxTavel); \
	DECLARE_FUNCTION(execGetProgress);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBoltClosed); \
	DECLARE_FUNCTION(execGetBoltProgress); \
	DECLARE_FUNCTION(execSetBoltProgress); \
	DECLARE_FUNCTION(execCanSuccessfullyFire); \
	DECLARE_FUNCTION(execCanInitiateFire); \
	DECLARE_FUNCTION(execUnlockChargingHandle); \
	DECLARE_FUNCTION(execLockChargingHandle); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetMaxTravel); \
	DECLARE_FUNCTION(execSetStiffness); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetGrabLocation); \
	DECLARE_FUNCTION(execIsReciprocating); \
	DECLARE_FUNCTION(execIsInUse); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execGetStiffness); \
	DECLARE_FUNCTION(execGetMaxTavel); \
	DECLARE_FUNCTION(execGetProgress);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_EVENT_PARMS \
	struct TVRChargingHandleInterface_eventCanInitiateFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventCanInitiateFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventGetBoltProgress_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventGetBoltProgress_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventGetGrabLocation_Parms \
	{ \
		ETVRLeftRight ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventGetGrabLocation_Parms() \
			: ReturnValue((ETVRLeftRight)0) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventGetMaxTavel_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventGetMaxTavel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventGetProgress_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventGetProgress_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventGetStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventGetStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventIsInUse_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventIsInUse_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventIsLocked_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventIsLocked_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventIsReciprocating_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRChargingHandleInterface_eventIsReciprocating_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TVRChargingHandleInterface_eventLockChargingHandle_Parms \
	{ \
		float LockProgress; \
	}; \
	struct TVRChargingHandleInterface_eventSetAudioComponent_Parms \
	{ \
		UAudioComponent* NewComp; \
	}; \
	struct TVRChargingHandleInterface_eventSetBoltProgress_Parms \
	{ \
		float NewProgress; \
	}; \
	struct TVRChargingHandleInterface_eventSetMaxTravel_Parms \
	{ \
		float NewTravel; \
	}; \
	struct TVRChargingHandleInterface_eventSetProgress_Parms \
	{ \
		float NewProgress; \
	}; \
	struct TVRChargingHandleInterface_eventSetStiffness_Parms \
	{ \
		float NewStiffness; \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRChargingHandleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRChargingHandleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRChargingHandleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRChargingHandleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRChargingHandleInterface(UTVRChargingHandleInterface&&); \
	NO_API UTVRChargingHandleInterface(const UTVRChargingHandleInterface&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTVRChargingHandleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTVRChargingHandleInterface(UTVRChargingHandleInterface&&); \
	NO_API UTVRChargingHandleInterface(const UTVRChargingHandleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTVRChargingHandleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRChargingHandleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRChargingHandleInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTVRChargingHandleInterface(); \
	friend struct Z_Construct_UClass_UTVRChargingHandleInterface_Statics; \
public: \
	DECLARE_CLASS(UTVRChargingHandleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), NO_API) \
	DECLARE_SERIALIZER(UTVRChargingHandleInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITVRChargingHandleInterface() {} \
public: \
	typedef UTVRChargingHandleInterface UClassType; \
	typedef ITVRChargingHandleInterface ThisClass; \
	static bool Execute_CanInitiateFire(UObject* O); \
	static bool Execute_CanSuccessfullyFire(UObject* O); \
	static float Execute_GetBoltProgress(const UObject* O); \
	static ETVRLeftRight Execute_GetGrabLocation(const UObject* O); \
	static float Execute_GetMaxTavel(const UObject* O); \
	static float Execute_GetProgress(const UObject* O); \
	static float Execute_GetStiffness(const UObject* O); \
	static bool Execute_IsInUse(const UObject* O); \
	static bool Execute_IsLocked(const UObject* O); \
	static bool Execute_IsReciprocating(const UObject* O); \
	static void Execute_LockChargingHandle(UObject* O, float LockProgress); \
	static void Execute_OnBoltClosed(const UObject* O); \
	static void Execute_SetAudioComponent(UObject* O, UAudioComponent* NewComp); \
	static void Execute_SetBoltProgress(UObject* O, float NewProgress); \
	static void Execute_SetMaxTravel(UObject* O, float NewTravel); \
	static void Execute_SetProgress(UObject* O, float NewProgress); \
	static void Execute_SetStiffness(UObject* O, float NewStiffness); \
	static void Execute_UnlockChargingHandle(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ITVRChargingHandleInterface() {} \
public: \
	typedef UTVRChargingHandleInterface UClassType; \
	typedef ITVRChargingHandleInterface ThisClass; \
	static bool Execute_CanInitiateFire(UObject* O); \
	static bool Execute_CanSuccessfullyFire(UObject* O); \
	static float Execute_GetBoltProgress(const UObject* O); \
	static ETVRLeftRight Execute_GetGrabLocation(const UObject* O); \
	static float Execute_GetMaxTavel(const UObject* O); \
	static float Execute_GetProgress(const UObject* O); \
	static float Execute_GetStiffness(const UObject* O); \
	static bool Execute_IsInUse(const UObject* O); \
	static bool Execute_IsLocked(const UObject* O); \
	static bool Execute_IsReciprocating(const UObject* O); \
	static void Execute_LockChargingHandle(UObject* O, float LockProgress); \
	static void Execute_OnBoltClosed(const UObject* O); \
	static void Execute_SetAudioComponent(UObject* O, UAudioComponent* NewComp); \
	static void Execute_SetBoltProgress(UObject* O, float NewProgress); \
	static void Execute_SetMaxTravel(UObject* O, float NewTravel); \
	static void Execute_SetProgress(UObject* O, float NewProgress); \
	static void Execute_SetStiffness(UObject* O, float NewStiffness); \
	static void Execute_UnlockChargingHandle(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_11_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRChargingHandleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Weapon_Component_TVRChargingHandleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
