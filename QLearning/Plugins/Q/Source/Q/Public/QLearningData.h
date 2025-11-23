// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionType.h"
#include "QLearningData.generated.h"

/**
 *
 */
USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FQLearningStateData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	int32 X = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	int32 Y = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	int32 DistanceToGoal = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	int32 VisitedCount = 0;

	void Initialize(int32 x, int32 y, int32 distanceToGoal, int32 visitedCount)
	{
		X = x;
		Y = y;
		DistanceToGoal = distanceToGoal;
		VisitedCount = visitedCount;
	}
};

USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FQLearningTrainingData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	FQLearningStateData CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	EQLearningActionType ActionTaken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	float RewardReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	FQLearningStateData NextState;

	void Initialize(const FQLearningStateData& currentState, EQLearningActionType actionTaken, float rewardReceived, const FQLearningStateData& nextState)
	{
		CurrentState = currentState;
		ActionTaken = actionTaken;
		RewardReceived = rewardReceived;
		NextState = nextState;
	}
};

USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FQValueData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning")
	TMap<EQLearningActionType, float> ActionValues;

	FQValueData()
	{
		ActionValues.Add(EQLearningActionType::Up, 0.0f);
		ActionValues.Add(EQLearningActionType::Down, 0.0f);
		ActionValues.Add(EQLearningActionType::Left, 0.0f);
		ActionValues.Add(EQLearningActionType::Right, 0.0f);
	}

	EQLearningActionType GetBestAction() const
	{
		EQLearningActionType BestAction = EQLearningActionType::Up;
		float HighestValue = ActionValues[BestAction];
		for (const auto& Pair : ActionValues)
		{
			if (Pair.Value > HighestValue)
			{
				HighestValue = Pair.Value;
				BestAction = Pair.Key;
			}
		}
		return BestAction;
	}

	float GetMaxQValue() const
	{
		float HighestValue = ActionValues[EQLearningActionType::Up];
		for (const auto& Pair : ActionValues)
		{
			if (Pair.Value > HighestValue)
			{
				HighestValue = Pair.Value;
			}
		}
		return HighestValue;
	}
};

USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FQLearningRewardData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float GoalReward = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float Wall = -10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float StepPenalty = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float FirstVisitBonus = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float RevisitPenalty = -5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float CloserToGoal = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float FarFromGoal = -2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QLearning|Reward")
	float OnOptimizedPath = 3;
};

USTRUCT(Atomic, Blueprintable, BlueprintType)
struct FQLearningStatisticsData
{
	GENERATED_BODY()
};
