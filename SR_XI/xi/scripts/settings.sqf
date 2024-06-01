//CBA SETTINGS FOR MOBILE WEAPONS PROJECT
// bones note - yoinked code from MWP temporarily to hotfix their CBA issue
[
    "MWP_PREVENT_FALLDAMAGE",
    "CHECKBOX",
    "Prevent Falldamage",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SHOW_ACTIVATE",
    "CHECKBOX",
    "Show Activate Suit Option",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SHOW_DEACTIVATE",
    "CHECKBOX",
    "Show Deactivate Suit Option",
    "Mobile Weapons Project",
    False,
    False,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SHOW_SAFETY",
    "CHECKBOX",
    "Show Jetpack Safety Option",
    "Mobile Weapons Project",
    True,
    False,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_CAN_BREAK",
    "CHECKBOX",
    "Suit can break",
    "Mobile Weapons Project",
    True,
    False,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_BREAK_CHANCE",
    "SLIDER",
    "Chance for a part to break when hit",
    "Mobile Weapons Project",
    [0,100,10,0],
    True,
    {}
] call CBA_fnc_addSetting;


[
    "MWP_SHIELD_ENERGY",
    "SLIDER",
    "Amount of Shield Energy",
    "Mobile Weapons Project",
    [10,1000,125,0],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_JETPACK_FUEL",
    "SLIDER",
    "Amount of Jetpack Fuel",
    "Mobile Weapons Project",
    [30,1000,150,0],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_JUMP_LIMIT",
    "SLIDER",
    "Jetpack Jump Limit",
    "Mobile Weapons Project",
    [1,10,2,0],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ENERGY_ITEM",
    "EDITBOX",
    "Shield Battery Item",
    "Mobile Weapons Project",
    "MWP_battery_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_FUEL_ITEM",
    "EDITBOX",
    "Fuel Item",
    "Mobile Weapons Project",
    "MWP_fuel_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ACTUATOR_ITEM",
    "EDITBOX",
    "Actuator Repair Item",
    "Mobile Weapons Project",
    "MWP_Actuator_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_CIRCUIT_ITEM",
    "EDITBOX",
    "Helmet Repair Item",
    "Mobile Weapons Project",
    "MWP_CircuitBoard_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ICSP_ITEM",
    "EDITBOX",
    "Shield Repair Item",
    "Mobile Weapons Project",
    "MWP_ICSP_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_REPAIRKIT_ITEM",
    "EDITBOX",
    "Field Repair Kit Item",
    "Mobile Weapons Project",
    "MWP_RepairKit_Item",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_JETPACKS",
    "EDITBOX",
    "MWP Jetpacks",
    "Mobile Weapons Project",
    "MWU_Z23_Backpack,Z23_Ruck_new,Z23_Ruck_old,Z23_Ruck_RTO,HJP_Mk1,MWP_MK2_Ruck_RTO,MWP_MK2_Ruck,MWP_MK2_Ruck_RTOP,MWP_MK2_Ruck_Rifleman,MWP_MK2_Ruck_Heavy,MWP_MK2_Ruck_Medic,",
    True,
    {
		mwp_jetpack_backpacks = MWP_JETPACKS splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "MWP_UNDERSUITS",
    "EDITBOX",
    "MWP Undersuits",
    "Mobile Weapons Project",
    "XI_Triarii_Variant,indy_tezlarobes,",
    True,
    {
		mwp_undersuits = MWP_UNDERSUITS splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "MWP_ARMORED_VESTS",
    "EDITBOX",
    "MWP Armored Vests",
    "Mobile Weapons Project",
    "XI_Heavy_Lorica_Triarii,TIOW_Priest_Gear,",
    True,
    {
		mwp_armored_vests = MWP_ARMORED_VESTS splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "MWP_HELMETS",
    "EDITBOX",
    "MWP Helmets",
    "Mobile Weapons Project",
    "XI_Triarii,tezla_hood,",
    True,
    {
		mwp_helmets = MWP_HELMETS splitString ",";
	}
] call CBA_fnc_addSetting;

[
    "MWP_INCREASED_SPEED",
    "CHECKBOX",
    "Increased Speed",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SPEED_MODIFIER",
    "SLIDER",
    "Speed Modifier",
    "Mobile Weapons Project",
    [1,5,1.3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SUPPRESS_RECOIL",
    "CHECKBOX",
    "Suppress Recoil",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_RECOIL_MODIFIER",
    "SLIDER",
    "Recoil Modifier",
    "Mobile Weapons Project",
    [0,1,0.3,1],
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ENABLE_SPARKS_HIT",
    "CHECKBOX",
    "Sparks On Hit",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ENABLE_SPARKS_SHIELD",
    "CHECKBOX",
    "Sparks When Shield Depleted",
    "Mobile Weapons Project",
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_HUD_ACTIVE_INTRO",
    "CHECKBOX",
    "Hud Activation Intro",
    "Mobile Weapons Project",
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SUIT_VOICE",
    "CHECKBOX",
    "Play Suit AI Voicelines",
    "Mobile Weapons Project",
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SUIT_VOICE_TYPE",
    "LIST",
    "AI Voice",
    "Mobile Weapons Project",
   	[[0,1,2],["Zora American","Zora Eastern European","CJ"],0],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_HUD_OVERLAY",
    "CHECKBOX",
    "Show Hud Overlay",
    "Mobile Weapons Project",
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_HUD_COLOR",
    "COLOR",
    "HUD Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 1.000, 1.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_HUD_TEXT_COLOR",
    "COLOR",
    "HUD Text Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 1.000, 1.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_SHIELD_COLOR",
    "COLOR",
    "Shield Bar Tint/Transparency",
    ["Mobile Weapons Project"],
    [0.000, 0.500, 0.800, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_FUEL_COLOR",
    "COLOR",
    "Fuel Bar Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 1.000, 0.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ICON_COLOR_1",
    "COLOR",
    "Icon Warning Level 0 Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 1.000, 1.000, 0.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ICON_COLOR_2",
    "COLOR",
    "Icon Warning Level 1 Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 1.000, 1.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "MWP_ICON_COLOR_3",
    "COLOR",
    "Icon Warning Level 2 Tint/Transparency",
    ["Mobile Weapons Project"],
    [1.000, 0.000, 0.000, 1.000],
    nil,
    {}
] call CBA_fnc_addSetting;
