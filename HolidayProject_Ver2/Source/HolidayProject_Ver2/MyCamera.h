// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "MyPlayerCharacter.h"
#include "MyCamera.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_VER2_API AMyCamera : public ACameraActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float LeftBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float TopBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float BottomBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float RightBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float CameraDelay;

public:
	UFUNCTION(BlueprintCallable, Category = "CameraMovement")
	void AdjustCamera(AMyPlayerCharacter* player);
	
};
