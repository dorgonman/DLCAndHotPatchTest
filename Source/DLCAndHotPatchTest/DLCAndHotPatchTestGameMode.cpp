// Fill out your copyright notice in the Description page of Project Settings.

#include "DLCAndHotPatchTest.h"
#include "DLCAndHotPatchTestGameMode.h"

#include "GenericPlatformChunkInstall.h"

#include "BuildPatchServices.h"

#include "OnlineSubsystemTypes.h"
#include "OnlineHotfixManager.h"
void ADLCAndHotPatchTestGameMode::BeginPlay()
{
	Super::BeginPlay();
	//IPlatformFile& InnerPlatform = FPlatformFileManager::Get().GetPlatformFile();
	////InnerPlatform.

	static IBuildPatchServicesModule* BuildPatchServices = nullptr; 
	if (BuildPatchServices == nullptr) { 
		BuildPatchServices = &FModuleManager::LoadModuleChecked<IBuildPatchServicesModule>(TEXT("BuildPatchServices"));
	}

	auto manifestPath = FPaths::ConvertRelativePathToFull(FPaths::GamePersistentDownloadDir() + "/DLCAndHotPatchTest.manifest");
	auto manifestPtr = BuildPatchServices->LoadManifestFromFile(manifestPath);

	UE_LOG(LogTemp, Log, TEXT("Project Name: %s"), *manifestPtr->GetAppName());
	FString appName = manifestPtr->GetAppName();

	UE_LOG(LogTemp, Log, TEXT("test"));
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