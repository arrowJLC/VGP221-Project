// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile/FPSProjectile.h"
#include "Player/FPSCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"

// Sets default values
AFPSProjectile::AFPSProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!CollisionComponent) {
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		CollisionComponent->InitSphereRadius(15.0f);
		CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
		//CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnWhateverWeWantToNameThis);
		RootComponent = CollisionComponent;

		//// In AFPSProjectile constructor
		//CollisionComponent->InitSphereRadius(15.0f);
		//CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		//CollisionComponent->SetCollisionObjectType(ECC_GameTraceChannel1); // Use "Projectile" custom channel if you made one
		//CollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
		//CollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block); // Block characters
		//CollisionComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block); // Block walls
		//CollisionComponent->SetNotifyRigidBodyCollision(true); // <-- REQUIRED for OnHit

		//CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnProjectileHit);

		CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnProjectileHit);
	}

	if (!ProjectileMovementComponent) {
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		ProjectileMovementComponent->InitialSpeed = BulletSpeed;
		ProjectileMovementComponent->MaxSpeed = BulletSpeed;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 0.3f;
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	}

	if (!ProjectileMeshComponent) {
		ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));

		// 1. Setup a imported mesh
		//static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("/Game/Meshes/Projectile/Sphere.Sphere"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("/Game/Fab/9mm_Luger_Ammo/9mm_luger_fbx/StaticMeshes/9mm_luger_fbx.9mm_luger_fbx"));
		

		// 2. Get assets from Unreal engine
		// static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("/Engine/BasicShapes/Sphere"));
		if (SphereMeshAsset.Succeeded()) {
			ProjectileMeshComponent->SetStaticMesh(SphereMeshAsset.Object);
		}

		// Settings up material for sphere
	/*	static ConstructorHelpers::FObjectFinder<UMaterial>SphereMaterial(TEXT("/Game/Materials/M_Projectile.M_Projectile"));
		if (SphereMaterial.Succeeded()) {
			ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(SphereMaterial.Object, ProjectileMaterialInstance);
		}*/

		ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
		ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
		ProjectileMeshComponent->SetupAttachment(RootComponent);
	}

	InitialLifeSpan = 3.0f; // Unity Destroy(3.0f)
}

// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
	// 1. FVector ShootDirection: Pass by value, least efficient. Basically just duplicating the data
	// 2. FVector* ShootDirection: Pass pointer memory, efficient cus memory address.
	// 3. FVector& ShootDirection: Pass reference memory, efficient cus memory address. Similar Unity Out
	// 4. const FVector& ShootDirection: Pass ref memory. We can't directly change the original value like 3.

	ProjectileMovementComponent->Velocity = ProjectileMovementComponent->InitialSpeed * ShootDirection;
}

//void AFPSProjectile::OnWhateverWeWantToNameThis(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//	if (OtherActor != this && OtherComponent->IsSimulatingPhysics()) {
//		OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
//		Destroy();
//	}
//}

void AFPSProjectile::OnWhateverWeWantToNameThis(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this)
	{
		// Deal damage if it hits the player
		if (OtherActor->IsA(AFPSCharacter::StaticClass()))
		{
			UGameplayStatics::ApplyDamage(OtherActor, 10.0f, GetInstigatorController(), this, UDamageType::StaticClass());
		}

		// Physics impulse
		if (OtherComponent && OtherComponent->IsSimulatingPhysics())
		{
			OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
		}

		Destroy();
	}

	
}


void AFPSProjectile::OnProjectileHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this && OtherActor != GetOwner())
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile hit %s"), *OtherActor->GetName());

		UGameplayStatics::ApplyDamage(
			OtherActor,
			Damage,                        // your projectile damage value
			GetInstigatorController(),
			this,
			UDamageType::StaticClass()
		);
		UE_LOG(LogTemp, Warning, TEXT("Projectile hit %s"), *OtherActor->GetName());

		Destroy(); // Destroy projectile after hitting
	}
}

