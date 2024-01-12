// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRSpentCartridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRSpentCartridge() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRSpentCartridge_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRSpentCartridge();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void ATVRSpentCartridge::StaticRegisterNativesATVRSpentCartridge()
	{
	}
	UClass* Z_Construct_UClass_ATVRSpentCartridge_NoRegister()
	{
		return ATVRSpentCartridge::StaticClass();
	}
	struct Z_Construct_UClass_ATVRSpentCartridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRSpentCartridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRCartridge,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRSpentCartridge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapon/TVRSpentCartridge.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRSpentCartridge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRSpentCartridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRSpentCartridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRSpentCartridge_Statics::ClassParams = {
		&ATVRSpentCartridge::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATVRSpentCartridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRSpentCartridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRSpentCartridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRSpentCartridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRSpentCartridge, 3746100966);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRSpentCartridge>()
	{
		return ATVRSpentCartridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRSpentCartridge(Z_Construct_UClass_ATVRSpentCartridge, &ATVRSpentCartridge::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRSpentCartridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRSpentCartridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
