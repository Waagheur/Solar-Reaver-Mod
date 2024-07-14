class CfgPatches
{
	class xi_allArmour
	{
		units[]={};
		weapons[]=
		{
			"xi_Equites",
			"xi_legionnaire1Conscript",
			"xi_legionnaire1Rogue",
			"xi_legionnaire1",
			"xi_legionnaire2",
			"xi_legionnaire3",
			"xi_legionnaire1L",
			"xi_legionnaireHero",
			"xi_legionnaireTri",
			"xi_LegionhelmetU_BASE",
			"xi_LegionhelmetUCrest_BASE",
			"xi_LegionhelmetU_Conscript",
			"xi_LegionhelmetU_Legion",
			"xi_LegionhelmetU_Legio",
			"xi_LegionhelmetU_Tri"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"IC_CAD_WEAPONS",
			"A3_Data_F_Mark",
			"pxi_b_armor"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgVehicles
{
};
class CfgWeapons
{
	class ItemInfo;
	class IC_CAD_U_836_OP;
	class InventoryItem_Base_F;
	class ICP_Rifle_Kantrael_Base;
	class ItemCore;
	class UniformItem;
	class WeaponSlotsInfo;
	class VestItem;
	class IC_CAD_FlakArmor_green;
	class IC_CAD_U_836_2_B;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class pxi_armourVest_base;
	class xi_legionnaire1: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Legionnaire Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2V3_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2V3_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
			};
		};
	};
	class xi_legionnaire1Conscript: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Conscript Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
			};
		};
	};
	class xi_Equites: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Equites Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_Equites.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_Equites.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa",
				"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa"
			};
		};
	};
	class xi_legionnaireHero: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Severan Shield Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1Hero_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2Hero_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1Hero_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2Hero_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
			};
		};
	};
	class xi_legionnaire1L: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Legio Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1L_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2LV2_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1L_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2LV2_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
			};
		};
	};
	class xi_legionnaire1Rogue: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Rogue Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1L_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2Rogue_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire1.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1L_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2Rogue_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2L_co.paa"
			};
		};
	};
	class xi_legionnaire2: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Veteran Legionnaire Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2V3_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire2.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2V3_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
			};
		};
	};
	class xi_legionnaireTri: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Triarii Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1Tri_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2Tri_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2Tri_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire2.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1Tri_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2Tri_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2Tri_co.paa"
			};
		};
	};
	class xi_legionnaire3: pxi_armourVest_base
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Legionnaire Medicae Armour";
		picture="\SR_XI\xi_allArmour\ui\xi_armour.paa";
		model="\SR_XI\xi_allArmour\xi_legionnaire3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2Med_co.paa",
			"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\xi_allArmour\xi_legionnaire3.p3d";
			containerClass="Supply190";
			mass=10;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_allArmour\data\xi_armour1_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2Med_co.paa",
				"\SR_XI\xi_allArmour\data\xi_armour2_co.paa"
			};
		};
	};
	class pxi_helmetbase_0;
	class xi_LegionhelmetU_BASE: pxi_helmetbase_0
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Helmet";
		picture="\SR_XI\xi_allArmour\ui\xi_helm.paa";
		model="\SR_XI\xi_allArmour\xi_helmBD.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmConscipt_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\xi_allArmour\xi_helmBD.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
		};
	};
	class xi_LegionhelmetUCrest_BASE: pxi_helmetbase_0
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Helmet (With Crest)";
		picture="\SR_XI\xi_allArmour\ui\xi_helm.paa";
		model="\SR_XI\xi_allArmour\xi_helmBDCrest.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmConscipt_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa",
			"\SR_XI\xi_allArmour\data\xi_crest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\xi_allArmour\xi_helmBDCrest.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class xi_LegionhelmetU_Conscript: xi_LegionhelmetU_BASE
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Conscript Helmet";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmConscipt_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa",
			"\SR_XI\xi_allArmour\data\xi_Shoulders_co.paa"
		};
	};
	class xi_LegionhelmetU_Legion: xi_LegionhelmetU_BASE
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Legionnaire Helmet";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmLegion_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersLegion_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersLegion_co.paa"
		};
	};
	class xi_LegionhelmetU_Legio: xi_LegionhelmetUCrest_BASE
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Legio Helmet";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmLegio_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersLegio_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersLegio_co.paa",
			"\SR_XI\xi_allArmour\data\xi_crest_co.paa"
		};
	};
	class xi_LegionhelmetU_Tri: xi_LegionhelmetUCrest_BASE
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Triarii Helmet";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_allArmour\data\xi_helmTri_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersTri_co.paa",
			"\SR_XI\xi_allArmour\data\xi_ShouldersTri_co.paa",
			"\SR_XI\xi_allArmour\data\xi_crestTri_co.paa"
		};
	};
};
