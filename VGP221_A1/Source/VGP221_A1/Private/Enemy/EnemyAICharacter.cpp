// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyAICharacter.h"
#include "Gamemode/FPSProjectGameModeBase.h"


// Sets default values
AEnemyAICharacter::AEnemyAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


//void AEnemyAICharacter::Damage(float damageAmt)
//{
//	Health -= damageAmt;
//	float HealthPercent = Health / MaxHealth;
//
//		if (Health <= 0)
//		{
//			//GameHUD->ShowGameOverScreen();
//		}	
//}
//
//
//float AEnemyAICharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
//{
//	Damage(DamageAmount);
//	return DamageAmount;
//}



void AEnemyAICharacter::Damage(float DamageAmt)
{
    Health -= DamageAmt;
    Health = FMath::Clamp(Health, 0.0f, MaxHealth);

    UE_LOG(LogTemp, Warning, TEXT("Enemy took %f damage. Health: %f"), DamageAmt, Health);

    if (Health <= 0)
    {
        Die();
    }
}


float AEnemyAICharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    UE_LOG(LogTemp, Warning, TEXT("Enemy took damage: %f, Health: %f"), DamageAmount, Health);

    float DamageApplied = FMath::Min(Health, DamageAmount); // Clamp so you don’t go below 0
    Damage(DamageApplied);
    return DamageApplied;
}

void AEnemyAICharacter::Die()
{
    UE_LOG(LogTemp, Warning, TEXT("Enemy died!"));

    /*if (GetWorld())
    {
        AFPSProjectGameModeBase* GM = Cast<AFPSProjectGameModeBase>(GetWorld()->GetAuthGameMode());
        if (GM)
        {
            GM->AddScore(1);
        }
    }*/
    Destroy();
}