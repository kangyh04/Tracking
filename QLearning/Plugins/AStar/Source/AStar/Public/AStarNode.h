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
	int32 X = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int32 Y = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int32 G = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int32 H = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int32 ParentX = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AStar")
	int32 ParentY = 0;
};
