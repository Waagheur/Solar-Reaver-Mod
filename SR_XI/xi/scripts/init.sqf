/*	This file defines all important variables, creates the necessary functions, sets keybinds etc.	*/

//creating functions
execVM "\xi\scripts\break_fall.sqf";
execVM "\xi\scripts\preventfalldamage.sqf";

/* //just some debugging stuff, can safely remove this
[] spawn {
	[] call {
		while {true} do {
			_vel = (velocity player) select 2;
			hint format ["Retros Active: %1 - Fuel: %2 - Falldamage: %3 - Velocity: %4 - Jumps: %5", player getVariable 'XI_retrosActive', player getVariable 'XI_jetpackFuel', player getVariable 'XI_preventFallDamage', _vel, player getVariable "XI_tacticalJumps"];
			sleep 0.01;
		};
	};
};
*/

//creating keybinds

/*[
"XI_JETPACK",
"XI_jumpKey_longJump", 
"Long Range Jump", 
{[] spawn {call XI_fnc_long_jump};}, 
"", 
[0x39, [false, true, true]]
] call CBA_fnc_addKeybind;	*/

[
"XI_JETPACK",
"XI_jumpKey_retrosToggle", 
"Activate Retros", 
{[] spawn {call XI_fnc_break_fall};}, 
"", 
[0x39, [true, true, false]]
] call CBA_fnc_addKeybind;	


/*XI_fnc_fuelBar = {
	if (!(player getVariable "XI_fuelBarLoop")) then {
		"XI_FUEL_BAR" cutRsc ["XI_FUEL_BAR","PLAIN",-1,false];
		player setVariable ["XI_fuelBarLoop",true];
		disableSerialization;
		while {alive player && ((getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_isgravpack')) == 1 OR getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_canJump') == 1)} do {
			_currentFuel = player getVariable "XI_jetpackFuel";
			_displayFuel = uiNamespace getVariable "XI_HUD_FUEL";
			_setProgressFuel = _displayFuel displayCtrl -1;
			_setProgressFuel progressSetPosition (_currentFuel/XI_maxJetpackFuel);
			sleep 0.01
		};
		player setVariable ["XI_fuelBarLoop",false];
		"XI_FUEL_BAR" cutText ["","PLAIN",-1,false];
	};
};*/

//creating function to set player variables
XI_suit_ready = {
	XI_currentBackpack = backpack player;
	XI_isJetpack = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_isgravpack");
	XI_startJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelstart");
	XI_maxJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelmax");	


	player setvariable ["mpw_longrangejump_active", false];
	player setVariable ["XI_retrosActive",false];
	player setVariable ["XI_jetpackFuel",XI_startJetpackFuel];

	player setvariable ["XI_fallDamageLoopActive", false];
	player setVariable ["XI_preventFallDamage",false];
	player setVariable ["XI_fallTooHigh",false];
	player setVariable ["XI_tacticalJumps",0];
	player setVariable ["XI_fuelBarLoop",false];
	
	/*
	XI_rechargeSmallFuel = player addAction ["Refuel Jump Pack (Small)", {
		(_this select 0) params ["_target"];
		XI_currentJetpackFuel = player getvariable "XI_jetpackFuel";

		player removeItem "XI_S_GravFuel";

		if (XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_S_GravFuel' >> 'XI_gravfuel') > XI_maxJetpackFuel) then {
			player setVariable ["XI_jetpackFuel", XI_maxJetpackFuel];
		} else {
			player setVariable ["XI_jetpackFuel", XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_S_GravFuel' >> 'XI_gravfuel')];
		};
		
		//playsound "soundname";
	}, [], 6, false, true,"","(alive _originalTarget) && (((getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_isgravpack')) == 1) OR (getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_canJump') == 1)) && (player getVariable 'XI_jetpackFuel' <= XI_maxJetpackFuel - getNumber (configFile >> 'CfgWeapons' >> 'XI_S_GravFuel' >> 'XI_gravfuel')) && 'XI_S_GravFuel' in Items player"];
	*/
	/* XI_rechargeMediumFuel = player addAction ["Refuel Jump Pack (Medium)", {
		(_this select 0) params ["_target"];
		XI_currentJetpackFuel = player getvariable "XI_jetpackFuel";

		player removeItem "XI_M_GravFuel";

		if (XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_M_GravFuel' >> 'XI_gravfuel') > XI_maxJetpackFuel) then {
			player setVariable ["XI_jetpackFuel", XI_maxJetpackFuel];
		} else {
			player setVariable ["XI_jetpackFuel", XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_M_GravFuel' >> 'XI_gravfuel')];
		};

		//playsound "soundname";
	}, [], 6, false, true,"","(alive _originalTarget) && (((getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_isgravpack')) == 1) OR (getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_canJump') == 1)) && (player getVariable 'XI_jetpackFuel' <= XI_maxJetpackFuel - getNumber (configFile >> 'CfgWeapons' >> 'XI_M_GravFuel' >> 'XI_gravfuel')) && 'XI_M_GravFuel' in Items player"];
	*/
	/* XI_rechargeLargeFuel = player addAction ["Refuel Jump Pack (Large)", {
		(_this select 0) params ["_target"];
		XI_currentJetpackFuel = player getvariable "XI_jetpackFuel";

		player removeItem "XI_L_GravFuel";

		if (XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_L_GravFuel' >> 'XI_gravfuel') > XI_maxJetpackFuel) then {
			player setVariable ["XI_jetpackFuel", XI_maxJetpackFuel];
		} else {
			player setVariable ["XI_jetpackFuel", XI_currentJetpackFuel + getNumber (configFile >> 'CfgWeapons' >> 'XI_L_GravFuel' >> 'XI_gravfuel')];
		};
		
		//playsound "soundname";
		}, [], 6, false, true,"","(alive _originalTarget) && (((getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_isgravpack')) == 1) OR (getNumber (configFile >> 'CfgVehicles' >> backpack player >> 'XI_canJump') == 1)) && (player getVariable 'XI_jetpackFuel' <= XI_maxJetpackFuel - getNumber (configFile >> 'CfgWeapons' >> 'XI_L_GravFuel' >> 'XI_gravfuel')) && 'XI_L_GravFuel' in Items player"];
	*/
	[] spawn {call XI_fnc_preventFallDamage;};
	player setUnitFreefallHeight 1000;
	//[] spawn {call XI_fnc_fuelBar;};
};

//setting player variables slightly after mission start
if (hasInterface) then {
	[] spawn {
		[] call {
			waitUntil {
			sleep 1;
			(!(isNull player) && (time > 0))
			};
			call XI_suit_ready;
		};
	};
};

//setting player variables on respawn
player addEventHandler ["respawn", "call XI_suit_ready"];

//setting backpack variables on inventory and arsenal change
/*player addEventHandler ["InventoryClosed", {
	XI_currentBackpack = backpack player;
	XI_isJetpack = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_isgravpack");
	XI_startJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelstart");
	XI_maxJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelmax");	
	[] spawn {call XI_fnc_fuelBar;};
}];
[missionNamespace, "arsenalClosed", {
	XI_currentBackpack = backpack player;
	XI_isJetpack = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_isgravpack");
	XI_startJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelstart");
	XI_maxJetpackFuel = getNumber (configFile >> "CfgVehicles" >> XI_currentBackpack >> "XI_gravfuelmax");	
	[] spawn {call XI_fnc_fuelBar;};
}] call BIS_fnc_addScriptedEventHandler;*/