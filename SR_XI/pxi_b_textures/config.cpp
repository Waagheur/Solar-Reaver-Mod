class CfgPatches
{
	class pxi_b_textures
	{
		units[]={};
		weapons[]=
		{
			"pxi_armor_standard",
			"pxi_armor_droptrooper",
			"pxi_armor_doctores_b",
			"pxi_armor_baseModel_t1",
			"pxi_armor_baseModel_t2",
			"pxi_armor_baseModel_t3",
			"pxi_armor_DT_t1",
			"pxi_armor_DT_t2",
			"pxi_armor_DT_t3",
			"pxi_helmet_standard",
			"pxi_helmet_centuria_1",
			"pxi_helmet_centuria_1_m",
			"pxi_helmet_centuria_2",
			"pxi_helmet_centuria_2_m",
			"pxi_helmet_evocatii_1",
			"pxi_helmet_evocatii_2",
			"pxi_nco_helmet_standard",
			"pxi_nco_helmet_centuria_1",
			"pxi_nco_helmet_centuria_2",
			"pxi_nco_helmet_fc",
			"pxi_doc_helmet_standard",
			"pxi_nco_helmet_evocatii_1",
			"pxi_nco_helmet_evocatii_2",
			"pxi_nco_helmet_bones"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark",
			"pxi_b_armor"
		};
	};
};
class pxi_helmetbase_0;
class pxi_helmetbase_nco_0;
class pxi_helmet_doctores_nco_0;
class pxi_helmet_evocatii_0;
class pxi_helmet_evocatii_nco_0;
class pxi_armourVest_base_doctores_0;
class pxi_armourVest_base;
class ItemCore;
class UniformItem;
class WeaponSlotsInfo;
class VestItem;
class CfgWeapons
{
	class pxi_armor_standard: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Legionnaire Armour - Base Grey";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates.paa"
		};
	};
	class pxi_armor_droptrooper: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Legionnaire Armour - Base Grey - Droptrooper";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates.paa"
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_armor_doctores_b: pxi_armourVest_base_doctores_0
	{
		displayName="[TSR] [PXI] Doctores Armor - DT";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding_doctores.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_doctores.paa"
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_armor_baseModel_t1: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 1 Legionnaires Armour";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t1.paa"
		};
	};
	class pxi_armor_baseModel_t2: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 2 Legionnaires Armour";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t2.paa"
		};
	};
	class pxi_armor_baseModel_t3: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 3 Legionnaires Armour";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t3.paa"
		};
	};
	class pxi_armor_DT_t1: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 1 Legionnaires Armour (DT)";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t1.paa"
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_armor_DT_t2: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 2 Legionnaires Armour (DT)";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t2.paa"
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_armor_DT_t3: pxi_armourVest_base
	{
		displayName="[TSR] [PXI] Type 3 Legionnaires Armour (DT)";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_padding.paa",
			"\SR_XI\pxi_b_textures\data\b_armor\pxi_armour_plates_t3.paa"
		};
		XI_isgravpack=1;
		XI_gravslowrate=1.25;
	};
	class pxi_helmet_standard: pxi_helmetbase_0
	{
		displayName="[TSR] [PXI] Legionnaire Helmet - Base Grey";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_centuria_1: pxi_helmetbase_0
	{
		displayName="[TSR] [PXI] Legionnaire Helmet - 1st Centuria";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_1.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_centuria_1_m: pxi_helmetbase_0
	{
		displayName="[TSR] [PXI] Legionnaire Helmet - 1st Centuria Medicae";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_medic.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_1.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_centuria_2: pxi_helmetbase_0
	{
		displayName="[TSR] [PXI] Legionnaire Helmet - 2nd Centuria";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_2.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_centuria_2_m: pxi_helmetbase_0
	{
		displayName="[TSR] [PXI] Legionnaire Helmet - 2nd Centuria Medicae";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_medic.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_2.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_evocatii_1: pxi_helmet_evocatii_0
	{
		displayName="[TSR] [PXI] Evocatii 1st - Base ";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_evocatii_1.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_helmet_evocatii_2: pxi_helmet_evocatii_0
	{
		displayName="[TSR] [PXI] Evocatii 2nd - Base ";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmet_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_evocatii_2.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa"
		};
	};
	class pxi_nco_helmet_standard: pxi_helmetbase_nco_0
	{
		displayName="[TSR] [PXI] Legionnaire NCO Helmet - Base Grey";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_centuria_1: pxi_helmetbase_nco_0
	{
		displayName="[TSR] [PXI] Legionnaire NCO Helmet - 1st Centuria";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_1.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_centuria_2: pxi_helmetbase_nco_0
	{
		displayName="[TSR] [PXI] Legionnaire NCO Helmet - 2nd Centuria";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_centuria_2.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_fc: pxi_helmetbase_nco_0
	{
		displayName="[TSR] [PXI] Legionnaire NCO Helmet - Prefect";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_fc.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_doc_helmet_standard: pxi_helmet_doctores_nco_0
	{
		displayName="[TSR] [PXI] Doctores Helmet";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_doctores.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_doctores_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_doctores_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_evocatii_1: pxi_helmet_evocatii_nco_0
	{
		displayName="[TSR] [PXI] Evocatii NCO 1st - Base";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_evocatii_1.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_evocatii_2: pxi_helmet_evocatii_nco_0
	{
		displayName="[TSR] [PXI] Evocatii NCO 2nd - Base";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_evocatii_2.paa",
			"\SR_XI\pxi_b_textures\data\b_shoulders\pxi_shoulders_base_2.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
	class pxi_nco_helmet_bones: pxi_helmetbase_nco_0
	{
		displayName="[TSR] [PXI] Legionnaire NCO Helmet - Bones";
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_textures\data\b_helmet\pxi_helmetNCO_base.paa",
			"\SR_XI\pxi_b_textures\data\c_shoulders\pxi_bones.paa",
			"\SR_XI\pxi_b_textures\data\c_shoulders\pxi_bones.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
	};
};
