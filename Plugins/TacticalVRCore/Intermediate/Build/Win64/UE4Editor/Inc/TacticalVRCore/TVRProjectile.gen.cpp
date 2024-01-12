// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRProjectile() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRProjectile_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void ATVRProjectile::StaticRegisterNativesATVRProjectile()
	{
	}
	UClass* Z_Construct_UClass_ATVRProjectile_NoRegister()
	{
		return ATVRProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATVRProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/TVRProjectile.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRProjectile_Statics::ClassParams = {
		&ATVRProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRProjectile, 2415933293);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRProjectile>()
	{
		return ATVRProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRProjectile(Z_Construct_UClass_ATVRProjectile, &ATVRProjectile::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
