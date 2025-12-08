// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearning/MyMazeGenerator.h"
#include "FUCellArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyMazeGenerator() {}

// ********** Begin Cross Module References ********************************************************
ELLERSMAZE_API UScriptStruct* Z_Construct_UScriptStruct_FUCellArray();
ENGINE_API UClass* Z_Construct_UClass_AActor();
QLEARNING_API UClass* Z_Construct_UClass_AMyMazeGenerator();
QLEARNING_API UClass* Z_Construct_UClass_AMyMazeGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_QLearning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyMazeGenerator *********************************************************
void AMyMazeGenerator::StaticRegisterNativesAMyMazeGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyMazeGenerator;
UClass* AMyMazeGenerator::GetPrivateStaticClass()
{
	using TClass = AMyMazeGenerator;
	if (!Z_Registration_Info_UClass_AMyMazeGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyMazeGenerator"),
			Z_Registration_Info_UClass_AMyMazeGenerator.InnerSingleton,
			StaticRegisterNativesAMyMazeGenerator,
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
	return Z_Registration_Info_UClass_AMyMazeGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyMazeGenerator_NoRegister()
{
	return AMyMazeGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyMazeGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyMazeGenerator.h" },
		{ "ModuleRelativePath", "MyMazeGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeWidth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MyMazeGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MyMazeGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maze_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MyMazeGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MazeWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MazeHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maze_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Maze;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMazeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_MazeWidth = { "MazeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMazeGenerator, MazeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeWidth_MetaData), NewProp_MazeWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_MazeHeight = { "MazeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMazeGenerator, MazeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeHeight_MetaData), NewProp_MazeHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_Maze_Inner = { "Maze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUCellArray, METADATA_PARAMS(0, nullptr) }; // 335216256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_Maze = { "Maze", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMazeGenerator, Maze), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maze_MetaData), NewProp_Maze_MetaData) }; // 335216256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMazeGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_MazeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_MazeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_Maze_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMazeGenerator_Statics::NewProp_Maze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMazeGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyMazeGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_QLearning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMazeGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMazeGenerator_Statics::ClassParams = {
	&AMyMazeGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyMazeGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyMazeGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMazeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMazeGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMazeGenerator()
{
	if (!Z_Registration_Info_UClass_AMyMazeGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMazeGenerator.OuterSingleton, Z_Construct_UClass_AMyMazeGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMazeGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMazeGenerator);
AMyMazeGenerator::~AMyMazeGenerator() {}
// ********** End Class AMyMazeGenerator ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMazeGenerator, AMyMazeGenerator::StaticClass, TEXT("AMyMazeGenerator"), &Z_Registration_Info_UClass_AMyMazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMazeGenerator), 1688915606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_2247051739(TEXT("/Script/QLearning"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
