// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Component/TVRAttachPoint_Laser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRAttachPoint_Laser() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Laser_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachPoint_Laser();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRAttachmentPoint();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Laser_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTVRAttachPoint_Laser::execSetCurrentLaser)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAttachment);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentLaser(Z_Param_NewAttachment,Z_Param_bForce);
		P_NATIVE_END;
	}
	void UTVRAttachPoint_Laser::StaticRegisterNativesUTVRAttachPoint_Laser()
	{
		UClass* Class = UTVRAttachPoint_Laser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentLaser", &UTVRAttachPoint_Laser::execSetCurrentLaser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics
	{
		struct TVRAttachPoint_Laser_eventSetCurrentLaser_Parms
		{
			TSubclassOf<AWPNA_Laser>  NewAttachment;
			bool bForce;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAttachment;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_NewAttachment = { "NewAttachment", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRAttachPoint_Laser_eventSetCurrentLaser_Parms, NewAttachment), Z_Construct_UClass_AWPNA_Laser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((TVRAttachPoint_Laser_eventSetCurrentLaser_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRAttachPoint_Laser_eventSetCurrentLaser_Parms), &Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRAttachPoint_Laser_eventSetCurrentLaser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRAttachPoint_Laser_eventSetCurrentLaser_Parms), &Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_NewAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attach Point" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRAttachPoint_Laser, nullptr, "SetCurrentLaser", nullptr, nullptr, sizeof(TVRAttachPoint_Laser_eventSetCurrentLaser_Parms), Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRAttachPoint_Laser_NoRegister()
	{
		return UTVRAttachPoint_Laser::StaticClass();
	}
	struct Z_Construct_UClass_UTVRAttachPoint_Laser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLaserClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentLaserClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllowedLasers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedLasers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedLasers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTVRAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRAttachPoint_Laser_SetCurrentLaser, "SetCurrentLaser" }, // 961231314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "ChildActorComponent Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Weapon/Component/TVRAttachPoint_Laser.h" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Laser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_CurrentLaserClass_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_CurrentLaserClass = { "CurrentLaserClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Laser, CurrentLaserClass), Z_Construct_UClass_AWPNA_Laser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_CurrentLaserClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_CurrentLaserClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers_Inner = { "AllowedLasers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWPNA_Laser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers_MetaData[] = {
		{ "Category", "Attach Point" },
		{ "ModuleRelativePath", "Public/Weapon/Component/TVRAttachPoint_Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers = { "AllowedLasers", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRAttachPoint_Laser, AllowedLasers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_CurrentLaserClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::NewProp_AllowedLasers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRAttachPoint_Laser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::ClassParams = {
		&UTVRAttachPoint_Laser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRAttachPoint_Laser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRAttachPoint_Laser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRAttachPoint_Laser, 3925274932);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRAttachPoint_Laser>()
	{
		return UTVRAttachPoint_Laser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRAttachPoint_Laser(Z_Construct_UClass_UTVRAttachPoint_Laser, &UTVRAttachPoint_Laser::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRAttachPoint_Laser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRAttachPoint_Laser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
