// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AStarNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAStarNode() {}

// ********** Begin Cross Module References ********************************************************
ASTAR_API UScriptStruct* Z_Construct_UScriptStruct_FAStarNode();
UPackage* Z_Construct_UPackage__Script_AStar();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAStarNode ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAStarNode;
class UScriptStruct* FAStarNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAStarNode, (UObject*)Z_Construct_UPackage__Script_AStar(), TEXT("AStarNode"));
	}
	return Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAStarNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_H_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentX_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentY_MetaData[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_G;
	static const UECodeGen_Private::FIntPropertyParams NewProp_H;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAStarNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, G), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_MetaData), NewProp_G_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, H), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_H_MetaData), NewProp_H_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_ParentX = { "ParentX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, ParentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentX_MetaData), NewProp_ParentX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_ParentY = { "ParentY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, ParentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentY_MetaData), NewProp_ParentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_ParentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_ParentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAStarNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AStar,
	nullptr,
	&NewStructOps,
	"AStarNode",
	Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers),
	sizeof(FAStarNode),
	alignof(FAStarNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAStarNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAStarNode()
{
	if (!Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton, Z_Construct_UScriptStruct_FAStarNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton;
}
// ********** End ScriptStruct FAStarNode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarNode_h__Script_AStar_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAStarNode::StaticStruct, Z_Construct_UScriptStruct_FAStarNode_Statics::NewStructOps, TEXT("AStarNode"), &Z_Registration_Info_UScriptStruct_FAStarNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAStarNode), 486317542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarNode_h__Script_AStar_1982365406(TEXT("/Script/AStar"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarNode_h__Script_AStar_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarNode_h__Script_AStar_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
