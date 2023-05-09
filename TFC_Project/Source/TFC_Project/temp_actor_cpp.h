// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "temp_actor_cpp.generated.h"

UCLASS()
class TFC_PROJECT_API Atemp_actor_cpp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atemp_actor_cpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
