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
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell();
ELLERSMAZE_API UClass* Z_Construct_UClass_UCell_NoRegister();
UPackage* Z_Construct_UPackage__Script_EllersMaze();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCell ********************************************************************
void UCell::StaticRegisterNativesUCell()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UCell, UCell::StaticClass, TEXT("UCell"), &Z_Registration_Info_UClass_UCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCell), 3971818881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_1830552876(TEXT("/Script/EllersMaze"),
	Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_Cell_h__Script_EllersMaze_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
