// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_Laser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_Laser() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Laser_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Laser();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventLaserToggleEvent_Parms
		{
			bool bIsLaserOn;
			UGripMotionControllerComponent* UsingHand;
		};
		static void NewProp_bIsLaserOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLaserOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_bIsLaserOn_SetBit(void* Obj)
	{
		((_Script_TacticalVRCore_eventLaserToggleEvent_Parms*)Obj)->bIsLaserOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_bIsLaserOn = { "bIsLaserOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TacticalVRCore_eventLaserToggleEvent_Parms), &Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_bIsLaserOn_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventLaserToggleEvent_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_bIsLaserOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "LaserToggleEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventLaserToggleEvent_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWPNA_Laser::execIsLaserOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLaserOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWPNA_Laser::execToggleLaser)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLaser(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	static FName NAME_AWPNA_Laser_OnToggleLaser = FName(TEXT("OnToggleLaser"));
	void AWPNA_Laser::OnToggleLaser(bool NewLaserStatus, UGripMotionControllerComponent* UsingHand)
	{
		WPNA_Laser_eventOnToggleLaser_Parms Parms;
		Parms.NewLaserStatus=NewLaserStatus ? true : false;
		Parms.UsingHand=UsingHand;
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_Laser_OnToggleLaser),&Parms);
	}
	static FName NAME_AWPNA_Laser_PostLaserTrace = FName(TEXT("PostLaserTrace"));
	void AWPNA_Laser::PostLaserTrace(FHitResult const& Hit)
	{
		WPNA_Laser_eventPostLaserTrace_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_Laser_PostLaserTrace),&Parms);
	}
	void AWPNA_Laser::StaticRegisterNativesAWPNA_Laser()
	{
		UClass* Class = AWPNA_Laser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLaserOn", &AWPNA_Laser::execIsLaserOn },
			{ "ToggleLaser", &AWPNA_Laser::execToggleLaser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics
	{
		struct WPNA_Laser_eventIsLaserOn_Parms
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
	void Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WPNA_Laser_eventIsLaserOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_Laser_eventIsLaserOn_Parms), &Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Laser, nullptr, "IsLaserOn", nullptr, nullptr, sizeof(WPNA_Laser_eventIsLaserOn_Parms), Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Laser_IsLaserOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Laser_IsLaserOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics
	{
		static void NewProp_NewLaserStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewLaserStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_NewLaserStatus_SetBit(void* Obj)
	{
		((WPNA_Laser_eventOnToggleLaser_Parms*)Obj)->NewLaserStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_NewLaserStatus = { "NewLaserStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPNA_Laser_eventOnToggleLaser_Parms), &Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_NewLaserStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_Laser_eventOnToggleLaser_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_NewLaserStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Laser, nullptr, "OnToggleLaser", nullptr, nullptr, sizeof(WPNA_Laser_eventOnToggleLaser_Parms), Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_Laser_eventPostLaserTrace_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Laser, nullptr, "PostLaserTrace", nullptr, nullptr, sizeof(WPNA_Laser_eventPostLaserTrace_Parms), Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics
	{
		struct WPNA_Laser_eventToggleLaser_Parms
		{
			UGripMotionControllerComponent* UsingHand;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_Laser_eventToggleLaser_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_Laser, nullptr, "ToggleLaser", nullptr, nullptr, sizeof(WPNA_Laser_eventToggleLaser_Parms), Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_Laser_ToggleLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_Laser_ToggleLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_Laser_NoRegister()
	{
		return AWPNA_Laser::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_Laser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserBeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserBeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserImpactMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserImpactMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserToggleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserToggleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnToggleLaser_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnToggleLaser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserOnMaterialParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LaserOnMaterialParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserMaterialSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaserMaterialSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_Laser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATVRWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_Laser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_Laser_IsLaserOn, "IsLaserOn" }, // 1939207317
		{ &Z_Construct_UFunction_AWPNA_Laser_OnToggleLaser, "OnToggleLaser" }, // 933894052
		{ &Z_Construct_UFunction_AWPNA_Laser_PostLaserTrace, "PostLaserTrace" }, // 3015323427
		{ &Z_Construct_UFunction_AWPNA_Laser_ToggleLaser, "ToggleLaser" }, // 1054800070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_Laser.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_HoverInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_HoverInputComponent = { "HoverInputComponent", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, HoverInputComponent), Z_Construct_UClass_UTVRHoverInputVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_HoverInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_HoverInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserBeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserBeam = { "LaserBeam", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserBeam), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserBeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserImpactMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserImpactMesh = { "LaserImpactMesh", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserImpactMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserImpactMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserImpactMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserToggleSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserToggleSound = { "LaserToggleSound", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserToggleSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserToggleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserToggleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_EventOnToggleLaser_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_EventOnToggleLaser = { "EventOnToggleLaser", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, EventOnToggleLaser), Z_Construct_UDelegateFunction_TacticalVRCore_LaserToggleEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_EventOnToggleLaser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_EventOnToggleLaser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, Spread), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_BaseThickness_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_BaseThickness = { "BaseThickness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, BaseThickness), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_BaseThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_BaseThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserOnMaterialParam_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserOnMaterialParam = { "LaserOnMaterialParam", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserOnMaterialParam), METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserOnMaterialParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserOnMaterialParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialSlot_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialSlot = { "LaserMaterialSlot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserMaterialSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialInstance = { "LaserMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_Laser, LaserMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_Laser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_HoverInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserBeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserImpactMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserToggleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_EventOnToggleLaser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_BaseThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserOnMaterialParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_Laser_Statics::NewProp_LaserMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_Laser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_Laser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_Laser_Statics::ClassParams = {
		&AWPNA_Laser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_Laser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_Laser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_Laser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_Laser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_Laser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_Laser, 1765643757);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_Laser>()
	{
		return AWPNA_Laser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_Laser(Z_Construct_UClass_AWPNA_Laser, &AWPNA_Laser::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_Laser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_Laser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
