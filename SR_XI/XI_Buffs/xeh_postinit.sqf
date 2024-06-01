



private _id = ["XI_Buffed", {

params ["_buffType","_target","_source"];


private _displayname = gettext (configFile >> "XI_Buffs" >> _buffType >> "DisplayName");
private _statement = missionNamespace getVariable gettext (configFile >> "XI_Buffs" >> _buffType >> "Statement");
private _duration = getNumber (configFile >> "XI_Buffs" >> _buffType >> "Duration");
systemChat str _statement;
[_bufftype,_target,_duration] call _statement;
if (_target != ace_player) then {
private _message = "You've been given " + (_displayname) + " by " + (name _source);
titleText [_message, "PLAIN DOWN"];
titleFadeOut 2;
};


}] call CBA_fnc_addEventHandler;


["XI Legion","XI_Buff_Select", "Cast Buff", {call xi_fnc_selectbuff}, "", []] call CBA_fnc_addKeybind;