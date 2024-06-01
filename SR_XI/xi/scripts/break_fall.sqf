XI_fnc_break_fall = {
	//turns of retros if already active
	if ((alive player) && ((getNumber (configFile >> 'CfgWeapons' >> vest player >> 'XI_isgravpack')) == 1) && (player getVariable 'XI_retrosActive')) exitWith {
		player setVariable ["XI_retrosActive",false,true];
	};
	if !(hasInterface) exitwith{};
	XI_jetpackFuelConsumption = getNumber (configFile >> 'CfgWeapons' >> vest player >> 'XI_gravfuelconsumption');
	XI_jetpackSlowRate = getNumber (configFile >> 'CfgWeapons' >> vest player >> 'XI_gravslowrate');

	if ((alive player) && ((getNumber (configFile >> 'CfgWeapons' >> vest player >> 'XI_isgravpack')) == 1) && ((getpos player select 2)>0.6) && !(player getVariable 'XI_retrosActive')) then {
		_player = player;
		player setVariable ["XI_retrosActive",true,true];
		
		[_player, {
			params ["_player"];
			if !(hasInterface) exitwith{};
				_JetpackFlameLeft = "#particlesource" createVehicleLocal position _player;  
				_JetpackFlameLeft setParticleClass "IEDFlameF"; 
				_JetpackFlameLeft attachto [_player,[-0.7,-0.4,0.625], "Spine3"]; 
				
				_JetpackFlameRight = "#particlesource" createVehicleLocal position _player;  
				_JetpackFlameRight setParticleClass "IEDFlameF"; 
				_JetpackFlameRight attachto [_player,[0.2,-0.55,0.625], "Spine3"]; 
	
				_JetpackLight = "#lightpoint" createVehicleLocal (getpos _player);  
				_JetpackLight setLightAmbient [0, 0, 0];  
				_JetpackLight setLightColor [1, 0.45, 0.15];  
				_JetpackLight setLightBrightness 2;
				_JetpackLight attachto [_player,[-0.2,-0.3,-0.1], "Spine3"];
				

			while {alive _player && _player getVariable 'XI_retrosActive'} do {
				sleep 0.2;
			};
			
				deleteVehicle _JetpackFlameLeft;
				deleteVehicle _JetpackFlameRight;
				deleteVehicle _JetpackLight;
		}] remoteExec ["BIS_fnc_call"];

		while {((getNumber (configFile >> 'CfgWeapons' >> vest player >> 'XI_isgravpack')) == 1) && (getpos player select 2) > 0.1 && alive player && player getVariable 'XI_retrosActive'} do {

			_vel = velocity player;
			_dir = direction player;
			
			_vel1 = (_vel select 0) / 1.5;
			_vel2 = (_vel select 1) / 1.5;
			_vel3 = (_vel select 2) / XI_jetpackSlowRate;

			player setVelocity [
				_vel1, 
				_vel2, 
				_vel3
			];
			
			sleep 0.2;
		};
		player setVariable ["XI_retrosActive",false,true];
	};
};