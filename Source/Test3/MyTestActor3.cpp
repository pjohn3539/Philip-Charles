// Fill out your copyright notice in the Description page of Project Settings.

#include "Test3.h"
#include "MyTestActor3.h"


// Sets default values
AMyTestActor3::AMyTestActor3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTestActor3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTestActor3::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

