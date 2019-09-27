// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class PUE4SuitUpMechsEditorTarget : TargetRules
{
	public PUE4SuitUpMechsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("PUE4SuitUpMechs");
	}
}
