// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/TVRCartridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRCartridge() {}
// Cross Module References
	TACTICALVRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactDecalData();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	TACTICALVRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactParticleData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRCartridge();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_ATVRProjectile_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRHandSocketInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FImpactDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TACTICALVRCORE_API uint32 Get_Z_Construct_UScriptStruct_FImpactDecalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactDecalData, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ImpactDecalData"), sizeof(FImpactDecalData), Get_Z_Construct_UScriptStruct_FImpactDecalData_Hash());
	}
	return Singleton;
}
template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<FImpactDecalData>()
{
	return FImpactDecalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImpactDecalData(FImpactDecalData::StaticStruct, TEXT("/Script/TacticalVRCore"), TEXT("ImpactDecalData"), false, nullptr, nullptr);
static struct FScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactDecalData
{
	FScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactDecalData()
	{
		UScriptStruct::DeferCppStructOps<FImpactDecalData>(FName(TEXT("ImpactDecalData")));
	}
} ScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactDecalData;
	struct Z_Construct_UScriptStruct_FImpactDecalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactDecalData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactDecalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Impact Particle" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactDecalData, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Impact Particle" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactDecalData, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_ScaleFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactDecalData_Statics::NewProp_ScaleFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactDecalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
		nullptr,
		&NewStructOps,
		"ImpactDecalData",
		sizeof(FImpactDecalData),
		alignof(FImpactDecalData),
		Z_Construct_UScriptStruct_FImpactDecalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactDecalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactDecalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactDecalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImpactDecalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImpactDecalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImpactDecalData"), sizeof(FImpactDecalData), Get_Z_Construct_UScriptStruct_FImpactDecalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImpactDecalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImpactDecalData_Hash() { return 3767545737U; }
class UScriptStruct* FImpactParticleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TACTICALVRCORE_API uint32 Get_Z_Construct_UScriptStruct_FImpactParticleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactParticleData, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ImpactParticleData"), sizeof(FImpactParticleData), Get_Z_Construct_UScriptStruct_FImpactParticleData_Hash());
	}
	return Singleton;
}
template<> TACTICALVRCORE_API UScriptStruct* StaticStruct<FImpactParticleData>()
{
	return FImpactParticleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImpactParticleData(FImpactParticleData::StaticStruct, TEXT("/Script/TacticalVRCore"), TEXT("ImpactParticleData"), false, nullptr, nullptr);
static struct FScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactParticleData
{
	FScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactParticleData()
	{
		UScriptStruct::DeferCppStructOps<FImpactParticleData>(FName(TEXT("ImpactParticleData")));
	}
} ScriptStruct_TacticalVRCore_StaticRegisterNativesFImpactParticleData;
	struct Z_Construct_UScriptStruct_FImpactParticleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactParticleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactParticleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Impact Particle" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactParticleData, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "Impact Particle" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactParticleData, UpAxis), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_UpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_UpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Impact Particle" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactParticleData, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ScaleFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_UpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactParticleData_Statics::NewProp_ScaleFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
		nullptr,
		&NewStructOps,
		"ImpactParticleData",
		sizeof(FImpactParticleData),
		alignof(FImpactParticleData),
		Z_Construct_UScriptStruct_FImpactParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImpactParticleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImpactParticleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImpactParticleData"), sizeof(FImpactParticleData), Get_Z_Construct_UScriptStruct_FImpactParticleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImpactParticleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImpactParticleData_Hash() { return 2378105717U; }
	DEFINE_FUNCTION(ATVRCartridge::execGetBaseDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execGetTraceDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTraceDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execGetSpentCartridgeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetSpentCartridgeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execGetBuckshotSpread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBuckshotSpread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execGetDamageType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UDamageType> *)Z_Param__Result=P_THIS->GetDamageType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execGetNumBuckshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetNumBuckshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execIsBuckshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBuckshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATVRCartridge::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ATVRCartridge::StaticRegisterNativesATVRCartridge()
	{
		UClass* Class = ATVRCartridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseDamage", &ATVRCartridge::execGetBaseDamage },
			{ "GetBuckshotSpread", &ATVRCartridge::execGetBuckshotSpread },
			{ "GetDamageType", &ATVRCartridge::execGetDamageType },
			{ "GetNumBuckshot", &ATVRCartridge::execGetNumBuckshot },
			{ "GetSpentCartridgeMesh", &ATVRCartridge::execGetSpentCartridgeMesh },
			{ "GetTraceDistance", &ATVRCartridge::execGetTraceDistance },
			{ "IsBuckshot", &ATVRCartridge::execIsBuckshot },
			{ "OnComponentHit", &ATVRCartridge::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics
	{
		struct TVRCartridge_eventGetBaseDamage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetBaseDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetBaseDamage", nullptr, nullptr, sizeof(TVRCartridge_eventGetBaseDamage_Parms), Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetBaseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetBaseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics
	{
		struct TVRCartridge_eventGetBuckshotSpread_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetBuckshotSpread_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetBuckshotSpread", nullptr, nullptr, sizeof(TVRCartridge_eventGetBuckshotSpread_Parms), Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics
	{
		struct TVRCartridge_eventGetDamageType_Parms
		{
			TSubclassOf<UDamageType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetDamageType_Parms, ReturnValue), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetDamageType", nullptr, nullptr, sizeof(TVRCartridge_eventGetDamageType_Parms), Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics
	{
		struct TVRCartridge_eventGetNumBuckshot_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetNumBuckshot_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetNumBuckshot", nullptr, nullptr, sizeof(TVRCartridge_eventGetNumBuckshot_Parms), Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics
	{
		struct TVRCartridge_eventGetSpentCartridgeMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetSpentCartridgeMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetSpentCartridgeMesh", nullptr, nullptr, sizeof(TVRCartridge_eventGetSpentCartridgeMesh_Parms), Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics
	{
		struct TVRCartridge_eventGetTraceDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventGetTraceDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "GetTraceDistance", nullptr, nullptr, sizeof(TVRCartridge_eventGetTraceDistance_Parms), Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_GetTraceDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_GetTraceDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics
	{
		struct TVRCartridge_eventIsBuckshot_Parms
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
	void Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRCartridge_eventIsBuckshot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRCartridge_eventIsBuckshot_Parms), &Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "IsBuckshot", nullptr, nullptr, sizeof(TVRCartridge_eventIsBuckshot_Parms), Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_IsBuckshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_IsBuckshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics
	{
		struct TVRCartridge_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventOnComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCartridge_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATVRCartridge, nullptr, "OnComponentHit", nullptr, nullptr, sizeof(TVRCartridge_eventOnComponentHit_Parms), Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATVRCartridge_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATVRCartridge_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATVRCartridge_NoRegister()
	{
		return ATVRCartridge::StaticClass();
	}
	struct Z_Construct_UClass_ATVRCartridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpent_MetaData[];
#endif
		static void NewProp_bIsSpent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBuckshot_MetaData[];
#endif
		static void NewProp_bIsBuckshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBuckshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBucks_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumBucks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuckshotSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuckshotSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpentCartridgeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpentCartridgeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsProjectile_MetaData[];
#endif
		static void NewProp_bIsProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactParticles_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImpactParticles_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ImpactParticles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactDecals_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImpactDecals_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ImpactDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATVRCartridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrippableStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATVRCartridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATVRCartridge_GetBaseDamage, "GetBaseDamage" }, // 2216053893
		{ &Z_Construct_UFunction_ATVRCartridge_GetBuckshotSpread, "GetBuckshotSpread" }, // 2384810654
		{ &Z_Construct_UFunction_ATVRCartridge_GetDamageType, "GetDamageType" }, // 3352673441
		{ &Z_Construct_UFunction_ATVRCartridge_GetNumBuckshot, "GetNumBuckshot" }, // 2781017595
		{ &Z_Construct_UFunction_ATVRCartridge_GetSpentCartridgeMesh, "GetSpentCartridgeMesh" }, // 971019159
		{ &Z_Construct_UFunction_ATVRCartridge_GetTraceDistance, "GetTraceDistance" }, // 4026232789
		{ &Z_Construct_UFunction_ATVRCartridge_IsBuckshot, "IsBuckshot" }, // 2809310775
		{ &Z_Construct_UFunction_ATVRCartridge_OnComponentHit, "OnComponentHit" }, // 1826805143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapon/TVRCartridge.h" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_CollisionCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_CollisionCapsule = { "CollisionCapsule", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_CollisionCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_CollisionCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_HitAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_HitAudioComponent = { "HitAudioComponent", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, HitAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_HitAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_HitAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent_MetaData[] = {
		{ "Category", "Cartridge" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	void Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent_SetBit(void* Obj)
	{
		((ATVRCartridge*)Obj)->bIsSpent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent = { "bIsSpent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCartridge), &Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	void Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot_SetBit(void* Obj)
	{
		((ATVRCartridge*)Obj)->bIsBuckshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot = { "bIsBuckshot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCartridge), &Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_NumBucks_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "bIsBuckshot" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_NumBucks = { "NumBucks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, NumBucks), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_NumBucks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_NumBucks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BuckshotSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "bIsBuckshot" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BuckshotSpread = { "BuckshotSpread", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, BuckshotSpread), METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BuckshotSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BuckshotSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_SpentCartridgeMesh_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_SpentCartridgeMesh = { "SpentCartridgeMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, SpentCartridgeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_SpentCartridgeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_SpentCartridgeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	void Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile_SetBit(void* Obj)
	{
		((ATVRCartridge*)Obj)->bIsProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile = { "bIsProjectile", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATVRCartridge), &Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditCondition", "bIsProjectile" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, ProjectileClass), Z_Construct_UClass_ATVRProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_TraceDistance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_ValueProp = { "ImpactParticles", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FImpactParticleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_Key_KeyProp = { "ImpactParticles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, ImpactParticles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_ValueProp = { "ImpactDecals", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FImpactDecalData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_Key_KeyProp = { "ImpactDecals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals = { "ImpactDecals", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, ImpactDecals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Weapon/TVRCartridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATVRCartridge, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BaseDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATVRCartridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_CollisionCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_HitAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsBuckshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_NumBucks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BuckshotSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_SpentCartridgeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_bIsProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_ImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATVRCartridge_Statics::NewProp_BaseDamage,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATVRCartridge_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTVRHandSocketInterface_NoRegister, (int32)VTABLE_OFFSET(ATVRCartridge, ITVRHandSocketInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATVRCartridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATVRCartridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATVRCartridge_Statics::ClassParams = {
		&ATVRCartridge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATVRCartridge_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATVRCartridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATVRCartridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATVRCartridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATVRCartridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATVRCartridge, 1627613017);
	template<> TACTICALVRCORE_API UClass* StaticClass<ATVRCartridge>()
	{
		return ATVRCartridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATVRCartridge(Z_Construct_UClass_ATVRCartridge, &ATVRCartridge::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("ATVRCartridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATVRCartridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
