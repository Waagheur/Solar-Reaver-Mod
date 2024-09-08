/*
	Author: Waagheur

	Description:
		Adds the rip and tear power to a passed unit

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

params ['_entity'];

_entity addAction ["Rip And Tear", { 

	SR_PSY_entity = _this select 3;
	
	if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) > 59) then {
		(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) hideObject false;
		[(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), clientOwner] remoteExec ["setOwner", 2];
		(SR_PSY_entity setVariable ["SR_PSY_casting", 
			true, 
			true]);
		(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) hideObject false;
		[(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]), clientOwner] remoteExec ["setOwner", 2];
			
		SR_PSY_L = 3;
		SR_PSY_ray = 0; 
		SR_PSY_press = 0; 
		SR_PSY_click = 0;
		
		SR_PSY_ray = addMissionEventHandler["EachFrame", { 
			SR_PSY_beg =  ASLtoAGL ((eyePos SR_PSY_entity) vectorAdd [0,0,-0.1]);  
			SR_PSY_endE = ASLtoAGL ((AGLtoASL (SR_PSY_beg vectorAdd [0,0,0.1])) vectorAdd ((getCameraViewDirection SR_PSY_entity) vectorMultiply SR_PSY_L));  
			drawLine3D [SR_PSY_beg, SR_PSY_endE, [1,0,0,1]]; 
			(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPosASL (AGLtoASL SR_PSY_endE); 
			if (0 < count(nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5])) then { 
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPosASL (getPosASL(nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5] select 0)); 
			} 
			else{ 
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPos [0,0,0]; 
			}; 
		}]; 
 
		SR_PSY_press = (findDisplay 46) displayAddEventHandler["KeyDown", { 
			if ((_this select 1) == 54) then { 
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press];
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) hideObject true;
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]); 
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) hideObject true;
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPos [0,0,0]; 
			}; 
			if ((_this select 1) == 157) then { 
				if (0 < count(nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5])) then { 
					_targ = ((nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5]) select 0); 
					if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) < 120) then { 
						removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press];
						(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
						(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) hideObject true;
						(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
						(SR_PSY_entity setVariable ["SR_PSY_casting", 
							false, 
							true]); 
						(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) hideObject true;
						(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPos [0,0,0];
					}; 
					SR_PSY_entity setVariable ["SR_PSY_power",
						(SR_PSY_entity getVariable ["SR_PSY_power", 60]) - 60,
						true]; 
					[_targ] spawn { 
						[_this select 0, 1, "Body", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "Head", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Head", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[(_this select 0),[[random(1)*800,random(1)*800,random(1)*1000 + 1000], [0,0,0]]] remoteExec ["addForce",0]; 
					}; 
				}; 
			}; 
		}];
		
		SR_PSY_click = (findDisplay 46) displayAddEventHandler["MouseButtonDown", {
			if ((_this select 1) == 0) then {
				if (0 < count(nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5])) then { 
					_targ = ((nearestObjects [(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]), ["Man"], 2.5]) select 0); 
					if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) < 120) then { 
						removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press];
						(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
						(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) hideObject true;
						(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
						(SR_PSY_entity setVariable ["SR_PSY_casting", 
							false, 
							true]); 
						(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) hideObject true;
						(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPos [0,0,0];
					}; 
					SR_PSY_entity setVariable ["SR_PSY_power",
						(SR_PSY_entity getVariable ["SR_PSY_power", 60]) - 60,
						true]; 
					[_targ]spawn{ 
						[_this select 0, 1, "Body", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "Body", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "Head", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 1, "Head", "crush"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "leg_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "leg_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[_this select 0, 0.5, "hand_l", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						[_this select 0, 0.5, "hand_r", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit",0]; 
						sleep 0.1; 
						[(_this select 0),[[random(1)*800,random(1)*800,random(1)*1000 + 1000], [0,0,0]]] remoteExec ["addForce",0]; 
					}; 
				}; 
			}; 
			if ((_this select 1) == 1) then { 
				removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
				(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press];
				(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) hideObject true;
				(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
				(SR_PSY_entity setVariable ["SR_PSY_casting", 
					false, 
					true]); 
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) hideObject true;
				(SR_PSY_entity getVariable ["SR_PSY_raymarker", objNull]) setPos [0,0,0];
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