// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "QLearningAlgorithm.h"
#include "MyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

struct FUCellArray;

UCLASS()
class QLEARNING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QLearning", meta = (AllowPrivateAccess = "true"))
	UQLearningAlgorithm* QLearningAlgorithm;

	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void PrepareQLearning(TArray<int32> area, int32 width);

	UFUNCTION(BlueprintCallable, Category = "QLearning")
	bool DesideStartAndDest(const TArray<FUCellArray>& map);

	UFUNCTION(BlueprintCallable, Category = "QLearning")
	void TrainQLearning();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	FIntPoint StartPos, DestPos;
	FIntPoint NextPos;
};
