// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observer.generated.h"

UCLASS()
class TFC_PROJECT_API AObserver : public AActor
{
	GENERATED_BODY()

private:
	


public:	
	// Sets default values for this actor's properties
	static AObserver& getInstance()
	{
		static AObserver ob;
		return ob;
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AObserver();
	AObserver(const AObserver& ref);
	~AObserver();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
