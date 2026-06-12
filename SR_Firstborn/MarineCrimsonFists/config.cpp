////////////////////////////////////////////////////////////////////
//DeRap: MarineCrimsonFist\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat May 02 13:00:40 2026 : 'file' last modified on Wed Jan 07 18:45:32 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TIOW_Inf_SR_CrimsonFist
	{
		requiredAddons[] = {"TIOW_Inf_SR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class TIOW_MK7_Tact_SR_BS;
	class TIOW_MK7_Tact_SR_CF: TIOW_MK7_Tact_SR_BS
	{
		author = "Strixus";
		displayName = "Tactical Marine (MK. VII)";
		uniformClass = "SR_MK7_Armor_CrimsonFist";
		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\CF_Armour1.paa","SR_FirstBorn\Textures\SR_Armour2.paa"};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_CrimsonFist: TIOW_MK7PowerArmor_1_WS
	{
		author = "Strixus";
		displayName = "[TSR] MK 7 Power Armor (Crimson Fist)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "TIOW_MK7_Tact_SR_CF";
		};
	};
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_CrimsonFist: SR_MK2_Shoulders_Blackshield
	{
		author = "Strixus";
		displayName = "[TSR] MK 2 Pauldrons (Crimson Fist)";
		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\CF_Armour1.paa","SR_FirstBorn\Textures\SR_Armour2.paa"};
	};
//	class TIOW_MK7Helmet_UM;
//	class SR_MK7_Helmet_CrimsonFist: TIOW_MK7Helmet_UM
//	{
//		author = "Strixus";
//		displayName = "[TSR] MK 7 Helmet (Crimson Fist)";
//		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\AL_Helmet.paa"};
//	};
};
class cfgMods
{
	author = "";
	timepacked = "1767815114";
};
