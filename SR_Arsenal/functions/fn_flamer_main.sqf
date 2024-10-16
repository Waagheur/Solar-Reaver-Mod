/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded flamer weapon.
		If so activates the FiredMan event handler to handle its fire
		If not removes the FiredMan event handler
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

SR_Flamer_Graphics_Func = {



	[_this select 0, _this select 1] spawn {

		_pos = (_this select 0) vectorAdd ((_this select 1) vectorMultiply 7) vectorAdd [0.0, 0.0, 0.5];
		
		private _ps1 = "#particlesource" createVehicleLocal _pos; 
		_ps1 setPosASL _pos;
		_ps1 setParticleParams [ 
		 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
		 1, 1, [0, 0, 2], [0, 0, 0], 0, 1.275, 1, 0, [4], 
		 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
		 [0.25,1], 1, 1, "", "", _ps1]; 
		
		_ps1 setDropInterval (0.30 + (random 0.30));
		_ps1 setParticleFire [1, 2.5, 1];
		
		sleep 0.1;
		
		for "_i" from 0 to 19 do {
			if (!(lineIntersects [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2), _ps1])
				&& !(terrainIntersect [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2)])) then {
				_pos = _pos vectorAdd ((_this select 1) vectorMultiply 2);
				_ps1 setPosASL _pos;
			};

			sleep 0.10;
		};
		
		deleteVehicle _ps1;
		
	};

};

/** Prototypes
// Function for firing
SR_Flamer_Fire_Loop = {
	_p = _this;
	
	_dumSound = "Land_HelipadEmpty_F" createVehicle position _p;
	_dumSound attachTo [_p, [0, 0, 0], "LeftHand"];
	
	// Fire
	
	
	[_p, _dumSound] spawn {
	
		waitUntil {
			sleep 0.30;
			
			if ( // If we're no longer firing or we're out of ammo
				(inputAction "DefaultAction" == 0) or (((_this select 0) ammo primaryWeapon (_this select 0)) == 0)
			) then { // Exit the loop
				true;
			}
			else { // Play sound, fire, and keep going
				[(_this select 1), "\a40k_wepbase\Sounds\Flamerv5_40k.ogg", 40] call CBA_fnc_globalSay3d;
				false;
			};
		};
	
	};
	
};

// Function for ammo
SR_Flamer_Ammo_Loop = {
	_p = _this;
	
	waitUntil {
		sleep 1;
		
		if ( // If we're no longer firing or we're out of ammo
			(inputAction "DefaultAction" == 0) or ((_p ammo primaryWeapon _p) == 0)
		) then { // Exit the loop
			true;
		}
		else { // Reduce ammo and keep going
			_p setAmmo [weaponOrMuzzle, 
				(_p ammo primaryWeapon _p) - 1];
			false;
		};
	};
};
*/


params [];

if (not(isDedicated)) then {
	
	/**	
	_flamer_weapons = [
		"SR_TIOW_SM_Flamer",
		"SR_XI_Flamer"
	];
	*/

	if ("SR_TIOW_SM_Flamer" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_TIOW_SM_Flamer") then {
					_projectile = (_this select 6);
					
					deleteVehicle _projectile;
					
					// Spawn Flamer particles for everyone
					[getPosASL player, player weaponDirection currentWeapon player] remoteExec["SR_Flamer_Graphics_Func", 0];
					
					// Spawn Flamer damage hitbox
					[getPosASL player, player weaponDirection currentWeapon player] spawn {

						_pos = (_this select 0) vectorAdd ((_this select 1) vectorMultiply 7) vectorAdd [0.0, 0.0, 0.5];
						
						sleep 0.1;
						
						for "_i" from 0 to 19 do {
							if (!(lineIntersects [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2)])
								&& !(terrainIntersect [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2)])) then {
								_pos = _pos vectorAdd ((_this select 1) vectorMultiply 2);
							};
							
							_units = allUnits inAreaArray [(getPos _pos) vectorAdd [0,0,-1], 2.5, 2.5, 0, false, 2.5];
							{
								for "_j" from 0 to 3 do {
									_bodyPart = ["head","body","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [0.5,1,1,1,1,1];
									[_x, 0.5, _bodyPart, "burn"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
								};
							} forEach _units;
							sleep 0.10;
						};
						
					};
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1];
		};
	};
	
	
	
	if ("SR_XI_Flamer" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_XI_Flamer"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_XI_Flamer"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_XI_Flamer") then {
					_projectile = (_this select 6);
					
					deleteVehicle _projectile;
					
					player remoteExec["SR_Flamer_Func", 0];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_XI_Flamer"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_XI_Flamer"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_XI_Flamer"], -1];
		};
	};
	
};