// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AStarAlgorithm.h"
#include "AStarNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAStarAlgorithm() {}

// ********** Begin Cross Module References ********************************************************
ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm();
ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister();
ASTAR_API UScriptStruct* Z_Construct_UScriptStruct_FAStarNode();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AStar();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAStarAlgorithm Function FindPath ****************************************
struct Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics
{
	struct AStarAlgorithm_eventFindPath_Parms
	{
		TArray<int32> grid;
		int32 width;
		int32 startX;
		int32 startY;
		int32 destX;
		int32 destY;
		TArray<FAStarNode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/AStarAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_startX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_startY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_destX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_destY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grid_MetaData), NewProp_grid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_startX = { "startX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, startX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_startY = { "startY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, startY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_destX = { "destX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, destX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_destY = { "destY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, destY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAStarNode, METADATA_PARAMS(0, nullptr) }; // 486317542
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarAlgorithm_eventFindPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 486317542
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_grid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_startX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_startY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_destX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_destY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAStarAlgorithm, nullptr, "FindPath", Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::AStarAlgorithm_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::AStarAlgorithm_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAStarAlgorithm_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAStarAlgorithm_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAStarAlgorithm::execFindPath)
{
	P_GET_TARRAY(int32,Z_Param_grid);
	P_GET_PROPERTY(FIntProperty,Z_Param_width);
	P_GET_PROPERTY(FIntProperty,Z_Param_startX);
	P_GET_PROPERTY(FIntProperty,Z_Param_startY);
	P_GET_PROPERTY(FIntProperty,Z_Param_destX);
	P_GET_PROPERTY(FIntProperty,Z_Param_destY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAStarNode>*)Z_Param__Result=UAStarAlgorithm::FindPath(Z_Param_grid,Z_Param_width,Z_Param_startX,Z_Param_startY,Z_Param_destX,Z_Param_destY);
	P_NATIVE_END;
}
// ********** End Class UAStarAlgorithm Function FindPath ******************************************

// ********** Begin Class UAStarAlgorithm **********************************************************
void UAStarAlgorithm::StaticRegisterNativesUAStarAlgorithm()
{
	UClass* Class = UAStarAlgorithm::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindPath", &UAStarAlgorithm::execFindPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAStarAlgorithm;
UClass* UAStarAlgorithm::GetPrivateStaticClass()
{
	using TClass = UAStarAlgorithm;
	if (!Z_Registration_Info_UClass_UAStarAlgorithm.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AStarAlgorithm"),
			Z_Registration_Info_UClass_UAStarAlgorithm.InnerSingleton,
			StaticRegisterNativesUAStarAlgorithm,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAStarAlgorithm.InnerSingleton;
}
UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister()
{
	return UAStarAlgorithm::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAStarAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AStarAlgorithm.h" },
		{ "ModuleRelativePath", "Public/AStarAlgorithm.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAStarAlgorithm_FindPath, "FindPath" }, // 4124137375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAStarAlgorithm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAStarAlgorithm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AStar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAStarAlgorithm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAStarAlgorithm_Statics::ClassParams = {
	&UAStarAlgorithm::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAStarAlgorithm_Statics::Class_MetaDataParams), Z_Construct_UClass_UAStarAlgorithm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAStarAlgorithm()
{
	if (!Z_Registration_Info_UClass_UAStarAlgorithm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAStarAlgorithm.OuterSingleton, Z_Construct_UClass_UAStarAlgorithm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAStarAlgorithm.OuterSingleton;
}
UAStarAlgorithm::UAStarAlgorithm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAStarAlgorithm);
UAStarAlgorithm::~UAStarAlgorithm() {}
// ********** End Class UAStarAlgorithm ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h__Script_AStar_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAStarAlgorithm, UAStarAlgorithm::StaticClass, TEXT("UAStarAlgorithm"), &Z_Registration_Info_UClass_UAStarAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAStarAlgorithm), 811343098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h__Script_AStar_267781683(TEXT("/Script/AStar"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h__Script_AStar_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h__Script_AStar_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
