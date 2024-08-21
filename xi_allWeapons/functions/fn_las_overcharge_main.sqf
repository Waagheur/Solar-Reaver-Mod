/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded plasma weapon.
		If so activates the FiredMan event handler to handle its overcharge and heat aswell as a heat display and reduction loop
		If not removes the FiredMan event handler (the heat display and reduction loop will remove itself)
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	
	/**	
	_las_weapons = [
		"pxi_marsLasgun_T3", 
		"pxi_m36Galaxy_T1",
		"pxi_m36Carbine_T1", 
		"pxi_m36Lasgun_T1", 
		"pxi_RubiconLasgun_T1", 
		"XI_Pugio_SMG", 
		"XI_Mars_lasgun_wGl",
		
		"XI_lucius_dmr"
	];
	*/

	if ("pxi_marsLasgun_T3" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_marsLasgun_T3"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","pxi_marsLasgun_T3"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "pxi_marsLasgun_T3") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_marsLasgun_T3"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","pxi_marsLasgun_T3"], -1])];
			missionNamespace setVariable [format ["%1_handler","pxi_marsLasgun_T3"], -1];
		};
	};
	
	if ("pxi_m36Galaxy_T1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Galaxy_T1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","pxi_m36Galaxy_T1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "pxi_m36Galaxy_T1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Galaxy_T1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","pxi_m36Galaxy_T1"], -1])];
			missionNamespace setVariable [format ["%1_handler","pxi_m36Galaxy_T1"], -1];
		};
	};
	
	if ("pxi_m36Carbine_T1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Carbine_T1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","pxi_m36Carbine_T1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "pxi_m36Carbine_T1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Carbine_T1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","pxi_m36Carbine_T1"], -1])];
			missionNamespace setVariable [format ["%1_handler","pxi_m36Carbine_T1"], -1];
		};
	};
	
	if ("pxi_m36Lasgun_T1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Lasgun_T1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","pxi_m36Lasgun_T1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "pxi_m36Lasgun_T1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_m36Lasgun_T1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","pxi_m36Lasgun_T1"], -1])];
			missionNamespace setVariable [format ["%1_handler","pxi_m36Lasgun_T1"], -1];
		};
	};
	
	if ("pxi_RubiconLasgun_T1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_RubiconLasgun_T1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","pxi_RubiconLasgun_T1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "pxi_RubiconLasgun_T1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","pxi_RubiconLasgun_T1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","pxi_RubiconLasgun_T1"], -1])];
			missionNamespace setVariable [format ["%1_handler","pxi_RubiconLasgun_T1"], -1];
		};
	};
	
	if ("XI_Pugio_SMG" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","XI_Pugio_SMG"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","XI_Pugio_SMG"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "XI_Pugio_SMG") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","XI_Pugio_SMG"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","XI_Pugio_SMG"], -1])];
			missionNamespace setVariable [format ["%1_handler","XI_Pugio_SMG"], -1];
		};
	};
	
	if ("XI_Mars_lasgun_wGl" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","XI_Mars_lasgun_wGl"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","XI_Mars_lasgun_wGl"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "XI_Mars_lasgun_wGl") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1200, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","XI_Mars_lasgun_wGl"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","XI_Mars_lasgun_wGl"], -1])];
			missionNamespace setVariable [format ["%1_handler","XI_Mars_lasgun_wGl"], -1];
		};
	};
	
	if ("XI_lucius_dmr" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","XI_lucius_dmr"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","XI_lucius_dmr"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "XI_lucius_dmr") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 5 shots
						if (_ammo > 3) then {
							player setAmmo [_weapon, _ammo - 4];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_XI_OC_Heavy_Lasbolt" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1250, 0];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot
						};
					}
					else {
						// Regular shot
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","XI_lucius_dmr"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","XI_lucius_dmr"], -1])];
			missionNamespace setVariable [format ["%1_handler","XI_lucius_dmr"], -1];
		};
	};
	
};