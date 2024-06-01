#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})

/*
Function: XI_fnc_drones_canUnpack

Description:
    Checks whether given unit has drones that can be unpacked.

Arguments:
    _unit - The unit to check

Return Value:
    canUnpack?

Example:
    (begin example)
        [player] call XI_fnc_drones_canUnpack;
    (end)

Author:
	Mokka
*/

params ["_unit"];

if (!((vehicle _unit) isKindOf 'Man')) exitWith { false };

private _items = [_unit] call CBA_fnc_uniqueUnitItems;

private _hasDrones = {
    private _unpacksTo = GET_TEXT(configFile >> "CfgWeapons" >> _x >> "XI_unpacksTo", "");
    (_unpacksTo isNotEqualTo "")
} count _items;

(_hasDrones > 0)
