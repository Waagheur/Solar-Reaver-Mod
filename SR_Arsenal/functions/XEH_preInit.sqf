/*
	Author: Waagheur

	Description:		
		Add SR_Arsenal CBA settings

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

[
	"sr_wbk_melee_no_kill", 
	"CHECKBOX", 
	["SR WBK Melee No Instakill", "To reduce the amount of instant death from melee combat"], 
	"SR Arsenal", 
	true,
	true, 
	{}, 
	true
] call CBA_fnc_addSetting;