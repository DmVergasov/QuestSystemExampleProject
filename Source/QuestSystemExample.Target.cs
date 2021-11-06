// Copyright Dmitriy Vergasov All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class QuestSystemExampleTarget : TargetRules
{
	public QuestSystemExampleTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		bUseUnityBuild = false;

		ExtraModuleNames.AddRange( new string[] { "QuestSystemExample" } );
	}
}
