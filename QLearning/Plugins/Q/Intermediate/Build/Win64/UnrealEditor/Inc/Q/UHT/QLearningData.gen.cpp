// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearningData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQLearningData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
Q_API UEnum* Z_Construct_UEnum_Q_EQLearningActionType();
Q_API UScriptStruct* Z_Construct_UScriptStruct_FQLearningRewardData();
Q_API UScriptStruct* Z_Construct_UScriptStruct_FQLearningStateData();
Q_API UScriptStruct* Z_Construct_UScriptStruct_FQLearningStatisticsData();
Q_API UScriptStruct* Z_Construct_UScriptStruct_FQLearningTrainingData();
Q_API UScriptStruct* Z_Construct_UScriptStruct_FQValueData();
UPackage* Z_Construct_UPackage__Script_Q();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQLearningStateData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQLearningStateData;
class UScriptStruct* FQLearningStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQLearningStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQLearningStateData, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("QLearningStateData"));
	}
	return Z_Registration_Info_UScriptStruct_FQLearningStateData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQLearningStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToGoal_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisitedCount_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceToGoal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisitedCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQLearningStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStateData, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_DistanceToGoal = { "DistanceToGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStateData, DistanceToGoal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToGoal_MetaData), NewProp_DistanceToGoal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_VisitedCount = { "VisitedCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStateData, VisitedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisitedCount_MetaData), NewProp_VisitedCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQLearningStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_DistanceToGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewProp_VisitedCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQLearningStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	&NewStructOps,
	"QLearningStateData",
	Z_Construct_UScriptStruct_FQLearningStateData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStateData_Statics::PropPointers),
	sizeof(FQLearningStateData),
	alignof(FQLearningStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQLearningStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQLearningStateData()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQLearningStateData.InnerSingleton, Z_Construct_UScriptStruct_FQLearningStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQLearningStateData.InnerSingleton;
}
// ********** End ScriptStruct FQLearningStateData *************************************************

// ********** Begin ScriptStruct FQLearningTrainingData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQLearningTrainingData;
class UScriptStruct* FQLearningTrainingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningTrainingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQLearningTrainingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQLearningTrainingData, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("QLearningTrainingData"));
	}
	return Z_Registration_Info_UScriptStruct_FQLearningTrainingData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQLearningTrainingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionTaken_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardReceived_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionTaken_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionTaken;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RewardReceived;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQLearningTrainingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningTrainingData, CurrentState), Z_Construct_UScriptStruct_FQLearningStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1859056153
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_ActionTaken_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_ActionTaken = { "ActionTaken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningTrainingData, ActionTaken), Z_Construct_UEnum_Q_EQLearningActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionTaken_MetaData), NewProp_ActionTaken_MetaData) }; // 3921264672
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_RewardReceived = { "RewardReceived", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningTrainingData, RewardReceived), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardReceived_MetaData), NewProp_RewardReceived_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningTrainingData, NextState), Z_Construct_UScriptStruct_FQLearningStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextState_MetaData), NewProp_NextState_MetaData) }; // 1859056153
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_ActionTaken_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_ActionTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_RewardReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewProp_NextState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	&NewStructOps,
	"QLearningTrainingData",
	Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::PropPointers),
	sizeof(FQLearningTrainingData),
	alignof(FQLearningTrainingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQLearningTrainingData()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningTrainingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQLearningTrainingData.InnerSingleton, Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQLearningTrainingData.InnerSingleton;
}
// ********** End ScriptStruct FQLearningTrainingData **********************************************

// ********** Begin ScriptStruct FQValueData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQValueData;
class UScriptStruct* FQValueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQValueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQValueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQValueData, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("QValueData"));
	}
	return Z_Registration_Info_UScriptStruct_FQValueData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQValueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValues_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActionValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQValueData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_ValueProp = { "ActionValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_Key_KeyProp = { "ActionValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Q_EQLearningActionType, METADATA_PARAMS(0, nullptr) }; // 3921264672
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues = { "ActionValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQValueData, ActionValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValues_MetaData), NewProp_ActionValues_MetaData) }; // 3921264672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQValueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQValueData_Statics::NewProp_ActionValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQValueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQValueData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	&NewStructOps,
	"QValueData",
	Z_Construct_UScriptStruct_FQValueData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQValueData_Statics::PropPointers),
	sizeof(FQValueData),
	alignof(FQValueData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQValueData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQValueData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQValueData()
{
	if (!Z_Registration_Info_UScriptStruct_FQValueData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQValueData.InnerSingleton, Z_Construct_UScriptStruct_FQValueData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQValueData.InnerSingleton;
}
// ********** End ScriptStruct FQValueData *********************************************************

// ********** Begin ScriptStruct FQLearningRewardData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQLearningRewardData;
class UScriptStruct* FQLearningRewardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningRewardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQLearningRewardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQLearningRewardData, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("QLearningRewardData"));
	}
	return Z_Registration_Info_UScriptStruct_FQLearningRewardData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQLearningRewardData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalReward_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepPenalty_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstVisitBonus_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevisitPenalty_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloserToGoal_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarFromGoal_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOptimizedPath_MetaData[] = {
		{ "Category", "QLearning|Reward" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalReward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wall;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstVisitBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RevisitPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloserToGoal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarFromGoal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OnOptimizedPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQLearningRewardData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_GoalReward = { "GoalReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, GoalReward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalReward_MetaData), NewProp_GoalReward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_Wall = { "Wall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, Wall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wall_MetaData), NewProp_Wall_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_StepPenalty = { "StepPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, StepPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepPenalty_MetaData), NewProp_StepPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_FirstVisitBonus = { "FirstVisitBonus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, FirstVisitBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstVisitBonus_MetaData), NewProp_FirstVisitBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_RevisitPenalty = { "RevisitPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, RevisitPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevisitPenalty_MetaData), NewProp_RevisitPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_CloserToGoal = { "CloserToGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, CloserToGoal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloserToGoal_MetaData), NewProp_CloserToGoal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_FarFromGoal = { "FarFromGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, FarFromGoal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarFromGoal_MetaData), NewProp_FarFromGoal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_OnOptimizedPath = { "OnOptimizedPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningRewardData, OnOptimizedPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOptimizedPath_MetaData), NewProp_OnOptimizedPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQLearningRewardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_GoalReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_Wall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_StepPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_FirstVisitBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_RevisitPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_CloserToGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_FarFromGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewProp_OnOptimizedPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningRewardData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQLearningRewardData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	&NewStructOps,
	"QLearningRewardData",
	Z_Construct_UScriptStruct_FQLearningRewardData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningRewardData_Statics::PropPointers),
	sizeof(FQLearningRewardData),
	alignof(FQLearningRewardData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningRewardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQLearningRewardData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQLearningRewardData()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningRewardData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQLearningRewardData.InnerSingleton, Z_Construct_UScriptStruct_FQLearningRewardData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQLearningRewardData.InnerSingleton;
}
// ********** End ScriptStruct FQLearningRewardData ************************************************

// ********** Begin ScriptStruct FQLearningStatisticsData ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQLearningStatisticsData;
class UScriptStruct* FQLearningStatisticsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQLearningStatisticsData, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("QLearningStatisticsData"));
	}
	return Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEpisode_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalReward_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepsTaken_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulEpisodes_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageRewardPerEpisode_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestEpisodeReward_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortestPathLength_MetaData[] = {
		{ "Category", "QLearning|Statistics" },
		{ "ModuleRelativePath", "Public/QLearningData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEpisode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalReward;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepsTaken;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessfulEpisodes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageRewardPerEpisode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BestEpisodeReward;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortestPathLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQLearningStatisticsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_CurrentEpisode = { "CurrentEpisode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, CurrentEpisode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEpisode_MetaData), NewProp_CurrentEpisode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_TotalReward = { "TotalReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, TotalReward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalReward_MetaData), NewProp_TotalReward_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_StepsTaken = { "StepsTaken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, StepsTaken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepsTaken_MetaData), NewProp_StepsTaken_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_SuccessfulEpisodes = { "SuccessfulEpisodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, SuccessfulEpisodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulEpisodes_MetaData), NewProp_SuccessfulEpisodes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_AverageRewardPerEpisode = { "AverageRewardPerEpisode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, AverageRewardPerEpisode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageRewardPerEpisode_MetaData), NewProp_AverageRewardPerEpisode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_BestEpisodeReward = { "BestEpisodeReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, BestEpisodeReward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestEpisodeReward_MetaData), NewProp_BestEpisodeReward_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_ShortestPathLength = { "ShortestPathLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQLearningStatisticsData, ShortestPathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortestPathLength_MetaData), NewProp_ShortestPathLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_CurrentEpisode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_TotalReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_StepsTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_SuccessfulEpisodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_AverageRewardPerEpisode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_BestEpisodeReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewProp_ShortestPathLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	&NewStructOps,
	"QLearningStatisticsData",
	Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::PropPointers),
	sizeof(FQLearningStatisticsData),
	alignof(FQLearningStatisticsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQLearningStatisticsData()
{
	if (!Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.InnerSingleton, Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQLearningStatisticsData.InnerSingleton;
}
// ********** End ScriptStruct FQLearningStatisticsData ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningData_h__Script_Q_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQLearningStateData::StaticStruct, Z_Construct_UScriptStruct_FQLearningStateData_Statics::NewStructOps, TEXT("QLearningStateData"), &Z_Registration_Info_UScriptStruct_FQLearningStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQLearningStateData), 1859056153U) },
		{ FQLearningTrainingData::StaticStruct, Z_Construct_UScriptStruct_FQLearningTrainingData_Statics::NewStructOps, TEXT("QLearningTrainingData"), &Z_Registration_Info_UScriptStruct_FQLearningTrainingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQLearningTrainingData), 1265176746U) },
		{ FQValueData::StaticStruct, Z_Construct_UScriptStruct_FQValueData_Statics::NewStructOps, TEXT("QValueData"), &Z_Registration_Info_UScriptStruct_FQValueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQValueData), 1017157045U) },
		{ FQLearningRewardData::StaticStruct, Z_Construct_UScriptStruct_FQLearningRewardData_Statics::NewStructOps, TEXT("QLearningRewardData"), &Z_Registration_Info_UScriptStruct_FQLearningRewardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQLearningRewardData), 929036623U) },
		{ FQLearningStatisticsData::StaticStruct, Z_Construct_UScriptStruct_FQLearningStatisticsData_Statics::NewStructOps, TEXT("QLearningStatisticsData"), &Z_Registration_Info_UScriptStruct_FQLearningStatisticsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQLearningStatisticsData), 4191341645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningData_h__Script_Q_4190721346(TEXT("/Script/Q"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningData_h__Script_Q_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningData_h__Script_Q_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
