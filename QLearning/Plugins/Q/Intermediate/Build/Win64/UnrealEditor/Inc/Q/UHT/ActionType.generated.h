// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionType.h"

#ifdef Q_ActionType_generated_h
#error "ActionType.generated.h already included, missing '#pragma once' in ActionType.h"
#endif
#define Q_ActionType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_ActionType_h

// ********** Begin Enum EQLearningActionType ******************************************************
#define FOREACH_ENUM_EQLEARNINGACTIONTYPE(op) \
	op(EQLearningActionType::Up) \
	op(EQLearningActionType::Down) \
	op(EQLearningActionType::Left) \
	op(EQLearningActionType::Right) 

enum class EQLearningActionType : uint8;
template<> struct TIsUEnumClass<EQLearningActionType> { enum { Value = true }; };
template<> Q_API UEnum* StaticEnum<EQLearningActionType>();
// ********** End Enum EQLearningActionType ********************************************************

// ********** Begin Enum EQLearningCellType ********************************************************
#define FOREACH_ENUM_EQLEARNINGCELLTYPE(op) \
	op(EQLearningCellType::Empty) \
	op(EQLearningCellType::Wall) \
	op(EQLearningCellType::Start) \
	op(EQLearningCellType::Goal) 

enum class EQLearningCellType : uint8;
template<> struct TIsUEnumClass<EQLearningCellType> { enum { Value = true }; };
template<> Q_API UEnum* StaticEnum<EQLearningCellType>();
// ********** End Enum EQLearningCellType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
