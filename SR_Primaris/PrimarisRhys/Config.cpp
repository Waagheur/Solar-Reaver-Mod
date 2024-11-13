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
	class Primaris_SM_SAL_6;
	class Primaris_SR_Rhys: Primaris_SM_SAL_6
	{
		author="Waagheur, Rhys";
		displayName="Primaris Rhys (Reiver)";
		model = "Project_Primaris_D_Main\Models\Phobos_Reiver.p3d";
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
		displayName="[TSR] Primaris Reiver (Rhys)";
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
	class Primaris_Vest_40k_SW_1;
	class Primaris_Vest_40K_SR_Rhys: Primaris_Vest_40k_SW_1 
	{
		author="Waagheur, Rhys";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Phobos (Rhys)";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Phobos_Shoulder_Rhys.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
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