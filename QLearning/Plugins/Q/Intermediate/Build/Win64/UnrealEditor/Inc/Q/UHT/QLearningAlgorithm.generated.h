// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QLearningAlgorithm.h"

#ifdef Q_QLearningAlgorithm_generated_h
#error "QLearningAlgorithm.generated.h already included, missing '#pragma once' in QLearningAlgorithm.h"
#endif
#define Q_QLearningAlgorithm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQLearningAlgorithm ******************************************************
#define FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrain); \
	DECLARE_FUNCTION(execInitialize);


Q_API UClass* Z_Construct_UClass_UQLearningAlgorithm_NoRegister();

#define FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQLearningAlgorithm(); \
	friend struct Z_Construct_UClass_UQLearningAlgorithm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Q_API UClass* Z_Construct_UClass_UQLearningAlgorithm_NoRegister(); \
public: \
	DECLARE_CLASS2(UQLearningAlgorithm, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Q"), Z_Construct_UClass_UQLearningAlgorithm_NoRegister) \
	DECLARE_SERIALIZER(UQLearningAlgorithm)


#define FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQLearningAlgorithm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQLearningAlgorithm(UQLearningAlgorithm&&) = delete; \
	UQLearningAlgorithm(const UQLearningAlgorithm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQLearningAlgorithm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQLearningAlgorithm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQLearningAlgorithm) \
	NO_API virtual ~UQLearningAlgorithm();


#define FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_13_PROLOG
#define FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_INCLASS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQLearningAlgorithm;

// ********** End Class UQLearningAlgorithm ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Plugins_Q_Source_Q_Public_QLearningAlgorithm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
