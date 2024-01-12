// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRGunBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGunBase() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRGunClass();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRGunType();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGunBase();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunFireComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineCompInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRTriggerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Barrel_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREjectionPort_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRMagazine_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_GunTools_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "OnGunSecondaryUsedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_OnGunSecondaryUsedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETVRGunClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETVRGunClass, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETVRGunClass"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRGunClass>()
	{
		return ETVRGunClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETVRGunClass(ETVRGunClass_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETVRGunClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETVRGunClass_Hash() { return 2999485998U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRGunClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETVRGunClass"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETVRGunClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETVRGunClass::Pistol", (int64)ETVRGunClass::Pistol },
				{ "ETVRGunClass::Rifle", (int64)ETVRGunClass::Rifle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
				{ "Pistol.Name", "ETVRGunClass::Pistol" },
				{ "Rifle.Name", "ETVRGunClass::Rifle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETVRGunClass",
				"ETVRGunClass",
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
	static UEnum* ETVRGunType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETVRGunType, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETVRGunType"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRGunType>()
	{
		return ETVRGunType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETVRGunType(ETVRGunType_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETVRGunType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETVRGunType_Hash() { return 3645149465U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRGunType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETVRGunType"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETVRGunType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETVRGunType::Primary", (int64)ETVRGunType::Primary },
				{ "ETVRGunType::Sidearm", (int64)ETVRGunType::Sidearm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
				{ "Primary.Name", "ETVRGunType::Primary" },
				{ "Sidearm.Name", "ETVRGunType::Sidearm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETVRGunType",
				"ETVRGunType",
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
	DEFINE_FUNCTION(ATVRGunBase::execUnlockBoltIfNecessary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockBoltIfNecessary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execLockBoltIfNecessary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockBoltIfNecessary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnOpenDustCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenDustCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execSetBoltMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoltMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execSetColorVariant)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newVariant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorVariant(Z_Param_newVariant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execShouldLockBolt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldLockBolt_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnPhysicsHit)
	{
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_HitVelocity);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhysicsHit(Z_Param_HitActor,Z_Param_OtherActor,Z_Param_HitVelocity,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetMovablePartsMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMovablePartsMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetSecondaryHandSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=P_THIS->GetSecondaryHandSocket_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetPrimaryHandSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=P_THIS->GetPrimaryHandSocket_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetPrimaryHandTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_GET_ENUM(EControllerHand,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPrimaryHandTransform_Implementation(Z_Param_Out_OutTransform,EControllerHand(Z_Param_HandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetRecoilPointOfAttack)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecoilPointOfAttack_Implementation(Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execToggleLight)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight_Implementation(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execToggleLaser)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_UsingHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLaser_Implementation(Z_Param_UsingHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execIsMagReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMagReleasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execIsBoltReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoltReleasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetHammerProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHammerProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetBoltProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoltProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execIsGrippedAtPrimaryGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrippedAtPrimaryGrip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnBoltReleaseReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleaseReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnBoltReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetMagInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRMagazineCompInterface**)Z_Param__Result=P_THIS->GetMagInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execInitMagInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMagInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnMagReleaseReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleaseReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnMagReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetChargingHandleInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetChargingHandleInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetGunType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETVRGunType*)Z_Param__Result=P_THIS->GetGunType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnCartridgeSpent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCartridgeSpent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execAddCustomRecoil)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PointOfAttack);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RecoilImpulse);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularRecoilImpulse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomRecoil(Z_Param_Out_PointOfAttack,Z_Param_Out_RecoilImpulse,Z_Param_Out_AngularRecoilImpulse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execAddRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetSecondarySlotComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetSecondarySlotComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execSetCollisionProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionProfile_Implementation(Z_Param_NewProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetFiringComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRGunFireComponent**)Z_Param__Result=P_THIS->GetFiringComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execGetTriggerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRTriggerComponent**)Z_Param__Result=P_THIS->GetTriggerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGunBase::execOnEndFiringCycle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndFiringCycle();
		P_NATIVE_END;
	}
	static FName NAME_ATVRGunBase_BP_OnBoltReleased = FName(TEXT("BP_OnBoltReleased"));
	void ATVRGunBase::BP_OnBoltReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnBoltReleased),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnBoltReleasedByChargingHandle = FName(TEXT("BP_OnBoltReleasedByChargingHandle"));
	void ATVRGunBase::BP_OnBoltReleasedByChargingHandle()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnBoltReleasedByChargingHandle),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnBoltReleasePressed = FName(TEXT("BP_OnBoltReleasePressed"));
	void ATVRGunBase::BP_OnBoltReleasePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnBoltReleasePressed),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnBoltReleaseReleased = FName(TEXT("BP_OnBoltReleaseReleased"));
	void ATVRGunBase::BP_OnBoltReleaseReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnBoltReleaseReleased),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnCycleFiringMode = FName(TEXT("BP_OnCycleFiringMode"));
	void ATVRGunBase::BP_OnCycleFiringMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnCycleFiringMode),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnMagReleasePressed = FName(TEXT("BP_OnMagReleasePressed"));
	void ATVRGunBase::BP_OnMagReleasePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnMagReleasePressed),NULL);
	}
	static FName NAME_ATVRGunBase_BP_OnMagReleaseReleased = FName(TEXT("BP_OnMagReleaseReleased"));
	void ATVRGunBase::BP_OnMagReleaseReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BP_OnMagReleaseReleased),NULL);
	}
	static FName NAME_ATVRGunBase_BPOnFullyDropped = FName(TEXT("BPOnFullyDropped"));
	void ATVRGunBase::BPOnFullyDropped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_BPOnFullyDropped),NULL);
	}
	static FName NAME_ATVRGunBase_FoldSights = FName(TEXT("FoldSights"));
	void ATVRGunBase::FoldSights(bool bFold)
	{
		TVRGunBase_eventFoldSights_Parms Parms;
		Parms.bFold=bFold ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_FoldSights),&Parms);
	}
	static FName NAME_ATVRGunBase_GetPrimaryHandSocket = FName(TEXT("GetPrimaryHandSocket"));
	UHandSocketComponent* ATVRGunBase::GetPrimaryHandSocket() const
	{
		TVRGunBase_eventGetPrimaryHandSocket_Parms Parms;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetPrimaryHandSocket),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGunBase_GetPrimaryHandTransform = FName(TEXT("GetPrimaryHandTransform"));
	bool ATVRGunBase::GetPrimaryHandTransform(FTransform& OutTransform, EControllerHand HandType) const
	{
		TVRGunBase_eventGetPrimaryHandTransform_Parms Parms;
		Parms.OutTransform=OutTransform;
		Parms.HandType=HandType;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetPrimaryHandTransform),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_ATVRGunBase_GetRecoilPointOfAttack = FName(TEXT("GetRecoilPointOfAttack"));
	void ATVRGunBase::GetRecoilPointOfAttack(FTransform& OutTransform) const
	{
		TVRGunBase_eventGetRecoilPointOfAttack_Parms Parms;
		Parms.OutTransform=OutTransform;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetRecoilPointOfAttack),&Parms);
		OutTransform=Parms.OutTransform;
	}
	static FName NAME_ATVRGunBase_GetSecondaryHandSocket = FName(TEXT("GetSecondaryHandSocket"));
	UHandSocketComponent* ATVRGunBase::GetSecondaryHandSocket() const
	{
		TVRGunBase_eventGetSecondaryHandSocket_Parms Parms;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetSecondaryHandSocket),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGunBase_GetSecondarySlotComponent = FName(TEXT("GetSecondarySlotComponent"));
	USceneComponent* ATVRGunBase::GetSecondarySlotComponent() const
	{
		TVRGunBase_eventGetSecondarySlotComponent_Parms Parms;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetSecondarySlotComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGunBase_GetWeaponMeshes = FName(TEXT("GetWeaponMeshes"));
	void ATVRGunBase::GetWeaponMeshes(TArray<UStaticMeshComponent*>& Meshes) const
	{
		TVRGunBase_eventGetWeaponMeshes_Parms Parms;
		Parms.Meshes=Meshes;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_GetWeaponMeshes),&Parms);
		Meshes=Parms.Meshes;
	}
	static FName NAME_ATVRGunBase_HideRearSight = FName(TEXT("HideRearSight"));
	void ATVRGunBase::HideRearSight(bool bFold)
	{
		TVRGunBase_eventHideRearSight_Parms Parms;
		Parms.bFold=bFold ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_HideRearSight),&Parms);
	}
	static FName NAME_ATVRGunBase_InitMagInterface = FName(TEXT("InitMagInterface"));
	void ATVRGunBase::InitMagInterface()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_InitMagInterface),NULL);
	}
	static FName NAME_ATVRGunBase_OnBarrelChanged = FName(TEXT("OnBarrelChanged"));
	void ATVRGunBase::OnBarrelChanged(TSubclassOf<AWPNA_Barrel>  NewBarrel)
	{
		TVRGunBase_eventOnBarrelChanged_Parms Parms;
		Parms.NewBarrel=NewBarrel;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_OnBarrelChanged),&Parms);
	}
	static FName NAME_ATVRGunBase_OnChamberRound = FName(TEXT("OnChamberRound"));
	void ATVRGunBase::OnChamberRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_OnChamberRound),NULL);
	}
	static FName NAME_ATVRGunBase_OnColorVariantChanged = FName(TEXT("OnColorVariantChanged"));
	void ATVRGunBase::OnColorVariantChanged(uint8 newVariant)
	{
		TVRGunBase_eventOnColorVariantChanged_Parms Parms;
		Parms.newVariant=newVariant;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_OnColorVariantChanged),&Parms);
	}
	static FName NAME_ATVRGunBase_OnEjectRound = FName(TEXT("OnEjectRound"));
	void ATVRGunBase::OnEjectRound(bool bSpent, TSubclassOf<ATVRCartridge>  CartridgeType)
	{
		TVRGunBase_eventOnEjectRound_Parms Parms;
		Parms.bSpent=bSpent ? true : false;
		Parms.CartridgeType=CartridgeType;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_OnEjectRound),&Parms);
	}
	static FName NAME_ATVRGunBase_OnSimulateBoltClosed = FName(TEXT("OnSimulateBoltClosed"));
	void ATVRGunBase::OnSimulateBoltClosed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_OnSimulateBoltClosed),NULL);
	}
	static FName NAME_ATVRGunBase_SetCollisionProfile = FName(TEXT("SetCollisionProfile"));
	void ATVRGunBase::SetCollisionProfile(FName NewProfile)
	{
		TVRGunBase_eventSetCollisionProfile_Parms Parms;
		Parms.NewProfile=NewProfile;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_SetCollisionProfile),&Parms);
	}
	static FName NAME_ATVRGunBase_ShouldLockBolt = FName(TEXT("ShouldLockBolt"));
	bool ATVRGunBase::ShouldLockBolt() const
	{
		TVRGunBase_eventShouldLockBolt_Parms Parms;
		const_cast<ATVRGunBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_ShouldLockBolt),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ATVRGunBase_ToggleLaser = FName(TEXT("ToggleLaser"));
	void ATVRGunBase::ToggleLaser(UGripMotionControllerComponent* UsingHand)
	{
		TVRGunBase_eventToggleLaser_Parms Parms;
		Parms.UsingHand=UsingHand;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_ToggleLaser),&Parms);
	}
	static FName NAME_ATVRGunBase_ToggleLight = FName(TEXT("ToggleLight"));
	void ATVRGunBase::ToggleLight(UGripMotionControllerComponent* UsingHand)
	{
		TVRGunBase_eventToggleLight_Parms Parms;
		Parms.UsingHand=UsingHand;
		ProcessEvent(FindFunctionChecked(NAME_ATVRGunBase_ToggleLight),&Parms);
	}
	void ATVRGunBase::StaticRegisterNativesATVRGunBase()
	{
		UClass* Class = ATVRGunBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomRecoil", &ATVRGunBase::execAddCustomRecoil },
			{ "AddRecoil", &ATVRGunBase::execAddRecoil },
			{ "GetBoltProgress", &ATVRGunBase::execGetBoltProgress },
			{ "GetChargingHandleInterface", &ATVRGunBase::execGetChargingHandleInterface },
			{ "GetFiringComponent", &ATVRGunBase::execGetFiringComponent },
			{ "GetGunType", &ATVRGunBase::execGetGunType },
			{ "GetHammerProgress", &ATVRGunBase::execGetHammerProgress },
			{ "GetMagInterface", &ATVRGunBase::execGetMagInterface },
			{ "GetMovablePartsMesh", &ATVRGunBase::execGetMovablePartsMesh },
			{ "GetPrimaryHandSocket", &ATVRGunBase::execGetPrimaryHandSocket },
			{ "GetPrimaryHandTransform", &ATVRGunBase::execGetPrimaryHandTransform },
			{ "GetRecoilPointOfAttack", &ATVRGunBase::execGetRecoilPointOfAttack },
			{ "GetSecondaryHandSocket", &ATVRGunBase::execGetSecondaryHandSocket },
			{ "GetSecondarySlotComponent", &ATVRGunBase::execGetSecondarySlotComponent },
			{ "GetTriggerComponent", &ATVRGunBase::execGetTriggerComponent },
			{ "InitMagInterface", &ATVRGunBase::execInitMagInterface },
			{ "IsBoltReleasePressed", &ATVRGunBase::execIsBoltReleasePressed },
			{ "IsGrippedAtPrimaryGrip", &ATVRGunBase::execIsGrippedAtPrimaryGrip },
			{ "IsMagReleasePressed", &ATVRGunBase::execIsMagReleasePressed },
			{ "LockBoltIfNecessary", &ATVRGunBase::execLockBoltIfNecessary },
			{ "OnBoltReleasePressed", &ATVRGunBase::execOnBoltReleasePressed },
			{ "OnBoltReleaseReleased", &ATVRGunBase::execOnBoltReleaseReleased },
			{ "OnCartridgeSpent", &ATVRGunBase::execOnCartridgeSpent },
			{ "OnEmpty", &ATVRGunBase::execOnEmpty },
			{ "OnEndFiringCycle", &ATVRGunBase::execOnEndFiringCycle },
			{ "OnFire", &ATVRGunBase::execOnFire },
			{ "OnMagReleasePressed", &ATVRGunBase::execOnMagReleasePressed },
			{ "OnMagReleaseReleased", &ATVRGunBase::execOnMagReleaseReleased },
			{ "OnOpenDustCover", &ATVRGunBase::execOnOpenDustCover },
			{ "OnPhysicsHit", &ATVRGunBase::execOnPhysicsHit },
			{ "OnStartFire", &ATVRGunBase::execOnStartFire },
			{ "OnStopFire", &ATVRGunBase::execOnStopFire },
			{ "SetBoltMesh", &ATVRGunBase::execSetBoltMesh },
			{ "SetCollisionProfile", &ATVRGunBase::execSetCollisionProfile },
			{ "SetColorVariant", &ATVRGunBase::execSetColorVariant },
			{ "ShouldLockBolt", &ATVRGunBase::execShouldLockBolt },
			{ "ToggleLaser", &ATVRGunBase::execToggleLaser },
			{ "ToggleLight", &ATVRGunBase::execToggleLight },
			{ "UnlockBoltIfNecessary", &ATVRGunBase::execUnlockBoltIfNecessary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics
	{
		struct TVRGunBase_eventAddCustomRecoil_Parms
		{
			FTransform PointOfAttack;
			FVector RecoilImpulse;
			FVector AngularRecoilImpulse;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOfAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointOfAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularRecoilImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularRecoilImpulse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_PointOfAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_PointOfAttack = { "PointOfAttack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventAddCustomRecoil_Parms, PointOfAttack), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_PointOfAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_PointOfAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_RecoilImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_RecoilImpulse = { "RecoilImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventAddCustomRecoil_Parms, RecoilImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_RecoilImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_RecoilImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_AngularRecoilImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_AngularRecoilImpulse = { "AngularRecoilImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventAddCustomRecoil_Parms, AngularRecoilImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_AngularRecoilImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_AngularRecoilImpulse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_PointOfAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_RecoilImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::NewProp_AngularRecoilImpulse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "CPP_Default_AngularRecoilImpulse", "" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "AddCustomRecoil", nullptr, nullptr, sizeof(TVRGunBase_eventAddCustomRecoil_Parms), Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "AddRecoil", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_AddRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_AddRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnBoltReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnBoltReleasedByChargingHandle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnBoltReleasePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnBoltReleaseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnCycleFiringMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnMagReleasePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BP_OnMagReleaseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "BPOnFullyDropped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics
	{
		static void NewProp_bFold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::NewProp_bFold_SetBit(void* Obj)
	{
		((TVRGunBase_eventFoldSights_Parms*)Obj)->bFold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::NewProp_bFold = { "bFold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventFoldSights_Parms), &Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::NewProp_bFold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::NewProp_bFold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "FoldSights", nullptr, nullptr, sizeof(TVRGunBase_eventFoldSights_Parms), Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_FoldSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_FoldSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics
	{
		struct TVRGunBase_eventGetBoltProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetBoltProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetBoltProgress", nullptr, nullptr, sizeof(TVRGunBase_eventGetBoltProgress_Parms), Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetBoltProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetBoltProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics
	{
		struct TVRGunBase_eventGetChargingHandleInterface_Parms
		{
			USceneComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetChargingHandleInterface_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetChargingHandleInterface", nullptr, nullptr, sizeof(TVRGunBase_eventGetChargingHandleInterface_Parms), Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics
	{
		struct TVRGunBase_eventGetFiringComponent_Parms
		{
			UTVRGunFireComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetFiringComponent_Parms, ReturnValue), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetFiringComponent", nullptr, nullptr, sizeof(TVRGunBase_eventGetFiringComponent_Parms), Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetFiringComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetFiringComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics
	{
		struct TVRGunBase_eventGetGunType_Parms
		{
			ETVRGunType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetGunType_Parms, ReturnValue), Z_Construct_UEnum_TacticalVRCore_ETVRGunType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetGunType", nullptr, nullptr, sizeof(TVRGunBase_eventGetGunType_Parms), Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetGunType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetGunType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics
	{
		struct TVRGunBase_eventGetHammerProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetHammerProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetHammerProgress", nullptr, nullptr, sizeof(TVRGunBase_eventGetHammerProgress_Parms), Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetHammerProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetHammerProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics
	{
		struct TVRGunBase_eventGetMagInterface_Parms
		{
			UTVRMagazineCompInterface* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetMagInterface_Parms, ReturnValue), Z_Construct_UClass_UTVRMagazineCompInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetMagInterface", nullptr, nullptr, sizeof(TVRGunBase_eventGetMagInterface_Parms), Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetMagInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetMagInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics
	{
		struct TVRGunBase_eventGetMovablePartsMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetMovablePartsMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * @returns the movable parts mesh. Returns nullptr if it is not available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "@returns the movable parts mesh. Returns nullptr if it is not available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetMovablePartsMesh", nullptr, nullptr, sizeof(TVRGunBase_eventGetMovablePartsMesh_Parms), Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetPrimaryHandSocket_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * @returns the Primary hand socket of this gun\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "@returns the Primary hand socket of this gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetPrimaryHandSocket", nullptr, nullptr, sizeof(TVRGunBase_eventGetPrimaryHandSocket_Parms), Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetPrimaryHandTransform_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetPrimaryHandTransform_Parms, HandType), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunBase_eventGetPrimaryHandTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventGetPrimaryHandTransform_Parms), &Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_OutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetPrimaryHandTransform", nullptr, nullptr, sizeof(TVRGunBase_eventGetPrimaryHandTransform_Parms), Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetRecoilPointOfAttack_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::NewProp_OutTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetRecoilPointOfAttack", nullptr, nullptr, sizeof(TVRGunBase_eventGetRecoilPointOfAttack_Parms), Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetSecondaryHandSocket_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09* @returns the Secondary hand socket of this gun\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "@returns the Secondary hand socket of this gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetSecondaryHandSocket", nullptr, nullptr, sizeof(TVRGunBase_eventGetSecondaryHandSocket_Parms), Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetSecondarySlotComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n     * Returns the component that marks the secondary slot\n     * @returns Secondary slot component as Scene Component\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Returns the component that marks the secondary slot\n@returns Secondary slot component as Scene Component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetSecondarySlotComponent", nullptr, nullptr, sizeof(TVRGunBase_eventGetSecondarySlotComponent_Parms), Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics
	{
		struct TVRGunBase_eventGetTriggerComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetTriggerComponent_Parms, ReturnValue), Z_Construct_UClass_UTVRTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetTriggerComponent", nullptr, nullptr, sizeof(TVRGunBase_eventGetTriggerComponent_Parms), Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventGetWeaponMeshes_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::NewProp_Meshes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun|Collision" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "GetWeaponMeshes", nullptr, nullptr, sizeof(TVRGunBase_eventGetWeaponMeshes_Parms), Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics
	{
		static void NewProp_bFold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::NewProp_bFold_SetBit(void* Obj)
	{
		((TVRGunBase_eventHideRearSight_Parms*)Obj)->bFold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::NewProp_bFold = { "bFold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventHideRearSight_Parms), &Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::NewProp_bFold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::NewProp_bFold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "HideRearSight", nullptr, nullptr, sizeof(TVRGunBase_eventHideRearSight_Parms), Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_HideRearSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_HideRearSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "InitMagInterface", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_InitMagInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_InitMagInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics
	{
		struct TVRGunBase_eventIsBoltReleasePressed_Parms
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
	void Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunBase_eventIsBoltReleasePressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventIsBoltReleasePressed_Parms), &Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "IsBoltReleasePressed", nullptr, nullptr, sizeof(TVRGunBase_eventIsBoltReleasePressed_Parms), Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics
	{
		struct TVRGunBase_eventIsGrippedAtPrimaryGrip_Parms
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
	void Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunBase_eventIsGrippedAtPrimaryGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventIsGrippedAtPrimaryGrip_Parms), &Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "IsGrippedAtPrimaryGrip", nullptr, nullptr, sizeof(TVRGunBase_eventIsGrippedAtPrimaryGrip_Parms), Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics
	{
		struct TVRGunBase_eventIsMagReleasePressed_Parms
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
	void Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunBase_eventIsMagReleasePressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventIsMagReleasePressed_Parms), &Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "IsMagReleasePressed", nullptr, nullptr, sizeof(TVRGunBase_eventIsMagReleasePressed_Parms), Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "LockBoltIfNecessary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewBarrel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::NewProp_NewBarrel = { "NewBarrel", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnBarrelChanged_Parms, NewBarrel), Z_Construct_UClass_AWPNA_Barrel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::NewProp_NewBarrel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnBarrelChanged", nullptr, nullptr, sizeof(TVRGunBase_eventOnBarrelChanged_Parms), Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnBoltReleasePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnBoltReleaseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnCartridgeSpent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnChamberRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnChamberRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnChamberRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newVariant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::NewProp_newVariant = { "newVariant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnColorVariantChanged_Parms, newVariant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::NewProp_newVariant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnColorVariantChanged", nullptr, nullptr, sizeof(TVRGunBase_eventOnColorVariantChanged_Parms), Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics
	{
		static void NewProp_bSpent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CartridgeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_bSpent_SetBit(void* Obj)
	{
		((TVRGunBase_eventOnEjectRound_Parms*)Obj)->bSpent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_bSpent = { "bSpent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventOnEjectRound_Parms), &Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_bSpent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_CartridgeType = { "CartridgeType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnEjectRound_Parms, CartridgeType), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_bSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::NewProp_CartridgeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnEjectRound", nullptr, nullptr, sizeof(TVRGunBase_eventOnEjectRound_Parms), Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnEjectRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnEjectRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnEndFiringCycle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnMagReleasePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnMagReleaseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnOpenDustCover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics
	{
		struct TVRGunBase_eventOnPhysicsHit_Parms
		{
			AActor* HitActor;
			AActor* OtherActor;
			FVector HitVelocity;
			FHitResult Hit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitVelocity;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnPhysicsHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnPhysicsHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_HitVelocity = { "HitVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnPhysicsHit_Parms, HitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventOnPhysicsHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_HitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnPhysicsHit", nullptr, nullptr, sizeof(TVRGunBase_eventOnPhysicsHit_Parms), Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnSimulateBoltClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n     * Called to start fire (trigger is pressed)\n     * Will simulate an empty gun if necessary\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Called to start fire (trigger is pressed)\nWill simulate an empty gun if necessary" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnStartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnStartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnStartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "Comment", "/**\n     * Called to stop fire (trigger is released)\n     */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Called to stop fire (trigger is released)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "OnStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_OnStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_OnStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics
	{
		struct TVRGunBase_eventSetBoltMesh_Parms
		{
			UStaticMeshComponent* NewMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::NewProp_NewMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventSetBoltMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::NewProp_NewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::NewProp_NewMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "SetBoltMesh", nullptr, nullptr, sizeof(TVRGunBase_eventSetBoltMesh_Parms), Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_SetBoltMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_SetBoltMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::NewProp_NewProfile = { "NewProfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventSetCollisionProfile_Parms, NewProfile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::NewProp_NewProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun|Collision" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "SetCollisionProfile", nullptr, nullptr, sizeof(TVRGunBase_eventSetCollisionProfile_Parms), Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics
	{
		struct TVRGunBase_eventSetColorVariant_Parms
		{
			uint8 newVariant;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newVariant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::NewProp_newVariant = { "newVariant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventSetColorVariant_Parms, newVariant), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::NewProp_newVariant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "SetColorVariant", nullptr, nullptr, sizeof(TVRGunBase_eventSetColorVariant_Parms), Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_SetColorVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_SetColorVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGunBase_eventShouldLockBolt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGunBase_eventShouldLockBolt_Parms), &Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "ShouldLockBolt", nullptr, nullptr, sizeof(TVRGunBase_eventShouldLockBolt_Parms), Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventToggleLaser_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "ToggleLaser", nullptr, nullptr, sizeof(TVRGunBase_eventToggleLaser_Parms), Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_ToggleLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_ToggleLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::NewProp_UsingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::NewProp_UsingHand = { "UsingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGunBase_eventToggleLight_Parms, UsingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::NewProp_UsingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::NewProp_UsingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::NewProp_UsingHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "ToggleLight", nullptr, nullptr, sizeof(TVRGunBase_eventToggleLight_Parms), Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGunBase, nullptr, "UnlockBoltIfNecessary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRGunBase_NoRegister()
	{
		return ATVRGunBase::StaticClass();
	}
	struct Z_Construct_UClass_ATVRGunBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunManipulationAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunManipulationAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovablePartsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovablePartsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectorAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GunMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoltMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectionPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargingHandleInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneHandStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneHandDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandAngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneHandAngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandAngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneHandAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwoHandStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwoHandDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandAngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwoHandAngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandAngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwoHandAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMagazineOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnMagazineOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRecompile_MetaData[];
#endif
		static void NewProp_bForceRecompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRecompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltMovePct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltMovePct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBoltLocked_MetaData[];
#endif
		static void NewProp_bIsBoltLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBoltLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoltReleasePressed_MetaData[];
#endif
		static void NewProp_bBoltReleasePressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoltReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectorSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLastRoundBoltHoldOpen_MetaData[];
#endif
		static void NewProp_bHasLastRoundBoltHoldOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLastRoundBoltHoldOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMagReleaseOnPrimaryGrip_MetaData[];
#endif
		static void NewProp_bHasMagReleaseOnPrimaryGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMagReleaseOnPrimaryGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBoltReleaseNearPrimaryGrip_MetaData[];
#endif
		static void NewProp_bHasBoltReleaseNearPrimaryGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBoltReleaseNearPrimaryGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoesCycle_MetaData[];
#endif
		static void NewProp_bDoesCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoesCycle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GunType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GunType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandSwapToPrimaryGripSlot_MetaData[];
#endif
		static void NewProp_bHandSwapToPrimaryGripSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandSwapToPrimaryGripSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilAngularImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilAngularImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilReductionTwoHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilReductionTwoHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticFeedback_Fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HapticFeedback_Fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltProgressOpenDustCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltProgressOpenDustCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltProgressEjectRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltProgressEjectRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltProgressFeedRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltProgressFeedRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltStroke_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltStroke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltProgressHammerCocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoltProgressHammerCocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHammerDoubleAction_MetaData[];
#endif
		static void NewProp_bHammerDoubleAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHammerDoubleAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorVariant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRGunBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrippableStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRGunBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRGunBase_AddCustomRecoil, "AddCustomRecoil" }, // 2952866995
		{ &Z_Construct_UFunction_ATVRGunBase_AddRecoil, "AddRecoil" }, // 1894197052
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleased, "BP_OnBoltReleased" }, // 568385745
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasedByChargingHandle, "BP_OnBoltReleasedByChargingHandle" }, // 3514841864
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleasePressed, "BP_OnBoltReleasePressed" }, // 1060975566
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnBoltReleaseReleased, "BP_OnBoltReleaseReleased" }, // 3062054998
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnCycleFiringMode, "BP_OnCycleFiringMode" }, // 1695847078
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleasePressed, "BP_OnMagReleasePressed" }, // 1789019038
		{ &Z_Construct_UFunction_ATVRGunBase_BP_OnMagReleaseReleased, "BP_OnMagReleaseReleased" }, // 1277021994
		{ &Z_Construct_UFunction_ATVRGunBase_BPOnFullyDropped, "BPOnFullyDropped" }, // 3381182125
		{ &Z_Construct_UFunction_ATVRGunBase_FoldSights, "FoldSights" }, // 2227668812
		{ &Z_Construct_UFunction_ATVRGunBase_GetBoltProgress, "GetBoltProgress" }, // 1303952915
		{ &Z_Construct_UFunction_ATVRGunBase_GetChargingHandleInterface, "GetChargingHandleInterface" }, // 1431100909
		{ &Z_Construct_UFunction_ATVRGunBase_GetFiringComponent, "GetFiringComponent" }, // 2535556812
		{ &Z_Construct_UFunction_ATVRGunBase_GetGunType, "GetGunType" }, // 891219941
		{ &Z_Construct_UFunction_ATVRGunBase_GetHammerProgress, "GetHammerProgress" }, // 14452831
		{ &Z_Construct_UFunction_ATVRGunBase_GetMagInterface, "GetMagInterface" }, // 2099565322
		{ &Z_Construct_UFunction_ATVRGunBase_GetMovablePartsMesh, "GetMovablePartsMesh" }, // 1964628534
		{ &Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandSocket, "GetPrimaryHandSocket" }, // 2790821335
		{ &Z_Construct_UFunction_ATVRGunBase_GetPrimaryHandTransform, "GetPrimaryHandTransform" }, // 62502971
		{ &Z_Construct_UFunction_ATVRGunBase_GetRecoilPointOfAttack, "GetRecoilPointOfAttack" }, // 278675945
		{ &Z_Construct_UFunction_ATVRGunBase_GetSecondaryHandSocket, "GetSecondaryHandSocket" }, // 207203590
		{ &Z_Construct_UFunction_ATVRGunBase_GetSecondarySlotComponent, "GetSecondarySlotComponent" }, // 421770215
		{ &Z_Construct_UFunction_ATVRGunBase_GetTriggerComponent, "GetTriggerComponent" }, // 4107956801
		{ &Z_Construct_UFunction_ATVRGunBase_GetWeaponMeshes, "GetWeaponMeshes" }, // 1239178954
		{ &Z_Construct_UFunction_ATVRGunBase_HideRearSight, "HideRearSight" }, // 1078134052
		{ &Z_Construct_UFunction_ATVRGunBase_InitMagInterface, "InitMagInterface" }, // 2178186020
		{ &Z_Construct_UFunction_ATVRGunBase_IsBoltReleasePressed, "IsBoltReleasePressed" }, // 4136585955
		{ &Z_Construct_UFunction_ATVRGunBase_IsGrippedAtPrimaryGrip, "IsGrippedAtPrimaryGrip" }, // 3997169486
		{ &Z_Construct_UFunction_ATVRGunBase_IsMagReleasePressed, "IsMagReleasePressed" }, // 2528046793
		{ &Z_Construct_UFunction_ATVRGunBase_LockBoltIfNecessary, "LockBoltIfNecessary" }, // 684070336
		{ &Z_Construct_UFunction_ATVRGunBase_OnBarrelChanged, "OnBarrelChanged" }, // 2023190919
		{ &Z_Construct_UFunction_ATVRGunBase_OnBoltReleasePressed, "OnBoltReleasePressed" }, // 4047247415
		{ &Z_Construct_UFunction_ATVRGunBase_OnBoltReleaseReleased, "OnBoltReleaseReleased" }, // 880131020
		{ &Z_Construct_UFunction_ATVRGunBase_OnCartridgeSpent, "OnCartridgeSpent" }, // 1487631896
		{ &Z_Construct_UFunction_ATVRGunBase_OnChamberRound, "OnChamberRound" }, // 1472384117
		{ &Z_Construct_UFunction_ATVRGunBase_OnColorVariantChanged, "OnColorVariantChanged" }, // 2221473490
		{ &Z_Construct_UFunction_ATVRGunBase_OnEjectRound, "OnEjectRound" }, // 3703243883
		{ &Z_Construct_UFunction_ATVRGunBase_OnEmpty, "OnEmpty" }, // 3523787949
		{ &Z_Construct_UFunction_ATVRGunBase_OnEndFiringCycle, "OnEndFiringCycle" }, // 3579132718
		{ &Z_Construct_UFunction_ATVRGunBase_OnFire, "OnFire" }, // 2986257809
		{ &Z_Construct_UFunction_ATVRGunBase_OnMagReleasePressed, "OnMagReleasePressed" }, // 2848230651
		{ &Z_Construct_UFunction_ATVRGunBase_OnMagReleaseReleased, "OnMagReleaseReleased" }, // 3931648560
		{ &Z_Construct_UFunction_ATVRGunBase_OnOpenDustCover, "OnOpenDustCover" }, // 2196038315
		{ &Z_Construct_UFunction_ATVRGunBase_OnPhysicsHit, "OnPhysicsHit" }, // 1405677273
		{ &Z_Construct_UFunction_ATVRGunBase_OnSimulateBoltClosed, "OnSimulateBoltClosed" }, // 3065039568
		{ &Z_Construct_UFunction_ATVRGunBase_OnStartFire, "OnStartFire" }, // 747575753
		{ &Z_Construct_UFunction_ATVRGunBase_OnStopFire, "OnStopFire" }, // 1621532820
		{ &Z_Construct_UFunction_ATVRGunBase_SetBoltMesh, "SetBoltMesh" }, // 2392242129
		{ &Z_Construct_UFunction_ATVRGunBase_SetCollisionProfile, "SetCollisionProfile" }, // 1263011820
		{ &Z_Construct_UFunction_ATVRGunBase_SetColorVariant, "SetColorVariant" }, // 2022046478
		{ &Z_Construct_UFunction_ATVRGunBase_ShouldLockBolt, "ShouldLockBolt" }, // 1485864915
		{ &Z_Construct_UFunction_ATVRGunBase_ToggleLaser, "ToggleLaser" }, // 368389021
		{ &Z_Construct_UFunction_ATVRGunBase_ToggleLight, "ToggleLight" }, // 199431831
		{ &Z_Construct_UFunction_ATVRGunBase_UnlockBoltIfNecessary, "UnlockBoltIfNecessary" }, // 2770791950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapon/TVRGunBase.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TriggerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "Comment", "/** Primary Trigger Component for shooting */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Primary Trigger Component for shooting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TriggerComponent = { "TriggerComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, TriggerComponent), Z_Construct_UClass_UTVRTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TriggerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TriggerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_FiringComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_FiringComponent = { "FiringComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, FiringComponent), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_FiringComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_FiringComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunManipulationAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunManipulationAudioComponent = { "GunManipulationAudioComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, GunManipulationAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunManipulationAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunManipulationAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MovablePartsMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MovablePartsMesh = { "MovablePartsMesh", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, MovablePartsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MovablePartsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MovablePartsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorAudio_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorAudio = { "SelectorAudio", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, SelectorAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SecondaryController_MetaData[] = {
		{ "Comment", "/** Current Secondary Grip Controller */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Current Secondary Grip Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SecondaryController = { "SecondaryController", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, SecondaryController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SecondaryController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SecondaryController_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes_Inner = { "GunMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes = { "GunMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, GunMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMesh = { "BoltMesh", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_EjectionPort_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_EjectionPort = { "EjectionPort", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, EjectionPort), Z_Construct_UClass_UTVREjectionPort_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_EjectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_EjectionPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ChargingHandleInterface_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ChargingHandleInterface = { "ChargingHandleInterface", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, ChargingHandleInterface), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ChargingHandleInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ChargingHandleInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandStiffness_MetaData[] = {
		{ "Category", "Gun|Grip|OneHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandStiffness = { "OneHandStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, OneHandStiffness), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandDamping_MetaData[] = {
		{ "Category", "Gun|Grip|OneHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandDamping = { "OneHandDamping", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, OneHandDamping), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularStiffness_MetaData[] = {
		{ "Category", "Gun|Grip|OneHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularStiffness = { "OneHandAngularStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, OneHandAngularStiffness), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularDamping_MetaData[] = {
		{ "Category", "Gun|Grip|OneHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularDamping = { "OneHandAngularDamping", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, OneHandAngularDamping), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandStiffness_MetaData[] = {
		{ "Category", "Gun|Grip|TwoHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandStiffness = { "TwoHandStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, TwoHandStiffness), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandDamping_MetaData[] = {
		{ "Category", "Gun|Grip|TwoHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandDamping = { "TwoHandDamping", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, TwoHandDamping), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularStiffness_MetaData[] = {
		{ "Category", "Gun|Grip|TwoHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularStiffness = { "TwoHandAngularStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, TwoHandAngularStiffness), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularDamping_MetaData[] = {
		{ "Category", "Gun|Grip|TwoHand" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularDamping = { "TwoHandAngularDamping", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, TwoHandAngularDamping), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SpawnMagazineOverride_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SpawnMagazineOverride = { "SpawnMagazineOverride", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, SpawnMagazineOverride), Z_Construct_UClass_ATVRMagazine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SpawnMagazineOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SpawnMagazineOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile_MetaData[] = {
		{ "Category", "Weapon Attachments" },
		{ "Comment", "/** little hack to force the blueprint to recompile */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "little hack to force the blueprint to recompile" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bForceRecompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile = { "bForceRecompile", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_LoadedBullet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_LoadedBullet = { "LoadedBullet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, LoadedBullet), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_LoadedBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_LoadedBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GripScript_MetaData[] = {
		{ "Category", "Gripping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GripScript = { "GripScript", nullptr, (EPropertyFlags)0x002208000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, GripScript), Z_Construct_UClass_UGS_GunTools_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GripScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GripScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgress_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgress = { "BoltProgress", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltProgress), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMovePct_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMovePct = { "BoltMovePct", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltMovePct), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMovePct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMovePct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bIsBoltLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked = { "bIsBoltLocked", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bBoltReleasePressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed = { "bBoltReleasePressed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorSound_MetaData[] = {
		{ "Category", "Gun|Sound" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorSound = { "SelectorSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, SelectorSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen_MetaData[] = {
		{ "Category", "Gun|Features" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bHasLastRoundBoltHoldOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen = { "bHasLastRoundBoltHoldOpen", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip_MetaData[] = {
		{ "Category", "Gun|Features" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bHasMagReleaseOnPrimaryGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip = { "bHasMagReleaseOnPrimaryGrip", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip_MetaData[] = {
		{ "Category", "Gun|Features" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bHasBoltReleaseNearPrimaryGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip = { "bHasBoltReleaseNearPrimaryGrip", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle_MetaData[] = {
		{ "Category", "Gun|Features" },
		{ "Comment", "/**\n\x09 * Whether our gun cycless automatically. Leave on true for Automatic or Halfautomatic weapons\n\x09 * Set to false for Pump-Action or Bolt-Action, or anything that requires manual cycling\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Whether our gun cycless automatically. Leave on true for Automatic or Halfautomatic weapons\nSet to false for Pump-Action or Bolt-Action, or anything that requires manual cycling" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bDoesCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle = { "bDoesCycle", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "/** Type of gun. Used mainly for sorting. */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "Type of gun. Used mainly for sorting." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType = { "GunType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, GunType), Z_Construct_UEnum_TacticalVRCore_ETVRGunType, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "/** best used for pistols or other single hand weapons */" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
		{ "ToolTip", "best used for pistols or other single hand weapons" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bHandSwapToPrimaryGripSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot = { "bHandSwapToPrimaryGripSlot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MagInterface_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MagInterface = { "MagInterface", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, MagInterface), Z_Construct_UClass_UTVRMagazineCompInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MagInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MagInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilImpulse_MetaData[] = {
		{ "Category", "Gun|Recoil" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilImpulse = { "RecoilImpulse", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, RecoilImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilAngularImpulse_MetaData[] = {
		{ "Category", "Gun|Recoil" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilAngularImpulse = { "RecoilAngularImpulse", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, RecoilAngularImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilAngularImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilAngularImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilReductionTwoHand_MetaData[] = {
		{ "Category", "Gun|Recoil" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilReductionTwoHand = { "RecoilReductionTwoHand", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, RecoilReductionTwoHand), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilReductionTwoHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilReductionTwoHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_HapticFeedback_Fire_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_HapticFeedback_Fire = { "HapticFeedback_Fire", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, HapticFeedback_Fire), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_HapticFeedback_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_HapticFeedback_Fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressOpenDustCover_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressOpenDustCover = { "BoltProgressOpenDustCover", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltProgressOpenDustCover), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressOpenDustCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressOpenDustCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressEjectRound_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressEjectRound = { "BoltProgressEjectRound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltProgressEjectRound), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressEjectRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressEjectRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressFeedRound_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressFeedRound = { "BoltProgressFeedRound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltProgressFeedRound), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressFeedRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressFeedRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStiffness_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStiffness = { "BoltStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltStiffness), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStroke_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStroke = { "BoltStroke", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltStroke), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStroke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStroke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressHammerCocked_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressHammerCocked = { "BoltProgressHammerCocked", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, BoltProgressHammerCocked), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressHammerCocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressHammerCocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction_MetaData[] = {
		{ "Category", "Gun|Bolt" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction_SetBit(void* Obj)
	{
		((ATVRGunBase*)Obj)->bHammerDoubleAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction = { "bHammerDoubleAction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGunBase), &Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ColorVariant_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapon/TVRGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ColorVariant = { "ColorVariant", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGunBase, ColorVariant), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ColorVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ColorVariant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRGunBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TriggerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_FiringComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunManipulationAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MovablePartsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SecondaryController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_EjectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ChargingHandleInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_OneHandAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_TwoHandAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SpawnMagazineOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bForceRecompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_LoadedBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GripScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltMovePct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bIsBoltLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bBoltReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_SelectorSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasLastRoundBoltHoldOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasMagReleaseOnPrimaryGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHasBoltReleaseNearPrimaryGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bDoesCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_GunType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHandSwapToPrimaryGripSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_MagInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilAngularImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_RecoilReductionTwoHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_HapticFeedback_Fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressOpenDustCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressEjectRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressFeedRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltStroke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_BoltProgressHammerCocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_bHammerDoubleAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGunBase_Statics::NewProp_ColorVariant,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATVRGunBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRHandSocketInterface_NoRegister, (int32)VTABLE_OFFSET(ATVRGunBase, ITVRHandSocketInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRGunBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRGunBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRGunBase_Statics::ClassParams = {
		&ATVRGunBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRGunBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRGunBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGunBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRGunBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRGunBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRGunBase, 3315769859);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRGunBase>()
	{
		return ATVRGunBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRGunBase(Z_Construct_UClass_ATVRGunBase, &ATVRGunBase::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRGunBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRGunBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
