class CfgPatches
{
	class XI_HelmGift
	{
		units[]=
		{
			"XI_CAD_B",
			"XI_CAD_B_G"
		};
		weapons[]=
		{
			"XI_HelmGift_base",
			"XI_CAD_U_B",
			"XI_HelmGiftShoulders_base",
			"XI_HelmGiftV2_base",
			"XI_HelmGiftV3_base",
			"XI_CAD_U_B_G",
			"XI_Triarii_Variant"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark"
		};
	};
};
class cfgVehicles
{
	class HitPoints;
	class IC_CAD_inf_836_B;
	class XI_CAD_B: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="IC_CAD_BLU_desert";
		displayName="XI Cadian Shock Trooper";
		uniformClass="XI_CAD_U_B";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\cad_uni_pants02_XI.paa",
			"\SR_XI\Gift\data\cad_uni_top_XI.paa"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.89999998;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			class ACE_HDBracket
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
		armor=2;
	};
	class IC_CadUExtraRed_B;
	class XI_CAD_B_G: IC_CadUExtraRed_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="IC_CAD_BLU_desert";
		displayName="XI Cadian Shock Trooper";
		uniformClass="XI_CAD_U_B";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\cad_uni_pants02_XI.paa",
			"\SR_XI\Gift\data\cad_uni_top_XI.paa"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.89999998;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			class ACE_HDBracket
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
		armor=2;
	};
};
class CfgWeapons
{
	class ItemInfo;
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class WeaponSlotsInfo;
	class VestItem;
	class H_HelmetB;
	class IC_CAD_U_836_2_B;
	class XI_CAD_U_B: IC_CAD_U_836_2_B
	{
		author="Rogue771";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[TSR] [PXI] Tunica-Variant Uniform (No Thigh Guards)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="XI_CAD_B";
			containerClass="Supply90";
			mass=80;
		};
	};
	class IC_CADUExtraRed_U_B;
	class XI_CAD_U_B_G: IC_CADUExtraRed_U_B
	{
		author="Rogue771";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[TSR] [PXI] Tunica-Variant Uniform (Thigh Guards)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="XI_CAD_B_G";
			containerClass="Supply90";
			mass=80;
		};
	};
	class XI_Triarii_Variant: XI_CAD_U_B
	{
		displayName="[TSR] [PXI] Triarii-Variant Uniform";
		author="Rogue771";
		scope=2;
	};
	class XI_HelmGift_base: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Helmet";
		model="\SR_XI\Gift\XI_HelmGift.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\XIHelm_gift_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=0.5;
			uniformModel="\SR_XI\Gift\XI_HelmGift.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=35;
					passThrough=0.27000001;
				};
			};
		};
	};
	class XI_HelmGiftShoulders_base: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Helmet (With Shoulders)";
		model="\SR_XI\Gift\XI_HelmGiftShoudlers.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\XIHelm_gift_co.paa",
			"\Arma3 Mods\Harakoni\data\UltramarAuxiliaShouldersRed_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=0.5;
			uniformModel="\SR_XI\Gift\XI_HelmGiftShoudlers.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.5;
				};
			};
		};
	};
	class XI_HelmGiftV2_base: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Lux-Pattern Helmet (V2)";
		model="\SR_XI\Gift\XI_HelmGiftV2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\XIHelm_gift_co.paa",
			"\Arma3 Mods\Harakoni\data\UltramarAuxiliaShouldersRed_co.paa",
			"\SR_XI\Gift\data\XISkirt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=0.5;
			uniformModel="\SR_XI\Gift\XI_HelmGiftV2.p3d";
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
					hitpointName="HitHead";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class XI_HelmGiftV3_base: H_HelmetB
	{
		author="Rogue771";
		scope=0;
		displayName="[TSR] [PXI] Lux-Pattern Helmet";
		model="\SR_XI\Gift\XI_HelmGiftV3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\Gift\data\XIHelm_gift_co.paa",
			"\Arma3 Mods\Harakoni\data\UltramarAuxiliaShouldersRed_co.paa",
			"\SR_XI\Gift\data\XISkirt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=0.5;
			uniformModel="\SR_XI\Gift\XI_HelmGiftV3.p3d";
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
					hitpointName="HitHead";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class XI_Mask_Gift: NVGoggles
	{
		scope=0;
		author="Rogue771";
		displayname="[TSR] [PXI] Lux-Pattern Face Mask";
		model="\SR_XI\Gift\XI_MaskGift.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SR_XI\Gift\XI_MaskGift.p3d";
			modelOff="\SR_XI\Gift\XI_MaskGift.p3d";
		};
	};
};
class cfgGlasses
{
};
