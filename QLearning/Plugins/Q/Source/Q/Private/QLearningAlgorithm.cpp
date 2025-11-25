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
	CurrentState.Initialize(startPos.X, startPos.Y, distanceToGoal, 0);
}

void UQLearningAlgorithm::Train(int32 episodes)
{
}
