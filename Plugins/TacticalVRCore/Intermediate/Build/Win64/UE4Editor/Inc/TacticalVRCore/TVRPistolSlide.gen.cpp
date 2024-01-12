// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRPistolSlide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRPistolSlide() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRPistolSlide_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRPistolSlide();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTVRPistolSlide::execOnEndFiringCycle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndFiringCycle();
		P_NATIVE_END;
	}
	void UTVRPistolSlide::StaticRegisterNativesUTVRPistolSlide()
	{
		UClass* Class = UTVRPistolSlide::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndFiringCycle", &UTVRPistolSlide::execOnEndFiringCycle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRPistolSlide, nullptr, "OnEndFiringCycle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRPistolSlide_NoRegister()
	{
		return UTVRPistolSlide::StaticClass();
	}
	struct Z_Construct_UClass_UTVRPistolSlide_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargingHandleStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeflection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeflection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRPistolSlide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrippableStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRPistolSlide_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRPistolSlide_OnEndFiringCycle, "OnEndFiringCycle" }, // 3572168106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPistolSlide_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Weapon/Component/TVRPistolSlide.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_ChargingHandleStiffness_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_ChargingHandleStiffness = { "ChargingHandleStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPistolSlide, ChargingHandleStiffness), METADATA_PARAMS(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_ChargingHandleStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_ChargingHandleStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_MaxDeflection_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_MaxDeflection = { "MaxDeflection", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPistolSlide, MaxDeflection), METADATA_PARAMS(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_MaxDeflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_MaxDeflection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPistolSlide, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_SlideSoundCue_MetaData[] = {
		{ "Category", "PumpAction" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPistolSlide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_SlideSoundCue = { "SlideSoundCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPistolSlide, SlideSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_SlideSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_SlideSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRPistolSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_ChargingHandleStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_MaxDeflection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPistolSlide_Statics::NewProp_SlideSoundCue,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTVRPistolSlide_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister, (int32)VTABLE_OFFSET(UTVRPistolSlide, ITVRChargingHandleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRPistolSlide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRPistolSlide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRPistolSlide_Statics::ClassParams = {
		&UTVRPistolSlide::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRPistolSlide_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRPistolSlide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPistolSlide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRPistolSlide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRPistolSlide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRPistolSlide, 4284381424);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRPistolSlide>()
	{
		return UTVRPistolSlide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRPistolSlide(Z_Construct_UClass_UTVRPistolSlide, &UTVRPistolSlide::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRPistolSlide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRPistolSlide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
