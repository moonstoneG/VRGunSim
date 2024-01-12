// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Player/TVRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRCharacter() {}
// Cross Module References
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETurnDirection();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGrabObjectInfo();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCharacter_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREquipmentPoint_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_APauseMenuActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRGraspingHand_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ETurnDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETurnDirection, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETurnDirection"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETurnDirection>()
	{
		return ETurnDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurnDirection(ETurnDirection_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETurnDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETurnDirection_Hash() { return 487944120U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETurnDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurnDirection"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETurnDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurnDirection::Left", (int64)ETurnDirection::Left },
				{ "ETurnDirection::Right", (int64)ETurnDirection::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Turn Direction enum to improve code readability */" },
				{ "Left.Name", "ETurnDirection::Left" },
				{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
				{ "Right.Name", "ETurnDirection::Right" },
				{ "ToolTip", "Turn Direction enum to improve code readability" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETurnDirection",
				"ETurnDirection",
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
class UScriptStruct* FGrabObjectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TACTICALVRCORE_API uint32 Get_Z_Construct_UScriptStruct_FGrabObjectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrabObjectInfo, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("GrabObjectInfo"), sizeof(FGrabObjectInfo), Get_Z_Construct_UScriptStruct_FGrabObjectInfo_Hash());
	}
	return Singleton;
}
template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<FGrabObjectInfo>()
{
	return FGrabObjectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrabObjectInfo(FGrabObjectInfo::StaticStruct, TEXT("/Script/TacticalVRCore"), TEXT("GrabObjectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TacticalVRCore_StaticRegisterNativesFGrabObjectInfo
{
	FScriptStruct_TacticalVRCore_StaticRegisterNativesFGrabObjectInfo()
	{
		UScriptStruct::DeferCppStructOps<FGrabObjectInfo>(FName(TEXT("GrabObjectInfo")));
	}
} ScriptStruct_TacticalVRCore_StaticRegisterNativesFGrabObjectInfo;
	struct Z_Construct_UScriptStruct_FGrabObjectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct that stores information about a object to be grabbed.\n * Mostly used to pass the data through the functions involved in\n * processing the grabbing logic, so that it is reduced to only one reference\n * instead of multiple references of variables.\n */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Struct that stores information about a object to be grabbed.\nMostly used to pass the data through the functions involved in\nprocessing the grabbing logic, so that it is reduced to only one reference\ninstead of multiple references of variables." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrabObjectInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
		nullptr,
		&NewStructOps,
		"GrabObjectInfo",
		sizeof(FGrabObjectInfo),
		alignof(FGrabObjectInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrabObjectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrabObjectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrabObjectInfo"), sizeof(FGrabObjectInfo), Get_Z_Construct_UScriptStruct_FGrabObjectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGrabObjectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrabObjectInfo_Hash() { return 1310968526U; }
	DEFINE_FUNCTION(ATVRCharacter::execOnCycleFireMode_Right)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCycleFireMode_Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnCycleFireMode_Left)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCycleFireMode_Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnBoltReleaseReleased_Right)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleaseReleased_Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnBoltReleasePressed_Right)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleasePressed_Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnBoltReleaseReleased_Left)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleaseReleased_Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnBoltReleasePressed_Left)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoltReleasePressed_Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnMagReleaseReleased_Right)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleaseReleased_Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnMagReleasePressed_Right)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleasePressed_Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnMagReleaseReleased_Left)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleaseReleased_Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnMagReleasePressed_Left)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMagReleasePressed_Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execTryClosePauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryClosePauseMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOpenPauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPauseMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnGrippedObjectRight)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrippedObjectRight(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnGrippedObjectLeft)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrippedObjectLeft(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execGetFilteredHandVelocity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelocity);
		P_GET_ENUM(EControllerHand,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFilteredHandVelocity(Z_Param_Out_OutVelocity,EControllerHand(Z_Param_HandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execServerTryDropObject)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_AngleVel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_TransVel);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripHash);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTryDropObject_Validate(Z_Param_MotionController,Z_Param_AngleVel,Z_Param_TransVel,Z_Param_GripHash))
		{
			RPC_ValidateFailed(TEXT("ServerTryDropObject_Validate"));
			return;
		}
		P_THIS->ServerTryDropObject_Implementation(Z_Param_MotionController,Z_Param_AngleVel,Z_Param_TransVel,Z_Param_GripHash);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execLocalTryDropObject)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngleVel);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TransVel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LocalTryDropObject(Z_Param_MotionController,Z_Param_Out_Grip,Z_Param_Out_AngleVel,Z_Param_Out_TransVel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execTryDropObject)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDropObject(Z_Param_MotionController,Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execServerTryGrabObject)
	{
		P_GET_STRUCT(FGrabObjectInfo,Z_Param_GripInfo);
		P_GET_ENUM(EControllerHand,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTryGrabObject_Validate(Z_Param_GripInfo,EControllerHand(Z_Param_HandType)))
		{
			RPC_ValidateFailed(TEXT("ServerTryGrabObject_Validate"));
			return;
		}
		P_THIS->ServerTryGrabObject_Implementation(Z_Param_GripInfo,EControllerHand(Z_Param_HandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execTryGrabObject)
	{
		P_GET_STRUCT_REF(FGrabObjectInfo,Z_Param_Out_GripInfo);
		P_GET_ENUM(EControllerHand,Z_Param_HandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGrabObject(Z_Param_Out_GripInfo,EControllerHand(Z_Param_HandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execServerRemoveSecondaryAttachmentGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingHand);
		P_GET_OBJECT(UObject,Z_Param_ObjectToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRemoveSecondaryAttachmentGrip_Validate(Z_Param_GrippingHand,Z_Param_ObjectToRemove))
		{
			RPC_ValidateFailed(TEXT("ServerRemoveSecondaryAttachmentGrip_Validate"));
			return;
		}
		P_THIS->ServerRemoveSecondaryAttachmentGrip_Implementation(Z_Param_GrippingHand,Z_Param_ObjectToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execTryDrop)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Hand);
		P_GET_UBOOL(Z_Param_bIsLargeGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryDrop(Z_Param_Hand,Z_Param_bIsLargeGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execTryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Hand);
		P_GET_UBOOL(Z_Param_bIsLargeGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGrip(Z_Param_Hand,Z_Param_bIsLargeGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerAxisR)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerAxisR(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerAxisL)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerAxisL(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnAxisMoveY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAxisMoveY(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnAxisMoveX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAxisMoveX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnAxisTurnX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAxisTurnX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execSnapTurnLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapTurnLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execSnapTurnRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapTurnRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execGetSprintStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSprintStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execGetLeftGrabSphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USphereComponent**)Z_Param__Result=P_THIS->GetLeftGrabSphere_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execGetRightGrabSphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USphereComponent**)Z_Param__Result=P_THIS->GetRightGrabSphere_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerReleaseLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerReleaseLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerTouchLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerTouchLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerReleaseRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerReleaseRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnTriggerTouchRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerTouchRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnStopUseOrGrabSmallRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopUseOrGrabSmallRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnStopUseOrGrabSmallLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopUseOrGrabSmallLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnUseOrGrabSmallRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUseOrGrabSmallRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnUseOrGrabSmallLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUseOrGrabSmallLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnStopGrabLargeRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopGrabLargeRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnStopGrabLargeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopGrabLargeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnGrabLargeRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrabLargeRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnGrabLargeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrabLargeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnRepLeftControllerOffset)
	{
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepLeftControllerOffset(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnRepRightControllerOffset)
	{
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepRightControllerOffset(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execServerSetControllerProfile)
	{
		P_GET_UBOOL(Z_Param_bIsRightHand);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetControllerProfile_Validate(Z_Param_bIsRightHand,Z_Param_NewTransform))
		{
			RPC_ValidateFailed(TEXT("ServerSetControllerProfile_Validate"));
			return;
		}
		P_THIS->ServerSetControllerProfile_Implementation(Z_Param_bIsRightHand,Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnLeftControllerProfileChanged)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransformForComps);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewProfileTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftControllerProfileChanged(Z_Param_Out_NewTransformForComps,Z_Param_Out_NewProfileTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execOnRightControllerProfileChanged)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransformForComps);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewProfileTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightControllerProfileChanged(Z_Param_Out_NewTransformForComps,Z_Param_Out_NewProfileTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCharacter::execClientPossessed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPossessed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATVRCharacter_ClientPossessed = FName(TEXT("ClientPossessed"));
	void ATVRCharacter::ClientPossessed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_ClientPossessed),NULL);
	}
	static FName NAME_ATVRCharacter_GetLeftGrabSphere = FName(TEXT("GetLeftGrabSphere"));
	USphereComponent* ATVRCharacter::GetLeftGrabSphere() const
	{
		TVRCharacter_eventGetLeftGrabSphere_Parms Parms;
		const_cast<ATVRCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_GetLeftGrabSphere),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRCharacter_GetPrimaryWeaponSlot = FName(TEXT("GetPrimaryWeaponSlot"));
	UTVREquipmentPoint* ATVRCharacter::GetPrimaryWeaponSlot() const
	{
		TVRCharacter_eventGetPrimaryWeaponSlot_Parms Parms;
		const_cast<ATVRCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_GetPrimaryWeaponSlot),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRCharacter_GetRightGrabSphere = FName(TEXT("GetRightGrabSphere"));
	USphereComponent* ATVRCharacter::GetRightGrabSphere() const
	{
		TVRCharacter_eventGetRightGrabSphere_Parms Parms;
		const_cast<ATVRCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_GetRightGrabSphere),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRCharacter_GetSidearmSlot = FName(TEXT("GetSidearmSlot"));
	UTVREquipmentPoint* ATVRCharacter::GetSidearmSlot() const
	{
		TVRCharacter_eventGetSidearmSlot_Parms Parms;
		const_cast<ATVRCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_GetSidearmSlot),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATVRCharacter_OnClosePauseMenu = FName(TEXT("OnClosePauseMenu"));
	void ATVRCharacter::OnClosePauseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_OnClosePauseMenu),NULL);
	}
	static FName NAME_ATVRCharacter_OnOpenPauseMenu = FName(TEXT("OnOpenPauseMenu"));
	void ATVRCharacter::OnOpenPauseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_OnOpenPauseMenu),NULL);
	}
	static FName NAME_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip = FName(TEXT("ServerRemoveSecondaryAttachmentGrip"));
	void ATVRCharacter::ServerRemoveSecondaryAttachmentGrip(UGripMotionControllerComponent* GrippingHand, UObject* ObjectToRemove)
	{
		TVRCharacter_eventServerRemoveSecondaryAttachmentGrip_Parms Parms;
		Parms.GrippingHand=GrippingHand;
		Parms.ObjectToRemove=ObjectToRemove;
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip),&Parms);
	}
	static FName NAME_ATVRCharacter_ServerSetControllerProfile = FName(TEXT("ServerSetControllerProfile"));
	void ATVRCharacter::ServerSetControllerProfile(bool bIsRightHand, FTransform_NetQuantize NewTransform)
	{
		TVRCharacter_eventServerSetControllerProfile_Parms Parms;
		Parms.bIsRightHand=bIsRightHand ? true : false;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_ServerSetControllerProfile),&Parms);
	}
	static FName NAME_ATVRCharacter_ServerTryDropObject = FName(TEXT("ServerTryDropObject"));
	void ATVRCharacter::ServerTryDropObject(UGripMotionControllerComponent* MotionController, FVector_NetQuantize100 AngleVel, FVector_NetQuantize100 TransVel, uint8 GripHash)
	{
		TVRCharacter_eventServerTryDropObject_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.AngleVel=AngleVel;
		Parms.TransVel=TransVel;
		Parms.GripHash=GripHash;
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_ServerTryDropObject),&Parms);
	}
	static FName NAME_ATVRCharacter_ServerTryGrabObject = FName(TEXT("ServerTryGrabObject"));
	void ATVRCharacter::ServerTryGrabObject(FGrabObjectInfo const& GripInfo, EControllerHand HandType)
	{
		TVRCharacter_eventServerTryGrabObject_Parms Parms;
		Parms.GripInfo=GripInfo;
		Parms.HandType=HandType;
		ProcessEvent(FindFunctionChecked(NAME_ATVRCharacter_ServerTryGrabObject),&Parms);
	}
	void ATVRCharacter::StaticRegisterNativesATVRCharacter()
	{
		UClass* Class = ATVRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientPossessed", &ATVRCharacter::execClientPossessed },
			{ "GetFilteredHandVelocity", &ATVRCharacter::execGetFilteredHandVelocity },
			{ "GetLeftGrabSphere", &ATVRCharacter::execGetLeftGrabSphere },
			{ "GetRightGrabSphere", &ATVRCharacter::execGetRightGrabSphere },
			{ "GetSprintStrength", &ATVRCharacter::execGetSprintStrength },
			{ "LocalTryDropObject", &ATVRCharacter::execLocalTryDropObject },
			{ "OnAxisMoveX", &ATVRCharacter::execOnAxisMoveX },
			{ "OnAxisMoveY", &ATVRCharacter::execOnAxisMoveY },
			{ "OnAxisTurnX", &ATVRCharacter::execOnAxisTurnX },
			{ "OnBoltReleasePressed_Left", &ATVRCharacter::execOnBoltReleasePressed_Left },
			{ "OnBoltReleasePressed_Right", &ATVRCharacter::execOnBoltReleasePressed_Right },
			{ "OnBoltReleaseReleased_Left", &ATVRCharacter::execOnBoltReleaseReleased_Left },
			{ "OnBoltReleaseReleased_Right", &ATVRCharacter::execOnBoltReleaseReleased_Right },
			{ "OnCycleFireMode_Left", &ATVRCharacter::execOnCycleFireMode_Left },
			{ "OnCycleFireMode_Right", &ATVRCharacter::execOnCycleFireMode_Right },
			{ "OnGrabLargeLeft", &ATVRCharacter::execOnGrabLargeLeft },
			{ "OnGrabLargeRight", &ATVRCharacter::execOnGrabLargeRight },
			{ "OnGrippedObjectLeft", &ATVRCharacter::execOnGrippedObjectLeft },
			{ "OnGrippedObjectRight", &ATVRCharacter::execOnGrippedObjectRight },
			{ "OnLeftControllerProfileChanged", &ATVRCharacter::execOnLeftControllerProfileChanged },
			{ "OnMagReleasePressed_Left", &ATVRCharacter::execOnMagReleasePressed_Left },
			{ "OnMagReleasePressed_Right", &ATVRCharacter::execOnMagReleasePressed_Right },
			{ "OnMagReleaseReleased_Left", &ATVRCharacter::execOnMagReleaseReleased_Left },
			{ "OnMagReleaseReleased_Right", &ATVRCharacter::execOnMagReleaseReleased_Right },
			{ "OnRepLeftControllerOffset", &ATVRCharacter::execOnRepLeftControllerOffset },
			{ "OnRepRightControllerOffset", &ATVRCharacter::execOnRepRightControllerOffset },
			{ "OnRightControllerProfileChanged", &ATVRCharacter::execOnRightControllerProfileChanged },
			{ "OnStopGrabLargeLeft", &ATVRCharacter::execOnStopGrabLargeLeft },
			{ "OnStopGrabLargeRight", &ATVRCharacter::execOnStopGrabLargeRight },
			{ "OnStopUseOrGrabSmallLeft", &ATVRCharacter::execOnStopUseOrGrabSmallLeft },
			{ "OnStopUseOrGrabSmallRight", &ATVRCharacter::execOnStopUseOrGrabSmallRight },
			{ "OnTriggerAxisL", &ATVRCharacter::execOnTriggerAxisL },
			{ "OnTriggerAxisR", &ATVRCharacter::execOnTriggerAxisR },
			{ "OnTriggerReleaseLeft", &ATVRCharacter::execOnTriggerReleaseLeft },
			{ "OnTriggerReleaseRight", &ATVRCharacter::execOnTriggerReleaseRight },
			{ "OnTriggerTouchLeft", &ATVRCharacter::execOnTriggerTouchLeft },
			{ "OnTriggerTouchRight", &ATVRCharacter::execOnTriggerTouchRight },
			{ "OnUseOrGrabSmallLeft", &ATVRCharacter::execOnUseOrGrabSmallLeft },
			{ "OnUseOrGrabSmallRight", &ATVRCharacter::execOnUseOrGrabSmallRight },
			{ "OpenPauseMenu", &ATVRCharacter::execOpenPauseMenu },
			{ "ServerRemoveSecondaryAttachmentGrip", &ATVRCharacter::execServerRemoveSecondaryAttachmentGrip },
			{ "ServerSetControllerProfile", &ATVRCharacter::execServerSetControllerProfile },
			{ "ServerTryDropObject", &ATVRCharacter::execServerTryDropObject },
			{ "ServerTryGrabObject", &ATVRCharacter::execServerTryGrabObject },
			{ "SnapTurnLeft", &ATVRCharacter::execSnapTurnLeft },
			{ "SnapTurnRight", &ATVRCharacter::execSnapTurnRight },
			{ "TryClosePauseMenu", &ATVRCharacter::execTryClosePauseMenu },
			{ "TryDrop", &ATVRCharacter::execTryDrop },
			{ "TryDropObject", &ATVRCharacter::execTryDropObject },
			{ "TryGrabObject", &ATVRCharacter::execTryGrabObject },
			{ "TryGrip", &ATVRCharacter::execTryGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "ClientPossessed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_ClientPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_ClientPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics
	{
		struct TVRCharacter_eventGetFilteredHandVelocity_Parms
		{
			FVector OutVelocity;
			EControllerHand HandType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_OutVelocity = { "OutVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetFilteredHandVelocity_Parms, OutVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetFilteredHandVelocity_Parms, HandType), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_OutVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::NewProp_HandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRCharacter|Hands" },
		{ "Comment", "/**\n\x09* Returns a reference to the corresponding Filter for the controller hand.\n\x09* @param OutVelocity OutputVelocity\n\x09* @param HandType The Type of Controller Hand\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Returns a reference to the corresponding Filter for the controller hand.\n@param OutVelocity OutputVelocity\n@param HandType The Type of Controller Hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetFilteredHandVelocity", nullptr, nullptr, sizeof(TVRCharacter_eventGetFilteredHandVelocity_Parms), Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetLeftGrabSphere_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetLeftGrabSphere", nullptr, nullptr, sizeof(TVRCharacter_eventGetLeftGrabSphere_Parms), Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetPrimaryWeaponSlot_Parms, ReturnValue), Z_Construct_UClass_UTVREquipmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetPrimaryWeaponSlot", nullptr, nullptr, sizeof(TVRCharacter_eventGetPrimaryWeaponSlot_Parms), Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetRightGrabSphere_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetRightGrabSphere", nullptr, nullptr, sizeof(TVRCharacter_eventGetRightGrabSphere_Parms), Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetSidearmSlot_Parms, ReturnValue), Z_Construct_UClass_UTVREquipmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetSidearmSlot", nullptr, nullptr, sizeof(TVRCharacter_eventGetSidearmSlot_Parms), Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics
	{
		struct TVRCharacter_eventGetSprintStrength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventGetSprintStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "GetSprintStrength", nullptr, nullptr, sizeof(TVRCharacter_eventGetSprintStrength_Parms), Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_GetSprintStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_GetSprintStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics
	{
		struct TVRCharacter_eventLocalTryDropObject_Parms
		{
			UGripMotionControllerComponent* MotionController;
			FBPActorGripInformation Grip;
			FVector AngleVel;
			FVector TransVel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngleVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransVel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventLocalTryDropObject_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventLocalTryDropObject_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_Grip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_AngleVel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_AngleVel = { "AngleVel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventLocalTryDropObject_Parms, AngleVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_AngleVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_AngleVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_TransVel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_TransVel = { "TransVel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventLocalTryDropObject_Parms, TransVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_TransVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_TransVel_MetaData)) };
	void Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRCharacter_eventLocalTryDropObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventLocalTryDropObject_Parms), &Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_AngleVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_TransVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n\x09 * Tries to drop an object\n\x09 * @param MotionController MotionController that tries to perform the action\n\x09 * @param Grip Grip Information of the action (object trying to drop, and how it should be dropped)\n\x09 * @param AngleVel Angular velocity\n\x09 * @param TransVel Translational velocity\n\x09 * @returns True if the action was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Tries to drop an object\n@param MotionController MotionController that tries to perform the action\n@param Grip Grip Information of the action (object trying to drop, and how it should be dropped)\n@param AngleVel Angular velocity\n@param TransVel Translational velocity\n@returns True if the action was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "LocalTryDropObject", nullptr, nullptr, sizeof(TVRCharacter_eventLocalTryDropObject_Parms), Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics
	{
		struct TVRCharacter_eventOnAxisMoveX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnAxisMoveX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnAxisMoveX", nullptr, nullptr, sizeof(TVRCharacter_eventOnAxisMoveX_Parms), Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics
	{
		struct TVRCharacter_eventOnAxisMoveY_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnAxisMoveY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnAxisMoveY", nullptr, nullptr, sizeof(TVRCharacter_eventOnAxisMoveY_Parms), Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics
	{
		struct TVRCharacter_eventOnAxisTurnX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnAxisTurnX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnAxisTurnX", nullptr, nullptr, sizeof(TVRCharacter_eventOnAxisTurnX_Parms), Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnBoltReleasePressed_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnBoltReleasePressed_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnBoltReleaseReleased_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnBoltReleaseReleased_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnClosePauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnCycleFireMode_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnCycleFireMode_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnGrabLargeLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnGrabLargeRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics
	{
		struct TVRCharacter_eventOnGrippedObjectLeft_Parms
		{
			FBPActorGripInformation Grip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnGrippedObjectLeft_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by LeftMotionController OnGrippedObject.\n\x09 * @param Grip Grip Information\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Called by LeftMotionController OnGrippedObject.\n@param Grip Grip Information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnGrippedObjectLeft", nullptr, nullptr, sizeof(TVRCharacter_eventOnGrippedObjectLeft_Parms), Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics
	{
		struct TVRCharacter_eventOnGrippedObjectRight_Parms
		{
			FBPActorGripInformation Grip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnGrippedObjectRight_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Called by RightMotionController OnGrippedObject.\n\x09* @param Grip Grip Information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Called by RightMotionController OnGrippedObject.\n@param Grip Grip Information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnGrippedObjectRight", nullptr, nullptr, sizeof(TVRCharacter_eventOnGrippedObjectRight_Parms), Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics
	{
		struct TVRCharacter_eventOnLeftControllerProfileChanged_Parms
		{
			FTransform NewTransformForComps;
			FTransform NewProfileTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransformForComps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransformForComps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProfileTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfileTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewTransformForComps = { "NewTransformForComps", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnLeftControllerProfileChanged_Parms, NewTransformForComps), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewProfileTransform = { "NewProfileTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnLeftControllerProfileChanged_Parms, NewProfileTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewTransformForComps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::NewProp_NewProfileTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnLeftControllerProfileChanged", nullptr, nullptr, sizeof(TVRCharacter_eventOnLeftControllerProfileChanged_Parms), Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnMagReleasePressed_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnMagReleasePressed_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnMagReleaseReleased_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnMagReleaseReleased_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnOpenPauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics
	{
		struct TVRCharacter_eventOnRepLeftControllerOffset_Parms
		{
			FTransform_NetQuantize NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnRepLeftControllerOffset_Parms, NewValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnRepLeftControllerOffset", nullptr, nullptr, sizeof(TVRCharacter_eventOnRepLeftControllerOffset_Parms), Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics
	{
		struct TVRCharacter_eventOnRepRightControllerOffset_Parms
		{
			FTransform_NetQuantize NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnRepRightControllerOffset_Parms, NewValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnRepRightControllerOffset", nullptr, nullptr, sizeof(TVRCharacter_eventOnRepRightControllerOffset_Parms), Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics
	{
		struct TVRCharacter_eventOnRightControllerProfileChanged_Parms
		{
			FTransform NewTransformForComps;
			FTransform NewProfileTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransformForComps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransformForComps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProfileTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfileTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewTransformForComps = { "NewTransformForComps", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnRightControllerProfileChanged_Parms, NewTransformForComps), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewTransformForComps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewProfileTransform = { "NewProfileTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnRightControllerProfileChanged_Parms, NewProfileTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewProfileTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewTransformForComps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::NewProp_NewProfileTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnRightControllerProfileChanged", nullptr, nullptr, sizeof(TVRCharacter_eventOnRightControllerProfileChanged_Parms), Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnStopGrabLargeLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnStopGrabLargeRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnStopUseOrGrabSmallLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnStopUseOrGrabSmallRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics
	{
		struct TVRCharacter_eventOnTriggerAxisL_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnTriggerAxisL_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerAxisL", nullptr, nullptr, sizeof(TVRCharacter_eventOnTriggerAxisL_Parms), Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics
	{
		struct TVRCharacter_eventOnTriggerAxisR_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventOnTriggerAxisR_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerAxisR", nullptr, nullptr, sizeof(TVRCharacter_eventOnTriggerAxisR_Parms), Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerReleaseLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerReleaseRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerTouchLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnTriggerTouchRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnUseOrGrabSmallLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|InputActions" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OnUseOrGrabSmallRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "Comment", "/**\n     * Opens the Pause menu\n     */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Opens the Pause menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "OpenPauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingHand;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_GrippingHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_GrippingHand = { "GrippingHand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerRemoveSecondaryAttachmentGrip_Parms, GrippingHand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_GrippingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_GrippingHand_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_ObjectToRemove = { "ObjectToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerRemoveSecondaryAttachmentGrip_Parms, ObjectToRemove), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_GrippingHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::NewProp_ObjectToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "ServerRemoveSecondaryAttachmentGrip", nullptr, nullptr, sizeof(TVRCharacter_eventServerRemoveSecondaryAttachmentGrip_Parms), Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics
	{
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((TVRCharacter_eventServerSetControllerProfile_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventServerSetControllerProfile_Parms), &Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerSetControllerProfile_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "ServerSetControllerProfile", nullptr, nullptr, sizeof(TVRCharacter_eventServerSetControllerProfile_Parms), Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngleVel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransVel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryDropObject_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_AngleVel = { "AngleVel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryDropObject_Parms, AngleVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_TransVel = { "TransVel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryDropObject_Parms, TransVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_GripHash = { "GripHash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryDropObject_Parms, GripHash), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_AngleVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_TransVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::NewProp_GripHash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n\x09 * Server specific function to try to drop an object. Called from owner if owner is not the server.\n\x09 * @param MotionController MotionController that tries to perform the action\n\x09 * @param AngleVel Angular Velocity\n\x09 * @param TransVel Translational velocity\n\x09 * @param GripHash Compressed hash of the grip information to look up.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Server specific function to try to drop an object. Called from owner if owner is not the server.\n@param MotionController MotionController that tries to perform the action\n@param AngleVel Angular Velocity\n@param TransVel Translational velocity\n@param GripHash Compressed hash of the grip information to look up." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "ServerTryDropObject", nullptr, nullptr, sizeof(TVRCharacter_eventServerTryDropObject_Parms), Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryGrabObject_Parms, GripInfo), Z_Construct_UScriptStruct_FGrabObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventServerTryGrabObject_Parms, HandType), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_GripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::NewProp_HandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n\x09 * Try Grab Function that is client/server agnostic. This will call the appropriate function automatically\n\x09 * @param GripInfo Grip Information Structure\n\x09 * @param HandType Hand Controller Type (Left/Right/other) of the gripping hand\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Try Grab Function that is client/server agnostic. This will call the appropriate function automatically\n@param GripInfo Grip Information Structure\n@param HandType Hand Controller Type (Left/Right/other) of the gripping hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "ServerTryGrabObject", nullptr, nullptr, sizeof(TVRCharacter_eventServerTryGrabObject_Parms), Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Snap Turn Left for input binding */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Snap Turn Left for input binding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "SnapTurnLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Snap Turn Right for input binding */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Snap Turn Right for input binding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "SnapTurnRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_SnapTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_SnapTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "Comment", "/**\n\x09 * Close Pause Menu\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Close Pause Menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "TryClosePauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics
	{
		struct TVRCharacter_eventTryDrop_Parms
		{
			UGripMotionControllerComponent* Hand;
			bool bIsLargeGrip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static void NewProp_bIsLargeGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLargeGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryDrop_Parms, Hand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_Hand_MetaData)) };
	void Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_bIsLargeGrip_SetBit(void* Obj)
	{
		((TVRCharacter_eventTryDrop_Parms*)Obj)->bIsLargeGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_bIsLargeGrip = { "bIsLargeGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventTryDrop_Parms), &Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_bIsLargeGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRCharacter_eventTryDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventTryDrop_Parms), &Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_bIsLargeGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grip" },
		{ "Comment", "/**\n\x09 * @param Hand Hand that initiates the action\n\x09 * @param bIsLargeGrip Is this a large grip\n\x09 * @returns true if the action was handled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "@param Hand Hand that initiates the action\n@param bIsLargeGrip Is this a large grip\n@returns true if the action was handled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "TryDrop", nullptr, nullptr, sizeof(TVRCharacter_eventTryDrop_Parms), Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_TryDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_TryDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics
	{
		struct TVRCharacter_eventTryDropObject_Parms
		{
			UGripMotionControllerComponent* MotionController;
			FBPActorGripInformation Grip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryDropObject_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryDropObject_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n\x09 * Calls either the server function or the local one depending on the type of client\n\x09 * @param MotionController Motion Controller that wants to drop\n\x09 * @param Grip Grip Information for this drop\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Calls either the server function or the local one depending on the type of client\n@param MotionController Motion Controller that wants to drop\n@param Grip Grip Information for this drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "TryDropObject", nullptr, nullptr, sizeof(TVRCharacter_eventTryDropObject_Parms), Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_TryDropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_TryDropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics
	{
		struct TVRCharacter_eventTryGrabObject_Parms
		{
			FGrabObjectInfo GripInfo;
			EControllerHand HandType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryGrabObject_Parms, GripInfo), Z_Construct_UScriptStruct_FGrabObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_GripInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryGrabObject_Parms, HandType), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_GripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_HandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::NewProp_HandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gripping" },
		{ "Comment", "/**\n\x09 * Try Grab Function that is client/server agnostic. This will call the appropriate function automatically\n\x09 * @param GripInfo Grip Information Structure\n\x09 * @param HandType Hand Controller Type (Left/Right/other) of the gripping hand\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Try Grab Function that is client/server agnostic. This will call the appropriate function automatically\n@param GripInfo Grip Information Structure\n@param HandType Hand Controller Type (Left/Right/other) of the gripping hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "TryGrabObject", nullptr, nullptr, sizeof(TVRCharacter_eventTryGrabObject_Parms), Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_TryGrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_TryGrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics
	{
		struct TVRCharacter_eventTryGrip_Parms
		{
			UGripMotionControllerComponent* Hand;
			bool bIsLargeGrip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static void NewProp_bIsLargeGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLargeGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCharacter_eventTryGrip_Parms, Hand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_Hand_MetaData)) };
	void Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_bIsLargeGrip_SetBit(void* Obj)
	{
		((TVRCharacter_eventTryGrip_Parms*)Obj)->bIsLargeGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_bIsLargeGrip = { "bIsLargeGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventTryGrip_Parms), &Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_bIsLargeGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRCharacter_eventTryGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCharacter_eventTryGrip_Parms), &Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_bIsLargeGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grip" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCharacter, nullptr, "TryGrip", nullptr, nullptr, sizeof(TVRCharacter_eventTryGrip_Parms), Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCharacter_TryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCharacter_TryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRCharacter_NoRegister()
	{
		return ATVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightControllerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightControllerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftControllerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftControllerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuOpenTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuOpenTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuOpenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MenuOpenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInMenu_MetaData[];
#endif
		static void NewProp_bIsInMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseMenuActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocitySampleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VelocitySampleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSampleGripVelocity_MetaData[];
#endif
		static void NewProp_bSampleGripVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSampleGripVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerVelocityOnRelease_MetaData[];
#endif
		static void NewProp_bUseControllerVelocityOnRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerVelocityOnRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleThrowingVelocityByMass_MetaData[];
#endif
		static void NewProp_bScaleThrowingVelocityByMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleThrowingVelocityByMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThrowingGripMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThrowingGripMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinThrowingMassScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinThrowingMassScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxThrowingVelocity_MetaData[];
#endif
		static void NewProp_bLimitMaxThrowingVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitMaxThrowingVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThrowingVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThrowingVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightGraspingHandClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RightGraspingHandClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintMinWeaponDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintMinWeaponDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintMaxWeaponDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintMaxWeaponDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintMinAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintMinAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintMaxAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintMaxAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabSphereLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabSphereLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabSphereRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabSphereRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMeshRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMeshRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMeshLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMeshLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightGraspingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightGraspingHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftGraspingHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftGraspingHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRCharacter_ClientPossessed, "ClientPossessed" }, // 1418759068
		{ &Z_Construct_UFunction_ATVRCharacter_GetFilteredHandVelocity, "GetFilteredHandVelocity" }, // 3405825781
		{ &Z_Construct_UFunction_ATVRCharacter_GetLeftGrabSphere, "GetLeftGrabSphere" }, // 3957178849
		{ &Z_Construct_UFunction_ATVRCharacter_GetPrimaryWeaponSlot, "GetPrimaryWeaponSlot" }, // 2327207072
		{ &Z_Construct_UFunction_ATVRCharacter_GetRightGrabSphere, "GetRightGrabSphere" }, // 526179298
		{ &Z_Construct_UFunction_ATVRCharacter_GetSidearmSlot, "GetSidearmSlot" }, // 4218421400
		{ &Z_Construct_UFunction_ATVRCharacter_GetSprintStrength, "GetSprintStrength" }, // 536681006
		{ &Z_Construct_UFunction_ATVRCharacter_LocalTryDropObject, "LocalTryDropObject" }, // 50320175
		{ &Z_Construct_UFunction_ATVRCharacter_OnAxisMoveX, "OnAxisMoveX" }, // 1000250945
		{ &Z_Construct_UFunction_ATVRCharacter_OnAxisMoveY, "OnAxisMoveY" }, // 2462926098
		{ &Z_Construct_UFunction_ATVRCharacter_OnAxisTurnX, "OnAxisTurnX" }, // 1758978588
		{ &Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Left, "OnBoltReleasePressed_Left" }, // 640345885
		{ &Z_Construct_UFunction_ATVRCharacter_OnBoltReleasePressed_Right, "OnBoltReleasePressed_Right" }, // 361602304
		{ &Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Left, "OnBoltReleaseReleased_Left" }, // 4139131634
		{ &Z_Construct_UFunction_ATVRCharacter_OnBoltReleaseReleased_Right, "OnBoltReleaseReleased_Right" }, // 3484453139
		{ &Z_Construct_UFunction_ATVRCharacter_OnClosePauseMenu, "OnClosePauseMenu" }, // 1514593642
		{ &Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Left, "OnCycleFireMode_Left" }, // 2337050074
		{ &Z_Construct_UFunction_ATVRCharacter_OnCycleFireMode_Right, "OnCycleFireMode_Right" }, // 2469274644
		{ &Z_Construct_UFunction_ATVRCharacter_OnGrabLargeLeft, "OnGrabLargeLeft" }, // 2765041555
		{ &Z_Construct_UFunction_ATVRCharacter_OnGrabLargeRight, "OnGrabLargeRight" }, // 3864965566
		{ &Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectLeft, "OnGrippedObjectLeft" }, // 2571788150
		{ &Z_Construct_UFunction_ATVRCharacter_OnGrippedObjectRight, "OnGrippedObjectRight" }, // 1169481208
		{ &Z_Construct_UFunction_ATVRCharacter_OnLeftControllerProfileChanged, "OnLeftControllerProfileChanged" }, // 510299818
		{ &Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Left, "OnMagReleasePressed_Left" }, // 1146671714
		{ &Z_Construct_UFunction_ATVRCharacter_OnMagReleasePressed_Right, "OnMagReleasePressed_Right" }, // 899016689
		{ &Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Left, "OnMagReleaseReleased_Left" }, // 2600772439
		{ &Z_Construct_UFunction_ATVRCharacter_OnMagReleaseReleased_Right, "OnMagReleaseReleased_Right" }, // 1980054784
		{ &Z_Construct_UFunction_ATVRCharacter_OnOpenPauseMenu, "OnOpenPauseMenu" }, // 67757894
		{ &Z_Construct_UFunction_ATVRCharacter_OnRepLeftControllerOffset, "OnRepLeftControllerOffset" }, // 3877891104
		{ &Z_Construct_UFunction_ATVRCharacter_OnRepRightControllerOffset, "OnRepRightControllerOffset" }, // 901694820
		{ &Z_Construct_UFunction_ATVRCharacter_OnRightControllerProfileChanged, "OnRightControllerProfileChanged" }, // 1482815602
		{ &Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeLeft, "OnStopGrabLargeLeft" }, // 3968410678
		{ &Z_Construct_UFunction_ATVRCharacter_OnStopGrabLargeRight, "OnStopGrabLargeRight" }, // 1505217449
		{ &Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallLeft, "OnStopUseOrGrabSmallLeft" }, // 448611798
		{ &Z_Construct_UFunction_ATVRCharacter_OnStopUseOrGrabSmallRight, "OnStopUseOrGrabSmallRight" }, // 818025498
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisL, "OnTriggerAxisL" }, // 2460897317
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerAxisR, "OnTriggerAxisR" }, // 4058718208
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseLeft, "OnTriggerReleaseLeft" }, // 2638039770
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerReleaseRight, "OnTriggerReleaseRight" }, // 663188791
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchLeft, "OnTriggerTouchLeft" }, // 4244555336
		{ &Z_Construct_UFunction_ATVRCharacter_OnTriggerTouchRight, "OnTriggerTouchRight" }, // 504813627
		{ &Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallLeft, "OnUseOrGrabSmallLeft" }, // 3692928694
		{ &Z_Construct_UFunction_ATVRCharacter_OnUseOrGrabSmallRight, "OnUseOrGrabSmallRight" }, // 3616425675
		{ &Z_Construct_UFunction_ATVRCharacter_OpenPauseMenu, "OpenPauseMenu" }, // 209905244
		{ &Z_Construct_UFunction_ATVRCharacter_ServerRemoveSecondaryAttachmentGrip, "ServerRemoveSecondaryAttachmentGrip" }, // 3474645320
		{ &Z_Construct_UFunction_ATVRCharacter_ServerSetControllerProfile, "ServerSetControllerProfile" }, // 3103291551
		{ &Z_Construct_UFunction_ATVRCharacter_ServerTryDropObject, "ServerTryDropObject" }, // 335381342
		{ &Z_Construct_UFunction_ATVRCharacter_ServerTryGrabObject, "ServerTryGrabObject" }, // 2971311612
		{ &Z_Construct_UFunction_ATVRCharacter_SnapTurnLeft, "SnapTurnLeft" }, // 3248111802
		{ &Z_Construct_UFunction_ATVRCharacter_SnapTurnRight, "SnapTurnRight" }, // 666244409
		{ &Z_Construct_UFunction_ATVRCharacter_TryClosePauseMenu, "TryClosePauseMenu" }, // 3060670592
		{ &Z_Construct_UFunction_ATVRCharacter_TryDrop, "TryDrop" }, // 3555135391
		{ &Z_Construct_UFunction_ATVRCharacter_TryDropObject, "TryDropObject" }, // 3604909559
		{ &Z_Construct_UFunction_ATVRCharacter_TryGrabObject, "TryGrabObject" }, // 1282426741
		{ &Z_Construct_UFunction_ATVRCharacter_TryGrip, "TryGrip" }, // 382688102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class for a Character. You should not be able to spawn an instance.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TVRCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for a Character. You should not be able to spawn an instance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightControllerOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightControllerOffset = { "RightControllerOffset", "OnRepRightControllerOffset", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, RightControllerOffset), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightControllerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightControllerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftControllerOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftControllerOffset = { "LeftControllerOffset", "OnRepLeftControllerOffset", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, LeftControllerOffset), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftControllerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftControllerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftHandGripComponent_MetaData[] = {
		{ "Category", "Hand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftHandGripComponent = { "LeftHandGripComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, LeftHandGripComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftHandGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftHandGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightHandGripComponent_MetaData[] = {
		{ "Category", "Hand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightHandGripComponent = { "RightHandGripComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, RightHandGripComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightHandGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightHandGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTimer_MetaData[] = {
		{ "Category", "Menu" },
		{ "Comment", "/** Timer that is active when opening the menu. */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Timer that is active when opening the menu." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTimer = { "MenuOpenTimer", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, MenuOpenTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTime_MetaData[] = {
		{ "Category", "Menu" },
		{ "Comment", "/** Time that the Menu button has to be held until the menu is open */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Time that the Menu button has to be held until the menu is open" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTime = { "MenuOpenTime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, MenuOpenTime), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu_MetaData[] = {
		{ "Comment", "/** Indicates whether the player is currently in menu or not */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Indicates whether the player is currently in menu or not" },
	};
#endif
	void Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu_SetBit(void* Obj)
	{
		((ATVRCharacter*)Obj)->bIsInMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu = { "bIsInMenu", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCharacter), &Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_PauseMenuActor_MetaData[] = {
		{ "Category", "Menu" },
		{ "Comment", "/** Pause Menu Actor in case it exists. Will Probably Move this to the player controller? */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Pause Menu Actor in case it exists. Will Probably Move this to the player controller?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_PauseMenuActor = { "PauseMenuActor", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, PauseMenuActor), Z_Construct_UClass_APauseMenuActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_PauseMenuActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_PauseMenuActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_VelocitySampleSize_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Sample size of the velocity filters*/" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Sample size of the velocity filters" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_VelocitySampleSize = { "VelocitySampleSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, VelocitySampleSize), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_VelocitySampleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_VelocitySampleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Flag that controls whether Grip Velocity should be sampled (actually buffered) or not */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Flag that controls whether Grip Velocity should be sampled (actually buffered) or not" },
	};
#endif
	void Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity_SetBit(void* Obj)
	{
		((ATVRCharacter*)Obj)->bSampleGripVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity = { "bSampleGripVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCharacter), &Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Flag that controls whether the Controller velocity is used on release for throwing */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Flag that controls whether the Controller velocity is used on release for throwing" },
	};
#endif
	void Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease_SetBit(void* Obj)
	{
		((ATVRCharacter*)Obj)->bUseControllerVelocityOnRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease = { "bUseControllerVelocityOnRelease", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCharacter), &Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Flag that controls whether the throwing velocity is scaled by the mass of the thrown object */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Flag that controls whether the throwing velocity is scaled by the mass of the thrown object" },
	};
#endif
	void Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass_SetBit(void* Obj)
	{
		((ATVRCharacter*)Obj)->bScaleThrowingVelocityByMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass = { "bScaleThrowingVelocityByMass", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCharacter), &Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingGripMass_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Upper limit for throwing mass. Anything above this mass will be scaled with the minimum throwing mass scale. */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Upper limit for throwing mass. Anything above this mass will be scaled with the minimum throwing mass scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingGripMass = { "MaxThrowingGripMass", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, MaxThrowingGripMass), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingGripMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingGripMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MinThrowingMassScale_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Minimum scaling factor used for mass scaling of throwing velocity */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Minimum scaling factor used for mass scaling of throwing velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MinThrowingMassScale = { "MinThrowingMassScale", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, MinThrowingMassScale), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MinThrowingMassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MinThrowingMassScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Flag that controls whether the maximum throwing velocity shall be limited. */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Flag that controls whether the maximum throwing velocity shall be limited." },
	};
#endif
	void Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity_SetBit(void* Obj)
	{
		((ATVRCharacter*)Obj)->bLimitMaxThrowingVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity = { "bLimitMaxThrowingVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCharacter), &Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingVelocity_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "/** Upper bound the throwing velocity is limited by */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Upper bound the throwing velocity is limited by" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingVelocity = { "MaxThrowingVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, MaxThrowingVelocity), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHandClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Class of the Right Grasping Hand Actor. A Grasping hand of this class will be spawned. */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Class of the Right Grasping Hand Actor. A Grasping hand of this class will be spawned." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHandClass = { "RightGraspingHandClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, RightGraspingHandClass), Z_Construct_UClass_ATVRGraspingHand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHandClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHandClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetHitResult_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetHitResult = { "WidgetHitResult", nullptr, (EPropertyFlags)0x0020088000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, WidgetHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinWeaponDown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinWeaponDown = { "SprintMinWeaponDown", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, SprintMinWeaponDown), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinWeaponDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinWeaponDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxWeaponDown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxWeaponDown = { "SprintMaxWeaponDown", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, SprintMaxWeaponDown), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxWeaponDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxWeaponDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinAim_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinAim = { "SprintMinAim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, SprintMinAim), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxAim_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxAim = { "SprintMaxAim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, SprintMaxAim), METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Widget Interaction Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Widget Interaction Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetInteraction = { "WidgetInteraction", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, WidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Grab collision sphere of left hand */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Grab collision sphere of left hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereLeft = { "GrabSphereLeft", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, GrabSphereLeft), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Grab collision sphere of right hand */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Grab collision sphere of right hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereRight = { "GrabSphereRight", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, GrabSphereRight), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Hand mesh of the right hand */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Hand mesh of the right hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshRight = { "HandMeshRight", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, HandMeshRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Hand mesh of the left hand */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Hand mesh of the left hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshLeft = { "HandMeshLeft", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, HandMeshLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Right Grasping Hand Actor */" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Right Grasping Hand Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHand = { "RightGraspingHand", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, RightGraspingHand), Z_Construct_UClass_ATVRGraspingHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftGraspingHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Interaction" },
		{ "Comment", "/** Left Grasping Hand Actor*/" },
		{ "ModuleRelativePath", "Public/Player/TVRCharacter.h" },
		{ "ToolTip", "Left Grasping Hand Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftGraspingHand = { "LeftGraspingHand", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCharacter, LeftGraspingHand), Z_Construct_UClass_ATVRGraspingHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftGraspingHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftGraspingHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightControllerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftControllerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftHandGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightHandGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MenuOpenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bIsInMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_PauseMenuActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_VelocitySampleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bSampleGripVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bUseControllerVelocityOnRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bScaleThrowingVelocityByMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingGripMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MinThrowingMassScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_bLimitMaxThrowingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_MaxThrowingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHandClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinWeaponDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxWeaponDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMinAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_SprintMaxAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_WidgetInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_GrabSphereRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_HandMeshLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_RightGraspingHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCharacter_Statics::NewProp_LeftGraspingHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRCharacter_Statics::ClassParams = {
		&ATVRCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRCharacter, 3228732364);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRCharacter>()
	{
		return ATVRCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRCharacter(Z_Construct_UClass_ATVRCharacter, &ATVRCharacter::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRCharacter"), false, nullptr, nullptr, nullptr);

	void ATVRCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RightControllerOffset(TEXT("RightControllerOffset"));
		static const FName Name_LeftControllerOffset(TEXT("LeftControllerOffset"));
		static const FName Name_bIsInMenu(TEXT("bIsInMenu"));

		const bool bIsValid = true
			&& Name_RightControllerOffset == ClassReps[(int32)ENetFields_Private::RightControllerOffset].Property->GetFName()
			&& Name_LeftControllerOffset == ClassReps[(int32)ENetFields_Private::LeftControllerOffset].Property->GetFName()
			&& Name_bIsInMenu == ClassReps[(int32)ENetFields_Private::bIsInMenu].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATVRCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
