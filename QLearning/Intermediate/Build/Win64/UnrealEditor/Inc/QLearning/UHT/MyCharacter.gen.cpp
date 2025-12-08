// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearning/MyCharacter.h"
#include "FUCellArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell_NoRegister();
ELLERSMAZE_API UScriptStruct* Z_Construct_UScriptStruct_FUCellArray();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
Q_API UClass* Z_Construct_UClass_UQLearningAlgorithm_NoRegister();
QLEARNING_API UClass* Z_Construct_UClass_AMyCharacter();
QLEARNING_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_QLearning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyCharacter Function DesideStartAndDest *********************************
struct Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics
{
	struct MyCharacter_eventDesideStartAndDest_Parms
	{
		TArray<FUCellArray> map;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_map_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_map;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_map_Inner = { "map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUCellArray, METADATA_PARAMS(0, nullptr) }; // 335216256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventDesideStartAndDest_Parms, map), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_map_MetaData), NewProp_map_MetaData) }; // 335216256
void Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyCharacter_eventDesideStartAndDest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyCharacter_eventDesideStartAndDest_Parms), &Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_map_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "DesideStartAndDest", Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::MyCharacter_eventDesideStartAndDest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::MyCharacter_eventDesideStartAndDest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_DesideStartAndDest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_DesideStartAndDest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execDesideStartAndDest)
{
	P_GET_TARRAY_REF(FUCellArray,Z_Param_Out_map);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DesideStartAndDest(Z_Param_Out_map);
	P_NATIVE_END;
}
// ********** End Class AMyCharacter Function DesideStartAndDest ***********************************

// ********** Begin Class AMyCharacter Function PrepareQLearning ***********************************
struct Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics
{
	struct MyCharacter_eventPrepareQLearning_Parms
	{
		TArray<int32> area;
		int32 width;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_area_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_area;
	static const UECodeGen_Private::FIntPropertyParams NewProp_width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventPrepareQLearning_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventPrepareQLearning_Parms, width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_area_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::NewProp_width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "PrepareQLearning", Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::MyCharacter_eventPrepareQLearning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::MyCharacter_eventPrepareQLearning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_PrepareQLearning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_PrepareQLearning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execPrepareQLearning)
{
	P_GET_TARRAY(int32,Z_Param_area);
	P_GET_PROPERTY(FIntProperty,Z_Param_width);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareQLearning(Z_Param_area,Z_Param_width);
	P_NATIVE_END;
}
// ********** End Class AMyCharacter Function PrepareQLearning *************************************

// ********** Begin Class AMyCharacter Function TrainQLearning *************************************
struct Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics
{
	struct MyCharacter_eventTrainQLearning_Parms
	{
		TArray<FUCellArray> map;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_map_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::NewProp_map_Inner = { "map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUCellArray, METADATA_PARAMS(0, nullptr) }; // 335216256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTrainQLearning_Parms, map), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_map_MetaData), NewProp_map_MetaData) }; // 335216256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::NewProp_map_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::NewProp_map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "TrainQLearning", Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::MyCharacter_eventTrainQLearning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::MyCharacter_eventTrainQLearning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_TrainQLearning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_TrainQLearning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execTrainQLearning)
{
	P_GET_TARRAY_REF(FUCellArray,Z_Param_Out_map);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrainQLearning(Z_Param_Out_map);
	P_NATIVE_END;
}
// ********** End Class AMyCharacter Function TrainQLearning ***************************************

// ********** Begin Class AMyCharacter *************************************************************
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
	UClass* Class = AMyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DesideStartAndDest", &AMyCharacter::execDesideStartAndDest },
		{ "PrepareQLearning", &AMyCharacter::execPrepareQLearning },
		{ "TrainQLearning", &AMyCharacter::execTrainQLearning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyCharacter;
UClass* AMyCharacter::GetPrivateStaticClass()
{
	using TClass = AMyCharacter;
	if (!Z_Registration_Info_UClass_AMyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyCharacter"),
			Z_Registration_Info_UClass_AMyCharacter.InnerSingleton,
			StaticRegisterNativesAMyCharacter,
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
	return Z_Registration_Info_UClass_AMyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QLearningAlgorithm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QLearning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCell_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MazeCell" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QLearning" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QLearningAlgorithm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCell;
	static void NewProp_IsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_DesideStartAndDest, "DesideStartAndDest" }, // 1201611176
		{ &Z_Construct_UFunction_AMyCharacter_PrepareQLearning, "PrepareQLearning" }, // 1481970578
		{ &Z_Construct_UFunction_AMyCharacter_TrainQLearning, "TrainQLearning" }, // 3792990002
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_QLearningAlgorithm = { "QLearningAlgorithm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, QLearningAlgorithm), Z_Construct_UClass_UQLearningAlgorithm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QLearningAlgorithm_MetaData), NewProp_QLearningAlgorithm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CurrentCell = { "CurrentCell", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CurrentCell), Z_Construct_UClass_UCell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCell_MetaData), NewProp_CurrentCell_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsMoving_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->IsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMoving_MetaData), NewProp_IsMoving_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_QLearningAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CurrentCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_QLearning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// ********** End Class AMyCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyCharacter_h__Script_QLearning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 2937651918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyCharacter_h__Script_QLearning_4220914000(TEXT("/Script/QLearning"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyCharacter_h__Script_QLearning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyCharacter_h__Script_QLearning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
