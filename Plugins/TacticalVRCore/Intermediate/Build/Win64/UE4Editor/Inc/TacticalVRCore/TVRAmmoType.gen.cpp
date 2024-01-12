// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRAmmoType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAmmoType() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAmmoType_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAmmoType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void UTVRAmmoType::StaticRegisterNativesUTVRAmmoType()
	{
	}
	UClass* Z_Construct_UClass_UTVRAmmoType_NoRegister()
	{
		return UTVRAmmoType::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAmmoType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBuckShot_MetaData[];
#endif
		static void NewProp_bIsBuckShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBuckShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuckShotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuckShotCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAmmoType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAmmoType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/TVRAmmoType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRAmmoType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Weapon/TVRAmmoType.h" },
	};
#endif
	void Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot_SetBit(void* Obj)
	{
		((UTVRAmmoType*)Obj)->bIsBuckShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot = { "bIsBuckShot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRAmmoType), &Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_BuckShotCount_MetaData[] = {
		{ "Category", "BuckshotCount" },
		{ "ModuleRelativePath", "Public/Weapon/TVRAmmoType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_BuckShotCount = { "BuckShotCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAmmoType, BuckShotCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_BuckShotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_BuckShotCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAmmoType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_bIsBuckShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAmmoType_Statics::NewProp_BuckShotCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAmmoType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAmmoType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAmmoType_Statics::ClassParams = {
		&UTVRAmmoType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRAmmoType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAmmoType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAmmoType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAmmoType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAmmoType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAmmoType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAmmoType, 39096775);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAmmoType>()
	{
		return UTVRAmmoType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAmmoType(Z_Construct_UClass_UTVRAmmoType, &UTVRAmmoType::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAmmoType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAmmoType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
