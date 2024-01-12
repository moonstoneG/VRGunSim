// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRAttachPoint_PistolLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAttachPoint_PistolLight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_PistolLight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_PistolLight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLight_NoRegister();
// End Cross Module References
	void UTVRAttachPoint_PistolLight::StaticRegisterNativesUTVRAttachPoint_PistolLight()
	{
	}
	UClass* Z_Construct_UClass_UTVRAttachPoint_PistolLight_NoRegister()
	{
		return UTVRAttachPoint_PistolLight::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLightClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentLightClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedLights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedLights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ChildActorComponent Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRAttachPoint_PistolLight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_PistolLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_CurrentLightClass_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_CurrentLightClass = { "CurrentLightClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_PistolLight, CurrentLightClass), Z_Construct_UClass_AWPNA_PistolLight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_CurrentLightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_CurrentLightClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights_Inner = { "AllowedLights", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWPNA_PistolLight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights = { "AllowedLights", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_PistolLight, AllowedLights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_CurrentLightClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::NewProp_AllowedLights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAttachPoint_PistolLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::ClassParams = {
		&UTVRAttachPoint_PistolLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAttachPoint_PistolLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAttachPoint_PistolLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAttachPoint_PistolLight, 2962280195);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAttachPoint_PistolLight>()
	{
		return UTVRAttachPoint_PistolLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAttachPoint_PistolLight(Z_Construct_UClass_UTVRAttachPoint_PistolLight, &UTVRAttachPoint_PistolLight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAttachPoint_PistolLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAttachPoint_PistolLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
