

if (getNumber (configFile >> "CfgWeapons" >> (primaryWeapon ace_player) >> "forceWalk") > 0) then {
    [ACE_player, "forceWalk", "My_Addon", true] call ACE_common_fnc_statusEffect_set;
} else {
    [ACE_player, "forceWalk", "My_Addon", false] call ACE_common_fnc_statusEffect_set;
};

["loadout", {
    params ["_unit", "_newUnitLoadout", "_oldUnitLoadout"];

    if (getNumber (configFile >> "CfgWeapons" >> (primaryWeapon ace_player) >> "forceWalk") > 0) then {
        [ACE_player, "forceWalk", "My_Addon", true] call ACE_common_fnc_statusEffect_set;
    } else {
        [ACE_player, "forceWalk", "My_Addon", false] call ACE_common_fnc_statusEffect_set;
    };
}, true] call CBA_fnc_addPlayerEventHandler;