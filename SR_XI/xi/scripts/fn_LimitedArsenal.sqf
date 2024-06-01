/*
Function: XI_fnc_FullArsenal
Description:
	Fills Arsenal with predefined equipment dependent on _Type. Each Arsenal can be a different type
	and have a different duration.
Arguments:
	_object - Object the Arsenal is applied to.  <OBJECT>
	_type - Type of Arsenal, can be "VANILLA", "3CB, or "RHS" <STRING>
	_Duration - How long in minutes until the Arsenal is removed. 0 makes it permanent. <SCALAR>
Examples:
	(begin example)
		[this] call XI_fnc_FullArsenal
		[this, "3CB", 50] call XI_fnc_FullArsenal;
		[this, "VANILLA"] call XI_fnc_FullArsenal;
		[MyAmmoCrate, "RHS", 0] call XI_fnc_FullArsenal;
	(end)
Author:
	MitchJC
*/

if (!isServer) exitwith {};

params [
	"_object",
	["_Type", "Vanilla"],
	["_Duration", 0]
];

call {
	if (_Type isEqualto 0) exitwith {_Type = "Vanilla"};
	if (_Type isEqualto 1) exitwith {_Type = "XI_LA"};
	if (_Type isEqualto 2) exitwith {_Type = "XI_LA_1"};
};

if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	[_object, false] call ace_arsenal_fnc_initBox;
} else {
	["AmmoboxInit", [_object, false]] call BIS_fnc_arsenal;
};

private [
	"_AvailableItems", "_AvailableHeadgear", "_AvailableGoggles",
	"_AvailableUniforms", "_AvailableVests", "_AvailableBackpacks",
	"_AvailableAttachments", "_AvailableMagazines", "_AvailableWeapons",
	"_AvailableCustoms","_AvailableConstants"
];

_ArsenalType = call {
	if (_Type isEqualTo "Vanilla") exitwith {
		_AvailableItems = [

		];

		_AvailableHeadgear = [

		];

		_AvailableGoggles = [

		];

		_AvailableUniforms = [

		];

		_AvailableVests = [
		];

		_AvailableBackpacks = [
		];

		_AvailableAttachments = [

		];

		_AvailableMagazines = [

		];

		_AvailableWeapons = [

		];

		_AvailableConstants = [

		];

		_AvailableCustoms = [

		];
	};

	if (_Type isEqualTo "ACETFAR") exitwith {
		_AvailableItems = [

		];

		_AvailableHeadgear = [];

		_AvailableGoggles = [
		];

		_AvailableUniforms = [];

		_AvailableVests = [];

		_AvailableBackpacks = [];

		_AvailableAttachments = [];

		_AvailableMagazines = [];

		_AvailableWeapons = [];

		_AvailableConstants = [

		];

		_AvailableCustoms = [

		];
	};

	/* Block I */
	if (_type isEqualTo "XI_LA") exitwith {
	    _AvailableItems = [
			#include "RAConstants.sqf"
        ];

        _AvailableHeadgear = [
        ];

        _AvailableGoggles = [
        ];

        _AvailableUniforms = [
			"XI_Sgt_Coat",
			"XI_Inf",
			"xi_triarii_U_B",
			"XI_CAD_U_B",
			"XI_CAD_U_B_G",
			"XI_Rogue_U_B",
			"XI_VELITES_Uniform_DU_1",
			"XI_VELITES_Uniform_DU_2",
			"XI_VELITES_Uniform_CTRGS_1",
			"XI_VELITES_Uniform_CTRGS_2",
			"XI_VELITES_Uniform_eWD_1",
			"XI_VELITES_Uniform_eWD_2",
			"Sev_Uniform_Grey",
			"Sev_Uniform_GreyRed",
			"Sev_Uniform_Grey2",
			"Sev_Uniform_red4",
			"Sev_Uniform_redbrown",
			"Sev_Uniform_red3",
			"Sev_Uniform_redgrey",
			"XI_winchester_custom_uniform_item"
        ];

        _AvailableVests = [
			"XI_armatus_3rdsquad",
			"XI_Armatus_conscript",
			"XI_Armatus_legionnaire",
			"XI_Armatus_vlegionnaire",
			"XI_Armatus_mlegionnaire",
			"XI_Armatus_legio_base",
			"XI_Armatus_legionnaire_Rogue",
			"XI_Armatus_legionnaire_Bones",
			"XI_Armatus_legionnaire_Hero",
			"XI_Armatus_triarii_base",
			"XI_Armatus_equites"
        ];

        _AvailableBackpacks = [
			"XI_3rd",
			"XI_3rd_Vox",
			"XI_TeamLead",
			"XI_TKEFORK_Voxslim",
			"XI_Triarii_LR",
			"XI_Triarii_EOD",
			"XI_Triarii_Medicae",
			"XI_Triarii_Backpack",
			"XI_Trooper_Backpack",
			"XI_Mediace_Backpack",
			"XI_Rocket_Trooper_Backpack",
			"XI_VWO_Backpack",
			"XI_Combat_Engineers_Backpack"
        ];

        _AvailableAttachments = [
        ];

        _AvailableMagazines = [
			#include "BI.sqf"
        ];

        _AvailableWeapons = [
        ];

		_AvailableConstants = [

		];

		_AvailableCustoms = [
			#include "RACustoms.sqf"
		];
	};

	if (_Type isEqualTo "ACETFAR") exitwith {
		_AvailableItems = [

		];

		_AvailableHeadgear = [];

		_AvailableGoggles = [
		];

		_AvailableUniforms = [];

		_AvailableVests = [];

		_AvailableBackpacks = [];

		_AvailableAttachments = [];

		_AvailableMagazines = [];

		_AvailableWeapons = [];
	};

	/* Block II */
	if (_type isEqualTo "XI_LA_1") exitwith {
	    _AvailableItems = [
			#include "RAConstants.sqf"
        ];

        _AvailableHeadgear = [
        ];

        _AvailableGoggles = [
        ];

        _AvailableUniforms = [
			"XI_Sgt_Coat",
			"XI_Inf",
			"xi_triarii_U_B",
			"XI_CAD_U_B",
			"XI_CAD_U_B_G",
			"XI_Rogue_U_B",
			"XI_VELITES_Uniform_DU_1",
			"XI_VELITES_Uniform_DU_2",
			"XI_VELITES_Uniform_CTRGS_1",
			"XI_VELITES_Uniform_CTRGS_2",
			"XI_VELITES_Uniform_eWD_1",
			"XI_VELITES_Uniform_eWD_2",
			"Sev_Uniform_Grey",
			"Sev_Uniform_GreyRed",
			"Sev_Uniform_Grey2",
			"Sev_Uniform_red4",
			"Sev_Uniform_redbrown",
			"Sev_Uniform_red3",
			"Sev_Uniform_redgrey",
			"XI_winchester_custom_uniform_item"
        ];

        _AvailableVests = [
			"XI_armatus_3rdsquad",
			"XI_Armatus_conscript",
			"XI_Armatus_legionnaire",
			"XI_Armatus_vlegionnaire",
			"XI_Armatus_mlegionnaire",
			"XI_Armatus_legio_base",
			"XI_Armatus_legionnaire_Rogue",
			"XI_Armatus_legionnaire_Bones",
			"XI_Armatus_legionnaire_Hero",
			"XI_Armatus_triarii_base",
			"XI_Armatus_equites"
        ];

        _AvailableBackpacks = [
			"XI_3rd",
			"XI_3rd_Vox",
			"XI_TeamLead",
			"XI_TKEFORK_Voxslim",
			"XI_Triarii_LR",
			"XI_Triarii_EOD",
			"XI_Triarii_Medicae",
			"XI_Triarii_Backpack",
			"XI_Trooper_Backpack",
			"XI_Mediace_Backpack",
			"XI_Rocket_Trooper_Backpack",
			"XI_VWO_Backpack",
			"XI_Combat_Engineers_Backpack"
        ];

        _AvailableAttachments = [
        ];

        _AvailableMagazines = [
			#include "BII.sqf"
			#include "BI.sqf"
        ];

        _AvailableWeapons = [
        ];

		_AvailableConstants = [

		];

		_AvailableCustoms = [
			#include "RACustoms.sqf"

		];
	};
};

if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	[_object, _AvailableHeadGear, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableGoggles, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableUniforms, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableVests, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableItems, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableAttachments, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableWeapons, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableBackpacks, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableMagazines, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableCustoms, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableConstants, true] call ace_arsenal_fnc_addVirtualItems;
} else {
	[_object, _AvailableHeadGear, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableGoggles, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableUniforms, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableVests, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableItems, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableAttachments, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableWeapons, true] call BIS_fnc_addVirtualWeaponCargo;
	[_object, _AvailableBackpacks, true] call BIS_fnc_addVirtualBackpackCargo;
	[_object, _AvailableMagazines, true] call BIS_fnc_addVirtualMagazineCargo;
	[_object, _AvailableCustoms, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableConstants, true] call ace_arsenal_fnc_addVirtualItems;
};

{
	_x addCuratorEditableObjects [[_object], false];
} forEach allCurators;


_handle = [
	{
		(_this select 0) params ["_object", "_duration"];

		if (_duration == 0) exitwith {
			[_handle] call CBA_fnc_removePerFrameHandler;
		};

		if (time > (_duration * 60)) exitwith {
			deletevehicle _object;
			[_handle] call CBA_fnc_removePerFrameHandler;
		};
	}, 60, [_object, _duration]
] call CBA_fnc_addPerFrameHandler;