// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemyo.generated.h"

UCLASS()
class ELDTRICHSTEELIS_API AEnemyo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* DamageCollision;
	
  UFUNCTION()
  void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	  bool bFromSweep, const FHitResult& Hit);
};
