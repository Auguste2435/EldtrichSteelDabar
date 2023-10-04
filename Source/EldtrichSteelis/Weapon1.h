#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon1.generated.h"

USTRUCT(BlueprintType)

struct FixProperties
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)

	class UAnimSequence* AnimPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimOffset = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CustomOffsetTransform;


};
UCLASS(Abstract)

class ELDTRICHSTEELIS_API AWeapon1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this empty's properties
	AWeapon1();
protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components");
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components");
	class  USkeletalMeshComponent* Mesh;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	class AEldtrichSteelisCharacter* CurrentOwner;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FIXProperties FixProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuratons")
	FTransform PlacementTransform;

};
