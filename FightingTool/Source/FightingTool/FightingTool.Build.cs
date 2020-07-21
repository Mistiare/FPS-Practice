// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FightingTool : ModuleRules
{
	public FightingTool(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
