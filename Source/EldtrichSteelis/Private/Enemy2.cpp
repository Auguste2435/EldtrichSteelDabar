// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy2.h"

// Sets default values
AEnemy2::AEnemy2()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

