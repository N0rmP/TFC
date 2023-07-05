// Fill out your copyright notice in the Description page of Project Settings.
#include "temp_actor_cpp.h"
#include "Engine/World.h"



// Sets default values
Atemp_actor_cpp::Atemp_actor_cpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atemp_actor_cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atemp_actor_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

