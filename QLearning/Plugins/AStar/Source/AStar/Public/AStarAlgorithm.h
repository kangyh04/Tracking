// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AStarNode.h"
#include "AStarAlgorithm.generated.h"

UENUM(BlueprintType)
enum class Direction : uint8
{
	Up UMETA(DisplayName = "Up"),
	Down UMETA(DisplayName = "Down"),
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};

UENUM(BlueprintType)
enum class NodeState : uint8
{
	Hide UMETA(DisplayName = "Hide"),
	Wall UMETA(DisplayName = "Wall"),
	Open UMETA(DisplayName = "Open"),
	Closed UMETA(DisplayName = "Closed"),
	OnRoute UMETA(DisplayName = "OnRoute"),
	Start UMETA(DisplayName = "Start"),
	Goal UMETA(DisplayName = "Goal"),
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
	static TArray<int32> FindPath(const TArray<int32> grid, int32 width, FIntPoint startPos, FIntPoint destPos);

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
