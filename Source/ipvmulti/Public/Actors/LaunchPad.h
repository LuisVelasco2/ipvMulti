﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchPad.generated.h"

class UBoxComponent;

UCLASS()
class IPVMULTI_API ALaunchPad : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaunchPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* OverlapComp;

	//void OverlapLaunchpad();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
