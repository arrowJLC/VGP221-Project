// Fill out your copyright notice in the Description page of Project Settings.

//#include "GameFramework/CharacterMovementComponent.h"
//#include "Enemy/EnemyAIController.h"
//
//AEnemyAIController::AEnemyAIController()
//{
//	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	if (!PawnSensing) {
//		PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
//		PawnSensing->OnSeePawn.AddDynamic(this, &AEnemyAIController::OnSeePawn);
//	}
//
//
//	bAttachToPawn = true; // ensures controller rotation applies to pawn
//
//	// Disable movement-based rotation (handled by AI focus instead)
//	//if (GetPawn())
//	//{
//	//	GetPawn()->bUseControllerRotationYaw = true;
//	//	if (ACharacter* Char = Cast<ACharacter>(GetPawn()))
//	//	{
//	//		Char->GetCharacterMovement()->bOrientRotationToMovement = false;
//	//	}
//	//}
//
//	if (GetBlackboardComponent())
//	{
//		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
//		if (PlayerPawn)
//		{
//			float Dist = FVector::Dist(GetPawn()->GetActorLocation(), PlayerPawn->GetActorLocation());
//			GetBlackboardComponent()->SetValueAsFloat(FName("TargetDistance"), Dist);
//		}
//	}
//}
//
//// Called when the game starts or when spawned
//void AEnemyAIController::BeginPlay()
//{
//	Super::BeginPlay();
//
//	RunBehaviorTree(StartingBehaviourTree);
//
//	UBlackboardComponent* bb = GetBlackboardComponent();
//	bb->SetValueAsFloat(FName("DamageAmt"), DamageAmt);
//}
//
//void AEnemyAIController::OnSeePawn(APawn* PlayerPawn)
//{
//	AFPSCharacter* player = Cast<AFPSCharacter>(PlayerPawn);
//	if (!player) return;
//
//
//	SetCanSeePlayer(true, player);
//
//	RunRetriggerableTimer();
//}
//
//void AEnemyAIController::SetCanSeePlayer(bool SeePlayer, UObject* PlayerObject)
//{
//	UBlackboardComponent* bb = GetBlackboardComponent();
//	bb->SetValueAsBool(FName("CanSeePlayer"), SeePlayer);
//
//	if (SeePlayer) {
//		bb->SetValueAsObject(FName("PlayerTarget"), PlayerObject);
//
//
//		APawn* PlayerPawn = Cast<APawn>(PlayerObject);
//		if (PlayerPawn)
//		{
//			SetFocus(PlayerPawn);
//		}
//	}
//	else
//	{
//
//		ClearFocus(EAIFocusPriority::Gameplay);
//	}
//}
//
//void AEnemyAIController::RunRetriggerableTimer()
//{
//	GetWorldTimerManager().ClearTimer(RetriggerableTimeHandle);
//	FunctionDelegate.BindUFunction(this, FName("SetCanSeePlayer"), false, GetPawn());
//	GetWorldTimerManager().SetTimer(RetriggerableTimeHandle, FunctionDelegate, PawnSensing->SensingInterval * 2.0f, false);
//}
//
//void AEnemyAIController::OnPossess(APawn* InPawn)
//{
//	Super::OnPossess(InPawn);
//
//	if (ACharacter* Char = Cast<ACharacter>(InPawn))
//	{
//		Char->bUseControllerRotationYaw = true;
//		Char->GetCharacterMovement()->bOrientRotationToMovement = false;
//	}
//}



#include "Enemy/EnemyAIController.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemyAIController::AEnemyAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	if (!PawnSensing)
	{
		PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
		PawnSensing->OnSeePawn.AddDynamic(this, &AEnemyAIController::OnSeePawn);
	}

	bAttachToPawn = true; // ensures controller rotation applies to pawn
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	RunBehaviorTree(StartingBehaviourTree);

	if (UBlackboardComponent* bb = GetBlackboardComponent())
	{
		bb->SetValueAsFloat(FName("DamageAmt"), DamageAmt);
	}
}

void AEnemyAIController::OnSeePawn(APawn* PlayerPawn)
{
	AFPSCharacter* player = Cast<AFPSCharacter>(PlayerPawn);
	if (!player) return;

	SetCanSeePlayer(true, player);
	RunRetriggerableTimer();
}

void AEnemyAIController::SetCanSeePlayer(bool SeePlayer, UObject* PlayerObject)
{
	UBlackboardComponent* bb = GetBlackboardComponent();
	bb->SetValueAsBool(FName("CanSeePlayer"), SeePlayer);

	if (SeePlayer)
	{
		bb->SetValueAsObject(FName("PlayerTarget"), PlayerObject);

		if (APawn* PlayerPawn = Cast<APawn>(PlayerObject))
		{
			SetFocus(PlayerPawn);
		}
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
	}
}

void AEnemyAIController::RunRetriggerableTimer()
{
	GetWorldTimerManager().ClearTimer(RetriggerableTimeHandle);
	FunctionDelegate.BindUFunction(this, FName("SetCanSeePlayer"), false, GetPawn());
	GetWorldTimerManager().SetTimer(RetriggerableTimeHandle, FunctionDelegate, PawnSensing->SensingInterval * 2.0f, false);
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ACharacter* Char = Cast<ACharacter>(InPawn))
	{
		Char->bUseControllerRotationYaw = true;
		Char->GetCharacterMovement()->bOrientRotationToMovement = false;
	}
}
