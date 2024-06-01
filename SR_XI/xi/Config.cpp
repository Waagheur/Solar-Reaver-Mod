class CfgPatches
{
	class xi
	{
		vehicles[]={
			"xi_general_ammo",
			"xi_Specalist_ammo",
			"xi_general_equipment",
			"xi_general_medical"
		};
		units[]=
		{
			"XI_Vehicle_Service",
			"xi_general_ammo",
			"xi_general_equipment",
			"xi_general_medical",
			"PXI_Castellan_ARV",
			"XI_inf_MG1",
			"xi_shield_base",
			"XI_TeamLead",
			"XI_TKEFORK_VoxSlim",
			"XI_Trooper_Backpack",
			"XI_Mediace_Backpack",
			"XI_Rocket_Trooper_Backpack",
			"XI_Combat_Engineers_Backpack",
			"xi_Specalist_ammo",
			"TIOW_Oberon"
		};
		weapons[]=
		{
			"XI_inf",
			"XI_Sgt_Coat",
			"GSB_CadianArmour",
			"GSB_CadianArmour2",
			"GSB_CadianArmour3",
			"GSB_CadianArmour4",
			"gsb_aquila",
			"gsb_agrip",
			"gsb_cad",
			"gsb_cad_heavy",
			"XI_Heavy_Lorica",
			"XI_Flak_Armor",
			"XI_Flak_Armor_NCO",
			"XI_Flak_Medicae",
			"XI_Drone_A_packed",
			"XI_Turret_A_packed"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark",
			"IC_weapons_base",
			"Cadian_Weapons",
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"cba_main",
			"ace_logistics_uavbattery",
			"WBK_MeleeMechanics",
			"A3_Armor_F_Beta",
			"TIOW_structures",
			"mti_fortify",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"cba_xeh",
			"ace_marker_flags"
		};
	};
};
class CfgFactionClasses
{
	class xi_legion_fac
	{
		displayName="[XI] XI Legion";
		priority=1;
		side=1;
		icon="";
	};
	class xi_legion_fac_opfor
	{
		displayName="[XI] XI Legion OpFor Items";
		priority=1;
		side=2;
		icon="";
	};
};
class CfgEditorCategories
{
	class xi_categ_editor
	{
		displayname="[XI] XI Legion";
	};
	class xi_categ_editor_opFor
	{
		displayname="[XI] XI Legion OpFor Items";
	};
};
class CfgEditorSubcategories
{
	class xi_subcat_fz
	{
		displayName="Vehicles";
	};
	class xi_subcat_men
	{
		displayName="Men";
	};
	class xi_subcat_Helicopters
	{
		displayName="Helicopters";
	};
};
class ACEX_Fortify_Presets
{
	class myPreset
	{
		displayName="40k";
		objects[]=
		{
			
			{
				"TIOW_Dragons_Teeth",
				3
			},
			
			{
				"WH40k_Barricade_dow2",
				5
			},
			
			{
				"Land_Sandbag_Straight",
				5
			},
			
			{
				"Land_Sandbag_Straight",
				5
			},
			
			{
				"Land_Sandbag_Static",
				5
			},
			
			{
				"Land_TIOW_adl_single",
				5
			},
			
			{
				"Land_TIOW_adl_double",
				10
			},
			
			{
				"Land_Plank_01_4m_F",
				10
			},
			
			{
				"Land_Razorwire_F",
				10
			},
			
			{
				"Land_Barrier",
				10
			}
		};
	};
};
class mti_fortify_presets
{
	class Default
	{
		scope=0;
		displayName="";
		backpackOnly=0;
		category="";
		condition="true";
		class Objects
		{
		};
	};
	class pxi_testing_mortarkit: Default
	{
		displayName="mortarkit";
		scope=1;
		class objects
		{
			class _xx_Mortar_Mk6
			{
				name="B_Mortar_01_F";
				cost=10;
				limit=1;
			};
		};
	};
	class pxi_misc_1: Default
	{
		displayName="Misc Objects";
		scope=1;
		category="Misc";
		class objects
		{
			class _xx_ace_track
			{
				name="ACE_Track";
				cost=0;
				limit=-1;
			};
			class _xx_ace_wheel
			{
				name="ACE_Wheel";
				cost=0;
				limit=-1;
			};
			class _xx_plank_4m
			{
				name="Land_Plank_01_4m_F";
				cost=0;
				limit=-1;
			};
			class _xx_plank_8m
			{
				name="Land_Plank_01_8m_F";
				cost=0;
				limit=-1;
			};
			class _xx_Land_CzechHedgehog_01_old_F
			{
				name="Land_CzechHedgehog_01_old_F";
				cost=0;
				limit=-1;
			};
			class _xx_indirectCover
			{
				name="Land_CncShelter_F";
				cost=5;
				limit=-1;
			};
			class _xx_indirectCover1
			{
				name="Land_CncWall4_F";
				cost=5;
				limit=-1;
			};
			class _xx_tiowsandbag1
			{
				name="land_sandbag_curved";
				cost=5;
				limit=-1;
			};
			class _xx_tiowsandbag2
			{
				name="land_sandbag_straight";
				cost=5;
				limit=-1;
			};
			class _xx_tiowsandbag3
			{
				name="land_sandbag_static";
				cost=5;
				limit=-1;
			};
			class _xx_Wire
			{
				name="Wire";
				cost=5;
				limit=-1;
			};
			class _xx_Flag_pxi_1stC
			{
				name="Flag_pxi_1stC";
				cost=5;
				limit=-1;
			};
			class _xx_Flag_pxi_2ndC
			{
				name="Flag_pxi_2ndC";
				cost=5;
				limit=-1;
			};
			class _xx_Flag_pxi_Main
			{
				name="Flag_pxi_Main";
				cost=5;
				limit=-1;
			};
			class _xx_Flag_pxi_Aux
			{
				name="Flag_pxi_Aux";
				cost=5;
				limit=-1;
			};
		};
	};
	class pxi_fortifications_light: Default
	{
		displayName="Fortifications (Light)";
		scope=1;
		category="Fortifications";
		class objects
		{
			class _xx_dmbunker1
			{
				name="land_dmBunker1";
				cost=40;
				limit=2;
			};
			class _xx_tiowsandbag1
			{
				name="land_sandbag_curved";
				cost=5;
				limit=-1;
			};
			class _xx_tiowsandbag2
			{
				name="land_sandbag_straight";
				cost=5;
				limit=-1;
			};
			class _xx_tiowsandbag3
			{
				name="land_sandbag_static";
				cost=5;
				limit=-1;
			};
			class _xx_Land_PortableLight_double_F
			{
				name="Land_PortableLight_double_F";
				cost=5;
				limit=-1;
			};
		};
	};
	class pxi_fortifications_med: Default
	{
		displayName="Fortifications (Medium)";
		scope=1;
		category="Fortifications";
		class objects
		{
			class _xx_landLSB_wall
			{
				name="land_lsb_fob_hBarrier_Wall";
				cost=40;
				limit=-1;
			};
			class _xx_landLSB_wall_1
			{
				name="land_lsb_fob_hBarrierWall_4";
				cost=40;
				limit=-1;
			};
			class _xx_landLSB_wall_2
			{
				name="land_lsb_fob_hBarrierWall_7";
				cost=40;
				limit=-1;
			};
			class _xx_landLSB_wall_3
			{
				name="land_lsb_fob_hBarrierWall_exvertedCorner";
				cost=40;
				limit=-1;
			};
			class _xx_landLSB_wall_4
			{
				name="land_lsb_fob_hBarrierWall_invertedCorner";
				cost=40;
				limit=-1;
			};
			class _xx_landLSB_wall_5
			{
				name="land_lsb_fob_hBarrierWall_ramp";
				cost=40;
				limit=-1;
			};
		};
	};
	class pxi_static_small: Default
	{
		displayName="Static Positions Small";
		scope=1;
		category="Statics";
		class objects
		{
			class _xx_GDAtallbolter
			{
				name="ML700_Static_HeavyBolter_Tripod_High";
				cost=40;
				limit=2;
			};
		};
	};
	class pxi_bridge_kit: Default
	{
		displayName="Bridge Kit";
		scope=1;
		category="Misc";
		class objects
		{
			class _xx_MEOPBridgeFoot
			{
				name="Land_MEOP_build_FactoryBridgeS";
				cost=10;
				limit=-1;
			};
			class _xx_TIOWBridge1
			{
				name="Land_AirstripPlatform_01_F";
				cost=60;
				limit=-1;
			};
		};
	};
	class pxi_mtiFortify_Kits_1: Default
	{
		displayName="Fortify Kits";
		scope=1;
		category="Misc";
		class objects
		{
			class _xx_PXIFOBKITMEDIUM
			{
				name="pxi_fobkit_medium";
				cost=100;
				limit=-1;
			};
			class _xx_PXIBRIDGEKIT
			{
				name="pxi_bridgebuilding_kit";
				cost=100;
				limit=-1;
			};
		};
	};
};
class CfgFunctions
{
	class Bones
	{
		class Servicing
		{
			class canService
			{
				file="\SR_XI\xi\scripts\fn_canService.sqf";
			};
			class service
			{
				file="\SR_XI\xi\scripts\fn_service.sqf";
			};
		};
	};
	// class xi
	// {
		// class Drone
		// {
			// class drones_CanUnpack
			// {
				// file="\xi\scripts\fn_drones_canUnpack.sqf";
			// };
			// class drones_Unpack
			// {
				// file="\xi\scripts\fn_drones_unpack.sqf";
			// };
			// class drones_Pack
			// {
				// file="\xi\scripts\fn_drones_pack.sqf";
			// };
		// };
	// };
	class xi_arsenals
	{
		class xi_arsenals_1
		{
			class limitedArsenals_fn
			{
				file="\SR_XI\xi\scripts\fn_limitedArsenal.sqf";
			};
		};
	};
	class adv_bobcat
	{
		tag="adv_bobcat";
		class init
		{
			file="\SR_XI\xi\scripts";
			class bobcat
			{
			};
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class xi_resupply_base
	{
		class XI_initCarry
		{
			init="(_this select 0) setVariable [""ace_dragging_ignoreWeightCarry"",true,true]";
		};
		class XI_initDrag
		{
			init="(_this select 0) setVariable [""ace_dragging_ignoreWeightDrag"",true,true]";
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class XI_WeaponCheck
	{
		clientInit="call compileScript ['\xi\scripts\XEH_clientinit.sqf']";
	};
	class XI_JumpScript
	{
		init="execVM '\xi\scripts\init.sqf';";
	};
};
class Extended_Init_EventHandlers
{
	class PXI_Castellan_ARV
	{
		class adv_bobcat_EVH_init
		{
			init="_this call adv_bobcat_fnc_bobcat";
		};
	};
	class pxi_lemanBC_ARV
	{
		class adv_bobcat_EVH_init
		{
			init="_this call adv_bobcat_fnc_bobcat";
		};
	};
};
class ctrlToolbox;
class Cfg3DEN
{
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title;
			};
		};
		class XI_LimitedArsenal_Select: Title
		{
			attributeLoad="(_this controlsGroupCtrl 100) lbSetCurSel (((_value + 1) min 4) max 0);";
			attributeSave="(lbCurSel (_this controlsGroupCtrl 100)) - 1";
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: ctrlToolbox
				{
					idc=100;
					style="0x02";
					x="48 * (pixelW * pixelGrid * 0.50)";
					w="80 * (pixelW * pixelGrid * 0.50)";
					h="5 * (pixelH * pixelGrid * 0.50)";
					rows=1;
					columns=4;
				};
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			class LRG_attributes
			{
				displayName="Limited Arsenals";
				collapsed=1;
				class Attributes
				{
					class XI_LimitedArsenals
					{
						property="XI_LimitedArsenals";
						control="combo";
						displayName="Arsenal Selection:";
						tooltip="Removes all items from this container and replaces them with a Arsenal for the selected group.";
						expression="if (_value > 0) then {[_this,_value] call xi_arsenals_fnc_limitedArsenals_fn;};";
						typeName="NUMBER";
						condition="1 - objectControllable";
						defaultValue=0;
						class Values
						{
							class None
							{
								name="None";
								value=0;
							};
							class BI
							{
								name="Limited Arsenal (B/I)";
								value=1;
							};
							class BII
							{
								name="Limited Arsenal (B/II)";
								value=2;
							};
						};
					};
				};
			};
		};
	};
};
class CfgMarkerColors
{
	class Default
	{
		scope=1;
	};
	class ColorZeus: Default
	{
		name="Centurion (High Command)";
		color[]={0.184,0.31,0.31,1};
		scope=2;
	};
	class ColorDFC: Default
	{
		name="DFC";
		color[]={0.62699997,0.322,0.176,1};
		scope=2;
	};
	class ColorTriarii: Default
	{
		name="Triarii";
		color[]={0.122,0.122,0.122,1};
		scope=2;
	};
	class ColorVelites: Default
	{
		name="Velites";
		color[]={0.27500001,0.50999999,0.70599997,1};
		scope=2;
	};
	class ColorDoctores: Default
	{
		name="Doctores";
		color[]={1,0.62699997,0.47799999,1};
		scope=2;
	};
	class ColorPrincipesNCO: Default
	{
		name="Principes Cohort (NCO)";
		color[]={0.294,0,0.50999999,1};
		scope=2;
	};
	class ColorPrincipes1st: Default
	{
		name="Principes 1st Squad";
		color[]={0.722,0.52499998,0.043000001,1};
		scope=2;
	};
	class ColorPrincipes2nd: Default
	{
		name="Principes 2nd Squad";
		color[]={1,0,1,1};
		scope=2;
	};
	class ColorPrincipes3rd: Default
	{
		name="Principes 3rd Squad";
		color[]={0.57599998,0.43900001,0.85900003,1};
		scope=2;
	};
	class ColorArmorum: Default
	{
		name="Armorum";
		color[]={1,0.271,0,1};
		scope=2;
	};
};
class Mode_FullAuto;
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class ItemInfo;
	class HeadgearItem;
	class ACE_ItemCore;
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class IC_SL_U_OP;
	class XI_inf: IC_SL_U_OP
	{
		author="Bones";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="'[XI] Touge-Variant Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="XI_inf_MG1";
			containerClass="Supply90";
			mass=80;
		};
	};
	class XI_Med: XI_inf
	{
		author="Bones";
		scope=0;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="'[XI] Medicae";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="XI_Med_MG1";
			containerClass="Supply90";
			mass=80;
		};
	};
	class kc_coat;
	class XI_Sgt_Coat: kc_coat
	{
		author="Bones";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="'[XI] Sergeant";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="XI_Sgt";
			containerClass="Supply90";
			mass=80;
		};
	};
	class IC_CAD_FlakArmor_Grey;
	class IC_CAD_FlakArmor_Band_Grey;
	class IC_CAD_FlakArmor_03_Grey;
	class ic_stormtrooper_Vest3;
	class VestItem;
	class XI_Flak_Base: IC_CAD_FlakArmor_Grey
	{
		scope=0;
		class ItemInfo;
	};
	class XI_Flak_Base_NCO: IC_CAD_FlakArmor_03_Grey
	{
		scope=0;
		class ItemInfo;
	};
	class XI_Flak_Base_Medicae: IC_CAD_FlakArmor_Band_Grey
	{
		scope=0;
		class ItemInfo;
	};
	class XI_Heavy_Flak_Base_V2: ic_stormtrooper_Vest3
	{
		scope=0;
		class ItemInfo;
	};
	class dm_CadianArmour2;
	class GSB_CadianArmour: dm_CadianArmour2
	{
		displayName="[GSB] Vest 1";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_armor.paa",
			"\XI\Data\GSB Stuff\gsb_shoulder.paa"
		};
	};
	class dm_CadianArmour;
	class GSB_CadianArmour2: dm_CadianArmour
	{
		displayName="[GSB] Vest 2";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_armor.paa"
		};
	};
	class dm_CadianArmour3;
	class GSB_CadianArmour3: dm_CadianArmour3
	{
		displayName="[GSB] Vest 3";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_armor.paa",
			"\XI\Data\GSB Stuff\gsb_shoulder.paa"
		};
	};
	class dm_CadianArmour4;
	class GSB_CadianArmour4: dm_CadianArmour4
	{
		displayName="[GSB] Vest 3";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_armor.paa"
		};
	};
	class ic_AquilaHelm;
	class gsb_aquila: ic_AquilaHelm
	{
		author="Winchester";
		scope=2;
		displayName="[GSB] Aquila Helmet";
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_aquila.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class ic_AgripinaaHelm;
	class gsb_agrip: ic_AgripinaaHelm
	{
		author="Winchester";
		scope=2;
		displayName="[GSB] Agripinaa Helmet";
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_helmet2.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class ic_CAD_Helmet_grey;
	class gsb_cad: ic_CAD_Helmet_grey
	{
		author="Winchester";
		scope=2;
		displayName="[GSB] Cad Helmet";
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_helmet1.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class ic_CAD_Heavy_Helmet_grey;
	class gsb_cad_heavy: ic_CAD_Heavy_Helmet_grey
	{
		author="Winchester";
		scope=2;
		displayName="[GSB] Cad Heavy Helmet";
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\GSB Stuff\gsb_helmet_heavy.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class XI_Heavy_Lorica: XI_Heavy_Flak_Base_V2
	{
		displayName="[Severan] Heavy Lorica-Variant";
		scope=2;
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.73000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.73000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.73000002;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=10;
					passThrough=0.30000001;
				};
			};
		};
	};
	class XI_Heavy_Lorica_Triarii: XI_Heavy_Lorica
	{
		displayName="'[XI] Triarii Lorica-Variant";
		scope=0;
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=90;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=50;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class XI_Flak_Armor: XI_Flak_Base
	{
		displayName="'[Severan] Lorica-Variant";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa",
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.73000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.73000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.73000002;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=10;
					passThrough=0.30000001;
				};
			};
		};
	};
	class XI_Flak_Armor_NCO: XI_Flak_Base_NCO
	{
		displayName="[Severan] NCO Lorica-Variant";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa",
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
		};
	};
	class XI_Flak_Medicae: XI_Flak_Base_Medicae
	{
		displayName="[Severan] Medicae Lorica-Variant";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa",
			"\XI\Data\XI Vests\XI_Guardsmen_Vest.paa",
			"\XI\Data\XI Vests\XI_Bandolier_Med.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
		};
	};
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class XI_LPMaskV2: NVGoggles
	{
		scope=0;
		author="Rogue771";
		displayname="'[XI] (LP) Face Mask V2";
		model="xi\XIMaskV2Arma.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="xi\XIMaskV2Arma.p3d";
			modelOff="xi\XIMaskV2Arma.p3d";
		};
	};
	class XI_LPMaskV2Rogue: NVGoggles
	{
		scope=0;
		author="Rogue771";
		displayname="'[XI] (LP) Face Mask V2 Rogue";
		model="xi\XIMaskV2ArmaRogue.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="xi\XIMaskV2ArmaRogue.p3d";
			modelOff="xi\XIMaskV2ArmaRogue.p3d";
		};
	};
	class WBK_Narth_3;
	class xi_WBK_Narth_3: WBK_Narth_3
	{
		displayName="'[XI] Narthecium Class-I, Pattern-II";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	// class XI_drone_packed_base: ACE_ItemCore
	// {
		// scope=1;
		// author="Mokka [ARCA]";
		// class ItemInfo: CBA_MiscItem_ItemInfo
		// {
			// mass=50;
		// };
	// };
	// class XI_Turret_packed_base: ACE_ItemCore
	// {
		// scope=1;
		// author="Mokka [ARCA]";
		// class ItemInfo: CBA_MiscItem_ItemInfo
		// {
			// mass=50;
		// };
	// };
	// class XI_Drone_A_packed: XI_drone_packed_base
	// {
		// scope=2;
		// displayName="[XI] Drone A (Packed)";
		// descriptionShort="Drone (Packed)";
		// model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		// picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
		// hiddenSelectionsTextures[]=
		// {
			// "A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		// };
		// XI_unpacksTo="XI_Drone_A";
	// };
	// class XI_Turret_A_packed: XI_Turret_packed_base
	// {
		// scope=2;
		// displayName="[XI] Turret A (Packed)";
		// descriptionShort="Turret (Packed)";
		// XI_unpacksTo="XI_Turret_A";
		// model="turretspatch\objects\TarantulaSentry.p3d";
		// picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
	// };
	class detectorCore;
	class MineDetector: detectorCore
	{
		scope=0;
	};
	class ace_marker_flags_white: ACE_ItemCore
	{
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0;
		};
	};
};
class CfgVehicles
{
	class B_APC_Tracked_01_CRV_F;
	class AnimationSources;
	class PXI_Castellan_ARV: B_APC_Tracked_01_CRV_F
	{
		displayName="[P.XI] Castellan-Pattern Armored Recovery Vehicle";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		weapons[]=
		{
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		ace_rearm_defaultSupply=1200;
		ace_cargo_space=22;
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Vehicles\APC_Tracked_01_body_XI_CO.paa",
			"\XI\Data\XI Vehicles\MBT_01_body_XI_CO.paa",
			"\XI\Data\XI Vehicles\turret_co.paa",
			"\XI\Data\XI Vehicles\APC_Tracked_01_XI_CO.paa"
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showWheels",
			1,
			"showAmmobox",
			1,
			"showBags",
			1
		};
		mti_fortify_canFortify=1;
		mti_fortify_availablePresets[]=
		{
			"pxi_mtiFortify_Kits_1",
			200,
			"pxi_fortifications_light",
			600,
			"pxi_static_small",
			600
		};
		armorStructural=10;
		engineMOI=12;
		maxSpeed=95;
		enginePower=2100;
		peakTorque=4900;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
	};
	class MEOP_cont_CrateShipping_yellow;
	class pxi_fobkit_medium: MEOP_cont_CrateShipping_yellow
	{
		displayName="'[PXI] Medium-Fortifications Kit";
		mti_fortify_canFortify=1;
		mti_fortify_availablePresets[]=
		{
			"pxi_fortifications_med",
			600
		};
	};
	class MEOP_cont_CrateShipping_white;
	class pxi_bridgebuilding_kit: MEOP_cont_CrateShipping_white
	{
		displayName="'[PXI] Bridge-Building Kit";
		mti_fortify_canFortify=1;
		mti_fortify_availablePresets[]=
		{
			"pxi_bridge_kit",
			600
		};
	};
	class HitPoints;
	class IC_SL_inf_base;
	class XI_inf_MG1: IC_SL_inf_base
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"IC_SL_VEST_01",
			"IC_SL_HELMET_01",
			"IC_SL_GASMASK",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_men";
		displayName="[]";
		uniformClass="XI_inf";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Uniform\XI_Trooper_Top.paa",
			"\XI\Data\XI Uniform\XI_Trooper_Bottom.paa"
		};
		class EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough="0.33000001radius = 0.18";
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=30;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=10;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=10;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=10;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=30;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=3;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class XI_Med_MG1: XI_inf_MG1
	{
		scope=0;
		scopecurator=0;
		scopearsenal=0;
		linkedItems[]=
		{
			"IC_SL_VEST_01",
			"IC_SL_HELMET_01",
			"IC_SL_GASMASK",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_men";
		displayName="[]";
		uniformClass="XI_Med";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI\Data\XI Uniform\XI_Medicae_Top.paa",
			"\XI\Data\XI Uniform\XI_Trooper_Bottom.paa"
		};
	};
	class ic_VoxBackpack;
	class IC_Scion_Powerpack_01;
	class XI_TeamLead: ic_VoxBackpack
	{
		scopecurator=2;
		displayName="'[XI] LR SL/TL";
		maximumLoad=525;
		tf_range=90000;
	};
	class TKE_RadioPackUCN;
	class XI_TKEFORK_VoxSlim: TKE_RadioPackUCN
	{
		scopecurator=2;
		displayName="'[XI] LR SL/TL (SLIM)";
		maximumLoad=525;
		tf_range=90000;
	};
	class IC_CadianBackpackV5;
	class DKoK_Eng_BackPack;
	class IC_CadianBackpackV7;
	class IC_CadianBackpackV8;
	class XI_Trooper_Backpack: IC_CadianBackpackV5
	{
		scopecurator=2;
		author="Bones";
		displayName="'[XI] Trooper Sarcina-Variant";
		maximumLoad=450;
		class XtdGearInfo
		{
			model="XI_Trooper_Backpacks";
			camo="a";
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class XI_Mediace_Backpack: IC_CadianBackpackV7
	{
		scopecurator=2;
		author="Bones";
		displayName="'[XI] Medicae/CLS Sarcina-Variant";
		maximumLoad=580;
		class XtdGearInfo
		{
			model="XI_Trooper_Backpacks";
			camo="b";
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class IC_CarryAll;
	class XI_Rocket_Trooper_Backpack: IC_CarryAll
	{
		scopecurator=2;
		author="Bones";
		displayName="'[XI] AT Sarcina-Variant";
		maximumLoad=600;
		class XtdGearInfo
		{
			model="XI_Trooper_Backpacks";
			camo="c";
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class XI_Combat_Engineers_Backpack: IC_CadianBackpackV8
	{
		scopecurator=2;
		author="Bones";
		displayName="'[XI] Assault Pioneer Sarcina-Variant";
		maximumLoad=600;
		class XtdGearInfo
		{
			model="XI_Trooper_Backpacks";
			camo="d";
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_mortarman_backpack: IC_CadianBackpackV8
	{
		displayName="'[P.XI] Mortarman Backpack";
		mti_fortify_canFortify=1;
		mti_fortify_availablePresets[]=
		{
			"pxi_testing_mortarkit",
			20,
			"pxi_misc_1",
			200
		};
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=90000;
	};
	class pxi_logiteam_backpack: IC_CadianBackpackV8
	{
		displayName="'[P.XI] Logistics Team Backpack";
		mti_fortify_canFortify=1;
		mti_fortify_availablePresets[]=
		{
			"pxi_misc_1",
			200
		};
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=90000;
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName="Service Vehicle";
					condition="_this call bones_fnc_canService";
					statement="_this call bones_fnc_service";
					icon="";
				};
			};
		};
	};
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName="Service Vehicle";
					condition="_this call bones_fnc_canService";
					statement="_this call bones_fnc_service";
					icon="";
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName="Service Vehicle";
					condition="_this call bones_fnc_canService";
					statement="_this call bones_fnc_service";
					icon="";
				};
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName="Service Vehicle";
					condition="_this call bones_fnc_canService";
					statement="_this call bones_fnc_service";
					icon="";
				};
			};
		};
	};
	class Box_NATO_Wps_F;
	class XI_Vehicle_Service: Box_NATO_Wps_F
	{
		author="Mokka";
		displayName="XI Legion Vehicle Servicing Kit";
		arca_aircraft_canService=1;
		arca_aircraft_service_repairOnly=0;
		maximumLoad=100;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class box_NATO_Equip_F;
	class xi_resupply_base: box_NATO_Equip_F
	{
		displayName="[XI] Supply Box Baseclass";
		maximumLoad=5000;
		ACE_maxWeightCarry=5000;
		ACE_maxWeightDrag=5000;
		ace_dragging_carryDirection=270;
		scope=0;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class xi_general_ammo: xi_resupply_base
	{
		displayName="[XI] General Ammunition";
		scope=2;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_xi_825_standard_mag_BII
			{
				magazine="xi_825_standard_mag_BII";
				count=40;
			};
			class _xx_xi_825_standard_mag_BI
			{
				magazine="xi_825_standard_mag_BI";
				count=40;
			};
			class _xx_xi_23rnd_autogun_br_BII
			{
				magazine="xi_23rnd_autogun_br_BII";
				count=30;
			};
			class _xx_xi_825_standard_mag_lmg_BII
			{
				magazine="xi_825_standard_mag_lmg_BII";
				count=20;
			};
			class _xx_xi_825_standard_mag_lmg_tracers_BII
			{
				magazine="xi_825_standard_mag_lmg_tracers_BII";
				count=20;
			};
			class _xx_xi_laspack_standard_BII
			{
				magazine="xi_laspack_standard_BII";
				count=40;
			};
			class _xx_ic_bolt_small_mag
			{
				magazine="ic_bolt_small_mag";
				count=20;
			};
			class _xx_xi_12mm_5rnd_Mag_BII
			{
				magazine="xi_12mm_5rnd_Mag_BII";
				count=10;
			};
			class _xx_XI_Longlas_Mag_BII
			{
				magazine="XI_Longlas_Mag_BII";
				count=20;
			};
			class _xx_XI_DMR_Mag_BII
			{
				magazine="XI_DMR_Mag_BII";
				count=20;
			};
			class _xx_XI_IG_UBGL_Smoke_White_Mag_3rnd
			{
				magazine="XI_IG_UBGL_Smoke_White_Mag_3rnd";
				count=10;
			};
			class _xx_XI_IG_UBGL_Smoke_Red_Mag_3rnd
			{
				magazine="XI_IG_UBGL_Smoke_Red_Mag_3rnd";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
	};
	class xi_Specalist_ammo: xi_resupply_base
	{
		model="\A3\Supplies_F_Exp\Ammoboxes\Uniforms_Box_F.p3d";
		hiddenSelections="[""camo"",""camo_signs""]";
		hiddenSelectionsTextures="[""\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa"",""\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa""]";
		icon="\WHobjects\scenery\Containers_Combined\Icons\simple_tiow_icon.paa";
		picture="\WHobjects\scenery\Containers_Combined\Icons\simple_tiow_icon.paa";
		displayName="[XI] Specalist Ammunition";
		scope=2;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_XI_Melta_Mag_Normal_BII
			{
				magazine="XI_Melta_Mag_Normal_BII";
				count=10;
			};
			class _xx_Lucius22c_Pellet
			{
				magazine="Lucius22c_Pellet";
				count=20;
			};
			class _xx_Lucius22c_Solid
			{
				magazine="Lucius22c_Solid";
				count=20;
			};
			class _xx_ic_krakk_missile_mag
			{
				magazine="ic_krakk_missile_mag";
				count=10;
			};
			class _xx_ic_frag_missile_mag
			{
				magazine="ic_frag_missile_mag";
				count=10;
			};
			class _xx_ic_frag_rocket_mag
			{
				magazine="ic_frag_rocket_mag";
				count=10;
			};
			class _xx_ic_Krak_rocket_mag
			{
				magazine="ic_Krak_rocket_mag";
				count=10;
			};
			class _xx_ic_flak_missile_mag
			{
				magazine="ic_flak_missile_mag";
				count=10;
			};
			class _xx_xi_hellgun_mag_highband_BI
			{
				magazine="xi_hellgun_mag_highband_BI";
				count=20;
			};
			// class _xx_BD_HE
			// {
				// magazine="BD_HE";
				// count=20;
			// };
			// class _xx_BD_HEAT
			// {
				// magazine="BD_HEAT";
				// count=20;
			// };
		};
		class TransportWeapons
		{
		};
	};
	class xi_general_equipment: xi_resupply_base
	{
		displayName="[XI] General Equipment";
		scope=2;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=5;
			};
			class _xx_ACE_EntrenchingTool
			{
				name="ACE_EntrenchingTool";
				count=10;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=3;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=5;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_TFAR_anprc152
			{
				name="TFAR_anprc152";
				count=10;
			};
			class _xx_ic_cad_magnoculars
			{
				name="ic_cad_magnoculars";
				count=10;
			};
			// class _xx_XI_Drone_A_packed
			// {
				// name="XI_Drone_A_packed";
				// count=15;
			// };
			class _xx_ACE_UAVBattery
			{
				name="ACE_UAVBattery";
				count=10;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class xi_general_medical: xi_resupply_base
	{
		model="\WHobjects\scenery\Containers_Combined\Model\mini_muni_204.p3d";
		icon="\WHobjects\scenery\Containers_Combined\Icons\simple_tiow_icon.paa";
		picture="\WHobjects\scenery\Containers_Combined\Icons\simple_tiow_icon.paa";
		displayName="[XI] General Medical";
		scope=2;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			// class _xx_kat_EACA
			// {
				// name="kat_EACA";
				// count=10;
			// };
			// class _xx_kat_TXA
			// {
				// name="kat_TXA";
				// count=10;
			// };
			// class _xx_kat_nitroglycerin
			// {
				// name="kat_nitroglycerin";
				// count=10;
			// };
			// class _xx_kat_norepinephrine
			// {
				// name="kat_norepinephrine";
				// count=10;
			// };
			// class _xx_kat_naloxone
			// {
				// name="kat_naloxone";
				// count=10;
			// };
			// class _xx_kat_phenylephrine
			// {
				// name="kat_phenylephrine";
				// count=10;
			// };
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 40;
			};
			class xx_ACE_bloodIV{
				name = "ACE_bloodIV";
				count = 20;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=160;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=25;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=25;
			};
			class _xx_ace_Tourniquet
			{
				name="ace_Tourniquet";
				count=40;
			};
			class _xx_ace_splint
			{
				name="ace_splint";
				count=40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 40;
			};
			class xx_SR_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 40;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
	class Man;
	// class CAManBase: Man
	// {
		// class ACE_SelfActions
		// {
			// class ACE_Equipment
			// {
				// class XI_unpack
				// {
					// displayName="Assemble Drone";
					// condition="[_player] call XI_fnc_drones_canUnpack";
					// statement="";
					// showDisabled=1;
					// exceptions[]=
					// {
						// "isNotOnMap",
						// "isNotInside",
						// "isNotSwimming",
						// "isNotSitting"
					// };
					// icon="";
					// class XI_Drone_A
					// {
						// displayName="[XI] Drone A";
						// condition="""XI_Drone_A_packed"" in (items _player)";
						// statement="[_player,""XI_Drone_A_packed""] call XI_fnc_drones_unpack";
						// icon="";
					// };
					// class XI_Turret_A
					// {
						// displayName="[XI] Turret A";
						// condition="""XI_Turret_A_packed"" in (items _player)";
						// statement="[_player,""XI_Drone_A_packed""] call XI_fnc_drones_unpack";
						// icon="";
					// };
				// };
			// };
		// };
	// };
	// class Helicopter_Base_F;
	// class UAV_01_base_F: Helicopter_Base_F
	// {
		// class ACE_Actions;
	// };
	// class O_UAV_01_F: UAV_01_base_F
	// {
		// class ACE_Actions: ACE_Actions
		// {
			// class ACE_MainActions;
		// };
	// };
	// class O_UAV_01_F_XI: O_UAV_01_F
	// {
		// side=1;
		// crew="B_UAV_AI";
	// };
	// class XI_Drone_A: O_UAV_01_F_XI
	// {
		// XI_packsTo="XI_Drone_A_packed";
		// class ACE_Actions: ACE_Actions
		// {
			// class ACE_MainActions: ACE_MainActions
			// {
				// class XI_pack
				// {
					// displayName="Pack up Drone";
					// condition="((alive _target) && (_player distance _target) < 3) && (count ((UAVControl _target) select 1) < 1)";
					// statement="[_player,_target] call XI_fnc_drones_pack";
				// };
			// };
		// };
	// };
	class TIOW_Object;
	class TIOW_Oberon: TIOW_Object
	{
		scope=2;
		scopeCurator=1;
		displayName="Battleship (Oberon class no scripts)";
		author="Battlestad";
		mapSize=450;
	};
};
class CfgGlasses
{
};
class XtdGearModels
{
	class cfgWeapons
	{
		class xi_uniforms_SF
		{
			label="SF Uniforms";
			author="";
			options[]=
			{
				"camo"
			};
			class camo
			{
				changeingame=0;
				values[]=
				{
					"a",
					"b",
					"c",
					"d",
					"e",
					"f"
				};
				class a
				{
					label="Dark Urban (Pants)";
				};
				class b
				{
					label="Dark urban (Top/Pants)";
				};
				class c
				{
					label="CTRGS (Pants)";
				};
				class d
				{
					label="CTRGS (Top/Pants)";
				};
				class e
				{
					label="Woodland (Pants)";
				};
				class f
				{
					label="Woodland (Top/Pants)";
				};
			};
		};
		class XI_Mod_CustomsUniforms
		{
			label="Player Customs";
			author="Winchester";
			options[]=
			{
				"camo"
			};
			class camo
			{
				changeingame=0;
				values[]=
				{
					"a",
					"b",
					"c",
					"d",
					"e",
					"f",
					"g",
					"h",
					"i",
					"j"
				};
				class a
				{
					label="Winchester";
				};
			};
		};
	};
	class CFGVehicles
	{
		class XI_Trooper_Backpacks
		{
			label="XI Backpacks";
			author="Rogue";
			options[]=
			{
				"camo"
			};
			class camo
			{
				changeingame=0;
				values[]=
				{
					"a",
					"b",
					"c",
					"d",
					"e"
				};
				class a
				{
					label="Legionary";
				};
				class b
				{
					label="Medicae";
				};
				class c
				{
					label="Anti-Tank";
				};
				class d
				{
					label="C. Engineer";
				};
				class e
				{
					label="Weapons Specalist";
				};
			};
		};
		class XI_Triarii_Backpacks
		{
			label="XI Triarii";
			author="";
			options[]=
			{
				"camo"
			};
			class camo
			{
				changeingame=0;
				values[]=
				{
					"a",
					"b",
					"c",
					"d"
				};
				class a
				{
					label="Triarii";
				};
				class b
				{
					label="Triarii EOD";
				};
				class c
				{
					label="Triarii Medicae";
				};
				class d
				{
					label="Triarii TL";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class xi_legionnaire_helmet_hoplite_1
		{
			model="xi_helmets_grouped";
			helmet="Legionary";
			shoulder1="";
			shoulder2="";
		};
		class XI_Gravis_Pattern_testing_2
		{
			model="XI_Gravis_Pattern_testing";
			helmet="Enlisted";
			shoulders="LGS";
		};
		class XI_Gravis_Pattern_testing_1
		{
			model="XI_Gravis_Pattern_testing";
			helmet="NCO";
			shoulders="LGS";
		};
		class XI_Gravis_Pattern_testing_3
		{
			model="XI_Gravis_Pattern_testing";
			helmet="NCO";
			shoulders="LGN";
		};
	};
};
