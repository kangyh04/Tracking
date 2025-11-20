// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FUCellArray.generated.h"

class UCell;
/**
 * 
 */
USTRUCT(BlueprintType)
struct FUCellArray
{
	GENERATED_BODY()
public:
	FUCellArray();
	~FUCellArray();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cell")
	TArray<UCell*> InnerArray;
};
