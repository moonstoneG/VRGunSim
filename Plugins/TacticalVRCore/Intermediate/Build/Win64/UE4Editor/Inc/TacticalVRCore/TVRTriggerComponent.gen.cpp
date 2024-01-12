// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRTriggerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRTriggerComponent() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRTriggerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRTriggerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "TriggerEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execDoesTriggerNeedReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesTriggerNeedReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execGetTriggerResetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTriggerResetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execGetTriggerActivateValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTriggerActivateValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execGetTriggerValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTriggerValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execDeactivateTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRTriggerComponent::execActivateTrigger)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ActivatingController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTrigger(Z_Param_ActivatingController);
		P_NATIVE_END;
	}
	void UTVRTriggerComponent::StaticRegisterNativesUTVRTriggerComponent()
	{
		UClass* Class = UTVRTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTrigger", &UTVRTriggerComponent::execActivateTrigger },
			{ "DeactivateTrigger", &UTVRTriggerComponent::execDeactivateTrigger },
			{ "DoesTriggerNeedReset", &UTVRTriggerComponent::execDoesTriggerNeedReset },
			{ "GetTriggerActivateValue", &UTVRTriggerComponent::execGetTriggerActivateValue },
			{ "GetTriggerResetValue", &UTVRTriggerComponent::execGetTriggerResetValue },
			{ "GetTriggerValue", &UTVRTriggerComponent::execGetTriggerValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics
	{
		struct TVRTriggerComponent_eventActivateTrigger_Parms
		{
			UGripMotionControllerComponent* ActivatingController;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::NewProp_ActivatingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::NewProp_ActivatingController = { "ActivatingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRTriggerComponent_eventActivateTrigger_Parms, ActivatingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::NewProp_ActivatingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::NewProp_ActivatingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::NewProp_ActivatingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "ActivateTrigger", nullptr, nullptr, sizeof(TVRTriggerComponent_eventActivateTrigger_Parms), Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "DeactivateTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics
	{
		struct TVRTriggerComponent_eventDoesTriggerNeedReset_Parms
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
	void Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRTriggerComponent_eventDoesTriggerNeedReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRTriggerComponent_eventDoesTriggerNeedReset_Parms), &Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "DoesTriggerNeedReset", nullptr, nullptr, sizeof(TVRTriggerComponent_eventDoesTriggerNeedReset_Parms), Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics
	{
		struct TVRTriggerComponent_eventGetTriggerActivateValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRTriggerComponent_eventGetTriggerActivateValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "GetTriggerActivateValue", nullptr, nullptr, sizeof(TVRTriggerComponent_eventGetTriggerActivateValue_Parms), Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics
	{
		struct TVRTriggerComponent_eventGetTriggerResetValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRTriggerComponent_eventGetTriggerResetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "GetTriggerResetValue", nullptr, nullptr, sizeof(TVRTriggerComponent_eventGetTriggerResetValue_Parms), Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics
	{
		struct TVRTriggerComponent_eventGetTriggerValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRTriggerComponent_eventGetTriggerValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRTriggerComponent, nullptr, "GetTriggerValue", nullptr, nullptr, sizeof(TVRTriggerComponent_eventGetTriggerValue_Parms), Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRTriggerComponent_NoRegister()
	{
		return UTVRTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTriggerActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggerActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTriggerReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggerReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondTriggerStageActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondTriggerStageActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondTriggerStageReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondTriggerStageReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDualStageTrigger_MetaData[];
#endif
		static void NewProp_bDualStageTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDualStageTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerActivate2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerActivate2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerReset2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerReset2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRTriggerComponent_ActivateTrigger, "ActivateTrigger" }, // 1696211449
		{ &Z_Construct_UFunction_UTVRTriggerComponent_DeactivateTrigger, "DeactivateTrigger" }, // 291522516
		{ &Z_Construct_UFunction_UTVRTriggerComponent_DoesTriggerNeedReset, "DoesTriggerNeedReset" }, // 3095154982
		{ &Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerActivateValue, "GetTriggerActivateValue" }, // 3617688845
		{ &Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerResetValue, "GetTriggerResetValue" }, // 729475054
		{ &Z_Construct_UFunction_UTVRTriggerComponent_GetTriggerValue, "GetTriggerValue" }, // 4276317244
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/Component/TVRTriggerComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerActivate_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerActivate = { "OnTriggerActivate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, OnTriggerActivate), Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerReset_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerReset = { "OnTriggerReset", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, OnTriggerReset), Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageActivate_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageActivate = { "OnSecondTriggerStageActivate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, OnSecondTriggerStageActivate), Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageReset_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageReset = { "OnSecondTriggerStageReset", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, OnSecondTriggerStageReset), Z_Construct_UDelegateFunction_TacticalVRCore_TriggerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate = { "TriggerActivate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, TriggerActivate), METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset = { "TriggerReset", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, TriggerReset), METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger_SetBit(void* Obj)
	{
		((UTVRTriggerComponent*)Obj)->bDualStageTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger = { "bDualStageTrigger", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRTriggerComponent), &Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate2_MetaData[] = {
		{ "Category", "Trigger|Dual Stage" },
		{ "EditConditon", "bDualStageTrigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate2 = { "TriggerActivate2", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, TriggerActivate2), METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset2_MetaData[] = {
		{ "Category", "Trigger|Dual Stage" },
		{ "EditConditon", "bDualStageTrigger" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRTriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset2 = { "TriggerReset2", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRTriggerComponent, TriggerReset2), METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnTriggerReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_OnSecondTriggerStageReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_bDualStageTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerActivate2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRTriggerComponent_Statics::NewProp_TriggerReset2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRTriggerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRTriggerComponent_Statics::ClassParams = {
		&UTVRTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRTriggerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRTriggerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRTriggerComponent, 3952499831);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRTriggerComponent>()
	{
		return UTVRTriggerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRTriggerComponent(Z_Construct_UClass_UTVRTriggerComponent, &UTVRTriggerComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRTriggerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRTriggerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
