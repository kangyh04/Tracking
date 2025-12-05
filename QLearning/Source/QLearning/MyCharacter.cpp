// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "QLearningAlgorithm.h"
#include "AStarAlgorithm.h"
#include "FUCellArray.h"
#include "Cell.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);

	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 50.f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 900.f;
	CameraBoom->SetRelativeRotation(FRotator(-70.f, 0.f, 0.f));
	CameraBoom->bUsePawnControlRotation = false;
	CameraBoom->bInheritPitch = false;
	CameraBoom->bInheritYaw = false;
	CameraBoom->bInheritRoll = false;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	QLearningAlgorithm = CreateDefaultSubobject<UQLearningAlgorithm>(TEXT("QLearningAlgorithm"));
}

void AMyCharacter::PrepareQLearning(TArray<int32> area, int32 width)
{
	QLearningAlgorithm->Initialize(width, area, StartPos, DestPos);
}

bool AMyCharacter::DesideStartAndDest(const TArray<FUCellArray>& maze)
{
	bool bSuccess = false;
	// NOTE : Find most frequent cell ID in the maze
	TMap<int32, int32> cellIdCounts;
	for (auto& row : maze)
	{
		for (auto& cell : row.InnerArray)
		{
			cellIdCounts.FindOrAdd(cell->Group()) += 1;
		}
	}

	int32 maxCount = 0;
	int32 mostFrequentCellId = -1;

	for (auto& [cellId, count] : cellIdCounts)
	{
		if (count > maxCount)
		{
			maxCount = count;
			mostFrequentCellId = cellId;
		}
	}

	// NOTE : Pick start and dest positions randomly from the most frequent cell ID
	TArray<UCell*> candidateCells;
	for (auto& row : maze)
	{
		for (auto& cell : row.InnerArray)
		{
			if (cell->Group() == mostFrequentCellId)
			{
				candidateCells.Add(cell);
			}
		}
	}

	if (candidateCells.Num() >= 2)
	{
		int32 startIndex = FMath::RandRange(0, candidateCells.Num() - 1);
		int32 destIndex;
		do
		{
			destIndex = FMath::RandRange(0, candidateCells.Num() - 1);
		} while (destIndex == startIndex);
		UCell* startCell = candidateCells[startIndex];
		UCell* destCell = candidateCells[destIndex];
		StartPos = startCell->Position();
		DestPos = destCell->Position();
		bSuccess = true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not enough candidate cells to select start and dest positions."));
	}
	return bSuccess;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

