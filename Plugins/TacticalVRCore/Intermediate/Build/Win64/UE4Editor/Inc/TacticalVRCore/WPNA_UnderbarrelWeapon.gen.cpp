// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_UnderbarrelWeapon() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_UnderbarrelWeapon_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_UnderbarrelWeapon();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_ForeGrip();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRTriggerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunFireComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "UnderbarrelWeaponActionEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execOnStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execOnStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execGetSecondaryHandSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=P_THIS->GetSecondaryHandSocket_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execGetTriggerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRTriggerComponent**)Z_Param__Result=P_THIS->GetTriggerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execIsGripped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGripped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_UnderbarrelWeapon::execIsMagReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMagReleasePressed();
		P_NATIVE_END;
	}
	static FName NAME_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket = FName(TEXT("GetSecondaryHandSocket"));
	UHandSocketComponent* AWPNA_UnderbarrelWeapon::GetSecondaryHandSocket() const
	{
		WPNA_UnderbarrelWeapon_eventGetSecondaryHandSocket_Parms Parms;
		const_cast<AWPNA_UnderbarrelWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWPNA_UnderbarrelWeapon_OnFire = FName(TEXT("OnFire"));
	void AWPNA_UnderbarrelWeapon::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_UnderbarrelWeapon_OnFire),NULL);
	}
	static FName NAME_AWPNA_UnderbarrelWeapon_OnStartFire = FName(TEXT("OnStartFire"));
	void AWPNA_UnderbarrelWeapon::OnStartFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_UnderbarrelWeapon_OnStartFire),NULL);
	}
	static FName NAME_AWPNA_UnderbarrelWeapon_OnStopFire = FName(TEXT("OnStopFire"));
	void AWPNA_UnderbarrelWeapon::OnStopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_UnderbarrelWeapon_OnStopFire),NULL);
	}
	void AWPNA_UnderbarrelWeapon::StaticRegisterNativesAWPNA_UnderbarrelWeapon()
	{
		UClass* Class = AWPNA_UnderbarrelWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSecondaryHandSocket", &AWPNA_UnderbarrelWeapon::execGetSecondaryHandSocket },
			{ "GetTriggerComponent", &AWPNA_UnderbarrelWeapon::execGetTriggerComponent },
			{ "IsGripped", &AWPNA_UnderbarrelWeapon::execIsGripped },
			{ "IsMagReleasePressed", &AWPNA_UnderbarrelWeapon::execIsMagReleasePressed },
			{ "OnFire", &AWPNA_UnderbarrelWeapon::execOnFire },
			{ "OnStartFire", &AWPNA_UnderbarrelWeapon::execOnStartFire },
			{ "OnStopFire", &AWPNA_UnderbarrelWeapon::execOnStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_UnderbarrelWeapon_eventGetSecondaryHandSocket_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForeGrip" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "GetSecondaryHandSocket", nullptr, nullptr, sizeof(WPNA_UnderbarrelWeapon_eventGetSecondaryHandSocket_Parms), Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics
	{
		struct WPNA_UnderbarrelWeapon_eventGetTriggerComponent_Parms
		{
			UTVRTriggerComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_UnderbarrelWeapon_eventGetTriggerComponent_Parms, ReturnValue), Z_Construct_UClass_UTVRTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "GetTriggerComponent", nullptr, nullptr, sizeof(WPNA_UnderbarrelWeapon_eventGetTriggerComponent_Parms), Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics
	{
		struct WPNA_UnderbarrelWeapon_eventIsGripped_Parms
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
	void Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WPNA_UnderbarrelWeapon_eventIsGripped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_UnderbarrelWeapon_eventIsGripped_Parms), &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "IsGripped", nullptr, nullptr, sizeof(WPNA_UnderbarrelWeapon_eventIsGripped_Parms), Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics
	{
		struct WPNA_UnderbarrelWeapon_eventIsMagReleasePressed_Parms
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
	void Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WPNA_UnderbarrelWeapon_eventIsMagReleasePressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_UnderbarrelWeapon_eventIsMagReleasePressed_Parms), &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/** Returns true if the mag release is pressed */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ToolTip", "Returns true if the mag release is pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "IsMagReleasePressed", nullptr, nullptr, sizeof(WPNA_UnderbarrelWeapon_eventIsMagReleasePressed_Parms), Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "OnStartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_UnderbarrelWeapon, nullptr, "OnStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_UnderbarrelWeapon_NoRegister()
	{
		return AWPNA_UnderbarrelWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMagReleasePressedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagReleasePressedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMagReleaseReleasedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagReleaseReleasedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBoltReleasePressedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoltReleasePressedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBoltReleaseReleasedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoltReleaseReleasedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularRecoilImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularRecoilImpulse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWPNA_ForeGrip,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetSecondaryHandSocket, "GetSecondaryHandSocket" }, // 2567793932
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_GetTriggerComponent, "GetTriggerComponent" }, // 4123841051
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsGripped, "IsGripped" }, // 2966502027
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_IsMagReleasePressed, "IsMagReleasePressed" }, // 2297747357
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnFire, "OnFire" }, // 1012007370
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStartFire, "OnStartFire" }, // 248127620
		{ &Z_Construct_UFunction_AWPNA_UnderbarrelWeapon_OnStopFire, "OnStopFire" }, // 273636613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* \n*/" },
		{ "IncludePath", "Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_Movables_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_Movables = { "Movables", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, Movables), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_Movables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_Movables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_TriggerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_TriggerComponent = { "TriggerComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, TriggerComponent), Z_Construct_UClass_UTVRTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_TriggerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_TriggerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_FiringComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_FiringComponent = { "FiringComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, FiringComponent), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_FiringComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_FiringComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleasePressedEvent_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/** Event that is fired when the mag release is pressed. The action will count as unhandled when this event is not bound to anything */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ToolTip", "Event that is fired when the mag release is pressed. The action will count as unhandled when this event is not bound to anything" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleasePressedEvent = { "OnMagReleasePressedEvent", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnMagReleasePressedEvent), Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleasePressedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleasePressedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleaseReleasedEvent_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/** Event that is fired when the mag release is released. The action will count as unhandled when this event is not bound to anything */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ToolTip", "Event that is fired when the mag release is released. The action will count as unhandled when this event is not bound to anything" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleaseReleasedEvent = { "OnMagReleaseReleasedEvent", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnMagReleaseReleasedEvent), Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleaseReleasedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleaseReleasedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleasePressedEvent_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/** Event that is fired when the bolt release is pressed. The action will count as unhandled when this event is not bound to anything */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ToolTip", "Event that is fired when the bolt release is pressed. The action will count as unhandled when this event is not bound to anything" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleasePressedEvent = { "OnBoltReleasePressedEvent", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnBoltReleasePressedEvent), Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleasePressedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleasePressedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleaseReleasedEvent_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/** Event that is fired when the bolt release is released. The action will count as unhandled when this event is not bound to anything */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
		{ "ToolTip", "Event that is fired when the bolt release is released. The action will count as unhandled when this event is not bound to anything" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleaseReleasedEvent = { "OnBoltReleaseReleasedEvent", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, OnBoltReleaseReleasedEvent), Z_Construct_UDelegateFunction_TacticalVRCore_UnderbarrelWeaponActionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleaseReleasedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleaseReleasedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_RecoilImpulse_MetaData[] = {
		{ "Category", "Weapon Attachment|Recoil" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_RecoilImpulse = { "RecoilImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, RecoilImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_RecoilImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_RecoilImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_AngularRecoilImpulse_MetaData[] = {
		{ "Category", "Weapon Attachment|Recoil" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_UnderbarrelWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_AngularRecoilImpulse = { "AngularRecoilImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_UnderbarrelWeapon, AngularRecoilImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_AngularRecoilImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_AngularRecoilImpulse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_Movables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_TriggerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_FiringComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleasePressedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnMagReleaseReleasedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleasePressedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_OnBoltReleaseReleasedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_RecoilImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::NewProp_AngularRecoilImpulse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_UnderbarrelWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::ClassParams = {
		&AWPNA_UnderbarrelWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_UnderbarrelWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_UnderbarrelWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_UnderbarrelWeapon, 3066848095);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_UnderbarrelWeapon>()
	{
		return AWPNA_UnderbarrelWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_UnderbarrelWeapon(Z_Construct_UClass_AWPNA_UnderbarrelWeapon, &AWPNA_UnderbarrelWeapon::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_UnderbarrelWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_UnderbarrelWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
