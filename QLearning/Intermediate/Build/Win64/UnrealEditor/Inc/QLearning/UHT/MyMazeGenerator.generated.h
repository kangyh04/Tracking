// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyMazeGenerator.h"

#ifdef QLEARNING_MyMazeGenerator_generated_h
#error "MyMazeGenerator.generated.h already included, missing '#pragma once' in MyMazeGenerator.h"
#endif
#define QLEARNING_MyMazeGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyMazeGenerator *********************************************************
QLEARNING_API UClass* Z_Construct_UClass_AMyMazeGenerator_NoRegister();

#define FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMazeGenerator(); \
	friend struct Z_Construct_UClass_AMyMazeGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QLEARNING_API UClass* Z_Construct_UClass_AMyMazeGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyMazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QLearning"), Z_Construct_UClass_AMyMazeGenerator_NoRegister) \
	DECLARE_SERIALIZER(AMyMazeGenerator)


#define FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyMazeGenerator(AMyMazeGenerator&&) = delete; \
	AMyMazeGenerator(const AMyMazeGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMazeGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMazeGenerator) \
	NO_API virtual ~AMyMazeGenerator();


#define FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_9_PROLOG
#define FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_12_INCLASS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyMazeGenerator;

// ********** End Class AMyMazeGenerator ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Source_QLearning_MyMazeGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
