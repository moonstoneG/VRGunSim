// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRAttachPoint_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAttachPoint_Sight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Sight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Sight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Sight_NoRegister();
// End Cross Module References
	void UTVRAttachPoint_Sight::StaticRegisterNativesUTVRAttachPoint_Sight()
	{
	}
	UClass* Z_Construct_UClass_UTVRAttachPoint_Sight_NoRegister()
	{
		return UTVRAttachPoint_Sight::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAttachPoint_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSightClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentSightClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedSights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedSights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedSights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "ChildActorComponent Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRAttachPoint_Sight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Sight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_CurrentSightClass_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_CurrentSightClass = { "CurrentSightClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Sight, CurrentSightClass), Z_Construct_UClass_AWPNA_Sight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_CurrentSightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_CurrentSightClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights_Inner = { "AllowedSights", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWPNA_Sight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights = { "AllowedSights", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Sight, AllowedSights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_CurrentSightClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::NewProp_AllowedSights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAttachPoint_Sight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::ClassParams = {
		&UTVRAttachPoint_Sight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAttachPoint_Sight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAttachPoint_Sight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAttachPoint_Sight, 338525980);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAttachPoint_Sight>()
	{
		return UTVRAttachPoint_Sight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAttachPoint_Sight(Z_Construct_UClass_UTVRAttachPoint_Sight, &UTVRAttachPoint_Sight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAttachPoint_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAttachPoint_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
