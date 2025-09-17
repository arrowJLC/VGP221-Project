// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Projectile/FPSProjectile.h"

#include "Kismet/GameplayStatics.h"
#include "HUD/GameHUD.h"
#include "FPSCharacter.generated.h"


UCLASS()
class VGP221_A1_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector MuzzleOffset;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = Components)
	class USceneComponent* GrabbedObjectLocation;

	UPROPERTY()
	UPrimitiveComponent* GrabbedObject;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grappling, meta = (AllowPrivateAccess = "true"))
	class UCableComponent* GrappleCable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> OverlapWidgetClass;
	UUserWidget* ActiveWidget;

	UFUNCTION()
	void MoveFoward(float value);

	UFUNCTION()
	void MoveRight(float value);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void EndJump();

	UFUNCTION()
	void Fire();

	UFUNCTION()
	void Gravity();
	void EndGravity();

	void SetGrabbedObject(UPrimitiveComponent* ObjectToGrab);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION()
	void Damage(float damageAmt);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;


	float Health = 100.0f;
	float MaxHealth = 100.0f;

private:

	float MaxLineDistance = 2000.0f;
	bool isGrapple = false;
	FVector GrabPoint;
};























/*
#include "PhysicsEngine/PhysicsHandleComponent.h"

UCLASS()
class VGP221_A1_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFPSCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Camera + Mesh
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* FPSMesh;

	// Gravity Gun
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="GravityGun")
	UPhysicsHandleComponent* PhysicsHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GravityGun")
	USceneComponent* GrabbedObjectLocation;

	UPROPERTY()
	UPrimitiveComponent* GrabbedObject;

	// Input Functions
	UFUNCTION()
	void Gravity();

	UFUNCTION()
	void EndGravity();

	// Helpers
	void GrabObject(UPrimitiveComponent* ObjectToGrab);
	void ReleaseObject();
};




*/