class CfgPatches
{
	class TIOW_Inf_SR_Bubnar
	{
		requiredAddons[] = {"TIOW_Inf_SR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class TIOW_MK3_Tact_SR_BS;
	class TIOW_MK3_Tact_Bubnar: TIOW_MK3_Tact_SR_BS
	{
		author = "Bubnar";
		displayName = "Tactical Marine (MK. III)";
		uniformClass = "SR_MK3_Armor_Blackshield";
		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\bubby_armour2.paa","SR_FirstBorn\Textures\Bubby_Armour1.paa"};
	};
};
class CfgWeapons
{
	class SR_MK3_Armor_Blackshield;
	class ItemInfo;
	class SR_MK3_Armor_Bubnar: SR_MK3_Armor_Blackshield
	{
		author = "Bubnar";
		displayName = "[TSR] MK 3 Power Armor (Bubnar)";
		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\bubby_armour2.paa","SR_FirstBorn\Textures\Bubby_Armour1.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TIOW_MK3_Tact_Bubnar";
		};
	};
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_Bubnar: SR_MK2_Shoulders_Blackshield
	{
		author = "Bubnar";
		displayName = "[TSR] MK 2 Pauldrons (Bubnar)";
		hiddenSelectionsTextures[] = {"SR_FirstBorn\Textures\bubby_armour2.paa","SR_FirstBorn\Textures\SR_Armour1.paa"};
	};
};