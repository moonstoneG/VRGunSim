// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRMagazineHandSocketComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRMagazineHandSocketComponent() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineHandSocketComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineHandSocketComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void UTVRMagazineHandSocketComponent::StaticRegisterNativesUTVRMagazineHandSocketComponent()
	{
	}
	UClass* Z_Construct_UClass_UTVRMagazineHandSocketComponent_NoRegister()
	{
		return UTVRMagazineHandSocketComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandSocketComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRMagazineHandSocketComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRMagazineHandSocketComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRMagazineHandSocketComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::ClassParams = {
		&UTVRMagazineHandSocketComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRMagazineHandSocketComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRMagazineHandSocketComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRMagazineHandSocketComponent, 57558325);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRMagazineHandSocketComponent>()
	{
		return UTVRMagazineHandSocketComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRMagazineHandSocketComponent(Z_Construct_UClass_UTVRMagazineHandSocketComponent, &UTVRMagazineHandSocketComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRMagazineHandSocketComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRMagazineHandSocketComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif