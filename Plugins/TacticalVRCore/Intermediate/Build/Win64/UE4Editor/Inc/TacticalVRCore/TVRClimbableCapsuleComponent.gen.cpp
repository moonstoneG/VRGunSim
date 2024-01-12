// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Components/TVRClimbableCapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRClimbableCapsuleComponent() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRClimbableCapsuleComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRClimbableCapsuleComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void UTVRClimbableCapsuleComponent::StaticRegisterNativesUTVRClimbableCapsuleComponent()
	{
	}
	UClass* Z_Construct_UClass_UTVRClimbableCapsuleComponent_NoRegister()
	{
		return UTVRClimbableCapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrippableCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/TVRClimbableCapsuleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TVRClimbableCapsuleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRClimbableCapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::ClassParams = {
		&UTVRClimbableCapsuleComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRClimbableCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRClimbableCapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRClimbableCapsuleComponent, 3287276164);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRClimbableCapsuleComponent>()
	{
		return UTVRClimbableCapsuleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRClimbableCapsuleComponent(Z_Construct_UClass_UTVRClimbableCapsuleComponent, &UTVRClimbableCapsuleComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRClimbableCapsuleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRClimbableCapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
