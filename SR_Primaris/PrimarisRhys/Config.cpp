class CfgPatches
{
	class TIOW_Inf_SR_Primaris_Rhys
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR_Primaris"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{
		};
	};
};

class CfgVehicles
{
	class Primaris_SM_SR_1;
	class Primaris_SR_Rhys: Primaris_SM_SR_1
	{
		author="Waagheur, Rhys";
		displayName="Primaris Rhys (Mk.10)";
		uniformClass="Primaris_SM_Rhys_W";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Phobos_Shoulder_Rhys.paa",
			"SR_Firstborn\Textures\SR_Armour1.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_Rhys_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (Rhys)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_Rhys";
		};
	};
	// class SR_MK10_Helmet_Blackshield;
	// class Primaris_Helm_Main_SR_Rhys: SR_MK10_Helmet_Blackshield
	// {
		// author="";
		// displayName="[TSR] Primaris Mk.10 (White Scars)";
		// hiddenSelections[]=
		// {
			// "Camo1"
		// };
		// hiddenSelectionsTextures[]=
		// {
			// "SR_Primaris\Textures\WS_PrimHelmet.paa"
		// };
	// };
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_Rhys: DOS_Primaris_40k_Vest_Base 
	{
		author="Waagheur, Rhys";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (Rhys)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Phobos_Shoulder_Rhys.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Primaris\Textures\Phobos_Shoulder_Rhys.paa"
			};
		};
	};
};