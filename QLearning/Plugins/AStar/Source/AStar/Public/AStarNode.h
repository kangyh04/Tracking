// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AStarNode.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAStarNode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int X;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int Y;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int G;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int H;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int ParentX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int ParentY;
};
