// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRChargingHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRChargingHandle() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandle_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandle();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableBoxComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventTickChargingHandleDelegate_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventTickChargingHandleDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "TickChargingHandleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventTickChargingHandleDelegate_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInformation;
			float DeltaTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "TickChargignHandleGripDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventTickChargignHandleGripDelegate_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTVRChargingHandle::execGetRelativeGripTransform)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRelativeGripTransform(Z_Param_GrippingController);
		P_NATIVE_END;
	}
	void UTVRChargingHandle::StaticRegisterNativesUTVRChargingHandle()
	{
		UClass* Class = UTVRChargingHandle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRelativeGripTransform", &UTVRChargingHandle::execGetRelativeGripTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics
	{
		struct TVRChargingHandle_eventGetRelativeGripTransform_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandle_eventGetRelativeGripTransform_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRChargingHandle_eventGetRelativeGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRChargingHandle, nullptr, "GetRelativeGripTransform", nullptr, nullptr, sizeof(TVRChargingHandle_eventGetRelativeGripTransform_Parms), Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRChargingHandle_NoRegister()
	{
		return UTVRChargingHandle::StaticClass();
	}
	struct Z_Construct_UClass_UTVRChargingHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTickGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventTickGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargingHandleStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeflection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeflection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReciprocating_MetaData[];
#endif
		static void NewProp_bIsReciprocating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReciprocating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingHandleSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargingHandleSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRChargingHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrippableBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRChargingHandle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRChargingHandle_GetRelativeGripTransform, "GetRelativeGripTransform" }, // 2884809817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Weapon/Component/TVRChargingHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTickGrip_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTickGrip = { "EventTickGrip", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, EventTickGrip), Z_Construct_UDelegateFunction_TacticalVRCore_TickChargignHandleGripDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTickGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTickGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTick_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTick = { "EventTick", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, EventTick), Z_Construct_UDelegateFunction_TacticalVRCore_TickChargingHandleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleStiffness_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleStiffness = { "ChargingHandleStiffness", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, ChargingHandleStiffness), METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_MaxDeflection_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_MaxDeflection = { "MaxDeflection", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, MaxDeflection), METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_MaxDeflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_MaxDeflection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating_MetaData[] = {
		{ "Category", "Charging Handle" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	void Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating_SetBit(void* Obj)
	{
		((UTVRChargingHandle*)Obj)->bIsReciprocating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating = { "bIsReciprocating", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVRChargingHandle), &Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleSoundCue_MetaData[] = {
		{ "Category", "PumpAction" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRChargingHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleSoundCue = { "ChargingHandleSoundCue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRChargingHandle, ChargingHandleSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRChargingHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTickGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_EventTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_MaxDeflection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_bIsReciprocating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRChargingHandle_Statics::NewProp_ChargingHandleSoundCue,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTVRChargingHandle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRChargingHandleInterface_NoRegister, (int32)VTABLE_OFFSET(UTVRChargingHandle, ITVRChargingHandleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRChargingHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRChargingHandle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRChargingHandle_Statics::ClassParams = {
		&UTVRChargingHandle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRChargingHandle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRChargingHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRChargingHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRChargingHandle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRChargingHandle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRChargingHandle, 1391956876);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRChargingHandle>()
	{
		return UTVRChargingHandle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRChargingHandle(Z_Construct_UClass_UTVRChargingHandle, &UTVRChargingHandle::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRChargingHandle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRChargingHandle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
