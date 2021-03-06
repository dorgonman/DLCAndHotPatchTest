// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class DLCAndHotPatchTest : ModuleRules
{
	public DLCAndHotPatchTest(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        PrivateDependencyModuleNames.AddRange(new string[] { "BuildPatchServices" });
        // PrivateDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem", "Hotfix" });
        PublicDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem", "Hotfix" });
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
