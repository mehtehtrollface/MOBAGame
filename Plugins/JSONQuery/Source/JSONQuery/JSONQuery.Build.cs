// Copyright 1998-2013 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class JSONQuery : ModuleRules
{
	public JSONQuery(ReadOnlyTargetRules Rules) : base(Rules)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject",
				"Engine",
				"HTTP",
				"Json"
			}
		);
	}
}
