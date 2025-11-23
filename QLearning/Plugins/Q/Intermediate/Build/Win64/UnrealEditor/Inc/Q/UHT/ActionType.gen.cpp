// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActionType() {}

// ********** Begin Cross Module References ********************************************************
Q_API UEnum* Z_Construct_UEnum_Q_EQLearningActionType();
Q_API UEnum* Z_Construct_UEnum_Q_EQLearningCellType();
UPackage* Z_Construct_UPackage__Script_Q();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EQLearningActionType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQLearningActionType;
static UEnum* EQLearningActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQLearningActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQLearningActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Q_EQLearningActionType, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("EQLearningActionType"));
	}
	return Z_Registration_Info_UEnum_EQLearningActionType.OuterSingleton;
}
template<> Q_API UEnum* StaticEnum<EQLearningActionType>()
{
	return EQLearningActionType_StaticEnum();
}
struct Z_Construct_UEnum_Q_EQLearningActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EQLearningActionType::Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EQLearningActionType::Left" },
		{ "ModuleRelativePath", "Public/ActionType.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EQLearningActionType::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EQLearningActionType::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQLearningActionType::Up", (int64)EQLearningActionType::Up },
		{ "EQLearningActionType::Down", (int64)EQLearningActionType::Down },
		{ "EQLearningActionType::Left", (int64)EQLearningActionType::Left },
		{ "EQLearningActionType::Right", (int64)EQLearningActionType::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Q_EQLearningActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	"EQLearningActionType",
	"EQLearningActionType",
	Z_Construct_UEnum_Q_EQLearningActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Q_EQLearningActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Q_EQLearningActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Q_EQLearningActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Q_EQLearningActionType()
{
	if (!Z_Registration_Info_UEnum_EQLearningActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQLearningActionType.InnerSingleton, Z_Construct_UEnum_Q_EQLearningActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQLearningActionType.InnerSingleton;
}
// ********** End Enum EQLearningActionType ********************************************************

// ********** Begin Enum EQLearningCellType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQLearningCellType;
static UEnum* EQLearningCellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQLearningCellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQLearningCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Q_EQLearningCellType, (UObject*)Z_Construct_UPackage__Script_Q(), TEXT("EQLearningCellType"));
	}
	return Z_Registration_Info_UEnum_EQLearningCellType.OuterSingleton;
}
template<> Q_API UEnum* StaticEnum<EQLearningCellType>()
{
	return EQLearningCellType_StaticEnum();
}
struct Z_Construct_UEnum_Q_EQLearningCellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "EQLearningCellType::Empty" },
		{ "Goal.DisplayName", "Goal" },
		{ "Goal.Name", "EQLearningCellType::Goal" },
		{ "ModuleRelativePath", "Public/ActionType.h" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "EQLearningCellType::Start" },
		{ "Wall.DisplayName", "Wall" },
		{ "Wall.Name", "EQLearningCellType::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQLearningCellType::Empty", (int64)EQLearningCellType::Empty },
		{ "EQLearningCellType::Wall", (int64)EQLearningCellType::Wall },
		{ "EQLearningCellType::Start", (int64)EQLearningCellType::Start },
		{ "EQLearningCellType::Goal", (int64)EQLearningCellType::Goal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Q_EQLearningCellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Q,
	nullptr,
	"EQLearningCellType",
	"EQLearningCellType",
	Z_Construct_UEnum_Q_EQLearningCellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Q_EQLearningCellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Q_EQLearningCellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Q_EQLearningCellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Q_EQLearningCellType()
{
	if (!Z_Registration_Info_UEnum_EQLearningCellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQLearningCellType.InnerSingleton, Z_Construct_UEnum_Q_EQLearningCellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQLearningCellType.InnerSingleton;
}
// ********** End Enum EQLearningCellType **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_ActionType_h__Script_Q_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQLearningActionType_StaticEnum, TEXT("EQLearningActionType"), &Z_Registration_Info_UEnum_EQLearningActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3921264672U) },
		{ EQLearningCellType_StaticEnum, TEXT("EQLearningCellType"), &Z_Registration_Info_UEnum_EQLearningCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1926343143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_ActionType_h__Script_Q_2511031395(TEXT("/Script/Q"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_ActionType_h__Script_Q_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_ActionType_h__Script_Q_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
