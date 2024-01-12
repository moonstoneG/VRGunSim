// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/TVRWeaponAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRWeaponAttachment() {}
// Cross Module References
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRRailType();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRWeaponAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* ETVRRailType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETVRRailType, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETVRRailType"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRRailType>()
	{
		return ETVRRailType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETVRRailType(ETVRRailType_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETVRRailType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETVRRailType_Hash() { return 3920959838U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRRailType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETVRRailType"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETVRRailType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETVRRailType::Picatinny", (int64)ETVRRailType::Picatinny },
				{ "ETVRRailType::MLok", (int64)ETVRRailType::MLok },
				{ "ETVRRailType::Keymod", (int64)ETVRRailType::Keymod },
				{ "ETVRRailType::Basis", (int64)ETVRRailType::Basis },
				{ "ETVRRailType::Custom", (int64)ETVRRailType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basis.Name", "ETVRRailType::Basis" },
				{ "BlueprintType", "true" },
				{ "Custom.Name", "ETVRRailType::Custom" },
				{ "Keymod.Name", "ETVRRailType::Keymod" },
				{ "MLok.DisplayName", "M-LOK" },
				{ "MLok.Name", "ETVRRailType::MLok" },
				{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
				{ "Picatinny.Name", "ETVRRailType::Picatinny" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETVRRailType",
				"ETVRRailType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execOnOwnerDropped)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingHand);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_GET_UBOOL(Z_Param_bSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerDropped(Z_Param_GrippingHand,Z_Param_Out_GripInfo,Z_Param_bSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execOnOwnerGripped)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingHand);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerGripped(Z_Param_GrippingHand,Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetMuzzleVelocityModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMuzzleVelocityModifier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetDamageModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamageModifier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetSprayModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSprayModifier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetRecoilModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecoilModifier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetWeaponAttachmentName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWeaponAttachmentName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execSetRailType)
	{
		P_GET_ENUM(ETVRRailType,Z_Param_RailType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CustomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRailType(ETVRRailType(Z_Param_RailType),Z_Param_CustomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetReplacementClass)
	{
		P_GET_ENUM(ETVRRailType,Z_Param_RailType);
		P_GET_PROPERTY(FByteProperty,Z_Param_CustomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ATVRWeaponAttachment> *)Z_Param__Result=P_THIS->GetReplacementClass_Implementation(ETVRRailType(Z_Param_RailType),Z_Param_CustomType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execSetColorVariant)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorVariant(Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execSetVariant)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariant(Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execGetGunOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATVRGunBase**)Z_Param__Result=P_THIS->GetGunOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRWeaponAttachment::execAttachToWeapon)
	{
		P_GET_OBJECT(UTVRAttachmentPoint,Z_Param_AttachPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToWeapon(Z_Param_AttachPoint);
		P_NATIVE_END;
	}
	static FName NAME_ATVRWeaponAttachment_GetDamageModifier = FName(TEXT("GetDamageModifier"));
	float ATVRWeaponAttachment::GetDamageModifier() const
	{
		TVRWeaponAttachment_eventGetDamageModifier_Parms Parms;
		const_cast<ATVRWeaponAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_GetDamageModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRWeaponAttachment_GetMuzzleVelocityModifier = FName(TEXT("GetMuzzleVelocityModifier"));
	float ATVRWeaponAttachment::GetMuzzleVelocityModifier() const
	{
		TVRWeaponAttachment_eventGetMuzzleVelocityModifier_Parms Parms;
		const_cast<ATVRWeaponAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_GetMuzzleVelocityModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRWeaponAttachment_GetRecoilModifier = FName(TEXT("GetRecoilModifier"));
	float ATVRWeaponAttachment::GetRecoilModifier() const
	{
		TVRWeaponAttachment_eventGetRecoilModifier_Parms Parms;
		const_cast<ATVRWeaponAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_GetRecoilModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRWeaponAttachment_GetReplacementClass = FName(TEXT("GetReplacementClass"));
	TSubclassOf<ATVRWeaponAttachment>  ATVRWeaponAttachment::GetReplacementClass(ETVRRailType RailType, uint8 CustomType) const
	{
		TVRWeaponAttachment_eventGetReplacementClass_Parms Parms;
		Parms.RailType=RailType;
		Parms.CustomType=CustomType;
		const_cast<ATVRWeaponAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_GetReplacementClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRWeaponAttachment_GetSprayModifier = FName(TEXT("GetSprayModifier"));
	float ATVRWeaponAttachment::GetSprayModifier() const
	{
		TVRWeaponAttachment_eventGetSprayModifier_Parms Parms;
		const_cast<ATVRWeaponAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_GetSprayModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRWeaponAttachment_OnRailTypeChanged = FName(TEXT("OnRailTypeChanged"));
	void ATVRWeaponAttachment::OnRailTypeChanged(ETVRRailType RailType, uint8 CustomType)
	{
		TVRWeaponAttachment_eventOnRailTypeChanged_Parms Parms;
		Parms.RailType=RailType;
		Parms.CustomType=CustomType;
		ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_OnRailTypeChanged),&Parms);
	}
	static FName NAME_ATVRWeaponAttachment_OnVariantChanged = FName(TEXT("OnVariantChanged"));
	void ATVRWeaponAttachment::OnVariantChanged(uint8 Variant, uint8 ColorVariant)
	{
		TVRWeaponAttachment_eventOnVariantChanged_Parms Parms;
		Parms.Variant=Variant;
		Parms.ColorVariant=ColorVariant;
		ProcessEvent(FindFunctionChecked(NAME_ATVRWeaponAttachment_OnVariantChanged),&Parms);
	}
	void ATVRWeaponAttachment::StaticRegisterNativesATVRWeaponAttachment()
	{
		UClass* Class = ATVRWeaponAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToWeapon", &ATVRWeaponAttachment::execAttachToWeapon },
			{ "GetDamageModifier", &ATVRWeaponAttachment::execGetDamageModifier },
			{ "GetGunOwner", &ATVRWeaponAttachment::execGetGunOwner },
			{ "GetMuzzleVelocityModifier", &ATVRWeaponAttachment::execGetMuzzleVelocityModifier },
			{ "GetRecoilModifier", &ATVRWeaponAttachment::execGetRecoilModifier },
			{ "GetReplacementClass", &ATVRWeaponAttachment::execGetReplacementClass },
			{ "GetSprayModifier", &ATVRWeaponAttachment::execGetSprayModifier },
			{ "GetWeaponAttachmentName", &ATVRWeaponAttachment::execGetWeaponAttachmentName },
			{ "OnOwnerDropped", &ATVRWeaponAttachment::execOnOwnerDropped },
			{ "OnOwnerGripped", &ATVRWeaponAttachment::execOnOwnerGripped },
			{ "SetColorVariant", &ATVRWeaponAttachment::execSetColorVariant },
			{ "SetRailType", &ATVRWeaponAttachment::execSetRailType },
			{ "SetVariant", &ATVRWeaponAttachment::execSetVariant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics
	{
		struct TVRWeaponAttachment_eventAttachToWeapon_Parms
		{
			UTVRAttachmentPoint* AttachPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::NewProp_AttachPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventAttachToWeapon_Parms, AttachPoint), Z_Construct_UClass_UTVRAttachmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::NewProp_AttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::NewProp_AttachPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::NewProp_AttachPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "AttachToWeapon", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventAttachToWeapon_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetDamageModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetDamageModifier", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetDamageModifier_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics
	{
		struct TVRWeaponAttachment_eventGetGunOwner_Parms
		{
			ATVRGunBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetGunOwner_Parms, ReturnValue), Z_Construct_UClass_ATVRGunBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetGunOwner", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetGunOwner_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetMuzzleVelocityModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetMuzzleVelocityModifier", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetMuzzleVelocityModifier_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetRecoilModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetRecoilModifier", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetRecoilModifier_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RailType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RailType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomType;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_RailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_RailType = { "RailType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetReplacementClass_Parms, RailType), Z_Construct_UEnum_TacticalVRCore_ETVRRailType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetReplacementClass_Parms, CustomType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetReplacementClass_Parms, ReturnValue), Z_Construct_UClass_ATVRWeaponAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_RailType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_RailType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_CustomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "Comment", "/**\n\x09 * Allows to pick another class to replace this attachment altogether for different rail types.\n\x09 * This can be useful in case for example the picatinny and mlok variant have differences are too\n\x09 * complex to handle in the OnRailTypeChanged function. It will be a class replacement, so stats would also\n\x09 * be changed. Good practice in order to retain the stats of the original is to make the replacement a child\n\x09 * @param RailType Type of rail usually of the attachment point\n\x09 * @param CustomType Additionl byte to implement Custom Types or other functionality.\n\x09 *\n\x09 * @returns A WeaponAttachment class that should replace this one under the given arguments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
		{ "ToolTip", "Allows to pick another class to replace this attachment altogether for different rail types.\nThis can be useful in case for example the picatinny and mlok variant have differences are too\ncomplex to handle in the OnRailTypeChanged function. It will be a class replacement, so stats would also\nbe changed. Good practice in order to retain the stats of the original is to make the replacement a child\n@param RailType Type of rail usually of the attachment point\n@param CustomType Additionl byte to implement Custom Types or other functionality.\n\n@returns A WeaponAttachment class that should replace this one under the given arguments." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetReplacementClass", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetReplacementClass_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetSprayModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetSprayModifier", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetSprayModifier_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics
	{
		struct TVRWeaponAttachment_eventGetWeaponAttachmentName_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventGetWeaponAttachmentName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "GetWeaponAttachmentName", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventGetWeaponAttachmentName_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics
	{
		struct TVRWeaponAttachment_eventOnOwnerDropped_Parms
		{
			UGripMotionControllerComponent* GrippingHand;
			FBPActorGripInformation GripInfo;
			bool bSocketed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static void NewProp_bSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSocketed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GrippingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GrippingHand = { "GrippingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnOwnerDropped_Parms, GrippingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GrippingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GrippingHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnOwnerDropped_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GripInfo_MetaData)) };
	void Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_bSocketed_SetBit(void* Obj)
	{
		((TVRWeaponAttachment_eventOnOwnerDropped_Parms*)Obj)->bSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_bSocketed = { "bSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRWeaponAttachment_eventOnOwnerDropped_Parms), &Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_bSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GrippingHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_GripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::NewProp_bSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "OnOwnerDropped", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventOnOwnerDropped_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics
	{
		struct TVRWeaponAttachment_eventOnOwnerGripped_Parms
		{
			UGripMotionControllerComponent* GrippingHand;
			FBPActorGripInformation GripInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingHand;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GrippingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GrippingHand = { "GrippingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnOwnerGripped_Parms, GrippingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GrippingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GrippingHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnOwnerGripped_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GrippingHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "OnOwnerGripped", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventOnOwnerGripped_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RailType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RailType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_RailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_RailType = { "RailType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnRailTypeChanged_Parms, RailType), Z_Construct_UEnum_TacticalVRCore_ETVRRailType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnRailTypeChanged_Parms, CustomType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_RailType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_RailType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::NewProp_CustomType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "OnRailTypeChanged", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventOnRailTypeChanged_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorVariant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnVariantChanged_Parms, Variant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::NewProp_ColorVariant = { "ColorVariant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventOnVariantChanged_Parms, ColorVariant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::NewProp_Variant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::NewProp_ColorVariant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "OnVariantChanged", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventOnVariantChanged_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics
	{
		struct TVRWeaponAttachment_eventSetColorVariant_Parms
		{
			uint8 Variant;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventSetColorVariant_Parms, Variant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "SetColorVariant", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventSetColorVariant_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics
	{
		struct TVRWeaponAttachment_eventSetRailType_Parms
		{
			ETVRRailType RailType;
			uint8 CustomType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RailType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RailType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_RailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_RailType = { "RailType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventSetRailType_Parms, RailType), Z_Construct_UEnum_TacticalVRCore_ETVRRailType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventSetRailType_Parms, CustomType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_RailType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_RailType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::NewProp_CustomType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "CPP_Default_CustomType", "0" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "SetRailType", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventSetRailType_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics
	{
		struct TVRWeaponAttachment_eventSetVariant_Parms
		{
			uint8 Variant;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRWeaponAttachment_eventSetVariant_Parms, Variant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRWeaponAttachment, nullptr, "SetVariant", nullptr, nullptr, sizeof(TVRWeaponAttachment_eventSetVariant_Parms), Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRWeaponAttachment_NoRegister()
	{
		return ATVRWeaponAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ATVRWeaponAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachmentMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedVariant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachmentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WeaponAttachmentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRWeaponAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRWeaponAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_AttachToWeapon, "AttachToWeapon" }, // 350889387
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetDamageModifier, "GetDamageModifier" }, // 893650071
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetGunOwner, "GetGunOwner" }, // 3498781478
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetMuzzleVelocityModifier, "GetMuzzleVelocityModifier" }, // 557390155
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetRecoilModifier, "GetRecoilModifier" }, // 660669105
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetReplacementClass, "GetReplacementClass" }, // 2078183771
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetSprayModifier, "GetSprayModifier" }, // 3676274534
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_GetWeaponAttachmentName, "GetWeaponAttachmentName" }, // 2211240923
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerDropped, "OnOwnerDropped" }, // 395618053
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_OnOwnerGripped, "OnOwnerGripped" }, // 4215898440
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_OnRailTypeChanged, "OnRailTypeChanged" }, // 1396371281
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_OnVariantChanged, "OnVariantChanged" }, // 3753969302
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_SetColorVariant, "SetColorVariant" }, // 3354180600
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_SetRailType, "SetRailType" }, // 265170641
		{ &Z_Construct_UFunction_ATVRWeaponAttachment_SetVariant, "SetVariant" }, // 1446953180
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Attachments/TVRWeaponAttachment.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Attachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes_Inner = { "AttachmentMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes = { "AttachmentMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, AttachmentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentPoint = { "AttachmentPoint", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, AttachmentPoint), Z_Construct_UClass_UTVRAttachmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedVariant_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedVariant = { "SelectedVariant", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, SelectedVariant), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedVariant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedColor_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedColor = { "SelectedColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, SelectedColor), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_WeaponAttachmentName_MetaData[] = {
		{ "Category", "Weapon Attachment" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/TVRWeaponAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_WeaponAttachmentName = { "WeaponAttachmentName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRWeaponAttachment, WeaponAttachmentName), METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_WeaponAttachmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_WeaponAttachmentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRWeaponAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_RootScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_AttachmentPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedVariant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_SelectedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRWeaponAttachment_Statics::NewProp_WeaponAttachmentName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRWeaponAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRWeaponAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRWeaponAttachment_Statics::ClassParams = {
		&ATVRWeaponAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRWeaponAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRWeaponAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRWeaponAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRWeaponAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRWeaponAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRWeaponAttachment, 3836771166);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRWeaponAttachment>()
	{
		return ATVRWeaponAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRWeaponAttachment(Z_Construct_UClass_ATVRWeaponAttachment, &ATVRWeaponAttachment::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRWeaponAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRWeaponAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
