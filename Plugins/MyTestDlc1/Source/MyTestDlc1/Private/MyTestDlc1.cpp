// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MyTestDlc1PrivatePCH.h"

#define LOCTEXT_NAMESPACE "FMyTestDlc1Module"

void FMyTestDlc1Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMyTestDlc1Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyTestDlc1Module, MyTestDlc1)