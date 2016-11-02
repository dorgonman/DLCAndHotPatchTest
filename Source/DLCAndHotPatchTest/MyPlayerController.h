// Created by dorgon, all rights reserved

#pragma once

#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"
class UUpdateManager;
/**
 * 
 */
UCLASS()
class DLCANDHOTPATCHTEST_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	UPROPERTY()
	UUpdateManager* UpdateManager;
};
