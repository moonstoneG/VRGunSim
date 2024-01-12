// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Interfaces/TVRHandSocketInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRHandSocketInterface() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UHandSocketComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ITVRHandSocketInterface::execGetHandSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHandSocketComponent**)Z_Param__Result=P_THIS->GetHandSocket_Implementation(Z_Param_SlotName);
		P_NATIVE_END;
	}
	UHandSocketComponent* ITVRHandSocketInterface::GetHandSocket(FName SlotName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHandSocket instead.");
		TVRHandSocketInterface_eventGetHandSocket_Parms Parms;
		return Parms.ReturnValue;
	}
	void UTVRHandSocketInterface::StaticRegisterNativesUTVRHandSocketInterface()
	{
		UClass* Class = UTVRHandSocketInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandSocket", &ITVRHandSocketInterface::execGetHandSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHandSocketInterface_eventGetHandSocket_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRHandSocketInterface_eventGetHandSocket_Parms, ReturnValue), Z_Construct_UClass_UHandSocketComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandSocket" },
		{ "ModuleRelativePath", "Public/Interfaces/TVRHandSocketInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRHandSocketInterface, nullptr, "GetHandSocket", nullptr, nullptr, sizeof(TVRHandSocketInterface_eventGetHandSocket_Parms), Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister()
	{
		return UTVRHandSocketInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTVRHandSocketInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRHandSocketInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRHandSocketInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRHandSocketInterface_GetHandSocket, "GetHandSocket" }, // 86604149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRHandSocketInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/TVRHandSocketInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRHandSocketInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITVRHandSocketInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRHandSocketInterface_Statics::ClassParams = {
		&UTVRHandSocketInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTVRHandSocketInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRHandSocketInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRHandSocketInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRHandSocketInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRHandSocketInterface, 973450213);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRHandSocketInterface>()
	{
		return UTVRHandSocketInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRHandSocketInterface(Z_Construct_UClass_UTVRHandSocketInterface, &UTVRHandSocketInterface::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRHandSocketInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRHandSocketInterface);
	static FName NAME_UTVRHandSocketInterface_GetHandSocket = FName(TEXT("GetHandSocket"));
	UHandSocketComponent* ITVRHandSocketInterface::Execute_GetHandSocket(const UObject* O, FName SlotName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTVRHandSocketInterface::StaticClass()));
		TVRHandSocketInterface_eventGetHandSocket_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTVRHandSocketInterface_GetHandSocket);
		if (Func)
		{
			Parms.SlotName=SlotName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITVRHandSocketInterface*)(O->GetNativeInterfaceAddress(UTVRHandSocketInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHandSocket_Implementation(SlotName);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
