// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Team5_Player : ModuleRules
{
	public Team5_Player(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
