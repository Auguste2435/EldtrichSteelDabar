// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemyo.h"

#include "Components/BoxComponent.h"

#include "MonsterShooterCharacter.generated.h"

// Sets default values
AEnemyi::AEnemyi()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collsion"));
	DamageCollision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AEnemyi::BeginPlay()
{
	Super::BeginPlay();

	DamageCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemyi::OnHit);



}

// Called every frame
void AEnemyi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyi::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyi::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{

}

