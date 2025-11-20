// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Cell.h"
#include "FUCellArray.h"
#include "EllersMazeGenerator.generated.h"

using namespace std;

/**
 *
 */
UCLASS()
class ELLERSMAZE_API UEllersMazeGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "EllersMaze")
	static TArray<FUCellArray> Generate(int width, int height);
private:
	static void CreateRightWall(FUCellArray& cells);
	static void CreateBottomWall(FUCellArray& cells);
	static FUCellArray PrepareNextRow(FUCellArray& cells, int rowNumber, int width);
	static bool CreateWall();
private:
	static const int MaxBias = 64;
	static const int Bias = 32;
};
