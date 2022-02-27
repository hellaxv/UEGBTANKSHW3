// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank_Pawn.h"

#include "Tank_PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Project2/Project2.h"


// Sets default values
ATank_Pawn::ATank_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent=CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	RootComponent=BoxComponent;

	BodyMesh=CreateDefaultSubobject<USkeletalMeshComponent>("BodyMesh");
	BodyMesh->SetupAttachment(RootComponent);

	TurretMesh=CreateDefaultSubobject<UStaticMeshComponent>("TurretMesh");
	TurretMesh->SetupAttachment(BodyMesh);

	MachineGunMesh=CreateDefaultSubobject<USkeletalMeshComponent>("MachineGunMesh");
	MachineGunMesh->SetupAttachment(TurretMesh);

	CannonPosition = CreateDefaultSubobject<UArrowComponent>("CannonPosition");
	CannonPosition->SetupAttachment(TurretMesh);

	SprayCannonPosition=CreateDefaultSubobject<UArrowComponent>("SprayCannonPosition");
	SprayCannonPosition->SetupAttachment(MachineGunMesh);

	ArmComponent=CreateDefaultSubobject<USpringArmComponent>("ArmComponent");
	ArmComponent->SetupAttachment(RootComponent);
	ArmComponent->bInheritYaw=false;
	ArmComponent->bInheritPitch=false;
	ArmComponent->bInheritRoll=false;

	CameraComponent=CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(ArmComponent);
	CameraComponent->bUsePawnControlRotation=false;

}

void ATank_Pawn::MoveForward(float Scale)
{
	MoveScaleTarget = Scale;
}

void ATank_Pawn::RotateRight(float Scale)
{
	RotationScaleTarget = Scale;
}

void ATank_Pawn::Shoot()
{
	if (Cannon &&AmmoTap>0)
	{
		Cannon->Shoot(AmmoTap);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(6, 2, FColor::Cyan, FString(TEXT("NOTHING AMMOTAP")));
	}
}

void ATank_Pawn::SprayShoot()
{
	if (SprayCannon &&AmmoSpray>0)
	{
		SprayCannon->SprayShoot(AmmoSpray);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(6, 2, FColor::Cyan, FString(TEXT("NOTHING AMMOSPRAY")));
	}
}

// Called when the game starts or when spawned
void ATank_Pawn::BeginPlay()
{
	Super::BeginPlay();

	TankController = Cast<ATank_PlayerController>(GetController());

	if (CannonType)
	{
		auto Transform = CannonPosition->GetComponentTransform();
		Cannon = GetWorld()->SpawnActor<ACannon>(CannonType, Transform);
		Cannon->AttachToComponent(CannonPosition, FAttachmentTransformRules::SnapToTargetIncludingScale);
		//auto Transform = CannonPosition->GetComponentTransform();
		//GetWorld()->SpawnActor(CannonType, &Transform);
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	TankController = Cast<ATank_PlayerController>(GetController());

	if (SprayCannonType)
	{
		auto Transform = SprayCannonPosition->GetComponentTransform();
		SprayCannon = GetWorld()->SpawnActor<ASprayCannon>(SprayCannonType, Transform);
		SprayCannon->AttachToComponent(SprayCannonPosition, FAttachmentTransformRules::SnapToTargetIncludingScale);
	}

}

// Called every frame
void ATank_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	MoveTank(DeltaTime);
	RotateTank(DeltaTime);
	RotateCannon(DeltaTime);

	/*доп.код для аналога движения влево\направо.
	CurrentRightAxisValue = FMath::Lerp(CurrentRightAxisValue, TargetRightAxisValue, InterpolationKey);
	float yawRotation = RotationSpeed * CurrentRightAxisValue * DeltaTime;
	FRotator currentRotation = GetActorRotation();
	yawRotation = currentRotation.Yaw + yawRotation;
	FRotator newRotation = FRotator(0, yawRotation, 0);
	SetActorRotation(newRotation);
	*/

}

// Called to bind functionality to input
void ATank_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATank_Pawn::MoveTank(float DeltaTime)
{
	MoveScaleCurrent = FMath::Lerp(MoveScaleCurrent, MoveScaleTarget, MovementAcceleration);
	const auto Location = GetActorLocation();
	SetActorLocation(Location + GetActorForwardVector() * MoveScaleCurrent * MovementSpeed * DeltaTime, false);
	
	//отображает на экране скорость танка в виде строчки когда
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, FString::Printf(TEXT("%f"), MoveScaleCurrent));
	
	
}

void ATank_Pawn::RotateTank(float DeltaTime)
{
	RotationScaleCurrent = FMath::Lerp(RotationScaleCurrent, RotationScaleTarget, RotationAcceleration);
	auto Rotation = GetActorRotation();
	Rotation.Yaw += RotationScaleCurrent * RotationSpeed * DeltaTime;
	SetActorRotation(Rotation);
	
}

void ATank_Pawn::RotateCannon(float DeltaTime)
{
	if (!TankController)
		return;
	auto OldRotation = TurretMesh->GetComponentRotation();
	FRotator TurretRotation =  UKismetMathLibrary::FindLookAtRotation(TurretMesh->GetComponentLocation(), TankController->GetMousePosition());
	OldRotation.Yaw = TurretRotation.Yaw;
	TurretMesh->SetWorldRotation(FMath::Lerp(TurretMesh->GetComponentRotation(), OldRotation, TurretRotationAcceleration));
}
