// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRGunFireComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunFireComponent() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRFireMode();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunFireComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunFireComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventFireOverrideEvent_Parms
		{
			FVector FireDirection;
			TSubclassOf<ATVRCartridge>  CartridgeClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDirection;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CartridgeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_FireDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_FireDirection = { "FireDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventFireOverrideEvent_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_FireDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_FireDirection_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_CartridgeClass = { "CartridgeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventFireOverrideEvent_Parms, CartridgeClass), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_FireDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::NewProp_CartridgeClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event for overriding the firing logic. */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event for overriding the firing logic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "FireOverrideEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventFireOverrideEvent_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventFireHitEvent_Parms
		{
			FHitResult Hit;
			TSubclassOf<ATVRCartridge>  CartridgeClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CartridgeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventFireHitEvent_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_CartridgeClass = { "CartridgeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventFireHitEvent_Parms, CartridgeClass), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::NewProp_CartridgeClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event for hit events. */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event for hit events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "FireHitEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventFireHitEvent_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Generic Event for GunFireComponents without any parameters. */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Generic Event for GunFireComponents without any parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "FiringCompEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETVRFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETVRFireMode, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETVRFireMode"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRFireMode>()
	{
		return ETVRFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETVRFireMode(ETVRFireMode_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETVRFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETVRFireMode_Hash() { return 1000004517U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETVRFireMode"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETVRFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETVRFireMode::Single", (int64)ETVRFireMode::Single },
				{ "ETVRFireMode::Burst", (int64)ETVRFireMode::Burst },
				{ "ETVRFireMode::Automatic", (int64)ETVRFireMode::Automatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Name", "ETVRFireMode::Automatic" },
				{ "BlueprintType", "true" },
				{ "Burst.Name", "ETVRFireMode::Burst" },
				{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
				{ "Single.Name", "ETVRFireMode::Single" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETVRFireMode",
				"ETVRFireMode",
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
	DEFINE_FUNCTION(UTVRGunFireComponent::execIsCartridgeSpent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCartridgeSpent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execGetLoadedCartridge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ATVRCartridge> *)Z_Param__Result=P_THIS->GetLoadedCartridge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execTryEjectCartridge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ATVRCartridge> *)Z_Param__Result=P_THIS->TryEjectCartridge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execTryLoadCartridge)
	{
		P_GET_OBJECT(UClass,Z_Param_NewCartridge);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryLoadCartridge(Z_Param_NewCartridge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execServerStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStopFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate"));
			return;
		}
		P_THIS->ServerStopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execServerStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate"));
			return;
		}
		P_THIS->ServerStartFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execHasRoundLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRoundLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execHasFiringMode)
	{
		P_GET_ENUM(ETVRFireMode,Z_Param_CheckFireMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFiringMode(ETVRFireMode(Z_Param_CheckFireMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execSetFireMode)
	{
		P_GET_ENUM(ETVRFireMode,Z_Param_NewFireMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFireMode(ETVRFireMode(Z_Param_NewFireMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execGetCurrentFireMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETVRFireMode*)Z_Param__Result=P_THIS->GetCurrentFireMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execMulticastSimulateHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_OBJECT(UClass,Z_Param_Cartridge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSimulateHit_Implementation(Z_Param_Hit,Z_Param_Cartridge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execServerReceiveHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_OBJECT(UClass,Z_Param_Cartridge);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReceiveHit_Validate(Z_Param_Hit,Z_Param_Cartridge))
		{
			RPC_ValidateFailed(TEXT("ServerReceiveHit_Validate"));
			return;
		}
		P_THIS->ServerReceiveHit_Implementation(Z_Param_Hit,Z_Param_Cartridge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execFireBuckshot)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingBuckshot);
		P_GET_OBJECT(ATVRCartridge,Z_Param_AmmoCDO);
		P_GET_STRUCT(FVector,Z_Param_PendingBuckshotDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireBuckshot(Z_Param_PendingBuckshot,Z_Param_AmmoCDO,Z_Param_PendingBuckshotDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execLocalSimulateEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalSimulateEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execMulticastSimulateEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSimulateEmpty_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRGunFireComponent::execMulticastSimulateFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSimulateFire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTVRGunFireComponent_MulticastSimulateEmpty = FName(TEXT("MulticastSimulateEmpty"));
	void UTVRGunFireComponent::MulticastSimulateEmpty()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_MulticastSimulateEmpty),NULL);
	}
	static FName NAME_UTVRGunFireComponent_MulticastSimulateFire = FName(TEXT("MulticastSimulateFire"));
	void UTVRGunFireComponent::MulticastSimulateFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_MulticastSimulateFire),NULL);
	}
	static FName NAME_UTVRGunFireComponent_MulticastSimulateHit = FName(TEXT("MulticastSimulateHit"));
	void UTVRGunFireComponent::MulticastSimulateHit(FHitResult const& Hit, TSubclassOf<ATVRCartridge>  Cartridge)
	{
		TVRGunFireComponent_eventMulticastSimulateHit_Parms Parms;
		Parms.Hit=Hit;
		Parms.Cartridge=Cartridge;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_MulticastSimulateHit),&Parms);
	}
	static FName NAME_UTVRGunFireComponent_ServerReceiveHit = FName(TEXT("ServerReceiveHit"));
	void UTVRGunFireComponent::ServerReceiveHit(FHitResult const& Hit, TSubclassOf<ATVRCartridge>  Cartridge)
	{
		TVRGunFireComponent_eventServerReceiveHit_Parms Parms;
		Parms.Hit=Hit;
		Parms.Cartridge=Cartridge;
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_ServerReceiveHit),&Parms);
	}
	static FName NAME_UTVRGunFireComponent_ServerStartFire = FName(TEXT("ServerStartFire"));
	void UTVRGunFireComponent::ServerStartFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_ServerStartFire),NULL);
	}
	static FName NAME_UTVRGunFireComponent_ServerStopFire = FName(TEXT("ServerStopFire"));
	void UTVRGunFireComponent::ServerStopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTVRGunFireComponent_ServerStopFire),NULL);
	}
	void UTVRGunFireComponent::StaticRegisterNativesUTVRGunFireComponent()
	{
		UClass* Class = UTVRGunFireComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireBuckshot", &UTVRGunFireComponent::execFireBuckshot },
			{ "GetCurrentFireMode", &UTVRGunFireComponent::execGetCurrentFireMode },
			{ "GetLoadedCartridge", &UTVRGunFireComponent::execGetLoadedCartridge },
			{ "HasFiringMode", &UTVRGunFireComponent::execHasFiringMode },
			{ "HasRoundLoaded", &UTVRGunFireComponent::execHasRoundLoaded },
			{ "IsCartridgeSpent", &UTVRGunFireComponent::execIsCartridgeSpent },
			{ "LocalSimulateEmpty", &UTVRGunFireComponent::execLocalSimulateEmpty },
			{ "MulticastSimulateEmpty", &UTVRGunFireComponent::execMulticastSimulateEmpty },
			{ "MulticastSimulateFire", &UTVRGunFireComponent::execMulticastSimulateFire },
			{ "MulticastSimulateHit", &UTVRGunFireComponent::execMulticastSimulateHit },
			{ "ServerReceiveHit", &UTVRGunFireComponent::execServerReceiveHit },
			{ "ServerStartFire", &UTVRGunFireComponent::execServerStartFire },
			{ "ServerStopFire", &UTVRGunFireComponent::execServerStopFire },
			{ "SetFireMode", &UTVRGunFireComponent::execSetFireMode },
			{ "StartFire", &UTVRGunFireComponent::execStartFire },
			{ "StopFire", &UTVRGunFireComponent::execStopFire },
			{ "TryEjectCartridge", &UTVRGunFireComponent::execTryEjectCartridge },
			{ "TryLoadCartridge", &UTVRGunFireComponent::execTryLoadCartridge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics
	{
		struct TVRGunFireComponent_eventFireBuckshot_Parms
		{
			uint8 PendingBuckshot;
			const ATVRCartridge* AmmoCDO;
			FVector PendingBuckshotDir;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingBuckshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoCDO;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingBuckshotDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_PendingBuckshot = { "PendingBuckshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventFireBuckshot_Parms, PendingBuckshot), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_AmmoCDO_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_AmmoCDO = { "AmmoCDO", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventFireBuckshot_Parms, AmmoCDO), Z_Construct_UClass_ATVRCartridge_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_AmmoCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_AmmoCDO_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_PendingBuckshotDir = { "PendingBuckshotDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventFireBuckshot_Parms, PendingBuckshotDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_PendingBuckshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_AmmoCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::NewProp_PendingBuckshotDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Fires multiple bucks with hit-scan. The number of bucks per frame is limited, this function will call\n\x09 * itself in the next frame to process all the other pending buckshots until it is done.\n\x09 * @param PendingBuckshot Number of pending bucks to process\n\x09 * @param AmmoCDO constant default object of the fired ammunition\n\x09 * @param PendingBuckshotDir direction of the pending shot (otherwise recoil will affect this)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Fires multiple bucks with hit-scan. The number of bucks per frame is limited, this function will call\nitself in the next frame to process all the other pending buckshots until it is done.\n@param PendingBuckshot Number of pending bucks to process\n@param AmmoCDO constant default object of the fired ammunition\n@param PendingBuckshotDir direction of the pending shot (otherwise recoil will affect this)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "FireBuckshot", nullptr, nullptr, sizeof(TVRGunFireComponent_eventFireBuckshot_Parms), Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics
	{
		struct TVRGunFireComponent_eventGetCurrentFireMode_Parms
		{
			ETVRFireMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventGetCurrentFireMode_Parms, ReturnValue), Z_Construct_UEnum_TacticalVRCore_ETVRFireMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n\x09 * @returns the current fire mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "@returns the current fire mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "GetCurrentFireMode", nullptr, nullptr, sizeof(TVRGunFireComponent_eventGetCurrentFireMode_Parms), Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics
	{
		struct TVRGunFireComponent_eventGetLoadedCartridge_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventGetLoadedCartridge_Parms, ReturnValue), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "GetLoadedCartridge", nullptr, nullptr, sizeof(TVRGunFireComponent_eventGetLoadedCartridge_Parms), Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics
	{
		struct TVRGunFireComponent_eventHasFiringMode_Parms
		{
			ETVRFireMode CheckFireMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckFireMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckFireMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_CheckFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_CheckFireMode = { "CheckFireMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventHasFiringMode_Parms, CheckFireMode), Z_Construct_UEnum_TacticalVRCore_ETVRFireMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunFireComponent_eventHasFiringMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunFireComponent_eventHasFiringMode_Parms), &Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_CheckFireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_CheckFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * Checks whether the component allows the given fire mode\n\x09 * @param CheckFireMode the fire mode to check for\n\x09 * @returns true if the component allows the given fire mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Checks whether the component allows the given fire mode\n@param CheckFireMode the fire mode to check for\n@returns true if the component allows the given fire mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "HasFiringMode", nullptr, nullptr, sizeof(TVRGunFireComponent_eventHasFiringMode_Parms), Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics
	{
		struct TVRGunFireComponent_eventHasRoundLoaded_Parms
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
	void Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunFireComponent_eventHasRoundLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunFireComponent_eventHasRoundLoaded_Parms), &Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * @returns true if the component has a loaded round\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "@returns true if the component has a loaded round" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "HasRoundLoaded", nullptr, nullptr, sizeof(TVRGunFireComponent_eventHasRoundLoaded_Parms), Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics
	{
		struct TVRGunFireComponent_eventIsCartridgeSpent_Parms
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
	void Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunFireComponent_eventIsCartridgeSpent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunFireComponent_eventIsCartridgeSpent_Parms), &Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "IsCartridgeSpent", nullptr, nullptr, sizeof(TVRGunFireComponent_eventIsCartridgeSpent_Parms), Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n\x09 * Locally simulates an empty gun. (Sounds, effects, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Locally simulates an empty gun. (Sounds, effects, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "LocalSimulateEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * Calls LocalSimulateEmpty on simulating clients\n\x09 * Weill prevent execution on owner client, since it should have already happened due to forward prediction\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Calls LocalSimulateEmpty on simulating clients\nWeill prevent execution on owner client, since it should have already happened due to forward prediction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "MulticastSimulateEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n\x09 * Calls Simulate Fire on simulating clients.\n\x09 * Will prevent execution on owner client, since it should already have performed this due to forward prediction\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Calls Simulate Fire on simulating clients.\nWill prevent execution on owner client, since it should already have performed this due to forward prediction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "MulticastSimulateFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Cartridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventMulticastSimulateHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Cartridge = { "Cartridge", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventMulticastSimulateHit_Parms, Cartridge), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::NewProp_Cartridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "// tbh maybe make it unreliable\n" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "tbh maybe make it unreliable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "MulticastSimulateHit", nullptr, nullptr, sizeof(TVRGunFireComponent_eventMulticastSimulateHit_Parms), Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Cartridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventServerReceiveHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Cartridge = { "Cartridge", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventServerReceiveHit_Parms, Cartridge), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::NewProp_Cartridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "ServerReceiveHit", nullptr, nullptr, sizeof(TVRGunFireComponent_eventServerReceiveHit_Parms), Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "ServerStartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "ServerStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics
	{
		struct TVRGunFireComponent_eventSetFireMode_Parms
		{
			ETVRFireMode NewFireMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFireMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewFireMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_NewFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_NewFireMode = { "NewFireMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventSetFireMode_Parms, NewFireMode), Z_Construct_UEnum_TacticalVRCore_ETVRFireMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunFireComponent_eventSetFireMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunFireComponent_eventSetFireMode_Parms), &Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_NewFireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_NewFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * Changes the firing mode, outside of the normal cycling logic. E.g. blueprint implementation of staged triggers\n\x09 * @param NewFireMode the new fire mode to switch to\n\x09 * @returns true if the component is now in the requested fire mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Changes the firing mode, outside of the normal cycling logic. E.g. blueprint implementation of staged triggers\n@param NewFireMode the new fire mode to switch to\n@returns true if the component is now in the requested fire mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "SetFireMode", nullptr, nullptr, sizeof(TVRGunFireComponent_eventSetFireMode_Parms), Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "StartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics
	{
		struct TVRGunFireComponent_eventTryEjectCartridge_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventTryEjectCartridge_Parms, ReturnValue), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "TryEjectCartridge", nullptr, nullptr, sizeof(TVRGunFireComponent_eventTryEjectCartridge_Parms), Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics
	{
		struct TVRGunFireComponent_eventTryLoadCartridge_Parms
		{
			TSubclassOf<ATVRCartridge>  NewCartridge;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewCartridge;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_NewCartridge = { "NewCartridge", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunFireComponent_eventTryLoadCartridge_Parms, NewCartridge), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunFireComponent_eventTryLoadCartridge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunFireComponent_eventTryLoadCartridge_Parms), &Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_NewCartridge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGunFireComponent, nullptr, "TryLoadCartridge", nullptr, nullptr, sizeof(TVRGunFireComponent_eventTryLoadCartridge_Parms), Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRGunFireComponent_NoRegister()
	{
		return UTVRGunFireComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTVRGunFireComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCycledFireMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCycledFireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSimulateFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSimulateFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSimulateEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSimulateEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSimulateHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSimulateHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCartridgeSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCartridgeSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FireOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuppressed_MetaData[];
#endif
		static void NewProp_bIsSuppressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuppressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashPSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashPSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptySoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSingleShot_MetaData[];
#endif
		static void NewProp_bHasSingleShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSingleShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBurst_MetaData[];
#endif
		static void NewProp_bHasBurst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBurst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFullAuto_MetaData[];
#endif
		static void NewProp_bHasFullAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFullAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFireSelector_MetaData[];
#endif
		static void NewProp_bHasFireSelector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFireSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFireRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFireRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BurstCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGunHapticsButtstock_MetaData[];
#endif
		static void NewProp_bUseGunHapticsButtstock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGunHapticsButtstock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGunHapticsPistolGrip_MetaData[];
#endif
		static void NewProp_bUseGunHapticsPistolGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGunHapticsPistolGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSoundComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSoundComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRGunFireComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRGunFireComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRGunFireComponent_FireBuckshot, "FireBuckshot" }, // 2834667836
		{ &Z_Construct_UFunction_UTVRGunFireComponent_GetCurrentFireMode, "GetCurrentFireMode" }, // 2766922352
		{ &Z_Construct_UFunction_UTVRGunFireComponent_GetLoadedCartridge, "GetLoadedCartridge" }, // 2503443976
		{ &Z_Construct_UFunction_UTVRGunFireComponent_HasFiringMode, "HasFiringMode" }, // 1288857166
		{ &Z_Construct_UFunction_UTVRGunFireComponent_HasRoundLoaded, "HasRoundLoaded" }, // 4218067637
		{ &Z_Construct_UFunction_UTVRGunFireComponent_IsCartridgeSpent, "IsCartridgeSpent" }, // 3874557451
		{ &Z_Construct_UFunction_UTVRGunFireComponent_LocalSimulateEmpty, "LocalSimulateEmpty" }, // 582473310
		{ &Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateEmpty, "MulticastSimulateEmpty" }, // 3510860525
		{ &Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateFire, "MulticastSimulateFire" }, // 1695726857
		{ &Z_Construct_UFunction_UTVRGunFireComponent_MulticastSimulateHit, "MulticastSimulateHit" }, // 2359436826
		{ &Z_Construct_UFunction_UTVRGunFireComponent_ServerReceiveHit, "ServerReceiveHit" }, // 3596946804
		{ &Z_Construct_UFunction_UTVRGunFireComponent_ServerStartFire, "ServerStartFire" }, // 3306631789
		{ &Z_Construct_UFunction_UTVRGunFireComponent_ServerStopFire, "ServerStopFire" }, // 3949926936
		{ &Z_Construct_UFunction_UTVRGunFireComponent_SetFireMode, "SetFireMode" }, // 3085437045
		{ &Z_Construct_UFunction_UTVRGunFireComponent_StartFire, "StartFire" }, // 4238163785
		{ &Z_Construct_UFunction_UTVRGunFireComponent_StopFire, "StopFire" }, // 3620905645
		{ &Z_Construct_UFunction_UTVRGunFireComponent_TryEjectCartridge, "TryEjectCartridge" }, // 254160678
		{ &Z_Construct_UFunction_UTVRGunFireComponent_TryLoadCartridge, "TryLoadCartridge" }, // 3232711014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Rendering ComponentTick ComponentReplication Activation Physics LOD Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRGunFireComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCycledFireMode_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the fire mode is cycled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the fire mode is cycled" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCycledFireMode = { "OnCycledFireMode", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnCycledFireMode), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCycledFireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCycledFireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnFire_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the gun is fired. This should be used to implement additional logic outside of this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the gun is fired. This should be used to implement additional logic outside of this component." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnFire = { "OnFire", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnFire), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEndCycle_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the gun is fired. This should be used to implement additional logic outside of this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the gun is fired. This should be used to implement additional logic outside of this component." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEndCycle = { "OnEndCycle", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnEndCycle), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEndCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEndCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateFire_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when gun fire is simulated (effects, sound) this will be run locally on all clients.\n\x09 * Use this for additional effects\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when gun fire is simulated (effects, sound) this will be run locally on all clients.\nUse this for additional effects" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateFire = { "OnSimulateFire", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnSimulateFire), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEmpty_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEmpty = { "OnEmpty", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnEmpty), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateEmpty_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the gun tries to fire unsuccessfully and a click is played. Additional effects that are not\n\x09 * relevant to gameplay can be added here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the gun tries to fire unsuccessfully and a click is played. Additional effects that are not\nrelevant to gameplay can be added here." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateEmpty = { "OnSimulateEmpty", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnSimulateEmpty), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateHit_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the gun has hit something with hit-scan. Use it to add additional particles or other effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the gun has hit something with hit-scan. Use it to add additional particles or other effects." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateHit = { "OnSimulateHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnSimulateHit), Z_Construct_UDelegateFunction_TacticalVRCore_FireHitEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCartridgeSpent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Event called when the cartridge is spent (fired). Use this event in case you want to replace your catrridge model\n\x09 * with one of a spent cartridge.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Event called when the cartridge is spent (fired). Use this event in case you want to replace your catrridge model\nwith one of a spent cartridge." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCartridgeSpent = { "OnCartridgeSpent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, OnCartridgeSpent), Z_Construct_UDelegateFunction_TacticalVRCore_FiringCompEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCartridgeSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCartridgeSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireOverride_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * Implementing this event overrides the default firing methods (bullet). E.g. in the weapon spawns a projectile\n\x09 * or does something else. The basic functionality like activating and replicating muzzle flash and sound will\n\x09 * be perserved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Implementing this event overrides the default firing methods (bullet). E.g. in the weapon spawns a projectile\nor does something else. The basic functionality like activating and replicating muzzle flash and sound will\nbe perserved." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireOverride = { "FireOverride", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, FireOverride), Z_Construct_UDelegateFunction_TacticalVRCore_FireOverrideEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashOverride_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashOverride = { "MuzzleFlashOverride", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, MuzzleFlashOverride), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bIsSuppressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed = { "bIsSuppressed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashPSC_MetaData[] = {
		{ "Comment", "/** Particle System to simulate the muzzle flash. Will be set during BeginPlay if this component has a suitable child component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Particle System to simulate the muzzle flash. Will be set during BeginPlay if this component has a suitable child component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashPSC = { "MuzzleFlashPSC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, MuzzleFlashPSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashPSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashPSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireAudioComp_MetaData[] = {
		{ "Comment", "/** Audio component for gunshots. Will be set during BeginPlay if this component has a suitable child component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Audio component for gunshots. Will be set during BeginPlay if this component has a suitable child component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireAudioComp = { "FireAudioComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, FireAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptyAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptyAudioComp = { "EmptyAudioComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, EmptyAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptyAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptyAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireSoundCue_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireSoundCue = { "FireSoundCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, FireSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptySoundCue_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptySoundCue = { "EmptySoundCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, EmptySoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/** Flag that controls whether this gun has single shot mode */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Flag that controls whether this gun has single shot mode" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bHasSingleShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot = { "bHasSingleShot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/** Flag that controls whether this gun has single shot mode */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Flag that controls whether this gun has single shot mode" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bHasBurst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst = { "bHasBurst", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/** Flag that controls whether this gun has single shot mode */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Flag that controls whether this gun has single shot mode" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bHasFullAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto = { "bHasFullAuto", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/** Flag that controls whether this gun has single shot mode */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Flag that controls whether this gun has single shot mode" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bHasFireSelector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector = { "bHasFireSelector", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_RateOfFireRPM_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n\x09 * Rate of fire in Rounds Per Minute. Will be converted to refire time later.\n\x09 * Changing this won't do anything after BeginPlay()\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Rate of fire in Rounds Per Minute. Will be converted to refire time later.\nChanging this won't do anything after BeginPlay()" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_RateOfFireRPM = { "RateOfFireRPM", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, RateOfFireRPM), METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_RateOfFireRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_RateOfFireRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_BurstCount_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "/** Count of shots fired on Burst Fire */" },
		{ "EditCondition", "bHasBurst" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Count of shots fired on Burst Fire" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_BurstCount = { "BurstCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, BurstCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_BurstCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_BurstCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock_MetaData[] = {
		{ "Category", "Firing|Haptics" },
		{ "Comment", "/** Whether or not to initiate a kick with a haptic feedback device at buttstock (like ForceTube) */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Whether or not to initiate a kick with a haptic feedback device at buttstock (like ForceTube)" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bUseGunHapticsButtstock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock = { "bUseGunHapticsButtstock", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip_MetaData[] = {
		{ "Category", "Firing|Haptics" },
		{ "Comment", "/** Whether or not to initiate a kick with haptic feedback device at pistol grip (like Provolver) */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
		{ "ToolTip", "Whether or not to initiate a kick with haptic feedback device at pistol grip (like Provolver)" },
	};
#endif
	void Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip_SetBit(void* Obj)
	{
		((UTVRGunFireComponent*)Obj)->bUseGunHapticsPistolGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip = { "bUseGunHapticsPistolGrip", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTVRGunFireComponent), &Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_ImpactSoundComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRGunFireComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_ImpactSoundComp = { "ImpactSoundComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRGunFireComponent, ImpactSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_ImpactSoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_ImpactSoundComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRGunFireComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCycledFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEndCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnSimulateHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_OnCartridgeSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bIsSuppressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_MuzzleFlashPSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptyAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_FireSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_EmptySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasSingleShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasBurst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFullAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bHasFireSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_RateOfFireRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_BurstCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsButtstock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_bUseGunHapticsPistolGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRGunFireComponent_Statics::NewProp_ImpactSoundComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRGunFireComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRGunFireComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRGunFireComponent_Statics::ClassParams = {
		&UTVRGunFireComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRGunFireComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRGunFireComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGunFireComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRGunFireComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRGunFireComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRGunFireComponent, 497025290);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRGunFireComponent>()
	{
		return UTVRGunFireComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRGunFireComponent(Z_Construct_UClass_UTVRGunFireComponent, &UTVRGunFireComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRGunFireComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRGunFireComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
