// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CPP_BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BasePlayerState : public APlayerState
{
	GENERATED_BODY()
	
public :

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void  AddScore(float Amount);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void  ConsumeLife();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool  HasRemainingLives();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float PlayerScore;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		int RemainingLives;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float TimeOfLastDeath;
};
