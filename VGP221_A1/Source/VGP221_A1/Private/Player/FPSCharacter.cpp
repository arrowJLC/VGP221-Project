// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FPSCharacter.h"
#include "CableComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!FPSCameraComponent) {
		FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera")); // AddComponent in Unity
		FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
		FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
		FPSCameraComponent->bUsePawnControlRotation = true;
	}

	if (!FPSMesh) {
		FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
		FPSMesh->SetupAttachment(FPSCameraComponent);
		FPSMesh->bCastDynamicShadow = false;
		FPSMesh->CastShadow = false;
		FPSMesh->OnComponentBeginOverlap.AddDynamic(this, &AFPSCharacter::OnOverlapBegin);
	}

	GrabbedObjectLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GrabbedObjectLocation"));
	GrabbedObjectLocation->SetupAttachment(FPSMesh);

	GetMesh()->SetOwnerNoSee(true);

	GrappleCable = CreateDefaultSubobject<UCableComponent>(TEXT("Grappling Line"));
	GrappleCable->SetupAttachment(FPSCameraComponent);
	GrappleCable->SetVisibility(false);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isGrapple)
	{
		GrappleCable->EndLocation = GetActorTransform().InverseTransformPosition(GrabPoint);

		GetCharacterMovement()->AddForce((GrabPoint - GetActorLocation()).GetSafeNormal() * 100000);
	}

	/*float GrappleDamping = 200.0f;
	float GrappleStrength = 2000.0f;
	float MaxGrappleForce = 100000.0f;*/

	//if (isGrapple)
	//{
	//	GrappleCable->EndLocation = GetActorTransform().InverseTransformPosition(GrabPoint);

	//	FVector Direction = GrabPoint - GetActorLocation();

	//	FVector Force = Direction.GetSafeNormal() * Distance * GrappleStrength;

	//	FVector Damping = -GetVelocity() * GrappleDamping;

	//	FVector FinalForce = Force + Damping;
	//	FinalForce = FinalForce.GetClampedToMaxSize(MaxGrappleForce);

	//	GetCharacterMovement()->AddForce(FinalForce);
	//}
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveFoward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// Look
	PlayerInputComponent->BindAxis("LookHorizontal", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookVertical", this, &AFPSCharacter::AddControllerPitchInput);

	// Jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::EndJump);

	// Fire
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
	PlayerInputComponent->BindAction("Gravity", IE_Pressed, this, &AFPSCharacter::Gravity);
	PlayerInputComponent->BindAction("Gravity", IE_Released, this, &AFPSCharacter::EndGravity);

}

void AFPSCharacter::MoveFoward(float value)
{
	// 1. Unreal tutorial way
	// FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);

	FVector Direction = GetActorForwardVector();
	AddMovementInput(Direction, value);
}

void AFPSCharacter::MoveRight(float value)
{
	FVector Direction = GetActorRightVector();
	AddMovementInput(Direction, value);
}

void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

void AFPSCharacter::EndJump()
{
	bPressedJump = false;
}

void AFPSCharacter::Fire()
{
	if (!ProjectileClass) return;

	// Init relevant infomration for where the projectile will be
	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

	FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

	FRotator MuzzleRotation = CameraRotation;
	MuzzleRotation.Pitch += 0.0f/*10.0f*/;

	// Start of spawning the projectile
	UWorld* World = GetWorld();
	if (!World)  return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	// Unity Instantiate
	AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
	if (!Projectile) return;

	// Launch spawned projectile in the camera rotation
	FVector LaunchDirection = MuzzleRotation.Vector();
	Projectile->FireInDirection(LaunchDirection);

	//Damage(10.0f);
}

void AFPSCharacter::Damage(float damageAmt)
{
	Health -= damageAmt;
	float HealthPercent = Health / MaxHealth;

	AGameHUD* GameHUD = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	//	//GameHUD->GameWidgetContainer->SetHealthBar(HealthPerecent);
	if (GameHUD)
	{
		GameHUD->GameWidgetContainer->SetHealthBar(HealthPercent);

		if (Health <= 0)
		{
			GameHUD->ShowGameOverScreen(); 
		}
	}
}


float AFPSCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Damage(DamageAmount);
	return DamageAmount;
}


void AFPSCharacter::Gravity()
{
	const FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(GravityGunTrace), false, this);

	const float TraceRange = 5000.0f;
	const FVector StartTrace = FPSCameraComponent->GetComponentLocation();
	const FVector EndTrace = StartTrace + (FPSCameraComponent->GetForwardVector() * TraceRange);
	const FVector GrappleStart = FPSCameraComponent->GetComponentLocation();
	const FVector GrappleEnd = GrappleStart + (FPSCameraComponent->GetForwardVector() * MaxLineDistance);

	FHitResult Hit;
	FHitResult GrappleHit;

	if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, QueryParams))
	{
		if (UPrimitiveComponent* Prim = Hit.GetComponent())
		{
			if (Prim->IsSimulatingPhysics())
			{
				float ObjectMass = Prim->GetMass();
				const float MaxPickupMass = 200.0f;

				if (ObjectMass <= MaxPickupMass)
				{
					SetGrabbedObject(Prim);
				}
			}
		}

		if (AActor* HitActor = Hit.GetActor())
		{
			if (HitActor->ActorHasTag("LaunchPad"))
			{
				FVector LaunchDirection = HitActor->GetActorUpVector() * 1000.0f;
				LaunchCharacter(LaunchDirection, true, true);
				// do for greater launce
				//LaunchCharacter(LaunchDirection, false, false);
			}
		}
	}

	if (GetWorld()->LineTraceSingleByChannel(GrappleHit, GrappleStart, GrappleEnd, ECC_Visibility, QueryParams))
	{
		if (AActor* GrappleActor = GrappleHit.GetActor())
		{
			if (GrappleActor->ActorHasTag("GrapplePoint"))
			{
				isGrapple = true;
				GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
				GrappleCable->SetVisibility(true);
				GrabPoint = GrappleHit.ImpactPoint;
			}
		}
	}
}


//FHitResult HitResult;
//bool hasHit = GetWorld()->SweepSingleByChannel(HitResult, StartTrace, End, FQuat::Identity, ECC_Visibility, /*ECC_GameTraceChannel2,*/ FCollisionShape::MakeSphere(100.0f));

void AFPSCharacter::EndGravity()
{
	if (GrabbedObject)
	{
		const float ShootStrength = 1000.0f;
		const FVector ShootVelocity = FPSCameraComponent->GetForwardVector() * ShootStrength;

		GrabbedObject->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		GrabbedObject->SetSimulatePhysics(true);
		GrabbedObject->AddImpulse(ShootVelocity, NAME_None, true);

		SetGrabbedObject(nullptr);
	}

	else
	{
		isGrapple = false;
		if (!GetCharacterMovement()->IsFalling())
		{
			GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Falling);
		}
		GrappleCable->SetVisibility(false);
	}
}


void AFPSCharacter::SetGrabbedObject(UPrimitiveComponent* ObjectToGrab)
{
	GrabbedObject = ObjectToGrab;

	if (GrabbedObject)
	{
		GrabbedObject->SetSimulatePhysics(false);
		GrabbedObject->AttachToComponent(GrabbedObjectLocation, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

void AFPSCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == this) return;

	if (OtherActor->ActorHasTag(TEXT("WinZone")))
	{
		if (OverlapWidgetClass && !ActiveWidget)
		{
			ActiveWidget = CreateWidget<UUserWidget>(GetWorld(), OverlapWidgetClass);
			if (ActiveWidget)
			{
				ActiveWidget->AddToViewport();
				APlayerController* PC = Cast<APlayerController>(GetController());
				if (PC)
				{
					FInputModeUIOnly InputMode;
					InputMode.SetWidgetToFocus(ActiveWidget->TakeWidget());
					PC->SetInputMode(InputMode);
					PC->bShowMouseCursor = true;
				}
			}
		}
	}
}
























//if (isGrapple)
//{
//	GrappleCable->EndLocation = GetActorTransform().InverseTransformPosition(GrabPoint);
//
//	FVector Direction = GrabPoint - GetActorLocation();
//	float Distance = Direction.Size();
//
//	// Spring-like pull
//	FVector Force = Direction.GetSafeNormal() * Distance * GrappleStrength;
//
//	// Damping
//	FVector Damping = -GetVelocity() * GrappleDamping;
//
//	// Total force
//	FVector FinalForce = Force + Damping;
//	FinalForce = FinalForce.GetClampedToMaxSize(MaxGrappleForce);
//
//	GetCharacterMovement()->AddForce(FinalForce);
//}







//void AFPSCharacter::Gravity()
//{
//	const FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(GravityGunTrace), false, this);
//	const float TraceRange = 5000.0f;
//	const FVector StartTrace = FPSCameraComponent->GetComponentLocation();
//	const FVector EndTrace = (FPSCameraComponent->GetForwardVector() * TraceRange) + StartTrace;
//	const FVector Start = GetCapsuleComponent()->GetComponentLocation();
//	const FVector End = Start + (MaxLineDistance * UKismetMathLibrary::GetForwardVector(FPSCameraComponent->GetComponentRotation()));
//
//	FHitResult Hit;
//
//	if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, QueryParams))
//	{
//		if (UPrimitiveComponent* Prim = Hit.GetComponent())
//		{
//			if (Prim->IsSimulatingPhysics())
//			{
//				//SetGrabbedObject(Prim);
//				float ObjectMass = Prim->GetMass();
//				const float MaxPickupMass = 200.0f;
//
//				if (ObjectMass <= MaxPickupMass)
//				{
//					SetGrabbedObject(Prim);
//				}
//			}
//			if (AActor* HitActor = Hit.GetActor())
//			{
//				/*if (HitActor->ActorHasTag("LaunchPad"))
//				{
//					LaunchCharacter(FVector(0, 0, 1000), true, true);
//				}*/
//
//					if (HitActor->ActorHasTag("LaunchPad"))
//					{
//						FVector LaunchDirection = HitActor->GetActorUpVector() * 1000.0f;
//						LaunchCharacter(LaunchDirection, true, true);
//					}
//
//
//
//				if (HitActor->ActorHasTag("GrapplePoint"))
//				{
//					isGrapple = true;
//					GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
//					GrappleCable->SetVisibility(true);
//					GrabPoint = Hit.ImpactPoint;
//				}
//			}
//		}
//	}
//}

/*
#include "Player/FPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

AFPSCharacter::AFPSCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FPSCameraComponent->SetupAttachment(GetCapsuleComponent());

	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	FPSMesh->SetupAttachment(FPSCameraComponent);

	// Gravity gun components
	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	GrabbedObjectLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GrabbedObjectLocation"));
	GrabbedObjectLocation->SetupAttachment(FPSCameraComponent);

	GrabbedObject = nullptr;
}

void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update held object position
	if (PhysicsHandle && PhysicsHandle->GrabbedComponent)
	{
		FVector TargetLocation = GrabbedObjectLocation->GetComponentLocation();
		PhysicsHandle->SetTargetLocation(TargetLocation);
	}
}

void AFPSCharacter::Gravity()
{
	const float TraceRange = 5000.0f;
	FVector StartTrace = FPSCameraComponent->GetComponentLocation();
	FVector EndTrace = StartTrace + (FPSCameraComponent->GetForwardVector() * TraceRange);

	FHitResult Hit;
	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(GravityGunTrace), false, this);

	if (GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, QueryParams))
	{
		if (UPrimitiveComponent* Prim = Hit.GetComponent())
		{
			if (Prim->IsSimulatingPhysics())
			{
				float ObjectMass = Prim->GetMass();
				const float MaxPickupMass = 200.0f;

				if (ObjectMass <= MaxPickupMass)
				{
					GrabObject(Prim);
				}
			}
		}

		if (AActor* HitActor = Hit.GetActor())
		{
			if (HitActor->ActorHasTag("LaunchPad") && GetCharacterMovement()->IsMovingOnGround())
			{
				LaunchCharacter(FVector(0, 0, 1000), true, true);
			}
		}
	}
}

void AFPSCharacter::EndGravity()
{
	if (PhysicsHandle && PhysicsHandle->GrabbedComponent)
	{
		// Throw the object
		const float ShootStrength = 5000.0f;
		FVector ShootVelocity = FPSCameraComponent->GetForwardVector() * ShootStrength;

		UPrimitiveComponent* HeldComp = PhysicsHandle->GrabbedComponent;
		ReleaseObject();

		if (HeldComp)
		{
			HeldComp->AddImpulse(ShootVelocity, NAME_None, true);
		}
	}
}

void AFPSCharacter::GrabObject(UPrimitiveComponent* ObjectToGrab)
{
	if (!PhysicsHandle || !ObjectToGrab) return;

	PhysicsHandle->GrabComponentAtLocation(
		ObjectToGrab,
		NAME_None,
		ObjectToGrab->GetComponentLocation()
	);
	GrabbedObject = ObjectToGrab;
}

void AFPSCharacter::ReleaseObject()
{
	if (PhysicsHandle && PhysicsHandle->GrabbedComponent)
	{
		PhysicsHandle->ReleaseComponent();
	}
	GrabbedObject = nullptr;
}





*/




/*
Simulate Physics enabled

In the Static Mesh / Skeletal Mesh component  check Simulate Physics.

Without this, the PhysicsHandle can’t grab them.

Collision enabled

Set collision to BlockAll (or at least block Visibility for your line trace, and PhysicsBody for the handle).

Example:

Collision Enabled: Query and Physics

Object Type: PhysicsBody

Response to Visibility: Block (so you can line trace them)

Response to PhysicsBody: Block

Mass within limits

In your code you check ObjectMass <= MaxPickupMass (200).

If an object’s mass is bigger, the gun won’t pick it up.

You can adjust mass in the Static Mesh’s Physics settings.

Optional: Tags for gameplay logic

Example: "LaunchPad" tag to make special pads.

"Unliftable" tag if you want to exclude certain objects.




*/