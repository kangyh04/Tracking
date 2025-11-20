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
private:
	bool hasRightWall = false;
	bool hasBottomWall = false;
	int group = -1;
};
