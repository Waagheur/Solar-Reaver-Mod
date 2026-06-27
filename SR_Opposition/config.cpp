class CfgPatches
{
	class SR_Opposition
	{
		author = "Waagheur";
		requiredAddons[] = {
			"OPTRE_Weapons_FG75"
		};
		requiredVersion = 0.1;
		units[]=
		{
			"SR_Opposition_OPTRE_Static_FG75",
			"SR_Opposition_OPTRE_Static_FG75_Rail"
		};
		weapons[] = {
			"SR_Opposition_launch_RPG32_green_F",
			"SR_Opposition_launch_MRAWS_green_rail_F",
			"SR_Opposition_MissileLauncherDKOKGreen",
			"SR_Opposition_OPTRE_75mm_M75",
			"SR_Opposition_OPTRE_75mm_Rail"
		};
		magazines[]=
		{
			"SR_Opposition_RPG32_F",
			"SR_Opposition_MRAWS_HEAT_F",
			"SR_Opposition_MLAT_Mag",
			"SR_Opposition_OPTRE_4rnd_75mm_AP",
			"SR_Opposition_OPTRE_4rnd_75mm_Rail"
		};
		ammo[]=
		{
			"SR_Opposition_R_PG32V_F",
			"SR_Opposition_R_MRAAWS_HEAT_F",
			"SR_Opposition_TIOW_MLAT",
			"SR_Opposition_OPTRE_Sh_75mm_AP",
			"SR_Opposition_YL001_Railgun_bullet"
		};
	};
};

class R_PG32V_F;
class R_MRAAWS_HEAT_F;
class TIOW_MLAT;

class YL001_Railgun_bullet;
class OPTRE_Sh_75mm_AP;
class CfgAmmo {
	// Launchers
	class SR_Opposition_R_PG32V_F: R_PG32V_F
	{
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	class SR_Opposition_R_MRAAWS_HEAT_F: R_MRAAWS_HEAT_F
	{
		hit = 1200;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	class SR_Opposition_TIOW_MLAT: TIOW_MLAT
	{
		hit = 1600;
		indirectHit = 70;
		indirectHitRange = 0.4;
		submunitionAmmo = "";
	};
	
	// Canons
	class SR_Opposition_OPTRE_Sh_75mm_AP: OPTRE_Sh_75mm_AP
	{
		hit = 1200;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	class SR_Opposition_YL001_Railgun_bullet: YL001_Railgun_bullet
	{
		hit = 2000;
		indirectHit = 85;
		indirectHitRange = 0.5;
		submunitionAmmo = "";
	};
};

class RPG32_F;
class MRAWS_HEAT_F;
class MLAT_Mag;

class OPTRE_4rnd_75mm_AP;
class CfgMagazines {
	// Launchers
	class SR_Opposition_RPG32_F: RPG32_F
	{
		ammo="SR_Opposition_R_PG32V_F";
	};
	class SR_Opposition_MRAWS_HEAT_F: MRAWS_HEAT_F
	{
		ammo="SR_Opposition_R_MRAAWS_HEAT_F";
	};
	class SR_Opposition_MLAT_Mag: MLAT_Mag
	{
		ammo="SR_Opposition_TIOW_MLAT";
	};
	
	// Canons
	class SR_Opposition_OPTRE_4rnd_75mm_AP: OPTRE_4rnd_75mm_AP
	{
		ammo="SR_Opposition_OPTRE_Sh_75mm_AP";
	};
	class SR_Opposition_OPTRE_4rnd_75mm_Rail: OPTRE_4rnd_75mm_AP
	{
		ammo="SR_Opposition_YL001_Railgun_bullet";
	};
};

class launch_RPG32_green_F;
class launch_MRAWS_green_rail_F;
class MissileLauncherDKOKGreen;

class OPTRE_75mm_M75;
class cfgWeapons {
	// Launchers
	class SR_Opposition_launch_RPG32_green_F: launch_RPG32_green_F
	{
		displayName="[SRO] [Grade 2] RPG 32";
		baseWeapon="SR_Opposition_launch_RPG32_green_F";
		magazines[]=
		{
			"SR_Opposition_RPG32_F"
		};
	};
	class SR_Opposition_launch_MRAWS_green_rail_F: launch_MRAWS_green_rail_F
	{
		displayName="[SRO] [Grade 3] MAAWS Mk4 Mod40";
		baseWeapon="SR_Opposition_launch_MRAWS_green_rail_F";
		magazines[]=
		{
			"SR_Opposition_MRAWS_HEAT_F"
		};
	};
	class SR_Opposition_MissileLauncherDKOKGreen: MissileLauncherDKOKGreen
	{
		displayName="[SRO] [Grade 4] Death Korps Missile Launcher";
		baseWeapon="SR_Opposition_MissileLauncherDKOKGreen";
		magazines[]=
		{
			"SR_Opposition_MLAT_Mag"
		};
	};
	
	// Canons
	class SR_Opposition_OPTRE_75mm_M75: OPTRE_75mm_M75
	{
		displayName="[SRO] [Grade 3] M75 High-Velocity Cannon";
		baseWeapon="SR_Opposition_OPTRE_75mm_M75";
		magazines[]=
		{
			"SR_Opposition_OPTRE_4rnd_75mm_AP"
		};
	};
	class SR_Opposition_OPTRE_75mm_Rail: OPTRE_75mm_M75
	{
		displayName="[SRO] [Grade 5] Rail High-Velocity Cannon";
		baseWeapon="SR_Opposition_OPTRE_75mm_Rail";
		magazines[]=
		{
			"SR_Opposition_OPTRE_4rnd_75mm_Rail"
		};
	};
};

class OPTRE_Static_FG75;
class Turrets;
class MainTurret;
class ViewOptics;
class cfgVehicles
{
	class SR_Opposition_OPTRE_Static_FG75: OPTRE_Static_FG75
	{
		displayName="[SRO] [Grade 3] FG75 Anti-Tank Gun";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[]=
				{
					"SR_Opposition_OPTRE_75mm_M75"
				};
				magazines[] = { 
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP",
					"SR_Opposition_OPTRE_4rnd_75mm_AP"
				};
				viewGunnerInExternal=1;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				forceHideGunner=1;
				ejectDeadGunner=1;
				minElev=-20;
				maxElev=20;
				minTurn=-30;
				maxTurn=30;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
            };
        };
	};
	class SR_Opposition_OPTRE_Static_FG75_Rail: OPTRE_Static_FG75
	{
		displayName="[SRO] [Grade 5] FG75 Anti-Tank Rail Gun";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[]=
				{
					"SR_Opposition_OPTRE_75mm_Rail"
				};
				magazines[] = { 
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail",
					"SR_Opposition_OPTRE_4rnd_75mm_Rail"
				};
				viewGunnerInExternal=1;
				gunnerAction="Mortar_Gunner";
				gunnerInAction="Mortar_Gunner";
				forceHideGunner=1;
				ejectDeadGunner=1;
				minElev=-20;
				maxElev=20;
				minTurn=-30;
				maxTurn=30;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.041669998;
					maxFov=0.40000001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-120;
					maxAngleY=120;
					initFov=0.40000001;
					minFov=0.40000001;
					maxFov=0.40000001;
				};
            };
        };
	};
};
