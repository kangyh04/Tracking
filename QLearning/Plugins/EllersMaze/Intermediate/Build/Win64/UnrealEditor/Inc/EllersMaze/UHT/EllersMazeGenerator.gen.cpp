// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EllersMazeGenerator.h"
#include "FUCellArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEllersMazeGenerator() {}

// ********** Begin Cross Module References ********************************************************
ELLERSMAZE_API UClass* Z_Construct_UClass_UEllersMazeGenerator();
ELLERSMAZE_API UClass* Z_Construct_UClass_UEllersMazeGenerator_NoRegister();
ELLERSMAZE_API UScriptStruct* Z_Construct_UScriptStruct_FUCellArray();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EllersMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEllersMazeGenerator Function Generate ***********************************
struct Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics
{
	struct EllersMazeGenerator_eventGenerate_Parms
	{
		int32 width;
		int32 height;
		TArray<FUCellArray> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EllersMaze" },
		{ "ModuleRelativePath", "Public/EllersMazeGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EllersMazeGenerator_eventGenerate_Parms, width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EllersMazeGenerator_eventGenerate_Parms, height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUCellArray, METADATA_PARAMS(0, nullptr) }; // 2368078592
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EllersMazeGenerator_eventGenerate_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2368078592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEllersMazeGenerator, nullptr, "Generate", Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::EllersMazeGenerator_eventGenerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::EllersMazeGenerator_eventGenerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEllersMazeGenerator_Generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEllersMazeGenerator_Generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEllersMazeGenerator::execGenerate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_width);
	P_GET_PROPERTY(FIntProperty,Z_Param_height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FUCellArray>*)Z_Param__Result=UEllersMazeGenerator::Generate(Z_Param_width,Z_Param_height);
	P_NATIVE_END;
}
// ********** End Class UEllersMazeGenerator Function Generate *************************************

// ********** Begin Class UEllersMazeGenerator *****************************************************
void UEllersMazeGenerator::StaticRegisterNativesUEllersMazeGenerator()
{
	UClass* Class = UEllersMazeGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Generate", &UEllersMazeGenerator::execGenerate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEllersMazeGenerator;
UClass* UEllersMazeGenerator::GetPrivateStaticClass()
{
	using TClass = UEllersMazeGenerator;
	if (!Z_Registration_Info_UClass_UEllersMazeGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EllersMazeGenerator"),
			Z_Registration_Info_UClass_UEllersMazeGenerator.InnerSingleton,
			StaticRegisterNativesUEllersMazeGenerator,
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
	return Z_Registration_Info_UClass_UEllersMazeGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UEllersMazeGenerator_NoRegister()
{
	return UEllersMazeGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEllersMazeGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "EllersMazeGenerator.h" },
		{ "ModuleRelativePath", "Public/EllersMazeGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEllersMazeGenerator_Generate, "Generate" }, // 3361578649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEllersMazeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEllersMazeGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EllersMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEllersMazeGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEllersMazeGenerator_Statics::ClassParams = {
	&UEllersMazeGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEllersMazeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UEllersMazeGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEllersMazeGenerator()
{
	if (!Z_Registration_Info_UClass_UEllersMazeGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEllersMazeGenerator.OuterSingleton, Z_Construct_UClass_UEllersMazeGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEllersMazeGenerator.OuterSingleton;
}
UEllersMazeGenerator::UEllersMazeGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEllersMazeGenerator);
UEllersMazeGenerator::~UEllersMazeGenerator() {}
// ********** End Class UEllersMazeGenerator *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h__Script_EllersMaze_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEllersMazeGenerator, UEllersMazeGenerator::StaticClass, TEXT("UEllersMazeGenerator"), &Z_Registration_Info_UClass_UEllersMazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEllersMazeGenerator), 438119500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h__Script_EllersMaze_2347285629(TEXT("/Script/EllersMaze"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h__Script_EllersMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h__Script_EllersMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
