// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cell.generated.h"

/**
 * 
 */
UCLASS()
class ELLERSMAZE_API UCell : public UObject
{
	GENERATED_BODY()
	
public:
	bool RightWall() { return hasRightWall; }
	bool BottomWall() { return hasBottomWall; }
	bool SetRightWall(bool hasWall)
	{
		hasRightWall = hasWall;
		return hasRightWall;
	}
	bool SetBottomWall(bool hasWall)
	{
		hasBottomWall = hasWall;
		return hasBottomWall;
	}
	int Group() { return group; }
	int SetGroup(int number)
	{
		group = number;
		return group;
	}
	UCell* Duplicate()
	{
		UCell* newCell = NewObject<UCell>();
		newCell->hasRightWall = hasRightWall;
		newCell->hasBottomWall = hasBottomWall;
		newCell->group = group;
		return newCell;
	}
	UFUNCTION(BlueprintCallable, Category = "EllersMaze|Cell")
	TArray<FVector> GetVertices()
	{
		if (hasRightWall && hasBottomWall)
		{
			return {
				FVector(0.45f, 0.0f, 0.5f),
				FVector(0.45f, 1.0f, 0.5f),
				FVector(0.45f, 0.0f, -0.45f),
				FVector(0.45f, 1.0f, -0.45f),
				FVector(-0.5f, 0.0f, -0.45f),
				FVector(-0.5f, 1.0f, -0.45f),
				FVector(-0.5f, 0.0f, -0.5f),
				FVector(-0.5f, 1.0f, -0.5f),
				FVector(0.5f, 0.0f, -0.5f),
				FVector(0.5f, 1.0f, -0.5f),
				FVector(0.5f, 0.0f, 0.5f),
				FVector(0.5f, 1.0f, 0.5f)
			};
		}
		else if (hasRightWall)
		{
			return {
				FVector(0.45f, 0.0f, 0.5f),
				FVector(0.45f, 1.0f, 0.5f),
				FVector(0.45f, 0.0f, -0.5f),
				FVector(0.45f, 1.0f, -0.5f),
				FVector(0.5f, 0.0f, -0.5f),
				FVector(0.5f, 1.0f, -0.5f),
				FVector(0.5f, 0.0f, 0.5f),
				FVector(0.5f, 1.0f, 0.5f),
			};
		}
		else if (hasBottomWall)
		{
			return {
				FVector(0.5f, 0.0f, -0.45f),
				FVector(0.5f, 1.0f, -0.45f),
				FVector(-0.5f, 0.0f, -0.45f),
				FVector(-0.5f, 1.0f, -0.45f),
				FVector(-0.5f, 0.0f, -0.5f),
				FVector(-0.5f, 1.0f, -0.5f),
				FVector(0.5f, 0.0f, -0.5f),
				FVector(0.5f, 1.0f, -0.5f),
			};
		}
		return {};
	}

	UFUNCTION(BlueprintCallable, Category="EllersMaze|Cell")
	TArray<int32> GetIndices()
	{
		if (hasRightWall && hasBottomWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 8,
				8, 7, 9,

				8, 9, 10,
				10, 9, 11,

				10, 11, 0,
				0, 11, 1,
			};
		}
		else if (hasRightWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 0,
				0, 7, 1,
			};
		}
		else if (hasBottomWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 0,
				0, 7, 1,
			};
		}
		return {};
	}
private:
	bool hasRightWall = false;
	bool hasBottomWall = false;
	int group = -1;
};
