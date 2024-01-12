// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRGunAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunAnimInstance() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunAnimInstance_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRFireMode();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight();
// End Cross Module References
	void UTVRGunAnimInstance::StaticRegisterNativesUTVRGunAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTVRGunAnimInstance_NoRegister()
	{
		return UTVRGunAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTVRGunAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hammer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hammer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bolt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bolt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargingHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargingHandleDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMagazineReleasePressed_MetaData[];
#endif
		static void NewProp_bMagazineReleasePressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMagazineReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoltReleasePressed_MetaData[];
#endif
		static void NewProp_bBoltReleasePressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoltReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBoltLocked_MetaData[];
#endif
		static void NewProp_bIsBoltLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBoltLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChargingHandleGrabbed_MetaData[];
#endif
		static void NewProp_bIsChargingHandleGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChargingHandleGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorValueSingle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectorValueSingle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorValueBurst_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectorValueBurst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorValueAuto_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectorValueAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectorLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleStroke_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargingHandleStroke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagInsertionProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagInsertionProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstRoundEjected_MetaData[];
#endif
		static void NewProp_bFirstRoundEjected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstRoundEjected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpenDustCover_MetaData[];
#endif
		static void NewProp_bOpenDustCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpenDustCover;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChargingHandleGrabType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleGrabType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChargingHandleGrabType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRGunAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Weapon/TVRGunAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Hammer_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Hammer = { "Hammer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, Hammer), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Hammer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Hammer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Bolt_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Bolt = { "Bolt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, Bolt), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Bolt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Bolt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_BoltDistance_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_BoltDistance = { "BoltDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, BoltDistance), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_BoltDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_BoltDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandle_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandle = { "ChargingHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, ChargingHandle), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleDistance_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleDistance = { "ChargingHandleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, ChargingHandleDistance), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode = { "FiringMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, FiringMode), Z_Construct_UEnum_TacticalVRCore_ETVRFireMode, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, Trigger), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bMagazineReleasePressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed = { "bMagazineReleasePressed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bBoltReleasePressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed = { "bBoltReleasePressed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bIsBoltLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked = { "bIsBoltLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bIsChargingHandleGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed = { "bIsChargingHandleGrabbed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValue_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValue = { "SelectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, SelectorValue), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueSingle_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueSingle = { "SelectorValueSingle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, SelectorValueSingle), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueSingle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueSingle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueBurst_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueBurst = { "SelectorValueBurst", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, SelectorValueBurst), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueBurst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueAuto_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueAuto = { "SelectorValueAuto", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, SelectorValueAuto), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorLerpSpeed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorLerpSpeed = { "SelectorLerpSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, SelectorLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleStroke_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleStroke = { "ChargingHandleStroke", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, ChargingHandleStroke), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleStroke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleStroke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_MagInsertionProgress_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_MagInsertionProgress = { "MagInsertionProgress", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, MagInsertionProgress), METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_MagInsertionProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_MagInsertionProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bFirstRoundEjected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected = { "bFirstRoundEjected", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover_SetBit(void* Obj)
	{
		((UTVRGunAnimInstance*)Obj)->bOpenDustCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover = { "bOpenDustCover", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunAnimInstance), &Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType = { "ChargingHandleGrabType", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunAnimInstance, ChargingHandleGrabType), Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight, METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRGunAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Hammer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Bolt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_BoltDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_FiringMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bMagazineReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bBoltReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsBoltLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bIsChargingHandleGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueBurst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorValueAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_SelectorLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleStroke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_MagInsertionProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bFirstRoundEjected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_bOpenDustCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunAnimInstance_Statics::NewProp_ChargingHandleGrabType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRGunAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRGunAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRGunAnimInstance_Statics::ClassParams = {
		&UTVRGunAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRGunAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRGunAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRGunAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRGunAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRGunAnimInstance, 1328624315);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRGunAnimInstance>()
	{
		return UTVRGunAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRGunAnimInstance(Z_Construct_UClass_UTVRGunAnimInstance, &UTVRGunAnimInstance::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRGunAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRGunAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
