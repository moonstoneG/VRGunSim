// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalVRCore/Public/Libraries/TVRFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTVRFunctionLibrary() {}
// Cross Module References
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRFunctionLibrary_NoRegister();
	TACTICALVRCORE_API UClass* Z_Construct_UClass_UTVRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TacticalVRCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UTVRFunctionLibrary::execGetClassDefaultObject)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UTVRFunctionLibrary::GetClassDefaultObject(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRFunctionLibrary::execIsObjectGripType)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsLargeGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTVRFunctionLibrary::IsObjectGripType(Z_Param_Object,Z_Param_bIsLargeGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRFunctionLibrary::execValidateGameplayTagContainer)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_BaseTag);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DefaultTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTVRFunctionLibrary::ValidateGameplayTagContainer(Z_Param_ObjectToCheck,Z_Param_Out_BaseTag,Z_Param_Out_Tags,Z_Param_Out_DefaultTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTVRFunctionLibrary::execValidateGameplayTag)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_BaseTag);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_GameplayTag);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DefaultTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTVRFunctionLibrary::ValidateGameplayTag(Z_Param_ObjectToCheck,Z_Param_Out_BaseTag,Z_Param_Out_GameplayTag,Z_Param_Out_DefaultTag);
		P_NATIVE_END;
	}
	void UTVRFunctionLibrary::StaticRegisterNativesUTVRFunctionLibrary()
	{
		UClass* Class = UTVRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClassDefaultObject", &UTVRFunctionLibrary::execGetClassDefaultObject },
			{ "IsObjectGripType", &UTVRFunctionLibrary::execIsObjectGripType },
			{ "ValidateGameplayTag", &UTVRFunctionLibrary::execValidateGameplayTag },
			{ "ValidateGameplayTagContainer", &UTVRFunctionLibrary::execValidateGameplayTagContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics
	{
		struct TVRFunctionLibrary_eventGetClassDefaultObject_Parms
		{
			UClass* Class;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventGetClassDefaultObject_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventGetClassDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/Libraries/TVRFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRFunctionLibrary, nullptr, "GetClassDefaultObject", nullptr, nullptr, sizeof(TVRFunctionLibrary_eventGetClassDefaultObject_Parms), Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics
	{
		struct TVRFunctionLibrary_eventIsObjectGripType_Parms
		{
			UObject* Object;
			bool bIsLargeGrip;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsLargeGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLargeGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventIsObjectGripType_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_bIsLargeGrip_SetBit(void* Obj)
	{
		((TVRFunctionLibrary_eventIsObjectGripType_Parms*)Obj)->bIsLargeGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_bIsLargeGrip = { "bIsLargeGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRFunctionLibrary_eventIsObjectGripType_Parms), &Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_bIsLargeGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRFunctionLibrary_eventIsObjectGripType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRFunctionLibrary_eventIsObjectGripType_Parms), &Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_bIsLargeGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Libraries/TVRFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRFunctionLibrary, nullptr, "IsObjectGripType", nullptr, nullptr, sizeof(TVRFunctionLibrary_eventIsObjectGripType_Parms), Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics
	{
		struct TVRFunctionLibrary_eventValidateGameplayTag_Parms
		{
			UObject* ObjectToCheck;
			FGameplayTag BaseTag;
			FGameplayTag GameplayTag;
			FGameplayTag DefaultTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ObjectToCheck = { "ObjectToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTag_Parms, ObjectToCheck), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_BaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_BaseTag = { "BaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTag_Parms, BaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_BaseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_BaseTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_GameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_GameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_GameplayTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_DefaultTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_DefaultTag = { "DefaultTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTag_Parms, DefaultTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_DefaultTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_DefaultTag_MetaData)) };
	void Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRFunctionLibrary_eventValidateGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRFunctionLibrary_eventValidateGameplayTag_Parms), &Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ObjectToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_BaseTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_GameplayTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_DefaultTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * @param ObjectToCheck Object that is checked\n\x09 * @param BaseTag Base Tag to check for\n\x09 * @param GameplayTag Specific Gameplay Tag to check for\n\x09 * @param DefaultTag Default Tag to check for\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/Libraries/TVRFunctionLibrary.h" },
		{ "ToolTip", "@param ObjectToCheck Object that is checked\n@param BaseTag Base Tag to check for\n@param GameplayTag Specific Gameplay Tag to check for\n@param DefaultTag Default Tag to check for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRFunctionLibrary, nullptr, "ValidateGameplayTag", nullptr, nullptr, sizeof(TVRFunctionLibrary_eventValidateGameplayTag_Parms), Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics
	{
		struct TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms
		{
			UObject* ObjectToCheck;
			FGameplayTag BaseTag;
			FGameplayTagContainer Tags;
			FGameplayTag DefaultTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ObjectToCheck = { "ObjectToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms, ObjectToCheck), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_BaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_BaseTag = { "BaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms, BaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_BaseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_BaseTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_DefaultTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_DefaultTag = { "DefaultTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms, DefaultTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_DefaultTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_DefaultTag_MetaData)) };
	void Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms), &Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ObjectToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_BaseTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_DefaultTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/Libraries/TVRFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTVRFunctionLibrary, nullptr, "ValidateGameplayTagContainer", nullptr, nullptr, sizeof(TVRFunctionLibrary_eventValidateGameplayTagContainer_Parms), Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTVRFunctionLibrary_NoRegister()
	{
		return UTVRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTVRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTVRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalVRCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTVRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTVRFunctionLibrary_GetClassDefaultObject, "GetClassDefaultObject" }, // 2372478226
		{ &Z_Construct_UFunction_UTVRFunctionLibrary_IsObjectGripType, "IsObjectGripType" }, // 3669265384
		{ &Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTag, "ValidateGameplayTag" }, // 2550977408
		{ &Z_Construct_UFunction_UTVRFunctionLibrary_ValidateGameplayTagContainer, "ValidateGameplayTagContainer" }, // 3062889459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTVRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Libraries/TVRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/TVRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTVRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTVRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTVRFunctionLibrary_Statics::ClassParams = {
		&UTVRFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTVRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTVRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTVRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTVRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTVRFunctionLibrary, 188109088);
	template<> TACTICALVRCORE_API UClass* StaticClass<UTVRFunctionLibrary>()
	{
		return UTVRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTVRFunctionLibrary(Z_Construct_UClass_UTVRFunctionLibrary, &UTVRFunctionLibrary::StaticClass, TEXT("/Script/TacticalVRCore"), TEXT("UTVRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTVRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
