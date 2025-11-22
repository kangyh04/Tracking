// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AStarAlgorithm.h"

#ifdef ASTAR_AStarAlgorithm_generated_h
#error "AStarAlgorithm.generated.h already included, missing '#pragma once' in AStarAlgorithm.h"
#endif
#define ASTAR_AStarAlgorithm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAStarNode;

// ********** Begin Class UAStarAlgorithm **********************************************************
#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPath);


ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister();

#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAStarAlgorithm(); \
	friend struct Z_Construct_UClass_UAStarAlgorithm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister(); \
public: \
	DECLARE_CLASS2(UAStarAlgorithm, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AStar"), Z_Construct_UClass_UAStarAlgorithm_NoRegister) \
	DECLARE_SERIALIZER(UAStarAlgorithm)


#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAStarAlgorithm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAStarAlgorithm(UAStarAlgorithm&&) = delete; \
	UAStarAlgorithm(const UAStarAlgorithm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAStarAlgorithm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAStarAlgorithm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAStarAlgorithm) \
	NO_API virtual ~UAStarAlgorithm();


#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_32_PROLOG
#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_INCLASS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAStarAlgorithm;

// ********** End Class UAStarAlgorithm ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
