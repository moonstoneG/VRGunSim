// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/TVREquipmentPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVREquipmentPoint() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREquipmentPoint_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREquipmentPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase_NoRegister();
// End Cross Module References
	void UTVREquipmentPoint::StaticRegisterNativesUTVREquipmentPoint()
	{
	}
	UClass* Z_Construct_UClass_UTVREquipmentPoint_NoRegister()
	{
		return UTVREquipmentPoint::StaticClass();
	}
	struct Z_Construct_UClass_UTVREquipmentPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedGunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedGunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttachRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpRotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpRotSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVREquipmentPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREquipmentPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Player/TVREquipmentPoint.h" },
		{ "ModuleRelativePath", "Public/Player/TVREquipmentPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AllowedGunClass_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Public/Player/TVREquipmentPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AllowedGunClass = { "AllowedGunClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREquipmentPoint, AllowedGunClass), Z_Construct_UClass_ATVRGunBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AllowedGunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AllowedGunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AttachRange_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Public/Player/TVREquipmentPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AttachRange = { "AttachRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREquipmentPoint, AttachRange), METADATA_PARAMS(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AttachRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AttachRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Public/Player/TVREquipmentPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREquipmentPoint, LerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpRotSpeed_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Public/Player/TVREquipmentPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpRotSpeed = { "LerpRotSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREquipmentPoint, LerpRotSpeed), METADATA_PARAMS(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpRotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpRotSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVREquipmentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AllowedGunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_AttachRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREquipmentPoint_Statics::NewProp_LerpRotSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVREquipmentPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVREquipmentPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVREquipmentPoint_Statics::ClassParams = {
		&UTVREquipmentPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVREquipmentPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVREquipmentPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREquipmentPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVREquipmentPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVREquipmentPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVREquipmentPoint, 752664144);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVREquipmentPoint>()
	{
		return UTVREquipmentPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVREquipmentPoint(Z_Construct_UClass_UTVREquipmentPoint, &UTVREquipmentPoint::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVREquipmentPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVREquipmentPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
