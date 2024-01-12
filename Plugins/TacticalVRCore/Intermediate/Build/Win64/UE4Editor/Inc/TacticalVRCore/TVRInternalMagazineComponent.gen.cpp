// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRInternalMagazineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRInternalMagazineComponent() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRInternalMagazineComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRInternalMagazineComponent();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineCompInterface();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UTVRInternalMagazineComponent::StaticRegisterNativesUTVRInternalMagazineComponent()
	{
	}
	UClass* Z_Construct_UClass_UTVRInternalMagazineComponent_NoRegister()
	{
		return UTVRInternalMagazineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRInternalMagazineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInsertingCartridge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInsertingCartridge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexInsertion_MetaData[];
#endif
		static void NewProp_bUseComplexInsertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexInsertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInsertSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoInsertSound;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CompatibleAmmo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompatibleAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Capacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRMagazineCompInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * For any kind of internal magazine, like shotgun magtubes, etc.\n */" },
		{ "HideCategories", "ComponentTick Navigation Physics Collision Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Weapon/Component/TVRInternalMagazineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "For any kind of internal magazine, like shotgun magtubes, etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_MagAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_MagAudioComp = { "MagAudioComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, MagAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_MagAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_MagAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentInsertingCartridge_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentInsertingCartridge = { "CurrentInsertingCartridge", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, CurrentInsertingCartridge), Z_Construct_UClass_ATVRCartridge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentInsertingCartridge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentInsertingCartridge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** NOT YET IMPLEMENTED */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
		{ "ToolTip", "NOT YET IMPLEMENTED" },
	};
#endif
	void Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion_SetBit(void* Obj)
	{
		((UTVRInternalMagazineComponent*)Obj)->bUseComplexInsertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion = { "bUseComplexInsertion", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRInternalMagazineComponent), &Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_AmmoInsertSound_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_AmmoInsertSound = { "AmmoInsertSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, AmmoInsertSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_AmmoInsertSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_AmmoInsertSound_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo_Inner = { "CompatibleAmmo", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo = { "CompatibleAmmo", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, CompatibleAmmo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_Capacity_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, Capacity), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_Capacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRInternalMagazineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRInternalMagazineComponent, CurrentAmmo), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_MagAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentInsertingCartridge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_bUseComplexInsertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_AmmoInsertSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CompatibleAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::NewProp_CurrentAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRInternalMagazineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::ClassParams = {
		&UTVRInternalMagazineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRInternalMagazineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRInternalMagazineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRInternalMagazineComponent, 880047052);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRInternalMagazineComponent>()
	{
		return UTVRInternalMagazineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRInternalMagazineComponent(Z_Construct_UClass_UTVRInternalMagazineComponent, &UTVRInternalMagazineComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRInternalMagazineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRInternalMagazineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
