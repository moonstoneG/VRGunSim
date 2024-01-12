// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRLoadableBreechComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRLoadableBreechComponent() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ULoadableBreechComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ULoadableBreechComponent();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineCompInterface();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGunFireComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "LoadableBreechEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETVRLoadableBreechState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ETVRLoadableBreechState"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRLoadableBreechState>()
	{
		return ETVRLoadableBreechState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETVRLoadableBreechState(ETVRLoadableBreechState_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ETVRLoadableBreechState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState_Hash() { return 217493764U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETVRLoadableBreechState"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETVRLoadableBreechState::Closed", (int64)ETVRLoadableBreechState::Closed },
				{ "ETVRLoadableBreechState::Closing", (int64)ETVRLoadableBreechState::Closing },
				{ "ETVRLoadableBreechState::Open", (int64)ETVRLoadableBreechState::Open },
				{ "ETVRLoadableBreechState::Opening", (int64)ETVRLoadableBreechState::Opening },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closed.Name", "ETVRLoadableBreechState::Closed" },
				{ "Closing.Name", "ETVRLoadableBreechState::Closing" },
				{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
				{ "Open.Name", "ETVRLoadableBreechState::Open" },
				{ "Opening.Name", "ETVRLoadableBreechState::Opening" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ETVRLoadableBreechState",
				"ETVRLoadableBreechState",
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
	DEFINE_FUNCTION(ULoadableBreechComponent::execOnCartridgeDropped)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCartridgeDropped(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execOnCartridgeGrabbed)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCartridgeGrabbed(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execOnCartridgeSpent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCartridgeSpent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execIsAllowedAmmo)
	{
		P_GET_OBJECT(UClass,Z_Param_CartridgeClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowedAmmo(Z_Param_CartridgeClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execAssignFiringComp)
	{
		P_GET_OBJECT(UTVRGunFireComponent,Z_Param_NewFiringComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignFiringComp(Z_Param_NewFiringComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execGetFiringComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRGunFireComponent**)Z_Param__Result=P_THIS->GetFiringComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execGetOpenCloseAudioComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetOpenCloseAudioComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execGetCartridgeInsertAudioComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetCartridgeInsertAudioComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execGetBreechOpenState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETVRLoadableBreechState*)Z_Param__Result=P_THIS->GetBreechOpenState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execCloseBreech)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseBreech();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadableBreechComponent::execOpenBreech)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenBreech();
		P_NATIVE_END;
	}
	void ULoadableBreechComponent::StaticRegisterNativesULoadableBreechComponent()
	{
		UClass* Class = ULoadableBreechComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignFiringComp", &ULoadableBreechComponent::execAssignFiringComp },
			{ "CloseBreech", &ULoadableBreechComponent::execCloseBreech },
			{ "GetBreechOpenState", &ULoadableBreechComponent::execGetBreechOpenState },
			{ "GetCartridgeInsertAudioComp", &ULoadableBreechComponent::execGetCartridgeInsertAudioComp },
			{ "GetFiringComp", &ULoadableBreechComponent::execGetFiringComp },
			{ "GetOpenCloseAudioComp", &ULoadableBreechComponent::execGetOpenCloseAudioComp },
			{ "IsAllowedAmmo", &ULoadableBreechComponent::execIsAllowedAmmo },
			{ "OnCartridgeDropped", &ULoadableBreechComponent::execOnCartridgeDropped },
			{ "OnCartridgeGrabbed", &ULoadableBreechComponent::execOnCartridgeGrabbed },
			{ "OnCartridgeSpent", &ULoadableBreechComponent::execOnCartridgeSpent },
			{ "OpenBreech", &ULoadableBreechComponent::execOpenBreech },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics
	{
		struct LoadableBreechComponent_eventAssignFiringComp_Parms
		{
			UTVRGunFireComponent* NewFiringComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFiringComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFiringComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::NewProp_NewFiringComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::NewProp_NewFiringComp = { "NewFiringComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventAssignFiringComp_Parms, NewFiringComp), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::NewProp_NewFiringComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::NewProp_NewFiringComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::NewProp_NewFiringComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "AssignFiringComp", nullptr, nullptr, sizeof(LoadableBreechComponent_eventAssignFiringComp_Parms), Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics
	{
		struct LoadableBreechComponent_eventCloseBreech_Parms
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
	void Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoadableBreechComponent_eventCloseBreech_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadableBreechComponent_eventCloseBreech_Parms), &Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "CloseBreech", nullptr, nullptr, sizeof(LoadableBreechComponent_eventCloseBreech_Parms), Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics
	{
		struct LoadableBreechComponent_eventGetBreechOpenState_Parms
		{
			ETVRLoadableBreechState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventGetBreechOpenState_Parms, ReturnValue), Z_Construct_UEnum_TacticalVRCore_ETVRLoadableBreechState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "GetBreechOpenState", nullptr, nullptr, sizeof(LoadableBreechComponent_eventGetBreechOpenState_Parms), Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics
	{
		struct LoadableBreechComponent_eventGetCartridgeInsertAudioComp_Parms
		{
			UAudioComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventGetCartridgeInsertAudioComp_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "GetCartridgeInsertAudioComp", nullptr, nullptr, sizeof(LoadableBreechComponent_eventGetCartridgeInsertAudioComp_Parms), Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics
	{
		struct LoadableBreechComponent_eventGetFiringComp_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventGetFiringComp_Parms, ReturnValue), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "GetFiringComp", nullptr, nullptr, sizeof(LoadableBreechComponent_eventGetFiringComp_Parms), Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics
	{
		struct LoadableBreechComponent_eventGetOpenCloseAudioComp_Parms
		{
			UAudioComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventGetOpenCloseAudioComp_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "GetOpenCloseAudioComp", nullptr, nullptr, sizeof(LoadableBreechComponent_eventGetOpenCloseAudioComp_Parms), Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics
	{
		struct LoadableBreechComponent_eventIsAllowedAmmo_Parms
		{
			TSubclassOf<ATVRCartridge>  CartridgeClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CartridgeClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_CartridgeClass = { "CartridgeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventIsAllowedAmmo_Parms, CartridgeClass), Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoadableBreechComponent_eventIsAllowedAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadableBreechComponent_eventIsAllowedAmmo_Parms), &Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_CartridgeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "IsAllowedAmmo", nullptr, nullptr, sizeof(LoadableBreechComponent_eventIsAllowedAmmo_Parms), Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics
	{
		struct LoadableBreechComponent_eventOnCartridgeDropped_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInformation;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventOnCartridgeDropped_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventOnCartridgeDropped_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((LoadableBreechComponent_eventOnCartridgeDropped_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadableBreechComponent_eventOnCartridgeDropped_Parms), &Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "OnCartridgeDropped", nullptr, nullptr, sizeof(LoadableBreechComponent_eventOnCartridgeDropped_Parms), Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics
	{
		struct LoadableBreechComponent_eventOnCartridgeGrabbed_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventOnCartridgeGrabbed_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadableBreechComponent_eventOnCartridgeGrabbed_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "OnCartridgeGrabbed", nullptr, nullptr, sizeof(LoadableBreechComponent_eventOnCartridgeGrabbed_Parms), Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "OnCartridgeSpent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics
	{
		struct LoadableBreechComponent_eventOpenBreech_Parms
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
	void Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoadableBreechComponent_eventOpenBreech_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadableBreechComponent_eventOpenBreech_Parms), &Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// ================================================\n// End MagazineComponentInterface\n// ================================================\n" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "ToolTip", "End MagazineComponentInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadableBreechComponent, nullptr, "OpenBreech", nullptr, nullptr, sizeof(LoadableBreechComponent_eventOpenBreech_Parms), Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadableBreechComponent_NoRegister()
	{
		return ULoadableBreechComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULoadableBreechComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgeInsertAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CartridgeInsertAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCloseAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenCloseAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCartridge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCartridge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnBeginOpenBreech_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnBeginOpenBreech;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnOpenedBreech_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnOpenedBreech;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnBeginCloseBreech_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnBeginCloseBreech;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnClosedBreech_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnClosedBreech;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedCartridges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedCartridges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedCartridges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreechOpenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreechOpenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReleaseCartridgeWhenOpened_MetaData[];
#endif
		static void NewProp_bReleaseCartridgeWhenOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReleaseCartridgeWhenOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectorForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EjectorForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgeInsertSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CartridgeInsertSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCloseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenCloseSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadableBreechComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRMagazineCompInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadableBreechComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadableBreechComponent_AssignFiringComp, "AssignFiringComp" }, // 3204311440
		{ &Z_Construct_UFunction_ULoadableBreechComponent_CloseBreech, "CloseBreech" }, // 2547953353
		{ &Z_Construct_UFunction_ULoadableBreechComponent_GetBreechOpenState, "GetBreechOpenState" }, // 1478007970
		{ &Z_Construct_UFunction_ULoadableBreechComponent_GetCartridgeInsertAudioComp, "GetCartridgeInsertAudioComp" }, // 2655874187
		{ &Z_Construct_UFunction_ULoadableBreechComponent_GetFiringComp, "GetFiringComp" }, // 1753426416
		{ &Z_Construct_UFunction_ULoadableBreechComponent_GetOpenCloseAudioComp, "GetOpenCloseAudioComp" }, // 3593466481
		{ &Z_Construct_UFunction_ULoadableBreechComponent_IsAllowedAmmo, "IsAllowedAmmo" }, // 944839062
		{ &Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeDropped, "OnCartridgeDropped" }, // 1672240424
		{ &Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeGrabbed, "OnCartridgeGrabbed" }, // 2826839950
		{ &Z_Construct_UFunction_ULoadableBreechComponent_OnCartridgeSpent, "OnCartridgeSpent" }, // 3725517163
		{ &Z_Construct_UFunction_ULoadableBreechComponent_OpenBreech, "OpenBreech" }, // 2441198763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ComponentTick Navigation Physics Collision Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertAudioComp = { "CartridgeInsertAudioComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, CartridgeInsertAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseAudioComp = { "OpenCloseAudioComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, OpenCloseAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_FiringComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_FiringComp = { "FiringComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, FiringComp), Z_Construct_UClass_UTVRGunFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_FiringComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_FiringComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CurrentCartridge_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CurrentCartridge = { "CurrentCartridge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, CurrentCartridge), Z_Construct_UClass_ATVRCartridge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CurrentCartridge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CurrentCartridge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginOpenBreech_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginOpenBreech = { "EventOnBeginOpenBreech", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, EventOnBeginOpenBreech), Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginOpenBreech_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginOpenBreech_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnOpenedBreech_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnOpenedBreech = { "EventOnOpenedBreech", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, EventOnOpenedBreech), Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnOpenedBreech_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnOpenedBreech_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginCloseBreech_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginCloseBreech = { "EventOnBeginCloseBreech", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, EventOnBeginCloseBreech), Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginCloseBreech_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginCloseBreech_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnClosedBreech_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnClosedBreech = { "EventOnClosedBreech", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, EventOnClosedBreech), Z_Construct_UDelegateFunction_TacticalVRCore_LoadableBreechEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnClosedBreech_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnClosedBreech_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges_Inner = { "AllowedCartridges", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATVRCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges = { "AllowedCartridges", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, AllowedCartridges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_TargetTransform_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_TargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_TargetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, Distance), METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_BreechOpenTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_BreechOpenTime = { "BreechOpenTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, BreechOpenTime), METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_BreechOpenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_BreechOpenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened_SetBit(void* Obj)
	{
		((ULoadableBreechComponent*)Obj)->bReleaseCartridgeWhenOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened = { "bReleaseCartridgeWhenOpened", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULoadableBreechComponent), &Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EjectorForce_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Force (Acceleration in uu/s\xc2\xb2) of the inserted Cartridge if there is a ejector.\n\x09 * Make sure that it can overcome gravity (normally 980uu/s\xc2\xb2) in case you want reliable ejection.\n\x09 * Needs bReleaseCartridgeWhenOpened to be set to true for the feature to work\n\x09 */" },
		{ "EditCondition", "bReleaseCartridgeWhenOpened" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "ToolTip", "Force (Acceleration in uu/s\xc2\xb2) of the inserted Cartridge if there is a ejector.\nMake sure that it can overcome gravity (normally 980uu/s\xc2\xb2) in case you want reliable ejection.\nNeeds bReleaseCartridgeWhenOpened to be set to true for the feature to work" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EjectorForce = { "EjectorForce", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, EjectorForce), METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EjectorForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EjectorForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**\n\x09 * Sound to play on any events that are related to cartridge insertion.\n\x09 * Use a int parameter (switch) with the name \"MagEvent\" to make use of automatically switching sounds\n\x09 * use the following convention 0 Start Insertion, 1 Fully Inserted, 2 Start Drop, 3 Fully Dropped\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "ToolTip", "Sound to play on any events that are related to cartridge insertion.\nUse a int parameter (switch) with the name \"MagEvent\" to make use of automatically switching sounds\nuse the following convention 0 Start Insertion, 1 Fully Inserted, 2 Start Drop, 3 Fully Dropped" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertSound = { "CartridgeInsertSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, CartridgeInsertSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**\n\x09 * Sound to play when the breech opens or closes.\n\x09 * You can use a bool parameter (branch) with the name \"Open\" to have different sounds on open and close.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRLoadableBreechComponent.h" },
		{ "ToolTip", "Sound to play when the breech opens or closes.\nYou can use a bool parameter (branch) with the name \"Open\" to have different sounds on open and close." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseSound = { "OpenCloseSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadableBreechComponent, OpenCloseSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadableBreechComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_FiringComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CurrentCartridge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginOpenBreech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnOpenedBreech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnBeginCloseBreech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EventOnClosedBreech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_AllowedCartridges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_BreechOpenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_bReleaseCartridgeWhenOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_EjectorForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_CartridgeInsertSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadableBreechComponent_Statics::NewProp_OpenCloseSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadableBreechComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadableBreechComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadableBreechComponent_Statics::ClassParams = {
		&ULoadableBreechComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadableBreechComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadableBreechComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadableBreechComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadableBreechComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadableBreechComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadableBreechComponent, 2885303162);
	template<> TACTICALVRCORE_API UClass* StaticClass<ULoadableBreechComponent>()
	{
		return ULoadableBreechComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadableBreechComponent(Z_Construct_UClass_ULoadableBreechComponent, &ULoadableBreechComponent::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ULoadableBreechComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadableBreechComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
