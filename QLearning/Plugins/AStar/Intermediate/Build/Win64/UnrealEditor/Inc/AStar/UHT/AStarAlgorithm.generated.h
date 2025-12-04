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

// ********** Begin Class UAStarAlgorithm **********************************************************
#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateManhattanDistance); \
	DECLARE_FUNCTION(execFindMockPath); \
	DECLARE_FUNCTION(execFindPath);


ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister();

#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAStarAlgorithm(); \
	friend struct Z_Construct_UClass_UAStarAlgorithm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASTAR_API UClass* Z_Construct_UClass_UAStarAlgorithm_NoRegister(); \
public: \
	DECLARE_CLASS2(UAStarAlgorithm, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AStar"), Z_Construct_UClass_UAStarAlgorithm_NoRegister) \
	DECLARE_SERIALIZER(UAStarAlgorithm)


#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAStarAlgorithm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAStarAlgorithm(UAStarAlgorithm&&) = delete; \
	UAStarAlgorithm(const UAStarAlgorithm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAStarAlgorithm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAStarAlgorithm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAStarAlgorithm) \
	NO_API virtual ~UAStarAlgorithm();


#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_34_PROLOG
#define FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_INCLASS_NO_PURE_DECLS \
	FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAStarAlgorithm;

// ********** End Class UAStarAlgorithm ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Studying_Tracking_QLearning_Plugins_AStar_Source_AStar_Public_AStarAlgorithm_h

// ********** Begin Enum Direction *****************************************************************
#define FOREACH_ENUM_DIRECTION(op) \
	op(Direction::Up) \
	op(Direction::Down) \
	op(Direction::Left) \
	op(Direction::Right) 

enum class Direction : uint8;
template<> struct TIsUEnumClass<Direction> { enum { Value = true }; };
template<> ASTAR_API UEnum* StaticEnum<Direction>();
// ********** End Enum Direction *******************************************************************

// ********** Begin Enum NodeState *****************************************************************
#define FOREACH_ENUM_NODESTATE(op) \
	op(NodeState::Hide) \
	op(NodeState::Wall) \
	op(NodeState::Open) \
	op(NodeState::Closed) \
	op(NodeState::OnRoute) \
	op(NodeState::Start) \
	op(NodeState::Goal) 

enum class NodeState : uint8;
template<> struct TIsUEnumClass<NodeState> { enum { Value = true }; };
template<> ASTAR_API UEnum* StaticEnum<NodeState>();
// ********** End Enum NodeState *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
