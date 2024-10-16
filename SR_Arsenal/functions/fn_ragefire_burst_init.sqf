/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR mastercraft ragefire plasma gun
		(used function : fn_ragefire_burst_cd.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {
	SR_Arsenal_Ragefire_Take_Handler = -1;
	SR_Arsenal_Ragefire_Clock = 0;
    execVM "SR_Arsenal\functions\fn_ragefire_burst_cd.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_ragefire_burst_cd.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_ragefire_burst_cd.sqf";}] call CBA_fnc_addEventHandler;
};