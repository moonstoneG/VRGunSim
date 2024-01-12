// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/TVRPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRPlayerController() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRPlayerController_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRPlayerController();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunHapticsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATVRPlayerController::execGetGunHapticsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRGunHapticsComponent**)Z_Param__Result=P_THIS->GetGunHapticsComponent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATVRPlayerController_GetGunHapticsComponent = FName(TEXT("GetGunHapticsComponent"));
	UTVRGunHapticsComponent* ATVRPlayerController::GetGunHapticsComponent() const
	{
		TVRPlayerController_eventGetGunHapticsComponent_Parms Parms;
		const_cast<ATVRPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRPlayerController_GetGunHapticsComponent),&Parms);
		return Parms.ReturnValue;
	}
	void ATVRPlayerController::StaticRegisterNativesATVRPlayerController()
	{
		UClass* Class = ATVRPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGunHapticsComponent", &ATVRPlayerController::execGetGunHapticsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRPlayerController_eventGetGunHapticsComponent_Parms, ReturnValue), Z_Construct_UClass_UTVRGunHapticsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hapctics" },
		{ "Comment", "/**\n\x09 * This function will try to look for a gun haptics component within the player controller\n\x09 * make sure that a player controller only has one.\n\x09 * @returns the first gun haptics component found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRPlayerController.h" },
		{ "ToolTip", "This function will try to look for a gun haptics component within the player controller\nmake sure that a player controller only has one.\n@returns the first gun haptics component found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRPlayerController, nullptr, "GetGunHapticsComponent", nullptr, nullptr, sizeof(TVRPlayerController_eventGetGunHapticsComponent_Parms), Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRPlayerController_NoRegister()
	{
		return ATVRPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATVRPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRPlayerController_GetGunHapticsComponent, "GetGunHapticsComponent" }, // 2355472585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/TVRPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/TVRPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRPlayerController_Statics::ClassParams = {
		&ATVRPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRPlayerController, 1393808150);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRPlayerController>()
	{
		return ATVRPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRPlayerController(Z_Construct_UClass_ATVRPlayerController, &ATVRPlayerController::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
