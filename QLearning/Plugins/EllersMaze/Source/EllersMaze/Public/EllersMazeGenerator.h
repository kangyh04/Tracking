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

	UFUNCTION(BlueprintCallable, Category = "EllerMaze")
	static TArray<FUCellArray> GenerateMock();

	UFUNCTION(BlueprintCallable, Category = "EllersMaze")
	static class UProceduralMeshComponent* ToProceduralMesh(AActor* parent, const TArray<FUCellArray>& maze);

	UFUNCTION(BlueprintCallable, Category = "EllersMaze")
	static TArray<int32> MazeToIntArray(const TArray<FUCellArray>& maze);

	UFUNCTION(BlueprintCallable, Category = "EllersMaze")
	static FIntPoint IntIndexToCellIndex(int32 index, int32 width);

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EllersMaze", meta = (AllowPrivateAccess = "true"))
	UFUNCTION(BlueprintCallable, Category = "EllersMaze")
	static int32 CellDivideRatio()
	{
		return DivideRatio;
	}

private:
	static void CreateRightWall(FUCellArray& cells);
	static void CreateBottomWall(FUCellArray& cells);
	static FUCellArray PrepareNextRow(FUCellArray& cells, int rowNumber, int width);
	static bool CreateWall();
private:
	static const int MaxBias = 64;
	static const int Bias = 32;
	static const int32 DivideRatio = 3;
};
