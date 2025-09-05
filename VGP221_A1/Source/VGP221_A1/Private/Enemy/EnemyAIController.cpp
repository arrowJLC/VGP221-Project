

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
