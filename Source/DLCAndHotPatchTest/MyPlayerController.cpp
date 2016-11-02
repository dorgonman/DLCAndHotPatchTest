// Created by dorgon, all rights reserved

#include "DLCAndHotPatchTest.h"
#include "MyPlayerController.h"




#include "GenericPlatformChunkInstall.h"

#include "BuildPatchServices.h"

//#include "OnlineSubsystemTypes.h"
//#include "OnlineHotfixManager.h"

#include "UpdateManager.h"


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	static IBuildPatchServicesModule* BuildPatchServices = nullptr;
	if (BuildPatchServices == nullptr) {
		BuildPatchServices = &FModuleManager::LoadModuleChecked<IBuildPatchServicesModule>(TEXT("BuildPatchServices"));
	}

	auto manifestPath = FPaths::ConvertRelativePathToFull(FPaths::GamePersistentDownloadDir() + "/DLCAndHotPatchTest.manifest");
	auto manifestPtr = BuildPatchServices->LoadManifestFromFile(manifestPath);

//	UE_LOG(LogTemp, Log, TEXT("Project Name: %s"), *manifestPtr->GetAppName());
	//FString appName = manifestPtr->GetAppName();
	UpdateManager = NewObject<UUpdateManager>();
	UpdateManager->StartCheck();
	UE_LOG(LogTemp, Log, TEXT("Project Name: %s"), "test");
}