// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QLearningAlgorithm.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class Q_API UQLearningAlgorithm : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void Initialize(int32 width, const TArray<int32>& maze, FIntPoint startPos, FIntPoint goalPos);

	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void Train(int32 episodes);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	TArray<int32> Maze;

	UPROPERTY(Visibleanywhere, BlueprintReadOnly, Category = "QLearning")
	int32 Width;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	int32 Height;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FIntPoint StartPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning")
	FIntPoint GoalPos;
};
