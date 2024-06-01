#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})

/*
Function: XI_fnc_drones_unpack

Description:
    Unpacks a drone.

Arguments:
    _unit - The unit unpacking the drone
    _packedDrone - The class name of the packed drone being unpacked

Return Value:
    None

Example:
    (begin example)
        [] call XI_fnc_drones_unpack;
    (end)

Author:
	Mokka
*/

params ["_unit", "_packedDrone"];

//get class of UAV to unpack:
private _unpacksTo = GET_TEXT(configFile >> "CfgWeapons" >> _packedDrone >> "XI_unpacksTo", "");
if (_unpacksTo isEqualTo "") exitWith {};

private _displayName = GET_TEXT(configFile >> "CfgVehicles" >> _unpacksTo >> "displayName", "");
private _progtext = format ["Unpacking: %1",_displayName];

//Assemble Drone
[_unit, "MedicOther"] call ace_common_fnc_doGesture;

[
	5,
	[_unit, _unpacksTo, _packedDrone],
	{
		(_this select 0) params ["_unit", "_unpacksTo", "_packedDrone"];

        private _drone = _unpacksTo createVehicle (getPos _unit);
        createVehicleCrew _drone;

        _drone setPos (_unit modelToWorld [0,1,0]);
        _drone setFuel 1;
        (group _drone) setGroupIDGlobal [name _player];
        _unit removeItem _packedDrone;

		[_unit, 'PutDown'] call ace_common_fnc_doGesture;
	},
	{},
	_progtext
] call ace_common_fnc_progressBar;
