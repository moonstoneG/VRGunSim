// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_PistolLaserLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_PistolLaserLight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLaserLight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLaserLight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLight();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWPNA_PistolLaserLight::StaticRegisterNativesAWPNA_PistolLaserLight()
	{
	}
	UClass* Z_Construct_UClass_AWPNA_PistolLaserLight_NoRegister()
	{
		return AWPNA_PistolLaserLight::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_PistolLaserLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserBeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserBeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserImpactMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserImpactMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWPNA_PistolLight,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Attachments/WPNA_PistolLaserLight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLaserLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserBeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLaserLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserBeam = { "LaserBeam", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLaserLight, LaserBeam), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserBeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserImpactMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLaserLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserImpactMesh = { "LaserImpactMesh", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLaserLight, LaserImpactMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserImpactMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserImpactMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLaserLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLaserLight, Spread), METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_BaseThickness_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLaserLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_BaseThickness = { "BaseThickness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLaserLight, BaseThickness), METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_BaseThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_BaseThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserBeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_LaserImpactMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::NewProp_BaseThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_PistolLaserLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::ClassParams = {
		&AWPNA_PistolLaserLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_PistolLaserLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_PistolLaserLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_PistolLaserLight, 3842536756);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_PistolLaserLight>()
	{
		return AWPNA_PistolLaserLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_PistolLaserLight(Z_Construct_UClass_AWPNA_PistolLaserLight, &AWPNA_PistolLaserLight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_PistolLaserLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_PistolLaserLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
