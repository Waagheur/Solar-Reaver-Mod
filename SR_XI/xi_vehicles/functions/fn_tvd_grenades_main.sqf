/*
	Author: Waagheur

	Description:
		If ace_advanced_throwing_enabled is true
			Checks if the player is carrying a recorded grenade.
			If so activates the FiredMan event handler to handle its effects
			If not removes the FiredMan event handler
		Else
			Checks if the player is carrying a recorded grenade.
			If so activates the CBA ace_firedPlayer event handler to handle its effects
			If not removes the CBA ace_firedPlayer event handler
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	
	/**	
	_grenades = [
		"SR_Mag_TVD_OPTRE_cart",
		"SR_Mag_TVD_pxi_tauros_unarmed",
		"SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"
	];
	*/

	if (missionNamespace getVariable ["ace_advanced_throwing_enabled", false]) then {

		if ("SR_Mag_TVD_OPTRE_cart" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], ["ace_firedPlayer", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
					
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_OPTRE_cart") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "OPTRE_cart" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,5]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}] call CBA_fnc_addEventHandler];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1]) != -1) then {
				["ace_firedPlayer", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1])] call CBA_fnc_removeEventHandler;
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1];
			};
		};
		
		if ("SR_Mag_TVD_pxi_tauros_unarmed" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], ["ace_firedPlayer", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_pxi_tauros_unarmed") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "pxi_tauros_unarmed" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,5]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}] call CBA_fnc_addEventHandler];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1]) != -1) then {
				["ace_firedPlayer", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1])] call CBA_fnc_removeEventHandler;
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1];
			};
		};
		
		if ("SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], ["ace_firedPlayer", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_TIOW_Centaur_01_Cadian_667_Blu") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "TIOW_Centaur_01_Cadian_667_Blu" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,0]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}] call CBA_fnc_addEventHandler];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1]) != -1) then {
				["ace_firedPlayer", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1])] call CBA_fnc_removeEventHandler;
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1];
			};
		};
	}
	
	
	
	else {
	
		if ("SR_Mag_TVD_OPTRE_cart" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], player addEventHandler ["FiredMan", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
					
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_OPTRE_cart") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "OPTRE_cart" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,5]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}]];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1]) != -1) then {
				player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1])];
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_OPTRE_cart"], -1];
			};
		};
		
		if ("SR_Mag_TVD_pxi_tauros_unarmed" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], player addEventHandler ["FiredMan", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_pxi_tauros_unarmed") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "pxi_tauros_unarmed" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,5]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}]];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1]) != -1) then {
				player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1])];
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_pxi_tauros_unarmed"], -1];
			};
		};
		
		if ("SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu" in (magazines player)) then {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], player addEventHandler ["FiredMan", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
					_weapon = (_this select 1);
					if (_weapon == "Throw") then {
						_projectile = (_this select 6);
						if ((_this select 4) == "SR_Ammo_TVD_TIOW_Centaur_01_Cadian_667_Blu") then {
						
							// Drop vehicle after 5 seconds (so that the grenade can settle a bit)
							[_projectile] spawn {
								
								sleep 5;
								_target = getPosASL (_this select 0);
								_spawnPos = [(_target select 0) + ((random 20) - 10),(_target select 1) + ((random 20) - 10),(_target select 2) + (2000)];
								_vic = "TIOW_Centaur_01_Cadian_667_Blu" createVehicle [0,0,0];
								_vic setPosASL _spawnPos;
								_vic setVectorUp [0,0,1];
								[_vic] spawn {
									while {((getPos (_this select 0)) select 2) > 80} do {};
									_chute = "B_Parachute_02_F" createVehicle ((getPos (_this select 0)) VectorAdd [0,0,10]);
									_temp = ((getPos (_this select 0)) VectorAdd [0,0,10]);
									(_this select 0) attachTo [_chute,[0,0,0]];
									_chute setPos _temp;
								};
							};
							
						};
					};
					
				}]];
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1]) != -1) then {
				player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1])];
				missionNamespace setVariable [format ["%1_handler","SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"], -1];
			};
		};
		
	};
	
};