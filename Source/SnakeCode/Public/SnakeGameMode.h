// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SnakeGameMode.generated.h"



/**
 * 
 */

UENUM(BlueprintType)
enum class EGameState :uint8
{
	Menu UMETA(DisplayName = "in menu"),
	Playing UMETA(DisplayName = "Playing"),
};

UCLASS()
class SNAKECODE_API ASnakeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASnakeGameMode();
	EGameState GetGameState() { return GameState; }
	void SetGameState(EGameState state) {
		GameState = state;
	};
protected:
	EGameState GameState;
	
};
