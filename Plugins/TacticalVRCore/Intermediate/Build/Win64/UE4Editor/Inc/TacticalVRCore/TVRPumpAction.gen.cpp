// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRPumpAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRPumpAction() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRPumpAction_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRPumpAction();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTVRPumpAction::execOnStopUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRPumpAction::execOnStartUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRPumpAction::execOnGripped)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripped(Z_Param_GrippingController,Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	void UTVRPumpAction::StaticRegisterNativesUTVRPumpAction()
	{
		UClass* Class = UTVRPumpAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGripped", &UTVRPumpAction::execOnGripped },
			{ "OnStartUse", &UTVRPumpAction::execOnStartUse },
			{ "OnStopUse", &UTVRPumpAction::execOnStopUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics
	{
		struct TVRPumpAction_eventOnGripped_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRPumpAction_eventOnGripped_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRPumpAction_eventOnGripped_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRPumpAction, nullptr, "OnGripped", nullptr, nullptr, sizeof(TVRPumpAction_eventOnGripped_Parms), Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRPumpAction_OnGripped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRPumpAction_OnGripped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRPumpAction, nullptr, "OnStartUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRPumpAction_OnStartUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRPumpAction_OnStartUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRPumpAction, nullptr, "OnStopUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRPumpAction_OnStopUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRPumpAction_OnStopUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRPumpAction_NoRegister()
	{
		return UTVRPumpAction::StaticClass();
	}
	struct Z_Construct_UClass_UTVRPumpAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PumpActionSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PumpActionSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRPumpAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRPumpAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRPumpAction_OnGripped, "OnGripped" }, // 2286661080
		{ &Z_Construct_UFunction_UTVRPumpAction_OnStartUse, "OnStartUse" }, // 182762750
		{ &Z_Construct_UFunction_UTVRPumpAction_OnStopUse, "OnStopUse" }, // 533095802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPumpAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Weapon/Component/TVRPumpAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPumpAction, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_PumpActionSoundCue_MetaData[] = {
		{ "Category", "PumpAction" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRPumpAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_PumpActionSoundCue = { "PumpActionSoundCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRPumpAction, PumpActionSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_PumpActionSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_PumpActionSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRPumpAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRPumpAction_Statics::NewProp_PumpActionSoundCue,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTVRPumpAction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister, (int32)VTABLE_OFFSET(UTVRPumpAction, ITVRChargingHandleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRPumpAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRPumpAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRPumpAction_Statics::ClassParams = {
		&UTVRPumpAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRPumpAction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPumpAction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRPumpAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRPumpAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRPumpAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRPumpAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRPumpAction, 3403464621);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRPumpAction>()
	{
		return UTVRPumpAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRPumpAction(Z_Construct_UClass_UTVRPumpAction, &UTVRPumpAction::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRPumpAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRPumpAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
