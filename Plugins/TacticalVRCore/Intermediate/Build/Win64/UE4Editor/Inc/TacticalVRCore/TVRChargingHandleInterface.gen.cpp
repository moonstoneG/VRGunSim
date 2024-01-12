// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRChargingHandleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRChargingHandleInterface() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execOnBoltClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltClosed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execGetBoltProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoltProgress_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execSetBoltProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoltProgress_Implementation(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execCanSuccessfullyFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSuccessfullyFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execCanInitiateFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInitiateFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execUnlockChargingHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockChargingHandle_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execLockChargingHandle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LockProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockChargingHandle_Implementation(Z_Param_LockProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execSetProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress_Implementation(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execSetMaxTravel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTravel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxTravel_Implementation(Z_Param_NewTravel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execSetStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStiffness_Implementation(Z_Param_NewStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execSetAudioComponent)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_NewComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioComponent_Implementation(Z_Param_NewComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execGetGrabLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETVRLeftRight*)Z_Param__Result=P_THIS->GetGrabLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execIsReciprocating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReciprocating_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execIsInUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInUse_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execGetStiffness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStiffness_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execGetMaxTavel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxTavel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRChargingHandleInterface::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress_Implementation();
		P_NATIVE_END;
	}
	bool ITVRChargingHandleInterface::CanInitiateFire()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInitiateFire instead.");
		TVRChargingHandleInterface_eventCanInitiateFire_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITVRChargingHandleInterface::CanSuccessfullyFire()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanSuccessfullyFire instead.");
		TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms Parms;
		return Parms.ReturnValue;
	}
	float ITVRChargingHandleInterface::GetBoltProgress() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBoltProgress instead.");
		TVRChargingHandleInterface_eventGetBoltProgress_Parms Parms;
		return Parms.ReturnValue;
	}
	ETVRLeftRight ITVRChargingHandleInterface::GetGrabLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGrabLocation instead.");
		TVRChargingHandleInterface_eventGetGrabLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	float ITVRChargingHandleInterface::GetMaxTavel() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMaxTavel instead.");
		TVRChargingHandleInterface_eventGetMaxTavel_Parms Parms;
		return Parms.ReturnValue;
	}
	float ITVRChargingHandleInterface::GetProgress() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProgress instead.");
		TVRChargingHandleInterface_eventGetProgress_Parms Parms;
		return Parms.ReturnValue;
	}
	float ITVRChargingHandleInterface::GetStiffness() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStiffness instead.");
		TVRChargingHandleInterface_eventGetStiffness_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITVRChargingHandleInterface::IsInUse() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInUse instead.");
		TVRChargingHandleInterface_eventIsInUse_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITVRChargingHandleInterface::IsLocked() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsLocked instead.");
		TVRChargingHandleInterface_eventIsLocked_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITVRChargingHandleInterface::IsReciprocating() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsReciprocating instead.");
		TVRChargingHandleInterface_eventIsReciprocating_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITVRChargingHandleInterface::LockChargingHandle(float LockProgress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockChargingHandle instead.");
	}
	void ITVRChargingHandleInterface::OnBoltClosed() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBoltClosed instead.");
	}
	void ITVRChargingHandleInterface::SetAudioComponent(UAudioComponent* NewComp)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAudioComponent instead.");
	}
	void ITVRChargingHandleInterface::SetBoltProgress(float NewProgress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetBoltProgress instead.");
	}
	void ITVRChargingHandleInterface::SetMaxTravel(float NewTravel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMaxTravel instead.");
	}
	void ITVRChargingHandleInterface::SetProgress(float NewProgress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetProgress instead.");
	}
	void ITVRChargingHandleInterface::SetStiffness(float NewStiffness)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetStiffness instead.");
	}
	void ITVRChargingHandleInterface::UnlockChargingHandle()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnlockChargingHandle instead.");
	}
	void UTVRChargingHandleInterface::StaticRegisterNativesUTVRChargingHandleInterface()
	{
		UClass* Class = UTVRChargingHandleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInitiateFire", &ITVRChargingHandleInterface::execCanInitiateFire },
			{ "CanSuccessfullyFire", &ITVRChargingHandleInterface::execCanSuccessfullyFire },
			{ "GetBoltProgress", &ITVRChargingHandleInterface::execGetBoltProgress },
			{ "GetGrabLocation", &ITVRChargingHandleInterface::execGetGrabLocation },
			{ "GetMaxTavel", &ITVRChargingHandleInterface::execGetMaxTavel },
			{ "GetProgress", &ITVRChargingHandleInterface::execGetProgress },
			{ "GetStiffness", &ITVRChargingHandleInterface::execGetStiffness },
			{ "IsInUse", &ITVRChargingHandleInterface::execIsInUse },
			{ "IsLocked", &ITVRChargingHandleInterface::execIsLocked },
			{ "IsReciprocating", &ITVRChargingHandleInterface::execIsReciprocating },
			{ "LockChargingHandle", &ITVRChargingHandleInterface::execLockChargingHandle },
			{ "OnBoltClosed", &ITVRChargingHandleInterface::execOnBoltClosed },
			{ "SetAudioComponent", &ITVRChargingHandleInterface::execSetAudioComponent },
			{ "SetBoltProgress", &ITVRChargingHandleInterface::execSetBoltProgress },
			{ "SetMaxTravel", &ITVRChargingHandleInterface::execSetMaxTravel },
			{ "SetProgress", &ITVRChargingHandleInterface::execSetProgress },
			{ "SetStiffness", &ITVRChargingHandleInterface::execSetStiffness },
			{ "UnlockChargingHandle", &ITVRChargingHandleInterface::execUnlockChargingHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRChargingHandleInterface_eventCanInitiateFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRChargingHandleInterface_eventCanInitiateFire_Parms), &Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "CanInitiateFire", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventCanInitiateFire_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms), &Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "CanSuccessfullyFire", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventGetBoltProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "GetBoltProgress", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventGetBoltProgress_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventGetGrabLocation_Parms, ReturnValue), Z_Construct_UEnum_TacticalVRCore_ETVRLeftRight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "GetGrabLocation", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventGetGrabLocation_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventGetMaxTavel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "GetMaxTavel", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventGetMaxTavel_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "Comment", "/**\n\x09 * @returns charging handle progress as a number between 0.0 and 1.0, where 1.0 means it is fully deflected\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
		{ "ToolTip", "@returns charging handle progress as a number between 0.0 and 1.0, where 1.0 means it is fully deflected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "GetProgress", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventGetProgress_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventGetStiffness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "GetStiffness", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventGetStiffness_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRChargingHandleInterface_eventIsInUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRChargingHandleInterface_eventIsInUse_Parms), &Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "IsInUse", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventIsInUse_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRChargingHandleInterface_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRChargingHandleInterface_eventIsLocked_Parms), &Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "Comment", "/**\n\x09 * @returns true if the charging handle is locked (cannot cycle back to 0)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
		{ "ToolTip", "@returns true if the charging handle is locked (cannot cycle back to 0)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "IsLocked", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventIsLocked_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRChargingHandleInterface_eventIsReciprocating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRChargingHandleInterface_eventIsReciprocating_Parms), &Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "IsReciprocating", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventIsReciprocating_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::NewProp_LockProgress = { "LockProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventLockChargingHandle_Parms, LockProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::NewProp_LockProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "CPP_Default_LockProgress", "-1.000000" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "LockChargingHandle", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventLockChargingHandle_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "OnBoltClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::NewProp_NewComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::NewProp_NewComp = { "NewComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventSetAudioComponent_Parms, NewComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::NewProp_NewComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::NewProp_NewComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::NewProp_NewComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "SetAudioComponent", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventSetAudioComponent_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventSetBoltProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "SetBoltProgress", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventSetBoltProgress_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTravel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::NewProp_NewTravel = { "NewTravel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventSetMaxTravel_Parms, NewTravel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::NewProp_NewTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "SetMaxTravel", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventSetMaxTravel_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "SetProgress", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventSetProgress_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::NewProp_NewStiffness = { "NewStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandleInterface_eventSetStiffness_Parms, NewStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::NewProp_NewStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "SetStiffness", nullptr, nullptr, sizeof(TVRChargingHandleInterface_eventSetStiffness_Parms), Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle Interface" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandleInterface, nullptr, "UnlockChargingHandle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister()
	{
		return UTVRChargingHandleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTVRChargingHandleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRChargingHandleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRChargingHandleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_CanInitiateFire, "CanInitiateFire" }, // 3869154204
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_CanSuccessfullyFire, "CanSuccessfullyFire" }, // 3096193261
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_GetBoltProgress, "GetBoltProgress" }, // 3987661584
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_GetGrabLocation, "GetGrabLocation" }, // 2037522462
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_GetMaxTavel, "GetMaxTavel" }, // 1341079731
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_GetProgress, "GetProgress" }, // 2934548818
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_GetStiffness, "GetStiffness" }, // 290670394
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_IsInUse, "IsInUse" }, // 4081563379
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_IsLocked, "IsLocked" }, // 2959300203
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_IsReciprocating, "IsReciprocating" }, // 3725499491
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_LockChargingHandle, "LockChargingHandle" }, // 2259018224
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_OnBoltClosed, "OnBoltClosed" }, // 1921592204
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_SetAudioComponent, "SetAudioComponent" }, // 3347232725
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_SetBoltProgress, "SetBoltProgress" }, // 2077021579
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_SetMaxTravel, "SetMaxTravel" }, // 1715507320
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_SetProgress, "SetProgress" }, // 349016280
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_SetStiffness, "SetStiffness" }, // 3392543208
		{ &Z_Construct_UFunction_UTVRChargingHandleInterface_UnlockChargingHandle, "UnlockChargingHandle" }, // 3347258562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandleInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRChargingHandleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITVRChargingHandleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRChargingHandleInterface_Statics::ClassParams = {
		&UTVRChargingHandleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRChargingHandleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRChargingHandleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRChargingHandleInterface, 1120564132);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRChargingHandleInterface>()
	{
		return UTVRChargingHandleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRChargingHandleInterface(Z_Construct_UClass_UTVRChargingHandleInterface, &UTVRChargingHandleInterface::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRChargingHandleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRChargingHandleInterface);
	static FName NAME_UTVRChargingHandleInterface_CanInitiateFire = FName(TEXT("CanInitiateFire"));
	bool ITVRChargingHandleInterface::Execute_CanInitiateFire(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventCanInitiateFire_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_CanInitiateFire);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInitiateFire_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_CanSuccessfullyFire = FName(TEXT("CanSuccessfullyFire"));
	bool ITVRChargingHandleInterface::Execute_CanSuccessfullyFire(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventCanSuccessfullyFire_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_CanSuccessfullyFire);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanSuccessfullyFire_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_GetBoltProgress = FName(TEXT("GetBoltProgress"));
	float ITVRChargingHandleInterface::Execute_GetBoltProgress(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventGetBoltProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_GetBoltProgress);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBoltProgress_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_GetGrabLocation = FName(TEXT("GetGrabLocation"));
	ETVRLeftRight ITVRChargingHandleInterface::Execute_GetGrabLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventGetGrabLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_GetGrabLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGrabLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_GetMaxTavel = FName(TEXT("GetMaxTavel"));
	float ITVRChargingHandleInterface::Execute_GetMaxTavel(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventGetMaxTavel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_GetMaxTavel);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMaxTavel_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_GetProgress = FName(TEXT("GetProgress"));
	float ITVRChargingHandleInterface::Execute_GetProgress(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventGetProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_GetProgress);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProgress_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_GetStiffness = FName(TEXT("GetStiffness"));
	float ITVRChargingHandleInterface::Execute_GetStiffness(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventGetStiffness_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_GetStiffness);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetStiffness_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_IsInUse = FName(TEXT("IsInUse"));
	bool ITVRChargingHandleInterface::Execute_IsInUse(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventIsInUse_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_IsInUse);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsInUse_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_IsLocked = FName(TEXT("IsLocked"));
	bool ITVRChargingHandleInterface::Execute_IsLocked(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventIsLocked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_IsLocked);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsLocked_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_IsReciprocating = FName(TEXT("IsReciprocating"));
	bool ITVRChargingHandleInterface::Execute_IsReciprocating(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventIsReciprocating_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_IsReciprocating);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsReciprocating_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRChargingHandleInterface_LockChargingHandle = FName(TEXT("LockChargingHandle"));
	void ITVRChargingHandleInterface::Execute_LockChargingHandle(UObject* O, float LockProgress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventLockChargingHandle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_LockChargingHandle);
		if (Func)
		{
			Parms.LockProgress=LockProgress;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->LockChargingHandle_Implementation(LockProgress);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_OnBoltClosed = FName(TEXT("OnBoltClosed"));
	void ITVRChargingHandleInterface::Execute_OnBoltClosed(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_OnBoltClosed);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, NULL);
		}
		else if (auto I = (const ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->OnBoltClosed_Implementation();
		}
	}
	static FName NAME_UTVRChargingHandleInterface_SetAudioComponent = FName(TEXT("SetAudioComponent"));
	void ITVRChargingHandleInterface::Execute_SetAudioComponent(UObject* O, UAudioComponent* NewComp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventSetAudioComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_SetAudioComponent);
		if (Func)
		{
			Parms.NewComp=NewComp;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->SetAudioComponent_Implementation(NewComp);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_SetBoltProgress = FName(TEXT("SetBoltProgress"));
	void ITVRChargingHandleInterface::Execute_SetBoltProgress(UObject* O, float NewProgress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventSetBoltProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_SetBoltProgress);
		if (Func)
		{
			Parms.NewProgress=NewProgress;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->SetBoltProgress_Implementation(NewProgress);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_SetMaxTravel = FName(TEXT("SetMaxTravel"));
	void ITVRChargingHandleInterface::Execute_SetMaxTravel(UObject* O, float NewTravel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventSetMaxTravel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_SetMaxTravel);
		if (Func)
		{
			Parms.NewTravel=NewTravel;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->SetMaxTravel_Implementation(NewTravel);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_SetProgress = FName(TEXT("SetProgress"));
	void ITVRChargingHandleInterface::Execute_SetProgress(UObject* O, float NewProgress)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventSetProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_SetProgress);
		if (Func)
		{
			Parms.NewProgress=NewProgress;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->SetProgress_Implementation(NewProgress);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_SetStiffness = FName(TEXT("SetStiffness"));
	void ITVRChargingHandleInterface::Execute_SetStiffness(UObject* O, float NewStiffness)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		TVRChargingHandleInterface_eventSetStiffness_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_SetStiffness);
		if (Func)
		{
			Parms.NewStiffness=NewStiffness;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->SetStiffness_Implementation(NewStiffness);
		}
	}
	static FName NAME_UTVRChargingHandleInterface_UnlockChargingHandle = FName(TEXT("UnlockChargingHandle"));
	void ITVRChargingHandleInterface::Execute_UnlockChargingHandle(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRChargingHandleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTVRChargingHandleInterface_UnlockChargingHandle);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITVRChargingHandleInterface*)(O->GetNativeInterfaceAddress(UTVRChargingHandleInterface::StaticClass())))
		{
			I->UnlockChargingHandle_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
