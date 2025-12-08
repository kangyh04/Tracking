// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyMazeGenerator.h"
#include "MyGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class QLEARNING_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MazeGenerator", meta = (AllowPrivateAccess = "true"))
	AMyMazeGenerator* MazeGenerator;
};
