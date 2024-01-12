// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRGunPrimaryHandSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunPrimaryHandSocket() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunPrimaryHandSocket_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunPrimaryHandSocket();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UTVRGunPrimaryHandSocket::StaticRegisterNativesUTVRGunPrimaryHandSocket()
	{
	}
	UClass* Z_Construct_UClass_UTVRGunPrimaryHandSocket_NoRegister()
	{
		return UTVRGunPrimaryHandSocket::StaticClass();
	}
	struct Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimTriggerSafe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandAnimTriggerSafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimTriggerTouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandAnimTriggerTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimTriggerPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandAnimTriggerPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandSocketComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRGunPrimaryHandSocket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunPrimaryHandSocket.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerSafe_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunPrimaryHandSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerSafe = { "HandAnimTriggerSafe", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunPrimaryHandSocket, HandAnimTriggerSafe), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerSafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerTouch_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunPrimaryHandSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerTouch = { "HandAnimTriggerTouch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunPrimaryHandSocket, HandAnimTriggerTouch), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerPressed_MetaData[] = {
		{ "Category", "Hand Animation" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunPrimaryHandSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerPressed = { "HandAnimTriggerPressed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunPrimaryHandSocket, HandAnimTriggerPressed), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerSafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::NewProp_HandAnimTriggerPressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRGunPrimaryHandSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::ClassParams = {
		&UTVRGunPrimaryHandSocket::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRGunPrimaryHandSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRGunPrimaryHandSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRGunPrimaryHandSocket, 4224361769);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRGunPrimaryHandSocket>()
	{
		return UTVRGunPrimaryHandSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRGunPrimaryHandSocket(Z_Construct_UClass_UTVRGunPrimaryHandSocket, &UTVRGunPrimaryHandSocket::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRGunPrimaryHandSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRGunPrimaryHandSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
