// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_Sight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Sight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Sight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void AWPNA_Sight::StaticRegisterNativesAWPNA_Sight()
	{
	}
	UClass* Z_Construct_UClass_AWPNA_Sight_NoRegister()
	{
		return AWPNA_Sight::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFoldIronSights_MetaData[];
#endif
		static void NewProp_bFoldIronSights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoldIronSights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideRearSight_MetaData[];
#endif
		static void NewProp_bHideRearSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideRearSight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Sight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_Sight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Sight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights_MetaData[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Sight.h" },
	};
#endif
	void Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights_SetBit(void* Obj)
	{
		((AWPNA_Sight*)Obj)->bFoldIronSights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights = { "bFoldIronSights", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_Sight), &Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight_MetaData[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Sight.h" },
	};
#endif
	void Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight_SetBit(void* Obj)
	{
		((AWPNA_Sight*)Obj)->bHideRearSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight = { "bHideRearSight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_Sight), &Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_Sight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bFoldIronSights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Sight_Statics::NewProp_bHideRearSight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_Sight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_Sight_Statics::ClassParams = {
		&AWPNA_Sight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWPNA_Sight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Sight_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_Sight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_Sight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_Sight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_Sight, 3721134185);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_Sight>()
	{
		return AWPNA_Sight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_Sight(Z_Construct_UClass_AWPNA_Sight, &AWPNA_Sight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
