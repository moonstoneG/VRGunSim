// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_Muzzle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_Muzzle() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Muzzle_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Muzzle();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AWPNA_Muzzle::StaticRegisterNativesAWPNA_Muzzle()
	{
	}
	UClass* Z_Construct_UClass_AWPNA_Muzzle_NoRegister()
	{
		return AWPNA_Muzzle::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_Muzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuppressor_MetaData[];
#endif
		static void NewProp_bIsSuppressor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuppressor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_Muzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_Muzzle.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Muzzle, MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor_MetaData[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	void Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor_SetBit(void* Obj)
	{
		((AWPNA_Muzzle*)Obj)->bIsSuppressor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor = { "bIsSuppressor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_Muzzle), &Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_SoundModifier_MetaData[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_SoundModifier = { "SoundModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Muzzle, SoundModifier), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_SoundModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_SoundModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_DamageModifier_MetaData[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_DamageModifier = { "DamageModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Muzzle, DamageModifier), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_DamageModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_DamageModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_RecoilModifier_MetaData[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_RecoilModifier = { "RecoilModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Muzzle, RecoilModifier), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_RecoilModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_RecoilModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleFlashOverride_MetaData[] = {
		{ "Category", "Muzzle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleFlashOverride = { "MuzzleFlashOverride", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Muzzle, MuzzleFlashOverride), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleFlashOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleFlashOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_Muzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_bIsSuppressor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_SoundModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_DamageModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_RecoilModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Muzzle_Statics::NewProp_MuzzleFlashOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_Muzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_Muzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_Muzzle_Statics::ClassParams = {
		&AWPNA_Muzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWPNA_Muzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_Muzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Muzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_Muzzle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_Muzzle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_Muzzle, 4042694453);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_Muzzle>()
	{
		return AWPNA_Muzzle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_Muzzle(Z_Construct_UClass_AWPNA_Muzzle, &AWPNA_Muzzle::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_Muzzle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_Muzzle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
