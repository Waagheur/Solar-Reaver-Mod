class CfgPatches
{
	class pxi_b_armor
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"IC_CAD_WEAPONS",
			"A3_Data_F_Mark"
		};
	};
};
class Man;
class CAManBase: Man
{
	class HitPoints
	{
		class HitHead;
		class HitBody;
		class HitHands;
		class HitLegs;
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
	class H_HelmetB;
	class pxi_helmetbase_0: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Helmet Base";
		picture="\SR_XI\pxi_b_armor\ui\xi_helm.paa";
		model="\SR_XI\pxi_b_armor\pxi_helm_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_helm_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\pxi_b_armor\pxi_helm_base.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor = 25;
					passThrough=0.1;
				};
			};
		};
	};
	class pxi_helmet_evocatii_0: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Helmet Base";
		picture="\SR_XI\pxi_b_armor\ui\xi_helm.paa";
		model="\SR_XI\pxi_b_armor\pxi_helm_evocatii.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_helm_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\pxi_b_armor\pxi_helm_evocatii.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor = 25;
					passThrough=0.1;
				};
			};
		};
	};
	class pxi_helmetbase_nco_0: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] NCO Helmet Base";
		picture="\SR_XI\pxi_b_armor\ui\xi_helm.paa";
		model="\SR_XI\pxi_b_armor\pxi_nco_helm_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_helm_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\pxi_b_armor\pxi_nco_helm_base.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor = 25;
					passThrough=0.1;
				};
			};
		};
	};
	class pxi_helmet_doctores_nco_0: pxi_helmetbase_nco_0
	{
		scope=0;
		displayName="[TSR] [PXI] NCO Helmet Base Doctores";
		picture="\SR_XI\pxi_b_armor\ui\xi_helm.paa";
		model="\SR_XI\pxi_b_armor\pxi_nco_helm_doctores.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_helm_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\pxi_b_armor\pxi_nco_helm_doctores.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor = 25;
					passThrough=0.1;
				};
			};
		};
	};
	class pxi_helmet_evocatii_nco_0: pxi_helmetbase_nco_0
	{
		scope=0;
		displayName="[TSR] [PXI] NCO Helmet Base Evocatii";
		picture="\SR_XI\pxi_b_armor\ui\xi_helm.paa";
		model="\SR_XI\pxi_b_armor\pxi_nco_helm_evocatii.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_helm_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_Shoulders_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_crest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\SR_XI\pxi_b_armor\pxi_nco_helm_evocatii.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor = 25;
					passThrough=0.1;
				};
			};
		};
	};
	class Vest_Camo_Base: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Vest_Camo_Base";
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply0";
			mass=0;
		};
	};
	class pxi_armourVest_base: Vest_Camo_Base
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Legionnaire Armour - Base Model";
		model="\SR_XI\pxi_b_armor\pxi_armour_upgraded_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\xi_armourRevampB_co.paa",
			"\SR_XI\pxi_b_armor\data\xi_armourRevampT_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SR_XI\pxi_b_armor\pxi_armour_upgraded_base.p3d";
			containerClass="Supply190";
			mass=25;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\pxi_b_armor\data\xi_armourRevampB_co.paa",
				"\SR_XI\pxi_b_armor\data\xi_armourRevampT_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 35;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 35;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 90;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 90;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 35;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 35;
					passThrough = 0.1;
				};
				// class Hands {
					// hitpointName = "HitHands";
					// armor = 35;
					// passThrough = 0.1;
				// };
				class LeftArm {
					hitpointName = "HitLeftArm";
					armor = 10;
					passThrough = 0.1;
				};
				class RightArm {
					hitpointName = "HitRightArm";
					armor = 10;
					passThrough = 0.1;
				};
				class LeftLeg {
					hitpointName = "HitLeftLeg";
					armor = 10;
					passThrough = 0.1;
				};
				class RightLeg {
					hitpointName = "HitRightLeg";
					armor = 10;
					passThrough = 0.1;
				};
			};

		};
	};
	class pxi_armourVest_base_doctores_0: Vest_Camo_Base
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Legionnaire Armour - Model";
		model="\SR_XI\pxi_b_armor\pxi_armour_upgraded_doctores.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		descriptionShort="Stormtrooper Armour";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\pxi_b_armor\data\pxi_armour_padding_doctores.paa",
			"\SR_XI\pxi_b_armor\data\pxi_armour_plates_doctores.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SR_XI\pxi_b_armor\pxi_armour_upgraded_doctores.p3d";
			containerClass="Supply190";
			mass=25;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\pxi_b_armor\data\pxi_armour_padding_doctores.paa",
				"\SR_XI\pxi_b_armor\data\pxi_armour_plates_doctores.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 35;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 35;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 90;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 90;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 35;
					passThrough = 0.1;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 35;
					passThrough = 0.1;
				};
				// class Hands {
					// hitpointName = "HitHands";
					// armor = 35;
					// passThrough = 0.1;
				// };
				class LeftArm {
					hitpointName = "HitLeftArm";
					armor = 10;
					passThrough = 0.1;
				};
				class RightArm {
					hitpointName = "HitRightArm";
					armor = 10;
					passThrough = 0.1;
				};
				class LeftLeg {
					hitpointName = "HitLeftLeg";
					armor = 10;
					passThrough = 0.1;
				};
				class RightLeg {
					hitpointName = "HitRightLeg";
					armor = 10;
					passThrough = 0.1;
				};
			};

		};
	};
};
class cfgGlasses
{
	class none;
	class XI_Mask_Medicae: none
	{
		author="Rogue771";
		displayname="[TSR] [PXI] Medicae Mask";
		model="\SR_XI\pxi_b_armor\pxi_mask_medicae.p3d";
		scope=2;
		identityTypes[]={};
		mass=4;
	};
};
