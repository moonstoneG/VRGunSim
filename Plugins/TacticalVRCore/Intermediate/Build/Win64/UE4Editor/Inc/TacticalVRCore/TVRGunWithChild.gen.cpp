// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRGunWithChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunWithChild() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunWithChild_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunWithChild();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATVRGunWithChild::execOnChildGunDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGunDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunWithChild::execSetChildGun)
	{
		P_GET_OBJECT(ATVRGunBase,Z_Param_NewChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChildGun(Z_Param_NewChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunWithChild::execOnMagReleasePressedHovered)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleasePressedHovered(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunWithChild::execCanPressMagRelease)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PressLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPressMagRelease_Implementation(Z_Param_Out_PressLocation);
		P_NATIVE_END;
	}
	static FName NAME_ATVRGunWithChild_CanPressMagRelease = FName(TEXT("CanPressMagRelease"));
	bool ATVRGunWithChild::CanPressMagRelease(FVector const& PressLocation) const
	{
		TVRGunWithChild_eventCanPressMagRelease_Parms Parms;
		Parms.PressLocation=PressLocation;
		const_cast<ATVRGunWithChild*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunWithChild_CanPressMagRelease),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ATVRGunWithChild_GetChildHoverInputComp = FName(TEXT("GetChildHoverInputComp"));
	UTVRHoverInputVolume* ATVRGunWithChild::GetChildHoverInputComp() const
	{
		TVRGunWithChild_eventGetChildHoverInputComp_Parms Parms;
		const_cast<ATVRGunWithChild*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunWithChild_GetChildHoverInputComp),&Parms);
		return Parms.ReturnValue;
	}
	void ATVRGunWithChild::StaticRegisterNativesATVRGunWithChild()
	{
		UClass* Class = ATVRGunWithChild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPressMagRelease", &ATVRGunWithChild::execCanPressMagRelease },
			{ "OnChildGunDestroyed", &ATVRGunWithChild::execOnChildGunDestroyed },
			{ "OnMagReleasePressedHovered", &ATVRGunWithChild::execOnMagReleasePressedHovered },
			{ "SetChildGun", &ATVRGunWithChild::execSetChildGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_PressLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_PressLocation = { "PressLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunWithChild_eventCanPressMagRelease_Parms, PressLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_PressLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_PressLocation_MetaData)) };
	void Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunWithChild_eventCanPressMagRelease_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunWithChild_eventCanPressMagRelease_Parms), &Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_PressLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "GunWithChild" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunWithChild, nullptr, "CanPressMagRelease", nullptr, nullptr, sizeof(TVRGunWithChild_eventCanPressMagRelease_Parms), Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunWithChild_eventGetChildHoverInputComp_Parms, ReturnValue), Z_Construct_UClass_UTVRHoverInputVolume_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "GunWithChild" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunWithChild, nullptr, "GetChildHoverInputComp", nullptr, nullptr, sizeof(TVRGunWithChild_eventGetChildHoverInputComp_Parms), Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics
	{
		struct TVRGunWithChild_eventOnChildGunDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunWithChild_eventOnChildGunDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunWithChild, nullptr, "OnChildGunDestroyed", nullptr, nullptr, sizeof(TVRGunWithChild_eventOnChildGunDestroyed_Parms), Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics
	{
		struct TVRGunWithChild_eventOnMagReleasePressedHovered_Parms
		{
			UGripMotionControllerComponent* Controller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunWithChild_eventOnMagReleasePressedHovered_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunWithChild, nullptr, "OnMagReleasePressedHovered", nullptr, nullptr, sizeof(TVRGunWithChild_eventOnMagReleasePressedHovered_Parms), Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics
	{
		struct TVRGunWithChild_eventSetChildGun_Parms
		{
			ATVRGunBase* NewChild;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewChild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::NewProp_NewChild = { "NewChild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunWithChild_eventSetChildGun_Parms, NewChild), Z_Construct_UClass_ATVRGunBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::NewProp_NewChild,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::Function_MetaDataParams[] = {
		{ "Category", "GunWithChild" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunWithChild, nullptr, "SetChildGun", nullptr, nullptr, sizeof(TVRGunWithChild_eventSetChildGun_Parms), Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunWithChild_SetChildGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunWithChild_SetChildGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRGunWithChild_NoRegister()
	{
		return ATVRGunWithChild::StaticClass();
	}
	struct Z_Construct_UClass_ATVRGunWithChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRGunWithChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRGunBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRGunWithChild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRGunWithChild_CanPressMagRelease, "CanPressMagRelease" }, // 3938897810
		{ &Z_Construct_UFunction_ATVRGunWithChild_GetChildHoverInputComp, "GetChildHoverInputComp" }, // 3461646192
		{ &Z_Construct_UFunction_ATVRGunWithChild_OnChildGunDestroyed, "OnChildGunDestroyed" }, // 446134568
		{ &Z_Construct_UFunction_ATVRGunWithChild_OnMagReleasePressedHovered, "OnMagReleasePressedHovered" }, // 3903243286
		{ &Z_Construct_UFunction_ATVRGunWithChild_SetChildGun, "SetChildGun" }, // 2007203578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunWithChild_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapon/TVRGunWithChild.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunWithChild_Statics::NewProp_ChildGun_MetaData[] = {
		{ "Category", "GunWithChild" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunWithChild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunWithChild_Statics::NewProp_ChildGun = { "ChildGun", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunWithChild, ChildGun), Z_Construct_UClass_ATVRGunBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunWithChild_Statics::NewProp_ChildGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunWithChild_Statics::NewProp_ChildGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRGunWithChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunWithChild_Statics::NewProp_ChildGun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRGunWithChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRGunWithChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRGunWithChild_Statics::ClassParams = {
		&ATVRGunWithChild::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRGunWithChild_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunWithChild_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRGunWithChild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunWithChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRGunWithChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRGunWithChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRGunWithChild, 2874518135);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRGunWithChild>()
	{
		return ATVRGunWithChild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRGunWithChild(Z_Construct_UClass_ATVRGunWithChild, &ATVRGunWithChild::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRGunWithChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRGunWithChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
