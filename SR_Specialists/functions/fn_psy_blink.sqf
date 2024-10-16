/*
	Author: Waagheur

	Description:
		Adds the blink power to a passed unit

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

params ['_entity'];

_entity addAction ["Teleport", { 

	SR_PSY_entity = _this select 3;
	
	if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) > 59) then {
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
				if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) < 120) then { 
					removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
					(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
					(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll];
					(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click];
					(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
					(SR_PSY_entity setVariable ["SR_PSY_casting", 
						false, 
						true]);
				}; 
				SR_PSY_entity setPosASL (AGLtoASL SR_PSY_endE); 
				SR_PSY_entity setVariable ["SR_PSY_power", 
					(SR_PSY_entity getVariable ["SR_PSY_power", 60]) - 60, 
					true]; 
			}; 
		}];
		
		SR_PSY_click = (findDisplay 46) displayAddEventHandler["MouseButtonDown", {
			if ((_this select 1) == 0) then {
				if ((SR_PSY_entity getVariable ["SR_PSY_power", -1]) < 120) then { 
					removeMissionEventHandler ["eachFrame", SR_PSY_ray]; 
					(findDisplay 46) displayRemoveEventHandler ["KeyDown",SR_PSY_press]; 
					(findDisplay 46) displayRemoveEventHandler ["MouseZChanged",SR_PSY_roll]; 
					(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",SR_PSY_click]; 
					(SR_PSY_entity getVariable ["SR_PSY_rayend", objNull]) setPos [0,0,0]; 
					(SR_PSY_entity setVariable ["SR_PSY_casting", 
						false, 
						true]);
				}; 
				SR_PSY_entity setPosASL (AGLtoASL SR_PSY_endE); 
				SR_PSY_entity setVariable ["SR_PSY_power", 
					(SR_PSY_entity getVariable ["SR_PSY_power", 60]) - 60, 
					true]; 
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
	else { 
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