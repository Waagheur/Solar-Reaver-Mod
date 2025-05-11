/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded visibomb launcher.
		If so activates the FiredMan event handler to handle its controls
		If not removes the FiredMan event handler
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	
	/**	
	_visibomb_weapons = [
		"SR_IC_Launcher_AT_grey",
		"SR_TIOW_SM_Rocket_1_LSLOT"
	];
	*/

	if ("SR_IC_Launcher_AT_grey" in (weapons player)) then {
		if (count (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]) == 0) then {
			missionNamespace setVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], [player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_IC_Launcher_AT_grey") then {
					_projectile = (_this select 6);
					
					_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
					_arr set [6, _projectile];
					
					// Make visibomb cam
					_cam = "camconstruct" camCreate getPosATL _projectile; 
					_cam setPosASL ((getPosASL _projectile) vectorAdd (_projectile vectorModelToWorld [0,1,0])); 
					_cam AttachTo [_projectile]; 
					_cam cameraEffect ["internal", "back"];
					_arr set [5, _cam];
					
					// Record projectile direction
					_arr set [7, getDir _projectile];
					if ((sin (getDir _projectile)) == 0) then {
						_arr set [8, asin(((vectorUp _projectile) select 1) / cos(getDir _projectile))];
					}
					else {
						_arr set [8, asin(((vectorUp _projectile) select 0) / sin(getDir _projectile))];
					};
					
					waitUntil {!isnull (findDisplay 46)}; 
					
					// Setup mouse control
					_arr set [1, (findDisplay 46) displayAddEventHandler["MouseMoving", { 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
						
						if ((_arr select 12) == 0) then {
							_arr set [7, (_arr select 7) + (_this select 1)/6];
						};
						if ((_arr select 11) == 0) then {
							_arr set [8, (_arr select 8) + (_this select 2)/6];
						};
					}]];
					
					// Setup keyboard control
					_arr set [2, (findDisplay 46) displayAddEventHandler["KeyDown", { 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
						
						if ((_this select 1) == 17) then {_arr set [11, 0.5];}; 
						if ((_this select 1) == 31) then {_arr set [11, -0.5];}; 
						if ((_this select 1) == 32) then {_arr set [12, 0.5];}; 
						if ((_this select 1) == 30) then {_arr set [12, -0.5];};
						if ((_this select 1) == 57) then {_arr set [9, 20];}; 
						if ((_this select 1) == 47) then {_arr set [10, (_arr select 10) + 1];}; 
					}]]; 
					_arr set [3, (findDisplay 46) displayAddEventHandler["KeyUp", {
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
						
						if ((_this select 1) == 17) then {_arr set [11, 0];}; 
						if ((_this select 1) == 31) then {_arr set [11, 0];}; 
						if ((_this select 1) == 32) then {_arr set [12, 0];}; 
						if ((_this select 1) == 30) then {_arr set [12, 0];};
						if ((_this select 1) == 57) then {_arr set [9, -10];}; 
						if ((_this select 1) == 47) then {_arr set [10, 0];}; 
					}]]; 
					
					// Setup fly loop
					_arr set [4, addMissionEventHandler ["EachFrame",{ 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
						
						// This is here because keydown events speed up with time
						_arr set [7, (_arr select 7) + (_arr select 12)];
						_arr set [8, (_arr select 8) + (_arr select 11)];
						
						if ((_arr select 8) >= 90) then {
							_arr set [8, 89.9];
						};
						if ((_arr select 8) <= -90) then {
							_arr set [8, -89.9];
						};
						
						_missile = (_arr select 6);
						_missile setDir (_arr select 7); 
						_missile setVectorUp [sin(_arr select 8)*sin(_arr select 7),sin(_arr select 8)*cos(_arr select 7),cos(_arr select 8)];
						
						if ((speed _missile) < 100) then {
							_missile setVelocityModelSpace ((velocityModelSpace _missile) vectorAdd [0,20*diag_deltaTime,0]);
						}
						else {
							_missile setVelocityModelSpace ((velocityModelSpace _missile) vectorAdd [0,(_arr select 9)*diag_deltaTime,0]);
						};
					}]];
					
					// Setup exit detection loop
					[] spawn {
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]);
						
						// Wait until the projectile has detonated or the player has pressed exit for a while or the missile is very far from the player
						waitUntil {((!alive (_arr select 6)) or ((_arr select 10) > 5) or ((player distance (_arr select 6)) > 2000))};
							
						waitUntil {!isnull (findDisplay 46)}; 
						(findDisplay 46) displayRemoveEventHandler ["MouseMoving", (_arr select 1)]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyDown", (_arr select 2)]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyUp", (_arr select 3)]; 
						removeMissionEventHandler ["eachFrame", (_arr select 4)]; 
						(_arr select 5) cameraEffect ["terminate", "back"]; 
						camDestroy (_arr select 5);
						
						// Cleanup
						_arr set [1, 0];
						_arr set [2, 0];
						_arr set [3, 0];
						_arr set [4, 0];
						_arr set [5, objNull];
						_arr set [6, objNull];
						_arr set [7, 0];
						_arr set [8, 0];
						_arr set [9, -10];
						_arr set [10, 0];
						_arr set [11, 0];
						_arr set [12, 0];
					};
					
				};
				
			}],
				0,
				0,
				0,
				0,
				objNull,
				objNull,
				0,
				0,
				-10,
				0,
				0,
				0
			]];
		};
	}
	else {
		if (count (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]) != 0) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []]) select 0];
			missionNamespace setVariable [format ["%1_handler","SR_IC_Launcher_AT_grey"], []];
		};
	};
	
	if ("SR_TIOW_SM_Rocket_1_LSLOT" in (weapons player)) then {
		if (count (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]) == 0) then {
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], [player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_TIOW_SM_Rocket_1_LSLOT") then {
					_projectile = (_this select 6);
					
					_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
					_arr set [6, _projectile];
					
					// Make visibomb cam
					_cam = "camconstruct" camCreate getPosATL _projectile; 
					_cam setPosASL ((getPosASL _projectile) vectorAdd (_projectile vectorModelToWorld [0,1,0])); 
					_cam AttachTo [_projectile]; 
					_cam cameraEffect ["internal", "back"];
					_arr set [5, _cam];
					
					// Record projectile direction
					_arr set [7, getDir _projectile];
					if ((sin (getDir _projectile)) == 0) then {
						_arr set [8, asin(((vectorUp _projectile) select 1) / cos(getDir _projectile))];
					}
					else {
						_arr set [8, asin(((vectorUp _projectile) select 0) / sin(getDir _projectile))];
					};
					
					waitUntil {!isnull (findDisplay 46)}; 
					
					// Setup mouse control
					_arr set [1, (findDisplay 46) displayAddEventHandler["MouseMoving", { 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
						
						if ((_arr select 12) == 0) then {
							_arr set [7, (_arr select 7) + (_this select 1)/6];
						};
						if ((_arr select 11) == 0) then {
							_arr set [8, (_arr select 8) + (_this select 2)/6];
						};
					}]];
					
					// Setup keyboard control
					_arr set [2, (findDisplay 46) displayAddEventHandler["KeyDown", { 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
						
						if ((_this select 1) == 17) then {_arr set [11, 0.5];}; 
						if ((_this select 1) == 31) then {_arr set [11, -0.5];}; 
						if ((_this select 1) == 32) then {_arr set [12, 0.5];}; 
						if ((_this select 1) == 30) then {_arr set [12, -0.5];};
						if ((_this select 1) == 57) then {_arr set [9, 20];}; 
						if ((_this select 1) == 47) then {_arr set [10, (_arr select 10) + 1];}; 
					}]]; 
					_arr set [3, (findDisplay 46) displayAddEventHandler["KeyUp", {
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
						
						if ((_this select 1) == 17) then {_arr set [11, 0];}; 
						if ((_this select 1) == 31) then {_arr set [11, 0];}; 
						if ((_this select 1) == 32) then {_arr set [12, 0];}; 
						if ((_this select 1) == 30) then {_arr set [12, 0];};
						if ((_this select 1) == 57) then {_arr set [9, -10];}; 
						if ((_this select 1) == 47) then {_arr set [10, 0];}; 
					}]]; 
					
					// Setup fly loop
					_arr set [4, addMissionEventHandler ["EachFrame",{ 
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
						
						// This is here because keydown events speed up with time
						_arr set [7, (_arr select 7) + (_arr select 12)];
						_arr set [8, (_arr select 8) + (_arr select 11)];
						
						if ((_arr select 8) >= 90) then {
							_arr set [8, 89.9];
						};
						if ((_arr select 8) <= -90) then {
							_arr set [8, -89.9];
						};
						
						_missile = (_arr select 6);
						_missile setDir (_arr select 7); 
						_missile setVectorUp [sin(_arr select 8)*sin(_arr select 7),sin(_arr select 8)*cos(_arr select 7),cos(_arr select 8)];

						if ((speed _missile) < 100) then {
							_missile setVelocityModelSpace ((velocityModelSpace _missile) vectorAdd [0,20*diag_deltaTime,0]);
						}
						else {
							_missile setVelocityModelSpace ((velocityModelSpace _missile) vectorAdd [0,(_arr select 9)*diag_deltaTime,0]);
						};
					}]];
					
					// Setup exit detection loop
					[] spawn {
						_arr = (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]);
						
						// Wait until the projectile has detonated or the player has pressed exit for a while or the missile is very far from the player
						waitUntil {((!alive (_arr select 6)) or ((_arr select 10) > 5) or ((player distance (_arr select 6)) > 2000))};
							
						waitUntil {!isnull (findDisplay 46)}; 
						(findDisplay 46) displayRemoveEventHandler ["MouseMoving", (_arr select 1)]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyDown", (_arr select 2)]; 
						(findDisplay 46) displayRemoveEventHandler ["KeyUp", (_arr select 3)]; 
						removeMissionEventHandler ["eachFrame", (_arr select 4)]; 
						(_arr select 5) cameraEffect ["terminate", "back"]; 
						camDestroy (_arr select 5);
						
						// Cleanup
						_arr set [1, 0];
						_arr set [2, 0];
						_arr set [3, 0];
						_arr set [4, 0];
						_arr set [5, objNull];
						_arr set [6, objNull];
						_arr set [7, 0];
						_arr set [8, 0];
						_arr set [9, -10];
						_arr set [10, 0];
						_arr set [11, 0];
						_arr set [12, 0];
					};
					
				};
				
			}],
				0,
				0,
				0,
				0,
				objNull,
				objNull,
				0,
				0,
				-10,
				0,
				0,
				0
			]];
		};
	}
	else {
		if (count (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]) != 0) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []]) select 0];
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Rocket_1_LSLOT"], []];
		};
	};
	
};