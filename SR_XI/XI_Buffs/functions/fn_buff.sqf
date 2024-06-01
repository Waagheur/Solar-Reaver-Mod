//
//
//






params ["_buffType"];


// Perform animation 


/*

private _animation = (configFile >> "XI_Buffs" >> _buffType >> "Animation");
if !(isText _animation) then {diag_log ("XI Buffs: Undefined animation on Class" + str_buffType)};
[ace_player, _animation] call ace_common_fnc_doGesture;

*/


// Handle cooldowns

if (ace_player getvariable ["XI_Buffs_Cooldown", false]) exitwith {
	titleText ["You cannot cast a buff yet.", "PLAIN DOWN"];
	titleFadeOut 2;
};

ace_player setvariable ["XI_Buffs_Cooldown",true];
private _cooldown = (configFile >> "XI_Buffs" >> _buffType >> "Cooldown");
if !(isNumber _cooldown) exitwith {diag_log ("XI Buffs: Undefined Cooldown on Class " + _bufftype) };
_cooldown = getNumber _cooldown;
[{
	params ["_unit"];
	_unit setvariable ["XI_Buffs_Cooldown",false];
}, [ace_player], _cooldown] call CBA_fnc_waitAndExecute;



// Get buffable targets (Nearby Mans) and buff them
private _targets = ((position player) nearobjects ["CAManBase",10]);


{
	["XI_Buffed", [_buffType,_x, ace_player], _x] call CBA_fnc_targetEvent;
} foreach _targets;


