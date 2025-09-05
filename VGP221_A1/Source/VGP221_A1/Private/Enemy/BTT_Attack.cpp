// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/BTT_Attack.h"

//EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
//{
//	float DamageAmt = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(FName("DamageAmt"));
//	DamageAmt = Cast<AEnemyAIController>(OwnerComp.GetAIOwner())->DamageAmt;
//	DamageAmt = Cast<AEnemyAICharacter>(OwnerComp.GetAIOwner()->GetPawn())->CharacterDamageAmt;
//
//	// Method 1: Using Gameplay static and calling a function
//	// AFPSCharacter* player = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
//	// player->Damage(DamageAmt);
//
//	// Method 2: Using Blackboard Value
//	// AFPSCharacter* player = Cast<AFPSCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("PlayerTarget")));
//	// player->Damage(DamageAmt);
//
//	// Method 3: Built in damage system
//	AFPSCharacter* player = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
//	UGameplayStatics::ApplyDamage(player, DamageAmt, OwnerComp.GetAIOwner(), OwnerComp.GetAIOwner()->GetPawn(), UDamageType::StaticClass());
//
//	return EBTNodeResult::Succeeded;
//}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AEnemyAIController* AICon = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
    if (!AICon) return EBTNodeResult::Failed;

    AEnemyAICharacter* Enemy = Cast<AEnemyAICharacter>(AICon->GetPawn());
    if (!Enemy || !Enemy->ProjectileClass) return EBTNodeResult::Failed;

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    AActor* Target = Cast<AActor>(BB->GetValueAsObject(FName("PlayerTarget")));
    if (!Target) return EBTNodeResult::Failed;

    //FVector MuzzleLocation = Enemy->GetActorLocation() + FVector(0, 0, 50); // raise above ground
    FVector MuzzleLocation = Enemy->GetActorLocation()
        + Enemy->GetActorForwardVector() * 100.0f
        + FVector(0, 0, 75.0f);
    FRotator MuzzleRotation = (Target->GetActorLocation() - MuzzleLocation).Rotation();

    UWorld* World = Enemy->GetWorld();
    if (World)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = Enemy;
        SpawnParams.Instigator = Enemy;

        // Spawn projectile
        AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(
            Enemy->ProjectileClass,
            MuzzleLocation,
            MuzzleRotation,
            SpawnParams
        );

        if (Projectile)
        {
            FVector LaunchDir = MuzzleRotation.Vector();
            Projectile->FireInDirection(LaunchDir);
        }
    }

    return EBTNodeResult::Succeeded;
}
