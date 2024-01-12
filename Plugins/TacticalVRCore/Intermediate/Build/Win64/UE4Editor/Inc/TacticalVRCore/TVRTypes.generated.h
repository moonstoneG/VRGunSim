// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TACTICALVRCORE_TVRTypes_generated_h
#error "TVRTypes.generated.h already included, missing '#pragma once' in TVRTypes.h"
#endif
#define TACTICALVRCORE_TVRTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TacticalVRCoreExample_main_Plugins_TacticalVRCore_Source_TacticalVRCore_Public_TVRTypes_h


#define FOREACH_ENUM_ETVRLEFTRIGHT(op) \
	op(ETVRLeftRight::None) \
	op(ETVRLeftRight::Left) \
	op(ETVRLeftRight::Right) 

enum class ETVRLeftRight : uint8;
template<> TACTICALVRCORE_API UEnum* StaticEnum<ETVRLeftRight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
