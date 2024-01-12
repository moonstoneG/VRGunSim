// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_ForeGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_ForeGrip() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_ForeGrip_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_ForeGrip();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWPNA_ForeGrip::execGetPrimaryHandSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=P_THIS->GetPrimaryHandSocket_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWPNA_ForeGrip_GetPrimaryHandSocket = FName(TEXT("GetPrimaryHandSocket"));
	UHandSocketComponent* AWPNA_ForeGrip::GetPrimaryHandSocket() const
	{
		WPNA_ForeGrip_eventGetPrimaryHandSocket_Parms Parms;
		const_cast<AWPNA_ForeGrip*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWPNA_ForeGrip_GetPrimaryHandSocket),&Parms);
		return Parms.ReturnValue;
	}
	void AWPNA_ForeGrip::StaticRegisterNativesAWPNA_ForeGrip()
	{
		UClass* Class = AWPNA_ForeGrip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrimaryHandSocket", &AWPNA_ForeGrip::execGetPrimaryHandSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_ForeGrip_eventGetPrimaryHandSocket_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForeGrip" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_ForeGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_ForeGrip, nullptr, "GetPrimaryHandSocket", nullptr, nullptr, sizeof(WPNA_ForeGrip_eventGetPrimaryHandSocket_Parms), Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_ForeGrip_NoRegister()
	{
		return AWPNA_ForeGrip::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_ForeGrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotGripDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotGripDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_ForeGrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_ForeGrip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_ForeGrip_GetPrimaryHandSocket, "GetPrimaryHandSocket" }, // 3689127688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_ForeGrip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_ForeGrip.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_ForeGrip.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_PrimarySlotGripDistance_MetaData[] = {
		{ "Category", "Foregrip" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_ForeGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_PrimarySlotGripDistance = { "PrimarySlotGripDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_ForeGrip, PrimarySlotGripDistance), METADATA_PARAMS(Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_PrimarySlotGripDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_PrimarySlotGripDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_RecoilModifier_MetaData[] = {
		{ "Category", "Foregrip" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_ForeGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_RecoilModifier = { "RecoilModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_ForeGrip, RecoilModifier), METADATA_PARAMS(Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_RecoilModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_RecoilModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_ForeGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_PrimarySlotGripDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_ForeGrip_Statics::NewProp_RecoilModifier,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWPNA_ForeGrip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRHandSocketInterface_NoRegister, (int32)VTABLE_OFFSET(AWPNA_ForeGrip, ITVRHandSocketInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_ForeGrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_ForeGrip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_ForeGrip_Statics::ClassParams = {
		&AWPNA_ForeGrip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_ForeGrip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_ForeGrip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_ForeGrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_ForeGrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_ForeGrip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_ForeGrip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_ForeGrip, 3036240379);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_ForeGrip>()
	{
		return AWPNA_ForeGrip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_ForeGrip(Z_Construct_UClass_AWPNA_ForeGrip, &AWPNA_ForeGrip::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_ForeGrip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_ForeGrip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
