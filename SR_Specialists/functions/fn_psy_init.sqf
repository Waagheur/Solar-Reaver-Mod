/*
	Author: Waagheur

	Description:
		Inits a unit psy variables and adds its powers
		Should be functionnal on any unit

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

if (is3DEN) exitWith {};

params ['_entity'];



// Auxilaries
(_entity setVariable ["SR_PSY_casting", 
	false, 
	true]);

if (isNull (_entity getVariable ["SR_PSY_rayend", objNull])) then {
	_rayend = "Sign_Sphere100cm_F" createVehicle [0,0,0];
	// Wait for object init to finish
	waitUntil {not(isNull _rayend)};
	
	(_entity setVariable ["SR_PSY_rayend", 
		_rayend, 
		true]);
};
(_entity getVariable "SR_PSY_rayend") hideObjectGlobal true;

if (isNull (_entity getVariable ["SR_PSY_raymarker", objNull])) then {
	_raymarker = "VR_3DSelector_01_exit_F" createVehicle [0,0,0];
	// Wait for object init to finish
	waitUntil {not(isNull _raymarker)};
	
	(_entity setVariable ["SR_PSY_raymarker", 
		_raymarker, 
		true]);
};
(_entity getVariable "SR_PSY_raymarker") hideObjectGlobal true;



// Power sanitisation
// Because default attribute values don't trigger an evaluation of its expression
// ie, If you don't edit the power pool it will be undefined
if ((_entity getVariable ["SR_PSY_power_pool", -1]) < 0) then {
	_entity setVariable ["SR_PSY_power_pool", 
		1800, 
		true];
};
if ((_entity getVariable ["SR_PSY_power", -1]) < 0) then {
	_entity setVariable ["SR_PSY_power", 
		1800, 
		true];
};

// Power regen loop
[_entity] spawn {
	_entity = (_this select 0);
	
	while {not(isNull _entity)} do {
		if ((_entity getVariable ["SR_PSY_power", 1000000]) < (_entity getVariable ["SR_PSY_power_pool", 0])) then {
			(_entity setVariable ["SR_PSY_power", 
				(_entity getVariable ["SR_PSY_power", 0]) + 1, 
				true]);
		};
		sleep 1;
	};
};



// Power display loop
[_entity] spawn {
	_entity = (_this select 0);
	
	while {not(isNull _entity)} do {
		if ((_entity == cameraOn) and (!isnull (findDisplay 46))) then {
			
			(_entity getVariable "SR_PSY_rayend") hideObject false;
			(_entity getVariable "SR_PSY_raymarker") hideObject false;
			[(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), clientOwner] remoteExec ["setOwner", 2];
			[(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]), clientOwner] remoteExec ["setOwner", 2];
			
			_SR_PSY_Power_bar_Back = findDisplay 46 ctrlCreate ["RscStructuredText", -1]; 
			_SR_PSY_Power_bar_Back ctrlSetPosition [-0.51,1.09,0.62,0.03];  
			_SR_PSY_Power_bar_Back ctrlCommit 0;
			_SR_PSY_Power_bar_Back ctrlSetBackgroundColor [0.2, 0.2, 0.2, 0.5];
			
			_SR_PSY_Power_bar = findDisplay 46 ctrlCreate ["RscProgress", -1];
			_SR_PSY_Power_bar ctrlSetPosition [-0.50,1.1,0.6,0.01];
			_SR_PSY_Power_bar ctrlSetTextColor [0.1, 0.1, 0.9, 0.9];
			_SR_PSY_Power_bar ctrlCommit 0;
			
			while {_entity == cameraOn} do {
				_SR_PSY_Power_bar progressSetPosition ((_entity getVariable ["SR_PSY_power", 0]) / (_entity getVariable ["SR_PSY_power_pool", 100]));
				sleep 1;
			};
			
			(_entity getVariable "SR_PSY_rayend") hideObject true;
			(_entity getVariable "SR_PSY_raymarker") hideObject true;
			
			ctrlDelete _SR_PSY_Power_bar_Back;
			ctrlDelete _SR_PSY_Power_bar;
		};
		sleep 1;
	};
};





// Powers

// Blink
if ((_entity getVariable ["SR_PSY_blink", true]) == true) then {
	_entity execVM "SR_Specialists\functions\fn_psy_blink.sqf";
};

// Rip And Tear
if ((_entity getVariable ["SR_PSY_rip_and_tear", true]) == true) then {
	_entity execVM "SR_Specialists\functions\fn_psy_rip_and_tear.sqf";
};

// Rift
if ((_entity getVariable ["SR_PSY_rift", true]) == true) then {
	_entity execVM "SR_Specialists\functions\fn_psy_rift.sqf";
};