// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_Light.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_Light() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Light_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Light();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWPNA_Light::execIsLightOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLightOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_Light::execToggleLight)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	void AWPNA_Light::StaticRegisterNativesAWPNA_Light()
	{
		UClass* Class = AWPNA_Light::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLightOn", &AWPNA_Light::execIsLightOn },
			{ "ToggleLight", &AWPNA_Light::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics
	{
		struct WPNA_Light_eventIsLightOn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WPNA_Light_eventIsLightOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_Light_eventIsLightOn_Parms), &Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Light, nullptr, "IsLightOn", nullptr, nullptr, sizeof(WPNA_Light_eventIsLightOn_Parms), Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Light_IsLightOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Light_IsLightOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics
	{
		struct WPNA_Light_eventToggleLight_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_Light_eventToggleLight_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Light, nullptr, "ToggleLight", nullptr, nullptr, sizeof(WPNA_Light_eventToggleLight_Parms), Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Light_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Light_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_Light_NoRegister()
	{
		return AWPNA_Light::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_Light_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightToggleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightToggleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightOnMaterialParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LightOnMaterialParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMaterialSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightMaterialSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_Light_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_Light_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_Light_IsLightOn, "IsLightOn" }, // 3489553345
		{ &Z_Construct_UFunction_AWPNA_Light_ToggleLight, "ToggleLight" }, // 1183727567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_Light.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_HoverInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_HoverInputComponent = { "HoverInputComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, HoverInputComponent), Z_Construct_UClass_UTVRHoverInputVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_HoverInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_HoverInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightToggleSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightToggleSound = { "LightToggleSound", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, LightToggleSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightToggleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightToggleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_SpotLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightOnMaterialParam_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightOnMaterialParam = { "LightOnMaterialParam", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, LightOnMaterialParam), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightOnMaterialParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightOnMaterialParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialSlot_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialSlot = { "LightMaterialSlot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, LightMaterialSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Light.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialInstance = { "LightMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Light, LightMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_Light_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_HoverInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightToggleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_SpotLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightOnMaterialParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Light_Statics::NewProp_LightMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_Light_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_Light>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_Light_Statics::ClassParams = {
		&AWPNA_Light::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_Light_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_Light_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Light_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_Light()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_Light_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_Light, 3465256278);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_Light>()
	{
		return AWPNA_Light::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_Light(Z_Construct_UClass_AWPNA_Light, &AWPNA_Light::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_Light"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_Light);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
