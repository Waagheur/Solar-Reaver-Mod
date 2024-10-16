/*
	Author: Waagheur

	Description:
		Adds the rift power to a passed unit

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

params ['_entity'];

_entity addAction ["Rift", { 

	SR_PSY_entity = _this select 3;
	
	if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) > 1200) then {
		(SR_PSY_entity setVariable ["SR_PSY_casting", 
			true, 
			true]);
	 
		SR_PSY_L = 50;
		SR_PSY_ray = 0; 
		SR_PSY_press = 0; 
		SR_PSY_roll = 0;
		SR_PSY_click = 0;
		
		SR_PSY_ray = addMissionEventHandler["EachFrame", { 
			SR_PSY_beg =  ASLtoAGL ((eyePos SR_PSY_entity) vectorAdd [0,0,-0.1]);  
			SR_PSY_endE = ASLtoAGL ((AGLtoASL (SR_PSY_beg vectorAdd [0,0,0.1])) vectorAdd ((getCameraViewDirection SR_PSY_entity) vectorMultiply SR_PSY_L)); 
			while {0 != count(lineIntersectsSurfaces[AGLtoASL SR_PSY_beg,AGLtoASL SR_PSY_endE,SR_PSY_entity])} do { 
				SR_PSY_L = SR_PSY_L - 1; 
				SR_PSY_beg =  ASLtoAGL ((eyePos SR_PSY_entity) vectorAdd [0,0,-0.1]);  
				SR_PSY_endE = ASLtoAGL ((AGLtoASL (SR_PSY_beg vectorAdd [0,0,0.1])) vectorAdd ((getCameraViewDirection SR_PSY_entity) vectorMultiply SR_PSY_L)); 
			}; 
			drawLine3D [SR_PSY_beg, SR_PSY_endE, [1,0,0,1]]; 
			(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPosASL (AGLtoASL SR_PSY_endE); 
		}];  
	 
		SR_PSY_roll = (findDisplay 46) displayAddEventHandler["MouseZChanged", { 
			_Z = (_this select 1); 
			if (_Z > 0) then { 
				if ((SR_PSY_L + _Z) < 50) then { 
					SR_PSY_L = SR_PSY_L + _Z; 
				} 
				else{ 
					SR_PSY_L = 50; 
				}; 
			} 
			else{ 
				if ((SR_PSY_L + _Z) > 2) then { 
					SR_PSY_L = SR_PSY_L + _Z; 
				} 
				else{ 
					SR_PSY_L = 2; 
				}; 
			}; 
		}];
		
		SR_PSY_press = (findDisplay 46) displayAddEventHandler["KeyDown", {
			if ((_this select 1) == 201) then {
				if (SR_PSY_L < 50) then {
					SR_PSY_L = SR_PSY_L + 1;
				}; 
			}; 
			if ((_this select 1) == 209) then { 
				if (SR_PSY_L > 2) then {
					SR_PSY_L = SR_PSY_L - 1;
				}; 
			}; 
			if ((_this select 1) == 54) then { 
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
				(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll];
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0];
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]); 
			}; 
			if ((_this select 1) == 157) then { 
				[getPos (SR_PSY_entity getVariable ["SR_PSY_rayend", objNull])] spawn {
					_targ = (_this select 0);
					_targs = (_targ nearObjects ["AllVehicles", 12]);
					[_targ, _targs] spawn{
						sleep 0.5;
						_targ = (_this select 0);
						_targs = (_this select 1);
						_i = 120;
						while {_i > 0} do {
							_targs = (_targ nearObjects ["AllVehicles", 12]);
							{
								_vectdir = (getPosASL _x) vectorFromTo (AGLtoASL _targ);
								if ((getMass _x) == 0) then {
									[_x,[_vectdir vectorMultiply 1000*(1), [0,0,0]]] remoteExec ["addForce",0];
								}
								else{
									[_x,[_vectdir vectorMultiply 1000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
								};
								_x setUnconscious false;
							}forEach _targs;
							sleep 0.1;
							_i = _i - 1;
						};
						_targs = (_targ nearObjects ["AllVehicles", 12]); 
						{
							_vectdir = (AGLtoASL _targ) vectorFromTo (getPosASL _x);
							if ((getMass _x) == 0) then {
								[_x,[_vectdir vectorMultiply 100000*(1), [0,0,0]]] remoteExec ["addForce",0];
							}
							else{
								[_x,[_vectdir vectorMultiply 100000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
							};
							if (_x isKindOf "Man") then {
								if ("ace_medical_engine" in activatedAddons) then {
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
								}
								else {
									_x setDamage 1;
								};
							};
							sleep 0.1;
						}forEach _targs;
					};
				};
				SR_PSY_entity setVariable ["SR_PSY_power",
					(SR_PSY_entity getVariable ["SR_PSY_power", 1200]) - 1200,
					true]; 
				
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
				(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll];
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0];
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]);
			};
		}];
		
		SR_PSY_click = (findDisplay 46) displayAddEventHandler["MouseButtonDown", {
			if ((_this select 1) == 0) then {
				[getPos (SR_PSY_entity getVariable ["SR_PSY_rayend", objNull])] spawn {
					_targ = (_this select 0);
					_targs = (_targ nearObjects ["AllVehicles", 12]);
					[_targ, _targs] spawn{
						sleep 0.5;
						_targ = (_this select 0);
						_targs = (_this select 1);
						_i = 120;
						while {_i > 0} do {
							_targs = (_targ nearObjects ["AllVehicles", 12]);
							{
								_vectdir = (getPosASL _x) vectorFromTo (AGLtoASL _targ);
								if ((getMass _x) == 0) then {
									[_x,[_vectdir vectorMultiply 1000*(1), [0,0,0]]] remoteExec ["addForce",0];
								}
								else{
									[_x,[_vectdir vectorMultiply 1000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
								};
								_x setUnconscious false;
							}forEach _targs;
							sleep 0.1;
							_i = _i - 1;
						};
						_targs = (_targ nearObjects ["AllVehicles", 12]); 
						{
							_vectdir = (AGLtoASL _targ) vectorFromTo (getPosASL _x);
							if ((getMass _x) == 0) then {
								[_x,[_vectdir vectorMultiply 100000*(1), [0,0,0]]] remoteExec ["addForce",0];
							}
							else{
								[_x,[_vectdir vectorMultiply 100000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
							};
							if (_x isKindOf "Man") then {
								if ("ace_medical_engine" in activatedAddons) then {
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
								}
								else {
									_x setDamage 1;
								};
							};
							sleep 0.1;
						}forEach _targs;
					};
				};
				SR_PSY_entity setVariable ["SR_PSY_power",
					(SR_PSY_entity getVariable ["SR_PSY_power", 1200]) - 1200,
					true]; 
					
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
				(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll]; 
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]);
			}; 
			if ((_this select 1) == 1) then { 
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
				(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll];
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0];
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]);
			};  
		}];
	} 
	else{ 
		titleText["Not Enough Power", "PLAIN DOWN", 0, false, true]; 
	};
	
}, 
_entity, 
1.5, 
true, 
true, 
"", 
"(_this getVariable ['SR_PSY_casting', false]) == false", 
0.01
];