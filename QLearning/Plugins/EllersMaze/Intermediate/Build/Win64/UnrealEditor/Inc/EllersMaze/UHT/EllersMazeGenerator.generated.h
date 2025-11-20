// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EllersMazeGenerator.h"

#ifdef ELLERSMAZE_EllersMazeGenerator_generated_h
#error "EllersMazeGenerator.generated.h already included, missing '#pragma once' in EllersMazeGenerator.h"
#endif
#define ELLERSMAZE_EllersMazeGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FUCellArray;

// ********** Begin Class UEllersMazeGenerator *****************************************************
#define FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerate);


ELLERSMAZE_API UClass* Z_Construct_UClass_UEllersMazeGenerator_NoRegister();

#define FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEllersMazeGenerator(); \
	friend struct Z_Construct_UClass_UEllersMazeGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELLERSMAZE_API UClass* Z_Construct_UClass_UEllersMazeGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UEllersMazeGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EllersMaze"), Z_Construct_UClass_UEllersMazeGenerator_NoRegister) \
	DECLARE_SERIALIZER(UEllersMazeGenerator)


#define FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEllersMazeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEllersMazeGenerator(UEllersMazeGenerator&&) = delete; \
	UEllersMazeGenerator(const UEllersMazeGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEllersMazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEllersMazeGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEllersMazeGenerator) \
	NO_API virtual ~UEllersMazeGenerator();


#define FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_16_PROLOG
#define FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_INCLASS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEllersMazeGenerator;

// ********** End Class UEllersMazeGenerator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Plugins_EllersMaze_Source_EllersMaze_Public_EllersMazeGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
