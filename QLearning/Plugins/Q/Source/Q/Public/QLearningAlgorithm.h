// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QLearningData.h"
#include "QLearningAlgorithm.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class Q_API UQLearningAlgorithm : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void Initialize(int32 width, const TArray<int32>& maze, FIntPoint startPos, FIntPoint goalPos);

	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void Train(int32 episodes);

	void RunEpisode();

	bool IsReachedGoal(const FIntPoint& position) const
	{
		return position == GoalPos;
	}

	EQLearningActionType ChooseAction(const FQLearningStateData& state);
	EQLearningActionType GetBestAction(const FQLearningStateData& state);

	FQLearningStateData GetNextState(const FQLearningStateData& state, EQLearningActionType action);

	float GetReward(const FQLearningStateData& currentState, EQLearningActionType action, const FQLearningStateData& nextState);

	bool IsValidPosition(const FIntPoint& position);

	bool IsOnOptimizedPath(const FIntPoint& position);

	void UpdateQValue(const FQLearningStateData& currentState, EQLearningActionType action, float reward, const FQLearningStateData& nextState);

	void CalculateOptimizedPath();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	TArray<int32> Maze;

	UPROPERTY(Visibleanywhere, BlueprintReadOnly, Category = "QLearning")
	int32 Width;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	int32 Height;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FIntPoint StartPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FIntPoint GoalPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FQLearningStateData CurrentState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FQLearningStatisticsData Statistics;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	TMap<FQLearningStateData, FQValueData> QTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Parameters")
	FQLearningRewardData RewardParameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Parameters")
	TMap<EQLearningActionType, FIntPoint> ActionDirections =
	{
		{EQLearningActionType::Up, FIntPoint(0, -1)},
		{EQLearningActionType::Down, FIntPoint(0, 1)},
		{EQLearningActionType::Left, FIntPoint(-1, 0)},
		{EQLearningActionType::Right, FIntPoint(1, 0)}
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Parameters")
	TMap<FIntPoint, int32> VisitedCounts;
};
