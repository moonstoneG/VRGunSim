// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVREjectionPort.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVREjectionPort() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREjectionPort_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVREjectionPort();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRSpentCartridge_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UTVREjectionPort::execOnPooledCartridgeDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_PooledCatridge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPooledCartridgeDestroyed(Z_Param_PooledCatridge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVREjectionPort::execGetEjectionDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetEjectionDir();
		P_NATIVE_END;
	}
	void UTVREjectionPort::StaticRegisterNativesUTVREjectionPort()
	{
		UClass* Class = UTVREjectionPort::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEjectionDir", &UTVREjectionPort::execGetEjectionDir },
			{ "OnPooledCartridgeDestroyed", &UTVREjectionPort::execOnPooledCartridgeDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics
	{
		struct TVREjectionPort_eventGetEjectionDir_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVREjectionPort_eventGetEjectionDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ejection" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVREjectionPort, nullptr, "GetEjectionDir", nullptr, nullptr, sizeof(TVREjectionPort_eventGetEjectionDir_Parms), Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics
	{
		struct TVREjectionPort_eventOnPooledCartridgeDestroyed_Parms
		{
			AActor* PooledCatridge;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PooledCatridge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::NewProp_PooledCatridge = { "PooledCatridge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVREjectionPort_eventOnPooledCartridgeDestroyed_Parms, PooledCatridge), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::NewProp_PooledCatridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVREjectionPort, nullptr, "OnPooledCartridgeDestroyed", nullptr, nullptr, sizeof(TVREjectionPort_eventOnPooledCartridgeDestroyed_Parms), Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVREjectionPort_NoRegister()
	{
		return UTVREjectionPort::StaticClass();
	}
	struct Z_Construct_UClass_UTVREjectionPort_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectionArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EjectionDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CartridgePoolSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CartridgePool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CartridgePool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowChamberload_MetaData[];
#endif
		static void NewProp_bAllowChamberload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowChamberload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpentCartridgeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpentCartridgeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVREjectionPort_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVREjectionPort_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVREjectionPort_GetEjectionDir, "GetEjectionDir" }, // 2909552540
		{ &Z_Construct_UFunction_UTVREjectionPort_OnPooledCartridgeDestroyed, "OnPooledCartridgeDestroyed" }, // 564015532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "TacticalVR" },
		{ "Comment", "/**\n * Ejection port component, that ejects cartridges with the ability to eject spent cartridges from a pool.\n * The pooling just cycles through the pool, instead of more sophisticated approaches that searches for the first\n * unused object in the pool. This is more efficient and probably beneficial as we might be rapid firing cartridges.\n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Weapon/Component/TVREjectionPort.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Ejection port component, that ejects cartridges with the ability to eject spent cartridges from a pool.\nThe pooling just cycles through the pool, instead of more sophisticated approaches that searches for the first\nunused object in the pool. This is more efficient and probably beneficial as we might be rapid firing cartridges." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionArrow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionArrow = { "EjectionArrow", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREjectionPort, EjectionArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionDir_MetaData[] = {
		{ "Category", "Ejection" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionDir = { "EjectionDir", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREjectionPort, EjectionDir), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePoolSize_MetaData[] = {
		{ "Category", "Ejection" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePoolSize = { "CartridgePoolSize", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREjectionPort, CartridgePoolSize), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePoolSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool_Inner = { "CartridgePool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATVRSpentCartridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool = { "CartridgePool", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREjectionPort, CartridgePool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload_MetaData[] = {
		{ "Category", "Chamber" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	void Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload_SetBit(void* Obj)
	{
		((UTVREjectionPort*)Obj)->bAllowChamberload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload = { "bAllowChamberload", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTVREjectionPort), &Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_SpentCartridgeClass_MetaData[] = {
		{ "Category", "Ejection" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVREjectionPort.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_SpentCartridgeClass = { "SpentCartridgeClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVREjectionPort, SpentCartridgeClass), Z_Construct_UClass_ATVRSpentCartridge_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_SpentCartridgeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_SpentCartridgeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVREjectionPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_EjectionDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_CartridgePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_bAllowChamberload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVREjectionPort_Statics::NewProp_SpentCartridgeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVREjectionPort_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVREjectionPort>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVREjectionPort_Statics::ClassParams = {
		&UTVREjectionPort::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVREjectionPort_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVREjectionPort_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVREjectionPort_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVREjectionPort()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVREjectionPort_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVREjectionPort, 2436961887);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVREjectionPort>()
	{
		return UTVREjectionPort::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVREjectionPort(Z_Construct_UClass_UTVREjectionPort, &UTVREjectionPort::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVREjectionPort"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVREjectionPort);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
