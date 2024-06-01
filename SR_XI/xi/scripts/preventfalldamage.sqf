XI_fnc_preventFallDamage = {
	while {alive player} do {
		if (((getNumber (configFile >> 'cfgWeapons' >> vest player >> 'XI_isgravpack')) == 1) && !(player getvariable "XI_fallDamageLoopActive")) then {
			_landingsound = selectRandom[
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_1.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_2.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_3.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_4.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_5.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_6.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_7.wss",
				"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_8.wss"
			];
			player setvariable ["XI_fallDamageLoopActive", true];
			while {alive player && ((getNumber (configFile >> 'cfgWeapons' >> vest player >> 'XI_isgravpack')) == 1)} do {
				//Prevents fall damage if altitude is under 15m but above 0.6m
				if (((getpos player select 2)>0.6) && ((velocity player select 2) > -18) && (vehicle player isEqualTo player) && !(player getVariable "XI_preventFallDamage") && !(player getVariable "XI_fallTooHigh")) then {
					player setVariable ["XI_preventFallDamage",true];
				};
				//disables fall damage prevention if player is too fast
				if (((velocity player select 2) < -18) && (vehicle player isEqualTo player) && !(player getVariable "XI_fallTooHigh")) then {
					player allowdamage true;
					player setVariable ["XI_fallTooHigh",true];
					player setVariable ["XI_preventFallDamage",false];
				};
				//reenable fall damage prevention if player isnt too fast anymore
				if (((velocity player select 2) > -18) && (vehicle player isEqualTo player) && (player getVariable "XI_fallTooHigh")) then {
					player allowdamage true;
					player setVariable ["XI_fallTooHigh",false];
					player setVariable ["XI_preventFallDamage",true];
				};

				//disables player damage for a very short time if fall damage is being prevented
				if (((getpos player select 2)<0.6) && (vehicle player isEqualTo player) && (player getVariable "XI_preventFallDamage")) then {
					player allowdamage false;
				};
				
				//resets damage again if fall damage was prevented and player is not falling anymore and hits the ground
				if (((getpos player select 2)<0.6) && ((velocity player select 2) == 0) && (player getVariable "XI_preventFallDamage") && !(player getVariable "XI_fallTooHigh")) then {
					player allowdamage true;
					player setVariable ["XI_preventFallDamage",false];
					player setVariable ["XI_tacticalJumps",0];
					//addCamShake [20, 1, 5];
					playsound3d [_landingsound, player, false, getPosASL player, 3, 1, 50]
				};

				//resets fallTooHigh variable once the player stops falling and hits the ground
				if (((getpos player select 2)<0.6) && ((velocity player select 2) == 0) && (player getVariable "XI_fallTooHigh")) then {
					player allowdamage true;
					player setVariable ["XI_fallTooHigh",false];
					player setVariable ["XI_tacticalJumps",0];
					//addCamShake [20, 1, 5];
					playsound3d [_landingsound, player, false, getPosASL player, 3, 1, 50]
				};
				sleep 0.01;
			};
			player setvariable ["XI_fallDamageLoopActive", false];
		};
		sleep 5;
	};
};