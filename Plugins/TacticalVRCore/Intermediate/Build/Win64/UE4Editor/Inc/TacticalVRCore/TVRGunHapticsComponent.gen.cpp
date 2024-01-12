// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Components/TVRGunHapticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunHapticsComponent() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunHapticsComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunHapticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execPistolKick)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETVRLeftRight,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PistolKick_Implementation(Z_Param_Strength,Z_Param_Duration,ETVRLeftRight(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execButtstockKick)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtstockKick_Implementation(Z_Param_Strength,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execGetOwnerPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwnerPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execClientPistolKick)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETVRLeftRight,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPistolKick_Implementation(Z_Param_Strength,Z_Param_Duration,ETVRLeftRight(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execClientButtstockKick)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Strength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientButtstockKick_Implementation(Z_Param_Strength,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunHapticsComponent::execLocalBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalBeginPlay_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTVRGunHapticsComponent_ButtstockKick = FName(TEXT("ButtstockKick"));
	void UTVRGunHapticsComponent::ButtstockKick(uint8 Strength, float Duration)
	{
		TVRGunHapticsComponent_eventButtstockKick_Parms Parms;
		Parms.Strength=Strength;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunHapticsComponent_ButtstockKick),&Parms);
	}
	static FName NAME_UTVRGunHapticsComponent_ClientButtstockKick = FName(TEXT("ClientButtstockKick"));
	void UTVRGunHapticsComponent::ClientButtstockKick(uint8 Strength, float Duration)
	{
		TVRGunHapticsComponent_eventClientButtstockKick_Parms Parms;
		Parms.Strength=Strength;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunHapticsComponent_ClientButtstockKick),&Parms);
	}
	static FName NAME_UTVRGunHapticsComponent_ClientPistolKick = FName(TEXT("ClientPistolKick"));
	void UTVRGunHapticsComponent::ClientPistolKick(uint8 Strength, float Duration, ETVRLeftRight Type)
	{
		TVRGunHapticsComponent_eventClientPistolKick_Parms Parms;
		Parms.Strength=Strength;
		Parms.Duration=Duration;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunHapticsComponent_ClientPistolKick),&Parms);
	}
	static FName NAME_UTVRGunHapticsComponent_LocalBeginPlay = FName(TEXT("LocalBeginPlay"));
	void UTVRGunHapticsComponent::LocalBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunHapticsComponent_LocalBeginPlay),NULL);
	}
	static FName NAME_UTVRGunHapticsComponent_PistolKick = FName(TEXT("PistolKick"));
	void UTVRGunHapticsComponent::PistolKick(uint8 Strength, float Duration, ETVRLeftRight Type)
	{
		TVRGunHapticsComponent_eventPistolKick_Parms Parms;
		Parms.Strength=Strength;
		Parms.Duration=Duration;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunHapticsComponent_PistolKick),&Parms);
	}
	void UTVRGunHapticsComponent::StaticRegisterNativesUTVRGunHapticsComponent()
	{
		UClass* Class = UTVRGunHapticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtstockKick", &UTVRGunHapticsComponent::execButtstockKick },
			{ "ClientButtstockKick", &UTVRGunHapticsComponent::execClientButtstockKick },
			{ "ClientPistolKick", &UTVRGunHapticsComponent::execClientPistolKick },
			{ "GetOwnerPlayerController", &UTVRGunHapticsComponent::execGetOwnerPlayerController },
			{ "LocalBeginPlay", &UTVRGunHapticsComponent::execLocalBeginPlay },
			{ "PistolKick", &UTVRGunHapticsComponent::execPistolKick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventButtstockKick_Parms, Strength), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventButtstockKick_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Hapctics" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "ButtstockKick", nullptr, nullptr, sizeof(TVRGunHapticsComponent_eventButtstockKick_Parms), Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventClientButtstockKick_Parms, Strength), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventClientButtstockKick_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Haptics" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "ClientButtstockKick", nullptr, nullptr, sizeof(TVRGunHapticsComponent_eventClientButtstockKick_Parms), Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventClientPistolKick_Parms, Strength), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventClientPistolKick_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventClientPistolKick_Parms, Type), Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Haptics" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "ClientPistolKick", nullptr, nullptr, sizeof(TVRGunHapticsComponent_eventClientPistolKick_Parms), Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics
	{
		struct TVRGunHapticsComponent_eventGetOwnerPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventGetOwnerPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Haptics" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "GetOwnerPlayerController", nullptr, nullptr, sizeof(TVRGunHapticsComponent_eventGetOwnerPlayerController_Parms), Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Haptics" },
		{ "Comment", "// A function that is only run locally during Begin Play for the Owning Client of the Player Controller\n" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
		{ "ToolTip", "A function that is only run locally during Begin Play for the Owning Client of the Player Controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "LocalBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventPistolKick_Parms, Strength), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventPistolKick_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunHapticsComponent_eventPistolKick_Parms, Type), Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun Hapctics" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunHapticsComponent, nullptr, "PistolKick", nullptr, nullptr, sizeof(TVRGunHapticsComponent_eventPistolKick_Parms), Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRGunHapticsComponent_NoRegister()
	{
		return UTVRGunHapticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRGunHapticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRGunHapticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRGunHapticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_ButtstockKick, "ButtstockKick" }, // 3479697917
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_ClientButtstockKick, "ClientButtstockKick" }, // 3783904574
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_ClientPistolKick, "ClientPistolKick" }, // 3566455349
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_GetOwnerPlayerController, "GetOwnerPlayerController" }, // 1891705994
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_LocalBeginPlay, "LocalBeginPlay" }, // 2567548409
		{ &Z_Construct_UFunction_UTVRGunHapticsComponent_PistolKick, "PistolKick" }, // 3125989742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunHapticsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TVRGunHapticsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TVRGunHapticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRGunHapticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRGunHapticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRGunHapticsComponent_Statics::ClassParams = {
		&UTVRGunHapticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRGunHapticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunHapticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRGunHapticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRGunHapticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRGunHapticsComponent, 948331156);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRGunHapticsComponent>()
	{
		return UTVRGunHapticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRGunHapticsComponent(Z_Construct_UClass_UTVRGunHapticsComponent, &UTVRGunHapticsComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRGunHapticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRGunHapticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
