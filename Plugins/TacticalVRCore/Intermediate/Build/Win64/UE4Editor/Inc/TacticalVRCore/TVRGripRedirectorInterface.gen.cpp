// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Interfaces/TVRGripRedirectorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRGripRedirectorInterface() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGripRedirectorInterface_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRGripRedirectorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ITVRGripRedirectorInterface::execGetGripSlotOverride)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GripLocation);
		P_GET_UBOOL(Z_Param_bIsSecondary);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlot);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripSlotOverride_Implementation(Z_Param_Out_GripLocation,Z_Param_bIsSecondary,Z_Param_Out_bHadSlot,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_Hand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITVRGripRedirectorInterface::execGetGripRedirectTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetGripRedirectTarget_Implementation();
		P_NATIVE_END;
	}
	AActor* ITVRGripRedirectorInterface::GetGripRedirectTarget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripRedirectTarget instead.");
		TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITVRGripRedirectorInterface::GetGripSlotOverride(FVector const& GripLocation, bool bIsSecondary, bool& bHadSlot, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* Hand) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripSlotOverride instead.");
		TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms Parms;
		return Parms.ReturnValue;
	}
	void UTVRGripRedirectorInterface::StaticRegisterNativesUTVRGripRedirectorInterface()
	{
		UClass* Class = UTVRGripRedirectorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGripRedirectTarget", &ITVRGripRedirectorInterface::execGetGripRedirectTarget },
			{ "GetGripSlotOverride", &ITVRGripRedirectorInterface::execGetGripSlotOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grip Redirector" },
		{ "ModuleRelativePath", "Public/Interfaces/TVRGripRedirectorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGripRedirectorInterface, nullptr, "GetGripRedirectTarget", nullptr, nullptr, sizeof(TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms), Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripLocation;
		static void NewProp_bIsSecondary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSecondary;
		static void NewProp_bHadSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_GripLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_GripLocation = { "GripLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms, GripLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_GripLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_GripLocation_MetaData)) };
	void Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bIsSecondary_SetBit(void* Obj)
	{
		((TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms*)Obj)->bIsSecondary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bIsSecondary = { "bIsSecondary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms), &Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bIsSecondary_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bHadSlot_SetBit(void* Obj)
	{
		((TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms*)Obj)->bHadSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bHadSlot = { "bHadSlot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms), &Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bHadSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms, Hand), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_Hand_MetaData)) };
	void Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms), &Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_GripLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bIsSecondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_bHadSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grip Redirector" },
		{ "ModuleRelativePath", "Public/Interfaces/TVRGripRedirectorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRGripRedirectorInterface, nullptr, "GetGripSlotOverride", nullptr, nullptr, sizeof(TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms), Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRGripRedirectorInterface_NoRegister()
	{
		return UTVRGripRedirectorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTVRGripRedirectorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripRedirectTarget, "GetGripRedirectTarget" }, // 672331357
		{ &Z_Construct_UFunction_UTVRGripRedirectorInterface_GetGripSlotOverride, "GetGripSlotOverride" }, // 1619077576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/TVRGripRedirectorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITVRGripRedirectorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::ClassParams = {
		&UTVRGripRedirectorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRGripRedirectorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRGripRedirectorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRGripRedirectorInterface, 1819734033);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRGripRedirectorInterface>()
	{
		return UTVRGripRedirectorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRGripRedirectorInterface(Z_Construct_UClass_UTVRGripRedirectorInterface, &UTVRGripRedirectorInterface::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRGripRedirectorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRGripRedirectorInterface);
	static FName NAME_UTVRGripRedirectorInterface_GetGripRedirectTarget = FName(TEXT("GetGripRedirectTarget"));
	AActor* ITVRGripRedirectorInterface::Execute_GetGripRedirectTarget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRGripRedirectorInterface::StaticClass()));
		TVRGripRedirectorInterface_eventGetGripRedirectTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRGripRedirectorInterface_GetGripRedirectTarget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRGripRedirectorInterface*)(O->GetNativeInterfaceAddress(UTVRGripRedirectorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGripRedirectTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTVRGripRedirectorInterface_GetGripSlotOverride = FName(TEXT("GetGripSlotOverride"));
	bool ITVRGripRedirectorInterface::Execute_GetGripSlotOverride(const UObject* O, FVector const& GripLocation, bool bIsSecondary, bool& bHadSlot, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* Hand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRGripRedirectorInterface::StaticClass()));
		TVRGripRedirectorInterface_eventGetGripSlotOverride_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRGripRedirectorInterface_GetGripSlotOverride);
		if (Func)
		{
			Parms.GripLocation=GripLocation;
			Parms.bIsSecondary=bIsSecondary;
			Parms.bHadSlot=bHadSlot;
			Parms.SlotWorldTransform=SlotWorldTransform;
			Parms.SlotName=SlotName;
			Parms.Hand=Hand;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			bHadSlot=Parms.bHadSlot;
			SlotWorldTransform=Parms.SlotWorldTransform;
			SlotName=Parms.SlotName;
		}
		else if (auto I = (const ITVRGripRedirectorInterface*)(O->GetNativeInterfaceAddress(UTVRGripRedirectorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGripSlotOverride_Implementation(GripLocation,bIsSecondary,bHadSlot,SlotWorldTransform,SlotName,Hand);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
