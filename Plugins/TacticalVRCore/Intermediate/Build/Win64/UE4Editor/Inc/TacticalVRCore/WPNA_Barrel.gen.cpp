// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_Barrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_Barrel() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Barrel_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Barrel();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWPNA_Barrel::execGetSecondarySlotComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetSecondarySlotComponent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWPNA_Barrel_GetSecondarySlotComponent = FName(TEXT("GetSecondarySlotComponent"));
	USceneComponent* AWPNA_Barrel::GetSecondarySlotComponent() const
	{
		WPNA_Barrel_eventGetSecondarySlotComponent_Parms Parms;
		const_cast<AWPNA_Barrel*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWPNA_Barrel_GetSecondarySlotComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWPNA_Barrel_OnFoldSights = FName(TEXT("OnFoldSights"));
	void AWPNA_Barrel::OnFoldSights(bool bShouldFold)
	{
		WPNA_Barrel_eventOnFoldSights_Parms Parms;
		Parms.bShouldFold=bShouldFold ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_Barrel_OnFoldSights),&Parms);
	}
	void AWPNA_Barrel::StaticRegisterNativesAWPNA_Barrel()
	{
		UClass* Class = AWPNA_Barrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSecondarySlotComponent", &AWPNA_Barrel::execGetSecondarySlotComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_Barrel_eventGetSecondarySlotComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Barrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Barrel, nullptr, "GetSecondarySlotComponent", nullptr, nullptr, sizeof(WPNA_Barrel_eventGetSecondarySlotComponent_Parms), Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics
	{
		static void NewProp_bShouldFold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::NewProp_bShouldFold_SetBit(void* Obj)
	{
		((WPNA_Barrel_eventOnFoldSights_Parms*)Obj)->bShouldFold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::NewProp_bShouldFold = { "bShouldFold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_Barrel_eventOnFoldSights_Parms), &Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::NewProp_bShouldFold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::NewProp_bShouldFold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Barrel" },
		{ "Comment", "/** Function called when sights need to be folded */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Barrel.h" },
		{ "ToolTip", "Function called when sights need to be folded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Barrel, nullptr, "OnFoldSights", nullptr, nullptr, sizeof(WPNA_Barrel_eventOnFoldSights_Parms), Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_Barrel_NoRegister()
	{
		return AWPNA_Barrel::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_Barrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringLocOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringLocOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuppressor_MetaData[];
#endif
		static void NewProp_bIsSuppressor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuppressor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_Barrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_Barrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_Barrel_GetSecondarySlotComponent, "GetSecondarySlotComponent" }, // 970961954
		{ &Z_Construct_UFunction_AWPNA_Barrel_OnFoldSights, "OnFoldSights" }, // 182415389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Barrel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_Barrel.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Barrel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_FiringLocOverride_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Barrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_FiringLocOverride = { "FiringLocOverride", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Barrel, FiringLocOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_FiringLocOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_FiringLocOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Barrel.h" },
	};
#endif
	void Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor_SetBit(void* Obj)
	{
		((AWPNA_Barrel*)Obj)->bIsSuppressor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor = { "bIsSuppressor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_Barrel), &Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_Barrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_FiringLocOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Barrel_Statics::NewProp_bIsSuppressor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWPNA_Barrel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRHandSocketInterface_NoRegister, (int32)VTABLE_OFFSET(AWPNA_Barrel, ITVRHandSocketInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_Barrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_Barrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_Barrel_Statics::ClassParams = {
		&AWPNA_Barrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_Barrel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Barrel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_Barrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Barrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_Barrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_Barrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_Barrel, 4090897495);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_Barrel>()
	{
		return AWPNA_Barrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_Barrel(Z_Construct_UClass_AWPNA_Barrel, &AWPNA_Barrel::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_Barrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_Barrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
