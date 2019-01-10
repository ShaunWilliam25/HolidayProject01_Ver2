// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_VER2_API ABullet : public APaperCharacter
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "AutoMovement")
	float movementSpeed;

public:
	UFUNCTION(BlueprintCallable, Category = "AutoMovement")
	void MoveBullet();
};
