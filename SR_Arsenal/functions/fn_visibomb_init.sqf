/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers add a FiredMan event handler upon picking up an SR visibomb launcher
		(used function : fn_visibomb_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_visibomb_weapons = [
		"SR_VB_IC_Launcher_AT_grey",
		"SR_VB_TIOW_SM_Rocket_1_LSLOT"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], []];
	} forEach _visibomb_weapons;
	
    execVM "SR_Arsenal\functions\fn_visibomb_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_visibomb_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_visibomb_main.sqf";}] call CBA_fnc_addEventHandler;
	
};