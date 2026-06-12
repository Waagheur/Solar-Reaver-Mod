class CfgPatches
{
	class TSR_AdMechUnits
	{
		author = "Tengu";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"TSR_skitarii_vest_white",
            "TSR_skitarii_vest_black",
			"skitarii_backpack",
			"skitarii_backpack_black"};
	};
};

class cfgWeapons{
	class ItemInfo;
	class VestItem;
	class HitpointsProtectionInfo;

// VESTS
    class skitarii_vest_mars;
	class TSR_skitarii_vest_white: skitarii_vest_mars
	{
		author = "Rodan";
		scope = 2;
		displayName = "[TSR-AdMech] Skitarii Vest (White)";
		picture = "";
		model = "\Skitarii\mod\Vest\Vest.p3d";
		hiddenSelections[] = {"Camo_metal"};
		hiddenSelectionsTextures[] = {"\Skitarii\mod\Vest\data\Mars_Metallica_SkitariiVest_co.paa"};
		hiddenselectionsMaterials[] = {"\Skitarii\mod\Vest\data\VestCamoMetall.rvmat"};
		XI_isgravpack = 1;
		XI_gravslowrate = 1.25;
		class ItemInfo: VestItem
		{
			uniformModel = "\Skitarii\mod\Vest\Vest.p3d";
			picture = "";
			vestType = "Rebreather";
			containerClass = "Supply190";
			mass = 25;
			hiddenSelections[] = {"Camo_metal"};
			hiddenSelectionsTextures[] = {"\Skitarii\mod\Vest\data\Mars_Metallica_SkitariiVest_co.paa"};
			class HitpointsProtectionInfo
						{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 25;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 30;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 30;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 25;
					passThrough = 0.1;
				};
				class LeftArm
				{
					hitpointName = "HitLeftArm";
					armor = 10;
					passThrough = 0.1;
				};
				class RightArm
				{
					hitpointName = "HitRightArm";
					armor = 10;
					passThrough = 0.1;
				};
				class LeftLeg
				{
					hitpointName = "HitLeftLeg";
					armor = 10;
					passThrough = 0.1;
				};
				class RightLeg
				{
					hitpointName = "HitRightLeg";
					armor = 10;
					passThrough = 0.1;
				};
			};
		};
	};

	class skitarii_vest_black: TSR_skitarii_vest_white
	{
		scope = 2;
		displayName = "[AdMech] Skitarii Vest (Black)";
		Model = "\Skitarii\mod\Vest\Vest.p3d";
		hiddenSelections[] = {"Camo_metal"};
		hiddenSelectionsTextures[] = {"\Skitarii\mod\Vest\data\Lucius_SkitariiVest_co.paa"};
		hiddenselectionsMaterials[] = {"\Skitarii\mod\Vest\data\VestCamoMetall.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\Skitarii\mod\Vest\Vest.p3d";
		};
	};
};

class cfgVehicles{
	class B_Carryall_Base;
	class tsr_skitarii_backpack: B_Carryall_Base
	{
		author = "Rodan";
		scope = 2;
		displayName = "[TSR-AdMech] Skitarii Backpack (White)";
		model = "\Skitarii\mod\Backpacks\Backpack.p3d";
		picture = "";
		hiddenSelections[] = {"Camo_Glass","Camo_Metal","Camo_Skine","Camo_Trube"};
		overlaySelectionsInfo[] = {"Ghillie_hide"};
		hiddenSelectionsTextures[] = {"\Skitarii\mod\Backpacks\data\backpack_Base_co.paa","\Skitarii\mod\Backpacks\data\backpack_Base_co.paa","\Skitarii\mod\Backpacks\data\backpack_Base_co.paa","\Skitarii\mod\Backpacks\data\backpack_Base_co.paa"};
		hiddenselectionsMaterials[] = {"Skitarii\mod\Headgear\data\BackpacksCamoGlass.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoMetall.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoSkin.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoPaint.rvmat"};
		maximumLoad = 500;
		mass = 10;
		tf_dialog = "anarc210_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 90000;
		tf_subtype = "digital_lr";
	};

	class tsr_skitarii_backpack_black: B_Carryall_Base
	{
		author = "Rodan";
		scope = 2;
		displayName = "[TSR-AdMech] Skitarii Backpack (Black)";
		model = "\Skitarii\mod\Backpacks\Backpack.p3d";
		picture = "";
		hiddenSelections[] = {"Camo_Glass","Camo_Metal","Camo_Skine","Camo_Trube"};
		overlaySelectionsInfo[] = {"Ghillie_hide"};
		hiddenSelectionsTextures[] = {"\Skitarii\mod\Backpacks\data\Chaos_backpack_co.paa","\Skitarii\mod\Backpacks\data\Chaos_backpack_co.paa","\Skitarii\mod\Backpacks\data\Chaos_backpack_co.paa","\Skitarii\mod\Backpacks\data\Chaos_backpack_co.paa"};
		hiddenselectionsMaterials[] = {"Skitarii\mod\Headgear\data\BackpacksCamoGlass.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoMetall.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoSkin.rvmat","Skitarii\mod\Headgear\data\BackpacksCamoPaint.rvmat"};
		maximumLoad = 500;
		mass = 10;
		tf_dialog = "anarc210_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 90000;
		tf_subtype = "digital_lr";
	};
};