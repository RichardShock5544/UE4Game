// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyToFire.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
AEnemyToFire::AEnemyToFire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);

}

// Called when the game starts or when spawned
void AEnemyToFire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyToFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

