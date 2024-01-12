// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Settings/TVRCoreGameplaySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRCoreGameplaySettings() {}
// Cross Module References
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_EStockType();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ERotationStyle();
	TACTICALVRCORE_API UEnum* Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRCoreGameplaySettings_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRCoreGameplaySettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EStockType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_EStockType, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("EStockType"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<EStockType>()
	{
		return EStockType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStockType(EStockType_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("EStockType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_EStockType_Hash() { return 4147074394U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_EStockType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStockType"), 0, Get_Z_Construct_UEnum_TacticalVRCore_EStockType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStockType::ST_None", (int64)EStockType::ST_None },
				{ "EStockType::ST_VirtualStock", (int64)EStockType::ST_VirtualStock },
				{ "EStockType::ST_PhysicalStock", (int64)EStockType::ST_PhysicalStock },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
				{ "ST_None.Name", "EStockType::ST_None" },
				{ "ST_PhysicalStock.Name", "EStockType::ST_PhysicalStock" },
				{ "ST_VirtualStock.Name", "EStockType::ST_VirtualStock" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"EStockType",
				"EStockType",
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
	static UEnum* ERotationStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ERotationStyle, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ERotationStyle"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ERotationStyle>()
	{
		return ERotationStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationStyle(ERotationStyle_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ERotationStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ERotationStyle_Hash() { return 1010697055U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ERotationStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationStyle"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ERotationStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERotationStyle::ROT_Snap", (int64)ERotationStyle::ROT_Snap },
				{ "ERotationStyle::ROT_ContinuousSnap", (int64)ERotationStyle::ROT_ContinuousSnap },
				{ "ERotationStyle::ROT_Continuous", (int64)ERotationStyle::ROT_Continuous },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
				{ "ROT_Continuous.DisplayName", "Continous Turning" },
				{ "ROT_Continuous.Name", "ERotationStyle::ROT_Continuous" },
				{ "ROT_ContinuousSnap.DisplayName", "Continous Snap Turning" },
				{ "ROT_ContinuousSnap.Name", "ERotationStyle::ROT_ContinuousSnap" },
				{ "ROT_Snap.DisplayName", "Snap Turning" },
				{ "ROT_Snap.Name", "ERotationStyle::ROT_Snap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ERotationStyle",
				"ERotationStyle",
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
	static UEnum* ELocomotionStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle, Z_Construct_UPackage__Script_TacticalVRCore(), TEXT("ELocomotionStyle"));
		}
		return Singleton;
	}
	template<> TACTICALVRCORE_API UEnum* StaticEnum<ELocomotionStyle>()
	{
		return ELocomotionStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocomotionStyle(ELocomotionStyle_StaticEnum, TEXT("/Script/TacticalVRCore"), TEXT("ELocomotionStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle_Hash() { return 3467990082U; }
	UEnum* Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalVRCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocomotionStyle"), 0, Get_Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocomotionStyle::LOC_ContiniousHMD", (int64)ELocomotionStyle::LOC_ContiniousHMD },
				{ "ELocomotionStyle::LOC_ContiniousHand", (int64)ELocomotionStyle::LOC_ContiniousHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LOC_ContiniousHand.DisplayName", "Continuous Controller" },
				{ "LOC_ContiniousHand.Name", "ELocomotionStyle::LOC_ContiniousHand" },
				{ "LOC_ContiniousHMD.DisplayName", "Continuous HMD" },
				{ "LOC_ContiniousHMD.Name", "ELocomotionStyle::LOC_ContiniousHMD" },
				{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalVRCore,
				nullptr,
				"ELocomotionStyle",
				"ELocomotionStyle",
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
	DEFINE_FUNCTION(UTVRCoreGameplaySettings::execResetConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRCoreGameplaySettings::execBPSaveConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRCoreGameplaySettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTVRCoreGameplaySettings**)Z_Param__Result=UTVRCoreGameplaySettings::Get();
		P_NATIVE_END;
	}
	void UTVRCoreGameplaySettings::StaticRegisterNativesUTVRCoreGameplaySettings()
	{
		UClass* Class = UTVRCoreGameplaySettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPSaveConfig", &UTVRCoreGameplaySettings::execBPSaveConfig },
			{ "Get", &UTVRCoreGameplaySettings::execGet },
			{ "ResetConfig", &UTVRCoreGameplaySettings::execResetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blueprint Node to expose the Save Config Function*/" },
		{ "DisplayName", "Save Config" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Blueprint Node to expose the Save Config Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRCoreGameplaySettings, nullptr, "BPSaveConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics
	{
		struct TVRCoreGameplaySettings_eventGet_Parms
		{
			UTVRCoreGameplaySettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRCoreGameplaySettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UTVRCoreGameplaySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Get Tactical VR Core Gameplay Settings" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRCoreGameplaySettings, nullptr, "Get", nullptr, nullptr, sizeof(TVRCoreGameplaySettings_eventGet_Parms), Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRCoreGameplaySettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRCoreGameplaySettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Load the default config file and saves it */" },
		{ "DisplayName", "Reset Config" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Load the default config file and saves it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRCoreGameplaySettings, nullptr, "ResetConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRCoreGameplaySettings_NoRegister()
	{
		return UTVRCoreGameplaySettings::StaticClass();
	}
	struct Z_Construct_UClass_UTVRCoreGameplaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocomotionStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocomotionStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TurnStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapTurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapTurnHisteresis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapTurnHisteresis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightReticleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightReticleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PistolNightSightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PistolNightSightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapTurnFadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTurnFadeDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GunStockType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunStockType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GunStockType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualStockStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VirtualStockStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalStockSecondaryOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalStockSecondaryOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRCoreGameplaySettings_BPSaveConfig, "BPSaveConfig" }, // 2365777741
		{ &Z_Construct_UFunction_UTVRCoreGameplaySettings_Get, "Get" }, // 3400463659
		{ &Z_Construct_UFunction_UTVRCoreGameplaySettings_ResetConfig, "ResetConfig" }, // 1163955159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/TVRCoreGameplaySettings.h" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Currently used Locomotion Style */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Currently used Locomotion Style" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle = { "LocomotionStyle", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, LocomotionStyle), Z_Construct_UEnum_TacticalVRCore_ELocomotionStyle, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Currently used Turning Style */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Currently used Turning Style" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle = { "TurnStyle", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, TurnStyle), Z_Construct_UEnum_TacticalVRCore_ERotationStyle, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Turn speed in deg/s */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Turn speed in deg/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnIncrement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Turn Increment in deg*/" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Turn Increment in deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnIncrement = { "TurnIncrement", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, TurnIncrement), METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnSpeed = { "SnapTurnSpeed", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, SnapTurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnHisteresis_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnHisteresis = { "SnapTurnHisteresis", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, SnapTurnHisteresis), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnHisteresis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnHisteresis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SightReticleColor_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SightReticleColor = { "SightReticleColor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, SightReticleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SightReticleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SightReticleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PistolNightSightColor_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PistolNightSightColor = { "PistolNightSightColor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, PistolNightSightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PistolNightSightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PistolNightSightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LaserColor_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LaserColor = { "LaserColor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, LaserColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LaserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LaserColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnFadeDuration_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Camera Fade duration during snap turn in s*/" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Camera Fade duration during snap turn in s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnFadeDuration = { "SnapTurnFadeDuration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, SnapTurnFadeDuration), METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnFadeDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType_MetaData[] = {
		{ "Category", "Guns" },
		{ "Comment", "/** Gun stock type */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Gun stock type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType = { "GunStockType", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, GunStockType), Z_Construct_UEnum_TacticalVRCore_EStockType, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_VirtualStockStrength_MetaData[] = {
		{ "Category", "Guns" },
		{ "Comment", "/** Strength of virtual gun stock support */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Strength of virtual gun stock support" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_VirtualStockStrength = { "VirtualStockStrength", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, VirtualStockStrength), METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_VirtualStockStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_VirtualStockStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PhysicalStockSecondaryOffset_MetaData[] = {
		{ "Category", "Guns" },
		{ "Comment", "/** Distance of Secondary Grip Location from Primary Grip Location. X - Forward (Barrel), Y - Right, Z - Up */" },
		{ "ModuleRelativePath", "Public/Settings/TVRCoreGameplaySettings.h" },
		{ "ToolTip", "Distance of Secondary Grip Location from Primary Grip Location. X - Forward (Barrel), Y - Right, Z - Up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PhysicalStockSecondaryOffset = { "PhysicalStockSecondaryOffset", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTVRCoreGameplaySettings, PhysicalStockSecondaryOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PhysicalStockSecondaryOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PhysicalStockSecondaryOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LocomotionStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_TurnIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnHisteresis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SightReticleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PistolNightSightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_LaserColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_SnapTurnFadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_GunStockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_VirtualStockStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::NewProp_PhysicalStockSecondaryOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRCoreGameplaySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::ClassParams = {
		&UTVRCoreGameplaySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRCoreGameplaySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRCoreGameplaySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRCoreGameplaySettings, 1277088141);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRCoreGameplaySettings>()
	{
		return UTVRCoreGameplaySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRCoreGameplaySettings(Z_Construct_UClass_UTVRCoreGameplaySettings, &UTVRCoreGameplaySettings::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRCoreGameplaySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRCoreGameplaySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
