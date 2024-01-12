// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRMagazine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRMagazine() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRMagazine_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRMagazine();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagWellComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATVRMagazine::execGetInsertProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInsertProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetAttachedMagWell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRMagWellComponent**)Z_Param__Result=P_THIS->GetAttachedMagWell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetCartridgeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ATVRCartridge> *)Z_Param__Result=P_THIS->GetCartridgeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execUpdateRoundInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRoundInstances_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execUpdateFollowerLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFollowerLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetRoundTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRoundTransform_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetSpringComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSpringComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetFollowerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetFollowerComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetRoundsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstancedStaticMeshComponent**)Z_Param__Result=P_THIS->GetRoundsComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execSetAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmo(Z_Param_NewAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execIsInserted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInserted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execSetMagazineOriginToTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMagazineOriginToTransform(Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execSetCollisionProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionProfile(Z_Param_NewProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execInitMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetGripSlotTransform)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGripSlotTransform_Implementation(Z_Param_Hand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRMagazine::execGetFollowerLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVector);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFollowerLocationAndRotation_Implementation(Z_Param_Out_OutVector,Z_Param_Out_OutRotator);
		P_NATIVE_END;
	}
	static FName NAME_ATVRMagazine_BP_OnAmmoChanged = FName(TEXT("BP_OnAmmoChanged"));
	void ATVRMagazine::BP_OnAmmoChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_BP_OnAmmoChanged),NULL);
	}
	static FName NAME_ATVRMagazine_BP_OnMagFullyEjected = FName(TEXT("BP_OnMagFullyEjected"));
	void ATVRMagazine::BP_OnMagFullyEjected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_BP_OnMagFullyEjected),NULL);
	}
	static FName NAME_ATVRMagazine_GetFollowerComponent = FName(TEXT("GetFollowerComponent"));
	UStaticMeshComponent* ATVRMagazine::GetFollowerComponent() const
	{
		TVRMagazine_eventGetFollowerComponent_Parms Parms;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetFollowerComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRMagazine_GetFollowerLocationAndRotation = FName(TEXT("GetFollowerLocationAndRotation"));
	void ATVRMagazine::GetFollowerLocationAndRotation(FVector& OutVector, FRotator& OutRotator) const
	{
		TVRMagazine_eventGetFollowerLocationAndRotation_Parms Parms;
		Parms.OutVector=OutVector;
		Parms.OutRotator=OutRotator;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetFollowerLocationAndRotation),&Parms);
		OutVector=Parms.OutVector;
		OutRotator=Parms.OutRotator;
	}
	static FName NAME_ATVRMagazine_GetGripSlotTransform = FName(TEXT("GetGripSlotTransform"));
	FTransform ATVRMagazine::GetGripSlotTransform(UGripMotionControllerComponent* Hand) const
	{
		TVRMagazine_eventGetGripSlotTransform_Parms Parms;
		Parms.Hand=Hand;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetGripSlotTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRMagazine_GetRoundsComponent = FName(TEXT("GetRoundsComponent"));
	UInstancedStaticMeshComponent* ATVRMagazine::GetRoundsComponent() const
	{
		TVRMagazine_eventGetRoundsComponent_Parms Parms;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetRoundsComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRMagazine_GetRoundTransform = FName(TEXT("GetRoundTransform"));
	FTransform ATVRMagazine::GetRoundTransform(int32 Index) const
	{
		TVRMagazine_eventGetRoundTransform_Parms Parms;
		Parms.Index=Index;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetRoundTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRMagazine_GetSpringComponent = FName(TEXT("GetSpringComponent"));
	USkeletalMeshComponent* ATVRMagazine::GetSpringComponent() const
	{
		TVRMagazine_eventGetSpringComponent_Parms Parms;
		const_cast<ATVRMagazine*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_GetSpringComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRMagazine_UpdateFollowerLocation = FName(TEXT("UpdateFollowerLocation"));
	void ATVRMagazine::UpdateFollowerLocation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_UpdateFollowerLocation),NULL);
	}
	static FName NAME_ATVRMagazine_UpdateRoundInstances = FName(TEXT("UpdateRoundInstances"));
	void ATVRMagazine::UpdateRoundInstances()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRMagazine_UpdateRoundInstances),NULL);
	}
	void ATVRMagazine::StaticRegisterNativesATVRMagazine()
	{
		UClass* Class = ATVRMagazine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedMagWell", &ATVRMagazine::execGetAttachedMagWell },
			{ "GetCartridgeType", &ATVRMagazine::execGetCartridgeType },
			{ "GetFollowerComponent", &ATVRMagazine::execGetFollowerComponent },
			{ "GetFollowerLocationAndRotation", &ATVRMagazine::execGetFollowerLocationAndRotation },
			{ "GetGripSlotTransform", &ATVRMagazine::execGetGripSlotTransform },
			{ "GetInsertProgress", &ATVRMagazine::execGetInsertProgress },
			{ "GetRoundsComponent", &ATVRMagazine::execGetRoundsComponent },
			{ "GetRoundTransform", &ATVRMagazine::execGetRoundTransform },
			{ "GetSpringComponent", &ATVRMagazine::execGetSpringComponent },
			{ "InitMagazine", &ATVRMagazine::execInitMagazine },
			{ "IsEmpty", &ATVRMagazine::execIsEmpty },
			{ "IsInserted", &ATVRMagazine::execIsInserted },
			{ "SetAmmo", &ATVRMagazine::execSetAmmo },
			{ "SetCollisionProfile", &ATVRMagazine::execSetCollisionProfile },
			{ "SetMagazineOriginToTransform", &ATVRMagazine::execSetMagazineOriginToTransform },
			{ "UpdateFollowerLocation", &ATVRMagazine::execUpdateFollowerLocation },
			{ "UpdateRoundInstances", &ATVRMagazine::execUpdateRoundInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * Blueprint Event that is fired whenever the amount of ammo in the magazine has changed.\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Blueprint Event that is fired whenever the amount of ammo in the magazine has changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "BP_OnAmmoChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Event Called on the magazine is fully ejected and is a physics body */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Event Called on the magazine is fully ejected and is a physics body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "BP_OnMagFullyEjected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics
	{
		struct TVRMagazine_eventGetAttachedMagWell_Parms
		{
			UTVRMagWellComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetAttachedMagWell_Parms, ReturnValue), Z_Construct_UClass_UTVRMagWellComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * @returns the mag well the magazine is inserted into or null if the magazine is free\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns the mag well the magazine is inserted into or null if the magazine is free" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetAttachedMagWell", nullptr, nullptr, sizeof(TVRMagazine_eventGetAttachedMagWell_Parms), Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics
	{
		struct TVRMagazine_eventGetCartridgeType_Parms
		{
			TSubclassOf<ATVRCartridge>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetCartridgeType_Parms, ReturnValue), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * @returns the cartridge type of the magazine\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns the cartridge type of the magazine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetCartridgeType", nullptr, nullptr, sizeof(TVRMagazine_eventGetCartridgeType_Parms), Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetCartridgeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetCartridgeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetFollowerComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** \n\x09* @returns the follower mesh component. Is null in case there is no follower.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns the follower mesh component. Is null in case there is no follower." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetFollowerComponent", nullptr, nullptr, sizeof(TVRMagazine_eventGetFollowerComponent_Parms), Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::NewProp_OutVector = { "OutVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetFollowerLocationAndRotation_Parms, OutVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::NewProp_OutRotator = { "OutRotator", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetFollowerLocationAndRotation_Parms, OutRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::NewProp_OutVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::NewProp_OutRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetFollowerLocationAndRotation", nullptr, nullptr, sizeof(TVRMagazine_eventGetFollowerLocationAndRotation_Parms), Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetGripSlotTransform_Parms, Hand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetGripSlotTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * Returns the transform of the Grip slot in world space. This still needs to be transformed to a relative grip\n     * transform and compensated by the controller profile.\n     * @param HandType Controller Hand Type so that we can give a different transform for left and right hand.\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Returns the transform of the Grip slot in world space. This still needs to be transformed to a relative grip\ntransform and compensated by the controller profile.\n@param HandType Controller Hand Type so that we can give a different transform for left and right hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetGripSlotTransform", nullptr, nullptr, sizeof(TVRMagazine_eventGetGripSlotTransform_Parms), Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics
	{
		struct TVRMagazine_eventGetInsertProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetInsertProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * Returns a number between 0 adn 1 where 0 means the magazine is free and 1 means the magazine is fully inserted.\n\x09 * @returns magazine insertion progress\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Returns a number between 0 adn 1 where 0 means the magazine is free and 1 means the magazine is fully inserted.\n@returns magazine insertion progress" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetInsertProgress", nullptr, nullptr, sizeof(TVRMagazine_eventGetInsertProgress_Parms), Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetInsertProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetInsertProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetRoundsComponent_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** \n\x09 * @returns the component that holds the rounds. Can also return null in case this component is non existent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns the component that holds the rounds. Can also return null in case this component is non existent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetRoundsComponent", nullptr, nullptr, sizeof(TVRMagazine_eventGetRoundsComponent_Parms), Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetRoundTransform_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetRoundTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * Calculates the transform of a round at the specified index\n\x09 * @param Index Index of the round, which transform we want to obtain\n\x09 * @return The calculated transform of the round.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Calculates the transform of a round at the specified index\n@param Index Index of the round, which transform we want to obtain\n@return The calculated transform of the round." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetRoundTransform", nullptr, nullptr, sizeof(TVRMagazine_eventGetRoundTransform_Parms), Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetRoundTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetRoundTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventGetSpringComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** \n\x09* @returns the spring component. Can also return null in case there is no visible spring.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns the spring component. Can also return null in case there is no visible spring." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "GetSpringComponent", nullptr, nullptr, sizeof(TVRMagazine_eventGetSpringComponent_Parms), Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_GetSpringComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_GetSpringComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Initializes the Magazine */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Initializes the Magazine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "InitMagazine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_InitMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_InitMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics
	{
		struct TVRMagazine_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRMagazine_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRMagazine_eventIsEmpty_Parms), &Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * @returns True if the magazine is out of ammo\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns True if the magazine is out of ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "IsEmpty", nullptr, nullptr, sizeof(TVRMagazine_eventIsEmpty_Parms), Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics
	{
		struct TVRMagazine_eventIsInserted_Parms
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
	void Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRMagazine_eventIsInserted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRMagazine_eventIsInserted_Parms), &Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * @returns True if the magazine is inserted into an weapon\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "@returns True if the magazine is inserted into an weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "IsInserted", nullptr, nullptr, sizeof(TVRMagazine_eventIsInserted_Parms), Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_IsInserted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_IsInserted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics
	{
		struct TVRMagazine_eventSetAmmo_Parms
		{
			int32 NewAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventSetAmmo_Parms, NewAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::NewProp_NewAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * Sets the current ammo to \n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Sets the current ammo to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "SetAmmo", nullptr, nullptr, sizeof(TVRMagazine_eventSetAmmo_Parms), Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_SetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_SetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics
	{
		struct TVRMagazine_eventSetCollisionProfile_Parms
		{
			FName NewProfile;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::NewProp_NewProfile = { "NewProfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventSetCollisionProfile_Parms, NewProfile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::NewProp_NewProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Changes the collision profile for all magazine meshes, except helpers */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Changes the collision profile for all magazine meshes, except helpers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "SetCollisionProfile", nullptr, nullptr, sizeof(TVRMagazine_eventSetCollisionProfile_Parms), Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics
	{
		struct TVRMagazine_eventSetMagazineOriginToTransform_Parms
		{
			FTransform NewTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazine_eventSetMagazineOriginToTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n     * Moves the Magazine so that the Transform of the Attach Origin Component aligns with the argument.\n     * This way we are independent from the Meshes Transform\n     * @param NewTransform Transform in World Space to align the Attach Origin to.\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Moves the Magazine so that the Transform of the Attach Origin Component aligns with the argument.\nThis way we are independent from the Meshes Transform\n@param NewTransform Transform in World Space to align the Attach Origin to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "SetMagazineOriginToTransform", nullptr, nullptr, sizeof(TVRMagazine_eventSetMagazineOriginToTransform_Parms), Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * Updates the transform of the follower\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Updates the transform of the follower" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "UpdateFollowerLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/**\n\x09 * Updates the number of round instances and their transforms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Updates the number of round instances and their transforms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRMagazine, nullptr, "UpdateRoundInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRMagazine_NoRegister()
	{
		return ATVRMagazine::StaticClass();
	}
	struct Z_Construct_UClass_ATVRMagazine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundsInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagInsertPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagInsertPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveStartIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurveStartIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StackSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchLROrder_MetaData[];
#endif
		static void NewProp_bSwitchLROrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchLROrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleStack_MetaData[];
#endif
		static void NewProp_bDoubleStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerMorphSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowerMorphSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerMorphBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowerMorphBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FollowerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FollowerRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperStartIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TaperStartIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CartridgeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotFull_MetaData[];
#endif
		static void NewProp_bNotFull_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotFull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitDisplayAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LimitDisplayAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedMagWell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedMagWell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMagReleasePressed_MetaData[];
#endif
		static void NewProp_bIsMagReleasePressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMagReleasePressed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MagazineMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRMagazine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrippableStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRMagazine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRMagazine_BP_OnAmmoChanged, "BP_OnAmmoChanged" }, // 569932863
		{ &Z_Construct_UFunction_ATVRMagazine_BP_OnMagFullyEjected, "BP_OnMagFullyEjected" }, // 2035635149
		{ &Z_Construct_UFunction_ATVRMagazine_GetAttachedMagWell, "GetAttachedMagWell" }, // 845773577
		{ &Z_Construct_UFunction_ATVRMagazine_GetCartridgeType, "GetCartridgeType" }, // 227655677
		{ &Z_Construct_UFunction_ATVRMagazine_GetFollowerComponent, "GetFollowerComponent" }, // 1997736253
		{ &Z_Construct_UFunction_ATVRMagazine_GetFollowerLocationAndRotation, "GetFollowerLocationAndRotation" }, // 1485441208
		{ &Z_Construct_UFunction_ATVRMagazine_GetGripSlotTransform, "GetGripSlotTransform" }, // 3527883621
		{ &Z_Construct_UFunction_ATVRMagazine_GetInsertProgress, "GetInsertProgress" }, // 2594733141
		{ &Z_Construct_UFunction_ATVRMagazine_GetRoundsComponent, "GetRoundsComponent" }, // 639521491
		{ &Z_Construct_UFunction_ATVRMagazine_GetRoundTransform, "GetRoundTransform" }, // 1817252408
		{ &Z_Construct_UFunction_ATVRMagazine_GetSpringComponent, "GetSpringComponent" }, // 743326833
		{ &Z_Construct_UFunction_ATVRMagazine_InitMagazine, "InitMagazine" }, // 437568188
		{ &Z_Construct_UFunction_ATVRMagazine_IsEmpty, "IsEmpty" }, // 3284852396
		{ &Z_Construct_UFunction_ATVRMagazine_IsInserted, "IsInserted" }, // 680260566
		{ &Z_Construct_UFunction_ATVRMagazine_SetAmmo, "SetAmmo" }, // 1401954893
		{ &Z_Construct_UFunction_ATVRMagazine_SetCollisionProfile, "SetCollisionProfile" }, // 3490508172
		{ &Z_Construct_UFunction_ATVRMagazine_SetMagazineOriginToTransform, "SetMagazineOriginToTransform" }, // 963508415
		{ &Z_Construct_UFunction_ATVRMagazine_UpdateFollowerLocation, "UpdateFollowerLocation" }, // 3980767547
		{ &Z_Construct_UFunction_ATVRMagazine_UpdateRoundInstances, "UpdateRoundInstances" }, // 3586539660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gripable Magazine Actor base class. Only children shall be spawned.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapon/TVRMagazine.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Gripable Magazine Actor base class. Only children shall be spawned." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMesh = { "FollowerMesh", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, FollowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundsInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundsInstances = { "RoundsInstances", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, RoundsInstances), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundsInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundsInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineCollider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Magazine" },
		{ "Comment", "/** Collider that detects if the magazine is touching the magwell properly */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Collider that detects if the magazine is touching the magwell properly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineCollider = { "MagazineCollider", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, MagazineCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagInsertPercentage_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Percentage of how far the magazine is inserted */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Percentage of how far the magazine is inserted" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagInsertPercentage = { "MagInsertPercentage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, MagInsertPercentage), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagInsertPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagInsertPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundRadius_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Radius of one round */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Radius of one round" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundRadius = { "RoundRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, RoundRadius), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveRadius_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Radius of the curve */" },
		{ "EditCond", "CurveStartIdx >= 0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Radius of the curve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveRadius = { "CurveRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, CurveRadius), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveStartIdx_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Starting Index of the curve */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Starting Index of the curve" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveStartIdx = { "CurveStartIdx", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, CurveStartIdx), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveStartIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveStartIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_StackSlope_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Slope of the stack in uu/round*/" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Slope of the stack in uu/round" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_StackSlope = { "StackSlope", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, StackSlope), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_StackSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_StackSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundScale_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** scale of each round mesh instance */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "scale of each round mesh instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundScale = { "RoundScale", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, RoundScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Switch the left/right order for double stack magazines */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Switch the left/right order for double stack magazines" },
	};
#endif
	void Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder_SetBit(void* Obj)
	{
		((ATVRMagazine*)Obj)->bSwitchLROrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder = { "bSwitchLROrder", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRMagazine), &Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Is this a double stack or single stack magazine */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Is this a double stack or single stack magazine" },
	};
#endif
	void Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack_SetBit(void* Obj)
	{
		((ATVRMagazine*)Obj)->bDoubleStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack = { "bDoubleStack", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRMagazine), &Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphSlope_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Slope of the follower springs morph target value 1/round */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Slope of the follower springs morph target value 1/round" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphSlope = { "FollowerMorphSlope", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, FollowerMorphSlope), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphBias_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Bias of the follower springs morph target value */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Bias of the follower springs morph target value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphBias = { "FollowerMorphBias", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, FollowerMorphBias), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerOffset_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Offset of the follower position of the calulated round transform */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Offset of the follower position of the calulated round transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerOffset = { "FollowerOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, FollowerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerRelativeTransform_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Transform relative to the last round */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Transform relative to the last round" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerRelativeTransform = { "FollowerRelativeTransform", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, FollowerRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_TaperStartIdx_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** NYI start index for the magazine taper, for tapered pistol mags */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "NYI start index for the magazine taper, for tapered pistol mags" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_TaperStartIdx = { "TaperStartIdx", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, TaperStartIdx), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_TaperStartIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_TaperStartIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CartridgeType_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CartridgeType = { "CartridgeType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, CartridgeType), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CartridgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CartridgeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_HandSocket_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_HandSocket = { "HandSocket", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, HandSocket), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_HandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_HandSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Is Magazine not Full on Init */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Is Magazine not Full on Init" },
	};
#endif
	void Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull_SetBit(void* Obj)
	{
		((ATVRMagazine*)Obj)->bNotFull = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull = { "bNotFull", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRMagazine), &Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AmmoCapacity_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Capacity of Magazine */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Capacity of Magazine" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AmmoCapacity = { "AmmoCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, AmmoCapacity), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AmmoCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AmmoCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n     * Current remaining rounds in magazine. Do not access directly, unless you are sure.\n     * It is recommended to use the SetAmmo function as it will also fire events for BP, so that\n     * the visuals can be changed (remaining bullets, the follower, etc.) \n     */" },
		{ "EditCondition", "bNotFull" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Current remaining rounds in magazine. Do not access directly, unless you are sure.\nIt is recommended to use the SetAmmo function as it will also fire events for BP, so that\nthe visuals can be changed (remaining bullets, the follower, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_LimitDisplayAmmo_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ClampMax", "200" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Limit of the displayed Ammo. A Value of 0 or below will mean no limit. */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Limit of the displayed Ammo. A Value of 0 or below will mean no limit." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_LimitDisplayAmmo = { "LimitDisplayAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, LimitDisplayAmmo), METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_LimitDisplayAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_LimitDisplayAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachedMagWell_MetaData[] = {
		{ "Category", "Magazine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachedMagWell = { "AttachedMagWell", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, AttachedMagWell), Z_Construct_UClass_UTVRMagWellComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachedMagWell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachedMagWell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_GripSlot_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Scene Component that marks the Slot the hand is gripping */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Scene Component that marks the Slot the hand is gripping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_GripSlot = { "GripSlot", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, GripSlot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_GripSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_GripSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachOrigin_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Scene Component that marks the Point that should be aligned with the weapons magazine attach point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Scene Component that marks the Point that should be aligned with the weapons magazine attach point" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachOrigin = { "AttachOrigin", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, AttachOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Alternatve Mag Release method, by pressing the mag release button while holding the magazine */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Alternatve Mag Release method, by pressing the mag release button while holding the magazine" },
	};
#endif
	void Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed_SetBit(void* Obj)
	{
		((ATVRMagazine*)Obj)->bIsMagReleasePressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed = { "bIsMagReleasePressed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRMagazine), &Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes_Inner = { "MagazineMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes_MetaData[] = {
		{ "Comment", "/** Array of mesh components of this magazine. Used when the collision of the entire magazine needs to be modified */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRMagazine.h" },
		{ "ToolTip", "Array of mesh components of this magazine. Used when the collision of the entire magazine needs to be modified" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes = { "MagazineMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRMagazine, MagazineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRMagazine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundsInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagInsertPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurveStartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_StackSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_RoundScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bSwitchLROrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bDoubleStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerMorphBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_FollowerRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_TaperStartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CartridgeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_HandSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bNotFull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AmmoCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_LimitDisplayAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachedMagWell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_GripSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_AttachOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_bIsMagReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRMagazine_Statics::NewProp_MagazineMeshes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATVRMagazine_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRHandSocketInterface_NoRegister, (int32)VTABLE_OFFSET(ATVRMagazine, ITVRHandSocketInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRMagazine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRMagazine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRMagazine_Statics::ClassParams = {
		&ATVRMagazine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRMagazine_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRMagazine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRMagazine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRMagazine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRMagazine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRMagazine, 2589126245);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRMagazine>()
	{
		return ATVRMagazine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRMagazine(Z_Construct_UClass_ATVRMagazine, &ATVRMagazine::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRMagazine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRMagazine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
