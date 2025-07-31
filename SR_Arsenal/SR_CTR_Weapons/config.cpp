class CfgPatches
{
	class SR_CTR_Weapons
	{
		name="SR CTR Arsenal Mod";
		author="Waagheur";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"CTR_Weapons"
		};
		weapons[]=
		{
			"SR_CTR_Bolt_Rifle",
			"SR_CTR_Bolt_Rifle_Red",
			"SR_CTR_Bolt_Rifle_Red_Alt",
			"SR_CTR_Bolt_Rifle_White",
			"SR_CTR_Bolt_Rifle_GL",
			"SR_CTR_Bolt_Rifle_GL_Red",
			"SR_CTR_Bolt_Rifle_GL_Red_Alt",
			"SR_CTR_Bolt_Rifle_GL_White",
			
			"SR_CTR_Auto_Bolt_Rifle",
			"SR_CTR_Auto_Bolt_Rifle_Red",
			"SR_CTR_Auto_Bolt_Rifle_Red_Alt",
			"SR_CTR_Auto_Bolt_Rifle_White",
			"SR_CTR_Auto_Bolt_Rifle_GL",
			"SR_CTR_Auto_Bolt_Rifle_GL_Red",
			"SR_CTR_Auto_Bolt_Rifle_GL_Red_Alt",
			"SR_CTR_Auto_Bolt_Rifle_GL_White",
			
			"SR_CTR_Stalker_Bolt_Rifle",
			"SR_CTR_Stalker_Bolt_Rifle_Red",
			"SR_CTR_Stalker_Bolt_Rifle_Red_Alt",
			"SR_CTR_Stalker_Bolt_Rifle_White",
			"SR_CTR_Stalker_Bolt_Rifle_GL",
			"SR_CTR_Stalker_Bolt_Rifle_GL_Red",
			"SR_CTR_Stalker_Bolt_Rifle_GL_Red_Alt",
			"SR_CTR_Stalker_Bolt_Rifle_GL_White",
			
			"SR_CTR_Bolt_Carbine",
			"SR_CTR_Bolt_Carbine_Red",
			"SR_CTR_Bolt_Carbine_Red_Alt",
			"SR_CTR_Bolt_Carbine_White",
			
			"SR_CTR_Occulus_Bolt_Carbine",
			"SR_CTR_Occulus_Bolt_Carbine_Red",
			"SR_CTR_Occulus_Bolt_Carbine_Red_Alt",
			"SR_CTR_Occulus_Bolt_Carbine_White",
			
			"SR_CTR_Marksman_Bolt_Carbine",
			"SR_CTR_Marksman_Bolt_Carbine_Red",
			"SR_CTR_Marksman_Bolt_Carbine_Red_Alt",
			"SR_CTR_Marksman_Bolt_Carbine_White",
			
			"SR_CTR_Assault_Bolter",
			"SR_CTR_Assault_Bolter_Red",
			"SR_CTR_Assault_Bolter_Red_Alt",
			"SR_CTR_Assault_Bolter_White",
			
			"SR_CTR_Heavy_Bolt_Rifle",
			"SR_CTR_Heavy_Bolt_Rifle_Red",
			"SR_CTR_Heavy_Bolt_Rifle_Red_Alt",
			"SR_CTR_Heavy_Bolt_Rifle_White",
			
			"SR_CTR_Sternguard_Bolt_Rifle",
			"SR_CTR_Sternguard_Bolt_Rifle_Red",
			"SR_CTR_Sternguard_Bolt_Rifle_Red_Alt",
			"SR_CTR_Sternguard_Bolt_Rifle_White",
			
			
			
			"SR_CTR_Assault_Plasma_Incinerator",
			"SR_CTR_Assault_Plasma_Incinerator_Red",
			"SR_CTR_Assault_Plasma_Incinerator_Red_Alt",
			"SR_CTR_Assault_Plasma_Incinerator_White",
			
			"SR_CTR_Heavy_Plasma_Incinerator",
			"SR_CTR_Heavy_Plasma_Incinerator_Red",
			"SR_CTR_Heavy_Plasma_Incinerator_Red_Alt",
			"SR_CTR_Heavy_Plasma_Incinerator_White",
			
			"SR_CTR_Plasma_Exterminator",
			"SR_CTR_Plasma_Exterminator_Red",
			"SR_CTR_Plasma_Exterminator_Red_Alt",
			"SR_CTR_Plasma_Exterminator_White",
			
			
			
			"SR_CTR_Shrike_Sniper",
			"SR_CTR_Shrike_Sniper_Red",
			"SR_CTR_Shrike_Sniper_Red_Alt",
			"SR_CTR_Shrike_Sniper_White",
			
			"SR_CTR_Las_Fusil",
			"SR_CTR_Las_Fusil_Red",
			"SR_CTR_Las_Fusil_Red_Alt",
			"SR_CTR_Las_Fusil_White",
			
			"SR_CTR_Melta_Rifle",
			"SR_CTR_Melta_Rifle_Red",
			"SR_CTR_Melta_Rifle_Red_Alt",
			"SR_CTR_Melta_Rifle_White",
			
			"SR_CTR_Combi_Plasma_Rifle",
			"SR_CTR_Combi_Plasma_Rifle_Red",
			"SR_CTR_Combi_Plasma_Rifle_Red_Alt",
			"SR_CTR_Combi_Plasma_Rifle_White",
			
			"SR_CTR_Melta_Combi_Bolter",
			"SR_CTR_Melta_Combi_Bolter_Red",
			"SR_CTR_Melta_Combi_Bolter_Red_Alt",
			"SR_CTR_Melta_Combi_Bolter_White"
		};
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle",
			"SR_CTR_Magazine_Sickle_2",
			"SR_CTR_Magazine_Box",
			"SR_CTR_Magazine_Box_2",
			"SR_CTR_Magazine_Box_3",
			"SR_CTR_Magazine_Box_4",
			"SR_CTR_Magazine_Box_Vengeance",
			"SR_CTR_Magazine_Box_5_Vengeance",
			"SR_CTR_Magazine_Box_6_Vengeance",
			"SR_CTR_Magazine_Straight",
			"SR_CTR_Magazine_Straight_2",
			"SR_CTR_Magazine_Shrike",
			
			"SR_CTR_Flask_Plasma_1",
			"SR_CTR_Flask_Plasma_2",
			"SR_CTR_Combi_Flask_Plasma_1"
		};
		ammo[]=
		{
			
		};
		units[]={};
		
		skipWhenMissingDependencies = 1;
	};
};



class TIOW_SmBoltRound;

class CfgAmmo
{
	class SR_CTR_Bolt_Round: TIOW_SmBoltRound
	{
	};
	class SR_CTR_Bolt_Round_2: SR_CTR_Bolt_Round
	{
		hit=45;
		caliber=3;
	};
	class SR_CTR_Vengeance_Round: SR_CTR_Bolt_Round
	{
		hit=45;
		caliber=3;
	};
	class SR_CTR_Stalker_Bolt_Round: SR_CTR_Bolt_Round
	{
		hit=70;
		caliber=4;
		coefGravity = 0.25;
		typicalSpeed=1200;
	};
	class SR_CTR_Shrike_Bolt_Round: SR_CTR_Bolt_Round
	{
		hit=100;
		indirectHit=8;
		indirectHitRange=5;
		typicalSpeed=1200;
		timeToLive=10;
		coefGravity=0.20;
		tracerEndTime=5;
		caliber=6;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=2;
		explosive=0;
		cartridge="FxCartridge_TIOW_Bolter75";
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="";
		explosionEffects="TIOW_BoltRoundRoundExplosion";
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
	};
};



class CTR_Magazine_Sickle;
class CTR_Magazine_Shrike;

class CTR_Flask_Plasma_1;
class CTR_Flask_Plasma_2;

class CfgMagazines
{
	
	class SR_CTR_Magazine_Sickle: CTR_Magazine_Sickle
	{
		displayName="[TSR] [CTR] Sickle Magazine 30 Rnd";
		ammo="SR_CTR_Bolt_Round";
		count=30;
		mass=25;
		initSpeed=1000;
	};
	
	class SR_CTR_Magazine_Sickle_2: SR_CTR_Magazine_Sickle
	{
		displayName="[TSR] [CTR] Sickle Magazine 20 Rnd";
		ammo="SR_CTR_Bolt_Round";
		count=20;
		mass=18;
	};
	
	
	
	class SR_CTR_Magazine_Box: SR_CTR_Magazine_Sickle
	{
		displayName="[TSR] [CTR] Box Magazine 45 Rnd";
		count=45;
		mass=35;
		
		picture="\CTR_Weapons\data\icons\magazines\Mag_Box_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\Mag_Box_ca.paa";
		model="CTR_Weapons\models\Mag_Box.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Box.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_2: SR_CTR_Magazine_Box
	{
		displayName="[TSR] [CTR] Box Magazine 100 Rnd";
		count=100;
		mass=55;
		
		picture="\CTR_Weapons\data\icons\magazines\mag_box_2_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\mag_box_2_ca.paa";
		model="CTR_Weapons\models\Mag_Box_2.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Box_2.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_2_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_3: SR_CTR_Magazine_Box_2
	{
		displayName="[TSR] [CTR] Box Magazine 60 Rnd";
		count=60;
		mass=45;
		
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_2_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_4: SR_CTR_Magazine_Box
	{
		displayName="[CTR] Box Magazine 45 Rnd";
		ammo="SR_CTR_Bolt_Round_2";
		count=45;
		mass=45;
		
		picture="\CTR_Weapons\data\icons\magazines\mag_box_3_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\mag_box_3_ca.paa";
		model="CTR_Weapons\models\Mag_Box_3.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Box_3.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_3_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_5: SR_CTR_Magazine_Box
	{
		displayName="[CTR] Box Magazine 35 Rnd";
		ammo="SR_CTR_Bolt_Round";
		count=35;
		mass=30;
		
		picture="\CTR_Weapons\data\icons\magazines\Mag_Box_4_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\Mag_Box_4_ca.paa";
		model="CTR_Weapons\models\Mag_Box_4.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Box_4.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_4_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_6: SR_CTR_Magazine_Box
	{
		displayName="[TSR] [CTR] Box Magazine 35 Rnd";
		ammo="SR_CTR_Bolt_Round";
		count=35;
		mass=30;
		
		picture="\CTR_Weapons\data\icons\magazines\mag_box_5_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\mag_box_5_ca.paa";
		model="CTR_Weapons\models\Mag_Box_5.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Box_5.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_5_co.paa"
		};
	};
	
	
	
	class SR_CTR_Magazine_Box_Vengeance: SR_CTR_Magazine_Box
	{
		displayName="[TSR] [CTR] Box Magazine 35 Rnd (Vengeance)";
		ammo="SR_CTR_Vengeance_Round";
		count=35;
		mass=35;
	};
	
	class SR_CTR_Magazine_Box_5_Vengeance: SR_CTR_Magazine_Box_5
	{
		displayName="[TSR] [CTR] Box Magazine 35 Rnd (Vengeance)";
		ammo="SR_CTR_Vengeance_Round";
		count=35;
		mass=35;
		
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_4_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Box_6_Vengeance: SR_CTR_Magazine_Box_6
	{
		displayName="[TSR] [CTR] Box Magazine 35 Rnd (Vengeance)";
		ammo="SR_CTR_Vengeance_Round";
		count=35;
		mass=35;
		
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_Box_5_co.paa"
		};
	};
	
	
	
	class SR_CTR_Magazine_Straight: SR_CTR_Magazine_Sickle
	{
		displayName="[TSR] [CTR] Straight Magazine 15 Rnd";
		ammo="SR_CTR_Stalker_Bolt_Round";
		count=15;
		mass=18;
		initSpeed=1500;
		
		picture="\CTR_Weapons\data\icons\magazines\Mag_Straight_ca.paa";
		UiPicture="\CTR_Weapons\data\icons\magazines\Mag_Straight_ca.paa";
		model="CTR_Weapons\models\Mag_Straight.p3d";
		modelSpecial="CTR_Weapons\models\Mag_Straight.p3d";
		hiddenSelectionsTextures[]=
		{
			"CTR_Weapons\data\textures\magazines\Mag_straight_co.paa"
		};
	};
	
	class SR_CTR_Magazine_Straight_2: SR_CTR_Magazine_Straight
	{
		displayName="[TSR] [CTR] Straight Magazine 20 Rnd";
		ammo="SR_CTR_Bolt_Round";
		count=20;
		mass=21;
	};
	
	
	
	class SR_CTR_Magazine_Shrike: CTR_Magazine_Shrike
	{
		displayName="[TSR] [CTR] Shrike Magazine 12 Rnd";
		ammo="SR_CTR_Shrike_Bolt_Round";
		count=12;
		mass=25;
		initSpeed=1600;
	};
	
	
	
	class SR_CTR_Flask_Plasma_1 : CTR_Flask_Plasma_1
	{
		displayName = "[TSR] [CTR] Plasma Flask";
		descriptionShort = "[TSR] [CTR] Plasma Flask";
		ammo = "TIOW_SM_PlasmagunRound"
		count=100;
	};
	
	class SR_CTR_Flask_Plasma_2 : CTR_Flask_Plasma_2
	{
		displayName = "[TSR] [CTR] Plasma Flask";
		descriptionShort = "[TSR] [CTR] Plasma Flask";
		ammo = "TIOW_SM_PlasmagunRound"
		count=100;
	};
	
	class SR_CTR_Combi_Flask_Plasma_1 : CTR_Flask_Plasma_1
	{
		displayName = "[TSR] [CTR] Plasma Flask";
		descriptionShort = "[TSR] [CTR] Plasma Flask";
		ammo = "TIOW_SM_PlasmagunRound"
	};
	
};





class Mode_SemiAuto;

// Boltguns
class CTR_Bolt_Rifle;
class CTR_Bolt_Rifle_Red;
class CTR_Bolt_Rifle_Red_Alt;
class CTR_Bolt_Rifle_White;
class CTR_Bolt_Rifle_GL;
class CTR_Bolt_Rifle_GL_Red;
class CTR_Bolt_Rifle_GL_Red_Alt;
class CTR_Bolt_Rifle_GL_White;

class CTR_Auto_Bolt_Rifle;
class CTR_Auto_Bolt_Rifle_Red;
class CTR_Auto_Bolt_Rifle_Red_Alt;
class CTR_Auto_Bolt_Rifle_White;
class CTR_Auto_Bolt_Rifle_GL;
class CTR_Auto_Bolt_Rifle_GL_Red;
class CTR_Auto_Bolt_Rifle_GL_Red_Alt;
class CTR_Auto_Bolt_Rifle_GL_White;

class CTR_Stalker_Bolt_Rifle;
class CTR_Stalker_Bolt_Rifle_Red;
class CTR_Stalker_Bolt_Rifle_Red_Alt;
class CTR_Stalker_Bolt_Rifle_White;
class CTR_Stalker_Bolt_Rifle_GL;
class CTR_Stalker_Bolt_Rifle_GL_Red;
class CTR_Stalker_Bolt_Rifle_GL_Red_Alt;
class CTR_Stalker_Bolt_Rifle_GL_White;

class CTR_Bolt_Carbine;
class CTR_Bolt_Carbine_Red;
class CTR_Bolt_Carbine_Red_Alt;
class CTR_Bolt_Carbine_White;

class CTR_Occulus_Bolt_Carbine;
class CTR_Occulus_Bolt_Carbine_Red;
class CTR_Occulus_Bolt_Carbine_Red_Alt;
class CTR_Occulus_Bolt_Carbine_White;

class CTR_Marksman_Bolt_Carbine;
class CTR_Marksman_Bolt_Carbine_Red;
class CTR_Marksman_Bolt_Carbine_Red_Alt;
class CTR_Marksman_Bolt_Carbine_White;

class CTR_Assault_Bolter;
class CTR_Assault_Bolter_Red;
class CTR_Assault_Bolter_Red_Alt;
class CTR_Assault_Bolter_White;

class CTR_Heavy_Bolt_Rifle;
class CTR_Heavy_Bolt_Rifle_Red;
class CTR_Heavy_Bolt_Rifle_Red_Alt;
class CTR_Heavy_Bolt_Rifle_White;

class CTR_Sternguard_Bolt_Rifle;
class CTR_Sternguard_Bolt_Rifle_Red;
class CTR_Sternguard_Bolt_Rifle_Red_Alt;
class CTR_Sternguard_Bolt_Rifle_White;



// Plasmas
class CTR_Assault_Plasma_Incinerator;
class CTR_Assault_Plasma_Incinerator_Red;
class CTR_Assault_Plasma_Incinerator_Red_Alt;
class CTR_Assault_Plasma_Incinerator_White;

class CTR_Heavy_Plasma_Incinerator;
class CTR_Heavy_Plasma_Incinerator_Red;
class CTR_Heavy_Plasma_Incinerator_Red_Alt;
class CTR_Heavy_Plasma_Incinerator_White;

class CTR_Plasma_Exterminator;
class CTR_Plasma_Exterminator_Red;
class CTR_Plasma_Exterminator_Red_Alt;
class CTR_Plasma_Exterminator_White;



// Others
class CTR_Shrike_Sniper;
class CTR_Shrike_Sniper_Red;
class CTR_Shrike_Sniper_Red_Alt;
class CTR_Shrike_Sniper_White;

class CTR_Las_Fusil;
class CTR_Las_Fusil_Red;
class CTR_Las_Fusil_Red_Alt;
class CTR_Las_Fusil_White;

class CTR_Melta_Rifle;
class CTR_Melta_Rifle_Red;
class CTR_Melta_Rifle_Red_Alt;
class CTR_Melta_Rifle_White;

class CTR_Combi_Plasma_Rifle;
class CTR_Combi_Plasma_Rifle_Red;
class CTR_Combi_Plasma_Rifle_Red_Alt;
class CTR_Combi_Plasma_Rifle_White;

class CTR_Melta_Combi_Bolter;
class CTR_Melta_Combi_Bolter_Red;
class CTR_Melta_Combi_Bolter_Red_Alt;
class CTR_Melta_Combi_Bolter_White;





class Cfgweapons
{
	// Boltguns
	class SR_CTR_Bolt_Rifle : CTR_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle";
		displayName="[TSR] [CTR] Bolt Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_Red : CTR_Bolt_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_Red";
		displayName="[TSR] [CTR] Bolt Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_Red_Alt : CTR_Bolt_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Bolt Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_White : CTR_Bolt_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_White";
		displayName="[TSR] [CTR] Bolt Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_GL : CTR_Bolt_Rifle_GL
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_GL";
		displayName="[TSR] [CTR] Bolt Rifle - GL";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_GL_Red : CTR_Bolt_Rifle_GL_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_GL_Red";
		displayName="[TSR] [CTR] Bolt Rifle - GL (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_GL_Red_Alt : CTR_Bolt_Rifle_GL_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_GL_Red_Alt";
		displayName="[TSR] [CTR] Bolt Rifle - GL (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Rifle_GL_White : CTR_Bolt_Rifle_GL_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Rifle_GL_White";
		displayName="[TSR] [CTR] Bolt Rifle - GL (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Auto_Bolt_Rifle : CTR_Auto_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle";
		displayName="[TSR] [CTR] Auto Bolt Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_Red : CTR_Auto_Bolt_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_Red";
		displayName="[TSR] [CTR] Auto Bolt Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_Red_Alt : CTR_Auto_Bolt_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Auto Bolt Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_White : CTR_Auto_Bolt_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_White";
		displayName="[TSR] [CTR] Auto Bolt Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_GL : CTR_Auto_Bolt_Rifle_GL
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_GL";
		displayName="[TSR] [CTR] Auto Bolt Rifle - GL";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_GL_Red : CTR_Auto_Bolt_Rifle_GL_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_GL_Red";
		displayName="[TSR] [CTR] Auto Bolt Rifle - GL (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_GL_Red_Alt : CTR_Auto_Bolt_Rifle_GL_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_GL_Red_Alt";
		displayName="[TSR] [CTR] Auto Bolt Rifle - GL (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Auto_Bolt_Rifle_GL_White : CTR_Auto_Bolt_Rifle_GL_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Auto_Bolt_Rifle_GL_White";
		displayName="[TSR] [CTR] Auto Bolt Rifle - GL (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Stalker_Bolt_Rifle : CTR_Stalker_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle";
		displayName="[TSR] [CTR] Stalker Bolt Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_Red : CTR_Stalker_Bolt_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_Red";
		displayName="[TSR] [CTR] Stalker Bolt Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_Red_Alt : CTR_Stalker_Bolt_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Stalker Bolt Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_White : CTR_Stalker_Bolt_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_White";
		displayName="[TSR] [CTR] Stalker Bolt Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_GL : CTR_Stalker_Bolt_Rifle_GL
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_GL";
		displayName="[TSR] [CTR] Stalker Bolt Rifle - GL";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_GL_Red : CTR_Stalker_Bolt_Rifle_GL_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_GL_Red";
		displayName="[TSR] [CTR] Stalker Bolt Rifle - GL (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_GL_Red_Alt : CTR_Stalker_Bolt_Rifle_GL_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_GL_Red_Alt";
		displayName="[TSR] [CTR] Stalker Bolt Rifle - GL (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Stalker_Bolt_Rifle_GL_White : CTR_Stalker_Bolt_Rifle_GL_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Stalker_Bolt_Rifle_GL_White";
		displayName="[TSR] [CTR] Stalker Bolt Rifle - GL (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight"
		};
		magazineWell[]={};
	};
	
	
	class SR_CTR_Bolt_Carbine : CTR_Bolt_Carbine
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Carbine";
		displayName="[TSR] [CTR] Bolt Carbine";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Carbine_Red : CTR_Bolt_Carbine_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Carbine_Red";
		displayName="[TSR] [CTR] Bolt Carbine (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Carbine_Red_Alt : CTR_Bolt_Carbine_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Carbine_Red_Alt";
		displayName="[TSR] [CTR] Bolt Carbine (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Bolt_Carbine_White : CTR_Bolt_Carbine_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Bolt_Carbine_White";
		displayName="[TSR] [CTR] Bolt Carbine (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Occulus_Bolt_Carbine : CTR_Occulus_Bolt_Carbine
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Occulus_Bolt_Carbine";
		displayName="[TSR] [CTR] Occulus Bolt Carbine";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Occulus_Bolt_Carbine_Red : CTR_Occulus_Bolt_Carbine_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Occulus_Bolt_Carbine_Red";
		displayName="[TSR] [CTR] Occulus Bolt Carbine (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Occulus_Bolt_Carbine_Red_Alt : CTR_Occulus_Bolt_Carbine_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Occulus_Bolt_Carbine_Red_Alt";
		displayName="[TSR] [CTR] Occulus Bolt Carbine (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Occulus_Bolt_Carbine_White : CTR_Occulus_Bolt_Carbine_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Occulus_Bolt_Carbine_White";
		displayName="[TSR] [CTR] Occulus Bolt Carbine (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Sickle_2"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Marksman_Bolt_Carbine : CTR_Marksman_Bolt_Carbine
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Marksman_Bolt_Carbine";
		displayName="[TSR] [CTR] Marksman Bolt Carbine";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Marksman_Bolt_Carbine_Red : CTR_Marksman_Bolt_Carbine_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Marksman_Bolt_Carbine_Red";
		displayName="[TSR] [CTR] Marksman Bolt Carbine (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Marksman_Bolt_Carbine_Red_Alt : CTR_Marksman_Bolt_Carbine_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Marksman_Bolt_Carbine_Red_Alt";
		displayName="[TSR] [CTR] Marksman Bolt Carbine (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight_2"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Marksman_Bolt_Carbine_White : CTR_Marksman_Bolt_Carbine_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Marksman_Bolt_Carbine_White";
		displayName="[TSR] [CTR] Marksman Bolt Carbine (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Straight_2"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Assault_Bolter : CTR_Assault_Bolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Bolter";
		displayName="[TSR] [CTR] Assault Bolter";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_2",
			"SR_CTR_Magazine_Box_3"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Assault_Bolter_Red : CTR_Assault_Bolter_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Bolter_Red";
		displayName="[TSR] [CTR] Assault Bolter (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_2",
			"SR_CTR_Magazine_Box_3"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Assault_Bolter_Red_Alt : CTR_Assault_Bolter_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Bolter_Red_Alt";
		displayName="[TSR] [CTR] Assault Bolter (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_2",
			"SR_CTR_Magazine_Box_3"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Assault_Bolter_White : CTR_Assault_Bolter_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Bolter_White";
		displayName="[TSR] [CTR] Assault Bolter (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_2",
			"SR_CTR_Magazine_Box_3"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Heavy_Bolt_Rifle : CTR_Heavy_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Bolt_Rifle";
		displayName="[TSR] [CTR] Heavy Bolt Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_4"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Heavy_Bolt_Rifle_Red : CTR_Heavy_Bolt_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Bolt_Rifle_Red";
		displayName="[TSR] [CTR] Heavy Bolt Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_4"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Heavy_Bolt_Rifle_Red_Alt : CTR_Heavy_Bolt_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Bolt_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Heavy Bolt Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_4"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Heavy_Bolt_Rifle_White : CTR_Heavy_Bolt_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Bolt_Rifle_White";
		displayName="[TSR] [CTR] Heavy Bolt Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_4"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Sternguard_Bolt_Rifle : CTR_Sternguard_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Sternguard_Bolt_Rifle";
		displayName="[TSR] [CTR] Sternguard Bolt Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_Vengeance"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Sternguard_Bolt_Rifle_Red : CTR_Sternguard_Bolt_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Sternguard_Bolt_Rifle_Red";
		displayName="[TSR] [CTR] Sternguard Bolt Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_Vengeance"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Sternguard_Bolt_Rifle_Red_Alt : CTR_Sternguard_Bolt_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Sternguard_Bolt_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Sternguard Bolt Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_Vengeance"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Sternguard_Bolt_Rifle_White : CTR_Sternguard_Bolt_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Sternguard_Bolt_Rifle_White";
		displayName="[TSR] [CTR] Sternguard Bolt Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_Vengeance"
		};
		magazineWell[]={};
	};
	
	
	
	
	
	// Plasmas
	class SR_CTR_Assault_Plasma_Incinerator : CTR_Assault_Plasma_Incinerator
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Plasma_Incinerator";
		displayName="[TSR] [CTR] Assault Plasma Incinerator";
		
		plasmaCoolingMult = 1.6;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_1"
		};
		// Killing the underslug overcharge
		delete CTR_Assault_Plasma_Incinerator_Under;
		muzzles[]=
		{
			"this"
		};
	};
	
	class SR_CTR_Assault_Plasma_Incinerator_Red : CTR_Assault_Plasma_Incinerator_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Plasma_Incinerator_Red";
		displayName="[TSR] [CTR] Assault Plasma Incinerator (Red)";
		
		plasmaCoolingMult = 1.6;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_1"
		};
		magazineWell[]={};
		// Killing the underslug overcharge
		delete CTR_Assault_Plasma_Incinerator_Under;
		muzzles[]=
		{
			"this"
		};
	};
	
	class SR_CTR_Assault_Plasma_Incinerator_Red_Alt : CTR_Assault_Plasma_Incinerator_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Plasma_Incinerator_Red_Alt";
		displayName="[TSR] [CTR] Assault Plasma Incinerator (Red/Alt)";
		
		plasmaCoolingMult = 1.6;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_1"
		};
		magazineWell[]={};
		// Killing the underslug overcharge
		delete CTR_Assault_Plasma_Incinerator_Under;
		muzzles[]=
		{
			"this"
		};
	};
	
	class SR_CTR_Assault_Plasma_Incinerator_White : CTR_Assault_Plasma_Incinerator_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Assault_Plasma_Incinerator";
		displayName="[TSR] [CTR] Assault Plasma Incinerator (White)";
		
		plasmaCoolingMult = 1.6;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_1"
		};
		magazineWell[]={};
		// Killing the underslug overcharge
		delete CTR_Assault_Plasma_Incinerator_Under;
		muzzles[]=
		{
			"this"
		};
	};
	
	
	
	class SR_CTR_Heavy_Plasma_Incinerator : CTR_Heavy_Plasma_Incinerator
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Plasma_Incinerator";
		displayName="[TSR] [CTR] Heavy Plasma Incinerator";
	};
	
	class SR_CTR_Heavy_Plasma_Incinerator_Red : CTR_Heavy_Plasma_Incinerator_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Plasma_Incinerator_Red";
		displayName="[TSR] [CTR] Heavy Plasma Incinerator (Red)";
	};
	
	class SR_CTR_Heavy_Plasma_Incinerator_Red_Alt : CTR_Heavy_Plasma_Incinerator_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Plasma_Incinerator_Red_Alt";
		displayName="[TSR] [CTR] Heavy Plasma Incinerator (Red/Alt";
	};
	
	class SR_CTR_Heavy_Plasma_Incinerator_White : CTR_Heavy_Plasma_Incinerator_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Heavy_Plasma_Incinerator_White";
		displayName="[TSR] [CTR] Heavy Plasma Incinerator (White)";
	};
	
	
	
	class SR_CTR_Plasma_Exterminator : CTR_Plasma_Exterminator
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Plasma_Exterminator";
		displayName="[TSR] [CTR] Plasma Exterminator";
		
		plasmaCoolingMult = 1.0;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_2"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
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
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
	
	class SR_CTR_Plasma_Exterminator_Red : CTR_Plasma_Exterminator_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Plasma_Exterminator_Red";
		displayName="[TSR] [CTR] Plasma Exterminator (Red)";
		
		plasmaCoolingMult = 1.0;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_2"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
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
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
	
	class SR_CTR_Plasma_Exterminator_Red_Alt : CTR_Plasma_Exterminator_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Plasma_Exterminator_Red_Alt";
		displayName="[TSR] [CTR] Plasma Exterminator (Red/Alt)";
		
		plasmaCoolingMult = 1.0;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_2"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
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
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
	
	class SR_CTR_Plasma_Exterminator_White : CTR_Plasma_Exterminator_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Plasma_Exterminator_White";
		displayName="[TSR] [CTR] Plasma Exterminator (White)";
		
		plasmaCoolingMult = 1.0;
		magazines[]=
		{
			"SR_CTR_Flask_Plasma_2"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
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
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
							"DKok_Weapons\sound\PlasmaGun1.wss",
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
	
	
	
	
	
	// Others
	class SR_CTR_Shrike_Sniper : CTR_Shrike_Sniper
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Shrike_Sniper";
		displayName="[TSR] [CTR] Shrike Sniper Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Shrike"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Shrike_Sniper_Red : CTR_Shrike_Sniper_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Shrike_Sniper_Red";
		displayName="[TSR] [CTR] Shrike Sniper Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Shrike"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Shrike_Sniper_Red_Alt : CTR_Shrike_Sniper_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Shrike_Sniper_Red_Alt";
		displayName="[TSR] [CTR] Shrike Sniper Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Shrike"
		};
		magazineWell[]={};
	};
	
	class SR_CTR_Shrike_Sniper_White : CTR_Shrike_Sniper_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Shrike_Sniper_White";
		displayName="[TSR] [CTR] Shrike Sniper Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Shrike"
		};
		magazineWell[]={};
	};
	
	
	
	class SR_CTR_Las_Fusil : CTR_Las_Fusil
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Las_Fusil";
		displayName="[TSR] [CTR] Las Fusil";
	};
	
	class SR_CTR_Las_Fusil_Red : CTR_Las_Fusil_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Las_Fusil_Red";
		displayName="[TSR] [CTR] Las Fusil (Red)";
	};
	
	class SR_CTR_Las_Fusil_Red_Alt : CTR_Las_Fusil_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Las_Fusil_Red_Alt";
		displayName="[TSR] [CTR] Las Fusil (Red/Alt)";
	};
	
	class SR_CTR_Las_Fusil_White : CTR_Las_Fusil_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Las_Fusil_White";
		displayName="[TSR] [CTR] Las Fusil (White)";
	};
	
	
	
	class SR_CTR_Melta_Rifle : CTR_Melta_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Rifle";
		displayName="[TSR] [CTR] Melta Rifle";
	};
	
	class SR_CTR_Melta_Rifle_Red : CTR_Melta_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Rifle_Red";
		displayName="[TSR] [CTR] Melta Rifle (Red)";
	};
	
	class SR_CTR_Melta_Rifle_Red_Alt : CTR_Melta_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Melta Rifle (Red/Alt)";
	};
	
	class SR_CTR_Melta_Rifle_White : CTR_Melta_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Rifle_White";
		displayName="[TSR] [CTR] Melta Rifle (White)";
	};
	
	
	
	class SR_CTR_Combi_Plasma_Rifle : CTR_Combi_Plasma_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Combi_Plasma_Rifle";
		displayName="[TSR] [CTR] Combi-Plasma Rifle";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_5_Vengeance"
		};
		magazineWell[]={};
		
		plasmaCoolingMult = 0.8;
		class CTR_Combi_Plasma_Rifle_Under: SR_CTR_Plasma_Exterminator
		{
			displayName="Plasma";
			magazines[]=
			{
				"SR_CTR_Combi_Flask_Plasma_1"
			};
			magazineWell[]={};
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
		};
	};
	
	class SR_CTR_Combi_Plasma_Rifle_Red : CTR_Combi_Plasma_Rifle_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Combi_Plasma_Rifle_Red";
		displayName="[TSR] [CTR] Combi-Plasma Rifle (Red)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_5_Vengeance"
		};
		magazineWell[]={};
		
		plasmaCoolingMult = 0.8;
		class CTR_Combi_Plasma_Rifle_Under: SR_CTR_Plasma_Exterminator
		{
			displayName="Plasma";
			magazines[]=
			{
				"SR_CTR_Combi_Flask_Plasma_1"
			};
			magazineWell[]={};
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
		};
	};
	
	class SR_CTR_Combi_Plasma_Rifle_Red_Alt : CTR_Combi_Plasma_Rifle_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Combi_Plasma_Rifle_Red_Alt";
		displayName="[TSR] [CTR] Combi-Plasma Rifle (Red/Alt)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_5_Vengeance"
		};
		magazineWell[]={};
		
		plasmaCoolingMult = 0.8;
		class CTR_Combi_Plasma_Rifle_Under: SR_CTR_Plasma_Exterminator
		{
			displayName="Plasma";
			magazines[]=
			{
				"SR_CTR_Combi_Flask_Plasma_1"
			};
			magazineWell[]={};
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
		};
	};
	
	class SR_CTR_Combi_Plasma_Rifle_White : CTR_Combi_Plasma_Rifle_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Combi_Plasma_Rifle_White";
		displayName="[TSR] [CTR] Combi-Plasma Rifle (White)";
		magazines[]=
		{
			"SR_CTR_Magazine_Box_5_Vengeance"
		};
		magazineWell[]={};
		
		plasmaCoolingMult = 0.8;
		class CTR_Combi_Plasma_Rifle_Under: SR_CTR_Plasma_Exterminator
		{
			displayName="Plasma";
			magazines[]=
			{
				"SR_CTR_Combi_Flask_Plasma_1"
			};
			magazineWell[]={};
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
		};
	};
	
	
	
	class SR_CTR_Melta_Combi_Bolter : CTR_Melta_Combi_Bolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Combi_Bolter";
		displayName="[TSR] [CTR] Melta Combi-Bolter";
		
		class CTR_Melta_Combi_Bolter_Under: CTR_Auto_Bolt_Rifle
		{
			displayName="Bolter";
			magazines[]=
			{
				"SR_CTR_Magazine_Box_6_Vengeance"
			};
			magazineWell[]={};
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
			modes[]=
			{
				"FullAuto",
				"single_medium_optics1",
				"single_far_optics2"
			};
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="0.25/6";
					opticsZoomMax="0.25/6";
					opticsZoomInit="0.25/6";
					discreteDistance[]={100,200,300,400,500,600};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discretefov[]=
					{
						"0.25/6",
						"0.25/6"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws_mg",
						"\A3\Weapons_f\acc\reticle_tws_mg_NFOW"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"TI",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: TWS
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.15000001;
					opticsZoomMax=0.40000001;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	
	class SR_CTR_Melta_Combi_Bolter_Red : CTR_Melta_Combi_Bolter_Red
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Combi_Bolter_Red";
		displayName="[TSR] [CTR] Melta Combi-Bolter (Red)";
		
		class CTR_Melta_Combi_Bolter_Under: CTR_Auto_Bolt_Rifle
		{
			displayName="Bolter";
			magazines[]=
			{
				"SR_CTR_Magazine_Box_6_Vengeance"
			};
			magazineWell[]={};
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
			modes[]=
			{
				"FullAuto",
				"single_medium_optics1",
				"single_far_optics2"
			};
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="0.25/6";
					opticsZoomMax="0.25/6";
					opticsZoomInit="0.25/6";
					discreteDistance[]={100,200,300,400,500,600};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discretefov[]=
					{
						"0.25/6",
						"0.25/6"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws_mg",
						"\A3\Weapons_f\acc\reticle_tws_mg_NFOW"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"TI",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: TWS
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.15000001;
					opticsZoomMax=0.40000001;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	
	class SR_CTR_Melta_Combi_Bolter_Red_Alt : CTR_Melta_Combi_Bolter_Red_Alt
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Combi_Bolter_Red_Alt";
		displayName="[TSR] [CTR] Melta Combi-Bolter (Red/Alt)";
		
		class CTR_Melta_Combi_Bolter_Under: CTR_Auto_Bolt_Rifle
		{
			displayName="Bolter";
			magazines[]=
			{
				"SR_CTR_Magazine_Box_6_Vengeance"
			};
			magazineWell[]={};
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
			modes[]=
			{
				"FullAuto",
				"single_medium_optics1",
				"single_far_optics2"
			};
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="0.25/6";
					opticsZoomMax="0.25/6";
					opticsZoomInit="0.25/6";
					discreteDistance[]={100,200,300,400,500,600};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discretefov[]=
					{
						"0.25/6",
						"0.25/6"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws_mg",
						"\A3\Weapons_f\acc\reticle_tws_mg_NFOW"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"TI",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: TWS
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.15000001;
					opticsZoomMax=0.40000001;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	
	class SR_CTR_Melta_Combi_Bolter_White : CTR_Melta_Combi_Bolter_White
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="SR_CTR_Melta_Combi_Bolter_White";
		displayName="[TSR] [CTR] Melta Combi-Bolter (White)";
		
		class CTR_Melta_Combi_Bolter_Under: CTR_Auto_Bolt_Rifle
		{
			displayName="Bolter";
			magazines[]=
			{
				"SR_CTR_Magazine_Box_6_Vengeance"
			};
			magazineWell[]={};
			modelOptics="CTR_Weapons\models\attachments\optics\Scope_Optic_1.p3d";
			modes[]=
			{
				"FullAuto",
				"single_medium_optics1",
				"single_far_optics2"
			};
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="0.25/6";
					opticsZoomMax="0.25/6";
					opticsZoomInit="0.25/6";
					discreteDistance[]={100,200,300,400,500,600};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discretefov[]=
					{
						"0.25/6",
						"0.25/6"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws_mg",
						"\A3\Weapons_f\acc\reticle_tws_mg_NFOW"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"TI",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: TWS
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.15000001;
					opticsZoomMax=0.40000001;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	
};

