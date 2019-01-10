// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HolidayProject_Ver2Target : TargetRules
{
	public HolidayProject_Ver2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "HolidayProject_Ver2" } );
	}
}
