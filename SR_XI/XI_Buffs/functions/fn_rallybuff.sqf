// Applies relevant buff, then feeds params into itself for a loop
// Allows for scaling by duration 
//
//
//
//
params ["_bufftype","_target","_duration"];


private _fullDuration = getNumber (configFile >> "XI_Buffs" >> _buffType >> "Duration");
private _StrengthCoef = _duration / _fullDuration;

private _damagethreshold = [ace_medical_AIDamageThreshold,ace_medical_playerDamageThreshold] select (isPlayer _target);


_target setVariable ["ace_medical_damageThreshold", ((1 + _StrengthCoef) * _damagethreshold), true]; 

private _pain = ((_target getVariable ["ace_medical_pain", 0]) - (0.2 * _StrengthCoef)) max 0;
_target setVariable ["ace_medical_pain", _pain, true];

hintSilent str (_target getVariable "ace_medical_damageThreshold");

if (_duration == 0) exitwith {
	//systemChat "Ending";
	_target setVariable ["ace_medical_damageThreshold", (_damagethreshold), true]; 
};

_duration = _duration - 1;
[
	{
		_this call xi_fnc_rallybuff;
	}, [_bufftype,_target,_duration], 1
] call CBA_fnc_waitAndExecute;