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
	CurrentState.Initialize(startPos, distanceToGoal);

	LastResult.Initialize(startPos);

	Statistics = FQLearningStatisticsData();
}

void UQLearningAlgorithm::Train(int32 episodes)
{
	for (int episode = 0; episode < episodes; ++episode)
	{
		RunEpisode();
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
		VisitedCounts.FindOrAdd(state.Position) += 1;

		state = nextState;
		steps++;

		if (state.Position == GoalPos)
		{
			reachedGoal = true;
			break;
		}
	}

	Statistics.UpdateEpisode(reward, steps, reachedGoal);
}

FQLearningResult UQLearningAlgorithm::TrainStep()
{
	auto result = Step();

	if (result.bReachedGoal)
	{
		Statistics.UpdateEpisode(result.TotalReward, result.Steps, true);
	}

	return result;
}

FQLearningResult UQLearningAlgorithm::Step()
{
	FQLearningResult result;

	EQLearningActionType action = ChooseAction(CurrentState);
	FQLearningStateData nextState = GetNextState(CurrentState, action);

	float reward = GetReward(CurrentState, action, nextState);

	UpdateQValue(CurrentState, action, reward, nextState);
	VisitedCounts.FindOrAdd(CurrentState.Position) += 1;

	CurrentState = nextState;

	result.Position = CurrentState.Position;
	result.bReachedGoal = IsReachedGoal(result.Position);
	result.Steps = LastResult.Steps + 1;
	result.TotalReward = LastResult.TotalReward + reward;

	return result;
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
	FQLearningStateData nextState = state;
	FIntPoint actionDir = ActionDirections[action];

	int32 newX = state.Position.X + actionDir.X;
	int32 newY = state.Position.Y + actionDir.Y;

	FIntPoint newPosition = FIntPoint(newX, newY);

	if (IsValidPosition(newPosition))
	{
		nextState.Position = newPosition;
		nextState.DistanceToGoal = UAStarAlgorithm::CalculateManhattanDistance(nextState.Position, GoalPos);
	}

	return nextState;
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

	int32 visitedCount = VisitedCounts.Contains(nextState.Position) ? VisitedCounts[nextState.Position] : 0;

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
	return position.X >= 0 && position.X < Width &&
		position.Y >= 0 && position.Y < Height &&
		Maze[position.Y * Width + position.X] != static_cast<int32>(EQLearningCellType::Wall);
}

bool UQLearningAlgorithm::IsOnOptimizedPath(const FIntPoint& position)
{
	auto optimizedPath = UAStarAlgorithm::FindPath(Maze, Width, StartPos, GoalPos);

	int32 index = position.Y * Width + position.X;

	return optimizedPath[index] == static_cast<int8>(NodeState::OnRoute);
}

void UQLearningAlgorithm::UpdateQValue(const FQLearningStateData& currentState, EQLearningActionType action, float reward, const FQLearningStateData& nextState)
{
	if (!QTable.Contains(currentState))
	{
		QTable.Add(currentState, FQValueData());
	}

	if (!QTable.Contains(nextState))
	{
		QTable.Add(nextState, FQValueData());
	}

	float currentQValue = QTable[currentState].ActionValues[action];
	float maxNextQValue = QTable[nextState].GetMaxQValue();

	float nextQValue = currentQValue + 0.1f * (reward + 0.9f * maxNextQValue - currentQValue);

	QTable[currentState].ActionValues[action] = nextQValue;
}

void UQLearningAlgorithm::CalculateOptimizedPath()
{
	UAStarAlgorithm::FindPath(Maze, Width, StartPos, GoalPos);
}
