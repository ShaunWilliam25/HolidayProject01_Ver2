// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HolidayProject_Ver2EditorTarget : TargetRules
{
	public HolidayProject_Ver2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "HolidayProject_Ver2" } );
	}
}
