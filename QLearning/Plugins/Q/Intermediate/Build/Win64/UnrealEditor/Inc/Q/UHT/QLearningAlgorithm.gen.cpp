// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearningAlgorithm.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQLearningAlgorithm() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
Q_API UClass* Z_Construct_UClass_UQLearningAlgorithm();
Q_API UClass* Z_Construct_UClass_UQLearningAlgorithm_NoRegister();
UPackage* Z_Construct_UPackage__Script_Q();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQLearningAlgorithm Function Initialize **********************************
struct Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics
{
	struct QLearningAlgorithm_eventInitialize_Parms
	{
		int32 width;
		TArray<int32> maze;
		FIntPoint startPos;
		FIntPoint goalPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maze_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maze_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_maze;
	static const UECodeGen_Private::FStructPropertyParams NewProp_startPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_goalPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QLearningAlgorithm_eventInitialize_Parms, width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_maze_Inner = { "maze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_maze = { "maze", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QLearningAlgorithm_eventInitialize_Parms, maze), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maze_MetaData), NewProp_maze_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QLearningAlgorithm_eventInitialize_Parms, startPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_goalPos = { "goalPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QLearningAlgorithm_eventInitialize_Parms, goalPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_maze_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_maze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_startPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::NewProp_goalPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQLearningAlgorithm, nullptr, "Initialize", Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::QLearningAlgorithm_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::QLearningAlgorithm_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQLearningAlgorithm_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQLearningAlgorithm_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQLearningAlgorithm::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_width);
	P_GET_TARRAY_REF(int32,Z_Param_Out_maze);
	P_GET_STRUCT(FIntPoint,Z_Param_startPos);
	P_GET_STRUCT(FIntPoint,Z_Param_goalPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_width,Z_Param_Out_maze,Z_Param_startPos,Z_Param_goalPos);
	P_NATIVE_END;
}
// ********** End Class UQLearningAlgorithm Function Initialize ************************************

// ********** Begin Class UQLearningAlgorithm Function Train ***************************************
struct Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics
{
	struct QLearningAlgorithm_eventTrain_Parms
	{
		int32 episodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_episodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::NewProp_episodes = { "episodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QLearningAlgorithm_eventTrain_Parms, episodes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::NewProp_episodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQLearningAlgorithm, nullptr, "Train", Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::QLearningAlgorithm_eventTrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::QLearningAlgorithm_eventTrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQLearningAlgorithm_Train()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQLearningAlgorithm_Train_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQLearningAlgorithm::execTrain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_episodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Train(Z_Param_episodes);
	P_NATIVE_END;
}
// ********** End Class UQLearningAlgorithm Function Train *****************************************

// ********** Begin Class UQLearningAlgorithm ******************************************************
void UQLearningAlgorithm::StaticRegisterNativesUQLearningAlgorithm()
{
	UClass* Class = UQLearningAlgorithm::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Initialize", &UQLearningAlgorithm::execInitialize },
		{ "Train", &UQLearningAlgorithm::execTrain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQLearningAlgorithm;
UClass* UQLearningAlgorithm::GetPrivateStaticClass()
{
	using TClass = UQLearningAlgorithm;
	if (!Z_Registration_Info_UClass_UQLearningAlgorithm.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QLearningAlgorithm"),
			Z_Registration_Info_UClass_UQLearningAlgorithm.InnerSingleton,
			StaticRegisterNativesUQLearningAlgorithm,
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
	return Z_Registration_Info_UClass_UQLearningAlgorithm.InnerSingleton;
}
UClass* Z_Construct_UClass_UQLearningAlgorithm_NoRegister()
{
	return UQLearningAlgorithm::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQLearningAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "QLearningAlgorithm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maze_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalPos_MetaData[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "Public/QLearningAlgorithm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Maze_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Maze;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQLearningAlgorithm_Initialize, "Initialize" }, // 3995114869
		{ &Z_Construct_UFunction_UQLearningAlgorithm_Train, "Train" }, // 2105698588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQLearningAlgorithm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Maze_Inner = { "Maze", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Maze = { "Maze", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQLearningAlgorithm, Maze), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maze_MetaData), NewProp_Maze_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQLearningAlgorithm, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQLearningAlgorithm, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQLearningAlgorithm, StartPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPos_MetaData), NewProp_StartPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_GoalPos = { "GoalPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQLearningAlgorithm, GoalPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalPos_MetaData), NewProp_GoalPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQLearningAlgorithm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Maze_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Maze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQLearningAlgorithm_Statics::NewProp_GoalPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQLearningAlgorithm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQLearningAlgorithm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Q,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQLearningAlgorithm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQLearningAlgorithm_Statics::ClassParams = {
	&UQLearningAlgorithm::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQLearningAlgorithm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQLearningAlgorithm_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQLearningAlgorithm_Statics::Class_MetaDataParams), Z_Construct_UClass_UQLearningAlgorithm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQLearningAlgorithm()
{
	if (!Z_Registration_Info_UClass_UQLearningAlgorithm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQLearningAlgorithm.OuterSingleton, Z_Construct_UClass_UQLearningAlgorithm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQLearningAlgorithm.OuterSingleton;
}
UQLearningAlgorithm::UQLearningAlgorithm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQLearningAlgorithm);
UQLearningAlgorithm::~UQLearningAlgorithm() {}
// ********** End Class UQLearningAlgorithm ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h__Script_Q_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQLearningAlgorithm, UQLearningAlgorithm::StaticClass, TEXT("UQLearningAlgorithm"), &Z_Registration_Info_UClass_UQLearningAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQLearningAlgorithm), 302812310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h__Script_Q_2526382536(TEXT("/Script/Q"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h__Script_Q_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h__Script_Q_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
