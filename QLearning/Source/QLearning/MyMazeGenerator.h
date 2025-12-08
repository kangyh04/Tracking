// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FUCellArray.h"
#include "MyMazeGenerator.generated.h"

UCLASS()
class QLEARNING_API AMyMazeGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyMazeGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze", meta = (AllowPrivateAccess = "true"))
	int32 MazeWidth;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Maze", meta = (AllowPrivateAccess = "true"))
	int32 MazeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze", meta = (AllowPrivateAccess = "true"))
	TArray<FUCellArray> Maze;
};
