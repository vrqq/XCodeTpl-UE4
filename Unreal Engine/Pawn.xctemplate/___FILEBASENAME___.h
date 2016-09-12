// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "___FILEBASENAME___.generated.h"

UCLASS()
class UE13_API A___FILEBASENAMEASIDENTIFIER___ : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	A___FILEBASENAMEASIDENTIFIER___();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
