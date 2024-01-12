// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRBullet() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRBullet_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void ATVRBullet::StaticRegisterNativesATVRBullet()
	{
	}
	UClass* Z_Construct_UClass_ATVRBullet_NoRegister()
	{
		return ATVRBullet::StaticClass();
	}
	struct Z_Construct_UClass_ATVRBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/TVRBullet.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRBullet_Statics::ClassParams = {
		&ATVRBullet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATVRBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRBullet, 3554850683);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRBullet>()
	{
		return ATVRBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRBullet(Z_Construct_UClass_ATVRBullet, &ATVRBullet::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
