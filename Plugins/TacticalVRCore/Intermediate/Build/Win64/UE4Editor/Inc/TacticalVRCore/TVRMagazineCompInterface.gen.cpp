// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRMagazineCompInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRMagazineCompInterface() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineCompInterface_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRMagazineCompInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UTVRMagazineCompInterface::execIsMagReleasePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMagReleasePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRMagazineCompInterface::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UTVRMagazineCompInterface::StaticRegisterNativesUTVRMagazineCompInterface()
	{
		UClass* Class = UTVRMagazineCompInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMagReleasePressed", &UTVRMagazineCompInterface::execIsMagReleasePressed },
			{ "OnBeginOverlap", &UTVRMagazineCompInterface::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics
	{
		struct TVRMagazineCompInterface_eventIsMagReleasePressed_Parms
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
	void Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRMagazineCompInterface_eventIsMagReleasePressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRMagazineCompInterface_eventIsMagReleasePressed_Parms), &Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRMagazineCompInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRMagazineCompInterface, nullptr, "IsMagReleasePressed", nullptr, nullptr, sizeof(TVRMagazineCompInterface_eventIsMagReleasePressed_Parms), Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics
	{
		struct TVRMagazineCompInterface_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
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
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazineCompInterface_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazineCompInterface_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazineCompInterface_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazineCompInterface_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TVRMagazineCompInterface_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRMagazineCompInterface_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRMagazineCompInterface_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Overlap Event. Bound to the BeginOverlap delegate.\n\x09 * @param OverlappedComponent Component that is overlapping (should be this component)\n\x09 * @param OtherActor The actors that is overlapping with the magwell\n\x09 * @param OtherComp The component of OtherActor that is overlapping with this\n\x09 * @param OtherBodyIndex Body Index of the overlapping body\n\x09 * @param bFromSweep Whether the overlap was triggered by a sweep\n\x09 * @param SweepResult Sweep result\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRMagazineCompInterface.h" },
		{ "ToolTip", "Overlap Event. Bound to the BeginOverlap delegate.\n@param OverlappedComponent Component that is overlapping (should be this component)\n@param OtherActor The actors that is overlapping with the magwell\n@param OtherComp The component of OtherActor that is overlapping with this\n@param OtherBodyIndex Body Index of the overlapping body\n@param bFromSweep Whether the overlap was triggered by a sweep\n@param SweepResult Sweep result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRMagazineCompInterface, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(TVRMagazineCompInterface_eventOnBeginOverlap_Parms), Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRMagazineCompInterface_NoRegister()
	{
		return UTVRMagazineCompInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTVRMagazineCompInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRMagazineCompInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRMagazineCompInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRMagazineCompInterface_IsMagReleasePressed, "IsMagReleasePressed" }, // 1993612700
		{ &Z_Construct_UFunction_UTVRMagazineCompInterface_OnBeginOverlap, "OnBeginOverlap" }, // 878837110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRMagazineCompInterface_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ComponentTick Navigation Physics Collision Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Weapon/Component/TVRMagazineCompInterface.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRMagazineCompInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRMagazineCompInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRMagazineCompInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRMagazineCompInterface_Statics::ClassParams = {
		&UTVRMagazineCompInterface::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRMagazineCompInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRMagazineCompInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRMagazineCompInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRMagazineCompInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRMagazineCompInterface, 3269033880);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRMagazineCompInterface>()
	{
		return UTVRMagazineCompInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRMagazineCompInterface(Z_Construct_UClass_UTVRMagazineCompInterface, &UTVRMagazineCompInterface::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRMagazineCompInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRMagazineCompInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
