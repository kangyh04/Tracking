// Fill out your copyright notice in the Description page of Project Settings.


#include "QLearningAlgorithm.h"
#include "AStarAlgorithm.h"

void UQLearningAlgorithm::Initialize(int32 width, const TArray<int32>& maze, FIntPoint startPos, FIntPoint goalPos)
{
	Width = width;
	Height = maze.Num() / width;
	Maze = maze;
	StartPos = startPos;
	GoalPos = goalPos;

	int32 distanceToGoal = UAStarAlgorithm::CalculateManhattanDistance(startPos, goalPos);
	CurrentState.Initialize(startPos, distanceToGoal, 0);

	Statistics = FQLearningStatisticsData();
}

void UQLearningAlgorithm::Train(int32 episodes)
{
	for (int episode = 0; episode < episodes; ++episode)
	{
		// Training logic to be implemented
	}
}

void UQLearningAlgorithm::RunEpisode()
{
	FQLearningStateData state = CurrentState;

	float reward = 0.0f;
	int32 steps = 0;
	bool reachedGoal = false;

	while (steps < 1000 && IsReachedGoal(state.Position))
	{
		EQLearningActionType action = ChooseAction(state);

		FQLearningStateData nextState = GetNextState(state, action);

		reward += GetReward(state, action, nextState);

		UpdateQValue(state, action, reward, nextState);
	}
}

EQLearningActionType UQLearningAlgorithm::ChooseAction(const FQLearningStateData& state)
{
	if (FMath::Rand() < RAND_MAX * 0.1f)
	{
		int32 randomAction = FMath::RandRange(0, 3);
		return static_cast<EQLearningActionType>(randomAction);
	}
	else
	{
		return GetBestAction(state);
	}
}

EQLearningActionType UQLearningAlgorithm::GetBestAction(const FQLearningStateData& state)
{
	if (!QTable.Contains(state))
	{
		return static_cast<EQLearningActionType>(FMath::RandRange(0, 3));
	}

	return QTable[state].GetBestAction();
}

FQLearningStateData UQLearningAlgorithm::GetNextState(const FQLearningStateData& state, EQLearningActionType action)
{
}

float UQLearningAlgorithm::GetReward(const FQLearningStateData& currentState, EQLearningActionType action, const FQLearningStateData& nextState)
{
	float totalReward = 0.0f;

	if (nextState.Position == GoalPos)
	{
		totalReward += RewardParameters.GoalReward;
	}
	
	if (!IsValidPosition(nextState.Position))
	{
		totalReward += RewardParameters.Wall;
	}

	totalReward += RewardParameters.StepPenalty;

	int32 visitedCount = nextState.VisitedCount;

	if (visitedCount == 0)
	{
		totalReward += RewardParameters.FirstVisitBonus;
	}
	else
	{
		totalReward += RewardParameters.RevisitPenalty;
	}

	int32 currentDistance = currentState.DistanceToGoal;
	int32 nextDistance = nextState.DistanceToGoal;

	if (nextDistance < currentDistance)
	{
		totalReward += RewardParameters.CloserToGoal;
	}
	else if (nextDistance > currentDistance)
	{
		totalReward += RewardParameters.FarFromGoal;
	}

	if (IsOnOptimizedPath(nextState.Position))
	{
		totalReward += RewardParameters.OnOptimizedPath;
	}

	return totalReward;
}

bool UQLearningAlgorithm::IsValidPosition(const FIntPoint& position)
{
	return false;
}

bool UQLearningAlgorithm::IsOnOptimizedPath(const FIntPoint& position)
{
	return false;
}

void UQLearningAlgorithm::UpdateQValue(const FQLearningStateData& currentState, EQLearningActionType action, float reward, const FQLearningStateData& nextState)
{
}
