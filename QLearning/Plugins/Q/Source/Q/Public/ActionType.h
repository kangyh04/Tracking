// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EQLearningActionType : uint8
{
	Up     UMETA(DisplayName = "Up"),
	Down   UMETA(DisplayName = "Down"),
	Left   UMETA(DisplayName = "Left"),
	Right  UMETA(DisplayName = "Right")
};

UENUM(BlueprintType)
enum class EQLearningCellType : uint8
{
	Empty   UMETA(DisplayName = "Empty"),
	Wall    UMETA(DisplayName = "Wall"),
	Start   UMETA(DisplayName = "Start"),
	Goal    UMETA(DisplayName = "Goal")
};
