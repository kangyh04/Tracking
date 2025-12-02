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
		TArray<bool> walls = { hasRightWall, hasBottomWall, hasLeftWall, hasTopWall };
		TArray<FVector> vertices;
		TArray<FVector> wallVertices = GetPartVertices();

		for (int i = 0; i < 4; ++i)
		{
			auto hasWall = walls[i];
			FVector scale;
			float xDelta = 0.0f, yDelta = 0.0f;

			if (hasWall)
			{
				if (i == 0 || i == 2)
				{
					scale = FVector(0.1f, 1.0f, 1.0f);
					xDelta = (i == 0) ? 0.45f : -0.45f;
				}
				else
				{
					scale = FVector(1.0f, 0.1f, 1.0f);
					yDelta = (i == 1) ? -0.45f : 0.45f;
				}

				FVector deltaPosition = FVector(xDelta, yDelta, 0.0f);

				for (auto vertex : wallVertices)
				{
					FVector scaledVertex = scale * vertex;
					FVector finalVertex = scaledVertex + deltaPosition;
					vertices.Add(finalVertex);
				}
			}
		}

		return vertices;
	}

	UFUNCTION(BlueprintCallable, Category = "EllersMaze|Cell")
	TArray<int32> GetIndices()
	{
		TArray<int32> indices;
		TArray<bool> walls = { hasRightWall, hasBottomWall, hasLeftWall, hasTopWall };
		TArray<int32> partIndices = GetPartIndices();
		int32 offset = 0;

		for (int i = 0; i < 4; ++i)
		{
			auto hasWall = walls[i];
			if (hasWall)
			{
				for (auto index : partIndices)
				{
					indices.Add(index + offset);
				}
				offset += 8;
			}
		}

		return indices;
	}
private:
	bool hasRightWall = false;
	bool hasBottomWall = false;
	bool hasTopWall = false;
	bool hasLeftWall = false;
	int group = -1;

private:
	TArray<FVector> GetPartVertices()
	{
		return {
			FVector(-0.5f, -0.5f, 0.0f),
			FVector(-0.5f, -0.5f, 1.0f),

			FVector(0.5f, -0.5f, 0.0f),
			FVector(0.5f, -0.5f, 1.0f),

			FVector(0.5f, 0.5f, 0.0f),
			FVector(0.5f, 0.5f, 1.0f),

			FVector(-0.5f, 0.5f, 0.0f),
			FVector(-0.5f, 0.5f, 1.0f),
		};
	}

	TArray<int32> GetPartIndices()
	{
		return {
			0, 2, 1,
			2, 3, 1,

			2, 4, 3,
			4, 5, 3,

			4, 6, 5,
			6, 7, 5,

			6, 0, 7,
			0, 1, 7,

			1, 3, 7,
			3, 5, 7,

			6, 4, 0,
			4, 2, 0
		};
	}
};
