// Only usable by players, so no need to worry about params
//
//
//


private _buffNames = [];
private _weapon = currentweapon ace_player;

XI_buffs = getArray (configFile >> "CfgWeapons" >> _weapon >> "XI_Buffs");
if (XI_buffs isEqualTo []) exitwith
{
	titleText ["This weapon does not have any buffs available.", "PLAIN DOWN"];
	titleFadeOut 2;
};

{
	private _displayname = gettext (configFile >> "XI_Buffs" >> _x >> "DisplayName");
	_buffNames pushback _displayname
} foreach XI_buffs;





["Select Buff", "b", _buffNames, "",
 
 
 "[XI_buffs select %2] call xi_fnc_buff"] call BIS_FNC_createmenu;  showCommandingMenu "#USER:b_0";



