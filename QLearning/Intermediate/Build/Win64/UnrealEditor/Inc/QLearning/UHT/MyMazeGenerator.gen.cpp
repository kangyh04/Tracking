// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearning/MyMazeGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyMazeGenerator() {}

// ********** Begin Cross Module References ********************************************************
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMazeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMyMazeGenerator, AMyMazeGenerator::StaticClass, TEXT("AMyMazeGenerator"), &Z_Registration_Info_UClass_AMyMazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMazeGenerator), 2383287981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_829419337(TEXT("/Script/QLearning"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h__Script_QLearning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
