// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/TVRGraspingHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGraspingHand() {}
// Cross Module References
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_EHandAnimState();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ECurlDirection();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETriggerIndices();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGraspingHand_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGraspingHand();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UNoRepSphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
// End Cross Module References
	static UEnum* EHandAnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_EHandAnimState, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("EHandAnimState"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<EHandAnimState>()
	{
		return EHandAnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandAnimState(EHandAnimState_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("EHandAnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_EHandAnimState_Hash() { return 3214891215U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_EHandAnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandAnimState"), 0, Get_Z_Construct_UEnum_TacticalVRCore_EHandAnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandAnimState::Animated", (int64)EHandAnimState::Animated },
				{ "EHandAnimState::Dynamic", (int64)EHandAnimState::Dynamic },
				{ "EHandAnimState::Frozen", (int64)EHandAnimState::Frozen },
				{ "EHandAnimState::Custom", (int64)EHandAnimState::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animated.Name", "EHandAnimState::Animated" },
				{ "BlueprintType", "true" },
				{ "Custom.Name", "EHandAnimState::Custom" },
				{ "Dynamic.Name", "EHandAnimState::Dynamic" },
				{ "Frozen.Name", "EHandAnimState::Frozen" },
				{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"EHandAnimState",
				"EHandAnimState",
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
	static UEnum* ECurlDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ECurlDirection, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ECurlDirection"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ECurlDirection>()
	{
		return ECurlDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurlDirection(ECurlDirection_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ECurlDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ECurlDirection_Hash() { return 2952494664U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ECurlDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurlDirection"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ECurlDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurlDirection::None", (int64)ECurlDirection::None },
				{ "ECurlDirection::Forward", (int64)ECurlDirection::Forward },
				{ "ECurlDirection::Reverse", (int64)ECurlDirection::Reverse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Forward.Name", "ECurlDirection::Forward" },
				{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
				{ "None.Name", "ECurlDirection::None" },
				{ "Reverse.Name", "ECurlDirection::Reverse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ECurlDirection",
				"ECurlDirection",
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
	static UEnum* ETriggerIndices_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETriggerIndices, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETriggerIndices"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETriggerIndices>()
	{
		return ETriggerIndices_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerIndices(ETriggerIndices_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETriggerIndices"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETriggerIndices_Hash() { return 4200965261U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETriggerIndices()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerIndices"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETriggerIndices_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerIndices::Thumb3", (int64)ETriggerIndices::Thumb3 },
				{ "ETriggerIndices::Thumb2", (int64)ETriggerIndices::Thumb2 },
				{ "ETriggerIndices::Index3", (int64)ETriggerIndices::Index3 },
				{ "ETriggerIndices::Index2", (int64)ETriggerIndices::Index2 },
				{ "ETriggerIndices::Middle3", (int64)ETriggerIndices::Middle3 },
				{ "ETriggerIndices::Middle2", (int64)ETriggerIndices::Middle2 },
				{ "ETriggerIndices::Ring3", (int64)ETriggerIndices::Ring3 },
				{ "ETriggerIndices::Ring2", (int64)ETriggerIndices::Ring2 },
				{ "ETriggerIndices::Pinky3", (int64)ETriggerIndices::Pinky3 },
				{ "ETriggerIndices::Pinky2", (int64)ETriggerIndices::Pinky2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index2.Name", "ETriggerIndices::Index2" },
				{ "Index3.Name", "ETriggerIndices::Index3" },
				{ "Middle2.Name", "ETriggerIndices::Middle2" },
				{ "Middle3.Name", "ETriggerIndices::Middle3" },
				{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
				{ "Pinky2.Name", "ETriggerIndices::Pinky2" },
				{ "Pinky3.Name", "ETriggerIndices::Pinky3" },
				{ "Ring2.Name", "ETriggerIndices::Ring2" },
				{ "Ring3.Name", "ETriggerIndices::Ring3" },
				{ "Thumb2.Name", "ETriggerIndices::Thumb2" },
				{ "Thumb3.Name", "ETriggerIndices::Thumb3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETriggerIndices",
				"ETriggerIndices",
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
	DEFINE_FUNCTION(ATVRGraspingHand::execOnPinky02EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPinky02EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnPinky02BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPinky02BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnPinky03EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPinky03EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnPinky03BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPinky03BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnRing02EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRing02EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnRing02BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRing02BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnRing03EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRing03EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnRing03BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRing03BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnMiddle02EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiddle02EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnMiddle02BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiddle02BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnMiddle03EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiddle03EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnMiddle03BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiddle03BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnIndex02EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIndex02EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnIndex02BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIndex02BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnIndex03EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIndex03EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnIndex03BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIndex03BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnThumb02EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThumb02EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnThumb02BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThumb02BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnThumb03EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThumb03EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnThumb03BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bBlockingHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThumb03BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bBlockingHit,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execClearFingers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFingers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execSetFingerCollisions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFingerCollisions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execSetupPhysicsIfNeededNative)
	{
		P_GET_UBOOL(Z_Param_bSimulate);
		P_GET_UBOOL(Z_Param_bSetRelativeTrans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPhysicsIfNeededNative(Z_Param_bSimulate,Z_Param_bSetRelativeTrans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execStopLerpHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLerpHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execStartLerpHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLerpHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnOwnerTeleported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerTeleported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnSecondaryAddedOnOther)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryAddedOnOther(Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnSecondaryRemovedOnOther)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryRemovedOnOther(Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnDroppedObject)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDroppedObject(Z_Param_Out_GripInfo,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execOnGrippedObject)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrippedObject(Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execSetFingerOverlaps)
	{
		P_GET_UBOOL(Z_Param_bEnableOverlaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFingerOverlaps(Z_Param_bEnableOverlaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execGetOwnerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATVRCharacter**)Z_Param__Result=P_THIS->GetOwnerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRGraspingHand::execInitPhysics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitPhysics();
		P_NATIVE_END;
	}
	static FName NAME_ATVRGraspingHand_BPSetFingerCollisions = FName(TEXT("BPSetFingerCollisions"));
	void ATVRGraspingHand::BPSetFingerCollisions()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGraspingHand_BPSetFingerCollisions),NULL);
	}
	static FName NAME_ATVRGraspingHand_GetPhysicalAnimation = FName(TEXT("GetPhysicalAnimation"));
	UVREPhysicalAnimationComponent* ATVRGraspingHand::GetPhysicalAnimation() const
	{
		TVRGraspingHand_eventGetPhysicalAnimation_Parms Parms;
		const_cast<ATVRGraspingHand*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGraspingHand_GetPhysicalAnimation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGraspingHand_GetRootPhysics = FName(TEXT("GetRootPhysics"));
	UPrimitiveComponent* ATVRGraspingHand::GetRootPhysics() const
	{
		TVRGraspingHand_eventGetRootPhysics_Parms Parms;
		const_cast<ATVRGraspingHand*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGraspingHand_GetRootPhysics),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGraspingHand_GetSimulatingHandConstraint = FName(TEXT("GetSimulatingHandConstraint"));
	UVREPhysicsConstraintComponent* ATVRGraspingHand::GetSimulatingHandConstraint() const
	{
		TVRGraspingHand_eventGetSimulatingHandConstraint_Parms Parms;
		const_cast<ATVRGraspingHand*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRGraspingHand_GetSimulatingHandConstraint),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRGraspingHand_PostHandleGripped = FName(TEXT("PostHandleGripped"));
	void ATVRGraspingHand::PostHandleGripped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRGraspingHand_PostHandleGripped),NULL);
	}
	void ATVRGraspingHand::StaticRegisterNativesATVRGraspingHand()
	{
		UClass* Class = ATVRGraspingHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFingers", &ATVRGraspingHand::execClearFingers },
			{ "GetOwnerCharacter", &ATVRGraspingHand::execGetOwnerCharacter },
			{ "InitPhysics", &ATVRGraspingHand::execInitPhysics },
			{ "OnDroppedObject", &ATVRGraspingHand::execOnDroppedObject },
			{ "OnGrippedObject", &ATVRGraspingHand::execOnGrippedObject },
			{ "OnIndex02BeginOverlap", &ATVRGraspingHand::execOnIndex02BeginOverlap },
			{ "OnIndex02EndOverlap", &ATVRGraspingHand::execOnIndex02EndOverlap },
			{ "OnIndex03BeginOverlap", &ATVRGraspingHand::execOnIndex03BeginOverlap },
			{ "OnIndex03EndOverlap", &ATVRGraspingHand::execOnIndex03EndOverlap },
			{ "OnMiddle02BeginOverlap", &ATVRGraspingHand::execOnMiddle02BeginOverlap },
			{ "OnMiddle02EndOverlap", &ATVRGraspingHand::execOnMiddle02EndOverlap },
			{ "OnMiddle03BeginOverlap", &ATVRGraspingHand::execOnMiddle03BeginOverlap },
			{ "OnMiddle03EndOverlap", &ATVRGraspingHand::execOnMiddle03EndOverlap },
			{ "OnOwnerTeleported", &ATVRGraspingHand::execOnOwnerTeleported },
			{ "OnPinky02BeginOverlap", &ATVRGraspingHand::execOnPinky02BeginOverlap },
			{ "OnPinky02EndOverlap", &ATVRGraspingHand::execOnPinky02EndOverlap },
			{ "OnPinky03BeginOverlap", &ATVRGraspingHand::execOnPinky03BeginOverlap },
			{ "OnPinky03EndOverlap", &ATVRGraspingHand::execOnPinky03EndOverlap },
			{ "OnRing02BeginOverlap", &ATVRGraspingHand::execOnRing02BeginOverlap },
			{ "OnRing02EndOverlap", &ATVRGraspingHand::execOnRing02EndOverlap },
			{ "OnRing03BeginOverlap", &ATVRGraspingHand::execOnRing03BeginOverlap },
			{ "OnRing03EndOverlap", &ATVRGraspingHand::execOnRing03EndOverlap },
			{ "OnSecondaryAddedOnOther", &ATVRGraspingHand::execOnSecondaryAddedOnOther },
			{ "OnSecondaryRemovedOnOther", &ATVRGraspingHand::execOnSecondaryRemovedOnOther },
			{ "OnThumb02BeginOverlap", &ATVRGraspingHand::execOnThumb02BeginOverlap },
			{ "OnThumb02EndOverlap", &ATVRGraspingHand::execOnThumb02EndOverlap },
			{ "OnThumb03BeginOverlap", &ATVRGraspingHand::execOnThumb03BeginOverlap },
			{ "OnThumb03EndOverlap", &ATVRGraspingHand::execOnThumb03EndOverlap },
			{ "SetFingerCollisions", &ATVRGraspingHand::execSetFingerCollisions },
			{ "SetFingerOverlaps", &ATVRGraspingHand::execSetFingerOverlaps },
			{ "SetupPhysicsIfNeededNative", &ATVRGraspingHand::execSetupPhysicsIfNeededNative },
			{ "StartLerpHand", &ATVRGraspingHand::execStartLerpHand },
			{ "StopLerpHand", &ATVRGraspingHand::execStopLerpHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "BPSetFingerCollisions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "ClearFingers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_ClearFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_ClearFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics
	{
		struct TVRGraspingHand_eventGetOwnerCharacter_Parms
		{
			ATVRCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventGetOwnerCharacter_Parms, ReturnValue), Z_Construct_UClass_ATVRCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "GetOwnerCharacter", nullptr, nullptr, sizeof(TVRGraspingHand_eventGetOwnerCharacter_Parms), Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventGetPhysicalAnimation_Parms, ReturnValue), Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "GetPhysicalAnimation", nullptr, nullptr, sizeof(TVRGraspingHand_eventGetPhysicalAnimation_Parms), Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventGetRootPhysics_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "GetRootPhysics", nullptr, nullptr, sizeof(TVRGraspingHand_eventGetRootPhysics_Parms), Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventGetSimulatingHandConstraint_Parms, ReturnValue), Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "GetSimulatingHandConstraint", nullptr, nullptr, sizeof(TVRGraspingHand_eventGetSimulatingHandConstraint_Parms), Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "Comment", "/**\n\x09 * Initializes physics related things, like tick order, etc.\n\x09 * Called during delayed begin play\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Initializes physics related things, like tick order, etc.\nCalled during delayed begin play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "InitPhysics", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_InitPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_InitPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics
	{
		struct TVRGraspingHand_eventOnDroppedObject_Parms
		{
			FBPActorGripInformation GripInfo;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnDroppedObject_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_GripInfo_MetaData)) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnDroppedObject_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnDroppedObject_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_GripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnDroppedObject", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnDroppedObject_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics
	{
		struct TVRGraspingHand_eventOnGrippedObject_Parms
		{
			FBPActorGripInformation GripInfo;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnGrippedObject_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnGrippedObject", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnGrippedObject_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnIndex02BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnIndex02BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnIndex02BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnIndex02BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnIndex02EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex02EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnIndex02EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnIndex02EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnIndex03BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnIndex03BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnIndex03BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnIndex03BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnIndex03EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnIndex03EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnIndex03EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnIndex03EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnMiddle02BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnMiddle02BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnMiddle02EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle02EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnMiddle02EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnMiddle02EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnMiddle03BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnMiddle03BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnMiddle03EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnMiddle03EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnMiddle03EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnMiddle03EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnOwnerTeleported", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnPinky02BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnPinky02BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnPinky02BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnPinky02BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnPinky02EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky02EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnPinky02EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnPinky02EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnPinky03BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnPinky03BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnPinky03BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnPinky03BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnPinky03EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnPinky03EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnPinky03EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnPinky03EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnRing02BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnRing02BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnRing02BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnRing02BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnRing02BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnRing02EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing02EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnRing02EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnRing02EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnRing03BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnRing03BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnRing03BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnRing03BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnRing03BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnRing03EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnRing03EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnRing03EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnRing03EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics
	{
		struct TVRGraspingHand_eventOnSecondaryAddedOnOther_Parms
		{
			FBPActorGripInformation GripInfo;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnSecondaryAddedOnOther_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnSecondaryAddedOnOther", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnSecondaryAddedOnOther_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics
	{
		struct TVRGraspingHand_eventOnSecondaryRemovedOnOther_Parms
		{
			FBPActorGripInformation GripInfo;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnSecondaryRemovedOnOther_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnSecondaryRemovedOnOther", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnSecondaryRemovedOnOther_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnThumb02BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnThumb02BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnThumb02BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnThumb02BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnThumb02EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb02EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnThumb02EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnThumb02EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics
	{
		struct TVRGraspingHand_eventOnThumb03BeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bBlockingHit;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventOnThumb03BeginOverlap_Parms*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms), &Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnThumb03BeginOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnThumb03BeginOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics
	{
		struct TVRGraspingHand_eventOnThumb03EndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGraspingHand_eventOnThumb03EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "OnThumb03EndOverlap", nullptr, nullptr, sizeof(TVRGraspingHand_eventOnThumb03EndOverlap_Parms), Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "PostHandleGripped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "SetFingerCollisions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics
	{
		struct TVRGraspingHand_eventSetFingerOverlaps_Parms
		{
			bool bEnableOverlaps;
		};
		static void NewProp_bEnableOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOverlaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::NewProp_bEnableOverlaps_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventSetFingerOverlaps_Parms*)Obj)->bEnableOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::NewProp_bEnableOverlaps = { "bEnableOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventSetFingerOverlaps_Parms), &Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::NewProp_bEnableOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::NewProp_bEnableOverlaps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "SetFingerOverlaps", nullptr, nullptr, sizeof(TVRGraspingHand_eventSetFingerOverlaps_Parms), Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics
	{
		struct TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms
		{
			bool bSimulate;
			bool bSetRelativeTrans;
		};
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static void NewProp_bSetRelativeTrans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetRelativeTrans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms), &Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSetRelativeTrans_SetBit(void* Obj)
	{
		((TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms*)Obj)->bSetRelativeTrans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSetRelativeTrans = { "bSetRelativeTrans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms), &Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSetRelativeTrans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::NewProp_bSetRelativeTrans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "SetupPhysicsIfNeededNative", nullptr, nullptr, sizeof(TVRGraspingHand_eventSetupPhysicsIfNeededNative_Parms), Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "Comment", "/**\n\x09 * Start Lerping Hand\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Start Lerping Hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "StartLerpHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand" },
		{ "Comment", "/**\n\x09 * Stops Lerping Hand\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Stops Lerping Hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRGraspingHand, nullptr, "StopLerpHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRGraspingHand_NoRegister()
	{
		return ATVRGraspingHand::StaticClass();
	}
	struct Z_Construct_UClass_ATVRGraspingHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCurls_MetaData[];
#endif
		static void NewProp_bUseCurls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCurls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPhysicalHand_MetaData[];
#endif
		static void NewProp_bIsPhysicalHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPhysicalHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsRoot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandAnimState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandAnimState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTriggerTouched_MetaData[];
#endif
		static void NewProp_bIsTriggerTouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTriggerTouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerPress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerPress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraspID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GraspID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGripping_MetaData[];
#endif
		static void NewProp_bIsGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGripping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginLerpTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeginLerpTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalGripTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalGripTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurlSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurlSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHadCurled_MetaData[];
#endif
		static void NewProp_bHadCurled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadCurled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCustomAnimation_MetaData[];
#endif
		static void NewProp_bHasCustomAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCustomAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomAnimIsSnapShot_MetaData[];
#endif
		static void NewProp_bCustomAnimIsSnapShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomAnimIsSnapShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocketComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSocketComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FingerCollisionZones_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerCollisionZones_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerCollisionZones_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerCollisionZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingerCollisionZones;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FingersBlocked_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingersBlocked_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingersBlocked_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersBlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingersBlocked;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerFlex_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerFlex_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerFlex_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerFlex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingerFlex;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FingersOverlapping_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingersOverlapping_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingersOverlapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingersOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandBoneLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandBoneLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPoseComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandPoseComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRGraspingHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRGraspingHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRGraspingHand_BPSetFingerCollisions, "BPSetFingerCollisions" }, // 1429048914
		{ &Z_Construct_UFunction_ATVRGraspingHand_ClearFingers, "ClearFingers" }, // 2990400637
		{ &Z_Construct_UFunction_ATVRGraspingHand_GetOwnerCharacter, "GetOwnerCharacter" }, // 213141278
		{ &Z_Construct_UFunction_ATVRGraspingHand_GetPhysicalAnimation, "GetPhysicalAnimation" }, // 245525851
		{ &Z_Construct_UFunction_ATVRGraspingHand_GetRootPhysics, "GetRootPhysics" }, // 1776085061
		{ &Z_Construct_UFunction_ATVRGraspingHand_GetSimulatingHandConstraint, "GetSimulatingHandConstraint" }, // 710011410
		{ &Z_Construct_UFunction_ATVRGraspingHand_InitPhysics, "InitPhysics" }, // 2578404971
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnDroppedObject, "OnDroppedObject" }, // 3208502786
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnGrippedObject, "OnGrippedObject" }, // 2745225359
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnIndex02BeginOverlap, "OnIndex02BeginOverlap" }, // 3012816608
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnIndex02EndOverlap, "OnIndex02EndOverlap" }, // 2708812566
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnIndex03BeginOverlap, "OnIndex03BeginOverlap" }, // 1666474337
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnIndex03EndOverlap, "OnIndex03EndOverlap" }, // 2579906658
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02BeginOverlap, "OnMiddle02BeginOverlap" }, // 3689240271
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle02EndOverlap, "OnMiddle02EndOverlap" }, // 98691082
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03BeginOverlap, "OnMiddle03BeginOverlap" }, // 994727005
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnMiddle03EndOverlap, "OnMiddle03EndOverlap" }, // 2360466065
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnOwnerTeleported, "OnOwnerTeleported" }, // 4004910142
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnPinky02BeginOverlap, "OnPinky02BeginOverlap" }, // 1942924435
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnPinky02EndOverlap, "OnPinky02EndOverlap" }, // 1004926936
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnPinky03BeginOverlap, "OnPinky03BeginOverlap" }, // 1408243158
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnPinky03EndOverlap, "OnPinky03EndOverlap" }, // 2056860470
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnRing02BeginOverlap, "OnRing02BeginOverlap" }, // 2558455136
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnRing02EndOverlap, "OnRing02EndOverlap" }, // 2409584027
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnRing03BeginOverlap, "OnRing03BeginOverlap" }, // 2467041642
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnRing03EndOverlap, "OnRing03EndOverlap" }, // 256866308
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryAddedOnOther, "OnSecondaryAddedOnOther" }, // 3230922267
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnSecondaryRemovedOnOther, "OnSecondaryRemovedOnOther" }, // 3755305110
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnThumb02BeginOverlap, "OnThumb02BeginOverlap" }, // 822627668
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnThumb02EndOverlap, "OnThumb02EndOverlap" }, // 1358733601
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnThumb03BeginOverlap, "OnThumb03BeginOverlap" }, // 3052438534
		{ &Z_Construct_UFunction_ATVRGraspingHand_OnThumb03EndOverlap, "OnThumb03EndOverlap" }, // 328938522
		{ &Z_Construct_UFunction_ATVRGraspingHand_PostHandleGripped, "PostHandleGripped" }, // 73150488
		{ &Z_Construct_UFunction_ATVRGraspingHand_SetFingerCollisions, "SetFingerCollisions" }, // 2666041823
		{ &Z_Construct_UFunction_ATVRGraspingHand_SetFingerOverlaps, "SetFingerOverlaps" }, // 694023
		{ &Z_Construct_UFunction_ATVRGraspingHand_SetupPhysicsIfNeededNative, "SetupPhysicsIfNeededNative" }, // 3353560926
		{ &Z_Construct_UFunction_ATVRGraspingHand_StartLerpHand, "StartLerpHand" }, // 4216065468
		{ &Z_Construct_UFunction_ATVRGraspingHand_StopLerpHand, "StopLerpHand" }, // 4091488500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/TVRGraspingHand.h" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether this hand should use finger curling or not */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether this hand should use finger curling or not" },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bUseCurls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls = { "bUseCurls", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether is hand is a physical hand or not. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether is hand is a physical hand or not." },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bIsPhysicalHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand = { "bIsPhysicalHand", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The Root Bone Name of this hand. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The Root Bone Name of this hand." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, BoneName), METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The hand/controller this actor belongs to */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The hand/controller this actor belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, OwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OwningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OtherController_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The other hand of the owning character*/" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The other hand of the owning character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OtherController = { "OtherController", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, OtherController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OtherController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OtherController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_PhysicsRoot_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The current physics root, generally set by the spawning character. */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The current physics root, generally set by the spawning character." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_PhysicsRoot = { "PhysicsRoot", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, PhysicsRoot), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_PhysicsRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_PhysicsRoot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Animation state of the Hand */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Animation state of the Hand" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState = { "HandAnimState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, HandAnimState), Z_Construct_UEnum_TacticalVRCore_EHandAnimState, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_AttachmentProxy_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Proxy primitive for attachment. A bit of a workaround due to a engine bug */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Proxy primitive for attachment. A bit of a workaround due to a engine bug" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_AttachmentProxy = { "AttachmentProxy", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, AttachmentProxy), Z_Construct_UClass_UNoRepSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_AttachmentProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_AttachmentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether the trigger is touched or not. Will stay true for controllers without touch sensors on the trigger. */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether the trigger is touched or not. Will stay true for controllers without touch sensors on the trigger." },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bIsTriggerTouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched = { "bIsTriggerTouched", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TriggerPress_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Trigger axis value */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Trigger axis value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TriggerPress = { "TriggerPress", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, TriggerPress), METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TriggerPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TriggerPress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GrippedObject_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The currently gripped Object */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The currently gripped Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GrippedObject = { "GrippedObject", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, GrippedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GrippedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GrippedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GraspID_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The Grip ID of the current grip */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The Grip ID of the current grip" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GraspID = { "GraspID", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, GraspID), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GraspID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GraspID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether this object is already gripping something */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether this object is already gripping something" },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bIsGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping = { "bIsGripping", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BaseRelativeTransform_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The basic relative transform this actor needs to return to, when not attached */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The basic relative transform this actor needs to return to, when not attached" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BaseRelativeTransform = { "BaseRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, BaseRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BaseRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BaseRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BeginLerpTransform_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Transform set at the beginning of lerping */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Transform set at the beginning of lerping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BeginLerpTransform = { "BeginLerpTransform", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, BeginLerpTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BeginLerpTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BeginLerpTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OriginalGripTransform_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** The Original Grip Transform, when not attached */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "The Original Grip Transform, when not attached" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OriginalGripTransform = { "OriginalGripTransform", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, OriginalGripTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OriginalGripTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OriginalGripTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandLerpSpeed_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Lerp Speed */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Lerp Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandLerpSpeed = { "HandLerpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, HandLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CurlSpeed_MetaData[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CurlSpeed = { "CurlSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, CurlSpeed), METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CurlSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CurlSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled_MetaData[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bHadCurled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled = { "bHadCurled", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation_MetaData[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bHasCustomAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation = { "bHasCustomAnimation", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot_MetaData[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	void Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot_SetBit(void* Obj)
	{
		((ATVRGraspingHand*)Obj)->bCustomAnimIsSnapShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot = { "bCustomAnimIsSnapShot", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRGraspingHand), &Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TargetMeshTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TargetMeshTransform = { "TargetMeshTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, TargetMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TargetMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TargetMeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CustomPose_MetaData[] = {
		{ "Category", "HandSocket" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CustomPose = { "CustomPose", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, CustomPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CustomPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CustomPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandSocketComponent_MetaData[] = {
		{ "Category", "Hand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandSocketComponent = { "HandSocketComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, HandSocketComponent), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandSocketComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandSocketComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_ValueProp = { "FingerCollisionZones", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_Key_KeyProp = { "FingerCollisionZones_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TacticalVRCore_ETriggerIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Collision Capsules for the fingers */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Collision Capsules for the fingers" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones = { "FingerCollisionZones", nullptr, (EPropertyFlags)0x002008800000000c, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, FingerCollisionZones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_ValueProp = { "FingersBlocked", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_Key_KeyProp = { "FingersBlocked_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TacticalVRCore_ETriggerIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether the fingers are blocked or not */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether the fingers are blocked or not" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked = { "FingersBlocked", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, FingersBlocked), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_ValueProp = { "FingerFlex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_Key_KeyProp = { "FingerFlex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TacticalVRCore_ETriggerIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Current Flex values for fingers */" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Current Flex values for fingers" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex = { "FingerFlex", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, FingerFlex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_ValueProp = { "FingersOverlapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_Key_KeyProp = { "FingersOverlapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TacticalVRCore_ETriggerIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "/** Whether fingers are overlapping something or not*/" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "Whether fingers are overlapping something or not" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping = { "FingersOverlapping", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, FingersOverlapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandBoneLoc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hand" },
		{ "Comment", "/** A component that marks the location a hand bone needs to be set to */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
		{ "ToolTip", "A component that marks the location a hand bone needs to be set to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandBoneLoc = { "HandBoneLoc", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, HandBoneLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandBoneLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandBoneLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandPoseComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Hand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRGraspingHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandPoseComp = { "HandPoseComp", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRGraspingHand, HandPoseComp), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandPoseComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandPoseComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRGraspingHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bUseCurls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsPhysicalHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OtherController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_PhysicsRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandAnimState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_AttachmentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsTriggerTouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TriggerPress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GrippedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_GraspID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bIsGripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BaseRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_BeginLerpTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_OriginalGripTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CurlSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHadCurled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bHasCustomAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_bCustomAnimIsSnapShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_TargetMeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_CustomPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandSocketComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerCollisionZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingerFlex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_FingersOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandBoneLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRGraspingHand_Statics::NewProp_HandPoseComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRGraspingHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRGraspingHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRGraspingHand_Statics::ClassParams = {
		&ATVRGraspingHand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRGraspingHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRGraspingHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRGraspingHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRGraspingHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRGraspingHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRGraspingHand, 2843153040);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRGraspingHand>()
	{
		return ATVRGraspingHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRGraspingHand(Z_Construct_UClass_ATVRGraspingHand, &ATVRGraspingHand::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRGraspingHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRGraspingHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
