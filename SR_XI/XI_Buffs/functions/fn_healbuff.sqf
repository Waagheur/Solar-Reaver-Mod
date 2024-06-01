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


if (((_target getVariable "ace_medical_woundbleeding") != 0) AND alive _target) then // Checks for whether or not the target needs bandaging, ie that they're alive and bleeding
{
private _bodyparts = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"];
private _treatables = [];

{
	if ([_target, _target, _x, "elasticbandage"] call ace_medical_treatment_fnc_canbandage) then {
		_treatables pushBackUnique _x;
	};
} foreach _bodyparts; // Gets an array of limbs what need fixing

private _selectedLimb = selectRandom _treatables;


[_target, _selectedLimb , "elasticbandage"] call ace_medical_treatment_fnc_bandageLocal; 

};

private _pain = ((_target getVariable ["ace_medical_pain", 0]) - (0.1 * _StrengthCoef)) max 0;
_target setVariable ["ace_medical_pain", _pain, true];

if (_duration == 0) exitwith {
	//systemChat "Ending";
};

_duration = _duration - 1;
[
	{
		_this call xi_fnc_healbuff;
	}, [_bufftype,_target,_duration], 1
] call CBA_fnc_waitAndExecute;