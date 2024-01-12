// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/TVRCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRCharacterMovementComponent() {}
// Cross Module References
	TACTICALVRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClimbInfo();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRCharacterMovementComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
// End Cross Module References
class UScriptStruct* FClimbInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TACTICALVRCORE_API uint32 Get_Z_Construct_UScriptStruct_FClimbInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimbInfo, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ClimbInfo"), sizeof(FClimbInfo), Get_Z_Construct_UScriptStruct_FClimbInfo_Hash());
	}
	return Singleton;
}
template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<FClimbInfo>()
{
	return FClimbInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClimbInfo(FClimbInfo::StaticStruct, TEXT("/Script/TacticalVRCore"), TEXT("ClimbInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TacticalVRCore_StaticRegisterNativesFClimbInfo
{
	FScriptStruct_TacticalVRCore_StaticRegisterNativesFClimbInfo()
	{
		UScriptStruct::DeferCppStructOps<FClimbInfo>(FName(TEXT("ClimbInfo")));
	}
} ScriptStruct_TacticalVRCore_StaticRegisterNativesFClimbInfo;
	struct Z_Construct_UScriptStruct_FClimbInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimbInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClimbInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimbInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimbInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
		nullptr,
		&NewStructOps,
		"ClimbInfo",
		sizeof(FClimbInfo),
		alignof(FClimbInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClimbInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimbInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClimbInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClimbInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClimbInfo"), sizeof(FClimbInfo), Get_Z_Construct_UScriptStruct_FClimbInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClimbInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClimbInfo_Hash() { return 227961153U; }
	void UTVRCharacterMovementComponent::StaticRegisterNativesUTVRCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UTVRCharacterMovementComponent_NoRegister()
	{
		return UTVRCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/TVRCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::ClassParams = {
		&UTVRCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRCharacterMovementComponent, 2217269379);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRCharacterMovementComponent>()
	{
		return UTVRCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRCharacterMovementComponent(Z_Construct_UClass_UTVRCharacterMovementComponent, &UTVRCharacterMovementComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
