// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "CPP_BasePlayerController.generated.h"

/**
 * 
 */

UCLASS()
class ACPP_BasePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void Reset();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CalcScreenDimentions();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		AController* OnPlayerDeath();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool bDiedWhileFiring;
};
