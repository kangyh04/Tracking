// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearning/TestActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestActorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
QLEARNING_API UClass* Z_Construct_UClass_UTestActorComponent();
QLEARNING_API UClass* Z_Construct_UClass_UTestActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_QLearning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTestActorComponent ******************************************************
void UTestActorComponent::StaticRegisterNativesUTestActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTestActorComponent;
UClass* UTestActorComponent::GetPrivateStaticClass()
{
	using TClass = UTestActorComponent;
	if (!Z_Registration_Info_UClass_UTestActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestActorComponent"),
			Z_Registration_Info_UClass_UTestActorComponent.InnerSingleton,
			StaticRegisterNativesUTestActorComponent,
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
	return Z_Registration_Info_UClass_UTestActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestActorComponent_NoRegister()
{
	return UTestActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TestActorComponent.h" },
		{ "ModuleRelativePath", "TestActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_QLearning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestActorComponent_Statics::ClassParams = {
	&UTestActorComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestActorComponent()
{
	if (!Z_Registration_Info_UClass_UTestActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestActorComponent.OuterSingleton, Z_Construct_UClass_UTestActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestActorComponent);
UTestActorComponent::~UTestActorComponent() {}
// ********** End Class UTestActorComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_TestActorComponent_h__Script_QLearning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestActorComponent, UTestActorComponent::StaticClass, TEXT("UTestActorComponent"), &Z_Registration_Info_UClass_UTestActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestActorComponent), 2595061804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_TestActorComponent_h__Script_QLearning_400740971(TEXT("/Script/QLearning"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_TestActorComponent_h__Script_QLearning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Source_QLearning_TestActorComponent_h__Script_QLearning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
