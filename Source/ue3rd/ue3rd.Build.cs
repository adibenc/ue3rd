// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue3rd : ModuleRules
{
	public ue3rd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
