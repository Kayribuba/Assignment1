// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Camera/CameraActor.h"
#include "CPP_BaseGameAgent.h"
#include "CPP_BasePowerUp.h"
#include "GameFramework/Controller.h"
#include "Math/Vector2D.h"
#include "Engine/DataTable.h"
#include "CPP_BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BaseGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		ACPP_BasePlayerController* OnPlayerDied();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void OnEnemyDied(ACPP_BaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StartGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void EndGame(bool Success);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void SpawnEnemyFrom(TArray<TSubclassOf<ACPP_BaseGameAgent>>& ClassList);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void ResetGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void RespawnPlayer();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		float GetDistanceTravelled();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float WorldScrollSpeed;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACameraActor* WorldCameraActor;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		UDataTable* PlayerAgentInfoTable;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float RespawnDelay;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float SpawnOffset;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FTimerHandle ShipSpawnTimer;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		TArray<TSubclassOf<ACPP_BasePowerUp>> PowerUpList;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float PickUpSpawnPercent;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool IsGameOverScreen;
};
