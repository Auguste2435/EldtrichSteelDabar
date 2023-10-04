#include "Weapon1.h"

// Sets default values
AWeapon1::AWeapon1()
{
	// Set this empty to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
    
	SetReplicates(true);

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AWeapon1::BeginPlay()
{
	Super::BeginPlay();

	Mesh->SetVisibility(false);
}

// Called every frame
void AWeapon1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWeapon1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
