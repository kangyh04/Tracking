// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FUCellArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFUCellArray() {}

// ********** Begin Cross Module References ********************************************************
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell_NoRegister();
ELLERSMAZE_API UScriptStruct* Z_Construct_UScriptStruct_FUCellArray();
UPackage* Z_Construct_UPackage__Script_EllersMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUCellArray *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUCellArray;
class UScriptStruct* FUCellArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUCellArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUCellArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUCellArray, (UObject*)Z_Construct_UPackage__Script_EllersMaze(), TEXT("UCellArray"));
	}
	return Z_Registration_Info_UScriptStruct_FUCellArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUCellArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/FUCellArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerArray_MetaData[] = {
		{ "Category", "Cell" },
		{ "ModuleRelativePath", "Public/FUCellArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUCellArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUCellArray_Statics::NewProp_InnerArray_Inner = { "InnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUCellArray_Statics::NewProp_InnerArray = { "InnerArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUCellArray, InnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerArray_MetaData), NewProp_InnerArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUCellArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUCellArray_Statics::NewProp_InnerArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUCellArray_Statics::NewProp_InnerArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUCellArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUCellArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EllersMaze,
	nullptr,
	&NewStructOps,
	"UCellArray",
	Z_Construct_UScriptStruct_FUCellArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUCellArray_Statics::PropPointers),
	sizeof(FUCellArray),
	alignof(FUCellArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUCellArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUCellArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUCellArray()
{
	if (!Z_Registration_Info_UScriptStruct_FUCellArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUCellArray.InnerSingleton, Z_Construct_UScriptStruct_FUCellArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUCellArray.InnerSingleton;
}
// ********** End ScriptStruct FUCellArray *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_FUCellArray_h__Script_EllersMaze_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUCellArray::StaticStruct, Z_Construct_UScriptStruct_FUCellArray_Statics::NewStructOps, TEXT("UCellArray"), &Z_Registration_Info_UScriptStruct_FUCellArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUCellArray), 2368078592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_FUCellArray_h__Script_EllersMaze_1782437437(TEXT("/Script/EllersMaze"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_FUCellArray_h__Script_EllersMaze_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_FUCellArray_h__Script_EllersMaze_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
