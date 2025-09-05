// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAICharacter.generated.h"

UCLASS()
class VGP221_A1_API AEnemyAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float CharacterDamageAmt = 5.0f;


	UFUNCTION()
	void Damage(float damageAmt);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	void Die();

	float Health = 100.0f;
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class AFPSProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float FireRange = 500.0f;

};
