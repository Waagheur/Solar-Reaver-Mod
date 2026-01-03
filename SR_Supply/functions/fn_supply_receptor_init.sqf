/*
	Author: Waagheur

	Description:
		Inits a supply pad.
		An object initialised with this script will receive actions to spawn various SR supply and vehicles.

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/



if (is3DEN) exitWith {};



params ["_entity"];



_add_spawnable = {
	_spawnable = (_this select 0);
	
	_actionName = (getText (configFile >> "CfgVehicles" >> _spawnable >> "displayName"));
	_entity addAction [_actionName,{
		_spawnable = (_this select 3 select 0);
		_entity = (_this select 3 select 1);
		
		createVehicle [_spawnable, (getPos _entity) vectorAdd [0,0,0.5], [], 0, "CAN_COLLIDE"];
	},
	[_spawnable, _entity],
	10,
	true,
	true,
	"",
	"true",
	20
	];
};



// Vehicles spawners.
if ((_entity getVariable ["SR_Supply_Receptor_Vehicles", true]) == true) then {
	["TSR_Rhino_Withered"] call _add_spawnable;
	["TSR_Rhino"] call _add_spawnable;
	["TSR_Rhino_Marauder"] call _add_spawnable;
	["TSR_Rhino_Reaver"] call _add_spawnable;
	["TSR_Razorback_AC_Withered"] call _add_spawnable;
	["TSR_Razorback_AC"] call _add_spawnable;
	["TSR_Razorback_HB_Withered"] call _add_spawnable;
	["TSR_Razorback_HB"] call _add_spawnable;
	["TSR_Razorback_LC_Withered"] call _add_spawnable;
	["TSR_Razorback_LC"] call _add_spawnable;
	
	["TSR_Whirlwind_Arty_Withered"] call _add_spawnable;
	["TSR_Whirlwind_Arty"] call _add_spawnable;
	
	["TSR_Vindicator_Withered"] call _add_spawnable;
	["TSR_Vindicator"] call _add_spawnable;
	["TSR_Predator_Withered"] call _add_spawnable;
	["TSR_Predator"] call _add_spawnable;
	
	["TSR_Ass_Bike_Bolter"] call _add_spawnable;
	["TSR_Ass_Bike_Plasma"] call _add_spawnable;
	["TSR_Atk_Bike_Bolt"] call _add_spawnable;
	["TSR_Atk_Bike_Melt"] call _add_spawnable;
	
	["pxi_tauros_hmg"] call _add_spawnable;
	["pxi_tauros_unarmed"] call _add_spawnable;
	["pxi_tauros_venator"] call _add_spawnable;
	["PXI_Castellan_ARV"] call _add_spawnable;
	["PXI_MRAP_1"] call _add_spawnable;
	["XI_Chimedon"] call _add_spawnable;
	["XI_Chimera"] call _add_spawnable;
	["XI_Chimerro"] call _add_spawnable;
	
	["Dos_Guard_Rhino_2"] call _add_spawnable;
	["IC_Taurox_GatlingGun"] call _add_spawnable;
	
	["Sentinel_AC_1489th_1"] call _add_spawnable;
	["Sentinel_HB_1489th_1"] call _add_spawnable;
	["Sentinel_LC_1489th_1"] call _add_spawnable;
	["Sentinel_MLA_1489th_1"] call _add_spawnable;
	["Sentinel_ML_1489th_1"] call _add_spawnable;
	["Sentinel_PC_1489th_1"] call _add_spawnable;
	
	["XI_Hydra_Rebalance_Blufor"] call _add_spawnable;
	
	["XI_Leman_BC"] call _add_spawnable;
	["XI_Leman"] call _add_spawnable;
	["pxi_leman_vc_carnivore"] call _add_spawnable;
	
	["TSR_Ass_Ram"] call _add_spawnable;
	["SR_Steve_ColumHeli_1"] call _add_spawnable;
	["TSR_DropPod"] call _add_spawnable;
	
	["TSR_StormSpeeder"] call _add_spawnable;
	["TSR_TempSpeeder"] call _add_spawnable;
	["TSR_TornadoSpeeder"] call _add_spawnable;
	["TSR_TyphoonSpeeder"] call _add_spawnable;
	["SR_PP_Speeder_1"] call _add_spawnable;
	
	["TSR_StormEagle"] call _add_spawnable;
	["TSR_Thunderhawk"] call _add_spawnable;
	["TSR_Xiphon"] call _add_spawnable;
	["VTOL_Neph_1"] call _add_spawnable;
	
	["TSR_Cinerous"] call _add_spawnable;
	["TIOW_Valkyrie_Pylon_AC_B"] call _add_spawnable;
	["SR_ML700_Avenger_BLU"] call _add_spawnable;
};

// Supply spawners.
if ((_entity getVariable ["SR_Supply_Receptor_Supplies", true]) == true) then {
	["SR_Vehicle_Service"] call _add_spawnable;
	
	["SR_SupplyPod_Tactical"] call _add_spawnable;
	["SR_SupplyPod_Marauder"] call _add_spawnable;
	["SR_SupplyPod_Devastator"] call _add_spawnable;
	["SR_SupplyPod_Breacher"] call _add_spawnable;
	["SR_SupplyPod_Assault"] call _add_spawnable;
	["SR_SupplyPod_Medical"] call _add_spawnable;
	["SR_SupplyPod_Seeker"] call _add_spawnable;
	["SR_SupplyPod_Centuria"] call _add_spawnable;
};