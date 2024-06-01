["Basipek Bus", "(XI FORK) Create Drop Pod LZ", 
{
    params ["_modulePosASL","_attachedObject"];

    private _onConfirm = {
        _dialogReturn = _this select 0;
        _dialogReturn params ["_text"];
		
        private _arguments = _this select 1;
        _arguments params ["_modulePosASL", "_attachedObject"];
		
		if (_text=="") exitWith {
			["EMPTY NAME", "LZ name cannot be empty.", 5] call BIS_fnc_curatorHint;
		};
		
		if (isNull _attachedObject) then {
			_attachedObject = createVehicle ["Land_AirHorn_01_F",ASLToATL _modulePosASL,[],0,"NONE"];
			_attachedObject enableSimulationGlobal false;
			_attachedObject hideObjectGlobal true;
			_attachedObject setVariable ["_Event",true,true];
			_attachedObject setVariable ["BBUS_DropPod_LZName",_text,true];
		}else {
			_pos = getPosATL _attachedObject;
			_attachedObject = createVehicle ["Land_AirHorn_01_F",_pos,[],0,"NONE"];
			_attachedObject enableSimulationGlobal false;
			_attachedObject hideObjectGlobal true;
			_attachedObject setVariable ["_Event",true,true];
			_attachedObject setVariable ["BBUS_DropPod_LZName",_text,true];
		};
		
		{_x addCuratorEditableObjects [[_attachedObject], true]} forEach allCurators;
		
    };

    [
        "DROP POD LZ", 
        [
        ["EDIT",["Name of LZ", "Name that'll be shown in the list."],["",{}]]
        ],
        _onConfirm,
        {},
        [_modulePosASL, _attachedObject]
    ] call zen_dialog_fnc_create;

},"\BBUS_ZENDropPod\lzicon.paa"] call zen_custom_modules_fnc_register;

["Basipek Bus", "(XI FORK) Drop in Pod", 
{
    params ["_modulePosASL",["_attachedObject",objNull]];
	if (isNull _attachedObject) exitWith {
		["NO OBJECT", "Attached object is null.", 5] call BIS_fnc_curatorHint;
	};
    _shopoptions=(allMissionObjects "Land_AirHorn_01_F") select {(typeName (_x getVariable ["BBUS_DropPod_LZName",objNull])) == "STRING"};
	_shopoptionsnames=[];
	{
	 _shopoptionsnames pushBack [(_x getVariable ["BBUS_DropPod_LZName",""]),"",""];
	} forEach _shopoptions; 
	 ["CHOOSE LZ FOR DROP POD", 
	 [ 
	  ["LIST", ["LZ","Choose where to drop this squad and their vehicles."], [_shopoptions,_shopoptionsnames,0]] 
	 ], 
	 { 
	  params["_values","_arguments"];	  
		_values params [["_lz",objNull]];
		if (isNull _lz) exitWith {
			["NO LZ", "LZ is null.", 5] call BIS_fnc_curatorHint;
		};
		_squaddie = _arguments#0;
		
		if !(_squaddie isKindOf "Man") exitWith {
			_pos= (getPosATL _lz);
						
			_spawnpos = _pos vectorAdd [random [-500, 0, 500], random [-500, 0, 500], 2000];
			
			_mainprojectile=createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
			
			_angle = [(_pos vectorFromTo _spawnpos)#0, (_pos vectorFromTo _spawnpos)#1, ((_pos vectorFromTo _spawnpos)#2)];

			_podclass = "Land_Cargo10_grey_F";
			_projectile = createvehicle [_podclass, [0, 0, 0], [], 0, "NONE"];
			_projectile setPosATL (getPosATL _mainprojectile);
			[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
			_projectile allowdamage false;
			[_projectile,random [-20,0,20],random [-45,0,45]] call BIS_fnc_setPitchBank;
			
			 [_mainprojectile, _pos,_projectile] spawn {
				params ["_mainprojectile", "_pos","_projectile"];
				while {alive _mainprojectile} do {
					_mainprojectile setvelocity ((_pos vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -150);
				};
			};
			
			_sayer = createVehicle ["UserTexture_1x2_F",_spawnpos,[],0,"CAN_COLLIDE"];
			
			[_sayer,["BBUS_ZENDropPod_flyby",15000]] remoteExec ["say3D",0];
			
			_sayer spawn {sleep 5; deleteVehicle _this;};
			
			[[_mainprojectile], {
				params ["_mainprojectile"];
				_light = "#lightpoint" createvehiclelocal [0, 0, 0];
				_light attachto [_mainprojectile, [0, 0, 0]];
				_light setLightColor [0.88, 0.34, 0.13];
				_light setLightAmbient [1, 1, 1];
				_light setLightBrightness 1;
				_light setLightDayLight true;
				
				waitUntil {
					!alive _mainprojectile
				};
				deletevehicle _light;

			}] remoteExec ["spawn"];

			[[_projectile],{
				params ["_projectile"];
				_ps1 = "#particlesource" createVehicleLocal (getPosATL _projectile);
				_ps1 setParticleParams [
					["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 9, 16, 0], "", "Billboard",
					1, 10, [0, 0, 0], [0, 0, 1.5], 0, 10, 7.9, 0.066, [2, 6, 12],
					[[0.5, 0.5, 0.5, 0], [0.5, 0.5, 0.5, 0.3], [0.5, 0.5, 0.5, 0.2], [0.5, 0.5, 0.5, 0.1], [0.75, 0.75, 0.75, 0.075], [1, 1, 1, 0]],
					[0.25], 1, 0, "", "", _ps1];
				_ps1 setParticleRandom [0, [0.25, 0.25, 0], [0.2, 0.2, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
				_ps1 setDropInterval 0.01;
				_ps1 attachTo [_projectile, [0,0,1.27]];
				[_ps1,_projectile] spawn {params ['_ps1','_projectile']; waitUntil {(!alive _projectile) || ((getPosATL _projectile) # 2)<5}; if (alive _projectile) then {sleep 5;};deleteVehicle _ps1;};
			}] remoteExec ["spawn"];
			
			
			[_mainprojectile, _pos, _projectile,_squaddie] spawn {
				params ["_mainprojectile", "_pos", "_projectile","_squaddie"];
				
				{
					(vehicle _x) hideObjectGlobal true;
					(vehicle _x) attachTo [_projectile,[0,0,100]];
					(vehicle _x) enableSimulationGlobal false;
				} forEach [_squaddie];
				
				_posATL=_pos;
				waitUntil {
					if (alive _mainprojectile) then {
						_posATL=getPosATL _mainprojectile;
					};
					!alive _mainprojectile;
				};
				
				
				_craterpos = _posATL;
				_craterpos set [2, 0];
				
				_crater = createvehicle ["Land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"];
				_projectile attachTo [_crater,[0,0,1.5]];
				[_projectile,random [-20,0,20],random [-45,0,45]] call BIS_fnc_setPitchBank;
				
				sleep 0.25;
				{
					(vehicle _x) enableSimulationGlobal true;
					(vehicle _x) hideObjectGlobal false;
					detach (vehicle _x);
					_pos=[getPosATL _projectile, 1, 10, 0.2, 1, 0, 0, []] call BIS_fnc_findSafePos;
					_pos set [2,0];
					(vehicle _x) setPosATL _pos;
				} forEach [_squaddie];
			};
		};
		
		_squad = group _squaddie;
		
		_pos= (getPosATL _lz);
                    
		_spawnpos = _pos vectorAdd [random [-500, 0, 500], random [-500, 0, 500], 2000];
		
		_mainprojectile=createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
		
		_angle = [(_pos vectorFromTo _spawnpos)#0, (_pos vectorFromTo _spawnpos)#1, ((_pos vectorFromTo _spawnpos)#2)];

		_podclass = if (side _squad == east) then {"JMSFALL_O_Droppod_Mil"} else {"Land_Cargo10_grey_F"};
		_projectile = createvehicle [_podclass, [0, 0, 0], [], 0, "NONE"];
		_projectile setPosATL (getPosATL _mainprojectile);
		[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
		_projectile allowdamage false;
		[_projectile,random [-20,0,20],random [-45,0,45]] call BIS_fnc_setPitchBank;
		
		 [_mainprojectile, _pos,_projectile] spawn {
			params ["_mainprojectile", "_pos","_projectile"];
			while {alive _mainprojectile} do {
				_mainprojectile setvelocity ((_pos vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -150);
			};
		};
		
		_sayer = createVehicle ["UserTexture_1x2_F",_spawnpos,[],0,"CAN_COLLIDE"];
		
		[_sayer,["BBUS_ZENDropPod_flyby",15000]] remoteExec ["say3D",0];
		
		_sayer spawn {sleep 5; deleteVehicle _this;};
		
		[[_mainprojectile], {
			params ["_mainprojectile"];
			_light = "#lightpoint" createvehiclelocal [0, 0, 0];
			_light attachto [_mainprojectile, [0, 0, 0]];
			_light setLightColor [0.88, 0.34, 0.13];
			_light setLightAmbient [1, 1, 1];
			_light setLightBrightness 1;
			_light setLightDayLight true;
			
			waitUntil {
				!alive _mainprojectile
			};
			deletevehicle _light;

		}] remoteExec ["spawn"];

		[[_projectile],{
			params ["_projectile"];
			_ps1 = "#particlesource" createVehicleLocal (getPosATL _projectile);
			_ps1 setParticleParams [
				["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 9, 16, 0], "", "Billboard",
				1, 10, [0, 0, 0], [0, 0, 1.5], 0, 10, 7.9, 0.066, [2, 6, 12],
				[[0.5, 0.5, 0.5, 0], [0.5, 0.5, 0.5, 0.3], [0.5, 0.5, 0.5, 0.2], [0.5, 0.5, 0.5, 0.1], [0.75, 0.75, 0.75, 0.075], [1, 1, 1, 0]],
				[0.25], 1, 0, "", "", _ps1];
			_ps1 setParticleRandom [0, [0.25, 0.25, 0], [0.2, 0.2, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
			_ps1 setDropInterval 0.01;
			_ps1 attachTo [_projectile, [0,0,1.27]];
			[_ps1,_projectile] spawn {params ['_ps1','_projectile']; waitUntil {(!alive _projectile) || ((getPosATL _projectile) # 2)<5}; if (alive _projectile) then {sleep 5;};deleteVehicle _ps1;};
		}] remoteExec ["spawn"];
		
		
		[_mainprojectile, _pos, _projectile,_squad] spawn {
			params ["_mainprojectile", "_pos", "_projectile","_squad"];
			
			{
				(vehicle _x) hideObjectGlobal true;
				(vehicle _x) attachTo [_projectile,[0,0,100]];
				(vehicle _x) enableSimulationGlobal true;
			} forEach (units _squad);
			
			_posATL=_pos;
			waitUntil {
				if (alive _mainprojectile) then {
					_posATL=getPosATL _mainprojectile;
				};
				!alive _mainprojectile;
			};
			
			
			_craterpos = _posATL;
			_craterpos set [2, 0];
			
			_crater = createvehicle ["Land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"];
			_projectile attachTo [_crater,[0,0,1.5]];
			[_projectile,random [-20,0,20],random [-45,0,45]] call BIS_fnc_setPitchBank;
			
			sleep 0.25;
			{
				(vehicle _x) enableSimulationGlobal true;
				(vehicle _x) hideObjectGlobal false;
				detach (vehicle _x);
				_pos=[getPosATL _projectile, 1, 10, 0.2, 1, 0, 0, []] call BIS_fnc_findSafePos;
				_pos set [2,0];
				(vehicle _x) setPosATL _pos;
			} forEach (units _squad);
			_squad setBehaviourStrong "COMBAT";
		};
	 }, 
	 {}, 
	 [_attachedObject] 
	] call zen_dialog_fnc_create;

},"\BBUS_ZENDropPod\icon.paa"] call zen_custom_modules_fnc_register;