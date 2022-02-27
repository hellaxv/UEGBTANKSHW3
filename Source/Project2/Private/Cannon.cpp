// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"

// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetupAttachment(RootComponent);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>("ProjectileSpawnPoint");
	Mesh->SetupAttachment(RootComponent);
}

void ACannon::Shoot(int& AmmoTap)
{
	if (!bReadyToShoot)
		return;
	switch (Type)
	{
	case ECannonType::FireProjectile:
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString(TEXT("SHOOT")));
		AmmoTap--;
		GEngine->AddOnScreenDebugMessage(3, 666, FColor::Cyan, FString::Printf(TEXT("AMMOTAP - %i"),AmmoTap));
		break;
	case ECannonType::FireTrace:
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString(TEXT("TAPPED")));
		break;
	}
	bReadyToShoot = false;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle,FTimerDelegate::CreateUObject(this, &ACannon::ResetShootState), 1/FireRate, false);
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(12345, -1, FColor::Purple, FString::Printf(TEXT("RECHARDE %f"),GetWorld()->GetTimerManager().GetTimerElapsed(TimerHandle)));

}

void ACannon::ResetShootState()
{
	bReadyToShoot = true;
}

