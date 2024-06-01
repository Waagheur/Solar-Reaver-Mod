#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})

/*
Function: XI_fnc_drones_pack

Description:
    Packs up a drone back into the inventory.

Arguments:
    _unit - The unit that is packing the drone back up
    _drone - The drone being packed up

Return Value:
    None

Example:
    (begin example)
        [] call XI_fnc_drones_pack;
    (end)

Author:
	Mokka
*/

params ["_unit", "_drone"];

if !(local _drone) exitWith {};

//get item to pack item to:
private _packsTo = GET_TEXT(configFile >> "CfgVehicles" >> (typeOf _drone) >> "XI_packsTo", "");
if (_packsTo isEqualTo "") exitWith {};

private _displayName = GET_TEXT(configFile >> "CfgVehicles" >> (typeOf _drone) >> "displayName", "");
private _progtext = format ["Packing: %1",_displayName];

//Pack Drone
[_unit, "MedicOther"] call ace_common_fnc_doGesture;

[
	5,
	[_unit, _drone, _packsTo],
	{
		(_this select 0) params ["_unit", "_drone", "_packsTo"];
        private _pos = getPos _drone;
        private _fuel = fuel _drone;
        deleteVehicle _drone;
        private _gwh = [_pos, 0, 'GroundWeaponHolder', side _unit] call BIS_fnc_spawnVehicle;
        (_gwh select 0) addItemCargo [_packsTo, 1];

        // also place a battery back down if fuel above threshold
        if (_fuel > 0.75) then {

            _unit addItem "ACE_UAVBattery";
        };
	},
	{},
	_progtext
] call ace_common_fnc_progressBar;
