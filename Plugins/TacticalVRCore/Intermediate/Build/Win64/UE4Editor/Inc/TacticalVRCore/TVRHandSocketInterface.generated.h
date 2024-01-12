// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHandSocketComponent;
#ifdef TACTICALVRCORE_TVRHandSocketInterface_generated_h
#error "TVRHandSocketInterface.generated.h already included, missing '#pragma once' in TVRHandSocketInterface.h"
#endif
#define TACTICALVRCORE_TVRHandSocketInterface_generated_h

#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_SPARSE_DATA
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_RPC_WRAPPERS \
	virtual UHandSocketComponent* GetHandSocket_Implementation(FName SlotName) const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetHandSocket);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandSocket);


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_EVENT_PARMS \
	struct TVRHandSocketInterface_eventGetHandSocket_Parms \
	{ \
		FName SlotName; \
		UHandSocketComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TVRHandSocketInterface_eventGetHandSocket_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_CALLBACK_WRAPPERS
#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TACTICALVRCORE_API UTVRHandSocketInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRHandSocketInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TACTICALVRCORE_API, UTVRHandSocketInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRHandSocketInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TACTICALVRCORE_API UTVRHandSocketInterface(UTVRHandSocketInterface&&); \
	TACTICALVRCORE_API UTVRHandSocketInterface(const UTVRHandSocketInterface&); \
public:


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TACTICALVRCORE_API UTVRHandSocketInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TACTICALVRCORE_API UTVRHandSocketInterface(UTVRHandSocketInterface&&); \
	TACTICALVRCORE_API UTVRHandSocketInterface(const UTVRHandSocketInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TACTICALVRCORE_API, UTVRHandSocketInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTVRHandSocketInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTVRHandSocketInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTVRHandSocketInterface(); \
	friend struct Z_Construct_UClass_UTVRHandSocketInterface_Statics; \
public: \
	DECLARE_CLASS(UTVRHandSocketInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TacticalVRCore"), TACTICALVRCORE_API) \
	DECLARE_SERIALIZER(UTVRHandSocketInterface)


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_GENERATED_UINTERFACE_BODY() \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITVRHandSocketInterface() {} \
public: \
	typedef UTVRHandSocketInterface UClassType; \
	typedef ITVRHandSocketInterface ThisClass; \
	static UHandSocketComponent* Execute_GetHandSocket(const UObject* O, FName SlotName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~ITVRHandSocketInterface() {} \
public: \
	typedef UTVRHandSocketInterface UClassType; \
	typedef ITVRHandSocketInterface ThisClass; \
	static UHandSocketComponent* Execute_GetHandSocket(const UObject* O, FName SlotName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_12_PROLOG \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_EVENT_PARMS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_RPC_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_SPARSE_DATA \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_CALLBACK_WRAPPERS \
	TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TACTICALVRCORE_API UClass* StaticClass<class UTVRHandSocketInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_Interfaces_TVRHandSocketInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
