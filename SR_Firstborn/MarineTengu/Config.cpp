class CfgPatches
{
	class TIOW_Inf_SR_Tengu
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR"
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
	class TIOW_MK3_Tact_SR_BS;
	class TIOW_MK3_Tact_Tengu : TIOW_MK3_Tact_SR_BS
	{
		author = "Tengu";
		displayName = "Tactical Marine (MK. III)";
		uniformClass = "SR_MK3_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[] =
			{
				"SR_FirstBorn\MarineTengu\SR_Tengu_2.paa",
				"SR_FirstBorn\MarineTengu\SR_Tengu_Sal_2.paa"};
	};
};
class CfgWeapons
{
	class SR_MK3_Armor_Blackshield;
	class ItemInfo;
	class SR_MK3_Armor_Tengu: SR_MK3_Armor_Blackshield
	{
		author="Tengu";
		displayName="[TSR] MK 3 Power Armor (Tengu)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\MarineTengu\SR_Tengu_2.paa",
			"SR_FirstBorn\MarineTengu\SR_Tengu_Sal_2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_Tengu"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_Tengu : SR_MK2_Shoulders_Blackshield
	{
		author="Tengu";
		displayName="[TSR] MK 2 Pauldrons (Tengu)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\MarineTengu\SR_Tengu_2.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK3Helmet_UM;
	class SR_MK3_Helmet_BlackSgt_Pr: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (Tengu)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\MarineTengu\Tengu-Helmet.paa"
		};
	};
};