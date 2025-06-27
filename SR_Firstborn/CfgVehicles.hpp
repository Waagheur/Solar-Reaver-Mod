//
// CfgVechicles Includes PowerPacks & Units
// Powerpacks are at the bottom of the file,
// Replace any mention of [ID] with your Chapter Prefix WITHOUT Brackets


class CfgVehicles
{
	class SoldierWB;
	class TIOWSpaceMarine_Base : SoldierWB 
	{
		armor = 60;
		
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm 
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm 
			{
				name = "hand_r";
			};
			class HitLeftLeg 
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg 
			{
				name = "leg_r";
			};
			class ACE_HDBracket 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		}
	};
	
	//				# Powerpacks/Backpacks #

	class TIOW_MK2Powerpack_WS;
	class TIOW_MK4Powerpack_WS;
	class TIOW_MK5Powerpack_WS;
	class TIOW_MK2Powerpack_SR_BS : TIOW_MK2Powerpack_WS
	{
		author = "Strixus";
		displayName = "[TSR] MK 2 Powerpack (Blackshield)";
		tf_range=50000;
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\BlackShield_PowerPack.paa"
		};
		maximumLoad = 500;
	};

	class TIOW_MK4Powerpack_SR_BS : TIOW_MK4Powerpack_WS
	{
		author = "Strixus";
		displayName = "[TSR] MK 4 Powerpack (Blackshield)";
		tf_range=50000;
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\BlackShield_PowerPack.paa"
		};
		maximumLoad = 500;
	};

	class TIOW_MK5Powerpack_SR_BS : TIOW_MK5Powerpack_WS
	{
		author = "Strixus";
		displayName = "[TSR] MK 5 Powerpack (Blackshield)";
		tf_range=50000;
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\BlackShield_PowerPack.paa"
		};
		maximumLoad = 500;
	};
	class Steve_Recon_Pp_Blue1_1;
	class Steve_Recon_Pp_TSR_1: Steve_Recon_Pp_Blue1_1
	{
		displayName="[TSR] Recon Power Pack";
		hiddenSelections[]=
		{
			"BackpackCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_FirstBorn\Textures\TSR_Recon_Powerpack.paa"
		};
		maximumLoad = 640;
	};

	//			# Devastator Backpacks #
	class Dos_HB_PP_BL_1;
	class Dos_LC_PP_BL_1;
	class Dos_HB_PP_UM_1;
	class Dos_LC_PP_UM_1;
	class Dos_HB_PP_GR_1;
	class Dos_LC_PP_GR_1;
	class Dos_HB_PP_RD_1;
	class Dos_LC_PP_RD_1;
	class Dos_HB_PP_YL_1;
	class Dos_LC_PP_YL_1;	
	
	class Dos_HB_PP_BL_1_SR : Dos_HB_PP_BL_1
	{
		displayName="[TSR] Black Devastator Powerpack (HB)";
		maximumLoad = 920;
	}
	class Dos_LC_PP_BL_1_SR : Dos_LC_PP_BL_1
	{
		displayName="[TSR] Black Devastator Powerpack (LC)";
		maximumLoad = 920;
	}
	class Dos_HB_PP_UM_1_SR : Dos_HB_PP_UM_1
	{
		displayName="[TSR] Blue Devastator Powerpack (HB)";
		maximumLoad = 920;
	}
	class Dos_LC_PP_UM_1_SR : Dos_LC_PP_UM_1
	{
		displayName="[TSR] Blue Devastator Powerpack (LC)";
		maximumLoad = 920;
	}
	class Dos_HB_PP_GR_1_SR : Dos_HB_PP_GR_1
	{
		displayName="[TSR] Green Devastator Powerpack (HB)";
		maximumLoad = 920;
	}
	class Dos_LC_PP_GR_1_SR : Dos_LC_PP_GR_1
	{
		displayName="[TSR] Green Devastator Powerpack (LC)";
		maximumLoad = 920;
	}
	class Dos_HB_PP_RD_1_SR : Dos_HB_PP_RD_1
	{
		displayName="[TSR] Red Devastator Powerpack (HB)";
		maximumLoad = 920;
	}
	class Dos_LC_PP_RD_1_SR : Dos_LC_PP_RD_1
	{
		displayName="[TSR] Red Devastator Powerpack (LC)";
		maximumLoad = 920;
	}
	class Dos_HB_PP_YL_1_SR : Dos_HB_PP_YL_1
	{
		displayName="[TSR] Yellow Devastator Powerpack (HB)";
		maximumLoad = 920;
	}
	class Dos_LC_PP_YL_1_SR : Dos_LC_PP_YL_1
	{
		displayName="[TSR] Yellow Devastator Powerpack (LC)";
		maximumLoad = 920;
	}

	//
	// # Tactical Marines #
	//

	class TIOW_Tactical_SL_7; // MK 2
	class TIOW_Tactical_SL_6; // MK 3
	class TIOW_Tactical_SL_5; // MK 4
	class TIOW_Tactical_SL_4; // MK 5
	class TIOW_Tactical_SL_3; // MK 6
	class TIOW_Tactical_SL_2; // MK 8
	class TIOW_Tactical_SL_1; // MK 7
	class TIOW_Tactical_SL_1_Imperialis; // MK 7 Imperialis
 
 // Solar Reavers Armor

	class TIOW_MK2_Tact_SR_BS: TIOW_Tactical_SL_7
	{
		author="Strixus";
		displayName="Tactical Marine (MK. II)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK2_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};

	class TIOW_MK3_Tact_SR_BS: TIOW_Tactical_SL_6
	{
		author="Strixus";
		displayName="Tactical Marine (MK. III)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK3_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};

	class TIOW_MK4_Tact_SR_BS: TIOW_Tactical_SL_5
	{
		author="Strixus";
		displayName="Tactical Marine (MK. IV)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK4_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};

	class TIOW_MK5_Tact_SR_BS: TIOW_Tactical_SL_4
	{
		author="Strixus";
		displayName="Tactical Marine (MK. V)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK5_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};

	class TIOW_MK6_Tact_SR_BS: TIOW_Tactical_SL_3
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VI)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK6_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};

	class TIOW_MK7_Tact_SR_BS: TIOW_Tactical_SL_1
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK7_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};
	class TIOW_MK8_Tact_SR_BS: TIOW_Tactical_SL_2
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VIII)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK8_Armor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};
	class TIOW_MK7Imp_Tact_SR_BS: TIOW_Tactical_SL_1_Imperialis
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII Imperialis)";
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_SR_Marines";
		uniformClass="SR_MK7_ImperialisArmor_Blackshield"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};
}; // End of CfgVechicle
