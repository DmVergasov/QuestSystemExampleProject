// Copyright Dmitriy Vergasov All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class QuestSystemExampleEditorTarget : TargetRules
{
	public QuestSystemExampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "QuestSystemExample" } );
	}
}
