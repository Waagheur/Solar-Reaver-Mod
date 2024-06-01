// Applies relevant buff, then feeds params into itself for a loop
// Allows for scaling by duration 
//
//
//
//


params ["_bufftype","_target","_duration"];

//systemchat str _this;
private _fullDuration = getNumber (configFile >> "XI_Buffs" >> _buffType >> "Duration");
private _StrengthCoef = _duration / _fullDuration;

_target setAnimSpeedCoef (1 + _StrengthCoef); // Strength coef can be any number from close-to-0 to 1, so this means speed can be anywhere from 1 to 2. To scale, multiply the strength coef by a number

if (_duration == 0) exitwith {
	//systemChat "Ending";
};

_duration = _duration - 1;
[
	{
		_this call xi_fnc_speedbuff;
	}, [_bufftype,_target,_duration], 1
] call CBA_fnc_waitAndExecute;