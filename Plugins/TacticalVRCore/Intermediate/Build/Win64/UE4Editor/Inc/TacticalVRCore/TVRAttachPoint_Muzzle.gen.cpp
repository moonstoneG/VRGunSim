// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRAttachPoint_Muzzle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAttachPoint_Muzzle() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Muzzle_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Muzzle();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Muzzle_NoRegister();
// End Cross Module References
	void UTVRAttachPoint_Muzzle::StaticRegisterNativesUTVRAttachPoint_Muzzle()
	{
	}
	UClass* Z_Construct_UClass_UTVRAttachPoint_Muzzle_NoRegister()
	{
		return UTVRAttachPoint_Muzzle::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentAttachmentClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedMuzzles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMuzzles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedMuzzles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ChildActorComponent Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRAttachPoint_Muzzle.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Muzzle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_CurrentAttachmentClass_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_CurrentAttachmentClass = { "CurrentAttachmentClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Muzzle, CurrentAttachmentClass), Z_Construct_UClass_AWPNA_Muzzle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_CurrentAttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_CurrentAttachmentClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles_Inner = { "AllowedMuzzles", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWPNA_Muzzle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Muzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles = { "AllowedMuzzles", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Muzzle, AllowedMuzzles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_CurrentAttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::NewProp_AllowedMuzzles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAttachPoint_Muzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::ClassParams = {
		&UTVRAttachPoint_Muzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAttachPoint_Muzzle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAttachPoint_Muzzle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAttachPoint_Muzzle, 1223209182);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAttachPoint_Muzzle>()
	{
		return UTVRAttachPoint_Muzzle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAttachPoint_Muzzle(Z_Construct_UClass_UTVRAttachPoint_Muzzle, &UTVRAttachPoint_Muzzle::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAttachPoint_Muzzle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAttachPoint_Muzzle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
