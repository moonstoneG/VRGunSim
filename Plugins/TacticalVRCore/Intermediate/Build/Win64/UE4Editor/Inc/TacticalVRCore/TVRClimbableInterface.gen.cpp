// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Interfaces/TVRClimbableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRClimbableInterface() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRClimbableInterface_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRClimbableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
// End Cross Module References
	void UTVRClimbableInterface::StaticRegisterNativesUTVRClimbableInterface()
	{
	}
	UClass* Z_Construct_UClass_UTVRClimbableInterface_NoRegister()
	{
		return UTVRClimbableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTVRClimbableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRClimbableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRClimbableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/TVRClimbableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRClimbableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITVRClimbableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRClimbableInterface_Statics::ClassParams = {
		&UTVRClimbableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRClimbableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRClimbableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRClimbableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRClimbableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRClimbableInterface, 286013454);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRClimbableInterface>()
	{
		return UTVRClimbableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRClimbableInterface(Z_Construct_UClass_UTVRClimbableInterface, &UTVRClimbableInterface::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRClimbableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRClimbableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
