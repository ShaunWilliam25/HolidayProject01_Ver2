// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "PaperCharacter.h"
#include "Bullet.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_VER2_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "ShootBullet")
	TSubclassOf<class ABullet> bullet;
	UPROPERTY(EditAnywhere, Category = "ShootBullet")
	float bulletOffset;

public:
	UFUNCTION(BlueprintCallable, Category = "ShootBullet")
	void ShootBullet();
};
