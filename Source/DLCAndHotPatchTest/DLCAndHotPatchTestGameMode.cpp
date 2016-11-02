// Fill out your copyright notice in the Description page of Project Settings.

#include "DLCAndHotPatchTest.h"
#include "DLCAndHotPatchTestGameMode.h"
#include "MyPlayerController.h"
ADLCAndHotPatchTestGameMode::ADLCAndHotPatchTestGameMode() 
{
	PlayerControllerClass = AMyPlayerController::StaticClass();

}

void ADLCAndHotPatchTestGameMode::BeginPlay()
{
	Super::BeginPlay();
	//IPlatformFile& InnerPlatform = FPlatformFileManager::Get().GetPlatformFile();
	////InnerPlatform.



	//UE_LOG(LogTemp, Log, TEXT("test"));
	//
	//UOnlineHotfixManager* hotfix = UOnlineHotfixManager::Get(GetWorld());
	//hotfix->StartHotfixProcess();
	//BuildPatchServices->StartBuildInstall()
	//BuildPatchServices->
	//auto chunk = FWindowsPlatformMisc::GetPlatformChunkInstall();
	//auto a = chunk->GetChunkLocation(0);
	//chunk->DebugStartNextChunk();
	//IPlatformChunkInstall* chunk = FGenericPlatformMisc::GetPlatformChunkInstall();
	//chunk->DebugStartNextChunk();
	//chunk.
	//BuildPatchServices->StartBuildInstall

}