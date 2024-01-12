// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRAttachPoint_Underbarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAttachPoint_Underbarrel() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Underbarrel_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Underbarrel();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_ForeGrip_NoRegister();
// End Cross Module References
	void UTVRAttachPoint_Underbarrel::StaticRegisterNativesUTVRAttachPoint_Underbarrel()
	{
	}
	UClass* Z_Construct_UClass_UTVRAttachPoint_Underbarrel_NoRegister()
	{
		return UTVRAttachPoint_Underbarrel::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentAttachmentClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedAttachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedAttachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedAttachments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ChildActorComponent Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRAttachPoint_Underbarrel.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Underbarrel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_CurrentAttachmentClass_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Underbarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_CurrentAttachmentClass = { "CurrentAttachmentClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Underbarrel, CurrentAttachmentClass), Z_Construct_UClass_AWPNA_ForeGrip_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_CurrentAttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_CurrentAttachmentClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments_Inner = { "AllowedAttachments", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWPNA_ForeGrip_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Underbarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments = { "AllowedAttachments", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Underbarrel, AllowedAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_CurrentAttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::NewProp_AllowedAttachments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAttachPoint_Underbarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::ClassParams = {
		&UTVRAttachPoint_Underbarrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAttachPoint_Underbarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAttachPoint_Underbarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAttachPoint_Underbarrel, 3726721916);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAttachPoint_Underbarrel>()
	{
		return UTVRAttachPoint_Underbarrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAttachPoint_Underbarrel(Z_Construct_UClass_UTVRAttachPoint_Underbarrel, &UTVRAttachPoint_Underbarrel::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAttachPoint_Underbarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAttachPoint_Underbarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
