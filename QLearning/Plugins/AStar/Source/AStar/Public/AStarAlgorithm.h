// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AStarNode.h"
#include "AStarAlgorithm.generated.h"

enum Direction
{
	Up,
	Down,
	Left,
	Right
};

enum NodeState : int
{
	Hide = 0,
	Wall,
	Open,
	Closed,
	OnRoute,
	Start,
	Goal,
};

/**
 *
 */
UCLASS()
class ASTAR_API UAStarAlgorithm : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "AStar")
	// static TArray<int> FindPath(const TArray<int> grid, int width, int startX, int startY, int destX, int destY);
	static TArray<int> FindPath(const TArray<int32> grid, int32 width, FIntPoint startPos, FIntPoint destPos);

	UFUNCTION(BlueprintCallable, Category = "AStar")
	static int32 CalculateManhattanDistance(FIntPoint pos1, FIntPoint pos2)
	{
		return FMath::Abs(pos2.X - pos1.X) + FMath::Abs(pos2.Y - pos1.Y);
	}

private:
	static bool Comparison(const FAStarNode& A, const FAStarNode& B)
	{
		return (A.G + A.H) < (B.G + B.H) ||
			((A.G + A.H) == (B.G + B.H) && A.H < B.H);
	}
};
