// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Weapon/Attachments/WPNA_MagnifyingSight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPNA_MagnifyingSight() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_MagnifyingSight_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_MagnifyingSight();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_AWPNA_Sight();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	DEFINE_FUNCTION(AWPNA_MagnifyingSight::execGetZoomLevelFromCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetZoomLevelFromCurve(Z_Param_Time);
		P_NATIVE_END;
	}
	static FName NAME_AWPNA_MagnifyingSight_SetReticleMaterial = FName(TEXT("SetReticleMaterial"));
	void AWPNA_MagnifyingSight::SetReticleMaterial(UMaterialInterface* NewMaterial)
	{
		WPNA_MagnifyingSight_eventSetReticleMaterial_Parms Parms;
		Parms.NewMaterial=NewMaterial;
		ProcessEvent(FindFunctionChecked(NAME_AWPNA_MagnifyingSight_SetReticleMaterial),&Parms);
	}
	void AWPNA_MagnifyingSight::StaticRegisterNativesAWPNA_MagnifyingSight()
	{
		UClass* Class = AWPNA_MagnifyingSight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetZoomLevelFromCurve", &AWPNA_MagnifyingSight::execGetZoomLevelFromCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics
	{
		struct WPNA_MagnifyingSight_eventGetZoomLevelFromCurve_Parms
		{
			float Time;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_MagnifyingSight_eventGetZoomLevelFromCurve_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_MagnifyingSight_eventGetZoomLevelFromCurve_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_MagnifyingSight, nullptr, "GetZoomLevelFromCurve", nullptr, nullptr, sizeof(WPNA_MagnifyingSight_eventGetZoomLevelFromCurve_Parms), Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPNA_MagnifyingSight_eventSetReticleMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** This function needs to be overridden in Blueprint to set the material accordingly. */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "This function needs to be overridden in Blueprint to set the material accordingly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPNA_MagnifyingSight, nullptr, "SetReticleMaterial", nullptr, nullptr, sizeof(WPNA_MagnifyingSight_eventSetReticleMaterial_Parms), Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWPNA_MagnifyingSight_NoRegister()
	{
		return AWPNA_MagnifyingSight::StaticClass();
	}
	struct Z_Construct_UClass_AWPNA_MagnifyingSight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApertureRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApertureRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFactor1x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFactor1x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterialTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReticleMaterialTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterialPassive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReticleMaterialPassive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReticleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstFocalPointReticle_MetaData[];
#endif
		static void NewProp_bFirstFocalPointReticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstFocalPointReticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSimpleApproach_MetaData[];
#endif
		static void NewProp_bUseSimpleApproach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSimpleApproach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVariableOptic_MetaData[];
#endif
		static void NewProp_bIsVariableOptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVariableOptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomDialCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomDialCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWPNA_Sight,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPNA_MagnifyingSight_GetZoomLevelFromCurve, "GetZoomLevelFromCurve" }, // 3533014843
		{ &Z_Construct_UFunction_AWPNA_MagnifyingSight_SetReticleMaterial, "SetReticleMaterial" }, // 1163669675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_SceneCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Magnifying Sight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_SceneCaptureComponent = { "SceneCaptureComponent", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, SceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_SceneCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_SceneCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ApertureRadius_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Radius of the aperture in uu. Used for FOV calculation. */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Radius of the aperture in uu. Used for FOV calculation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ApertureRadius = { "ApertureRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ApertureRadius), METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ApertureRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ApertureRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomFactor_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Zoom Factor of the scope. 3 means 3 times magnification. Adjust BaseFactor1X first to setup a proper 1X level. */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Zoom Factor of the scope. 3 means 3 times magnification. Adjust BaseFactor1X first to setup a proper 1X level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomFactor = { "ZoomFactor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ZoomFactor), METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_BaseFactor1x_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Basic Zoom factor. Used */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Basic Zoom factor. Used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_BaseFactor1x = { "BaseFactor1x", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, BaseFactor1x), METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_BaseFactor1x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_BaseFactor1x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialTemplate_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Base Material to use for the Reticle Material*/" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Base Material to use for the Reticle Material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialTemplate = { "ReticleMaterialTemplate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialPassive_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Material used when the weapon is not being held to prevent seeing render textures*/" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Material used when the weapon is not being held to prevent seeing render textures" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialPassive = { "ReticleMaterialPassive", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterialPassive), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialPassive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialPassive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterial_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** The Instance of the Reticle Material. Use this to modify parameters. */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "The Instance of the Reticle Material. Use this to modify parameters." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterial = { "ReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ReticleMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Is this a first focal point reticle, i.E. reticle is zoomed with the image */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Is this a first focal point reticle, i.E. reticle is zoomed with the image" },
	};
#endif
	void Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle_SetBit(void* Obj)
	{
		((AWPNA_MagnifyingSight*)Obj)->bFirstFocalPointReticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle = { "bFirstFocalPointReticle", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_MagnifyingSight), &Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Use simplified approach for adapting camera FOV to distance to eyes */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Use simplified approach for adapting camera FOV to distance to eyes" },
	};
#endif
	void Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach_SetBit(void* Obj)
	{
		((AWPNA_MagnifyingSight*)Obj)->bUseSimpleApproach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach = { "bUseSimpleApproach", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_MagnifyingSight), &Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Use simplified approach for adapting camera FOV to distance to eyes */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Use simplified approach for adapting camera FOV to distance to eyes" },
	};
#endif
	void Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic_SetBit(void* Obj)
	{
		((AWPNA_MagnifyingSight*)Obj)->bIsVariableOptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic = { "bIsVariableOptic", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWPNA_MagnifyingSight), &Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomDialCurve_MetaData[] = {
		{ "Category", "Sight" },
		{ "Comment", "/** Curve used to correlate a float value to a zoom value. To be used with dials, levers, etc. */" },
		{ "ModuleRelativePath", "Public/Weapon/Attachments/WPNA_MagnifyingSight.h" },
		{ "ToolTip", "Curve used to correlate a float value to a zoom value. To be used with dials, levers, etc." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomDialCurve = { "ZoomDialCurve", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWPNA_MagnifyingSight, ZoomDialCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomDialCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomDialCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_SceneCaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ApertureRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_BaseFactor1x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterialPassive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ReticleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bFirstFocalPointReticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bUseSimpleApproach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_bIsVariableOptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::NewProp_ZoomDialCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPNA_MagnifyingSight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::ClassParams = {
		&AWPNA_MagnifyingSight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWPNA_MagnifyingSight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWPNA_MagnifyingSight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWPNA_MagnifyingSight, 1982963174);
	template<> TACTICALVRCORE_API UClass* StaticClass<AWPNA_MagnifyingSight>()
	{
		return AWPNA_MagnifyingSight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWPNA_MagnifyingSight(Z_Construct_UClass_AWPNA_MagnifyingSight, &AWPNA_MagnifyingSight::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("AWPNA_MagnifyingSight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWPNA_MagnifyingSight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
