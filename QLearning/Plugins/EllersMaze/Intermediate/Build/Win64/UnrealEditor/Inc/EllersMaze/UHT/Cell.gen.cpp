// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cell.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCell() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell();
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell_NoRegister();
UPackage* Z_Construct_UPackage__Script_EllersMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCell Function GetIndices ************************************************
struct Z_Construct_UFunction_UCell_GetIndices_Statics
{
	struct Cell_eventGetIndices_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EllersMaze|Cell" },
		{ "ModuleRelativePath", "Public/Cell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCell_GetIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCell_GetIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cell_eventGetIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCell_GetIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCell_GetIndices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCell_GetIndices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCell_GetIndices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCell, nullptr, "GetIndices", Z_Construct_UFunction_UCell_GetIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCell_GetIndices_Statics::Cell_eventGetIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCell_GetIndices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCell_GetIndices_Statics::Cell_eventGetIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCell_GetIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCell_GetIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCell::execGetIndices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIndices();
	P_NATIVE_END;
}
// ********** End Class UCell Function GetIndices **************************************************

// ********** Begin Class UCell Function GetVertices ***********************************************
struct Z_Construct_UFunction_UCell_GetVertices_Statics
{
	struct Cell_eventGetVertices_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EllersMaze|Cell" },
		{ "ModuleRelativePath", "Public/Cell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCell_GetVertices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCell_GetVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cell_eventGetVertices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCell_GetVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCell_GetVertices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCell_GetVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCell_GetVertices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCell, nullptr, "GetVertices", Z_Construct_UFunction_UCell_GetVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCell_GetVertices_Statics::Cell_eventGetVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCell_GetVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCell_GetVertices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCell_GetVertices_Statics::Cell_eventGetVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCell_GetVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCell_GetVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCell::execGetVertices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertices();
	P_NATIVE_END;
}
// ********** End Class UCell Function GetVertices *************************************************

// ********** Begin Class UCell ********************************************************************
void UCell::StaticRegisterNativesUCell()
{
	UClass* Class = UCell::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIndices", &UCell::execGetIndices },
		{ "GetVertices", &UCell::execGetVertices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCell;
UClass* UCell::GetPrivateStaticClass()
{
	using TClass = UCell;
	if (!Z_Registration_Info_UClass_UCell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Cell"),
			Z_Registration_Info_UClass_UCell.InnerSingleton,
			StaticRegisterNativesUCell,
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
	return Z_Registration_Info_UClass_UCell.InnerSingleton;
}
UClass* Z_Construct_UClass_UCell_NoRegister()
{
	return UCell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Cell.h" },
		{ "ModuleRelativePath", "Public/Cell.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCell_GetIndices, "GetIndices" }, // 6230117
		{ &Z_Construct_UFunction_UCell_GetVertices, "GetVertices" }, // 4214586790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EllersMaze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCell_Statics::ClassParams = {
	&UCell::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCell()
{
	if (!Z_Registration_Info_UClass_UCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCell.OuterSingleton, Z_Construct_UClass_UCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCell.OuterSingleton;
}
UCell::UCell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCell);
UCell::~UCell() {}
// ********** End Class UCell **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCell, UCell::StaticClass, TEXT("UCell"), &Z_Registration_Info_UClass_UCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCell), 3638132670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_3171993884(TEXT("/Script/EllersMaze"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
