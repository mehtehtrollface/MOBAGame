// Fill out your copyright notice in the Description page of Project Settings.

#include "TestCPPActor.h"
#include "Engine.h"


// Sets default values
ATestCPPActor::ATestCPPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestCPPActor::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, TEXT("YEET"));
	}
}

// Called every frame
void ATestCPPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

