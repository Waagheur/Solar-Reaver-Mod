class CfgPatches
{
	class XI_vox
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
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class ItemInfo;
	class Pistol;
	class Rifle;
	class WeaponSlotsInfo;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F;
	class SecondEffect;
	class GunParticles;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_H;
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class XI_VoxHelm_NVG: NVGoggles
	{
		author="Rogue771";
		displayname="[XI] Vox Helm";
		model="XI_voxHelm\XI_VoxHelm.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="XI_voxHelm\XI_VoxHelm.p3d";
			modelOff="XI_voxHelm\XI_VoxHelm.p3d";
		};
	};
};
class cfgGlasses
{
	class None;
	class xi_VoxHelm: None
	{
		author="Rogue771";
		displayname="[XI] Vox Helm";
		model="XI_voxHelm\XI_VoxHelm.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\IC_Departmento_Munitorum\IC_Cadian_Vox\data\IC_VoxHelm_co.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
};
