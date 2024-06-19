/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up a TVD grenade
		(used function : fn_grenades_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_grenades = [
		"SR_Mag_TVD_OPTRE_cart",
		"SR_Mag_TVD_pxi_tauros_unarmed",
		"SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _grenades;
	
    execVM "SR_XI\xi_vehicles\functions\fn_grenades_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_XI\xi_vehicles\functions\fn_grenades_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_XI\xi_vehicles\functions\fn_grenades_main.sqf";}] call CBA_fnc_addEventHandler;
	
};