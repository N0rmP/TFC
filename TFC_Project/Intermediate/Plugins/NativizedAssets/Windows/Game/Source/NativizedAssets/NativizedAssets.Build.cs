// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Private/NativizedAssets.h";
		bLegacyPublicIncludePaths = Target.bLegacyPublicIncludePaths;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "TFC_Project" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "MagicLeapARPin", "NavigationSystem", "ClothingSystemRuntimeNv", "PhysicsCore", "AnimGraphRuntime", "AIModule", "LowEntryExtendedStandardLibrary", "SlateCore", "UMG", "InputCore", "MovieScene", "MovieSceneTracks", "Landscape", "StaticMeshDescription", "MeshDescription", "AudioExtensions", "AudioPlatformConfiguration", "GameplayTasks", "GameplayTags", "ClothingSystemRuntimeInterface", "PropertyAccess", "PropertyPath", "Slate", "AudioMixer", "MediaUtils", "MediaAssets" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
