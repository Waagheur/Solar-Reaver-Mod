class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class ItemInfo;
	class HeadgearItem;
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class Pistol;
	class Rifle;
	class WeaponSlotsInfo;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F;
	class SecondEffect;
	class GunParticles;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_H;
	class InventoryItem_Base_F;
	class Rifle_Base_F;
	class TKE_MDRifle;
	class TIOW_KriegLauncher;
	class pxi_baseWeapon_noModel: Rifle_Base_F
	{
		author="";
		scope=0;
		displayName="[TSR] [PXI] TESTING";
		picture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		Magazines[]={};
		magazineWell[]={};
		caseless[]={};
		soundBullet[]={};
		drySound[]={};
		reloadMagazineSound[]={};
		changeFiremodeSound[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		modes[]={};
	};
	// class pxi_noModel_NCOEntry: pxi_baseWeapon_noModel
	// {
		// scope=0;
		// displayName="'[PXI] NCO WEAPONS";
		// class XtdGearInfo
		// {
			// model="pxi_ncoVariants_XTD";
			// camo1="a";
		// };
	// };
	// class aaa: pxi_baseWeapon_noModel
	// {
		// scope=0;
		// displayName="'[PXI] TIER 1 WEAPONS";
		// class XtdGearInfo
		// {
			// model="pxi_tier1Weapons_XTD";
			// camo1="a";
		// };
	// };
	// class pxi_noModel_CUSTOMSEntry: pxi_baseWeapon_noModel
	// {
		// scope=0;
		// displayName="'[PXI] PLAYER CUSTOMS";
		// class XtdGearInfo
		// {
			// model="pxi_weaponCustoms_XTD";
			// camo1="a";
		// };
	// };
	// class pxi_noModel_T2Entry: pxi_baseWeapon_noModel
	// {
		// scope=0;
		// displayName="'[PXI] TIER 2 WEAPONS";
		// escriptionShort="Bread is fat";
		// class XtdGearInfo
		// {
			// model="pxi_tier2Weapons_XTD";
			// camo1="a";
		// };
	// };
	// class pxi_noModel_T3Entry: pxi_baseWeapon_noModel
	// {
		// scope=0;
		// displayName="'[PXI] TIER 3 WEAPONS";
		// escriptionShort="Bread is fat";
		// class XtdGearInfo
		// {
			// model="pxi_tier3Weapons_XTD";
			// camo1="a";
		// };
	// };
	class XI_Mars_lasgun_base: Rifle_Base_F
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Mars Pattern lasgun";
		descriptionShort="[TSR] [PXI] Mars Pattern lasgun";
		picture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		model="\xi_allWeapons\XI_Mars_lasgun.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\marsLasgun\data\xi_MarsLasgunF_co.paa",
			"\xi_allWeapons\marsLasgun\data\xi_MarsLasgunB_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\IC_weapons_base\Rifles\M36_Kantrael\anim\ic_m36_pose.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadMX";
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		magazineReloadTime=0.47999999;
		initSpeed=-1;
		recoil="xi_recoil_rubicon_lasgun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=800;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"ic_weapons_base\Sounds\Lasgun_reload_01.wss",
			"db-8",
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={1,0,0};
		fireLightAmbient[]={0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			mass=120;
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"Overcharge"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.12599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundBurst=0;
			reloadTime=0.075999998;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.48599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	// class XI_Mars_lasgun_Shield: Rifle_Base_F
	// {
		// author="Bones";
		// scope=0;
		// displayName="'[TSR] [PXI] Testing Shield/Mars";
		// descriptionShort="[TSR] [PXI] Mars Pattern lasgun";
		// picture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		// UiPicture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		// model="\xi_allWeapons\riotshield_mars.p3d";
		// hiddenSelections[]=
		// {
			// "camo",
			// "camo1",
			// "camo2"
		// };
		// hiddenSelectionsTextures[]=
		// {
			// "\xi_allWeapons\marsLasgun\data\xi_MarsLasgunF_co.paa",
			// "\xi_allWeapons\marsLasgun\data\xi_MarsLasgunB_co.paa",
			// "\xi_boltpistol\data\xi_riotshield_co.paa"
		// };
		// handAnim[]=
		// {
			// "OFP2_ManSkeleton",
			// "\xi_boltpistol\Anim\xi_riotshieldpose.rtm"
		// };
		// reloadAction="GestureReloadMX";
		// magazines[]=
		// {
			// "ic_las_powerpack",
			// "ic_las_powerpack_ext"
		// };
		// selectionFireAnim="muzzleFlash";
		// magazineReloadTime=0.47999999;
		// initSpeed=-1;
		// recoil="xi_recoil_rubicon_lasgun";
		// htMin=11;
		// htMax=730;
		// inertia=0.60000002;
		// aimTransitionSpeed=1;
		// dexterity=1.4;
		// maxRecoilSway=0.1;
		// swayDecaySpeed=1.25;
		// maxZeroing=800;
		// caseless[]=
		// {
			// "",
			// 1,
			// 1,
			// 1
		// };
		// soundBullet[]=
		// {
			// "caseless",
			// 1
		// };
		// drySound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			// 0.56234097,
			// 1,
			// 10
		// };
		// reloadMagazineSound[]=
		// {
			// "ic_weapons_base\Sounds\Lasgun_reload_01.wss",
			// "db-8",
			// 1,
			// 30
		// };
		// changeFiremodeSound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			// 0.25118899,
			// 1,
			// 5
		// };
		// fireLightDuration=0.050000001;
		// fireLightIntensity=0.5;
		// fireLightDiffuse[]={1,0,0};
		// fireLightAmbient[]={0,0,0};
		// class WeaponSlotsInfo: WeaponSlotsInfo
		// {
			// class CowsSlot: CowsSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				// iconPosition[]={0.5,0.40000001};
				// iconScale=0.15000001;
				// compatibleItems[]=
				// {
					// "optic_Aco",
					// "optic_ACO_grn",
					// "optic_Holosight",
					// "optic_MRCO",
					// "optic_HAMR",
					// "jmsfall_aog_scope_1"
				// };
			// };
			// class MuzzleSlot: MuzzleSlot
			// {
				// compatibleItems[]={};
			// };
			// class UnderBarrelSlot
			// {
			// };
			// class PointerSlot: PointerSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				// iconPosition[]={0.2,0.44999999};
				// iconScale=0.25;
				// compatibleItems[]=
				// {
					// "acc_flashlight",
					// "acc_pointer_IR"
				// };
			// };
			// mass=120;
		// };
		// modes[]=
		// {
			// "Single",
			// "FullAuto"
		// };
		// class Single: Mode_SemiAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "MarsPattern_shot_SoundSet"
				// };
				// begin1[]=
				// {
					// "\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// class SilencedSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "MarsPattern_shot_SoundSet"
				// };
				// begin1[]=
				// {
					// "\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.19599999;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=150;
			// midRangeProbab=0.69999999;
			// maxRange=250;
			// maxRangeProbab=0.2;
		// };
		// class FullAuto: Mode_FullAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType
			// {
				// closure1[]={};
				// closure2[]={};
				// soundClosure[]={};
			// };
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "MarsPattern_shot_SoundSet"
				// };
				// begin1[]=
				// {
					// "\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// soundBurst=0;
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.30000001;
			// midRange=50;
			// midRangeProbab=0.69999999;
			// maxRange=200;
			// maxRangeProbab=0.050000001;
			// aiRateOfFire=1;
			// aiRateOfFireDistance=250;
		// };
	// };
	class XI_Mars_lasgun_wGl: Rifle_Base_F
	{
		author="Rogue771";
		scope=2;
		displayName="[TSR] [PXI] Mars-Pattern w/GL (NCO)";
		descriptionShort="[TSR] [PXI] Mars Pattern lasgun";
		picture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		model="\xi_allWeapons\XI_Mars_lasgun.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\marsLasgun\data\xi_MarsLasgunF_nco_co.paa",
			"\xi_allWeapons\marsLasgun\data\xi_MarsLasgunB_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\IC_weapons_base\Rifles\M36_Kantrael\anim\ic_m36_pose.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadMX";
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		magazineWell[]={};
		magazineReloadTime=0.47999999;
		muzzles[]=
		{
			"this",
			"TIOW_Type2_AutogunGL"
		};
		initSpeed=-1;
		recoil="xi_recoil_rubicon_lasgun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=800;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"ic_weapons_base\Sounds\Lasgun_reload_01.wss",
			"db-8",
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={1,0,0};
		fireLightAmbient[]={0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"dm_M36HoloSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"jmsfall_aog_scope_1",
					"optic_Holosight",
					"dm_m36holosightNM",
					"dm_M362xSightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			mass=120;
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"Overcharge"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.12599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundBurst=0;
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MarsPattern_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.48599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class TIOW_Type2_AutogunGL: TIOW_KriegLauncher
		{
			displayName="Type 2 Underbarrel Grenade Launcher";
			descriptionShort="Type 2 Underbarrel Grenade Launcher";
			initSpeed=720;
			useModelOptics=0;
			useExternalOptic=0;
			inertia=0.40000001;
			magazines[]=
			{
				"TIOW_1Rnd_HE_Grenade_shell",
				"ACE_HuntIR_M203",
				"XI_IG_UBGL_Smoke_White_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Red_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Orange_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Blue_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Yellow_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Green_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Purple_Mag_3rnd"
			};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
	};
	class IC_bayonet_01;
	class IC_bayonet_02;
	class XI_autogun: Rifle_Base_F
	{
		author="Rogue771";
		scope=0;
		picture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		displayName="'[PXI] [A] Aquilifer Pattern Autogun Base";
		escriptionShort="Bread is fat";
		model="\xi_allWeapons\XI_autogun.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\autogun\data\xi_autogunB_co.paa",
			"\xi_allWeapons\autogun\data\xi_autogunF_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadTRG";
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		magazineWell[]={};
		magazineReloadTime=0.47999999;
		initSpeed=-1;
		recoil="recoil_dm_autogun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=800;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"IC_bayonet_01",
					"IC_bayonet_02"
				};
				displayName="Bayonet Lug";
				iconPosition[]={0.1,0.2};
				iconScale=0.2;
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
			mass=120;
		};
		modes[]=
		{
			"Single",
			"FullAuto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Autogun_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Autogun_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=1;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class XtdGearInfo
		{
			model="pxi_aquiliferAutogun_XTD";
			camo1="a";
		};
	};
	// class autogun_shield: Rifle_Base_F
	// {
		// author="Rogue771";
		// scope=0;
		// displayName="'Testing Autogun/Shield";
		// escriptionShort="Bread is fat";
		// model="\xi_allWeapons\riotshield_aquil.p3d";
		// hiddenSelections[]=
		// {
			// "camo",
			// "camo1",
			// "camo2"
		// };
		// hiddenSelectionsTextures[]=
		// {
			// "\xi_allWeapons\autogun\data\xi_autogunB_co.paa",
			// "\xi_allWeapons\autogun\data\xi_autogunF_co.paa"
		// };
		// handAnim[]=
		// {
			// "OFP2_ManSkeleton",
			// "\xi_boltpistol\Anim\xi_riotshieldpose.rtm"
		// };
		// reloadAction="GestureReloadTRG";
		// selectionFireAnim="muzzleFlash";
		// Magazines[]=
		// {
			// "xi_825_standard_mag_BI",
			// "xi_825_standard_mag_BII"
		// };
		// magazineWell[]={};
		// magazineReloadTime=0.47999999;
		// initSpeed=-1;
		// recoil="recoil_dm_autogun";
		// htMin=11;
		// htMax=730;
		// inertia=0.60000002;
		// aimTransitionSpeed=1;
		// dexterity=1.4;
		// maxRecoilSway=0.1;
		// swayDecaySpeed=1.25;
		// maxZeroing=800;
		// caseless[]=
		// {
			// "",
			// 1,
			// 1,
			// 1
		// };
		// soundBullet[]=
		// {
			// "caseless",
			// 1
		// };
		// drySound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			// 0.56234097,
			// 1,
			// 10
		// };
		// reloadMagazineSound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			// 1,
			// 1,
			// 10
		// };
		// changeFiremodeSound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			// 0.25118899,
			// 1,
			// 5
		// };
		// class WeaponSlotsInfo: WeaponSlotsInfo
		// {
			// class CowsSlot: CowsSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\top";
				// iconPosition[]={0.5,0.40000001};
				// iconScale=0.15000001;
				// compatibleItems[]=
				// {
					// "optic_Aco",
					// "optic_ACO_grn",
					// "optic_Holosight"
				// };
			// };
			// class MuzzleSlot: MuzzleSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				// compatibleItems[]=
				// {
					// "IC_bayonet_01",
					// "IC_bayonet_02"
				// };
				// displayName="Bayonet Lug";
				// iconPosition[]={0.1,0.2};
				// iconScale=0.2;
			// };
			// class UnderBarrelSlot
			// {
			// };
			// class PointerSlot
			// {
			// };
			// mass=120;
		// };
		// modes[]=
		// {
			// "Single",
			// "FullAuto",
			// "FullAuto_medium"
		// };
		// class Single: Mode_SemiAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "WBK_DM_Autogun_SoundSet"
				// };
				// begin1[]=
				// {
					// "\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=150;
			// midRangeProbab=0.69999999;
			// maxRange=250;
			// maxRangeProbab=0.2;
		// };
		// class FullAuto: Mode_FullAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "WBK_DM_Autogun_SoundSet"
				// };
				// begin1[]=
				// {
					// "\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.89999998;
			// midRange=15;
			// midRangeProbab=0.69999999;
			// maxRange=30;
			// maxRangeProbab=0.050000001;
		// };
		// class FullAuto_medium: FullAuto
		// {
			// showToPlayer=0;
			// burst=3;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=75;
			// midRangeProbab=0.69999999;
			// maxRange=100;
			// maxRangeProbab=0.050000001;
			// aiRateOfFire=2;
		// };
	// };
	// class XI_autogunWar: Rifle_Base_F
	// {
		// author="Rogue771";
		// scope=0;
		// displayName="[TSR] [PXI] [A] Aquilifer-Pattern Autogun/War ";
		// escriptionShort="Bread is fat";
		// model="\XI_allWeapons\XI_AutogunWar.p3d";
		// hiddenSelections[]=
		// {
			// "camo",
			// "camo1"
		// };
		// hiddenSelectionsTextures[]=
		// {
			// "\XI_allWeapons\autogun\data\XI_AutogunBWar_co.paa",
			// "\XI_allWeapons\autogun\data\XI_AutogunFWar_co.paa"
		// };
		// handAnim[]=
		// {
			// "OFP2_ManSkeleton",
			// "\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		// };
		// selectionFireAnim="muzzleFlash";
		// reloadAction="GestureReloadTRG";
		// Magazines[]=
		// {
			// "xi_825_standard_mag_BI",
			// "xi_825_standard_mag_BII"
		// };
		// magazineWell[]={};
		// magazineReloadTime=0.47999999;
		// initSpeed=-1;
		// recoil="recoil_dm_autogun";
		// htMin=11;
		// htMax=730;
		// inertia=0.60000002;
		// aimTransitionSpeed=1;
		// dexterity=1.4;
		// maxRecoilSway=0.1;
		// swayDecaySpeed=1.25;
		// maxZeroing=800;
		// caseless[]=
		// {
			// "",
			// 1,
			// 1,
			// 1
		// };
		// soundBullet[]=
		// {
			// "caseless",
			// 1
		// };
		// drySound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			// 0.56234097,
			// 1,
			// 10
		// };
		// reloadMagazineSound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			// 1,
			// 1,
			// 10
		// };
		// changeFiremodeSound[]=
		// {
			// "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			// 0.25118899,
			// 1,
			// 5
		// };
		// class WeaponSlotsInfo: WeaponSlotsInfo
		// {
			// class CowsSlot: CowsSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				// iconPosition[]={0.5,0.40000001};
				// iconScale=0.15000001;
				// compatibleItems[]=
				// {
					// "optic_Aco",
					// "optic_ACO_grn",
					// "optic_ACO_grn_smg",
					// "optic_Aco_smg",
					// "optic_Arco",
					// "optic_DMS",
					// "optic_Hamr",
					// "optic_Holosight",
					// "optic_Holosight_smg",
					// "optic_LRPS",
					// "optic_MRCO",
					// "optic_MRD"
				// };
			// };
			// class MuzzleSlot: MuzzleSlot
			// {
				// linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				// compatibleItems[]=
				// {
					// "IC_bayonet_01",
					// "IC_bayonet_02"
				// };
				// displayName="Bayonet Lug";
				// iconPosition[]={0.1,0.2};
				// iconScale=0.2;
			// };
			// class UnderBarrelSlot
			// {
			// };
			// class PointerSlot
			// {
			// };
			// mass=120;
		// };
		// modes[]=
		// {
			// "Single",
			// "FullAuto",
			// "FullAuto_medium"
		// };
		// class Single: Mode_SemiAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "WBK_DM_Autogun_SoundSet"
				// };
				// begin1[]=
				// {
					// "\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=150;
			// midRangeProbab=0.69999999;
			// maxRange=250;
			// maxRangeProbab=0.2;
		// };
		// class FullAuto: Mode_FullAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "WBK_DM_Autogun_SoundSet"
				// };
				// begin1[]=
				// {
					// "\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.89999998;
			// midRange=15;
			// midRangeProbab=0.69999999;
			// maxRange=30;
			// maxRangeProbab=0.050000001;
		// };
		// class FullAuto_medium: FullAuto
		// {
			// showToPlayer=0;
			// burst=3;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=75;
			// midRangeProbab=0.69999999;
			// maxRange=100;
			// maxRangeProbab=0.050000001;
			// aiRateOfFire=2;
		// };
	// };
	class XI_autogun_GL: Rifle_Base_F
	{
		author="Rogue771";
		scope=2;
		picture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		displayName="'[NCO] Aquilifer-Pattern w/GL (PXI)";
		escriptionShort="Bread is fat";
		model="\xi_allWeapons\XI_autogun.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\autogun\data\xi_autogunB_co.paa",
			"\xi_allWeapons\autogun\data\xi_autogunF_nco_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadTRG";
		muzzles[]=
		{
			"this",
			"TIOW_Type2_AutogunGL"
		};
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		magazineWell[]={};
		magazineReloadTime=0.47999999;
		initSpeed=-1;
		recoil="recoil_dm_autogun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=800;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"jmsfall_aog_scope_1",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"IC_bayonet_01",
					"IC_bayonet_02"
				};
				displayName="Bayonet Lug";
				iconPosition[]={0.1,0.2};
				iconScale=0.2;
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
			mass=120;
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"FullAuto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Autogun_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Autogun_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\DMAutogun.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class TIOW_Type2_AutogunGL: TIOW_KriegLauncher
		{
			displayName="Type 2 Underbarrel Grenade Launcher";
			descriptionShort="Type 2 Underbarrel Grenade Launcher";
			initSpeed=720;
			useModelOptics=0;
			useExternalOptic=0;
			inertia=0.40000001;
			magazines[]=
			{
				"TIOW_1Rnd_HE_Grenade_shell",
				"ACE_HuntIR_M203",
				"XI_IG_UBGL_Smoke_White_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Red_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Orange_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Blue_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Yellow_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Green_Mag_3rnd",
				"XI_IG_UBGL_Smoke_Purple_Mag_3rnd"
			};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
	};
	// class pxi_INeedMoreBoolets: XI_autogun_GL
	// {
		// author="Rogue771";
		// scope=0;
		// displayName="[LC]] I NEED MORE BOOLETS";
		// reloadMagazineSound[]=
		// {
			// "\xi_allWeapons\longlas\Sounds\reloading.wss",
			// "db40",
			// 1,
			// 1,
			// 10
		// };
		// modes[]=
		// {
			// "Single",
			// "FullAuto",
			// "FullAuto_medium"
		// };
		// class Single: Mode_SemiAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "INEEDMOREBOOLETS_shot_SoundSet"
				// };
				// begin1[]=
				// {
					// "\xi_allWeapons\longlas\Sounds\boolets.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
			// reloadTime=0.096000001;
			// dispersion=0.00034999999;
			// minRange=2;
			// minRangeProbab=0.5;
			// midRange=150;
			// midRangeProbab=0.69999999;
			// maxRange=250;
			// maxRangeProbab=0.2;
		// };
		// class FullAuto: Mode_FullAuto
		// {
			// sounds[]=
			// {
				// "StandardSound"
			// };
			// class BaseSoundModeType;
			// class StandardSound: BaseSoundModeType
			// {
				// soundSetShot[]=
				// {
					// "INEEDMOREBOOLETS_shot_SoundSet"
				// };
				// begin1[]=
				// {
					// "\xi_allWeapons\longlas\Sounds\boolets.ogg",
					// 1,
					// 1,
					// 1800
				// };
				// soundBegin[]=
				// {
					// "begin1",
					// 1
				// };
			// };
		// };
	// };
	class xi_boltPistol_base: Pistol_Base_F
	{
		reloadAction="GestureReloadPistol";
		magazineReloadTime=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		inertia=0.5;
		initSpeed=-1;
		recoil="recoil_ic_bolter_01";
		magazines[]=
		{
			"ic_bolt_small_mag"
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]={
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
			};
			allowedSlots[]={801,701,901};
			holsterOffset="holster";
			holsterScale=1;
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Bolt Pistol";
		dexterity=1.8;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Bolter_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Rifles\Bolter\sounds\Bolter.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			"db-5",
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\reloads\new_MX",
			"db-8",
			1,
			30
		};
	};
	class xi_BoltPistol: xi_boltPistol_base
	{
		scope=2;
		author="Rogue771";
		displayName="[TSR] [PXI] Carnifex-Pattern Boltgun";
		model="\xi_AllWeapons\xi_boltpistol.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\boltpistol\data\xi_boltpistol_co.paa"
		};
		picture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		UiPicture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		weaponInfoType="RscWeaponZeroing";
	};
	class xi_BoltPistol_Kyrent: xi_boltPistol_base
	{
		scope=2;
		author="Rogue771";
		displayName="[TSR] [PXI] Carnifex-Pattern Boltgun, Kyrent";
		model="\xi_AllWeapons\xi_boltpistol.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\data\customs\Kyrent_Boltgun_co.paa"
		};
		picture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		UiPicture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		weaponInfoType="RscWeaponZeroing";
	};
	class xi_BoltPistolWar: xi_boltPistol_base
	{
		scope=2;
		author="Rogue771";
		displayName="[TSR] [PXI] XI Bolt Pistol (War)";
		model="\XI_allWeapons\XI_BoltPistolWar.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\XI_allWeapons\boltPistol\data\XI_BoltPistolWar_co.paa"
		};
		picture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		UiPicture="\IC_Departmento_Munitorum\IC_Departmento_Weapons\UI\BoltPistol.paa";
		weaponInfoType="RscWeaponZeroing";
	};
	class XI_bullPup_base: Rifle_Base_F
	{
		author="Bones";
		scope=2;
		displayName="[TSR] [PXI] Taurus-Patern Light Stubber (S)";
		descriptionShort="[TSR] [PXI] Bullpup LMG";
		picture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_AllWeapons\marsLasgun\UI\MarsPattern.paa";
		model="\xi_allWeapons\xiBullpup.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\bullpupLMG\data\xi_bullpupLMG_F_co.paa",
			"\xi_allWeapons\bullpupLMG\data\xi_bullpupLMG_B_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Machineguns\Zafir\Data\Anim\zafir.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadMX";
		magazineWell[]={};
		magazines[]=
		{
			"SR_XI_Stubber_Mag"
		};
		magazineReloadTime=0.47999999;
		initSpeed=-1;
		recoil="recoil_dm_autogun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=1200;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\stubSmg_reload.ogg",
			"db-8",
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={1,0,0};
		fireLightAmbient[]={0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				compatibleItems[]=
				{
					"bipod_01_F_blk"
				};
				iconPosition[]={0.215,0.685};
				iconScale=0.34999999;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			mass=120;
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"FullAuto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"BullPup_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
					7,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.19599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"BullPup_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
					3,
					3,
					600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class XtdGearInfo
		{
			model="xi_weapons_squad";
			camo2="a";
		};
	};
	class XI_RevolverA_base: Pistol_Base_F
	{
		author="Bones";
		scope=2;
		displayName="[TSR] [PXI] [A] Imperious Handcannon";
		descriptionShort="[TSR] [PXI] Revolver";
		picture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		model="\xi_allWeapons\xiRevolver.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\Revolver\data\xiRevolver_co.paa"
		};
		handAnim[]={};
		selectionFireAnim="muzzleFlash";
		reloadAction="SR_XI_Handcanon_Reload";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",
			0.56234133,
			3,
			10
		};
		magazineWell[]={};
		magazines[]=
		{
			"SR_XI_HandCanon_Mag"
		};
		magazineReloadTime=0.32;
		initSpeed=-1;
		recoil="xi_recoil_rubicon_lasgun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=1200;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={1,0,0};
		fireLightAmbient[]={0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			mass=120;
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Revolver_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
					7,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.08599999;
			dispersion=0.0000034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class ic_cad_LuciusLongLas;
	class XI_lucius_dmr: ic_cad_LuciusLongLas
	{
		author="Rogue771";
		baseWeapon="XI_lucius_dmr";
		displayName="[TSR] [PXI] Pilum-Variant DMR (PXI)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"SR_XI_Heavy_Lasbolt_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.56999999,0.44999999};
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_hamr",
					"optic_erco_blk_f",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
				iconScale=0.1;
			};
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_LasgunNew_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\LasgunNew.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.75599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class ICP_Rifle_Kantrael_Base;
	class pxi_icpKantrael_rubiconBase: ICP_Rifle_Kantrael_Base
	{
		baseWeapon="";
		recoil="xi_recoil_rubicon_lasgun";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="[TSR] [PXI] [L] Rubicon Variant Kantrael";
		picture="\IC_weapons_base\Rifles\M36_Kantrael\data\ic_kantrael_ca.paa";
		UiPicture="\IC_weapons_base\Rifles\M36_Kantrael\data\ic_kantrael_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\data\base\kantrael_xi_g_new.paa"
		};
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		modes[] = {
			"Burst",
			"Single",
			"FullAuto_medium", 
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"IC_Kantrael_shot_SoundSet","IC_Kantrael_Tail_SoundSet"};
				soundBegin[] = {"begin1",1};
				begin1[] = {"\ic_weapons_base\sounds\Kantrael\Kantrael_closeShot",1,1,1800};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"IC_Kantrael_shot_SoundSet","IC_Kantrael_Tail_SoundSet"};
				soundBegin[] = {"begin1",1};
				begin1[] = {"\ic_weapons_base\sounds\Kantrael\Kantrael_closeShot",1,1,1800};
			};
			textureType="fastAuto";
			reloadTime=0.48599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		
	};
	class WRS_Weapon_AR;
	class pxi_wrsAR_onagerBase: WRS_Weapon_AR
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		baseWeapon="";
		displayName="'[PXI] [A] Onager Autogun";
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class WRS_Weapon_AUG;
	class pxi_wrsAUG_pugioBase: WRS_Weapon_AUG
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		baseWeapon="";
		displayName="'[PXI] [A] Pugio Autogun";
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class JMSFALL_m1a3Rifle_grey;
	class pxi_JMSFALL_malleusBase: JMSFALL_m1a3Rifle_grey
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI] [A] Malleus Autogun";
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"jmsfall_aog_scope_1",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class JMSFALL_car101Rifle_grey;
	class pxi_JMSFALL_cultroBase: JMSFALL_car101Rifle_grey
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI] [A] Cultro Autogun";
		Magazines[]=
		{
			"SR_XI_Autogun_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"jmsfall_aog_scope_1",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class ICP_Rifle_Autogun01_Base;
	class XI_icpAgripinaa_base: ICP_Rifle_Autogun01_Base
	{
		baseWeapon="";
		recoil="xi_recoil_kinetic";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[T2] Gravitas-Arcus Variant Battle Rifle (PXI)";
		picture="\IC_weapons_base\Rifles\Autogun01\data\autogun_ca.paa";
		UiPicture="\IC_weapons_base\Rifles\Autogun01\data\autogun_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"IC_weapons_base\Rifles\Autogun01\data\ic_cad_agripinaa_co.paa"
		};
		Magazines[]=
		{
			"SR_XI_BattleRifle_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"IC_Autogun_shot_SoundSet",
					"IC_autogun_Tail_SoundSet"
				};
				begin1[]=
				{
					"\ic_weapons_base\sounds\Autogun\Autogun_closeShot_02",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\ic_weapons_base\sounds\Autogun\Autogun_closeShot_02",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\ic_weapons_base\sounds\Autogun\Autogun_closeShot_03",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			reloadTime=0.2;
			dispersion=4.9999991e-005;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"IC_Autogun_shot_SoundSet"
				};
				begin1[]=
				{
					"\ic_weapons_base\sounds\Autogun\Autogun_closeShot_01",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.2;
			dispersion=4.9999991e-005;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
	};
	class dm_M36ModularV1;
	class pxi_m36DM_base: dm_M36ModularV1
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI] [A] M36 Lasgun";
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"FullAuto_medium",
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_LasgunNew_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\lasgunNew.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.65599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class dm_M36ModularV3;
	class pxi_m36DMCarbine_base: dm_M36ModularV3
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI] [A] M36 Carbine";
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"FullAuto_medium",
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_LasgunNew_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\lasgunNew.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.455999998;
			dispersion=0.00085000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class dm_M36ModularV2;
	class pxi_m36DMGalaxy_base: dm_M36ModularV2
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI] [A] M36 Galaxy";
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"FullAuto_medium",
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_LasgunNew_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\lasgunNew.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			reloadTime=0.65599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class ICP_Rifle_Voss_Base;
	class XI_Pugio_SMG: ICP_Rifle_Voss_Base
	{
		baseWeapon="XI_Pugio_SMG";
		recoil="xi_recoil_rubicon_lasgun";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T1] Pugio Variant Voss (PXI)";
		picture="\IC_weapons_base\Rifles\Voss\data\ic_voss_ca.paa";
		UiPicture="\IC_weapons_base\Rifles\Voss\data\ic_voss_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"IC_weapons_base\Rifles\Voss\data\voss_co.paa"
		};
		magazines[]=
		{
			"SR_XI_Lasbolt_Mag"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
		modes[] = {
			"FullAuto",
			"Single",
			"FullAuto_medium", 
			"Overcharge"
		};
		class Overcharge: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"IC_Voss_shot_SoundSet","IC_Voss_Tail_SoundSet"};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",34};
				begin1[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot01",1.5,1,1800};
				begin2[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot02",1.5,1.5,1800};
				begin3[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot03",1.5,2,1800};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"IC_Voss_shot_SoundSet","IC_Voss_Tail_SoundSet"};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",34};
				begin1[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot01",1.5,1,1800};
				begin2[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot02",1.5,1.5,1800};
				begin3[] = {"\ic_weapons_base\sounds\Voss\Voss_closeShot03",1.5,2,1800};
			};
			textureType="fastAuto";
			reloadTime=0.48599999;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class srifle_DMR_02_sniper_F;
	class XI_longlas_base: srifle_DMR_02_sniper_F
	{
		author="Bones";
		scope=0;
		displayName="[TSR] [PXI] Longlas Pattern lasgun";
		descriptionShort="[TSR] [PXI] Longlas Pattern lasgun";
		picture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		UiPicture="\xi_allWeapons\marsLasgun\UI\MarsPattern.paa";
		model="\xi_allWeapons\XI_Mars_longlas.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\longlas\data\xi_longlasF_co.paa",
			"\xi_allWeapons\longlas\data\xi_longlasB_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\IC_weapons_base\Rifles\M36_Kantrael\anim\ic_m36_pose.rtm"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadMX";
		magazineWell[]={};
		magazines[]=
		{
			"SR_XI_Longlag_Lasbolt_Mag"
		};
		magazineReloadTime=0.47999999;
		initSpeed=1500;
		recoil="xi_recoil_rubicon_lasgun";
		htMin=11;
		htMax=730;
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.4;
		maxRecoilSway=0.1;
		swayDecaySpeed=1.25;
		maxZeroing=1200;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"ic_weapons_base\Sounds\Lasgun_reload_01.wss",
			"db-8",
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={1,0,0};
		fireLightAmbient[]={0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			mass=120;
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Longlas_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Longlas_shot_SoundSet"
				};
				begin1[]=
				{
					"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=1;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
	};
	class xi_longlas_standard: XI_longlas_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Pilum-Variant, Mars-Pattern LongLas (S)";
	};
	class ic_cad_melta;
	class XI_Melta_Rebalance: ic_cad_melta
	{
		displayName="[TSR] [PXI] Ignis-Variant Meltagun (AT)";
		magazines[]=
		{
			"SR_XI_Melta_Mag"
		};
		magazineWell[]={};
	};
	
	
	
	class XI_Shotgun: arifle_MX_Base_F
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		Author="TIOW_Sokolonko";
		displayName="[TSR] [PXI] Cerberus Pattern Combat Shotgun";
		descriptionShort="Shotgun";
		model="\TIOW_Spec_Weps\Shotgun\IG_shotgun.p3d";
		picture="\TIOW_Spec_Weps\Shotgun\data\ig_shotgun_icon_ca.paa";
		reloadMagazineSound[]=
		{
			"xi_allWeapons\sounds\shotgun_reload_lowShells.wav",
			2.5118899,
			1,
			25
		};
		reloadSound[]=
		{
			"xi_allWeapons\sounds\shotgun_reload_lowShells.wav",
			2.5118899,
			1,
			25
		};
		class EventHandlers
		{
			fired="[(_this select 0), 0.06, 'SR_XI_WH_ShotGun_AfterFire', 'SR_XI_WBK_WH_shotgun_pump'] spawn SR_XI_Warhammer_FastboltAction;";
		};
		class bg_weaponparameters
		{
			class onEmpty
			{
				Sound="";
				Sound_Location="RightHandMiddle1";
			};
		};
		maxRecoilSway=0.015;
		swayDecaySpeed=2.25;
		opticsZoomMin=0.25;
		opticsZoomMax=1;
		opticsZoomInit=0.75;
		mass=40;
		recoil="recoil_gm6";
		magazines[]=
		{
			"SR_XI_Lucius22c_Solid",
			"SR_XI_Lucius22c_Pellet"
		};
		magazineWell[]={};
		ACE_barrelLength=400;
		dispersion=0.015;
		fireSpreadAngle=2;
		class WeaponSlotsInfo
		{
			mass=40;
			allowedSlots[]={901};
		};
		cameraDir="eye_look";
		memoryPointCamera="eye";
		discreteDistance[]={50};
		reloadAction="SR_XI_WH_ShotGun_Reload_LowShells";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\TIOW_Spec_Weps\Shotgun\Anims\shotgun_handanim.rtm"
		};
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			burst=3;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=0.03;
			minRange=0;
			minRangeProbab=1;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.30000001;
			aiRateOfFireDistance=50;
			aiRateOfFire=1.5;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_ShotgunLowShells_soundSet",
					"M320_Tail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1.1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=6;
	};
	
	
	
	class ic_cad_bolter;
	class XI_Augustus_P: ic_cad_bolter
	{
		displayName="[TSR] [PXI] Augustus-Pattern Personal Bolter (NCO)";
		magazines[]=
		{
			"ic_bolt_small_mag"
		};
		magazineWell[]={};
		scope=2;
		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class Default;
	class PutMuzzle;
	class Put: Default
	{
		muzzles[]+=
		{
			"XI_Gravitas_Muzzle"
		};
		class XI_Gravitas_Muzzle: PutMuzzle
		{
			displayName="[TSR] [PXI] Gravitas-Pattern Demo Charge";
			magazines[]=
			{
				"MTI_SatchelCharge_Mag"
			};
		};
	};
	// class XI_Mars_Variant_Lasgun: XI_Mars_lasgun_base
	// {
		// scope=2;
		// displayName="'[T1] Mars Lasrifle (PXI)";
		// class XtdGearInfo
		// {
			// model="pxi_xtd_t1weapons";
			// camo="a";
		// };
	// };
	// class pxi_aquiliferAutogun_T1: XI_autogun
	// {
		// scope=2;
		// displayName="'[T1] Aquilifer Autogun (PXI)";
		// class XtdGearInfo
		// {
			// model="pxi_xtd_t1weapons";
			// camo="b";
		// };
	// };
	class pxi_RubiconLasgun_T1: pxi_icpKantrael_rubiconBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Rubicon Lasgun";
	};
	class pxi_PugioAutogun_T1: pxi_wrsAUG_pugioBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Pugio Autogun";
	};
	class pxi_m36Lasgun_T1: pxi_m36DM_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] M36 Lasgun";
	};
	class pxi_m36Carbine_T1: pxi_m36DMCarbine_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] M36 Lasgun (Carbine)";
	};
	class pxi_m36Galaxy_T1: pxi_m36DMGalaxy_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] M36 Lasgun (Galaxy)";
	};
	class pxi_onagerAutogun_T2: pxi_wrsAR_onagerBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Onager Autogun";
	};
	class pxi_ArcusAutogun_T2: XI_icpAgripinaa_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Arcus Autogun";
	};
	class pxi_marsLasgun_T3: XI_Mars_lasgun_base
	{
		scope=2;
		displayName="[TSR] [PXI] Mars Lasrifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"dm_M362xSight","dm_M36HoloSight",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class pxi_aquiliferAutogun_T3: XI_autogun
	{
		scope=2;
		displayName="[TSR] [PXI] Aquilifer Autogun";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	class pxi_malleusAutogun_T3: pxi_JMSFALL_malleusBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Malleus Autogun";
	};
	class pxi_cultroAutogun_T3: pxi_JMSFALL_cultroBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] Cultro Autogun";
	};
	class xi_Autogun_Kyrent: XI_autogun
	{
		scope=2;
		author="Rogue771";
		displayName="[TSR] [PXI] Aquilifer Pattern Autogun, Kyrent (C)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\data\customs\Kyrent_Autogun_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	
	
	
	
	// Flamers.
	
	class TIOW_Krieg_Flamer;
	class SR_XI_Flamer: TIOW_Krieg_Flamer
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_XI_Flamer";
		displayName="[TSR] [PXI] Incinerator Pattern Flamer";
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.30;
			dispersion=0.00034999999;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
					0.316228,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSet="";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"TIOW_KriegFlamer_Shot_SoundSet",
					"TIOW_KriegFlamer_Tail_SoundSet",
					"TIOW_KriegFlamer_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
							1.58489,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\a40k_wepbase\Sounds\Flamerv5_40k.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};





	// Plasma Weapons.

	class ic_PlasmaGun;
	class SR_XI_ic_PlasmaGun: ic_PlasmaGun
	{
		baseWeapon="SR_XI_ic_PlasmaGun";
		displayName="[TSR] [PXI] Plasma Gun";
		magazines[]=
		{
			"SR_XI_Plasma_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			dispersion=0.00034999999;
			aiRateOfFire=6;
			minRange=50;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	class ic_PlasmaGunPurple;
	class SR_XI_ic_PlasmaGunPurple: ic_PlasmaGunPurple
	{
		baseWeapon="SR_XI_ic_PlasmaGunPurple";
		displayName="[TSR] [PXI] Plasma Gun (Purple)";
		magazines[]=
		{
			"SR_XI_Plasma_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			dispersion=0.00034999999;
			aiRateOfFire=6;
			minRange=50;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	class ic_PlasmaGunRed;
	class SR_XI_ic_PlasmaGunRed: ic_PlasmaGunRed
	{
		baseWeapon="SR_XI_ic_PlasmaGunRed";
		displayName="[TSR] [PXI] Plasma Gun (Red)";
		magazines[]=
		{
			"SR_XI_Plasma_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			dispersion=0.00034999999;
			aiRateOfFire=6;
			minRange=50;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	class ic_PlasmaGunYellow;
	class SR_XI_ic_PlasmaGunYellow: ic_PlasmaGunYellow
	{
		baseWeapon="SR_XI_ic_PlasmaGunYellow";
		displayName="[TSR] [PXI] Plasma Gun (Yellow)";
		magazines[]=
		{
			"SR_XI_Plasma_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			dispersion=0.00034999999;
			aiRateOfFire=6;
			minRange=50;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	class ic_PlasmaGunWhite;
	class SR_XI_ic_PlasmaGunWhite: ic_PlasmaGunWhite
	{
		baseWeapon="SR_XI_ic_PlasmaGunWhite";
		displayName="[TSR] [PXI] Plasma Gun (White)";
		magazines[]=
		{
			"SR_XI_Plasma_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			dispersion=0.00034999999;
			aiRateOfFire=6;
			minRange=50;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Melta_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Melta.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.40000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"dm_m36holosight",
					"dm_m362xsight",
					"dm_m36holosightNM",
					"dm_m362xsightNM",
					"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Arco_AK_blk_F","optic_Arco_AK_lush_F","optic_Arco_AK_arid_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Holosight_lush_F","optic_Holosight_arid_F","OPTRE_M7_Sight","OPTRE_HMG38_CarryHandle","OPTRE_M12_Optic","OPTRE_M12_Optic_Red","OPTRE_M12_Optic_Green","OPTRE_M6C_Scope","OPTRE_M6G_Scope","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow","OPTRE_BR45_Scope","OPTRE_BR55HB_Scope","OPTRE_BR55HB_Scope_Grey","OPTRE_BMR_Scope","OPTRE_M392_Scope","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRM_Sight","OPTRE_SRS99C_Scope","OPTRE_SRS99_Scope","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5C_SmartLink","OPTRE_MA5_BUIS","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"
				};
			};
		};
	};
	
	
	
	class TIOW_Guard_Plasma_Pistol;
	class SR_XI_TIOW_Guard_Plasma_Pistol: TIOW_Guard_Plasma_Pistol
	{
		baseWeapon="SR_XI_TIOW_Guard_Plasma_Pistol";
		displayName="[TSR] [PXI] Plasma Pistol";
		magazines[]=
		{
			"SR_XI_PlasmaPistol_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge"
		};
		plasmaCoolingMult = 1;
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Plasmagun_Shot_SoundSet",
					"Plasmagun_Tail_SoundSet",
					"Plasmagun_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"SR_Arsenal\sound\Overcharge.wss",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"SR_Arsenal\sound\Overcharge.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"SR_Arsenal\sound\Overcharge.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"SR_Arsenal\sound\Overcharge.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"SR_Arsenal\sound\Overcharge.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
	
	
	
	
	
	// SMG.
	
	class ic_cad_autogunDM;
	class SR_XI_SMG: ic_cad_autogunDM
	{
		baseWeapon="SR_XI_SMG";
		displayName="[TSR] [PXI] Stub SMG";
		magazines[]=
		{
			"SR_XI_SMG_Mag"
		};
		modes[] = {"FullAuto","FullerAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		
		class FullerAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_DM_Smg_SoundSet"
				};
				begin1[]=
				{
					"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Autogun.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fastAuto";
			soundBurst=0;
			reloadTime=0.033;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
	};
	
	
	
	
	
	// Grenade Launchers.
	class SR_XI_TIOW_KriegLauncher: TIOW_KriegLauncher
	{
		baseWeapon="SR_XI_TIOW_KriegLauncher";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] [Krieg] Lucius Pattern Grenade Launcher";
		magazines[]=
		{
			"SR_XI_Heavy_Single_Buck_GL_Mag",
			"SR_XI_Heavy_Single_Flare_GL_Mag",
			"SR_XI_Heavy_Single_Frag_GL_Mag",
			"SR_XI_Heavy_Single_Krak_GL_Mag",
			"SR_XI_Heavy_Single_Smoke_GL_Mag"
		};
	};
	
	class Imperator_ira;
	class SR_XI_Imperator_ira: Imperator_ira
	{
		baseWeapon="SR_XI_Imperator_ira";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] [PXI] [Imperium] Imperator Ira Pattern Grenade Launcher";
		magazines[]=
		{
			"SR_XI_Buck_GL_Mag",
			"SR_XI_Flare_GL_Mag",
			"SR_XI_Frag_GL_Mag",
			"SR_XI_Krak_GL_Mag",
			"SR_XI_Smoke_GL_Mag"
		};
		
		class Single: Mode_SemiAuto
		{
			reloadTime=0.60;
			dispersion=1e-006;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_mx";
			minRange=2;
			minRangeProbab=0.5;
			midRange=750;
			midRangeProbab=0.75;
			maxRange=1500;
			maxRangeProbab=0.75;
			
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TIOW_Lucius_Shotgun_Shot_SoundSet",
					"TIOW_Lucius_Shotgun_tail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
	
	
	
	
	
};
