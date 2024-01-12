// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
class UGripMotionControllerComponent;
class AActor;
#ifdef TACTICALVRCORE_TVRGripRedirectorInterface_generated_h
#error "TVRGripRedirectorInterface.generated.h already included, missing '#pragma once' in TVRGripRedirectorInterface.h"
#endif
#define TACTICALVRCORE_TVRGripRedirectorInterface_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_RPC_WRAPPERS \
	virtual bool GetGripSlotOverride_Implementation(FVector const& GripLocation, bool bIsSecondary, bool& bHadSlot, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* Hand) const { return false; }; \
	virtual AActor* GetGripRedirectTarget_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGripSlotOverride); \
	DECLARE_FUNCTION(execGetGripRedirectTarget);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGripSlotOverride); \
	DECLARE_FUNCTION(execGetGripRedirectTarget);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_EVENT_PARMS \
	struct TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms \
	{ \
		FVector GripLocation; \
		bool bIsSecondary; \
		bool bHadSlot; \
		FTransform SlotWorldTransform; \
		FName SlotName; \
		UGripMotionControllerComponent* Hand; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRGripRedirectorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TACTICALVRCORE_API, UTVRGripRedirectorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGripRedirectorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(UTVRGripRedirectorInterface&&); \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(const UTVRGripRedirectorInterface&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(UTVRGripRedirectorInterface&&); \
	TACTICALVRCORE_API UTVRGripRedirectorInterface(const UTVRGripRedirectorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TACTICALVRCORE_API, UTVRGripRedirectorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRGripRedirectorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRGripRedirectorInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTVRGripRedirectorInterface(); \
	friend struct Z_Construct_UClass_UTVRGripRedirectorInterface_Statics; \
public: \
	DECLARE_CLASS(UTVRGripRedirectorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), TACTICALVRCORE_API) \
	DECLARE_SERIALIZER(UTVRGripRedirectorInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITVRGripRedirectorInterface() {} \
public: \
	typedef UTVRGripRedirectorInterface UClassType; \
	typedef ITVRGripRedirectorInterface ThisClass; \
	static AActor* Execute_GetGripRedirectTarget(const UObject* O); \
	static bool Execute_GetGripSlotOverride(const UObject* O, FVector const& GripLocation, bool bIsSecondary, bool& bHadSlot, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* Hand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITVRGripRedirectorInterface() {} \
public: \
	typedef UTVRGripRedirectorInterface UClassType; \
	typedef ITVRGripRedirectorInterface ThisClass; \
	static AActor* Execute_GetGripRedirectTarget(const UObject* O); \
	static bool Execute_GetGripSlotOverride(const UObject* O, FVector const& GripLocation, bool bIsSecondary, bool& bHadSlot, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* Hand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_10_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRGripRedirectorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRGripRedirectorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
