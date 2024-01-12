// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/PauseMenuActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenuActor() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_APauseMenuActor_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_APauseMenuActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APauseMenuActor::execGetCurrentlyActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetCurrentlyActiveWidget();
		P_NATIVE_END;
	}
	static FName NAME_APauseMenuActor_FocusWidget = FName(TEXT("FocusWidget"));
	void APauseMenuActor::FocusWidget(UWidgetComponent* NewFocusWidget)
	{
		PauseMenuActor_eventFocusWidget_Parms Parms;
		Parms.NewFocusWidget=NewFocusWidget;
		ProcessEvent(FindFunctionChecked(NAME_APauseMenuActor_FocusWidget),&Parms);
	}
	static FName NAME_APauseMenuActor_StartRemoveMenu = FName(TEXT("StartRemoveMenu"));
	void APauseMenuActor::StartRemoveMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_APauseMenuActor_StartRemoveMenu),NULL);
	}
	static FName NAME_APauseMenuActor_UnfocusWidget = FName(TEXT("UnfocusWidget"));
	void APauseMenuActor::UnfocusWidget(UWidgetComponent* OldFocusWidget)
	{
		PauseMenuActor_eventUnfocusWidget_Parms Parms;
		Parms.OldFocusWidget=OldFocusWidget;
		ProcessEvent(FindFunctionChecked(NAME_APauseMenuActor_UnfocusWidget),&Parms);
	}
	void APauseMenuActor::StaticRegisterNativesAPauseMenuActor()
	{
		UClass* Class = APauseMenuActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentlyActiveWidget", &APauseMenuActor::execGetCurrentlyActiveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFocusWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFocusWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::NewProp_NewFocusWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::NewProp_NewFocusWidget = { "NewFocusWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PauseMenuActor_eventFocusWidget_Parms, NewFocusWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::NewProp_NewFocusWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::NewProp_NewFocusWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::NewProp_NewFocusWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "Comment", "/**\n     * Call to focus a Widget from this Menu.\n     * @param NewFocusWidget WidgetComponent to focus. If it is not an Widget Component from this menu the function won't do anything.\n     */" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
		{ "ToolTip", "Call to focus a Widget from this Menu.\n@param NewFocusWidget WidgetComponent to focus. If it is not an Widget Component from this menu the function won't do anything." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APauseMenuActor, nullptr, "FocusWidget", nullptr, nullptr, sizeof(PauseMenuActor_eventFocusWidget_Parms), Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APauseMenuActor_FocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APauseMenuActor_FocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics
	{
		struct PauseMenuActor_eventGetCurrentlyActiveWidget_Parms
		{
			UWidgetComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PauseMenuActor_eventGetCurrentlyActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "Comment", "/**\n     * Returns the currently active widget that the widget interaction component is supposed to interactiv with\n     */" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
		{ "ToolTip", "Returns the currently active widget that the widget interaction component is supposed to interactiv with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APauseMenuActor, nullptr, "GetCurrentlyActiveWidget", nullptr, nullptr, sizeof(PauseMenuActor_eventGetCurrentlyActiveWidget_Parms), Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APauseMenuActor, nullptr, "StartRemoveMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldFocusWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldFocusWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::NewProp_OldFocusWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::NewProp_OldFocusWidget = { "OldFocusWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PauseMenuActor_eventUnfocusWidget_Parms, OldFocusWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::NewProp_OldFocusWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::NewProp_OldFocusWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::NewProp_OldFocusWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "Comment", "/**\n     * Unused might be necessary if there is a tertiary menu structure\n     */" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
		{ "ToolTip", "Unused might be necessary if there is a tertiary menu structure" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APauseMenuActor, nullptr, "UnfocusWidget", nullptr, nullptr, sizeof(PauseMenuActor_eventUnfocusWidget_Parms), Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APauseMenuActor_UnfocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APauseMenuActor_UnfocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APauseMenuActor_NoRegister()
	{
		return APauseMenuActor::StaticClass();
	}
	struct Z_Construct_UClass_APauseMenuActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyActiveWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlyActiveWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APauseMenuActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APauseMenuActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APauseMenuActor_FocusWidget, "FocusWidget" }, // 2698886931
		{ &Z_Construct_UFunction_APauseMenuActor_GetCurrentlyActiveWidget, "GetCurrentlyActiveWidget" }, // 1628165358
		{ &Z_Construct_UFunction_APauseMenuActor_StartRemoveMenu, "StartRemoveMenu" }, // 2887034598
		{ &Z_Construct_UFunction_APauseMenuActor_UnfocusWidget, "UnfocusWidget" }, // 3964121830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APauseMenuActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PauseMenuActor.h" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APauseMenuActor_Statics::NewProp_CurrentlyActiveWidget_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PauseMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APauseMenuActor_Statics::NewProp_CurrentlyActiveWidget = { "CurrentlyActiveWidget", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APauseMenuActor, CurrentlyActiveWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APauseMenuActor_Statics::NewProp_CurrentlyActiveWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APauseMenuActor_Statics::NewProp_CurrentlyActiveWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APauseMenuActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APauseMenuActor_Statics::NewProp_CurrentlyActiveWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APauseMenuActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APauseMenuActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APauseMenuActor_Statics::ClassParams = {
		&APauseMenuActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APauseMenuActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APauseMenuActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APauseMenuActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APauseMenuActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APauseMenuActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APauseMenuActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APauseMenuActor, 1567598757);
	template<> TACTICALVRCORE_API UClass* StaticClass<APauseMenuActor>()
	{
		return APauseMenuActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APauseMenuActor(Z_Construct_UClass_APauseMenuActor, &APauseMenuActor::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("APauseMenuActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APauseMenuActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
