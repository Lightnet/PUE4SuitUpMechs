// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class PUE4SuitUpMechsServerTarget : TargetRules
{
	public PUE4SuitUpMechsServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		ExtraModuleNames.Add("PUE4SuitUpMechs");
	}
}
