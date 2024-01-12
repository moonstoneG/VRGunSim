// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Components/TVRHoverInputVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRHoverInputVolume() {}
// Cross Module References
	TACTICALVRCORE_API UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHoverInputVolume();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics
	{
		struct _Script_TacticalVRCore_eventOnHoveredInputEvent_Parms
		{
			UGripMotionControllerComponent* Controller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalVRCore_eventOnHoveredInputEvent_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore, nullptr, "OnHoveredInputEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalVRCore_eventOnHoveredInputEvent_Parms), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTVRHoverInputVolume::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	void UTVRHoverInputVolume::StaticRegisterNativesUTVRHoverInputVolume()
	{
		UClass* Class = UTVRHoverInputVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndOverlap", &UTVRHoverInputVolume::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics
	{
		struct TVRHoverInputVolume_eventOnEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHoverInputVolume_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHoverInputVolume_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHoverInputVolume_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHoverInputVolume_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRHoverInputVolume, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(TVRHoverInputVolume_eventOnEndOverlap_Parms), Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRHoverInputVolume_NoRegister()
	{
		return UTVRHoverInputVolume::StaticClass();
	}
	struct Z_Construct_UClass_UTVRHoverInputVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnMagReleasePressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnMagReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnBoltReleaseReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnBoltReleaseReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnBoltReleasePressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnBoltReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnMagReleaseReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnMagReleaseReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnLaserPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnLaserPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnLightPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnLightPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBreakOffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputBreakOffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagReleasePressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagReleasePressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoltReleasePressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoltReleasePressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRHoverInputVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRHoverInputVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRHoverInputVolume_OnEndOverlap, "OnEndOverlap" }, // 1669889996
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Physics Rendering Navigation ComponentTick Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming VirtualTexture Components|Activation Trigger" },
		{ "IncludePath", "Components/TVRHoverInputVolume.h" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnUsed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnUsed = { "EventOnUsed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnUsed), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleasePressed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleasePressed = { "EventOnMagReleasePressed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnMagReleasePressed), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleaseReleased_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleaseReleased = { "EventOnBoltReleaseReleased", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnBoltReleaseReleased), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleaseReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleaseReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleasePressed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleasePressed = { "EventOnBoltReleasePressed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnBoltReleasePressed), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleaseReleased_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleaseReleased = { "EventOnMagReleaseReleased", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnMagReleaseReleased), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleaseReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleaseReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLaserPressed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLaserPressed = { "EventOnLaserPressed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnLaserPressed), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLaserPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLaserPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLightPressed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLightPressed = { "EventOnLightPressed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, EventOnLightPressed), Z_Construct_UDelegateFunction_TacticalVRCore_OnHoveredInputEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLightPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLightPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_InputBreakOffDistance_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_InputBreakOffDistance = { "InputBreakOffDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, InputBreakOffDistance), METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_InputBreakOffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_InputBreakOffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_MagReleasePressed_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_MagReleasePressed = { "MagReleasePressed", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, MagReleasePressed), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_MagReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_MagReleasePressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_BoltReleasePressed_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TVRHoverInputVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_BoltReleasePressed = { "BoltReleasePressed", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRHoverInputVolume, BoltReleasePressed), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_BoltReleasePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_BoltReleasePressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRHoverInputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleaseReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnBoltReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnMagReleaseReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLaserPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_EventOnLightPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_InputBreakOffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_MagReleasePressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRHoverInputVolume_Statics::NewProp_BoltReleasePressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRHoverInputVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRHoverInputVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRHoverInputVolume_Statics::ClassParams = {
		&UTVRHoverInputVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRHoverInputVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRHoverInputVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHoverInputVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRHoverInputVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRHoverInputVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRHoverInputVolume, 853039509);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRHoverInputVolume>()
	{
		return UTVRHoverInputVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRHoverInputVolume(Z_Construct_UClass_UTVRHoverInputVolume, &UTVRHoverInputVolume::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRHoverInputVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRHoverInputVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
