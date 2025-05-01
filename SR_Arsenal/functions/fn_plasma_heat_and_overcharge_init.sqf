/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR plasma gun or pistol
		aswell as a heat display and reduction loop
		(used function : fn_plasma_heat_and_overcharge_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_plasma_weapons = [
		"SR_Master_Crafted_Ragefire_PlasmaGun_1", 
		"SR_Ragefire_Plasma_Gun",
		"SR_Ryza_Plasma_Gun_01", 
		"SR_Ryza_Plasma_Gun_02", 
		"SR_Ryza_Plasma_Gun_03", 
		"SR_Ryza_Plasma_Gun_04", 
		"TIOW_SM_Combi_Bolter_1", 
		"TIOW_SM_Combi_Bolter_2", 
		"TIOW_SM_Combi_Bolter_3",
		"STEVE_TigComb_Plasma_1",
		"SR_XI_ic_PlasmaGun",
		"SR_XI_ic_PlasmaGunPurple",
		"SR_XI_ic_PlasmaGunRed",
		"SR_XI_ic_PlasmaGunYellow",
		"SR_XI_ic_PlasmaGunWhite"
	];

	_plasma_muzzles = [
		"SR_Master_Crafted_Ragefire_PlasmaGun_1", 
		"SR_Ragefire_Plasma_Gun", 
		"SR_Ryza_Plasma_Gun", 
		"SR_Ryza_Plasma_Pistol",
		"TIOW_Guard_Plasma_Pistol",
		"TIOW_SM_Under_Plas_1",
		"Steve_30k_Under_Plasma"
	];

	_plasma_pistol_weapons = [
		"SR_Ryza_Plasma_Pistol",
        "SR_Ryza_Plasma_Pistol_Banner",
		"SR_XI_TIOW_Guard_Plasma_Pistol"
	];
	
	if ("tiow_dos_ssw" in activatedAddons) then {
		_plasma_weapons = _plasma_weapons + [
			"SR_Relic_Plasma_Gun_1",
			"SR_Relic_Plasma_Gun_2",
			"SR_Relic_Plasma_Gun_3",
			"SR_Relic_Plasma_Gun_4",
			"SR_Relic_Plasma_Gun_5"
		];
	};
	
	if ("avpack" in activatedAddons) then {
		_plasma_weapons = _plasma_weapons + [
			"SR_AV_RagefirePlasmaGun",
			"SR_AV_RagefirePlasmaGun_Relic"
		];
	};
	
	if ("ctr_weapons" in activatedAddons) then {
		_plasma_weapons = _plasma_weapons + [
			"SR_CTR_Assault_Plasma_Incinerator",
			"SR_CTR_Assault_Plasma_Incinerator_Red",
			"SR_CTR_Assault_Plasma_Incinerator_Red_Alt",
			"SR_CTR_Assault_Plasma_Incinerator_White",
			"SR_CTR_Plasma_Exterminator",
			"SR_CTR_Plasma_Exterminator_Red",
			"SR_CTR_Plasma_Exterminator_Red_Alt",
			"SR_CTR_Plasma_Exterminator_White",
			"SR_CTR_Combi_Plasma_Rifle",
			"SR_CTR_Combi_Plasma_Rifle_Red",
			"SR_CTR_Combi_Plasma_Rifle_Red_Alt",
			"SR_CTR_Combi_Plasma_Rifle_White"
		];
		
		_plasma_muzzles = _plasma_muzzles + [
			"CTR_Combi_Plasma_Rifle_Under"
		];
	};
	
	{
		missionNamespace setVariable [format ["%1_heat",_x], 0];
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _plasma_weapons;
	{
		missionNamespace setVariable [format ["%1_heat",_x], 0];
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _plasma_pistol_weapons;
	
    execVM "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";}] call CBA_fnc_addEventHandler;
	
};