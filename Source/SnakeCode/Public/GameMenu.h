// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameMenu.generated.h"

/**
 * 
 */
UCLASS()
class SNAKECODE_API UGameMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void UpdateUi(int id);

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* QuitText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlayText;
	
};
