/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR XI lasgun
		(used function : fn_las_overcharge_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_las_weapons = [
		"pxi_marsLasgun_T3", 
		"pxi_m36Galaxy_T1",
		"pxi_m36Carbine_T1", 
		"pxi_m36Lasgun_T1", 
		"pxi_RubiconLasgun_T1", 
		"XI_Pugio_SMG", 
		"XI_Mars_lasgun_wGl",
		
		"XI_lucius_dmr"
	];
	
    execVM "xi_allWeapons\functions\fn_las_overcharge_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "xi_allWeapons\functions\fn_las_overcharge_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "xi_allWeapons\functions\fn_las_overcharge_main.sqf";}] call CBA_fnc_addEventHandler;
	
};