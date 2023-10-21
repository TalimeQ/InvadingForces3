// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class InvadingForces3 : ModuleRules
{
	public InvadingForces3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
