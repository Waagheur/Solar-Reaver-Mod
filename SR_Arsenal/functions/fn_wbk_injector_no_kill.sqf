/*
	Author: Waagheur

	Description:		
		Injects modified kill functions in the IMS mod (only applies to regular and 40K functions)
		The injected scripts don't straight up kill targets and instead wound them and set them unconscious

		Please Omnissiah help me here

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

// CBA setting check
if (sr_wbk_melee_no_kill) then {



	[] spawn {
		
		sleep 10;
		
		
		
		
		
		// No kill injects
		
		
		
		SM_Human_Execution_HeavyWeaponType = {  
		_main = _this select 1;  
		_victim = _this select 0;  
		_main setVariable ["canMakeAttack",1];  
		_main setVariable ["AI_CanTurn",1];  
		_main setVariable ["actualSwordBlock",0, true];  
		_soundCacheVic = "#particlesource" createVehicle position _main;   
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];  
		[_main, "Human_Execution_GenericHeavy_main"] remoteExec ["switchMove", 0, false];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];  
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];  
		[_victim, 1.1] remoteExec ["setAnimSpeedCoef", 0, true];  
		_victim attachTo [_main,[0,1.7,0]];  
		// _victim setDamage 1;  
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;  
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		detach _victim;  
		deleteVehicle _soundCacheVic;  
		};  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;   
		sleep 0.6;  
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;  
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,2.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 70] call CBA_fnc_globalSay3d;  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "dobi_criticalHit", 50] call CBA_fnc_globalSay3d;  
		detach _victim;  
		if (getText (configfile >> "CfgVehicles" >> typeOf _victim >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_soundCacheVic, selectRandom ["cm_die_1","cm_die_2"], 120] call CBA_fnc_globalSay3d; 
		}else{  
		[_soundCacheVic, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 120] call CBA_fnc_globalSay3d; 
		};
		sleep 0.5;
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		deleteVehicle _soundCacheVic;  
		};  
		[_soundCacheVic, "dobi_fall_2", 120] call CBA_fnc_globalSay3d; 
		sleep 1.25; 
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		deleteVehicle _soundCacheVic;  
		};  
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];  
		_main setVariable ["canMakeAttack",0];  
		_main setVariable ["AI_CanTurn",0];   
		sleep 4;  
		deleteVehicle _soundCacheVic;  
		}; 
		
		
		
		
		
		SM_Skill_ThunderHammer = { 
		_unit = _this; 
		if (!(isNil { _unit getVariable "SM_CanUseSkill"})) exitWith {};
		_unit spawn {
		_this setVariable ["SM_CanUseSkill",1];
		sleep 120;
		systemChat "You are able to use skill once again";
		_this setVariable ["SM_CanUseSkill",nil];
		};
		_unit setVariable ["canMakeAttack",1];
		_unit setVariable ["actualSwordBlock",1, true];
		[_unit, "SM_SKILL_ThunderHammer"] remoteExec ["switchMove", 0]; 
		_unit playActionNow "Disable_Gesture";
		_unit allowDamage false; 
		[_unit, "thunderHammer_Draw", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.3; 
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {};
		[_unit, "leg_soundeffect", 70, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, {
		_dustEffect = "#particlesource" createVehicleLocal getPosATL _this; 
		_dustEffect setParticleClass "HDustVTOL1"; 
		_dustEffect attachTo [_this,[0,0,0.1], "LeftLeg", true];
		sleep 1.4;
		deleteVehicle _dustEffect;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 0.7; 
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {};
		[_unit, "leg_soundeffect_2", 70, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, {
		_electra = "#particlesource" createVehicleLocal position _this; 
		_electra attachTo [_this,[0.4,0.9,-0.5], "RightHand", true];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.01,0.01,0.01], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		sleep 1.4;
		deleteVehicle _electra;
		if (!(animationState _this == "SM_SKILL_ThunderHammer")) exitWith {};
		_dustEffect = "#particlesource" createVehicleLocal getPosATL _this; 
		_dustEffect setParticleClass "HDustVTOL1"; 
		_dustEffect attachto [_this,[0,0,0]];
		_ripple = "#particlesource" createVehicleLocal getposatl _this;
		_ripple setParticleCircle [0,[0,0,0]];
		_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
		_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [10,10], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _this];
		_ripple setDropInterval 0.01;
		_ripple attachto [_this,[0,0,0]];
		_electra5 = "#particlesource" createVehicleLocal position _this; 
		_electra5 setParticleCircle [6, [-2, -2, 2]];
		_electra5 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_electra5 setParticleParams [["\A3\data_f\cl_leaf3", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 2, 11, 7.9, 0.075, [6, 2, 4], [[0.1, 0.1, 0.1, 1], [0.15, 0.15, 0.15, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _this];
		_electra5 setDropInterval 0.05;
		_electra5 attachto [_this,[0,0,0]];
		sleep 1.1;
		deleteVehicle _ripple;
		deleteVehicle _electra5;
		deleteVehicle _dustEffect;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[_unit, {
		_object = _this;
		sleep 1;
		if (!(animationState _this == "SM_SKILL_ThunderHammer")) exitWith {};
		_dustEffect1 = "#particlesource" createVehicleLocal getPosATL _object; 
		_dustEffect1 setParticleClass "BombDust"; 
		sleep 0.2;
		if (!(animationState _this == "SM_SKILL_ThunderHammer")) exitWith {
		deleteVehicle _dustEffect1;
		};
		_ripple = "#particlesource" createVehicleLocal getposatl _object;
		_ripple setParticleCircle [0,[0,0,0]];
		_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
		_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [30,1000], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _object];
		_ripple setDropInterval 0.1;
		_ripple spawn {sleep 1;deleteVehicle _this;};
		_blast = "#particlesource" createVehicleLocal getposatl _object;
		_blast setParticleCircle [0, [0, 0, 0]];
		_blast setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_blast setParticleParams [["\A3\data_f\koule", 1, 0, 1], "", "SpaceObject", 1,1,[0,0,0],[0,0,1],3,10,7.9,0,[50,1000],[[1, 1, 1, 0.1], [1, 1, 1, 0]], [1], 1, 0, "", "", _object];
		_blast setDropInterval 50;
		_blast spawn {sleep 1;deleteVehicle _this};
		_electra = "#particlesource" createVehicleLocal position _object; 
		_electra attachTo [_object,[0,0,0], "Spine1"];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.3,0.3,0.3], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		_this spawn {
		_aslLoc = _this;
			_col = [0,0,0];
			_c1 = _col select 0;
			_c2 = _col select 1;
			_c3 = _col select 2;

			_rocks1 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
			_rocks1 setposasl getPosAsl _aslLoc;
			_rocks1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.45, .45], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
			_rocks1 setParticleRandom [0, [1, 1, 0], [20, 20, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
			_rocks1 setDropInterval 0.01;
			_rocks1 setParticleCircle [0, [0, 0, 0]];

			_rocks2 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
			_rocks2 setposasl getPosAsl _aslLoc;
			_rocks2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.27, .27], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
			_rocks2 setParticleRandom [0, [1, 1, 0], [25, 25, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
			_rocks2 setDropInterval 0.01;
			_rocks2 setParticleCircle [0, [0, 0, 0]];

			_rocks3 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
			_rocks3 setposasl getPosAsl _aslLoc;
			_rocks3 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.09, .09], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
			_rocks3 setParticleRandom [0, [1, 1, 0], [30, 30, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
			_rocks3 setDropInterval 0.01;
			_rocks3 setParticleCircle [0, [0, 0, 0]];


			_rocks = [_rocks1,_rocks2, _rocks3];
			sleep 0.3;
			{
				deletevehicle _x;
			} foreach _rocks;
		};
		sleep 0.15;
		deleteVehicle _electra;
		sleep 4;
		deleteVehicle _dustEffect1;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 0.8;
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {};
		[_unit, "shield_skill", 520, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_crater = "Crater" createVehicle [0,0,0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and (typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unit modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_landRoll"] remoteExec ["strafeFwrd_SW", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _x, false];
		};
		};
		} forEach nearestObjects [_unit, ["Man"], 15];
		sleep 0.2;
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {deleteVehicle _crater;};
		[_unit, "thunderHammer_swing_1", 120, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.15;
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {deleteVehicle _crater;};
		_crater attachTo [_unit,[0,3.15,-0.1]];
		detach _crater;
		if ((getPosATL _crater select 2) > 2) then {
		deleteVehicle _crater;
		};
		_lamd = "Land_RoadCrack_01_4x4_F" createVehicle [0,0,0]; 
		_lamd attachto [_unit,[0,3.15,-0.1]];
		detach _lamd;
		{
		_x setDamage 1;
		} forEach nearestTerrainObjects [_unit, [], 25, false];
		{
		if ((getText (configfile >> "CfgVehicles" >> typeOf _x >> "editorSubcategory") == "Titans") or !(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"})) exitWith {};
		if (!(_x == _unit)) then {
		if ((typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1")) exitWith {_x setDamage 1;};
		if ((_x isKindOf "MAN") and (side _x == side _unit) and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) then {
		[_x, 228, _unit] remoteExec ["concentrationToZero", _x, false];
		}else{
		if (_x isKindOf "MAN") then {
			if (typeOf _x isKindOf "TIOWSpaceMarine_Base") then {
				if (!(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b")) then {
				_rndAnim = selectRandom ["SM_Death_1","SM_Death_2"];
				[_x, _rndAnim] remoteExec ["switchMove", 0];
				[_x, [-12 * (sin (getdir _x )), -12 * (cos (getdir _x)), 6]] remoteExec ["setvelocity", _x];
				// _x setDamage 1;
				[_x, true] call ace_medical_fnc_setUnconscious;
				[_x, 15, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
				};
			}else{
				_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8"];
				[_x, _rndAnim] remoteExec ["switchMove", 0];
				[_x, [-12 * (sin (getdir _x )), -12 * (cos (getdir _x)), 6]] remoteExec ["setvelocity", _x];
				// _x setDamage 1;
				[_x, true] call ace_medical_fnc_setUnconscious;
				[_x, 15, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
			};
		}else{
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 15, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		};
		} forEach nearestObjects [_unit, ["MAN","AIR","CAR","TANK","SHIP","StaticWeapon","Static"], 21, false];
		[_unit, {
		_electra = "#particlesource" createVehicleLocal position _this; 
		_electra attachto [_this,[0,0,0]];
		detach _electra;
		if ((player distance _this) < 500) then {
		_electra say3D ["thunderHammer_skill",1500];
		}else{
		_electra say3D ["thunderHammer_skill_dist",2500];
		_electra say3D ["thunder_1",2500];
		};
		sleep 15;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 1.2;
		if (!(animationState _unit == "SM_SKILL_ThunderHammer")) exitWith {};
		[_unit, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _unit == "melee_armed_idle") then {
		[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_unit setVariable ["canMakeAttack",0];
		_unit setVariable ["AI_CanTurn",0];
		_unit setVariable ["actualSwordBlock",0, true];
		};
		};
		
		
		
		
		
		SM_Skill_Shield = { 
		_unit = _this; 
		if (!(isNil { _unit getVariable "SM_CanUseSkill"})) exitWith {};
		_unit spawn {
		_this setVariable ["SM_CanUseSkill",1];
		sleep 30;
		systemChat "You are able to use skill once again";
		_this setVariable ["SM_CanUseSkill",nil];
		};
		_unit setVariable ["canMakeAttack",1];
		_unit setVariable ["actualSwordBlock",1, true];
		[_unit, "SM_SKILL_Shield"] remoteExec ["switchMove", 0]; 
		_unit playActionNow "Disable_Gesture";
		_unit allowDamage false; 
		[_unit, "thunderHammer_Draw", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.15; 
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		[_unit, "leg_soundeffect", 70, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.35; 
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		_rndSnd = selectRandom ["sword_on_wood_shield01","sword_on_wood_shield02","sword_on_wood_shield03"];   
		[_unit, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, {
		_electra = "#particlesource" createVehicleLocal position _this; 
		_electra attachTo [_this,[0,0,0.6], "LeftHand", true];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.01,0.01,0.01], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		sleep 0.2; 
		deleteVehicle _electra;
		sleep 0.6; 
		if (!(animationState _this == "SM_SKILL_Shield")) exitWith {};
		_dustEffect = "#particlesource" createVehicleLocal getPosATL _this; 
		_dustEffect setParticleClass "HDustVTOL1"; 
		_dustEffect attachto [_this,[0,0,0]];
		_ripple = "#particlesource" createVehicleLocal getposatl _this;
		_ripple setParticleCircle [0,[0,0,0]];
		_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
		_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [10,10], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _this];
		_ripple setDropInterval 0.01;
		_ripple attachto [_this,[0,0,0]];
		_electra5 = "#particlesource" createVehicleLocal position _this; 
		_electra5 setParticleCircle [6, [-2, -2, 2]];
		_electra5 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_electra5 setParticleParams [["\A3\data_f\cl_leaf3", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 2, 11, 7.9, 0.075, [6, 2, 4], [[0.1, 0.1, 0.1, 1], [0.15, 0.15, 0.15, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _this];
		_electra5 setDropInterval 0.05;
		_electra5 attachto [_this,[0,0,0]];
		sleep 1.1;
		deleteVehicle _ripple;
		deleteVehicle _electra5;
		deleteVehicle _dustEffect;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 0.2; 
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		[_unit, "shield_skill", 90, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.6; 
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		_lamd = "Land_RoadCrack_01_4x4_F" createVehicle position _unit; 
		_lamd attachto [_unit,[-0.15,1.6,0]];  
		detach _lamd;
		_unit setVariable ["AI_CanTurn",1];
		[_unit, [39 * (sin (getdir _unit )), 39 * (cos (getdir _unit)), 1.7]] remoteExec ["setvelocity", _unit]; 
		[_unit, "leg_punch", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.1;
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unit) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unit) and (simulationEnabled _unit)  and (animationState _unit == "SM_SKILL_Shield") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8"];
			[_x, _rndAnim] remoteExec ["switchMove", 0];
			[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		[_unit, _x] spawn SM_Execution;
		_unit setVelocityModelSpace [0, 0, 0];
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unit, ["MAN"], 4];
		sleep 0.2;
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unit) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unit) and (simulationEnabled _unit)  and (animationState _unit == "SM_SKILL_Shield") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8"];
			[_x, _rndAnim] remoteExec ["switchMove", 0];
			[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		[_unit, _x] spawn SM_Execution;
		_unit setVelocityModelSpace [0, 0, 0];
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unit, ["MAN"], 4];
		sleep 0.2;
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unit) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unit) and (simulationEnabled _unit)  and (animationState _unit == "SM_SKILL_Shield") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8"];
			[_x, _rndAnim] remoteExec ["switchMove", 0];
			[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		[_unit, _x] spawn SM_Execution;
		_unit setVelocityModelSpace [0, 0, 0];
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unit, ["MAN"], 4];
		sleep 0.1;
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		_unit setVelocityModelSpace [0, 0, 0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and (typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unit modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_landRoll"] remoteExec ["strafeFwrd_SW", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _x, false];
		};
		};
		} forEach nearestObjects [_unit, ["Man"], 4.9];
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unit) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unit) and (simulationEnabled _unit)  and (animationState _unit == "SM_SKILL_Shield") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
			_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
			[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8"];
			[_x, _rndAnim] remoteExec ["switchMove", 0];
			[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
			// _x setDamage 1;
			[_x, true] call ace_medical_fnc_setUnconscious;
			[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		[_unit, _x] spawn SM_Execution;
		_unit setVelocityModelSpace [0, 0, 0];
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unit, ["MAN"], 4];
		sleep 0.2;
		if (!(animationState _unit == "SM_SKILL_Shield")) exitWith {};
		[_unit, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _unit == "melee_armed_idle") then {
		[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_unit setVariable ["canMakeAttack",0];
		_unit setVariable ["AI_CanTurn",0];
		_unit setVariable ["actualSwordBlock",0, true];
		};
		};
		
		
		
		
		
		Human_Execution_WithShield_SM = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_Shield_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_Shield_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_Shield_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,2.2,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "SM_Death_8"] remoteExec ["switchMove", 0, true];
		};  
		[_main, selectRandom ["sword_on_wood_shield01","sword_on_wood_shield02","sword_on_wood_shield03"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "SM_Death_8"] remoteExec ["switchMove", 0, true];
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "SM_Death_8"] remoteExec ["switchMove", 0, true];
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "SM_Death_8"] remoteExec ["switchMove", 0, true];
		}; 
		[_main, "bat_type_swing_1", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main)) exitWith {};  
		_victim removeWeapon handGunWeapon _victim;
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		if (getText (configfile >> "CfgVehicles" >> typeOf _victim >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_victim, selectRandom ["cm_die_1","cm_die_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		}else{ 
		[_victim, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		};
		detach _victim;
		sleep 0.2;
		[_victim, [7 * (sin (getdir _victim )), 7 * (cos (getdir _victim)), 1.5]] remoteExec ["setvelocity", _victim];
		sleep 1.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {}; 
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		SM_Execution_StompOnHead = {
		_main = _this select 0;
		_victim = _this select 1;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Fists_Execution_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.15,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_main, "thunderHammer_Hide", 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.3;
		if (getText (configfile >> "CfgVehicles" >> typeOf _victim >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_victim, selectRandom ["cm_die_1","cm_die_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		}else{ 
		[_victim, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		};
		[_victim, selectRandom ["PF_Hit_1","PF_Hit_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.2;
		[_main, "thunderHammer_Draw", 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.6;
		[_victim] remoteExec ["removeHeadgear", _victim];
		[_victim] remoteExec ["removeGoggles", _victim];
		[_victim, hmd _victim] remoteExec ["removeItem", _victim];
		[_victim, "WBK_DecapatedHead_SM"] remoteExec ["setFace", 0];
		[_victim, selectRandom ["leg_soundeffect","leg_soundeffect_2"], 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, selectRandom ["decapetadet_sound_1","decapetadet_sound_2"], 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, {
		_object = _this;
		_deathBlood = "BloodPool_01_Large_New_F" createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0,0,0],"head"];
		detach _deathBlood;
		_deathBlood setPosATL [getPosATL _deathBlood select 0,getPosATL _deathBlood select 1,getPosATL _object select 2];
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;  
		sleep 0.5;      
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 1.8;
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _main == "melee_armed_idle") then {
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		};
		
		
		
		
		
		SM_Execution_Sword = {
		_main = _this select 0;
		_victim = _this select 1;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Sword_Execution"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Sword_Execution_Victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Sword_Execution_Victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.35,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.1;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.3;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		[_victim, {
		_object = _this;
		sleep 1.3;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"Spine3"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodPool_01_Large_New_F","BloodSplatter_01_Large_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,0.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_main, selectRandom ["decapetadet_sound_1","decapetadet_sound_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		if (getText (configfile >> "CfgVehicles" >> typeOf _victim >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_victim, selectRandom ["cm_die_1","cm_die_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		}else{ 
		[_victim, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		};
		sleep 1.5;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		[_main, selectRandom ["sword_headgore_1","sword_headgore_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.9;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _main == "melee_armed_idle") then {
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		};
		
		
		
		
		
		
		SM_Execution_ThunderHammer = {
		_main = _this select 0;
		_victim = _this select 1;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Execution_TwoHandedAxHam_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Execution_TwoHandedAxHam_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Execution_TwoHandedAxHam_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.2,-0.08]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_main, {
		_object = _this;
		if ((player distance _object) > 100) then {
		sleep 1.35;
		_object say3D [selectRandom ["thunder_1","thunder_2"],1500];
		}else{
		_snd = "#particlesource" createVehicleLocal getPosATL _object; 
		_snd attachTo [_object,[0,1,0]];
		detach _snd;
		_snd say3D ["thunderHammer_execution",200];
		_electra = "#particlesource" createVehicleLocal position _object; 
		_electra attachTo [_object,[0.4,0.9,-0.5], "RightHand", true];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.01,0.01,0.01], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		sleep 1.5;
		deleteVehicle _electra;
		enableCamShake true; 
		addCamShake [5, 5, 25];
		sleep 13;
		deleteVehicle _snd;
		};
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[_victim, {
		_object = _this;
		sleep 1.15;
		_dustEffect1 = "#particlesource" createVehicleLocal getPosATL _object; 
		_dustEffect1 setParticleClass "BombDust"; 
		sleep 0.2;
		_ripple = "#particlesource" createVehicleLocal getposatl _object;
		_ripple setParticleCircle [0,[0,0,0]];
		_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
		_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [30,1000], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _object];
		_ripple setDropInterval 0.1;
		_ripple spawn {sleep 1;deleteVehicle _this;};
		_blast = "#particlesource" createVehicleLocal getposatl _object;
		_blast setParticleCircle [0, [0, 0, 0]];
		_blast setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_blast setParticleParams [["\A3\data_f\koule", 1, 0, 1], "", "SpaceObject", 1,1,[0,0,0],[0,0,1],3,10,7.9,0,[50,1000],[[1, 1, 1, 0.1], [1, 1, 1, 0]], [1], 1, 0, "", "", _object];
		_blast setDropInterval 50;
		_blast spawn {sleep 1;deleteVehicle _this};
		_dustEffect = "#particlesource" createVehicleLocal getPosATL _object; 
		_dustEffect setParticleClass "HDustVTOL1"; 
		_electra = "#particlesource" createVehicleLocal position _object; 
		_electra attachTo [_object,[0,0,0], "Spine1"];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.1,0.1,0.1], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		sleep 0.15;
		deleteVehicle _electra;
		sleep 1;
		deleteVehicle _dustEffect;
		deleteVehicle _dustEffect1;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 1.35;
		_lamd = "Land_RoadCrack_01_4x4_F" createVehicle position _main; 
		_lamd attachto [_main,[-0.15,1.6,0]];  
		detach _lamd;
		_deathBlood = "BloodPool_01_Large_New_F" createVehicle getPosATL _victim;
		_deathBlood setPosATL [(getPosATL _victim select 0), (getPosATL _victim select 1),0];
		_t1 = "BloodTrail_01_New_F" createVehicle getPosATL _victim;
		_t2 = "BloodTrail_01_New_F" createVehicle getPosATL _victim;
		_t3 = "BloodTrail_01_New_F" createVehicle getPosATL _victim;
		_t4 = "BloodTrail_01_New_F" createVehicle getPosATL _victim;
		_t1 attachTo [_deathBlood,[2.5,1.4,0]]; 
		detach _t1; 
		_t1 setDir 70; 
		[_t1, 70] remoteExec ["setDir", 0];
		_t2 attachTo [_deathBlood,[-2.5,-1.4,0]]; 
		detach _t2; 
		[_t2, 70] remoteExec ["setDir", 0];
		_t3 attachTo [_deathBlood,[2.1,-2.3,0]];  
		detach _t3;  
		[_t3, 140] remoteExec ["setDir", 0];
		_t4 attachTo [_deathBlood,[-2.1,2.3,0]];   
		detach _t4;   
		[_t4, 140] remoteExec ["setDir", 0];
		{
		_x setVectorUp surfaceNormal getposatl _x;
		_x setPosATL [(getPosATL _x select 0), (getPosATL _x select 1),0];
		} forEach [_t1,_t2,_t3,_t4,_deathBlood];
		sleep 1.6;
		if (!(animationState _main == "SM_Execution_TwoHandedAxHam_main")) exitWith {
		detach _victim;
		};
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _main == "melee_armed_idle") then {
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		};
		
		
		
		
		
		SM_Execution_ChainSaw = {
		_main = _this select 0;
		_victim = _this select 1;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		_soundCacheChain = "#particlesource" createVehicle position _main; 
		_soundCacheVic = "#particlesource" createVehicle position _main; 
		_soundCacheChain attachTo [_main,[0,0,0],"RightHand"];
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];
		[_main, "SM_Execution_ChainSaw_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[-0.12,0.4,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_soundCacheChain, "chainSaw_Execution_Main", 50] call CBA_fnc_globalSay3d;
		sleep 0.3;
		if (!(animationState _main == "SM_Execution_ChainSaw_main")) exitWith {
		detach _victim;
		deleteVehicle _soundCacheChain;
		deleteVehicle _soundCacheVic;
		};
		if (getText (configfile >> "CfgVehicles" >> typeOf _victim >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_soundCacheVic, selectRandom ["cm_die_1","cm_die_2"], 50] call CBA_fnc_globalSay3d;
		}else{ 
		[_soundCacheVic, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 50] call CBA_fnc_globalSay3d;
		};
		[_victim, {
		_object = _this;
		_particlesSpark = "#particlesource" createVehicleLocal (getposATL _object);                                  
		_particlesSpark setParticleParams         
			[     
				["\A3\data_f\ParticleEffects\Universal\Universal", 16, 4, 11, 4],  //sprite name        
				"", //animation name        
				"Billboard", //type        
				0.5, 1.4, //timer period and fadeout timer        
				[0, 0, 0], //position        
				[3, 3, 3], //move velocity        
				5, 1, 0.35,  0.80, //rot vel, weight, volume, rubbing        
				[0.08,0.01], //size transform        
				[[1,1,1,0], [0.1,0.1,0.1,-4], [0,0,0,-4],[1,1,1,1]],  //color and transperency        
				[1000], //animation phase speed        
				0.2,   //randomdirection period        
				0.9,  //randomization intensity        
				"", //onTimer        
				"",  //beforeDestroy        
				"",  //object        
				360,  //angle        
				false,  //on the surface        
				0  //bounce         
			];          
		_particlesSpark setdropinterval 0.001;         
		_particlesSpark attachTo [_object,[0.3,0,0.04],"neck"];
		sleep 0.3;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);                   
		_blood setParticleClass "ATMineExplosionParticles";  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;             
		_blood attachTo [_object,[0,0,-0.01],"head"]; 
		sleep 1;
		deleteVehicle _particlesSpark;
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		_rndBlood = selectRandom ["BloodPool_01_Large_New_F","BloodSplatter_01_Large_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,0.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[50] call BIS_fnc_bloodEffect;
		sleep 2;
		detach _victim;
		if (!(animationState _main == "SM_Execution_ChainSaw_main")) exitWith {
		deleteVehicle _soundCacheChain;
		deleteVehicle _soundCacheVic;
		};
		[_main, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _main == "melee_armed_idle") then {
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		sleep 4;
		deleteVehicle _soundCacheChain;
		deleteVehicle _soundCacheVic;
		};
		
		
		
		
		
		coolDeathKnife_backAxe = {
		_creature = _this select 0;
		_unit = _this select 1;
		if (
		((_creature distance _unit) > 2.5)
		) exitWith {};
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_unit setVariable ["canMakeAttack",1, true];
		_creature attachTo [_unit,[0,1.1,0]]; 
		[_unit, "IMS_TakeDown_axe_main"] remoteExec ["switchMove", 0]; 
		[_creature, "IMS_TakeDown_axe_victim"] remoteExec ["switchMove", 0, true]; 
		_unit setDamage 0;
		_creature setVariable ["disableUnitSFX",1, true];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["canMakeAttack",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0, true];
		_rndSnd = ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		_rndSnd = ["axe_punch_empty_1","axe_punch_empty_2","axe_punch_empty_3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.27;
		_rndSnd = selectRandom ["sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"];
		[_creature, _rndSnd, 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.2;
		_rndDead = ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"] call BIS_fnc_SelectRandom;
		[_creature, _rndDead, 3, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1;
		[_creature, "dobi_fall", 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.9;
		detach _creature;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if ((animationState _unit == "IMS_TakeDown_axe_main")) then {
		if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unit, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathKnife_blunt = {
		_creature = _this select 0;
		_unit = _this select 1;
		if (
		((_creature distance _unit) > 2.5)
		) exitWith {};
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_unit setVariable ["canMakeAttack",1, true];
		_creature attachTo [_unit,[0,0.7,0]]; 
		[_unit, "IMS_TakeDown_Blunt_main"] remoteExec ["switchMove", 0]; 
		[_creature, "IMS_TakeDown_Blunt_victim"] remoteExec ["switchMove", 0, true]; 
		_unit setDamage 0;
		_creature setVariable ["disableUnitSFX",1, true];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["canMakeAttack",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0, true];
		_rndSnd = ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		_rndSnd = ["axe_punch_empty_1","axe_punch_empty_2","axe_punch_empty_3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.47;
		[_creature, "dobi_bones", 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.1;
		[_creature, "dobi_fall", 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.9;
		detach _creature;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if ((animationState _unit == "IMS_TakeDown_Blunt_main")) then {
		if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unit, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathKnife_back = {
		_creature = _this select 0;
		_unit = _this select 1;
		if (
		((_creature distance _unit) > 2.5) or
		(animationState _unit == "IMS_TakeDown_Knife_reversed") or
		(animationState _unit == "IMS_TakeDown_Knife_main") or
		(animationState _unit == "IMS_TakeDown_axe_main") or
		(animationState _unit == "IMS_TakeDown_Blunt_main") or
		(
		!(handgunWeapon _unit in IMS_Melee_Execution_SmallAxe) and 
		!(handgunWeapon _unit in IMS_Melee_Execution_Knife) and
		!(handgunWeapon _unit in IMS_Melee_Execution_Knife_reversed) and
		!(handgunWeapon _unit in IMS_Melee_Execution_Blunt)
		)
		) exitWith {};
		_unit setVariable ["EnableDeadAnim",0, true];    
		if ((((_creature worldToModel (_unit modelToWorld [0, 0, 0])) select 1) > 0)) exitWith {
		if ((handgunWeapon _unit in IMS_Melee_TwoHandedWeapons) or (handgunWeapon _unit in IMS_Melee_RapiraType)) exitWith {[_creature, _unit] spawn coolDeathMoreSkill_1;};
		[_creature, _unit] spawn coolDeathMoreSkill_2;
		};
		if ((handgunWeapon _unit in IMS_Melee_Execution_SmallAxe)) exitWith {
		[_creature, _unit] spawn coolDeathKnife_backAxe;
		};
		if ((handgunWeapon _unit in IMS_Melee_Execution_Blunt)) exitWith {
		[_creature, _unit] spawn coolDeathKnife_blunt;
		};
		_unit setVariable ["canMakeAttack",1, true];
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_creature attachTo [_unit,[0,0.8,0]]; 
		if ((handgunWeapon _unit in IMS_Melee_Execution_Knife_reversed)) then {
		[_unit, "IMS_TakeDown_Knife_reversed"] remoteExec ["switchMove", 0]; 
		}else{
		[_unit, "IMS_TakeDown_Knife_main"] remoteExec ["switchMove", 0]; 
		};
		[_creature, "IMS_TakeDown_Knife_victim"] remoteExec ["switchMove", 0, true]; 
		_unit setDamage 0;
		_creature setVariable ["disableUnitSFX",1, true];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0, true];
		_rndSnd = ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		_rndSnd = ["knife_empty_hit_1","knife_empty_hit_2","knife_empty_hit_3","knife_empty_hit_4"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.27;
		_rndSnd = selectRandom ["sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"];
		[_creature, _rndSnd, 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.8;
		_rndDead = ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"] call BIS_fnc_SelectRandom;
		[_creature, _rndDead, 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.2;
		[_creature, "dobi_fall", 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1;
		detach _creature;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if ((animationState _unit == "IMS_TakeDown_Knife_main") or (animationState _unit == "IMS_TakeDown_Knife_reversed")) then {
		if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unit, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathMoreSkill_1 = {
		_creature = _this select 0;
		_unit = _this select 1;
		if (((_creature distance _unit) > 2.5)) exitWith {};
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_unit setDamage 0;
		_unit setVariable ["canMakeAttack",1, true];
		_creature setVariable ["disableUnitSFX",1, true];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["canMakeAttack",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		_creature attachTo [_unit,[0.01,1.12,0.05]]; 
		[_unit, "Star_Wars_executionOnHuman_1_main"] remoteExec ["switchMove", 0]; 
		[_creature, "Star_Wars_executionOnHuman_1_victim"] remoteExec ["switchMove", 0, true]; 
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0, true];
		[_unit, "Rakhgul_executeOn_jedi", 20, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.4;
		_rndEquip = selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"];
		[_creature, _rndEquip, 20, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1.4;
		_rndSnd = selectRandom["loud_scream_1","loud_scream_2"];
		[_creature, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.2;
		detach _creature;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unit, _rndSnd, 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_creature, _rndSnd, 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		_rndDead = ["dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4"] call BIS_fnc_SelectRandom;
		[_creature, _rndDead, 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15; 
		[_creature, "dobi_fall", 20, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, [4 * (sin (getdir _unit )), 4 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
		[_creature, [4 * (sin (getdir _creature )), 4 * (cos (getdir _creature)), 1.2]] remoteExec ["setvelocity", _creature];
		sleep 2.1;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if (animationState _unit == "Star_Wars_executionOnHuman_1_main") then {
		if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unit, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathMoreSkill_2 = {
		_x = _this select 0;
		_unitToPlay = _this select 1;
		if (((_x distance _unitToPlay) > 2.5)) exitWith {};
		[_unitToPlay, ([_unitToPlay, _x] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_x setVariable ["disableUnitSFX",1, true];
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_x, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_unitToPlay, "Star_Wars_executionOnHuman_2_main"] remoteExec ["switchMove", 0, true]; 
		[_x, "Star_Wars_executionOnHuman_2_victim"] remoteExec ["switchMove", 0, true]; 
		_x attachTo [_unitToPlay,[0,0,0]];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unitToPlay, _rndSnd, 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		[_x, "dobi_fall", 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_x, _rndSnd, 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndDead = ["dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4"] call BIS_fnc_SelectRandom;
		[_x, _rndDead, 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.45;
		detach _x;
		if (animationState _unitToPlay == "Star_Wars_executionOnHuman_2_main") then {
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		if ((currentWeapon _unitToPlay in IMS_Melee_Weapons) or !(isPlayer _unitToPlay)) exitWith {[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unitToPlay == primaryWeapon _unitToPlay) and !(currentWeapon _unitToPlay == "")) exitWith {[_unitToPlay, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unitToPlay == handgunWeapon _unitToPlay) and !(currentWeapon _unitToPlay == "")) exitWith {[_unitToPlay, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unitToPlay, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathOnRakghul = {
		_creature = _this select 0;
		_unit = _this select 1;
		_unit setDamage 0;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_unit setVariable ["canMakeAttack",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["canMakeAttack",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		removeAllWeapons _creature; 
		_creature attachTo [_unit,[0.07,1.12,0.05]]; 
		[_unit, "Star_Wars_KaaTirs_executionOnCreature_jedi"] remoteExec ["switchMove", 0]; 
		[_creature, "Star_Wars_KaaTirs_executionOnCreature_creature"] remoteExec ["switchMove", 0]; 
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_unit, "Rakhgul_executeOn_jedi", 50, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_creature, "Rakhgul_executeOn_rakhgul", 50, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.4;
		_rndEquip = selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"];
		[_creature, _rndEquip, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 2.6;
		detach _creature;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unit, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.15;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_creature, _rndSnd, 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		sleep 0.15; 
		[_creature, "dobi_fall", 50, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, [4 * (sin (getdir _unit )), 4 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
		[_creature, [4 * (sin (getdir _creature )), 4 * (cos (getdir _creature)), 1.2]] remoteExec ["setvelocity", _creature];
		sleep 2.1;
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if (animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") then {
		[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		legPunchVertuha = {
		_unitToPlay = _this select 0;
		if (!(animationState _unitToPlay == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unitToPlay == "Star_Wars_KaaTirs_executionOnCreature_jedi") and (handgunWeapon _unitToPlay in IMS_Melee_Weapons) and (_unitToPlay getVariable "canMakeAttack" == 0) and !(animationState _unitToPlay == "push_backwards") and !(animationState _unitToPlay == "starWars_lightsaber_attackLeg") and !(animationState _unitToPlay == "anim_hardLand") and !(animationState _unitToPlay == "anim_jump_FlipForward") and !(animationState _unitToPlay == "anim_jump_FlipBackward") and !(animationState _unitToPlay == "starWars_lightSaber_combo_1")) then {
		_unitToPlay setVariable ["canMakeAttack",1];
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		_rndSnd = ["leg_empty1","leg_empty2"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "starWars_lightsaber_attackLeg"] remoteExec ["switchMove", 0];
		[_unitToPlay, "lightSaber_hums_2", 50, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		{
		if ((alive _x) and !(isPlayer _x) and (handGunWeapon _x in IMS_LightSabers)) then {
		if (((_x worldToModel (_unitToPlay modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_force_landRoll"] spawn strafeFwrd;
		}else{
		[_x, [-9, -9, 1.5], "starWars_force_landRoll_b"] spawn strafeFwrd;
		};
		};
		} forEach nearestObjects [_unitToPlay, ["Man"], 5];
		sleep 0.2;
		_unitToPlay setVariable ["AI_CanTurn",1, true];
		[_unitToPlay, [6 * (sin (getdir _unitToPlay )), 6 * (cos (getdir _unitToPlay)), 1]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.3;
		{ 
		if (!(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "starWars_lightsaber_attackLeg") and !(animationState _x == "starWars_force_landRoll") and !(animationState _x == "starWars_force_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (!(isNil {_x getVariable "WBK_AI_ISZombie"})) then {
		[_x, _unitToPlay, 0.3, "WBK_survival_weapon_2"] remoteExec ["WBK_ZombiesProcessDamage", _x, false];
		}else{
		if (((damage _x) >= 0.4) or (lifeState _x == "INCAPACITATED"))  then {
		_rndAnim = ["lightsaber_death_8","lightsaber_death_6"] call BIS_fnc_SelectRandom;
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		}else{
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.7];
		sleep 0.8;
		_unitToPlay setVariable ["canMakeAttack",0];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		sleep 0.2;
		if (animationState _unitToPlay == "starWars_lightsaber_attackLeg") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		};
		};
		
		
		
		
		
		Human_Execution_HeavyWeaponType = {  
		_main = _this select 1;  
		_victim = _this select 0;  
		_main setVariable ["canMakeAttack",1];  
		_main setVariable ["AI_CanTurn",1];  
		_main setVariable ["actualSwordBlock",0, true];  
		_soundCacheVic = "#particlesource" createVehicle position _main;   
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];  
		[_main, "Human_Execution_GenericHeavy_main"] remoteExec ["switchMove", 0, false];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];  
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];  
		[_victim, 1.1] remoteExec ["setAnimSpeedCoef", 0, true];  
		_victim attachTo [_main,[0,1.1,0]];  
		// _victim setDamage 1;  
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;  
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		detach _victim;  
		deleteVehicle _soundCacheVic;  
		};  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;   
		sleep 0.6;  
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;  
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,2.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[_soundCacheVic, "bat_type_swing_1", 50] call CBA_fnc_globalSay3d; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "dobi_criticalHit", 50] call CBA_fnc_globalSay3d;  
		detach _victim;  
		[_soundCacheVic, "dobi_fall", 50] call CBA_fnc_globalSay3d; 
		[_soundCacheVic, selectRandom ["dobi_scream_6","dobi_scream_2","loud_scream_1","loud_scream_2","bloodCought_2"], 50] call CBA_fnc_globalSay3d; 
		sleep 1.75; 
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		deleteVehicle _soundCacheVic;  
		};  
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];  
		_main setVariable ["canMakeAttack",0];  
		_main setVariable ["AI_CanTurn",0];   
		sleep 4;  
		deleteVehicle _soundCacheVic;  
		}; 
		
		
		
		
		
		Human_Execution_StompOnHead = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Fists_Execution_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		if (!(alive _main)) exitWith {};
		[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.8;
		if (!(alive _main)) exitWith {};
		[_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.8;
		if (!(alive _main)) exitWith {};
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_ChokeOne = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_GenericOnehanded_headSmash_1_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_GenericOnehanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_GenericOnehanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.25,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.5;
		if (!(alive _main)) exitWith {};
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, "dobi_criticalHit", 20, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.001,0.001,0.001,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		  deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,2,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 0.4;
		if (!(alive _main)) exitWith {};
		[_victim, "dobi_fall_2", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndSndB = selectRandom ["bloodCought_1","bloodCought_2","bloodCought_3"];
		[_victim, _rndSndB, 40, 14] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.4;
		if (_rndSndB == "bloodCought_1") then {
		[_victim, 0.6] remoteExec ["setAnimSpeedCoef", 0];
		};
		sleep 0.5;
		if (!(alive _main)) exitWith {};
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_Sword = {
		_main = _this select 1;
		_victim = _this select 0;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Sword_Execution"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Sword_Execution_Victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Sword_Execution_Victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0.05,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.1;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.3;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		[_victim, selectRandom ["loud_scream_1","loud_scream_2"], 120, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.5;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		[_main, selectRandom ["sword_headgore_1","sword_headgore_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.9;
		if (!(animationState _main == "SM_Sword_Execution")) exitWith {
		detach _victim;
		};
		detach _victim;
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_OneHanded = {
		_main = _this select 1;
		_victim = _this select 0;
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		_soundCacheVic = "#particlesource" createVehicle position _main; 
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];
		[_main, "SM_Execution_ChainSaw_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Execution_ChainSaw_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		if (!(animationState _main == "SM_Execution_ChainSaw_main")) exitWith {
		detach _victim;
		deleteVehicle _soundCacheVic;
		};
		[_soundCacheVic, selectRandom ["sword_hit_6","sword_hit_5"], 80] call CBA_fnc_globalSay3d;
		[_soundCacheVic, selectRandom ["loud_scream_1","loud_scream_2"], 120] call CBA_fnc_globalSay3d;
		sleep 0.6;
		[_soundCacheVic, selectRandom ["sword_headgore_1","sword_headgore_2"], 50] call CBA_fnc_globalSay3d;
		sleep 0.4;
		[_soundCacheVic, "dobi_fall", 50] call CBA_fnc_globalSay3d;
		sleep 1;
		detach _victim;
		if (!(animationState _main == "SM_Execution_ChainSaw_main")) exitWith {
		deleteVehicle _soundCacheVic;
		};
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		sleep 0.3;
		sleep 4;
		deleteVehicle _soundCacheVic;
		};
		
		
		
		
		
		Human_Execution_TwoHandedOnTwoHanded_1 = { 
		_main = _this select 1; 
		_victim = _this select 0; 
		if ((handGunWeapon _victim in IMS_Melee_Knifes) or (handGunWeapon _victim in IMS_Melee_Alebard) or !(handGunWeapon _victim in IMS_Melee_Weapons)) exitWith { 
		[_victim, _main] spawn coolDeathMoreSkill_1; 
		}; 
		_main setVariable ["canMakeAttack",1]; 
		_main setVariable ["AI_CanTurn",1]; 
		_main setVariable ["actualSwordBlock",0, true]; 
		_soundCacheVic = "#particlesource" createVehicle position _main;  
		_soundCacheVic attachTo [_victim,[0,0,0],"head"]; 
		[_main, "Human_Execution_GenericTwoHanded_headSmash_main"] remoteExec ["switchMove", 0, false]; 
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_victim"] remoteExec ["switchMove", 0, true]; 
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_victim"] remoteExec ["switchMove", 0, true]; 
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_victim"] remoteExec ["switchMove", 0, true]; 
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main]; 
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim]; 
		_victim attachTo [_main,[0,1.5,0]]; 
		// _victim setDamage 1; 
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3; 
		if (!(animationState _main == "Human_Execution_GenericTwoHanded_headSmash_main")) exitWith { 
		detach _victim; 
		deleteVehicle _soundCacheVic; 
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnBlock");  
		_rndSnd = selectRandom _arr;  
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d; 
		sleep 0.8; 
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d; 
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d; 
		sleep 0.6; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d; 
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1; 
		detach _victim; 
		[_soundCacheVic, "dobi_fall", 50] call CBA_fnc_globalSay3d;
		sleep 0.4;
		[_soundCacheVic, "dobi_fall_2", 50] call CBA_fnc_globalSay3d;
		sleep 0.3;
		if (!(animationState _main == "Human_Execution_GenericTwoHanded_headSmash_main")) exitWith { 
		deleteVehicle _soundCacheVic; 
		}; 
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0]; 
		_main setVariable ["canMakeAttack",0]; 
		_main setVariable ["AI_CanTurn",0];  
		sleep 4; 
		deleteVehicle _soundCacheVic; 
		};
		
		
		
		
		
		Human_Execution_TwoHandedOnTwoHanded_2 = {  
		_main = _this select 1;  
		_victim = _this select 0;  
		if ((handGunWeapon _victim in IMS_Melee_Knifes) or (handGunWeapon _victim in IMS_Melee_Alebard) or !(handGunWeapon _victim in IMS_Melee_Weapons)) exitWith { 
		[_victim, _main] spawn coolDeathMoreSkill_1; 
		}; 
		_main setVariable ["canMakeAttack",1];  
		_main setVariable ["AI_CanTurn",1];  
		_main setVariable ["actualSwordBlock",0, true];  
		_soundCacheVic = "#particlesource" createVehicle position _main;   
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];  
		[_main, "Human_Execution_GenericTwoHanded_headSmash_1_main"] remoteExec ["switchMove", 0, false];  
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericTwoHanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];  
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];  
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];  
		[_victim, 1.1] remoteExec ["setAnimSpeedCoef", 0, true];  
		_victim attachTo [_main,[0,1.6,0]];  
		// _victim setDamage 1; 
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;  
		if (!(animationState _main == "Human_Execution_GenericTwoHanded_headSmash_1_main")) exitWith {  
		detach _victim;  
		deleteVehicle _soundCacheVic;  
		};  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnBlock");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;  
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnBlock");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d;  
		sleep 0.5;
		[_soundCacheVic, "bat_type_swing_1", 50] call CBA_fnc_globalSay3d; 
		sleep 0.5;  
		detach _victim;  
		[_soundCacheVic, "dobi_fall", 50] call CBA_fnc_globalSay3d; 
		sleep 0.1; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1; 
		if (!(animationState _main == "Human_Execution_GenericTwoHanded_headSmash_1_main")) exitWith {  
		deleteVehicle _soundCacheVic;  
		};  
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];  
		_main setVariable ["canMakeAttack",0];  
		_main setVariable ["AI_CanTurn",0];   
		sleep 4;  
		deleteVehicle _soundCacheVic;  
		}; 
		
		
		
		
		
		Human_Execution_StompOnHead_unconscious = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_GenericUnconscious_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_GenericUnconscious_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_GenericUnconscious_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 80, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		if (!(alive _main)) exitWith {};
		[_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.1;
		detach _victim;
		if (!(alive _main)) exitWith {};
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_WithShield = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_Shield_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_Shield_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_Shield_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.5,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_1"] remoteExec ["switchMove", 0, true];
		};  
		[_main, selectRandom ["sword_on_wood_shield01","sword_on_wood_shield02","sword_on_wood_shield03"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_1"] remoteExec ["switchMove", 0, true];
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_1"] remoteExec ["switchMove", 0, true];
		}; 
		[_main, "bat_type_swing_1", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main)) exitWith {};  
		_victim removeWeapon handGunWeapon _victim;
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, selectRandom ["bloodCought_1","bloodCought_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		detach _victim;
		sleep 0.2;
		[_victim, [4 * (sin (getdir _victim )), 4 * (cos (getdir _victim)), 1.5]] remoteExec ["setvelocity", _victim];
		sleep 1.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Shield_main")) exitWith {}; 
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_BluntWeapon = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_Blunt_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_Blunt_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_Blunt_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.5,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Blunt_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];
		};  
		[_victim, "dobi_bones", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_8","New_Death_9"], 30, 0.8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Blunt_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];
		}; 
		[_main, "bat_type_swing_1", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		[_victim, selectRandom ["dobi_blunt_1","dobi_blunt_2","dobi_blunt_3"], 60, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, selectRandom ["dobi_blood_1","dobi_blood_2"], 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		detach _victim;
		sleep 1.4;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Blunt_main")) exitWith {}; 
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		Human_Execution_AxeWeapon = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_Axe_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_Axe_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_Axe_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.5,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Axe_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];
		};  
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, selectRandom ["New_Death_7","New_Death_4","New_Death_2"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.9;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Axe_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_main, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Axe_main")) exitWith {
		detach _victim;
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.35;
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		detach _victim;
		sleep 0.2;
		[_victim, "dobi_fall", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["dobi_blood_1","dobi_blood_2"], 40, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1.3;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Axe_main")) exitWith {}; 
		[_main, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_IMS_GreatSword_Execution = {     
		_main = _this select 0;     
		_victim = _this select 1;     
		_main setVariable ["canMakeAttack",1];     
		_main setVariable ["AI_CanTurn",1];     
		_main setVariable ["actualSwordBlock",0, true];     
		[_main, "WBK_IMS_Zwei_execution_main"] remoteExec ["switchMove", 0, false];     
		[_main, "WBK_IMS_Zwei_execution_main"] remoteExec ["playMoveNow", 0, false];     
		[_victim, "WBK_IMS_Zwei_execution_victim"] remoteExec ["switchMove", 0, true];     
		[_victim, "WBK_IMS_Zwei_execution_victim"] remoteExec ["switchMove", 0, true];     
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];     
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];     
		_victim attachTo [_main,[0.05,2.96,0]];     
		// _victim setDamage 1;     
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.15] remoteExec ["setAnimSpeedCoef", 0, false];   
		[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		sleep 0.3; 
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		detach _victim;  
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];  
		};   
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_victim, _rndSnd, 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.75; 
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		detach _victim;  
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];  
		};   
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_victim, _rndSnd, 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		if !(handGunWeapon _main in IMS_LightSabers) then {
		[_victim, "dobi_criticalHit", 60, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, selectRandom ["dobi_scream_4","dobi_scream_2","dobi_scream_1","New_Death_4"], 80, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, {
		_object = _this;
		_breath = "#particlesource" createVehicleLocal (getposATL _object);                      
		_breath setParticleParams            
			[            
				["\a3\Data_f\ParticleEffects\Universal\meat_ca", 1, 0, 1],            
				"",           
				"spaceObject",        
				0.5, 12,           
				[0, 0, 0],        
				[3 + random -3, 2 + random -2, random 3],     
				1,1.275,0.2,0,          
				[1.6,0],          
				[[0.005,0,0,0.05], [0.006,0,0,0.06], [0.2,0,0,0]],      
				[1000],         
				1,            
				0.1,        
				"",          
				"",       
				"",        
				0,         
				false,           
				0.0           
			];            
		_breath setParticleRandom [0.5, [0, 0, 0], [3.25, 0.25, 2.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];      
		_breath setDropInterval 0.01;            
		_breath attachTo [_object,[0,-0.2,0],"spine3"];   
		_breath spawn {sleep 0.1; deleteVehicle _this};
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		}else{
		[_victim, {
		_x = _this;
		_swordSparksobject = "Land_HelipadEmpty_F" createVehicleLocal position _x; 
		_swordSparksobject attachTo [_x, [0, -0.2, 0], "spine3"];  
		_swordSparks = "#particlesource" createVehicleLocal (getPosATL _swordSparksobject); 
		_swordSparks attachTo [_swordSparksobject, [0,0,0]]; 
		_swordSparks setParticleCircle [0, [0, 0, 0]]; 
		_swordSparks setParticleRandom [1, [0.05, 0.05, 0.1], [5, 5, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0]; 
		_swordSparks setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1.5, [0, 0, 0], [0, 0, 0], 0, 30, 4.9, 0, [0.2, 0.2, 0.1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0.5]], [0.08], 1, 0, "", "", _swordSparks]; 
		_swordSparks setDropInterval 0.001; 
		sleep 0.1; 
		deleteVehicle _swordSparks; 
		deleteVehicle _swordSparksobject; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		};
		sleep 0.6;
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		detach _victim;  
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];  
		};  
		[_victim, selectRandom ["bloodCought_1","bloodCought_2","bloodCought_3"], 80, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.5;  
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		detach _victim;  
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];  
		}; 
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		detach _victim;  
		[_victim, "A_PlayerDeathAnim_2"] remoteExec ["switchMove", 0, true];  
		};
		if !(handGunWeapon _main in IMS_LightSabers) then {
		[_victim, {
		_object = _this;
		sleep 0.1;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,-0.2,0],"spine3"];        
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [-0.5, 0, 0.1],            
		  1, 1, 0.3, 1,          
		  [0.2, 1],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  -1   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.8;
		 deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		}else{
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_victim, _rndSnd, 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		detach _victim; 
		sleep 0.5;  
		[_victim, "dobi_fall_2", 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		sleep 0.5; 
		if (!(alive _main) or !(animationState _main == "WBK_IMS_Zwei_execution_main")) exitWith {  
		};  
		_main setVariable ["canMakeAttack",0];     
		_main setVariable ["AI_CanTurn",0];     
		_main setVariable ["actualSwordBlock",0, true];     
		};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		if ("ace_medical_engine" in activatedAddons) then {
		systemChat "WebKnights Melee: Ace Medical System detected";

		WBK_CreateDamage = {
		_unit = _this select 0;
		_unitToPlay = _unit;
		_damageApply = _this select 1;
		_killer = _this select 2;

		if ((isNil {_unit getVariable "ace_medical_bodypartdamage"})) exitWith { 
		if ((_damageApply >= 0.8) and (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {

			if (IMS_ISBluntWeaponKiils) exitWith {
				[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
				_rndAnim = selectRandom ["A_PlayerDeathAnim_14","A_PlayerDeathAnim_15","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
				[_unit, _rndAnim] remoteExec ["switchMove", 0];
				sleep 0.3;
				[_unit, true] remoteExec ["ace_medical_fnc_setUnconscious", _unit];
			};

			// _unit setDamage 1;
			[_unit, true] call ace_medical_fnc_setUnconscious;
			[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
			[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
			if (
			(animationState _killer == "starWars_lightsaber_lightattack1") or 
			(animationState _killer == "starWars_lightsaber_lightattack3_alter") or
			(animationState _killer == "starWars_lightsaber_lightattack1_onRun") or
			(animationState _killer == "star_wars_twoHanded_attack_1") or
			(animationState _killer == "star_wars_twoHanded_attack_3") or
			(animationState _killer == "star_wars_twoHanded_attack_Counter") or
			(animationState _killer == "starWars_lightsaber_lightattack_back")
			) exitWith { 
			_rndAnim = selectRandom ["SM_Death_1","SM_Death_4","SM_Death_6"];
			if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
			[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			}else{ 
			[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			};
			[_unit, _rndAnim] remoteExec ["switchMove", 0];
			if ((_rndAnim == "SM_Death_1") or (_rndAnim == "SM_Death_6")) then {
			[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
			}else{
			[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
			};
			};
			_rndAnim = selectRandom ["SM_Death_2","SM_Death_3","SM_Death_5","SM_Death_7","SM_Death_8","SM_Death_9"];
			[_unit, _rndAnim] remoteExec ["switchMove", 0];
			if ((_rndAnim == "SM_Death_3") or (_rndAnim == "SM_Death_7")) exitWith {
			_rndSound = selectRandom ["decapetadet_sound_1","decapetadet_sound_2"];
			[_unit, _rndSound, 80, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			removeHeadgear _unit;
			removeGoggles _unit;
			if (!(hmd _unit in IMS_Sheilds)) then {
			_unit unlinkItem hmd _unit;
			_unit removeItem hmd _unit;
			};
			[_unit, {
			_object = _this;
			_object setFace "WBK_DecapatedHead_SM";
			_blood = "#particlesource" createVehicleLocal (getposATL _object);          
			_blood setParticleClass "ATMineExplosionParticles";  
			_blood setParticleParams [ 
					["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
					"",   //animation            
					"billboard", //type            
					0.2, 2, //period and lifecycle            
					[0, 0, 0], //position            

					[3 + random -6, 3 + random -6, random 8], //movement vector            
					5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
					[0.05, 1.4], //size transform            
					[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
					[0.00001],    
					0.4,    
					0.4,    
					"",    
					"",    
					"",   
					360, //angle             
					false, //on surface             
					0 //bounce on surface     
				];  
			_blood setdropinterval 0.01;             
			_blood attachTo [_object,[0,0,-0.01],"head"]; 
			sleep 1;
			deleteVehicle _blood; 
			}] remoteExec ["spawn", [0,-2] select isDedicated,false];
			};
			if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
			[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			}else{ 
			[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			};
			if ((_rndAnim == "SM_Death_2")) then {
			[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
			}else{
			[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
			};
		};

		if ((_damageApply >= 0.8)) exitWith {
		if (IMS_ISBluntWeaponKiils) exitWith {
			[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
			_rndAnim = selectRandom ["A_PlayerDeathAnim_14","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
			[_unit, _rndAnim] remoteExec ["switchMove", 0];
			sleep 0.3;
			[_unit, true] remoteExec ["ace_medical_fnc_setUnconscious", _unit];
		};

		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];

		if (gestureState _unit == "FP_Dash_NoStamina") exitWith {
		[_unit, "A_PlayerDeathAnim_24"] remoteExec ["switchMove", 0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		};


		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		if ((animationState _unit == "IMS_Hit_NearGeometry_Front") or (animationState _unit == "IMS_Shield_Hit_2") or (animationState _unit == "push_backwards") or (animationState _unit == "IMS_Shield_Hit_1")) exitWith {

		if (IMS_ISBluntWeaponKiils) exitWith {
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = selectRandom ["A_PlayerDeathAnim_14","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		sleep 0.3;
		[_unit, true] remoteExec ["ace_medical_fnc_setUnconscious", _unit];
		};


		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then {
		[_unit, [_unit vectorModelToWorld [0,400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
		}else{
		[_unit, [_unit vectorModelToWorld [0,-400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
		};
		[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.1;
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if ((isPlayer _unit) or (WBK_IMSIsEnabledStaticDeaths)) exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["A_PlayerDeathAnim_23","A_PlayerDeathAnim_22","A_PlayerDeathAnim_21","A_PlayerDeathAnim_19","A_PlayerDeathAnim_17","A_PlayerDeathAnim_14","A_PlayerDeathAnim_15","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "A_PlayerDeathAnim_3") or (_rndAnim == "A_PlayerDeathAnim_5")) exitWith {
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_17") exitWith {
		sleep 1.95;
		[_unit, [-4 * (sin (getdir _unit )), -4 * (cos (getdir _unit)), 1]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_19") exitWith {
		sleep 0.2;
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_13")) exitWith {
		sleep 0.3; 
		[_unit, [1.2,0,0.1]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [2,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_12")) exitWith {
		sleep 1.5; 
		[_unit, [0,2,0.5]] remoteExec ["setVelocityModelSpace", _unit];
		};
		}else{
		_rndAnim = selectRandom ["A_PlayerDeathAnim_18","A_PlayerDeathAnim_20","A_PlayerDeathAnim_4","A_PlayerDeathAnim_6"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if (_rndAnim == "A_PlayerDeathAnim_18") exitWith {
		sleep 0.15;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_20") exitWith {
		sleep 0.05;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		sleep 0.2;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		[_unit, [5 * (sin (getdir _unit )), 5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		};
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["bayonet_death_1","bayonet_death_2","lightsaber_death_1","lightsaber_death_2","lightsaber_death_3","lightsaber_death_4","lightsaber_death_5","lightsaber_death_6","lightsaber_death_7","flamethrower_burning_6","flamethrower_burning_7","lightsaber_death_8","lightsaber_death_9","lightsaber_death_10","lightsaber_death_11","lightsaber_death_12","lightsaber_death_13","lightsaber_death_14","lightsaber_death_15","lightsaber_death_16","lightsaber_death_17","lightsaber_death_18","lightsaber_death_19","lightsaber_death_20","lightsaber_death_21"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		};
		_damageApply = _damageApply + 0.1;
		[_unit, _damageApply, "body", "bullet"] remoteExec ["ace_medical_fnc_addDamageToUnit", _unit]; 
		};
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		_dam = _unit getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((typeOf _unit isKindOf "TIOWSpaceMarine_Base") and ((_value >= 0.8) or (_ace_wbk_DamParam >= 0.5))) exitWith {
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		if (
		(animationState _killer == "starWars_lightsaber_lightattack1") or 
		(animationState _killer == "starWars_lightsaber_lightattack3_alter") or
		(animationState _killer == "starWars_lightsaber_lightattack1_onRun") or
		(animationState _killer == "star_wars_twoHanded_attack_1") or
		(animationState _killer == "star_wars_twoHanded_attack_3") or
		(animationState _killer == "star_wars_twoHanded_attack_Counter") or
		(animationState _killer == "starWars_lightsaber_lightattack_back")
		) exitWith { 
		_rndAnim = selectRandom ["SM_Death_1","SM_Death_4","SM_Death_6"];
		if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		}else{ 
		[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "SM_Death_1") or (_rndAnim == "SM_Death_6")) then {
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
		};
		};
		_rndAnim = selectRandom ["SM_Death_2","SM_Death_3","SM_Death_5","SM_Death_7","SM_Death_8","SM_Death_9"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "SM_Death_3") or (_rndAnim == "SM_Death_7")) exitWith {
		_rndSound = selectRandom ["decapetadet_sound_1","decapetadet_sound_2"];
		[_unit, _rndSound, 80, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		removeHeadgear _unit;
		removeGoggles _unit;
		if (!(hmd _unit in IMS_Sheilds)) then {
		_unit unlinkItem hmd _unit;
		_unit removeItem hmd _unit;
		};
		[_unit, {
		_object = _this;
		_object setFace "WBK_DecapatedHead_SM";
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood setParticleClass "ATMineExplosionParticles";  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;             
		_blood attachTo [_object,[0,0,-0.01],"head"]; 
		sleep 1;
		deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		};
		if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		}else{ 
		[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		if ((_rndAnim == "SM_Death_2")) then {
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
		};
		};
		_dam = _unit getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((_ace_wbk_DamParam >= 0.5) or (_damageApply >= 0.8)) exitWith {

		if (IMS_ISBluntWeaponKiils) exitWith {
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = selectRandom ["A_PlayerDeathAnim_14","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		sleep 0.3;
		[_unit, true] remoteExec ["ace_medical_fnc_setUnconscious", _unit];
		};


		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		if (gestureState _unit == "FP_Dash_NoStamina") exitWith {
		[_unit, "A_PlayerDeathAnim_24"] remoteExec ["switchMove", 0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		};

		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndPlayWoundAnim = random 100;
		if ((animationState _unit != "push_backwards") and (animationState _unit != "WBK_FISTS_ATTACK_Stunned") and (animationState _unit != "starWars_lightsaber_hit_3") and (_rndPlayWoundAnim >= 90) and (handgunWeapon _killer in IMS_Melee_Weapons) and !(handgunWeapon _killer in IMS_LightSabers) and !(typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndScream = selectRandom ["get_deathScream_1","get_deathScream_2","get_deathScream_3","get_deathScream_4"];
		[_unit, _rndScream, 120, 25] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_fall_2", 60, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		[_unit, "IMS_Die_Spec_1"] remoteExec ["switchMove", 0];
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, "IMS_Die_Spec_2"] remoteExec ["switchMove", 0];
		[_unit, [6 * (sin (getdir _unit )), 6 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		if (_rndScream == "get_deathScream_1") exitWith {
		[_unit, 0.75] remoteExec ["setAnimSpeedCoef", 0];
		};
		if (_rndScream == "get_deathScream_2") exitWith {
		[_unit, 0.6] remoteExec ["setAnimSpeedCoef", 0];
		};
		if (_rndScream == "get_deathScream_3") exitWith {
		[_unit, 0.7] remoteExec ["setAnimSpeedCoef", 0];
		};
		};

		if ((animationState _unit == "IMS_Hit_NearGeometry_Front") or (animationState _unit == "IMS_Shield_Hit_2") or (animationState _unit == "push_backwards") or (animationState _unit == "IMS_Shield_Hit_1")) exitWith {

			if (IMS_ISBluntWeaponKiils) exitWith {
				[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
				_rndAnim = selectRandom ["A_PlayerDeathAnim_14","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
				[_unit, _rndAnim] remoteExec ["switchMove", 0];
				sleep 0.3;
				[_unit, true] remoteExec ["ace_medical_fnc_setUnconscious", _unit];
			};


			if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then {
			[_unit, [_unit vectorModelToWorld [0,400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
			}else{
			[_unit, [_unit vectorModelToWorld [0,-400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
			};
			[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			sleep 0.1;
			// _unit setDamage 1;
			[_unit, true] call ace_medical_fnc_setUnconscious;
			[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};


		if ((isPlayer _unit) or (WBK_IMSIsEnabledStaticDeaths)) exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["A_PlayerDeathAnim_23","A_PlayerDeathAnim_22","A_PlayerDeathAnim_21","A_PlayerDeathAnim_19","A_PlayerDeathAnim_17","A_PlayerDeathAnim_14","A_PlayerDeathAnim_15","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "A_PlayerDeathAnim_3") or (_rndAnim == "A_PlayerDeathAnim_5")) exitWith {
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_17") exitWith {
		sleep 1.95;
		[_unit, [-4 * (sin (getdir _unit )), -4 * (cos (getdir _unit)), 1]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_19") exitWith {
		sleep 0.2;
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_13")) exitWith {
		sleep 0.3; 
		[_unit, [1.2,0,0.1]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [2,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_12")) exitWith {
		sleep 1.5; 
		[_unit, [0,2,0.5]] remoteExec ["setVelocityModelSpace", _unit];
		};
		}else{
		_rndAnim = selectRandom ["A_PlayerDeathAnim_18","A_PlayerDeathAnim_20","A_PlayerDeathAnim_4","A_PlayerDeathAnim_6"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if (_rndAnim == "A_PlayerDeathAnim_18") exitWith {
		sleep 0.15;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_20") exitWith {
		sleep 0.05;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		sleep 0.2;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		[_unit, [5 * (sin (getdir _unit )), 5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		};
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["bayonet_death_1","bayonet_death_2","lightsaber_death_1","lightsaber_death_2","lightsaber_death_3","lightsaber_death_4","lightsaber_death_5","lightsaber_death_6","lightsaber_death_7","flamethrower_burning_6","flamethrower_burning_7","lightsaber_death_8","lightsaber_death_9","lightsaber_death_10","lightsaber_death_11","lightsaber_death_12","lightsaber_death_13","lightsaber_death_14","lightsaber_death_15","lightsaber_death_16","lightsaber_death_17","lightsaber_death_18","lightsaber_death_19","lightsaber_death_20","lightsaber_death_21"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		};
		_value = _damageApply + 0.1; 
		[_unitToPlay, _value, "body", "stab"] remoteExec ["ace_medical_fnc_addDamageToUnit", _unitToPlay];
		};




		legPunch = {
		_unitToPlay = _this select 0;
		if (typeOf _unitToPlay isKindOf "TIOWSpaceMarine_Base") exitWith {[_unitToPlay] spawn legPunchSpaceMarine;};
		if (handGunWeapon _unitToPlay in IMS_LightSabers) exitWith {[_unitToPlay] spawn legPunchVertuha;};
		if (!(animationState _unitToPlay == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unitToPlay == "Star_Wars_KaaTirs_executionOnCreature_jedi") and (handgunWeapon _unitToPlay in IMS_Melee_Weapons) and (_unitToPlay getVariable "canMakeAttack" == 0) and !(animationState _unitToPlay == "push_backwards") and !(animationState _unitToPlay == "starWars_lightsaber_attackLeg") and !(animationState _unitToPlay == "anim_hardLand") and !(animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _unitToPlay == "anim_jump_FlipBackward") and !(animationState _unitToPlay == "starWars_lightSaber_combo_1")) then {
		if ((_unitToPlay getVariable "concentrationParam" > 0.08) ) then {
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_unitToPlay] call concentrationMinusPunch;
		{ 
		_unitToPlay reveal [_x, 4]; 
		} forEach nearestObjects [_unitToPlay, ["Man"], 100]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "IMS_Leg_Kick"] remoteExec ["switchMove", 0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unitToPlay modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_force_landRoll"] remoteExec ["strafeFwrd", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_force_landRoll_b"] remoteExec ["strafeFwrd", _x, false];
		};
		};
		} forEach nearestObjects [_unitToPlay, ["Man"], 2.3];
		sleep 0.2;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		[_unitToPlay, "leg_punch", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_unitToPlay setVariable ["AI_CanTurn",1, true];
		[_unitToPlay, [3 * (sin (getdir _unitToPlay )), 3 * (cos (getdir _unitToPlay)), 1]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.15;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _x == "starWars_force_landRoll") and !(animationState _x == "starWars_force_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or ((typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _unitToPlay isKindOf "TIOWSpaceMarine_Base"))) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if (isNil {_x getVariable "ace_medical_bodypartdamage"}) exitWith {};
		_dam = _x getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((_ace_wbk_DamParam >= 0.5) or (lifeState _x == "INCAPACITATED")) exitWith {
		[_x, _unitToPlay] spawn HumanExecutionsSelectFrom;
		};
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.4;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		sleep 0.4;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		if (animationState _unitToPlay == "IMS_Leg_Kick") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		}else{
		[0] spawn {
		IMS_staminaColor = "#(argb,8,8,3)color(0.6,0.2,0.2,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.7,0.4,0.4,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.8,0.6,0.6,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.9,0.8,0.8,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(1,1,1,0.85)";
		};
		};
		};
		};



		SM_SkillUse = {
		_main = _this;
		if ((isNil {_main getVariable "SM_CanUseSkill"}) and !(isPlayer _main)) then {
		if (getText (configfile >> "CfgVehicles" >> typeOf _main >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_main, selectRandom ["cm_phrase_1","cm_phrase_2","cm_phrase_3","cm_phrase_4","cm_phrase_5","cm_phrase_6","cm_phrase_7"], 100] call CBA_fnc_GlobalSay3D;
		}else{ 
		[_main, selectRandom ["sm_phrase_1","sm_phrase_2","sm_phrase_3","sm_phrase_4"], 100] call CBA_fnc_GlobalSay3D;
		};
		};
		if ((hmd _main in IMS_Sheilds)) exitWith { 
		_main spawn SM_Skill_Shield;
		};
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_SM_SkillType");  
		if (_executionTypeOfWeap == "ThunderHammer") exitWith { 
		_main spawn SM_Skill_ThunderHammer;
		};
		if ((_executionTypeOfWeap == "OneHandedToTwoHanded")) exitWith {
		_main spawn SM_Skill_OneHandedToTwohanded;
		};
		if ((_executionTypeOfWeap == "FistsPowerUp")) exitWith { 
		_main spawn SM_Skill_Fists;
		};
		if ((_executionTypeOfWeap == "Crozius")) exitWith { 
		_main spawn SM_Skill_Crozius;
		};
		_unitToPlay = _main;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {
		_myNearestEnemy = _unitToPlay findNearestEnemy _unitToPlay;
		_unitToPlay reveal [_myNearestEnemy, 4];
		if (!(isPlayer _myNearestEnemy) and ((_unitToPlay distance _myNearestEnemy) <= 5)) then {
		[_myNearestEnemy, 2, _unitToPlay] remoteExec ["IMS_MeleeFunction", _myNearestEnemy];
		};
		[_unitToPlay, "SM_Fists_Attack_2"] remoteExec ["switchMove", 0];
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		sleep 0.1;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, [12 * (sin (getdir _unitToPlay )), 12 * (cos (getdir _unitToPlay)), 1.3]] remoteExec ["setvelocity", _unitToPlay]; 
		[_unitToPlay, selectRandom ["powerSword_swing_1","powerSword_swing_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndEquip = selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"];
		playSound _rndEquip;
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",1];
		{
		if ((alive _x) and !(_x == _unitToPlay) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_Fists_Attack_2") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		}; 
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		if ((_x getVariable "actualSwordBlock" == 1) and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay,1,_x] spawn concentrationToZero;
		[_unitToPlay, 0.2, "body", "bullet"] remoteExec ["ace_medical_fnc_addDamageToUnit", _unitToPlay];
		};
		if ((animationState _x == "starWars_lightsaber_blockPursuit") and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_x spawn {
		if ((isNil {_this getVariable "ace_medical_bodypartdamage"})) exitWith {};
		_dam = _this getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((_ace_wbk_DamParam < 0.2)) exitWith {};
		[_this, [_this vectorModelToWorld [0,-200,0], _this selectionPosition "head"]] remoteExec ["addForce", _this];
		sleep 4;
		if (!(alive _this)) exitWith {};
		[_this, "melee_armed_idle"] remoteExec ["switchMove", 0];
		[_this, false] remoteExec ["setUnconscious", _this]; 
		_this setVariable ["canMakeAttack",0,true];
		_this setVariable ["actualSwordBlock",0, true];
		};
		};
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 2, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		[_x, false] remoteExec ["setUnconscious", _x]; 
		[_x, "melee_armed_idle"] remoteExec ["switchMove", 0];
		sleep 0.01;
		[_unitToPlay, _x] spawn SM_Execution_StompOnHead;
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
		_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8","IMS_SM_NormalHum_Die_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		if (_rndAnim == "IMS_SM_NormalHum_Die_1") then {
		[_x, "dobi_bones", 120, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, selectRandom ["decapetadet_sound_1","decapetadet_sound_2"], 80, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;  
		sleep 0.5;      
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		}else{
		_x setDir (_x getDir _unitToPlay);
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, [-6 * (sin (getdir _x )), -6 * (cos (getdir _x)), 3.5]] remoteExec ["setvelocity", _x];
		};
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_ExecutionType");  
		if (((damage _x) >= 0.5) and (_executionTypeOfWeap == "Chainsword")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_ChainSaw;
		};
		if (((damage _x) >= 0.5) and (_executionTypeOfWeap == "OneHandedBasic")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_Sword;
		};
		if (((damage _x) >= 0.5) and (_executionTypeOfWeap == "StompOnAHead")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_StompOnHead;
		};
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.5];
		sleep 0.4;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0];
		_unitToPlay setVariable ["canMakeAttack",0];
		sleep 1;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		[_unitToPlay, "melee_armed_idle"] remoteExec ["playMoveNow", _unitToPlay];
		sleep 0.3;
		if (animationState _unitToPlay == "melee_armed_idle") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", _unitToPlay];
		};
		};
		};


		legPunchSpaceMarine = {
		_unitToPlay = _this select 0;
		if (!(animationState _unitToPlay == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unitToPlay == "Star_Wars_KaaTirs_executionOnCreature_jedi") and (handgunWeapon _unitToPlay in IMS_Melee_Weapons) and (_unitToPlay getVariable "canMakeAttack" == 0) and !(animationState _unitToPlay == "push_backwards") and !(animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _unitToPlay == "anim_hardLand") and !(animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _unitToPlay == "anim_jump_FlipBackward") and !(animationState _unitToPlay == "starWars_lightSaber_combo_1")) then {
		if ((_unitToPlay getVariable "concentrationParam" > 0.2) ) then {
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_unitToPlay] call concentrationMinusShoulderSM;

		{ 
		_unitToPlay reveal [_x, 4]; 
		} forEach nearestObjects [_unitToPlay, ["Man"], 100]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "SM_ShoulderKick"] remoteExec ["switchMove", 0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and (typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unitToPlay modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_landRoll"] remoteExec ["strafeFwrd_SW", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _x, false];
		};
		};
		} forEach nearestObjects [_unitToPlay, ["Man"], 4.9];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		[_unitToPlay, "leg_punch", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_unitToPlay setVariable ["AI_CanTurn",1, true];
		[_unitToPlay, [9.5 * (sin (getdir _unitToPlay )), 9.5 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.15;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		[_unitToPlay, [9 * (sin (getdir _unitToPlay )), 9 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		{  
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "starWars_lightsaber_blockPursuit") and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		};
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_ImperialKnight_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		if ((isNil {_x getVariable "ace_medical_bodypartdamage"})) exitWith {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};  
		_dam = _x getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((_ace_wbk_DamParam >= 0.5)) exitWith {
		[_unitToPlay, _x] spawn SM_Execution;
		};

		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "starWars_lightsaber_blockPursuit") and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		}; 
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_ImperialKnight_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		if ((isNil {_x getVariable "ace_medical_bodypartdamage"})) exitWith {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_ExecutionType");  
		_dam = _x getVariable "ace_medical_bodypartdamage";
		_ace_wbk_DamParam = _dam select 1;
		if ((_ace_wbk_DamParam >= 0.5)) exitWith {
		[_unitToPlay, _x] spawn SM_Execution;
		};
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.3;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		if (animationState _unitToPlay == "SM_ShoulderKick") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		}else{
		[0] spawn {
		IMS_staminaColor = "#(argb,8,8,3)color(0.6,0.2,0.2,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.7,0.4,0.4,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.8,0.6,0.6,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.9,0.8,0.8,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(1,1,1,0.85)";
		};
		};
		};
		};




		createDeathS_Binocular = {
		_unit = _this select 0;
		if (
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_victim") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_creature") and 
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_creature") and
		!(animationState _unit == "Star_Wars_KaaTirs_stanned") and
		!(animationState _unit == "Star_Wars_executionOnHuman_2_main") and 
		!(animationState _unit == "Star_Wars_executionOnHuman_2_victim") 
		) then {
		_killer = _this select 1;

		if ((handGunWeapon _killer in IMS_LightSabers) and (handGunWeapon _unit in IMS_LightSabers)) exitWith {[_unit,_killer] spawn SW_CountToKillScript;};


		_value = getNumber (configFile >> "CfgWeapons" >> binocular _killer >> "IMS_Melee_Param_Damage");  
		if (((damage _unit) >= 0.4) or (_value >= 0.8)) then {
		// _unit setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = selectRandom ["lightsaber_death_1","lightsaber_death_2","lightsaber_death_3","lightsaber_death_4","lightsaber_death_5","lightsaber_death_6","lightsaber_death_7","flamethrower_burning_6","flamethrower_burning_7","lightsaber_death_8","lightsaber_death_9","lightsaber_death_10","lightsaber_death_11","lightsaber_death_12","lightsaber_death_13","lightsaber_death_14","lightsaber_death_15","lightsaber_death_16","lightsaber_death_17","lightsaber_death_18","lightsaber_death_19","lightsaber_death_20","lightsaber_death_21"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		}else{
		_unitToPlay = _unit;
		if (animationState _unitToPlay == "starWars_lightsaber_hit_2") exitWith {};
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		[_unitToPlay, "starWars_lightsaber_hit_2"] remoteExec ["switchMove", 0];
		_unitToPlay setVariable ["AI_CanTurn",1, true]; 
		_unitToPlay setVariable ["canMakeAttack",1, true]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true]; 
		_value = getNumber (configFile >> "CfgWeapons" >> binocular _killer >> "IMS_Melee_Param_Damage");  
		_unitToPlay setDamage (((damage _unitToPlay) + _value) min 0.95); 
		sleep 0.1; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		[_unitToPlay, [-9 * (sin (getdir _unitToPlay )), -9 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.7; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",0, true]; 
		_unitToPlay setVariable ["canMakeAttack",0, true]; 
		sleep 0.3; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		if ((animationState _unitToPlay == "starWars_lightsaber_hit_2") and !(animationState _unitToPlay == "starWars_force_landRoll") and !(animationState _unitToPlay == "starWars_force_landRoll_b") and !(animationState _unitToPlay == "push_backwards")) then { 
		_unitToPlay allowDamage true;
		if (handgunWeapon _unitToPlay in IMS_Melee_Weapons) then {
		if (!(isNil {_unitToPlay getVariable "AI_IsPlagued"})) exitWith {[_unitToPlay, "plagued_armed_idle"] remoteExec ["switchMove", 0, true];};
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		}else{
		if ((uniform _unitToPlay == "Zombie_BioHazard") or (uniform _unitToPlay == "Zombie3_BioHazard")) then {
		[_unitToPlay, "Star_Wars_KaaTirs_idle"] remoteExec ["switchMove", 0];
		}else{
		[_unitToPlay, ""] remoteExec ["switchMove", 0];
		};
		};
		}; 
		};
		};
		};



		}else{



		WBK_CreateDamage = {
		_unit = _this select 0;
		_unitToPlay = _unit;
		_damageApply = _this select 1;
		_killer = _this select 2;
		if ((((damage _unit) >= 0.4) or (_damageApply >= 0.8)) and (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		if (
		(animationState _killer == "starWars_lightsaber_lightattack1") or 
		(animationState _killer == "starWars_lightsaber_lightattack3_alter") or
		(animationState _killer == "starWars_lightsaber_lightattack1_onRun") or
		(animationState _killer == "star_wars_twoHanded_attack_1") or
		(animationState _killer == "star_wars_twoHanded_attack_3") or
		(animationState _killer == "star_wars_twoHanded_attack_Counter") or
		(animationState _killer == "starWars_lightsaber_lightattack_back") or
		(animationState _killer == "starWars_lightsaber_lightattack1_onRunAlternative")
		) exitWith { 
		_rndAnim = selectRandom ["SM_Death_1","SM_Death_4","SM_Death_6"];
		if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		}else{ 
		[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "SM_Death_1") or (_rndAnim == "SM_Death_6")) then {
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
		};
		};
		_rndAnim = selectRandom ["SM_Death_2","SM_Death_3","SM_Death_5","SM_Death_7","SM_Death_8","SM_Death_9"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "SM_Death_3") or (_rndAnim == "SM_Death_7")) exitWith {
		_rndSound = selectRandom ["decapetadet_sound_1","decapetadet_sound_2"];
		[_unit, _rndSound, 80, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		removeHeadgear _unit;
		removeGoggles _unit;
		if (!(hmd _unit in IMS_Sheilds)) then {
		_unit unlinkItem hmd _unit;
		_unit removeItem hmd _unit;
		};
		[_unit, {
		_object = _this;
		_object setFace "WBK_DecapatedHead_SM";
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood setParticleClass "ATMineExplosionParticles";  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;             
		_blood attachTo [_object,[0,0,-0.01],"head"]; 
		sleep 1;
		deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		};
		if (getText (configfile >> "CfgVehicles" >> typeOf _unit >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_unit, selectRandom ["cm_die_1","cm_die_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		}else{ 
		[_unit, selectRandom ["SM_DeathSound_1","SM_DeathSound_2"], 90, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		if ((_rndAnim == "SM_Death_2")) then {
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.75]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, [0, 0, 0]] remoteExec ["setVelocityModelSpace", 0, _unit];
		};
		};
		if (((damage _unitToPlay) >= 0.4) or (_damageApply >= 0.8)) exitWith {
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		if (gestureState _unit == "FP_Dash_NoStamina") exitWith {
		[_unit, "A_PlayerDeathAnim_24"] remoteExec ["switchMove", 0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		};
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndPlayWoundAnim = random 100;
		if ((animationState _unit != "push_backwards") and (animationState _unit != "WBK_FISTS_ATTACK_Stunned") and (animationState _unit != "starWars_lightsaber_hit_3") and (_rndPlayWoundAnim >= 90) and (handgunWeapon _killer in IMS_Melee_Weapons) and !(handgunWeapon _killer in IMS_LightSabers) and !(typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndScream = selectRandom ["get_deathScream_1","get_deathScream_2","get_deathScream_3","get_deathScream_4"];
		[_unit, _rndScream, 120, 25] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "dobi_fall_2", 60, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		[_unit, "IMS_Die_Spec_1"] remoteExec ["switchMove", 0];
		[_unit, [-6 * (sin (getdir _unit )), -6 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, "IMS_Die_Spec_2"] remoteExec ["switchMove", 0];
		[_unit, [6 * (sin (getdir _unit )), 6 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		if (_rndScream == "get_deathScream_1") exitWith {
		[_unit, 0.75] remoteExec ["setAnimSpeedCoef", 0];
		};
		if (_rndScream == "get_deathScream_2") exitWith {
		[_unit, 0.6] remoteExec ["setAnimSpeedCoef", 0];
		};
		if (_rndScream == "get_deathScream_3") exitWith {
		[_unit, 0.7] remoteExec ["setAnimSpeedCoef", 0];
		};
		};

		if ((animationState _unit == "IMS_Hit_NearGeometry_Front") or (animationState _unit == "IMS_Shield_Hit_2") or (animationState _unit == "push_backwards") or (animationState _unit == "IMS_Shield_Hit_1")) exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then {
		[_unit, [_unit vectorModelToWorld [0,400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
		}else{
		[_unit, [_unit vectorModelToWorld [0,-400,-1000], _unit selectionPosition "head"]] remoteExec ["addForce", _unit];
		};
		[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.1;
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};

		if ((isPlayer _unit) or (WBK_IMSIsEnabledStaticDeaths)) exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["A_PlayerDeathAnim_23","A_PlayerDeathAnim_22","A_PlayerDeathAnim_21","A_PlayerDeathAnim_19","A_PlayerDeathAnim_17","A_PlayerDeathAnim_14","A_PlayerDeathAnim_15","A_PlayerDeathAnim_1","A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","A_PlayerDeathAnim_7","A_PlayerDeathAnim_8","A_PlayerDeathAnim_9","A_PlayerDeathAnim_10","A_PlayerDeathAnim_11","A_PlayerDeathAnim_12","A_PlayerDeathAnim_13"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "A_PlayerDeathAnim_3") or (_rndAnim == "A_PlayerDeathAnim_5")) exitWith {
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_17") exitWith {
		sleep 1.95;
		[_unit, [-4 * (sin (getdir _unit )), -4 * (cos (getdir _unit)), 1]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_19") exitWith {
		sleep 0.2;
		[_unit, [-5 * (sin (getdir _unit )), -5 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_13")) exitWith {
		sleep 0.3; 
		[_unit, [1.2,0,0.1]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [2,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		sleep 0.2; 
		[_unit, [1,0,0.3]] remoteExec ["setVelocityModelSpace", _unit];
		};
		if ((_rndAnim == "A_PlayerDeathAnim_12")) exitWith {
		sleep 1.5; 
		[_unit, [0,2,0.5]] remoteExec ["setVelocityModelSpace", _unit];
		};
		}else{
		_rndAnim = selectRandom ["A_PlayerDeathAnim_18","A_PlayerDeathAnim_20","A_PlayerDeathAnim_4","A_PlayerDeathAnim_6"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if (_rndAnim == "A_PlayerDeathAnim_18") exitWith {
		sleep 0.15;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		if (_rndAnim == "A_PlayerDeathAnim_20") exitWith {
		sleep 0.05;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		sleep 0.2;
		[_unit, [3 * (sin (getdir _unit )), 3 * (cos (getdir _unit)), 0.5]] remoteExec ["setvelocity", _unit];
		};
		[_unit, [5 * (sin (getdir _unit )), 5 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		[_unit, "dobi_fall_2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		};
		if (
		((handGunWeapon _killer in IMS_LightSabers) and !(handGunWeapon _unit in IMS_LightSabers)) or 
		(_killer isKindOf "WBK_SpecialZombie_Smasher_1") or 
		(_killer isKindOf "WBK_DOS_Huge_ORK")
		) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		[_unit, [0,-10,1.4]] remoteExec ["setVelocityModelSpace", _unit];
		};
		_rndAnim = selectRandom ["bayonet_death_1","bayonet_death_2","lightsaber_death_1","lightsaber_death_2","lightsaber_death_3","lightsaber_death_4","lightsaber_death_5","lightsaber_death_6","lightsaber_death_7","flamethrower_burning_6","flamethrower_burning_7","lightsaber_death_8","lightsaber_death_9","lightsaber_death_10","lightsaber_death_11","lightsaber_death_12","lightsaber_death_13","lightsaber_death_14","lightsaber_death_15","lightsaber_death_16","lightsaber_death_17","lightsaber_death_18","lightsaber_death_19","lightsaber_death_20","lightsaber_death_21"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		};
		_unitToPlay setDamage (((damage _unitToPlay) + _damageApply) min 0.95); 
		};





		WBK_hitNearGeom = {  
		_main = _this select 1;  
		_victim = _this select 0;  
		_main disableAI "ALL";  
		_main setVariable ["canMakeAttack",1];  
		_main setVariable ["AI_CanTurn",1];  
		_main setVariable ["actualSwordBlock",0, true];  
		[_main] call concentrationMinusPunch;
		_main playActionNow "Disable_Gesture";
		[_victim, {  
		_this disableAI "ALL";
		_this setVariable ["canMakeAttack",1];  
		_this setVariable ["AI_CanTurn",1];  
		_this setVariable ["actualSwordBlock",0, true];  
		_this playActionNow "Disable_Gesture";
		}] remoteExec ["spawn", _victim];  
		[_main, "WBK_FISTS_GRAB_3_MAIN"] remoteExec ["switchMove", 0, false];  
		[_victim, "WBK_FISTS_GRAB_3_VICTIM"] remoteExec ["switchMove", 0, true];  
		[_victim, "WBK_FISTS_GRAB_3_VICTIM"] remoteExec ["switchMove", 0, true];  
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];  
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];  
		_main attachTo [_victim,[0,1.42,0]];  
		[_main, 180] remoteExec ["setDir", _main];  
		sleep 0.1;  
		if (!(alive _main)) exitWith {detach _main;};  
		[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		sleep 0.7;  
		if (!(alive _main)) exitWith {detach _main;};  
		_victim setDamage (((damage _victim) + 0.4) min 0.95);
		[_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";    
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		sleep 1.2;  
		if (!(alive _main)) exitWith {detach _main;};  
		detach _main;  
		[_victim, true] remoteExec ["setUnconscious", _victim];
		[_main, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];  
		_main setVariable ["canMakeAttack",0];  
		_main setVariable ["AI_CanTurn",0];  
		};  







		WBK_HitByPunch = {
		_unitThatTakeDamage = _this select 0;
		_unitWhoPunch = _this select 1;
		if (!(isNil {_unitThatTakeDamage getVariable "WBK_AI_ISZombie"})) exitWith {
		if !(isNil {_unitThatTakeDamage getVariable "IMS_EventHandler_Hit"}) then {
		_func = _unitThatTakeDamage getVariable "IMS_EventHandler_Hit";
		[_unitThatTakeDamage,_unitWhoPunch,"Fists"] spawn _func;
		};
		if ((gestureState _unitWhoPunch == "FP_Kulak_Swing_Sprint")) exitWith {
		[_unitThatTakeDamage, "dobi_CriticalHit", 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_unitThatTakeDamage, _unitWhoPunch, 0.3, "WBK_survival_weapon_2"] remoteExec ["WBK_ZombiesProcessDamage", _unitThatTakeDamage, false];
		};
		[_unitThatTakeDamage, selectRandom ["boxing_hit_00","boxing_hit_01","boxing_hit_02"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_unitThatTakeDamage, _unitWhoPunch, 0.1, "Fists"] remoteExec ["WBK_ZombiesProcessDamage", _unitThatTakeDamage, false];
		};
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _unitThatTakeDamage >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _unitThatTakeDamage isKindOf "TIOWSpaceMarine_Base") or (typeOf _unitThatTakeDamage isKindOf "WBK_DT_1") or (typeOf _unitThatTakeDamage isKindOf "WBK_DT_Cont_1") or (typeOf _unitThatTakeDamage isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		[_unitWhoPunch, 1, _unitThatTakeDamage] remoteExec ["WBK_Fists_concentrationToZero", _unitWhoPunch, false];
		[_unitWhoPunch, selectRandom ["leg_hit1","leg_hit2"], 20, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		if ((lifeState _unitThatTakeDamage == "INCAPACITATED")) exitWith {};
		if ((_unitThatTakeDamage getVariable "inBlock" == 1) and (((_unitThatTakeDamage worldToModel (_unitWhoPunch modelToWorld [0, 0, 0])) select 1) > 0)) exitWith {
		if !(isNil {_unitThatTakeDamage getVariable "IMS_EventHandler_AttackBlocked"}) then {
		_func = _unitThatTakeDamage getVariable "IMS_EventHandler_AttackBlocked";
		[_unitThatTakeDamage,_unitWhoPunch,false] spawn _func;
		};
		[_unitThatTakeDamage, "dobi_fall_2", 20, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		_prm = _unitThatTakeDamage getVariable "concentrationParam"; 
		_newprm = _prm - 0.05; 
		if (_newprm <= 0.1) then { 
		[_unitThatTakeDamage, 228, _unitWhoPunch] remoteExec ["concentrationToZero", _unitThatTakeDamage, false];  
		}else{ 
		_unitThatTakeDamage setVariable ["concentrationParam",_newprm, true];  
		};
		};
		if !(isNil {_unitThatTakeDamage getVariable "IMS_EventHandler_Hit"}) then {
		_func = _unitThatTakeDamage getVariable "IMS_EventHandler_Hit";
		[_unitThatTakeDamage,_unitWhoPunch,"Fists"] spawn _func;
		};
		[_unitThatTakeDamage, selectRandom ["boxing_hit_00","boxing_hit_01","boxing_hit_02"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		if ((damage _unitThatTakeDamage) >= 0.4) exitWith {
		[_unitThatTakeDamage, selectRandom ["PF_Hit_1","PF_Hit_2"], 55, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		if (((_unitThatTakeDamage worldToModel (_unitWhoPunch modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_unitThatTakeDamage, [_unitThatTakeDamage vectorModelToWorld [0,200,0], _unitThatTakeDamage selectionPosition "head"]] remoteExec ["addForce", _unitThatTakeDamage];
		[_unitThatTakeDamage, true] remoteExec ["setUnconscious", _unitThatTakeDamage];
		}else{
		[_unitThatTakeDamage, [_unitThatTakeDamage vectorModelToWorld [0,-200,0], _unitThatTakeDamage selectionPosition "head"]] remoteExec ["addForce", _unitThatTakeDamage];
		[_unitThatTakeDamage, true] remoteExec ["setUnconscious", _unitThatTakeDamage];
		};
		};
		if (gestureState _unitWhoPunch == "FP_Kulak_Swing_Sprint") exitWith {
		_unitThatTakeDamage setDamage (((damage _unitThatTakeDamage) + 0.18) min 0.95);
		[_unitThatTakeDamage, 228, _unitWhoPunch] remoteExec ["concentrationToZero", _unitThatTakeDamage, false];  
		};
		[_unitThatTakeDamage, _unitWhoPunch] remoteExec ["WBK_CreateHitAnimation", _unitThatTakeDamage, false];  
		if ((gestureState _unitWhoPunch == "FP_Kulak_Swing_3") or (gestureState _unitWhoPunch == "FP_Kulak_Swing_4")) exitWith {
		_unitThatTakeDamage setDamage (((damage _unitThatTakeDamage) + 0.12) min 0.95);
		};
		if (gestureState _unitWhoPunch == "FP_Kulak_Swing_2") exitWith {
		_unitThatTakeDamage setDamage (((damage _unitThatTakeDamage) + 0.08) min 0.95);
		};
		_unitThatTakeDamage setDamage (((damage _unitThatTakeDamage) + 0.05) min 0.95);
		};



		legPunch = {
		_unitToPlay = _this select 0;
		if (typeOf _unitToPlay isKindOf "TIOWSpaceMarine_Base") exitWith {[_unitToPlay] spawn legPunchSpaceMarine;};
		if (handGunWeapon _unitToPlay in IMS_LightSabers) exitWith {[_unitToPlay] spawn legPunchVertuha;};
		if (!(animationState _unitToPlay == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unitToPlay == "Star_Wars_KaaTirs_executionOnCreature_jedi") and (handgunWeapon _unitToPlay in IMS_Melee_Weapons) and (_unitToPlay getVariable "canMakeAttack" == 0) and !(animationState _unitToPlay == "push_backwards") and !(animationState _unitToPlay == "starWars_lightsaber_attackLeg") and !(animationState _unitToPlay == "anim_hardLand") and !(animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _unitToPlay == "anim_jump_FlipBackward") and !(animationState _unitToPlay == "starWars_lightSaber_combo_1")) then {
		if ((_unitToPlay getVariable "concentrationParam" > 0.08) ) then {
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_unitToPlay] call concentrationMinusPunch;
		{ 
		_unitToPlay reveal [_x, 4]; 
		} forEach nearestObjects [_unitToPlay, ["Man"], 100]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "IMS_Leg_Kick"] remoteExec ["switchMove", 0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unitToPlay modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_force_landRoll"] remoteExec ["strafeFwrd", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_force_landRoll_b"] remoteExec ["strafeFwrd", _x, false];
		};
		};
		} forEach nearestObjects [_unitToPlay, ["Man"], 2.3];
		sleep 0.2;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		[_unitToPlay, "leg_punch", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_unitToPlay setVariable ["AI_CanTurn",1, true];
		[_unitToPlay, [3 * (sin (getdir _unitToPlay )), 3 * (cos (getdir _unitToPlay)), 1]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.15;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _x == "starWars_force_landRoll") and !(animationState _x == "starWars_force_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or ((typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _unitToPlay isKindOf "TIOWSpaceMarine_Base"))) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if (((damage _x) >= 0.4) or (lifeState _x == "INCAPACITATED")) exitWith {
		[_x, _unitToPlay] spawn HumanExecutionsSelectFrom;
		};
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.4;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		sleep 0.4;
		if (!(animationState _unitToPlay == "IMS_Leg_Kick")) exitWith {};
		if (animationState _unitToPlay == "IMS_Leg_Kick") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		}else{
		[0] spawn {
		IMS_staminaColor = "#(argb,8,8,3)color(0.6,0.2,0.2,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.7,0.4,0.4,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.8,0.6,0.6,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.9,0.8,0.8,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(1,1,1,0.85)";
		};
		};
		};
		};

		SM_Skill_Crozius = {
		_unit = _this; 
		if (!(isNil { _unit getVariable "SM_CanUseSkill"})) exitWith {};
		_unit spawn {
		_this setVariable ["SM_CanUseSkill",1];
		sleep 120;
		systemChat "You are able to use skill once again";
		_this setVariable ["SM_CanUseSkill",nil];
		};
		[_unit, "SM_Crozius_Skill"] remoteExec ["switchMove", 0]; 
		_unit playActionNow "Disable_Gesture";
		_unit allowDamage false; 
		_unit setVariable ["canMakeAttack",1];
		_unit setVariable ["AI_CanTurn",0];
		_unit setVariable ["actualSwordBlock",1, true];
		[_unit, "thunderHammer_Draw", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.7;
		if (!(animationState _unit == "SM_Crozius_Skill")) exitWith {};
		[_unit, "crozius_skill", 150, 15] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, {
		  _pos = getPosATL _this; 
		  _light = "#lightpoint" createVehiclelocal _pos; 
		  _light setPosATL (_pos vectorAdd [0,0,10]); 
		  _light setLightDayLight true; 
		  _light setLightBrightness 300; 
		  _light setLightAmbient [0.05, 0.05, 0.1]; 
		  _light setlightcolor [1, 1, 2]; 
		_dustEffect = "#particlesource" createVehicleLocal getPosATL _this; 
		_dustEffect setParticleClass "HDustVTOL1"; 
		_dustEffect attachTo [_this,[0,0,0.1], "LeftLeg", true];
		_ripple = "#particlesource" createVehicleLocal getposatl _this;
		_ripple setParticleCircle [0,[0,0,0]];
		_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
		_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [30,1000], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _this];
		_ripple setDropInterval 0.1;
		_ripple spawn {sleep 1;deleteVehicle _this;};
		_blast = "#particlesource" createVehicleLocal getposatl _this;
		_blast setParticleCircle [0, [0, 0, 0]];
		_blast setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_blast setParticleParams [["\A3\data_f\koule", 1, 0, 1], "", "SpaceObject", 1,1,[0,0,0],[0,0,1],3,10,7.9,0,[50,1000],[[1, 1, 1, 0.1], [1, 1, 1, 0]], [1], 1, 0, "", "", _this];
		_blast setDropInterval 50;
		_blast spawn {sleep 1;deleteVehicle _this};
		_electra = "#particlesource" createVehicleLocal position _this; 
		_electra attachTo [_this,[0,0,1], "rightHand"];
		_electra setParticleCircle [0, [0, 0, 0]]; 
		_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
		_electra setDropInterval 0.01;  
		_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.08,0.08,0.08], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
		sleep 0.1; 
		_light setLightBrightness 0; 
		_lightning = "lightning2_F" createVehiclelocal [100,100,100];  
		_lightning setPosATL [_pos select 0,_pos select 1,(_pos select 2)]; 
		_lightning1 = "lightning1_F" createVehiclelocal [100,100,100];  
		_lightning1 setPosATL [_pos select 0,_pos select 1,(_pos select 2)]; 
		sleep 0.2;
		deletevehicle _lightning; 
		deletevehicle _lightning1; 
		deletevehicle _light; 
		deleteVehicle _electra;
		sleep 1.8;
		deleteVehicle _dustEffect;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		{
		if ((alive _x) and (side _x == side _unit) and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) then {
		[_x, {
		if ((isPlayer _this)) then {
		systemChat "You receaving healing + you are invincible for bullets for 10 seconds";
		player setVariable ["IMS_StaminaRegenerationParam",0.5]; 
		};
		_wbkFolDamage = [{
			_array = _this select 0;
			_unit = _array select 0;
			if (!(alive _unit_)) exitWith {_unit setVariable ["IMS_StaminaRegenerationParam",0.0015]; _unit allowDamage true;};
			_unit allowDamage false;
			_unit setDamage 0;
		}, 0.1, [_this]] call CBA_fnc_addPerFrameHandler;
		sleep 10;
		[_wbkFolDamage] call CBA_fnc_removePerFrameHandler;
		player setVariable ["IMS_StaminaRegenerationParam",0.0015]; 
		player allowDamage true;
		if ((isPlayer _this)) then {
		systemChat "Healing is over";
		};
		}] remoteExec ["spawn",_x,false];
		[_x, {
		_unit_afect = _this; 
		_bbr = boundingBoxReal vehicle _unit_afect; 
		_p1 = _bbr select 0; 
		_p2 = _bbr select 1; 
		_maxWidth = abs ((_p2 select 0) - (_p1 select 0)); 
		_maxLength = abs ((_p2 select 1) - (_p1 select 1)); 
		_maxHeight = abs ((_p2 select 2) - (_p1 select 2)); 
		 _e_static = "#particlesource" createVehicleLocal (getPos _unit_afect); 
		 _e_static setParticleCircle [0,[0,0,0]]; 
		 _e_static setParticleRandom [0.2,[_maxWidth/4,_maxLength/4,_maxHeight],[0,0,0],0,0.001,[0,0,0,1],1,0]; 
		 _e_static setParticleParams [["\A3\data_f\blesk1",1,0,1],"","SpaceObject",1,0.2,[0,0,0],[0,0,0],0,10,7.9,0,[0.002,0.002],[[1,2,1,1],[1,1,1,1]],[0.08], 1, 0, "", "", _unit_afect]; 
		 _e_static setDropInterval 0.01; 
		 [_e_static] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		};
		} forEach nearestObjects [_unit,["MAN"], 35];
		sleep 2;
		if (!(animationState _unit == "SM_Crozius_Skill")) exitWith {};
		[_unit, "melee_armed_idle"] remoteExec ["playMoveNow", 0];
		sleep 0.3;
		if (animationState _unit == "melee_armed_idle") then {
		[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];
		_unit setVariable ["canMakeAttack",0];
		_unit setVariable ["AI_CanTurn",0];
		_unit setVariable ["actualSwordBlock",0, true];
		};
		};


		SM_SkillUse = {
		_main = _this;
		if ((isNil {_main getVariable "SM_CanUseSkill"}) and !(isPlayer _main)) then {
		if (getText (configfile >> "CfgVehicles" >> typeOf _main >> "faction") == "TIOW_ChaosSpaceMarines") then { 
		[_main, selectRandom ["cm_phrase_1","cm_phrase_2","cm_phrase_3","cm_phrase_4","cm_phrase_5","cm_phrase_6","cm_phrase_7"], 100] call CBA_fnc_GlobalSay3D;
		}else{ 
		[_main, selectRandom ["sm_phrase_1","sm_phrase_2","sm_phrase_3","sm_phrase_4"], 100] call CBA_fnc_GlobalSay3D;
		};
		};
		if ((hmd _main in IMS_Sheilds)) exitWith { 
		_main spawn SM_Skill_Shield;
		};
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_SM_SkillType");  
		if (_executionTypeOfWeap == "ThunderHammer") exitWith { 
		_main spawn SM_Skill_ThunderHammer;
		};
		if ((_executionTypeOfWeap == "OneHandedToTwoHanded")) exitWith {
		_main spawn SM_Skill_OneHandedToTwohanded;
		};
		if ((_executionTypeOfWeap == "FistsPowerUp")) exitWith { 
		_main spawn SM_Skill_Fists;
		};
		if ((_executionTypeOfWeap == "Crozius")) exitWith { 
		_main spawn SM_Skill_Crozius;
		};
		_unitToPlay = _main;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {
		_myNearestEnemy = _unitToPlay findNearestEnemy _unitToPlay;
		_unitToPlay reveal [_myNearestEnemy, 4];
		if (!(isPlayer _myNearestEnemy) and ((_unitToPlay distance _myNearestEnemy) <= 5)) then {
		[_myNearestEnemy, 2, _unitToPlay] remoteExec ["IMS_MeleeFunction", _myNearestEnemy];
		};
		[_unitToPlay, "SM_Fists_Attack_2"] remoteExec ["switchMove", 0];
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		sleep 0.1;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, [12 * (sin (getdir _unitToPlay )), 12 * (cos (getdir _unitToPlay)), 1.3]] remoteExec ["setvelocity", _unitToPlay]; 
		[_unitToPlay, selectRandom ["powerSword_swing_1","powerSword_swing_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndEquip = selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"];
		playSound _rndEquip;
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",1];
		{ 
		if ((alive _x) and !(_x == _unitToPlay) and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_Fists_Attack_2") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{

		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		}; 

		if ((_x getVariable "actualSwordBlock" == 1) and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay,1,_x] spawn concentrationToZero;
		_unitToPlay setDamage (((damage _this) + 0.05) min 0.95);
		};
		if ((animationState _x == "starWars_lightsaber_blockPursuit") and (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_x spawn {
		if ((damage _this) < 0.2) exitWith {};
		[_this, [_this vectorModelToWorld [0,-200,0], _this selectionPosition "head"]] remoteExec ["addForce", _this];
		sleep 4;
		if (!(alive _this)) exitWith {};
		[_this, "melee_armed_idle"] remoteExec ["switchMove", 0];
		[_this, false] remoteExec ["setUnconscious", _this]; 
		_this setVariable ["canMakeAttack",0,true];
		_this setVariable ["actualSwordBlock",0, true];
		};
		};
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 2, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		[_x, false] remoteExec ["setUnconscious", _x]; 
		[_x, "melee_armed_idle"] remoteExec ["switchMove", 0];
		sleep 0.01;
		[_unitToPlay, _x] spawn SM_Execution_StompOnHead;
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
		_rndAnim = selectRandom ["lightsaber_death_6","lightsaber_death_8","IMS_SM_NormalHum_Die_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		if (_rndAnim == "IMS_SM_NormalHum_Die_1") then {
		[_x, "dobi_bones", 120, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, selectRandom ["decapetadet_sound_1","decapetadet_sound_2"], 80, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;  
		sleep 0.5;      
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		}else{
		_x setDir (_x getDir _unitToPlay);
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, [-6 * (sin (getdir _x )), -6 * (cos (getdir _x)), 3.5]] remoteExec ["setvelocity", _x];
		};
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_ExecutionType");  
		if (((damage _x) >= 0.4) and (_executionTypeOfWeap == "Chainsword")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_ChainSaw;
		};
		if (((damage _x) >= 0.4) and (_executionTypeOfWeap == "OneHandedBasic")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_Sword;
		};
		if (((damage _x) >= 0.4) and (_executionTypeOfWeap == "StompOnAHead")) exitWith {
		[_unitToPlay, _x] spawn SM_Execution_StompOnHead;
		};
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.5];
		sleep 0.4;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0];
		_unitToPlay setVariable ["canMakeAttack",0];
		sleep 1;
		if (!(animationState _unitToPlay == "SM_Fists_Attack_2")) exitWith {};
		[_unitToPlay, "melee_armed_idle"] remoteExec ["playMoveNow", _unitToPlay];
		sleep 0.3;
		if (animationState _unitToPlay == "melee_armed_idle") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", _unitToPlay];
		};
		};
		};

		legPunchSpaceMarine = {
		_unitToPlay = _this select 0;
		if (!(animationState _unitToPlay == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unitToPlay == "Star_Wars_KaaTirs_executionOnCreature_jedi") and (handgunWeapon _unitToPlay in IMS_Melee_Weapons) and (_unitToPlay getVariable "canMakeAttack" == 0) and !(animationState _unitToPlay == "push_backwards") and !(animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _unitToPlay == "anim_hardLand") and !(animationState _unitToPlay == "IMS_Leg_Kick") and !(animationState _unitToPlay == "anim_jump_FlipBackward") and !(animationState _unitToPlay == "starWars_lightSaber_combo_1")) then {
		if ((_unitToPlay getVariable "concentrationParam" > 0.2) ) then {
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_unitToPlay] call concentrationMinusShoulderSM;

		{ 
		_unitToPlay reveal [_x, 4]; 
		} forEach nearestObjects [_unitToPlay, ["Man"], 100]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "SM_ShoulderKick"] remoteExec ["switchMove", 0];
		{
		if ((alive _x) and !(isPlayer _x) and (handgunWeapon _x in IMS_Melee_Weapons) and (typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(lifeState _x == "INCAPACITATED")) then {
		if (((_x worldToModel (_unitToPlay modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_x, [9, 9, 1.5], "starWars_landRoll"] remoteExec ["strafeFwrd_SW", _x, false];
		}else{
		[_x, [-9, -9, 1.5], "starWars_landRoll_b"] remoteExec ["strafeFwrd_SW", _x, false];
		};
		};
		} forEach nearestObjects [_unitToPlay, ["Man"], 4.9];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		[_unitToPlay, "leg_punch", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_unitToPlay setVariable ["AI_CanTurn",1, true];
		[_unitToPlay, [9.5 * (sin (getdir _unitToPlay )), 9.5 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.15;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		[_unitToPlay, [9 * (sin (getdir _unitToPlay )), 9 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") and (alive _x) and !(_x == _unitToPlay) and !(animationState _x == "starWars_lightsaber_blockPursuit") and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		}; 
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_ImperialKnight_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		if (((damage _x) >= 0.4)) exitWith {
		[_unitToPlay, _x] spawn SM_Execution;
		};
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		{ 
		if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) or (animationState _x == "starWars_lightsaber_blockPursuit")) exitWith {};
		if ((alive _x) and !(_x == _unitToPlay) and !(animationState _x == "starWars_lightsaber_blockPursuit") and !(animationState _x == "Star_Wars_KaaTirs_idle") and !(animationState _x == "Star_Wars_KaaTirs_RunF") and (alive _unitToPlay) and (simulationEnabled _unitToPlay)  and (animationState _unitToPlay == "SM_ShoulderKick") and !(animationState _x == "starWars_landRoll") and !(animationState _x == "starWars_landRoll_b") and !(animationState _x == "Star_Wars_KaaTirs_dodge")) then {
		_isBehindGeometry = lineIntersects [ eyePos _unitToPlay, eyePos _x, _unitToPlay, _x];
		if (_isBehindGeometry) then {
		}else{
		if (((_unitToPlay worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) then 
		{}else{
		if (!(WBK_IMSCanHitAllies) and (side _unitToPlay == side _x)) exitWith {  
		[_x, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_x];  
		}; 

		_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "WBK_ImperialKnight_1")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_unitToPlay, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unitToPlay, 228, _x] remoteExec ["concentrationToZero", _unitToPlay, false];  
		};
		if ((lifeState _x == "INCAPACITATED")) exitWith {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if (!(typeOf _x isKindOf "TIOWSpaceMarine_Base") and !(typeOf _x isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		if (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr') then {
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1"];
		[_x, _rndAnim] remoteExec ["switchMove", 0];
		[_x, [-5 * (sin (getdir _x )), -5 * (cos (getdir _x)), 3]] remoteExec ["setvelocity", _x];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		};
		if (((damage _x) >= 0.4)) exitWith {
		[_unitToPlay, _x] spawn SM_Execution;
		};
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, 228, _unitToPlay] remoteExec ["concentrationToZero", _x, false];  
		};
		};
		};
		} forEach nearestObjects [getPosATL  _unitToPlay, ["MAN"], 2.1];
		sleep 0.3;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		sleep 0.2;
		if (!(animationState _unitToPlay == "SM_ShoulderKick")) exitWith {};
		if (animationState _unitToPlay == "SM_ShoulderKick") then {
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		};
		}else{
		[0] spawn {
		IMS_staminaColor = "#(argb,8,8,3)color(0.6,0.2,0.2,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.7,0.4,0.4,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.8,0.6,0.6,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(0.9,0.8,0.8,0.85)";
		sleep 0.1;
		IMS_staminaColor = "#(argb,8,8,3)color(1,1,1,0.85)";
		};
		};
		};
		};



		createDeathS_Binocular = {
		_unit = _this select 0;
		if (
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_victim") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_creature") and 
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_creature") and
		!(animationState _unit == "Star_Wars_KaaTirs_stanned") and
		!(animationState _unit == "Star_Wars_executionOnHuman_2_main") and 
		!(animationState _unit == "Star_Wars_executionOnHuman_2_victim") 
		) then {
		_killer = _this select 1;

		if ((handGunWeapon _killer in IMS_LightSabers) and (handGunWeapon _unit in IMS_LightSabers)) exitWith {[_unit,_killer] spawn SW_CountToKillScript;};

		_value = getNumber (configFile >> "CfgWeapons" >> binocular _killer >> "IMS_Melee_Param_Damage");  
		if (((damage _unit) >= 0.4) or (_value >= 0.8)) then {
		// _unit setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = selectRandom ["lightsaber_death_1","lightsaber_death_2","lightsaber_death_3","lightsaber_death_4","lightsaber_death_5","lightsaber_death_6","lightsaber_death_7","flamethrower_burning_6","flamethrower_burning_7","lightsaber_death_8","lightsaber_death_9","lightsaber_death_10","lightsaber_death_11","lightsaber_death_12","lightsaber_death_13","lightsaber_death_14","lightsaber_death_15","lightsaber_death_16","lightsaber_death_17","lightsaber_death_18","lightsaber_death_19","lightsaber_death_20","lightsaber_death_21"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		}else{
		_unitToPlay = _unit;
		if (animationState _unitToPlay == "starWars_lightsaber_hit_2") exitWith {};
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		[_unitToPlay, "starWars_lightsaber_hit_2"] remoteExec ["switchMove", 0];
		_unitToPlay setVariable ["AI_CanTurn",1, true]; 
		_unitToPlay setVariable ["canMakeAttack",1, true]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true]; 
		_value = getNumber (configFile >> "CfgWeapons" >> binocular _killer >> "IMS_Melee_Param_Damage");  
		_unitToPlay setDamage (((damage _unitToPlay) + _value) min 0.95); 
		sleep 0.1; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		[_unitToPlay, [-9 * (sin (getdir _unitToPlay )), -9 * (cos (getdir _unitToPlay)), 1.2]] remoteExec ["setvelocity", _unitToPlay];
		sleep 0.7; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",0, true]; 
		_unitToPlay setVariable ["canMakeAttack",0, true]; 
		sleep 0.3; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		if ((animationState _unitToPlay == "starWars_lightsaber_hit_2") and !(animationState _unitToPlay == "starWars_force_landRoll") and !(animationState _unitToPlay == "starWars_force_landRoll_b") and !(animationState _unitToPlay == "push_backwards")) then { 
		_unitToPlay allowDamage true;
		if (handgunWeapon _unitToPlay in IMS_Melee_Weapons) then {
		if (!(isNil {_unitToPlay getVariable "AI_IsPlagued"})) exitWith {[_unitToPlay, "plagued_armed_idle"] remoteExec ["switchMove", 0, true];};
		[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];
		}else{
		if ((uniform _unitToPlay == "Zombie_BioHazard") or (uniform _unitToPlay == "Zombie3_BioHazard")) then {
		[_unitToPlay, "Star_Wars_KaaTirs_idle"] remoteExec ["switchMove", 0];
		}else{
		[_unitToPlay, ""] remoteExec ["switchMove", 0];
		};
		};
		}; 
		};
		};
		};


		};
		
		
		
		
		
		
		
		
		
		
		
		
		kickButtKill = {
		_unit = _this select 0;
		_killer = _this select 1;
		if !(isNil {_unit getVariable "IMS_EventHandler_Hit"}) then {
		_func = _unit getVariable "IMS_EventHandler_Hit";
		[_unit,_killer,currentWeapon _killer] spawn _func;
		};
		if (!(WBK_IMSCanHitAllies) and (side _unit == side _killer)) exitWith { 
		[_unit, "WBK_Kulak_HitNonFists"] remoteExec ["playActionNow",_unit]; 
		_rndSnd = ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		if ((lifeState _unit == "INCAPACITATED") and (IMS_ISBluntWeaponKiils)) exitWith {};
		if ((_killer isKindOf "OPTRE_FC_Elite_Undersuit") or (_killer isKindOf "OPTRE_Spartan2_Soldier_Base")) exitWith {
		_rndSnd = selectRandom ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"];
		[_unit, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if ((_unit isKindOf "OPTRE_FC_Elite_Undersuit") or (_unit isKindOf "OPTRE_Spartan2_Soldier_Base")) exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		if (_killer isKindOf "OPTRE_FC_Elite_Undersuit") exitWith {
		[_killer, _unit] spawn HALOSPECIFIC_Elite_Execution;
		};
		[_killer, _unit] spawn HALOSPECIFIC_Spartan_Execution;
		}else{
		if (WBK_IMSKickButtOneShot) exitWith {
		if (_killer isKindOf "OPTRE_FC_Elite_Undersuit") exitWith {
		[_killer, _unit] spawn HALOSPECIFIC_Elite_Execution_1;
		};
		[_killer, _unit] spawn HALOSPECIFIC_Spartan_Execution_1;
		};
		_sas = (_killer getDir _unit); 
		[_unit,  [6 * (sin (_sas)), 6 * (cos (_sas)), 2]] remoteExec ["setvelocity", _unit];
		[_unit, 0.41, _killer] spawn WBK_CreateDamage;
		};
		};
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		uisleep 0.05; 
		[_unit, [_killer vectorModelToWorld [0,1000,100], _unit selectionPosition "head"]] remoteExec ["addForce", _unit]; 
		};
		if ((getText (configfile >> 'CfgVehicles' >> typeOf _unit >> 'moves') == 'CfgMovesMaleSdr') and (((WBK_IMSKickButtOneShot) and (isPlayer _killer) and !(isPlayer _unit)) or (animationState _unit == "starWars_lightsaber_hit_2") or (animationState _unit == "starWars_lightsaber_hit_rifle_b") or (animationState _unit == "starWars_lightsaber_hit_rifle_2") or (animationState _unit == "starWars_lightsaber_hit_2"))) exitWith {
		_unit setDamage 0;
		if ((currentWeapon _killer == handGunWeapon _killer) and !(handGunWeapon _killer in IMS_Melee_Weapons) and !(currentWeapon _killer == "")) exitWith {
		[[_unit, _killer], Human_Execution_StompOnHead_WITHPISTOL] remoteExec ["spawn",_killer]; 
		};
		if (
		(handGunWeapon _killer in IMS_Melee_Weapons) and 
		!(handGunWeapon _killer in IMS_Melee_Heavy) and 
		!(handGunWeapon _killer in IMS_Melee_TwoHandedWeapons) and 
		!(handGunWeapon _killer in IMS_Melee_Alebard) and 
		!(handGunWeapon _killer in IMS_Melee_RapiraType) and 
		!(handGunWeapon _killer in IMS_Melee_BrassKnucklesType) and 
		!(handGunWeapon _killer in IMS_Melee_KatanaType) and 
		!(handGunWeapon _killer in IMS_LightSabers)
		) exitWith {
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_ExecutionType");  
		if (_executionTypeOfWeap == "Axe") exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[[_killer, _unit], WBK_RifleButtStock_Sync_Blunt_1] remoteExec ["spawn",_killer]; 
		}else{
		[[_unit, _killer], WBK_IMS_AxeStealthKill] remoteExec ["spawn",_killer]; 
		};
		};
		if (_executionTypeOfWeap == "Blunt") exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[[_killer, _unit], WBK_RifleButtStock_Sync_Blunt_1] remoteExec ["spawn",_killer]; 
		}else{
		[[_killer, _unit], WBK_RifleButtStock_Sync_Blunt_2] remoteExec ["spawn",_killer]; 
		};
		};
		if (_executionTypeOfWeap == "Knife") exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[[_killer, _unit], WBK_RifleButtStock_Sync_WithKnifus_2] remoteExec ["spawn",_killer]; 
		}else{
		[[_killer, _unit], selectRandom [WBK_RifleButtStock_Sync_WithKnifus_1,WBK_RifleButtStock_Sync_WithKnifus_5]] remoteExec ["spawn",_killer]; 
		};
		};
		if (_executionTypeOfWeap == "ReversedKnife") exitWith {
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[[_killer, _unit], WBK_RifleButtStock_Sync_WithKnifus_3] remoteExec ["spawn",_killer]; 
		}else{
		[[_killer, _unit], WBK_RifleButtStock_Sync_WithKnifus_4] remoteExec ["spawn",_killer]; 
		};
		};
		if (!(isPlayer _unit) and (currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {
		[[_killer, _unit], selectRandom [WBK_RifleButtStock_Sync_OnPlayer_1,WBK_RifleButtStock_Sync_OnPlayer_2,WBK_RifleButtStock_Sync_1,WBK_RifleButtStock_Sync_2]] remoteExec ["spawn",_killer]; 
		};
		[[_killer, _unit], selectRandom [WBK_RifleButtStock_Sync_OnPlayer_1,WBK_RifleButtStock_Sync_OnPlayer_2]] remoteExec ["spawn",_killer];
		};
		if (!(isPlayer _unit) and (currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {
		[[_killer, _unit], selectRandom [WBK_RifleButtStock_Sync_OnPlayer_1,WBK_RifleButtStock_Sync_OnPlayer_2,WBK_RifleButtStock_Sync_1,WBK_RifleButtStock_Sync_2]] remoteExec ["spawn",_killer]; 
		};
		[[_killer, _unit], selectRandom [WBK_RifleButtStock_Sync_OnPlayer_1,WBK_RifleButtStock_Sync_OnPlayer_2]] remoteExec ["spawn",_killer]; 
		};
		if (!(isNil {_unit getVariable "WBK_AI_ISZombie"})) exitWith {
		[_unit,_killer,0.3,"Fists"] spawn WBK_ZombiesProcessDamage;
		_rndSnd = ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		[_unit, _killer] spawn WBK_CreateMeleeHitAnim;
		[_unit, 0.1, _killer] spawn WBK_CreateDamage;
		_rndSnd = ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"] call BIS_fnc_SelectRandom;
		[_unit, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_Blunt_2 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_Blunt_front_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Blunt_front_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Blunt_front_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Blunt_front_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.5,0]];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_front_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, "dobi_bones", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_8","New_Death_9"], 30, 0.8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_front_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		};
		[_main, "bat_type_swing_1", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_front_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		};
		[_victim, selectRandom ["dobi_blunt_1","dobi_blunt_2","dobi_blunt_3"], 60, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, selectRandom ["dobi_blood_1","dobi_blood_2"], 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		detach _victim;
		sleep 1.2;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_front_main")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_Blunt_1 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_Rifle_Sync_Blunt_back_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Blunt_back_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Blunt_back_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Blunt_back_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0.8,1,0]];  
		_victim setDamage 0;
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.15;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		_executionTypeOfWeap = getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_ExecutionType");  
		if (_executionTypeOfWeap == "Axe") then {
		[_victim, selectRandom ["sword_hit_1","sword_hit_2","sword_hit_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		}else{
		[_victim, selectRandom ["dobi_blunt_1","dobi_blunt_2","dobi_blunt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		[_victim, selectRandom ["New_Death_2","New_Death_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.4;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		sleep 0.45;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Blunt_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		_main enableAI "ALL";
		detach _victim;
		sleep 0.5;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_back_main")) exitWith {}; 
		[_main, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Blunt_back_main")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		IMS_KnifeNewExecution_1 = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_KnifeExec_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_KnifeExec_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_KnifeExec_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_KnifeExec_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0.2,1.8,0]];  
		[_victim, 180] remoteExec ["setDir", 0];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.15;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main") or !(animationState _victim == "IMS_KnifeExec_victim")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};
		[_main, selectRandom ["knife_empty_hit_1","knife_empty_hit_2","knife_empty_hit_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 20, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, selectRandom ["New_Death_2","New_Death_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main") or !(animationState _victim == "IMS_KnifeExec_victim")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};
		sleep 0.45;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main") or !(animationState _victim == "IMS_KnifeExec_victim")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main enableAI "ALL";
		detach _victim;
		sleep 0.6;
		_main spawn {
		if (!(alive _this) or !(animationState _this == "IMS_KnifeExec_main")) exitWith {}; 
		[_this, "melee_armed_runB"] remoteExec ["playMoveNow", 0, false];
		_this setVariable ["canMakeAttack",0];
		_this setVariable ["AI_CanTurn",0];
		};
		sleep 0.4;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		
		
		
		
		
		IMS_KnifeNewExecution_2 = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_KnifeExec_main_1"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_KnifeExec_main_1"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_KnifeExec_victim_1"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_KnifeExec_victim_1"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[-0.2,2.2,0]];  
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 180] remoteExec ["setDir", 0];
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.3;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main_1") or !(animationState _victim == "IMS_KnifeExec_victim_1")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 20, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, selectRandom ["New_Death_1","New_Death_4","New_Death_3"], 10, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main_1") or !(animationState _victim == "IMS_KnifeExec_victim_1")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 20, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main_1") or !(animationState _victim == "IMS_KnifeExec_victim_1")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1;
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main_1") or !(animationState _victim == "IMS_KnifeExec_victim_1")) exitWith {
		detach _victim;
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		_main enableAI "ALL";
		detach _victim;
		_victim spawn {
		sleep 0.4;
		[_this, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		if (!(alive _main) or !(animationState _main == "IMS_KnifeExec_main_1")) exitWith {}; 
		[_main, "melee_armed_runB"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_WithKnifus_5 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_Rifle_Sync_Knife_front_main_1"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Knife_front_main_1"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Knife_front_victim_1"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Knife_front_victim_1"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[-0.2,2.2,0]];  
		_victim setDamage 0;
		[_victim, 180] remoteExec ["setDir", 0];
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.3;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main_1") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim_1")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["sword_hit_3","sword_hit_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_1","New_Death_4","New_Death_3"], 10, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main_1") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim_1")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["sword_hit_5","sword_hit_6"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main_1") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim_1")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main_1") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim_1")) exitWith {
		detach _victim;  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		_main enableAI "ALL";
		detach _victim;
		_victim spawn {
		sleep 0.4;
		[_this, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main_1")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		[_main, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_WithKnifus_4 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_Rifle_Sync_Knife_front_reversed_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Knife_front_reversed_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Knife_front_reversed_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Knife_front_reversed_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[1.4,0.76,0]];  
		_victim setDamage 0;
		[_victim, 180] remoteExec ["setDir", 0];
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.3;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_reversed_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["sword_hit_3","sword_hit_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_1","New_Death_4","New_Death_3"], 10, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_reversed_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["sword_hit_5","sword_hit_6"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_reversed_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.8;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_reversed_victim")) exitWith {
		detach _victim;  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		_main enableAI "ALL";
		detach _victim;
		_victim spawn {
		sleep 0.6;
		[_this, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_reversed_main")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		[_main, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_WithKnifus_3 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_Rifle_Sync_Knife_back_reversed_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Knife_back_reversed_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Knife_back_reversed_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Knife_back_reversed_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[-0.3,1.35,0]];  
		_victim setDamage 0;
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.6;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_reversed_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_7","New_Death_9","New_Death_5"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1.2;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_reversed_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["sword_hit_6","sword_hit_5"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["dobi_blood_1","dobi_blood_2"], 10, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.7;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_reversed_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_reversed_victim")) exitWith {
		detach _victim;  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main enableAI "ALL";
		sleep 0.5;
		detach _victim;
		sleep 0.5;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_reversed_main")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		[_main, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_WithKnifus_2 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, _victim] remoteExecCall ["disableCollisionWith", 0, _main];
		[_victim, _main] remoteExecCall ["disableCollisionWith", 0, _victim];
		[_main, "IMS_Rifle_Sync_Knife_back_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Knife_back_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Knife_back_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Knife_back_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];  
		_victim setDamage 0;
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.4;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["melee_swing_equipment_3","melee_swing_equipment_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_2","New_Death_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.15;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		sleep 0.45;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_back_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		_main enableAI "ALL";
		sleep 0.3;
		detach _victim;
		[_victim, [4, 0, 1.5]] remoteExec ["setVelocityModelSpace", _victim];
		sleep 0.7;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_back_main")) exitWith {}; 
		[_main, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		[_main, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_WithKnifus_1 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_Knife_front_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Knife_front_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Knife_front_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Knife_front_victim"] remoteExec ["switchMove", 0, true];
		[_main, "generic_in", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0.2,1.7,0]];  
		[_victim, 180] remoteExec ["setDir", 0];
		_victim setDamage 0;
		[_victim, "dead"] remoteExec ["setMimic", 0];
		sleep 0.15;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["knife_empty_hit_1","knife_empty_hit_2","knife_empty_hit_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_hit_2","sword_hit_5"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_2","New_Death_4"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim")) exitWith {
		detach _victim;
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};
		sleep 0.45;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Knife_front_main") or !(animationState _victim == "IMS_Rifle_Sync_Knife_front_victim")) exitWith {
		detach _victim;
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_main enableAI "ALL";
		detach _victim;
		sleep 0.6;
		_main spawn {
		if (!(alive _this) or !(animationState _this == "IMS_Rifle_Sync_Knife_front_main")) exitWith {}; 
		[_this, "AmovPercMstpSrasWrflDnon"] remoteExec ["playMoveNow", 0, false];
		[_this, "generic_out", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_this setVariable ["canMakeAttack",0];
		_this setVariable ["AI_CanTurn",0];
		};
		sleep 0.4;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		
		
		
		
		
		Human_Execution_StompOnHead_WITHPISTOL = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "SM_Fists_Execution_main"] remoteExec ["switchMove", 0, false];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "SM_Fists_Execution_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		if (!(alive _main) or !(animationState _main == "SM_Fists_Execution_main")) exitWith {detach _victim;};
		[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 100, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.8;
		if (!(alive _main) or !(animationState _main == "SM_Fists_Execution_main")) exitWith {detach _victim;};
		[_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.8;
		if (!(alive _main) or !(animationState _main == "SM_Fists_Execution_main")) exitWith {detach _victim;};
		detach _victim;
		[_main, "AmovPercMstpSrasWpstDnon_SaluteOut_end"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_OnPlayer_2 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true]; 
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_Player_2_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Player_2_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Player_2_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Player_2_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.6,0]];  
		[_victim, 180] remoteExec ["setDir", 0];
		_victim setDamage 0;
		sleep 0.05;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_2_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_2_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, "dead"] remoteExec ["setMimic", 0];
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["blunt_hit_2","blunt_hit_4"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_2_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_2_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true]; 
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		};
		[_main, selectRandom ["engaging1","engaging2","engaging3","engaging4","engaging5"], 30] call CBA_fnc_GlobalSay3D;
		sleep 0.45;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_2_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_2_victim")) exitWith {
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		};
		[_victim, selectRandom ["New_Death_8","New_Death_9","New_Death_7"], 70, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "dobi_CriticalHit", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["dobi_blunt_1","dobi_blunt_2","dobi_blunt_3"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.5;
		_main enableAI "ALL";
		detach _victim;
		[_victim, "dobi_fall_2", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_2_main")) exitWith {}; 
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_OnPlayer_1 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_Player_1_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_Player_1_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_Player_1_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_Player_1_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim setVariable ["AI_CanTurn",1,true];
		_victim setVariable ["canMakeAttack",1,true];
		_victim attachTo [_main,[0.05,1.9,0]];  
		[_victim, 180] remoteExec ["setDir", 0];
		_victim setDamage 0;
		[_victim, "dobi_fall", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["blunt_hit_2","blunt_hit_4"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.1;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true]; 
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, "dead"] remoteExec ["setMimic", 0];
		[_victim, selectRandom ["New_Death_8","New_Death_9","New_Death_7"], 70, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 50, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, [4 * (sin (getdir _main )), 4 * (cos (getdir _main)), 1.5]] remoteExec ["setvelocity", _main];
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim]; 
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];   
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		_victim attachTo [_main,[0.05,1.8,0]];
		sleep 0.7;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true]; 
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main") or !(animationState _victim == "IMS_Rifle_Sync_Player_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		_victim setVariable ["AI_CanTurn",0,true];
		_victim setVariable ["canMakeAttack",0,true]; 
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		[_victim, "dobi_CriticalHit", 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["dobi_blunt_1","dobi_blunt_2","dobi_blunt_3"], 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		_main setVariable ["concentrationParam",0, true];
		sleep 0.5;
		detach _victim;
		_main enableAI "ALL";
		sleep 0.5;
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_Player_1_main")) exitWith {}; 
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_1 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_1_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_1_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_1_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_1_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};  
		[_main, selectRandom ["player_pain_5","player_pain_7"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, selectRandom ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.35;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, "generis_hitworld", 20, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_main, selectRandom ["start_bayonetCharge_2","start_bayonetCharge_1"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.55;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.8;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, selectRandom ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["player_pain_6","player_pain_5","player_pain_7"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, "dead"] remoteExec ["setMimic", 0, true];
		[_victim, selectRandom ["blunt_hit_2","blunt_hit_4"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_8","New_Death_9","New_Death_7"], 70, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["engaging1","engaging2","engaging3","engaging4","engaging5"], 70] call CBA_fnc_GlobalSay3D;
		sleep 0.7;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, selectRandom ["bat_type_swing_1","bat_type_swing_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main") or !(animationState _victim == "IMS_Rifle_Sync_1_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom["New_Death_1","New_Death_2","New_Death_3","New_Death_4","New_Death_5","New_Death_6","New_Death_10","dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4","dobi_scream_5","dobi_scream_6"], 80, 15] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "dobi_CriticalHit", 10, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.1;
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.4;
		_main setVariable ["concentrationParam",0, true];
		[_victim, "dobi_fall", 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_victim attachTo [_main,[-0.3,0,0]];
		sleep 0.5;
		detach _victim;
		_main enableAI "ALL";
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_1_main")) exitWith {}; 
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_RifleButtStock_Sync_2 = {
		_main = _this select 0;
		_victim = _this select 1;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "IMS_Rifle_Sync_2_main"] remoteExec ["switchMove", 0, false];
		[_main, "IMS_Rifle_Sync_2_main"] remoteExec ["playMoveNow", 0, false];
		[_victim, "IMS_Rifle_Sync_2_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "IMS_Rifle_Sync_2_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};  
		[_victim, selectRandom ["player_pain_5","player_pain_7"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "generis_hitworld", 20, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["kick_butt_hit_1","kick_butt_hit_2","kick_butt_hit_3"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.35;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["start_bayonetCharge_2","start_bayonetCharge_1"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.55;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		};  
		[_main, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.8;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.2;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, selectRandom ["boxing_hit_00","boxing_hit_01","boxing_hit_02"], 45, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, selectRandom ["player_pain_6","player_pain_5","player_pain_7"], 30, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_main, selectRandom ["kick_butt_1","kick_butt_2","kick_butt_3"], 40, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,1.5,0]];
		detach _victim;
		[_victim, 228, _main] remoteExec ["concentrationToZero", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		}; 
		[_victim, "dead"] remoteExec ["setMimic", 0, true];
		[_victim, selectRandom ["blunt_hit_2","blunt_hit_4"], 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["New_Death_8","New_Death_9","New_Death_7"], 70, 1] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];  
		}; 
		[_victim, "dobi_fall", 40, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_main, selectRandom ["engaging1","engaging2","engaging3","engaging4","engaging5"], 70] call CBA_fnc_GlobalSay3D;
		sleep 0.5;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];  
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		}; 
		[_victim, selectRandom ["bat_type_swing_1","bat_type_swing_2"], 50, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.3;
		if (!(alive _victim) or !(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main") or !(animationState _victim == "IMS_Rifle_Sync_2_victim")) exitWith {
		_victim attachTo [_main,[0,0,0]];
		detach _victim;
		[_victim, true] remoteExec ["setUnconscious", _victim];   
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["switchMove", 0, false];
		[_main, "starWars_lightsaber_hit_rifle_2"] remoteExec ["playMoveNow", 0, false];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		_main enableAI "ALL";
		sleep 0.5;
		[_victim, false] remoteExec ["setUnconscious", _victim];
		};  
		[_victim, selectRandom["New_Death_1","New_Death_2","New_Death_3","New_Death_4","New_Death_5","New_Death_6","New_Death_10"], 80, 15] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "dobi_CriticalHit", 70, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.1;
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0];
		sleep 0.4;
		_main setVariable ["concentrationParam",0, true];
		sleep 0.2;
		detach _victim;
		_main enableAI "ALL";
		if (!(alive _main) or !(animationState _main == "IMS_Rifle_Sync_2_main")) exitWith {}; 
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_CreateCrawlingAway = {
		_unit = _this select 0;
		_killer = _this select 1;
		if (!(alive _unit) or (lifeState _unit == "INCAPACITATED") or (_unit isKindOf "TIOWSpaceMarine_Base")) exitWith {};
		[_killer, "start_bayonetCharge_1", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_unit, "dead"] remoteExec ["setMimic", 0];
		[_unit, "dobi_fall_2", 30, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_unit, selectRandom ["New_Death_5","New_Death_7","New_Death_6","New_Death_9"], 60, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		if (((_unit worldToModel (_killer modelToWorld [0, 0, 0])) select 1) > 0) then {
		[_unit, "IMS_Die_Spec_1"] remoteExec ["switchMove", 0];
		[_unit, [-4 * (sin (getdir _unit )), -4 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, "IMS_Die_Spec_2"] remoteExec ["switchMove", 0];
		[_unit, [4 * (sin (getdir _unit )), 4 * (cos (getdir _unit)), 1.35]] remoteExec ["setvelocity", _unit];
		};
		sleep 0.3;
		if (!(alive _unit)) exitWith {};
		_unit setDamage 0.7;
		[_unit, true] remoteExec ["setUnconscious", _unit];
		sleep 8;
		if (!(alive _unit)) exitWith {[_unit, "IMS_Crawling_Away_Stop"] remoteExec ["switchMove", 0];[_unit, "dobi_fall", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; };
		[_unit, "ALL"] remoteExec ["disableAI", 0];
		[_unit, "IMS_Crawling_Away_Start"] remoteExec ["switchMove", 0];
		sleep 1.4;
		if (!(alive _unit)) exitWith {[_unit, "IMS_Crawling_Away_Stop"] remoteExec ["switchMove", 0];[_unit, "dobi_fall", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; };
		[_unit, "IMS_Crawling_Away"] remoteExec ["switchMove", 0];
		_unit spawn {
		sleep (8 + random 20);
		if (!(alive _this)) exitWith {};
		// _this setDamage 1;
		[_this, true] call ace_medical_fnc_setUnconscious;
		[_this, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		waitUntil {sleep 0.5; !(alive _unit)};
		[_unit, "IMS_Crawling_Away_Stop"] remoteExec ["switchMove", 0];
		[_unit, "dobi_fall", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		
		
		
		
		
		createDeathS = {
		_unit = _this select 0;
		if (
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_victim") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") and 
		!(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_creature") and 
		!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_creature") and
		!(animationState _unit == "Star_Wars_KaaTirs_stanned") and
		!(animationState _unit == "Star_Wars_executionOnHuman_2_main") and 
		!(animationState _unit == "Star_Wars_executionOnHuman_2_victim") 
		) then {
		_killer = _this select 1;


		_hitPass = getText (configFile >> "CfgWeapons" >> currentWeapon _killer >> "IMS_WeaponEventHandler_Hit_Pass");  
		if !(_hitPass == "") then {
		_code = compile _hitPass;  
		[_unit, _killer, currentWeapon _unit] spawn _code;
		};

		_hitNoPass = getText (configFile >> "CfgWeapons" >> handGunWeapon _killer >> "IMS_WeaponEventHandler_Hit_NoPass");  
		if !(_hitNoPass == "") exitWith {
		_code = compile _hitNoPass;  
		[_unit, _killer, currentWeapon _unit] spawn _code;
		};



		/////WBK Zombies
		if (!(isNil {_unit getVariable "WBK_AI_ISZombie"})) exitWith {
		[_unit,_killer,((getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage")) * IMS_DamageMulti), handGunWeapon _killer] remoteExec ["WBK_ZombiesProcessDamage", _unit]; 
		};
		////////Gardenstate
		if (!(isNil {_unit getVariable "AI_IsOgr"})) exitWith {[_unit, _killer] spawn ogrSetDamage;};
		/////////LightSabers
		if ((handGunWeapon _killer in IMS_LightSabers) and (handGunWeapon _unit in IMS_LightSabers)) exitWith {[_unit,_killer] spawn SW_CountToKillScript;};

		////////Orks
		if ((typeOf _unit isKindOf "WBK_MeleeOrks_1")) exitWith {
		[_unit,_killer] remoteExec ["WBK_OrksDamage_BIG", _unit, false];  
		};
		////////Space Marine Fists
		if ((handgunWeapon _killer in IMS_Melee_Fists_SPACEMARINES) and (typeOf _killer isKindOf "TIOWSpaceMarine_Base") and (typeOf _unit isKindOf "TIOWSpaceMarine_Base") and !(isNil {_killer getVariable "IMS_SM_FistsSkillUsed"})) exitWith {
		[_killer,_unit] remoteExec ["SM_Execution_StompOnHead", _killer, false];  
		};


		if ((WBK_IMSCanHitSpaceMarines) and !(typeOf _killer isKindOf "TIOWSpaceMarine_Base") and (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		[_unit, 0.05, _killer] spawn WBK_CreateDamage;
		_unit playActionNow "WBK_Kulak_HitNonFists";
		};





		/////////Cant hit with melee
		_str1 = getText (configfile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass");
		_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		if (!(isNil {_unit getVariable "IMS_IsUntouchable"}) or ((_str2 > 6000) and (_value < 0.396)) or (typeOf _unit isKindOf "WBK_DT_1") or (typeOf _unit isKindOf "WBK_DT_Cont_1") or (!(typeOf _killer isKindOf "TIOWSpaceMarine_Base") and (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) or (!(handGunWeapon _killer in IMS_Melee_Fists_SPACEMARINES) and !(handGunWeapon _killer in IMS_Melee_TwoHandedWeapons_SPACEMARINES) and !(handGunWeapon _killer in IMS_Melee_OneHandedWeapons_SPACEMARINES) and !(handGunWeapon _killer in IMS_Melee_HeavyWeapons_SPACEMARINES) and (typeOf _unit isKindOf "TIOWSpaceMarine_Base"))) exitWith {
		_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
		[_killer, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndSnd = selectRandom ["sword_on_wood_shield01","sword_on_wood_shield02","sword_on_wood_shield03"];  
		[_killer, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_killer, 2, _unit] remoteExec ["concentrationToZero", _killer, false];  
		};
		////////Enough damage to hit high protective targets
		if ((_str2 > 6000)) exitWith {
		[_unit, 0.15, _killer] spawn WBK_CreateDamage;
		_unit playActionNow "WBK_Kulak_HitNonFists";
		};
		/////////Random Execution
		_rndMakeEx = random 100;
		if (!(IMS_ISBluntWeaponKiils) and (_rndMakeEx <= IMS_ExecutionChance) and ((damage _unit) >= 0.4) and !(typeOf _killer isKindOf "TIOWSpaceMarine_Base") and !(typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		[_unit, _killer] remoteExec ["HumanExecutionsSelectFrom", _killer, false];  
		};
		///////In innacepated state
		if ((lifeState _unit == "INCAPACITATED")) exitWith {
		if (IMS_ISBluntWeaponKiils) exitWith {};
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		if ((typeOf _killer isKindOf "TIOWSpaceMarine_Base") and !(typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		if (gestureState _unit == "FP_Dash_NoStamina") exitWith {
		[_unit, "A_PlayerDeathAnim_24"] remoteExec ["switchMove", 0];
		};
		_rndAnim = selectRandom ["A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1","A_PlayerDeathAnim_heavy_3","A_PlayerDeathAnim_heavy_2","A_PlayerDeathAnim_heavy_1","A_PlayerDeathAnim_5","A_PlayerDeathAnim_10","A_PlayerDeathAnim_3","A_PlayerDeathAnim_18","A_PlayerDeathAnim_21","A_PlayerDeathAnim_23","A_PlayerDeathAnim_22","A_PlayerDeathAnim_11","A_PlayerDeathAnim_17"];
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		if ((_rndAnim == "A_PlayerDeathAnim_heavy_3") or (_rndAnim == "A_PlayerDeathAnim_heavy_2") or (_rndAnim == "A_PlayerDeathAnim_heavy_1")) then {
		[_unit, [-10 * (sin (getdir _unit )), -10 * (cos (getdir _unit)), 3]] remoteExec ["setvelocity", _unit];
		}else{
		[_unit, {
		if (isDedicated) exitWith {};
		_object = _this;
		_object setFace "WBK_DecapatedHead_Normal";
		_rndSound = selectRandom ["decapetadet_sound_1","decapetadet_sound_2"];
		_blood = "#particlesource" createVehicleLocal (getposATL _object);      
		_blood say3D [_rndSound,130];     
		_blood setParticleClass "ATMineExplosionParticles";  
		_blood setParticleParams [ 
				["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 32],   //model name            
				"",   //animation            
				"billboard", //type            
				0.2, 2, //period and lifecycle            
				[0, 0, 0], //position            

				[3 + random -6, 3 + random -6, random 8], //movement vector            
				5, 1, 0.4, 0.4, //rotation, weight, volume , rubbing            
				[0.05, 1.4], //size transform            
				[[0.5,0,0,0.6], [0.8,0,0,0.1], [0.1,0,0,0.03]],    
				[0.00001],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360, //angle             
				false, //on surface             
				0 //bounce on surface     
			];  
		_blood setdropinterval 0.01;             
		_blood attachTo [_object,[0,0,-0.01],"head"]; 
		_breath = "#particlesource" createVehicleLocal (getposATL _object);             
			_breath setParticleClass "ATMineExplosionParticles";             
			_breath setParticleParams            
			[            
				["\a3\Data_f\ParticleEffects\Universal\meat_ca", 1, 0, 1], //shape name            
				"", //anim name            
				"spaceObject",        
				0.5, 6, //timer period & life time            
				[0, 0, 0], //pos         
				[5 + random -10, 6 + random -12, random 5], //moveVel       
				1,1.275,0.2,0, //rotation vel, weight, volume, rubbing            
				[1.6,0], //size transform           
				[[0.005,0,0,0.05], [0.006,0,0,0.06], [0.2,0,0,0]],      
				[1000], //animationPhase (speed in config)            
				1, //randomdirection period            
				0.1, //random direction intensity            
				"", //onTimer            
				"", //before destroy            
				"", //object            
				0, //angle            
				false, //on surface            
				0.0 //bounce on surface            
			];            
			_breath setParticleRandom [0.5, [0, 0, 0], [3.25, 0.25, 2.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];      
			_breath setDropInterval 0.01;            
			_breath attachTo [_object,[0,0,0.2], "head"]; 
		if (!(headgear _object == "")) then {
		_object spawn {
				removeHeadgear _this;
				_parca = "#particlesource" createVehicleLocal (getposATL _this);              
				_parca setParticleClass "ATMineExplosionParticles";              
				_parca setParticleParams             
				[             
					["\A3\data_f\ParticleEffects\Shard\shard3", 1, 0, 1], //shape name             
					"", //animation name             
					"SpaceObject", //type             
					1, 2 + random 5, //timer period & life time             
					[0, 0, 0], //position             
					[3 + random -6, 3 + random -6,1 + random 6], //moveVeocity             
					1 + random 4, 1, 0.1, 0, //rotation velocity, weight, volume, rubbing             
					[0.4 + random 0.3], //size             
					[[1,1,1,1]], //color             
					[0.1], //animationPhase (animation speed in config)             
					0.1, //randomdirection period             
					0.05, //random direction intensity             
					"", //onTimer             
					"", //before destroy             
					"", //object             
					0, //angle             
					false, //on surface             
					0 //bounce on surface             
				];             
				_parca setParticleRandom [0, [0, 0, 0], [0, 0, 1], 0, 0.1, [0, 0, 0, 0], 0, 0];             
				_parca setDropInterval 0.01;             
				_parca attachTo [_this,[0,-0.05,0.18],"head"];  
				sleep 0.1;
				deleteVehicle _parca;
		};
		};
		sleep 0.25;
		deleteVehicle _breath;
		sleep 0.8;
		_blood setDropInterval 1000; 
		sleep 1.3;
		deleteVehicle _blood; 
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		removeGoggles _unit;
		_unit unlinkItem hmd _unit;
		_unit removeItem hmd _unit;
		};
		};
		[_unit, _killer] spawn WBK_CreateMeleeHitAnim;

		_num = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");
		if (_num < 0.05) exitWith {};

		if (isPlayer _unit) then {
		[_unit, ((getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage")) * IMS_DamageMultiPlayer), _killer] spawn WBK_CreateDamage;
		}else{
		[_unit, ((getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage")) * IMS_DamageMulti), _killer] spawn WBK_CreateDamage;
		};
		[_unit,{
		if ((isPlayer _this) and (WBK_ParamEnablePlayerSounds) and !(typeOf _this isKindOf "TIOWSpaceMarine_Base")) then {
		[10] call BIS_fnc_bloodEffect;
		playSound selectRandom ["player_pain_1","player_pain_2","player_pain_3","player_pain_4","player_pain_5","player_pain_6","player_pain_7"];
		};
		}] remoteExec ["spawn",_unit];
		};
		};
		
		
		
		
		
		bayonettScriptKill = {
		_victim = _this select 0;
		if (getText (configfile >> 'CfgVehicles' >> typeOf _victim >> 'moves') != 'CfgMovesMaleSdr') exitWith {};
		_unit = _this select 1;
		_victim setVariable ["EnableDeadAnim",0, true];
		// _victim setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, 1] remoteExec ["setAnimSpeedCoef", 0, true];
		_rndEx = random 100;
		if ((_rndEx >= 50) and !(stance _victim == "PRONE")) exitWith {
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_unit, _victim] spawn bayonetScriptExecution;
		};
		if (!(stance _victim == "PRONE")) then {
		if (((_victim worldToModel (_unit modelToWorld [0, 0, 0])) select 1) < 0) then 
		{
		[_victim, "bayonet_death_back"] remoteExec ["switchMove", 0];
		}else{
		_rndAnim = selectRandom ["bayonet_death_1","bayonet_death_2"];
		[_victim, _rndAnim] remoteExec ["switchMove", 0];
		};
		};
		_rndSnd = ["sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"] call BIS_fnc_SelectRandom;
		[_victim, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndDead = ["dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4","dobi_scream_5"] call BIS_fnc_SelectRandom;
		[_victim, _rndDead, 50, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.2;
		_rndDead = ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"] call BIS_fnc_SelectRandom;
		[_victim, _rndDead, 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.3;
		[_victim, "dobi_fall", 50, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		};
		
		
		
		
		
		bayonetScriptExecution = { 
		_main = _this select 0; 
		_victim = _this select 1; 
		// _victim setDamage 1; 
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		_main disableAI "ALL";
		[_main, 1] remoteExec ["setAnimSpeedCoef", 0, true];
		if (isPlayer _main) then {
		_rndSnd = ["engaging1","engaging2","engaging3","engaging4","engaging5"] call BIS_fnc_SelectRandom;
		[_main, _rndSnd, 140, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_main, "Human_Execution_Bayonet_main"] remoteExec ["switchMove", 0];
		if (((_victim worldToModel (_main modelToWorld [0, 0, 0])) select 1) > 0) then {
		[_victim, "Human_Execution_Bayonet_victim_front"] remoteExec ["switchMove", 0]; 
		_victim attachTo [_main,[0,1.5,0]]; 
		}else{
		[_victim, "Human_Execution_Bayonet_victim_backward"] remoteExec ["switchMove", 0]; 
		_victim attachTo [_main,[0,0,0]]; 
		};
		sleep 0.15;
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		if (!(alive _main) or !(animationState _main == "Human_Execution_Bayonet_main")) exitWith {
		detach _victim;
		if (!(alive _main) and !(animationState _main == "Human_Execution_Bayonet_victim_front") and !(animationState _main == "Human_Execution_Bayonet_victim_backward")) exitWith {
		[_main, "bayonet_death_1"] remoteExec ["switchMove", 0];
		};
		};
		_rndSnd = ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"] call BIS_fnc_SelectRandom;
		[_main, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.15;
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		if (!(alive _main) or !(animationState _main == "Human_Execution_Bayonet_main")) exitWith {
		detach _victim;
		if (!(alive _main) and !(animationState _main == "Human_Execution_Bayonet_victim_front") and !(animationState _main == "Human_Execution_Bayonet_victim_backward")) exitWith {
		[_main, "bayonet_death_2"] remoteExec ["switchMove", 0];
		};
		};
		[_victim, "dobi_CriticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, selectRandom ["loud_scream_1","loud_scream_2","dobi_scream_6","bloodCought_3","bloodCought_1","bloodCought_2"], 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.9;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Bayonet_main")) exitWith {
		detach _victim;
		if (!(alive _main) and !(animationState _main == "Human_Execution_Bayonet_victim_front") and !(animationState _main == "Human_Execution_Bayonet_victim_backward")) exitWith {
		[_main, "lightsaber_death_11"] remoteExec ["switchMove", 0];
		};
		};
		[_victim, "dobi_fall_2", 70, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "dobi_fall", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndDead = ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"] call BIS_fnc_SelectRandom;
		[_victim, _rndDead, 50, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"Spine3"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.1;
		 deleteVehicle _blood; 
		 sleep 0.1;
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,0.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 1.2;
		if (!(alive _main) or !(animationState _main == "Human_Execution_Bayonet_main")) exitWith {
		detach _victim;
		if (!(alive _main) and !(animationState _main == "Human_Execution_Bayonet_victim_front") and !(animationState _main == "Human_Execution_Bayonet_victim_backward")) exitWith {
		[_main, "lightsaber_death_9"] remoteExec ["switchMove", 0];
		};
		};
		detach _victim;
		sleep 0.2;
		_main enableAI "ALL";
		if (!(alive _main) or !(animationState _main == "Human_Execution_Bayonet_main")) exitWith {
		detach _victim;
		if (!(alive _main) and !(animationState _main == "Human_Execution_Bayonet_victim_front") and !(animationState _main == "Human_Execution_Bayonet_victim_backward")) exitWith {
		[_main, "lightsaber_death_19"] remoteExec ["switchMove", 0];
		};
		};
		[_main, ""] remoteExec ["switchMove", 0];
		};
		
		
		
		
		
		ogrSetDamage = {
		_unit = _this select 0;
		_killer = _this select 1;
		if ((damage _unit) >= 0.4) exitWith {
		// _unit setDamage 1;
		[_unit, true] call ace_medical_fnc_setUnconscious;
		[_unit, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = ["lightsaber_death_9","lightsaber_death_4"] call BIS_fnc_SelectRandom;
		[_unit, _rndAnim] remoteExec ["switchMove", 0];
		};
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		_value = _value - 0.15;
		if (_value <= 0) then {
		_unit setDamage ((damage _unit) + 0.01); 
		}else{
		_unit setDamage (((damage _unit) + _value) min 0.95); 
		if ((animationState _unit == "starWars_lightsaber_hit_1") or (animationState _unit == "OGR_armed_specialAttack_main") or (animationState _unit == "OGR_armed_attack_1") or (animationState _unit == "OGR_armed_groundPush")) exitWith {};
		[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		[_unit, "starWars_lightsaber_hit_1"] remoteExec ["switchMove", 0];
		_unit setVariable ["AI_CanTurn",1, true]; 
		_unit setVariable ["canMakeAttack",1, true]; 
		sleep 0.1; 
		if (!(animationState _unit == "starWars_lightsaber_hit_1") or !(alive _unit)) exitWith {};
		[_unit, [-4 * (sin (getdir _unit )), -4 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
		sleep 0.7; 
		if (!(animationState _unit == "starWars_lightsaber_hit_1") or !(alive _unit)) exitWith {};
		_unit setVariable ["AI_CanTurn",0, true]; 
		_unit setVariable ["canMakeAttack",0, true]; 
		sleep 0.3; 
		if (!(animationState _unit == "starWars_lightsaber_hit_1") or !(alive _unit)) exitWith {};
		[_unit, "OGR_armed_idle"] remoteExec ["switchMove", 0];
		_unit setVariable ["AI_CanTurn",0, true]; 
		};
		};
		
		
		
		
		
		Human_Execution_StompOnHead_unconscious_Kulaki = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_GenericUnconscious_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_GenericUnconscious_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_GenericUnconscious_victim"] remoteExec ["switchMove", 0, true];
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,0,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_victim, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 80, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.4;
		if (!(alive _main)) exitWith {};
		[_victim, "dobi_bones", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_victim, "dobi_criticalHit", 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 1.1;
		detach _victim;
		if (!(alive _main)) exitWith {};
		[_main, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];
		_main setVariable ["AI_CanTurn",0];
		};
		
		
		
		
		
		WBK_IMS_AxeStealthKill = {
		_x = _this select 0;
		_unitToPlay = _this select 1;
		[_unitToPlay, ([_unitToPlay, _x] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		[_x, "roll_fwrd", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_x setVariable ["disableUnitSFX",1, true];
		_unitToPlay setVariable ["canMakeAttack",1];
		[_x, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_unitToPlay, "IMS_Rifle_Sync_Axe_front_main"] remoteExec ["switchMove", 0, false]; 
		[_unitToPlay, "IMS_Rifle_Sync_Axe_front_main"] remoteExec ["playMoveNow", 0, false]; 
		[_x, "Star_Wars_executionOnHuman_2_victim"] remoteExec ["switchMove", 0, false]; 
		_x attachTo [_unitToPlay,[0,0,0]];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		[_x, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unitToPlay, _rndSnd, 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		[_x, "dobi_fall", 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_x, _rndSnd, 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_x, selectRandom ["New_Death_1","New_Death_2","New_Death_3","New_Death_4","New_Death_10","dobi_scream_6"], 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.45;
		detach _x;
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		};
		
		
		
		
		
		IMS_FistsGenericMelExec = {
		_x = _this select 0;
		_unitToPlay = _this select 1;
		[_unitToPlay, ([_unitToPlay, _x] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_x setVariable ["disableUnitSFX",1, true];
		_unitToPlay setVariable ["canMakeAttack",1, true];
		[_x, "Disable_Gesture"] remoteExec ["playActionNow", 0, true]; 
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0]; 
		[_unitToPlay, "Star_Wars_executionOnHuman_2_main"] remoteExec ["switchMove", 0, true]; 
		[_x, "Star_Wars_executionOnHuman_2_victim"] remoteExec ["switchMove", 0, true]; 
		_x attachTo [_unitToPlay,[0,0,0]];
		// _x setDamage 1;
		[_x, true] call ace_medical_fnc_setUnconscious;
		[_x, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unitToPlay, "sword_draw_back_end"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "sword_draw_back_end"] remoteExec ["playActionNow", _unitToPlay];
		[_unitToPlay, "sword_draw_back_end"] remoteExec ["playActionNow", _unitToPlay];
		sleep 0.3;
		_rndSnd = ["leg_hit1","leg_hit2","leg_hit3"] call BIS_fnc_SelectRandom;
		[_x, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_x, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unitToPlay, _rndSnd, 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		[_x, "dobi_fall", 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unitToPlay >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_x, _rndSnd, 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndDead = ["dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4"] call BIS_fnc_SelectRandom;
		[_x, _rndDead, 30, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 0.85;
		[_unitToPlay, "sword_draw_back_start"] remoteExec ["playActionNow", _unitToPlay];
		sleep 0.6;
		detach _x;
		if (animationState _unitToPlay == "Star_Wars_executionOnHuman_2_main") then {
		_unitToPlay setVariable ["canMakeAttack",0, true];
		_unitToPlay setVariable ["AI_CanTurn",0, true];
		if ((currentWeapon _unitToPlay in IMS_Melee_Weapons) or !(isPlayer _unitToPlay)) exitWith {[_unitToPlay, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unitToPlay == primaryWeapon _unitToPlay) and !(currentWeapon _unitToPlay == "")) exitWith {[_unitToPlay, "AmovPercMstpSlowWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unitToPlay == handgunWeapon _unitToPlay) and !(currentWeapon _unitToPlay == "")) exitWith {[_unitToPlay, "AmovPercMstpSlowWpstDnon"] remoteExec ["switchMove", 0];};
		[_unitToPlay, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		Fists_execWithHeavy = {  
		_main = _this select 1;  
		_victim = _this select 0;  
		_main setVariable ["canMakeAttack",1];  
		_main setVariable ["AI_CanTurn",1];  
		_main setVariable ["actualSwordBlock",0, true];  
		_soundCacheVic = "#particlesource" createVehicle position _main;   
		_soundCacheVic attachTo [_victim,[0,0,0],"head"];  
		[_main, "Human_Execution_GenericHeavy_main"] remoteExec ["switchMove", 0, false];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_victim, "Human_Execution_GenericHeavy_victim"] remoteExec ["switchMove", 0, true];  
		[_main, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_main, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_main, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];  
		[_victim, 1.1] remoteExec ["setAnimSpeedCoef", 0, true];  
		_victim attachTo [_main,[0,1.1,0]];  
		// _victim setDamage 1;  
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;  
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		detach _victim;  
		deleteVehicle _soundCacheVic;  
		};  
		[_main, "generic_in", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndSnd = selectRandom ["PF_Hit_1","PF_Hit_2"];   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;   
		sleep 0.6;  
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		[_soundCacheVic, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2"], 70] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "kick_butt_1", 50] call CBA_fnc_globalSay3d;  
		sleep 0.6;  
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.01,0.01,0.01,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		 deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,2.7,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		[_soundCacheVic, "bat_type_swing_1", 50] call CBA_fnc_globalSay3d; 
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");   
		_rndSnd = selectRandom _arr;   
		[_soundCacheVic, _rndSnd, 50] call CBA_fnc_globalSay3d;  
		[_soundCacheVic, "dobi_criticalHit", 50] call CBA_fnc_globalSay3d;  
		detach _victim;  
		[_soundCacheVic, "dobi_fall", 50] call CBA_fnc_globalSay3d; 
		[_soundCacheVic, selectRandom ["dobi_scream_6","dobi_scream_2","loud_scream_1","loud_scream_2","bloodCought_2"], 50] call CBA_fnc_globalSay3d; 
		sleep 1.05;
		[_main, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _main];
		[_main, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _main];
		[_main, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _main];
		sleep 0.7; 
		if (!(animationState _main == "Human_Execution_GenericHeavy_main")) exitWith {  
		deleteVehicle _soundCacheVic;  
		};  
		[_main, "generic_out", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];
		_main setVariable ["canMakeAttack",0];  
		_main setVariable ["AI_CanTurn",0];   
		sleep 4;  
		deleteVehicle _soundCacheVic;  
		}; 
		
		
		
		
		
		Fists_execWithMeleeKnife = {
		_main = _this select 1;
		_victim = _this select 0;
		_main disableAI "ALL";
		_main setVariable ["canMakeAttack",1];
		_main setVariable ["AI_CanTurn",1];
		_main setVariable ["actualSwordBlock",0, true];
		[_main, "Human_Execution_GenericOnehanded_headSmash_1_main"] remoteExec ["switchMove", 0, false];
		[_victim, "Human_Execution_GenericOnehanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];
		[_victim, "Human_Execution_GenericOnehanded_headSmash_1_victim"] remoteExec ["switchMove", 0, true];
		[_main, "ims_takeOut_knifeType"] remoteExec ["playActionNow", _main];
		[_main, "ims_takeOut_knifeType"] remoteExec ["playActionNow", _main];
		[_main, "random_shhh", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
		_victim attachTo [_main,[0,1.25,0]];
		// _victim setDamage 1;
		[_victim, true] call ace_medical_fnc_setUnconscious;
		[_victim, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.3;
		[_main, "Disable_Gesture"] remoteExec ["playActionNow", _main];
		sleep 0.2;
		if (!(alive _main)) exitWith {};
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _main >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_victim, _rndSnd, 50, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, "dobi_criticalHit", 20, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		[_victim, {
		_object = _this;
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"neck"];         
		_blood setParticleParams [ 
		  ["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 13, 1, 16],             
		  "",              
		  "billboard",           
		  0.1, 5,              
		  [0, 0, 0],       
		  [0.5 + random -1, 0.5 + random -1, 1],            
		  1, 1, 0.3, 1,          
		  [0.2, 4],       
		  [[1,1,1,0.12], [0.001,0.001,0.001,0.0]],     
		  [0.00001],     
		  0.4,     
		  0.4,     
		  "",     
		  "",     
		  "",    
		  360,            
		  false,             
		  0   
		 ]; 
		 _blood setdropinterval 0.003;
		 sleep 0.5;
		  deleteVehicle _blood; 
		_rndBlood = selectRandom ["BloodSplatter_01_Medium_New_F","BloodPool_01_Medium_New_F"];
		_deathBlood = _rndBlood createVehicleLocal getPosATL _object;
		_deathBlood attachTo [_object,[0.3,2,0]];
		detach _deathBlood;
		_deathBlood setDir (random 360);
		sleep 0.5;
		_deathBlood setVectorUp surfaceNormal position _deathBlood;
		}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		sleep 0.4;
		if (!(alive _main)) exitWith {};
		[_victim, "dobi_fall_2", 100, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		_rndSndB = selectRandom ["bloodCought_1","bloodCought_2","bloodCought_3"];
		[_victim, _rndSndB, 40, 14] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.4;
		[_main, "ims_takeOut_knifeType_sheat"] remoteExec ["playActionNow", _main];
		if (_rndSndB == "bloodCought_1") then {
		[_victim, 0.6] remoteExec ["setAnimSpeedCoef", 0];
		};
		sleep 0.5;
		if (!(alive _main)) exitWith {};
		_main setVariable ["canMakeAttack",0];
		detach _victim;
		[_main, "generic_out", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_main, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];
		};
		
		
		
		
		
		Fists_execWithMelee = {
		_creature = _this select 0;
		_unit = _this select 1;
		if ((handgunWeapon _unit in IMS_Melee_Heavy) or (handgunWeapon _unit in IMS_Melee_Alebard)) exitWith {[_creature,_unit] spawn Fists_execWithHeavy;};
		if (handgunWeapon _unit in IMS_Melee_Knifes) exitWith {[_creature,_unit] spawn Fists_execWithMeleeKnife;};
		if (!(handgunWeapon _unit in IMS_Melee_TwoHandedWeapons)) exitWith {[_creature,_unit] spawn IMS_FistsGenericMelExec;};
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_unit setDamage 0;
		_unit setVariable ["canMakeAttack",1, true];
		_creature setVariable ["disableUnitSFX",1, true];
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["actualSwordBlock",0, true];
		_creature setVariable ["AI_CanTurn",1, true];
		_creature setVariable ["canMakeAttack",1, true];
		_creature disableAI "ALL";
		[_creature, _unit] remoteExecCall ["disableCollisionWith", 0, _unit];
		_creature attachTo [_unit,[0.01,1.12,0.05]]; 
		[_unit, "Star_Wars_executionOnHuman_1_main"] remoteExec ["switchMove", 0]; 
		[_creature, "Star_Wars_executionOnHuman_1_victim"] remoteExec ["switchMove", 0, true]; 
		[_unit, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_unit, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_unit, "ims_takeOut_TwoHanded"] remoteExec ["playActionNow", 0]; 
		[_creature, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		[_unit, "Rakhgul_executeOn_jedi", 20, 8] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		sleep 0.4;
		[_unit, "generic_in", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		_rndEquip = selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"];
		[_creature, _rndEquip, 20, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 1.4;
		_rndSnd = selectRandom["loud_scream_1","loud_scream_2"];
		[_creature, _rndSnd, 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		sleep 1.2;
		detach _creature;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_Sounds");  
		_rndSnd = selectRandom _arr;  
		[_unit, _rndSnd, 30, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15;
		_arr = parseSimpleArray getText (configFile >> "CfgWeapons" >> handgunWeapon _unit >> "IMS_Melee_Param_SoundsOnHit");  
		_rndSnd = selectRandom _arr;  
		[_creature, _rndSnd, 30, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		_rndDead = ["dobi_scream_1","dobi_scream_2","dobi_scream_3","dobi_scream_4"] call BIS_fnc_SelectRandom;
		[_creature, _rndDead, 10, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
		sleep 0.15; 
		[_creature, "dobi_fall", 20, 9] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
		[_unit, [4 * (sin (getdir _unit )), 4 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
		[_creature, [4 * (sin (getdir _creature )), 4 * (cos (getdir _creature)), 1.2]] remoteExec ["setvelocity", _creature];
		sleep 1.4;
		[_unit, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _unit];
		[_unit, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _unit];
		[_unit, "ims_takeOut_TwoHanded_sheat"] remoteExec ["playActionNow", _unit];
		sleep 0.7;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if (animationState _unit == "Star_Wars_executionOnHuman_1_main") then {
		[_unit, "generic_out", 20, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_unit, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		coolDeathKnife_NoWeapon = {
		_creature = _this select 0;
		_unit = _this select 1;
		if (
		((_creature distance _unit) > 2.5)
		) exitWith {};
		if ((((_creature worldToModel (_unit modelToWorld [0, 0, 0])) select 1) > 0)) exitWith {
		[_creature,_unit] spawn WBK_dobi_5;
		};
		[_unit, ([_unit, _creature] call BIS_fnc_dirTo)] remoteExec ["setDir", 0, false];
		_unit setVariable ["canMakeAttack",1, true];
		_creature attachTo [_unit,[0,0,0]]; 
		[_unit, "WBK_FISTS_Execution_main"] remoteExec ["switchMove", 0]; 
		[_creature, "WBK_FISTS_Execution_victim"] remoteExec ["switchMove", 0, true]; 
		[_creature, "WBK_FISTS_Execution_victim"] remoteExec ["switchMove", 0, true]; 
		[_creature, 1.05] remoteExec ["setAnimSpeedCoef", 0, true]; 
		_unit setDamage 0;
		// _creature setDamage 1;
		[_creature, true] call ace_medical_fnc_setUnconscious;
		[_creature, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unit, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"], 10, 2] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.1;
		_crtObj = "Land_HelipadEmpty_F" createVehicle getPos _creature;
		_crtObj attachTo [_creature,[0,0,0],"neck"];
		[_crtObj, "bloodCought_2", 15] call CBA_fnc_GlobalSay3D; 
		_crtObj spawn {
		sleep 2.09;
		deleteVehicle _this;
		};
		[_creature, "dobi_fall_2", 15, 7] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 2.1;
		[_unit, selectRandom ["melee_swing_equipment_1","melee_swing_equipment_2","melee_swing_equipment_3","melee_swing_equipment_4"], 10, 2] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_creature, "dobi_bones", 10, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.7;
		[_creature, "dobi_fall", 15, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.5;
		[_unit, "random_shhh", 15, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		sleep 0.9;
		detach _creature;
		_unit setVariable ["actualSwordBlock",0, true];
		_unit setVariable ["AI_CanTurn",0, true];
		_unit setVariable ["canMakeAttack",0, true];
		if ((animationState _unit == "WBK_FISTS_Execution_main")) then {
		if (!(isNil {_unit getVariable "IMS_InFistsMode"})) exitWith {[_unit, "AM_Kulak_Idle"] remoteExec ["switchMove", 0];}; 
		if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {[_unit, "melee_armed_idle"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPknlMstpSrasWrflDnon"] remoteExec ["switchMove", 0];};
		if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) exitWith {[_unit, "AmovPknlMstpSrasWpstDnon"] remoteExec ["switchMove", 0];};
		[_unit, "AmovPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
		};
		};
		
		
		
		
		
		WBK_OrksDamage_BIG = {
		_unitToPlay = _this select 0;
		_killer = _this select 1;
		if (typeOf _unitToPlay isKindOf "WBK_DOS_Squig_Normal") exitWith {
		if ((animationState _unitToPlay == "Squig_Big_Execution_1") or (animationState _unitToPlay == "Squig_Big_Execution_2")) exitWith {};
		if ((typeOf _killer isKindOf "TIOWSpaceMarine_Base")) exitWith {
		// _unitToPlay setDamage 1;
		[_unitToPlay, true] call ace_medical_fnc_setUnconscious;
		[_unitToPlay, 9, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		_unitToPlay setDamage ((damage _unitToPlay) + 0.3);
		};
		if ((animationState _unitToPlay == "HUGE_ORK_Waagh") or (animationState _unitToPlay == "HUGE_ORK_Taunting") or (animationState _unitToPlay == "HUGE_ORK_Stomp") or (animationState _unitToPlay == "HUGE_ORK_Catch_executiuon") or (animationState _unitToPlay == "HUGE_ORK_Catch")) exitWith {};
		if (typeOf _unitToPlay isKindOf "WBK_DOS_Huge_ORK") exitWith {
		if ((damage _unitToPlay) >= 0.45) exitWith {
		// _unitToPlay setDamage 1;
		[_unitToPlay, true] call ace_medical_fnc_setUnconscious;
		[_unitToPlay, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage"); 
		if (typeOf _killer isKindOf "TIOWSpaceMarine_Base") exitWith {
		_unitToPlay setDamage ((damage _unitToPlay) + _value); 
		};
		_unitToPlay setDamage ((damage _unitToPlay) + (_value * 0.5)); 
		};
		if ((typeOf _killer isKindOf "TIOWSpaceMarine_Base") and !(typeOf _unitToPlay isKindOf "TIOWSpaceMarine_Base") and !(_unitToPlay isKindOf "WBK_DOS_Huge_ORK")) exitWith {
		// _unitToPlay setDamage 1;
		[_unitToPlay, true] call ace_medical_fnc_setUnconscious;
		[_unitToPlay, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		_rndAnim = selectRandom ["A_PlayerDeathAnim_2","A_PlayerDeathAnim_3","A_PlayerDeathAnim_5","lightsaber_death_20"];
		[_unitToPlay, _rndAnim] remoteExec ["switchMove", 0];
		};
		if (!(_unitToPlay isKindOf "WBK_DOS_Huge_ORK") and ((damage _unitToPlay) >= 0.4)) exitWith {
		_rndAnim = selectRandom ["A_PlayerDeathAnim_23","A_PlayerDeathAnim_22","A_PlayerDeathAnim_21","A_PlayerDeathAnim_12","A_PlayerDeathAnim_7","A_PlayerDeathAnim_1","A_PlayerDeathAnim_10","A_PlayerDeathAnim_19","A_PlayerDeathAnim_9"];
		[_unitToPlay, _rndAnim] remoteExec ["switchMove", 0];
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		// _unitToPlay setDamage 1; 
		[_unitToPlay, true] call ace_medical_fnc_setUnconscious;
		[_unitToPlay, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
		};
		[_unitToPlay, "Disable_Gesture"] remoteExec ["playActionNow", 0];
		if (animationState _unitToPlay == "starWars_lightsaber_hit_2") exitWith {
		if (animationState _unitToPlay == "starWars_lightsaber_hit_1") exitWith {
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		_unitToPlay setDamage ((damage _unitToPlay) + _value); 
		_unitToPlay playActionNow "WBK_Kulak_HitNonFists";
		};
		[_unitToPlay, "starWars_lightsaber_hit_1"] remoteExec ["switchMove", 0];
		[_unitToPlay, "starWars_lightsaber_hit_1"] remoteExec ["playMoveNow", 0];
		[_unitToPlay, "starWars_lightsaber_hit_1"] spawn WBK_CreateHitAnimation_NearGeometry;
		[_unitToPlay, "melee_armed_idle"] remoteExec ["playMove", 0];
		_unitToPlay setVariable ["AI_CanTurn",1, true]; 
		_unitToPlay setVariable ["canMakeAttack",1, true]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true]; 
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		_unitToPlay setDamage ((damage _unitToPlay) + _value); 
		sleep 0.7; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_1")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",0, true]; 
		_unitToPlay setVariable ["canMakeAttack",0, true]; 
		};
		[_unitToPlay, "starWars_lightsaber_hit_2"] remoteExec ["switchMove", 0];
		[_unitToPlay, "starWars_lightsaber_hit_2"] remoteExec ["playMoveNow", 0];
		[_unitToPlay, "starWars_lightsaber_hit_2"] spawn WBK_CreateHitAnimation_NearGeometry;
		[_unitToPlay, "melee_armed_idle"] remoteExec ["playMove", 0];
		_unitToPlay setVariable ["AI_CanTurn",1, true]; 
		_unitToPlay setVariable ["canMakeAttack",1, true]; 
		_unitToPlay setVariable ["actualSwordBlock",0, true]; 
		_value = getNumber (configFile >> "CfgWeapons" >> handgunWeapon _killer >> "IMS_Melee_Param_Damage");  
		_unitToPlay setDamage ((damage _unitToPlay) + _value); 
		sleep 0.9; 
		if (!(animationState _unitToPlay == "starWars_lightsaber_hit_2")) exitWith {};
		_unitToPlay setVariable ["AI_CanTurn",0, true]; 
		_unitToPlay setVariable ["canMakeAttack",0, true]; 
		};







		
	};



};