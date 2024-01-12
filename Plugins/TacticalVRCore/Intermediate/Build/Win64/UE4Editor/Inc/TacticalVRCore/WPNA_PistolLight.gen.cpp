// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_PistolLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_PistolLight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_PistolLight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWPNA_PistolLight::execToggleLaser)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLaser(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_PistolLight::execToggleLight)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	void AWPNA_PistolLight::StaticRegisterNativesAWPNA_PistolLight()
	{
		UClass* Class = AWPNA_PistolLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLaser", &AWPNA_PistolLight::execToggleLaser },
			{ "ToggleLight", &AWPNA_PistolLight::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics
	{
		struct WPNA_PistolLight_eventToggleLaser_Parms
		{
			UGripMotionControllerComponent* UsingHand;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_PistolLight_eventToggleLaser_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_PistolLight, nullptr, "ToggleLaser", nullptr, nullptr, sizeof(WPNA_PistolLight_eventToggleLaser_Parms), Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics
	{
		struct WPNA_PistolLight_eventToggleLight_Parms
		{
			UGripMotionControllerComponent* UsingHand;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_PistolLight_eventToggleLight_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_PistolLight, nullptr, "ToggleLight", nullptr, nullptr, sizeof(WPNA_PistolLight_eventToggleLight_Parms), Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_PistolLight_NoRegister()
	{
		return AWPNA_PistolLight::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_PistolLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserToggleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserToggleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_PistolLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_PistolLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_PistolLight_ToggleLaser, "ToggleLaser" }, // 1335806072
		{ &Z_Construct_UFunction_AWPNA_PistolLight_ToggleLight, "ToggleLight" }, // 1185016824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_PistolLight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_HoverInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_HoverInputComponent = { "HoverInputComponent", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLight, HoverInputComponent), Z_Construct_UClass_UTVRHoverInputVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_HoverInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_HoverInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_LaserToggleSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_LaserToggleSound = { "LaserToggleSound", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLight, LaserToggleSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_LaserToggleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_LaserToggleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_PistolLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_PistolLight, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_SpotLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_PistolLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_HoverInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_LaserToggleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_PistolLight_Statics::NewProp_SpotLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_PistolLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_PistolLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_PistolLight_Statics::ClassParams = {
		&AWPNA_PistolLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_PistolLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLight_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_PistolLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_PistolLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_PistolLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_PistolLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_PistolLight, 3093844998);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_PistolLight>()
	{
		return AWPNA_PistolLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_PistolLight(Z_Construct_UClass_AWPNA_PistolLight, &AWPNA_PistolLight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_PistolLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_PistolLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
