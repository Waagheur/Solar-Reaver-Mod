class CfgPatches
{
	class xi_vehicles
	{
		vehicles[]={};
		units[]=
		{
			"XI_Chimera",
			"XI_Hydra_Rebalance_Blufor",
			"xi_transport_vic_unarmed_medical",
			"xi_transport_vic_unarmed",
			"xi_transport_vic_armed",
			"pxi_tauros_hmg",
			"pxi_tauros_unarmed",
			"pxi_tauros_venator",
			"xi_transport_vic_unarmed_logi",
			"xi_transport_vic_unarmed_service",
			"XI_Chimedon",
			"XI_Chimerro",
			"XI_Leman",
			"XI_Leman_BC",
			"pxi_leman_vc_carnivore",
			"XI_HighDispersion_Flak_Platform_chaos",
			"XI_HighDispersion_Flak_Platform_guard",
			"XI_HighDispersion_Flak_Platform_guardHIGH",
			"XI_SAM_System",
			"PXI_MRAP_1",
			"pxi_falconDrone_O",
			"pxi_UCAVDrone_O",
			"pxi_vlsLauncher_O"
		};
		weapons[]=
		{
			"XI_Hydra_AutoCannon_Rebalance",
			
			"Throw"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark",
			"IC_weapons_base",
			"Cadian_Weapons",
			"A3_Air_F",
			"A3_Weapons_F_Jets",
			"A3_Static_F_Jets",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"ace_logistics_uavbattery",
			"A3_Armor_F_Beta",
			"a40k_wepbase",
			"A3_Armor_F_Decade_MBT_02"
		};
		magazines[]={
			"SR_Mag_TVD_OPTRE_cart",
			"SR_Mag_TVD_pxi_tauros_unarmed",
			"SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"
		};
		ammo[]=
		{
			"XI_Quad_Autocannon_weapon_Hydra_Flak_Rebalance",
			"XI_30mm_MP_Shell_Repass",
			"XI_120mm",
			
			"SR_Ammo_TVD_OPTRE_cart",
			"SR_Ammo_TVD_pxi_tauros_unarmed",
			"SR_Ammo_TVD_TIOW_Centaur_01_Cadian_667_Blu"
		};
	};
};



class CfgFactionClasses
{
	class xi_legion_fac
	{
		displayName="[XI] XI Legion";
		priority=1;
		side=1;
		icon="";
	};
	class xi_legion_fac_opfor
	{
		displayName="[XI] XI Legion OpFor Items";
		priority=1;
		side=2;
		icon="";
	};
};
class CfgEditorCategories
{
	class xi_categ_editor
	{
		displayname="[XI] XI Legion";
	};
	class xi_categ_editor_opFor
	{
		displayname="[XI] XI Legion OpFor Items";
	};
};
class CfgEditorSubcategories
{
	class xi_subcat_fz
	{
		displayName="Vehicles";
	};
	class xi_subcat_transports
	{
		displayName="Transports";
	};
	class xi_subcat_men
	{
		displayName="Men";
	};
	class xi_subcat_Helicopters
	{
		displayName="Helicopters";
	};
	class xi_subcat_Turrets
	{
		displayName="Turrets";
	};
};
class Mode_FullAuto;
class cfgWeapons
{
	class close;
	class short;
	class medium;
	class far;
	class farasshit;
	class holyfuckingfar;
	class okcalmthefuckdown;
	class thisissomesillybullshit;
	class ML700_Quad_Autocannon_weapon_Hydra_Flak;
	class XI_HighDispersion_Flak_cannon: ML700_Quad_Autocannon_weapon_Hydra_Flak
	{
		magazines[]=
		{
			"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance"
		};
		modes[]=
		{
			"close",
			"short",
			"medium"
		};
		class close: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"ML700_Autocannon_Shot_SoundSet",
					"ML700_Autocannon_Tail_Base_SoundSet"
				};
			};
			showToPlayer=0;
			burst=1;
			reloadTime=0.14;
			aiRateOfFire=0.14;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=0;
			minRange=10;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=1;
			maxRange=1000;
			maxRangeProbab=1;
			dispersion=0.0089999996;
		};
		class short: close
		{
			reloadTime=0.039999999;
			burst=1;
			minRange=1001;
			minRangeProbab=1;
			midRange=1500;
			midRangeProbab=1;
			maxRange=2000;
			maxRangeProbab=1;
			dispersion=0.037999999;
		};
		class medium: close
		{
			reloadTime=0.60000002;
			burst=1;
			minRange=2001;
			minRangeProbab=1;
			midRange=2500;
			midRangeProbab=1;
			maxRange=3000;
			maxRangeProbab=1;
			dispersion=0.064999998;
		};
	};
	class XI_HighDispersion_Flak_cannonHIGH: ML700_Quad_Autocannon_weapon_Hydra_Flak
	{
		magazines[]=
		{
			"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance"
		};
		modes[]=
		{
			"close",
			"short",
			"medium"
		};
		class close: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"ML700_Autocannon_Shot_SoundSet",
					"ML700_Autocannon_Tail_Base_SoundSet"
				};
			};
			showToPlayer=0;
			burst=1;
			reloadTime=0.14;
			aiRateOfFire=0.14;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=0;
			minRange=10;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=1;
			maxRange=1000;
			maxRangeProbab=1;
			dispersion=0.0089999996;
		};
		class short: close
		{
			reloadTime=0.039999999;
			burst=1;
			minRange=1001;
			minRangeProbab=1;
			midRange=1500;
			midRangeProbab=1;
			maxRange=2000;
			maxRangeProbab=1;
			dispersion=0.037999999;
		};
		class medium: close
		{
			reloadTime=0.60000002;
			burst=1;
			minRange=2001;
			minRangeProbab=1;
			midRange=2500;
			midRangeProbab=1;
			maxRange=10000;
			maxRangeProbab=1;
			dispersion=0.064999998;
		};
	};
	class manual;
	class LowROF;
	class HighROF;
	class MGun;
	class TIOW_Hydra_AutoCannon;
	class XI_Hydra_AutoCannon_Rebalance: TIOW_Hydra_AutoCannon
	{
		class manual: MGun
		{
			class StandardSound
			{
				begin1[]=
				{
					"\a40k_wepbase\Sounds\ExterminatorCannon.ogg",
					1.58489,
					1,
					2100
				};
				begin2[]=
				{
					"\a40k_wepbase\Sounds\ExterminatorCannon.ogg",
					1.58489,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001
				};
				closure1[]=
				{
					"\a40k_wepbase\Sounds\ExterminatorCannon.ogg",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\a40k_wepbase\Sounds\ExterminatorCannon.ogg",
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
			sounds[]=
			{
				"StandardSound"
			};
		};
		scope=2;
		Multiplier=1;
		displayName="Hydra Autocannon Array";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="cannon";
		cursorSize=1;
		burst=1;
		reloadTime=0.1;
		autoFire=1;
		magazineReloadTime=4;
		modes[]=
		{
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		shotfromturret=0;
		magazines[]=
		{
			"TIOW_HydraAutocannonCannon_90mm_Mag"
		};
		memoryPointGun[]=
		{
			"BottomLeft_muzzle",
			"BottomRight_muzzle",
			"TopLeft_muzzle",
			"TopRight_muzzle"
		};
		ballisticsComputer="2 + 4";
		class GunParticles
		{
			class Shell1
			{
				effectname="HBGunCartridge";
				positionname="TopLeft_Shell";
				directionname="TopLeft_Shell_dir";
			};
			class Shell2
			{
				effectname="HBGunCartridge";
				positionname="TopRight_Shell";
				directionname="TopRight_Shell_dir";
			};
			class Shell3
			{
				effectname="HBGunCartridge";
				positionname="BottomLeft_Shell";
				directionname="BottomLeft_Shell_dir";
			};
			class Shell4
			{
				effectname="HBGunCartridge";
				positionname="BottomRight_Shell";
				directionname="BottomRight_Shell_dir";
			};
		};
		class LowROF: manual
		{
			displayName="90mm Autocannon";
			reloadTime=0.1;
			recoil="Empty";
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=1;
			minRange=1;
			minRangeProbab=0.039999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			aiRateOfFire=1;
			dispersion=0.029999999;
		};
		class HighROF: LowROF
		{
			reloadTime=0.1;
			minRange=1;
			minRangeProbab=0.079999998;
			midRange=2;
			midRangeProbab=0.057999998;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			aiRateOfFire=1;
			displayname="";
			dispersion=0.079999998;
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=250;
			midRangeProbab=0.57999998;
			maxRange=700;
			maxRangeProbab=0.039999999;
			burst=10;
			aiRateOfFire=1.2;
			aiRateOfFireDistance=50;
			dispersion=0.0085000005;
		};
		class short: close
		{
			minRange=700;
			minRangeProbab=0.050000001;
			midRange=1000;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
			burst=10;
			aiRateOfFire=1.2;
			aiRateOfFireDistance=300;
			dispersion=0.0099999998;
		};
		class medium: LowROF
		{
			showToPlayer=0;
			soundBurst=0;
			minRange=1500;
			minRangeProbab=0.050000001;
			midRange=2150;
			midRangeProbab=0.57999998;
			maxRange=3000;
			maxRangeProbab=0.039999999;
			burst=10;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=600;
			dispersion=0.015;
		};
		class far: medium
		{
			minRange=1500;
			minRangeProbab=0.050000001;
			midRange=2500;
			midRangeProbab=0.40000001;
			maxRange=3000;
			maxRangeProbab=0.0099999998;
			burst=10;
			aiRateOfFire=1.75;
			aiRateOfFireDistance=1000;
			dispersion=0.029999999;
		};
	};
	class TIOW_IG_HeavyBolter;
	class XI_HeavyBolter_Rebalance: TIOW_IG_HeavyBolter
	{
		displayName="Bolter Rebalance";
		modes[]=
		{
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"TIOW_IG_HeavyBolter_Mag"
		};
		class LowROF: manual
		{
			displayName="Mars Heavy bolters";
			reloadTime=0.2;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=1;
			minRange=1;
			minRangeProbab=0.039999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.001;
			burst=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
		};
		class HighROF: LowROF
		{
			reloadTime=0.2;
			minRange=1;
			minRangeProbab=0.079999998;
			midRange=1.5;
			midRangeProbab=0.057999998;
			maxRange=2;
			maxRangeProbab=0.0040000002;
			burst=1;
			aiRateOfFire=0.5;
			dispersion=0.003;
			aiRateOfFireDistance=2;
			displayname="";
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.57999998;
			maxRange=1000;
			maxRangeProbab=0.039999999;
			burst=3;
			aiRateOfFire=1;
			dispersion=0.0034;
			aiRateOfFireDistance=50;
		};
		class short: close
		{
			minRange=500;
			minRangeProbab=0.050000001;
			midRange=1000;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
			burst=3;
			aiRateOfFire=1.5;
			dispersion=0.003888;
			aiRateOfFireDistance=300;
		};
		class medium: LowROF
		{
			showToPlayer=0;
			soundBurst=0;
			minRange=1000;
			minRangeProbab=0.050000001;
			midRange=1500;
			midRangeProbab=0.57999998;
			maxRange=2000;
			maxRangeProbab=0.039999999;
			burst=3;
			aiRateOfFire=2;
			dispersion=0.0039980002;
			aiRateOfFireDistance=600;
		};
		class far: medium
		{
			minRange=1500;
			minRangeProbab=0.050000001;
			midRange=2500;
			midRangeProbab=0.40000001;
			maxRange=3000;
			maxRangeProbab=0.0099999998;
			burst=3;
			aiRateOfFire=2.5;
			dispersion=0.0040000002;
			aiRateOfFireDistance=1000;
		};
	};
	class HE;
	class autocannon_base_f;
	class IC_autocannon_chimera;
	class xi_autocannon_chimera: IC_autocannon_chimera
	{
		displayName="XI Autocannon";
		class HE: autocannon_base_f
		{
			displayName="XI Autocannon";
			magazines[]=
			{
				"XI_200Rnd_30mm_MP_shells"
			};
		};
	};
	class IC_Vanquisher_120mm;
	class XI_Vanquisher_120mm: IC_Vanquisher_120mm
	{
		displayName="XI Vanquisher";
		magazines[]=
		{
			"XI_30Rnd_120mm",
			"IC_30Rnd_120mm_HE_shells"
		};
	};
	class IC_HeavyStubber_coax_Chimera;
	class GunParticles;
	class SmokeEffect1;
	class SmokeEffect2;
	class XI_HeavyStubber_coax_Chimera: IC_HeavyStubber_coax_Chimera
	{
		displayName="1000Rnd XI";
		magazines[]=
		{
			"xi_1000rnd_heavy_stubber_mag"
		};
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect1
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="MachineGun1";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="MachineGun1";
			};
		};
		class AnimationSources;
	};
	class CarHorn;
	class XI_WeeWooHorn: CarHorn
	{
		drySound[]=
		{
			"\SR_XI\xi_vehicles\Sounds\siren.wav",
			50,
			1,
			200
		};
	};
	class CannonCore;
	class weapon_Cannon_Phalanx;
	class xi_weapon_phalanx: weapon_Cannon_Phalanx
	{
		displayName="XI Phalanx Fork";
		scope=1;
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"magazine_Cannon_Phalanx_x1550",
			"DRA_magazine_CRAM"
		};
		canLock=0;
		ballisticsComputer=4;
		modes[]=
		{
			"manual",
			"close",
			"medium"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="pos_fx";
				directionName="pos_fx_dir";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="pos_fx";
				directionName="pos_fx_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="$STR_A3_Phalanx_weapon_name";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",
					2,
					1,
					3000
				};
				begin2[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",
					2,
					1,
					3000
				};
				begin3[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",
					2,
					1,
					3000
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
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.013;
			dispersion=0.0044999998;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0;
			burstRangeMax=60;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=6;
			reloadTime=0.30000001;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			aiRateOfFireDispersion=1;
			minRange=10;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=1;
			maxRange=1000;
			maxRangeProbab=1;
			dispersion=0.0099999998;
		};
		class medium: close
		{
			reloadTime=0.5;
			burst=4;
			minRange=1001;
			minRangeProbab=1;
			midRange=1500;
			midRangeProbab=1;
			maxRange=2000;
			maxRangeProbab=1;
			dispersion=0.059999999;
		};
		class far: close
		{
			reloadTime=1.25;
			burst=2;
			minRange=2001;
			minRangeProbab=1;
			midRange=2500;
			midRangeProbab=1;
			maxRange=3000;
			maxRangeProbab=1;
			dispersion=0.079999998;
		};
	};
	class weapon_rim116Launcher;
	class xi_sam_fork: weapon_rim116Launcher
	{
		weaponLockDelay=3;
		cmImmunity=0.60000002;
		weaponLockSystem=2;
		displayName="XI Sam Fork";
		aiRateOfFire=15;
		aiRateOfFireDispersion=5;
		aiRateOfFireDistance=1200;
		minRange=500;
		minRangeProbab=0.5;
		midRange=1200;
		midRangeProbab=0.94999999;
		maxRange=6000;
		maxRangeProbab=1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		reloadTime=2;
		magazineReloadTime=2;
		magazines[]=
		{
			"magazine_Missile_rim116_x21"
		};
		holdsterAnimValue=1;
		textureType="semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="pos_missile_end";
				directionName="pos_missile";
			};
		};
	};



	// TVD Grenades throwing
	
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"SR_TVD_OPTRE_cart_Muzzle",
			"SR_TVD_pxi_tauros_unarmed_Muzzle",
			"SR_TVD_TIOW_Centaur_01_Cadian_667_Blu_Muzzle"
		};
		class ThrowMuzzle;
		class SR_TVD_OPTRE_cart_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"SR_Mag_TVD_OPTRE_cart"
			};
		};
		class SR_TVD_pxi_tauros_unarmed_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"SR_Mag_TVD_pxi_tauros_unarmed"
			};
		};
		class SR_TVD_TIOW_Centaur_01_Cadian_667_Blu_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu"
			};
		};
	};
};
class CfgAmmo
{
	class Default;
	class BulletBase;
	class TIOW_Melta_Ammo;
	class TIOW_PlasmagunRound;
	class B_762x51_Ball;
	class ML700_Autocannon_vehicle_ball_Hydra_Flak;
	class XI_Quad_Autocannon_weapon_Hydra_Flak_Rebalance: ML700_Autocannon_vehicle_ball_Hydra_Flak
	{
		timeToLive=2.4000001;
	};
	class IC_30mm_MP_shell;
	class XI_30mm_MP_Shell_Repass: IC_30mm_MP_shell
	{
		hit=190;
		indirectHit=6;
		indirectHitrange=4;
		class CamShakeFire
		{
			power=1;
			duration=1;
			frequency=20;
			distance=43.817799;
		};
		class CamShakePlayerFire
		{
			power=50;
			duration=1;
			frequency=20;
			distance=3;
		};
		SoundSetExplosion[]=
		{
			"Shell30mm40mm_Exp_SoundSet",
			"Shell30mm40mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class Sh_120mm_APFSDS;
	class XI_120mm: Sh_120mm_APFSDS
	{
		hit=1600;
		typicalSpeed=1550;
		caliber=45;
	};
	
	
	
	// TVD Grenades
	class SmokeShellOrange;
	class SR_Ammo_TVD_OPTRE_cart: SmokeShellOrange
	{
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
	};
	class SR_Ammo_TVD_pxi_tauros_unarmed: SmokeShellOrange
	{
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
	};
	class SR_Ammo_TVD_TIOW_Centaur_01_Cadian_667_Blu: SmokeShellOrange
	{
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
	};
	
};
class CfgMagazineWells
{
	class XI_Fak_MagazineWell
	{
		BI_Magazines[]=
		{
			"xi_flak_grp"
		};
	};
	class XI_30mm_MagazineWell
	{
		BI_Magazines[]=
		{
			"xi_30mm_grp"
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class VehicleMagazine: CA_Magazine
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
	class ML700_850_Autocannon_Magazine_Hydra_Flak;
	class XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance: ML700_850_Autocannon_Magazine_Hydra_Flak
	{
		displayName="30mm Autocannon Magazine Flak";
		displayNameShort="30mm Autocannon";
		ammo="XI_Quad_Autocannon_weapon_Hydra_Flak_Rebalance";
		count=10000;
		initSpeed=1500;
		maxLeadSpeed=1500;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={0.050000001,0.050000001};
		magazineGroup[]=
		{
			"xi_flak_grp"
		};
	};
	class 250Rnd_30mm_HE_shells;
	class XI_200Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		author="Supe";
		displayName="30 mm Multi-purpose";
		displayNameShort="MP";
		ammo="XI_30mm_MP_Shell_Repass";
		initSpeed=1070;
		count=200;
		magazineGroup[]=
		{
			"xi_30mm_grp"
		};
	};
	class IC_30Rnd_120mm_APFSDS_shells;
	class XI_30Rnd_120mm: IC_30Rnd_120mm_APFSDS_shells
	{
		displayName="XI 120mm Mk.13-G4 Anti-Tank Rounds";
		ammo="XI_120mm";
	};
	class IC_1000Rnd_Heavy_Stubber_mag;
	class xi_1000rnd_heavy_stubber_mag: IC_1000Rnd_Heavy_Stubber_mag
	{
		tracersEvery=1;
	};
	
	
	
	// TVD Grenades
	class SmokeShellOrange;
	class SR_Mag_TVD_OPTRE_cart: SmokeShellOrange
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;       
		displayName = "[SR] TVD - Tow Cart";
		displayNameShort = "[SR] TVD - Tow Cart";
		value = 0.1;
		ammo = "SR_Ammo_TVD_OPTRE_cart";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=8;
	};
	class SR_Mag_TVD_pxi_tauros_unarmed: SmokeShellOrange
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] TVD - Tauros";
		displayNameShort = "[SR] TVD - Tauros";
		value = 0.1;
		ammo = "SR_Ammo_TVD_pxi_tauros_unarmed";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=12;
	};
	class SR_Mag_TVD_TIOW_Centaur_01_Cadian_667_Blu: SmokeShellOrange
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] TVD - Centaur";
		displayNameShort = "[SR] TVD - Centaur";
		value = 0.1;
		ammo = "SR_Ammo_TVD_TIOW_Centaur_01_Cadian_667_Blu";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=12;
	};
	
};
class Turrets;
class MainTurret;
class Components;
class SensorTemplateIR;
class sensortemplatevisual;
class SensorTemplateLaser;
class SensorTemplateNV;
class VehicleSystemsDisplayManagerComponentLeft;
class VehicleSystemsDisplayManagerComponentRight;
class SensorTemplateAntiRadiation;
class EmptyDisplay;
class MinimapDisplay;
class UAVDisplay;
class SensorDisplay;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;
class DataLinkSensorComponent;
class PassiveRadarSensorComponent;
class SensorTemplateDataLink;
class SensorTemplatePassiveRadar;
class AirTarget;
class groundtarget;
class CommanderOptics;
class ActiveRadarSensorComponent;
class SensorTemplateActiveRadar;
class ViewGunner;
class viewOptics;
class NewTurret;
class Hull_turret;
class Left_Sponson_turret;
class Right_Sponson_turret;
class HitPoints
{
	class HitLFWheel;
	class HitLF2Wheel;
	class HitLMWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRF2Wheel;
	class HitRMWheel;
	class HitRBWheel;
	class HitBody;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class IC_Hull_turret;
	class HitHull;
	class HitRTrack;
	class HitLTrack;
};
class CfgVehicles
{
	class IC_Tauros_HMG_desert_F;
	class pxi_tauros_hmg: IC_Tauros_HMG_desert_F
	{
		author="Bones";
		displayName="[PXI] Tauros HMG";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\pxi_taurosbody_black.paa"
		};
		armorStructural=6000;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.80000001;
				radius=0.2;
				explosionShielding=20;
				passThrough=0;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
			};
		};
	};
	class IC_Tauros_unarmed_desert_F;
	class pxi_tauros_unarmed: IC_Tauros_unarmed_desert_F
	{
		author="Bones";
		displayName="[PXI] Tauros unarmed";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\pxi_taurosbody_black.paa"
		};
		armorStructural=6000;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.80000001;
				radius=0.2;
				explosionShielding=20;
				passThrough=0;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
			};
		};
	};
	class IC_Tauros_venator_desert_F;
	class pxi_tauros_venator: IC_Tauros_venator_desert_F
	{
		author="Bones";
		displayName="[PXI] Tauros Venator";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\pxi_taurosbody_black.paa",
			"\IC_Tauros\data\dashboard_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\pxi_taurosturret_black.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\pxi_venatorplates_black.paa"
		};
		armorStructural=6000;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.80000001;
				radius=0.2;
				explosionShielding=20;
				passThrough=0;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.80000001;
				radius=0.2;
				passThrough=0;
				explosionShielding=20;
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
			};
		};
		class Turrets: Turrets
		{
			class Venator_turret: MainTurret
			{
				memoryPointGun="usti hlavne2";
				selectionFireAnim="muzzleflash_2";
				disableSoundAttenuation=1;
				vehicleHasTurnout=1;
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"IC_lascannon",
					"IC_Multilaser_vehicle"
				};
				magazines[]=
				{
					"IC_lascannon_bolt_mag",
					"IC_lascannon_bolt_mag",
					"ic_hellgun_mag",
					"ic_hellgun_mag"
				};
				minElev=-12;
				maxElev=8;
				initElev=3;
				canHideGunner=0;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					"db-120",
					1
				};
				viewGunnerInExternal=1;
				gunnerInAction="Tauros_venator_gunner";
				gunnerAction="Tauros_venator_gunner";
				proxyType="CPGunner";
				proxyIndex=4;
				animationSourceStickX="turret_control_y";
				animationSourceStickY="turret_control_x";
				gunnerLeftHandAnimName="turret_control_x";
				gunnerRightHandAnimName="turret_control_x";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				personTurretAction="vehicle_turnout_1";
				isPersonTurret=0;
				gunnerOutOpticsModel="";
				memoryPointGunnerOptics="eye";
				minOutElev=-30;
				maxOutElev=60;
				initOutElev=0;
				minOutTurn=-160;
				maxOutTurn=160;
				initOutTurn=0;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerForceOptics=0;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.80000001;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
				class ViewOptics: viewOptics
				{
					initAngleX=0;
					minAngleX=-40;
					maxAngleX=40;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};
	};
	class bma3_bushmaster_unarmed_F;
	class xi_transport_vic_unarmed: bma3_bushmaster_unarmed_F
	{
		author="Kyrent";
		displayName="[XI] Carnivore, Transport-Pattern Unclaimed";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		transportSoldier=8;
		armor=85;
		armorStructural=100;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"wheel",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
		};
		class textureSources
		{
			class xi_1
			{
				displayName="XI";
				author="Kyrent";
				factions[]={};
				hiddenSelections[]=
				{
					"Camo1",
					"Camo2",
					"wheel",
					"Camo4"
				};
				textures[]=
				{
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
				};
			};
		};
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0,
			"show_fireaxe",
			0,
			"show_arm",
			0,
			"show_extension",
			0,
			"show_winch",
			0,
			"show_cover",
			1,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0,
			"show_ant_high_3_2",
			0,
			"show_ant_low_2_1",
			0,
			"show_ant_low_2_2",
			0,
			"show_ant_high_2_1",
			0,
			"show_ant_high_2_2",
			0,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			0,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			0,
			"show_ammobox_04",
			0,
			"show_jerrycan_01",
			0,
			"show_jerrycan_02",
			0,
			"show_jerrycan_03",
			1,
			"show_jerrycan_04",
			1
		};
	};
	class bma3_bushmaster_pws127mm_F;
	class xi_transport_vic_armed: bma3_bushmaster_pws127mm_F
	{
		author="Kyrent";
		displayName="[XI] Carnivore, Legate-Pattern";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		armor=250;
		armorStructural=200;
		transportSoldier=8;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
		};
		class textureSources
		{
			class xi_1
			{
				displayName="XI";
				author="Kyrent";
				factions[]={};
				textures[]=
				{
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
				};
			};
		};
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0,
			"show_fireaxe",
			0,
			"show_arm",
			0,
			"show_extension",
			0,
			"show_winch",
			0,
			"show_cover",
			1,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0,
			"show_ant_high_3_2",
			0,
			"show_ant_low_2_1",
			0,
			"show_ant_low_2_2",
			0,
			"show_ant_high_2_1",
			0,
			"show_ant_high_2_2",
			0,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			0,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			0,
			"show_ammobox_04",
			0,
			"show_jerrycan_01",
			0,
			"show_jerrycan_02",
			0,
			"show_jerrycan_03",
			1,
			"show_jerrycan_04",
			1
		};
	};
	class xi_transport_vic_unarmed_medical: bma3_bushmaster_unarmed_F
	{
		author="Kyrent";
		displayName="[XI] Carnivore, Medivac-Pattern";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		transportSoldier=8;
		armor=85;
		armorStructural=100;
		weapons[]=
		{
			"XI_WeeWooHorn"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"wheel",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo_med_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
		};
		class textureSources
		{
			class xi_1
			{
				displayName="XI";
				author="Kyrent";
				factions[]={};
				hiddenSelections[]=
				{
					"Camo1",
					"Camo2",
					"wheel",
					"Camo4"
				};
				textures[]=
				{
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
				};
			};
		};
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0,
			"show_fireaxe",
			0,
			"show_arm",
			0,
			"show_extension",
			0,
			"show_winch",
			0,
			"show_cover",
			1,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0,
			"show_ant_high_3_2",
			0,
			"show_ant_low_2_1",
			0,
			"show_ant_low_2_2",
			0,
			"show_ant_high_2_1",
			0,
			"show_ant_high_2_2",
			0,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			0,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			0,
			"show_ammobox_04",
			0,
			"show_jerrycan_01",
			0,
			"show_jerrycan_02",
			0,
			"show_jerrycan_03",
			1,
			"show_jerrycan_04",
			1
		};
	};
	class xi_transport_vic_unarmed_logi: bma3_bushmaster_unarmed_F
	{
		author="Kyrent";
		displayName="[XI] Carnivore, Logisticus-Pattern/Cargo";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		transportSoldier=2;
		scope=2;
		scopeCurator=2;
		armor=85;
		armorStructural=100;
		ace_cargo_space=12;
		ace_cargo_hasCargo=1;
		tf_RadioType="TFAR_rt1523g";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		ace_cargo_size=4;
		ace_cargo_canLoad=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"wheel",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
		};
		class textureSources
		{
			class xi_1
			{
				displayName="XI";
				author="Kyrent";
				factions[]={};
				textures[]=
				{
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
				};
			};
		};
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0,
			"show_fireaxe",
			0,
			"show_arm",
			0,
			"show_extension",
			0,
			"show_winch",
			0,
			"show_cover",
			1,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0,
			"show_ant_high_3_2",
			0,
			"show_ant_low_2_1",
			0,
			"show_ant_low_2_2",
			0,
			"show_ant_high_2_1",
			0,
			"show_ant_high_2_2",
			0,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			0,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			0,
			"show_ammobox_04",
			0,
			"show_jerrycan_01",
			0,
			"show_jerrycan_02",
			0,
			"show_jerrycan_03",
			1,
			"show_jerrycan_04",
			1
		};
	};
	class xi_transport_vic_unarmed_service: bma3_bushmaster_unarmed_F
	{
		author="Kyrent";
		displayName="[XI] Carnivore, Logisticus-Pattern/Service";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_transports";
		crew="B_G_Soldier_A_F";
		transportSoldier=2;
		scope=2;
		scopeCurator=2;
		armor=85;
		armorStructural=100;
		ace_refuel_fuelCargo=250;
		ace_rearm_defaultSupply=250;
		ace_repair_canRepair=1;
		tf_RadioType="TFAR_rt1523g";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"wheel",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
			"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
		};
		class textureSources
		{
			class xi_1
			{
				displayName="XI";
				author="Kyrent";
				factions[]={};
				textures[]=
				{
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo1_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo2_co.paa",
					"\SR_XI\xi_vehicles\Data\XI Vehicles\camo3_co.paa"
				};
			};
		};
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0,
			"show_fireaxe",
			0,
			"show_arm",
			0,
			"show_extension",
			0,
			"show_winch",
			0,
			"show_cover",
			1,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0,
			"show_ant_high_3_2",
			0,
			"show_ant_low_2_1",
			0,
			"show_ant_low_2_2",
			0,
			"show_ant_high_2_1",
			0,
			"show_ant_high_2_2",
			0,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			0,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			0,
			"show_ammobox_04",
			0,
			"show_jerrycan_01",
			0,
			"show_jerrycan_02",
			0,
			"show_jerrycan_03",
			1,
			"show_jerrycan_04",
			1
		};
	};
	class IC_Chimera_01_desert;
	class XI_Chimera: IC_Chimera_01_desert
	{
		author="";
		displayName="[PXI] Equites-Class Chimera";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		crew="B_G_Soldier_A_F";
		weapons[]=
		{
			"TruckHorn"
		};
		scope=2;
		scopeCurator=2;
		maxFordingDepth=1.5;
		engineMOI=12;
		maxSpeed=95;
		enginePower=2100;
		peakTorque=4900;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_body.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_tracks.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_turret.paa"
		};
		armorStructural=800;
		armor=600;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=16;
				material=-1;
				armorComponent="telo";
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=2;
				material=-1;
				armorComponent="motor";
				name="motor";
				passThrough=0.2;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitFuel: HitFuel
			{
				armor=16;
				material=-1;
				armorComponent="motor";
				name="motor";
				passThrough=0.2;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_L";
				name="pas_L";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
			class HitRTrack: HitRTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_P";
				name="pas_P";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
		};
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"xi_autocannon_chimera",
					"IC_HeavyStubber_coax_Chimera",
					"IC_Hunter_Killer_Missile_vic_wep",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"XI_200Rnd_30mm_MP_shells",
					"XI_200Rnd_30mm_MP_shells",
					"IC_60Rnd_30mm_APFSDS_shells",
					"IC_60Rnd_30mm_APFSDS_shells",
					"IC_60Rnd_30mm_APFSDS_shells",
					"IC_1000Rnd_Heavy_Stubber_mag",
					"IC_1000Rnd_Heavy_Stubber_mag",
					"IC_1Rnd_HunterKiller_missile",
					"IC_1Rnd_HunterKiller_missile",
					"IC_1Rnd_HunterKiller_missile",
					"IC_1Rnd_HunterKiller_missile",
					"SmokeLauncherMag"
				};
				class CommanderOptics: CommanderOptics
				{
					irScanGround=0;
					irScanRangeMax=10000;
					irScanRangeMin=2000;
					radarType=2;
					reportRemoteTargets=1;
					receiveRemoteTargets=1;
					canUseScanner=1;
					reportOwnPosition=1;
					lockDetectionSystem=1;
					incomingMissileDetectionSystem=16;
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={4000};
									resource="RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay="SensorDisplay";
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={2000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
				irScanGround=0;
				irScanRangeMax=10000;
				irScanRangeMin=2000;
				radarType=2;
				reportRemoteTargets=1;
				receiveRemoteTargets=1;
				canUseScanner=1;
				reportOwnPosition=1;
				lockDetectionSystem=1;
				incomingMissileDetectionSystem=16;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class IC_Hull_turret: NewTurret
			{
				gunnerName="Hull Gunner";
				gunnerForceOptics=0;
				proxyType="CPGunner";
				proxyIndex=4;
				gunBeg="usti hlavne2";
				gunEnd="konec hlavne2";
				body="Hull_turret";
				gun="Hull_gun";
				gunnerAction="crew_tank01_out";
				gunnerInAction="ic_chimera_hull_gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOpticsEffect[]={};
				animationSourceBody="Hull_turret";
				animationSourceGun="Hull_gun";
				memoryPointGun="usti hlavne2";
				memoryPointGunnerOptics="Hull_gunnerview";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				weapons[]=
				{
					"IC_Heavy_Bolter"
				};
				magazines[]=
				{
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells"
				};
				selectionFireAnim="";
				startEngine=0;
				stabilizedInAxes=3;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="hull_gunner_stick";
				minElev=-16;
				maxElev=16;
				initElev=0;
				minTurn=-30;
				maxTurn=20;
				initTurn=0;
				gunnerFireAlsoInInternalCamera=1;
				turretFollowFreeLook=0;
				forceHideGunner=1;
				primaryGunner=0;
				viewGunnerInExternal=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				viewGunnerShadow=1;
				viewGunnerShadowAmb=0;
				viewGunnerShadowDiff=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hull_turret_hitpoint";
						name="hull_turret_hitpoint";
						visual="hull_turret_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						armorComponent="hull_gun_hitpoint";
						name="hull_gun_hitpoint";
						visual="hull_gun_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.050000001;
						isGun=1;
					};
				};
			};
		};
	};
	class IC_Chimedon_01_desert;
	class XI_Chimedon: IC_Chimedon_01_desert
	{
		author="";
		displayName="[PXI] Equites-Class Chimedon";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		maxFordingDepth=1.5;
		engineMOI=12;
		maxSpeed=95;
		enginePower=2100;
		peakTorque=4900;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_body.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_tracks.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_turret.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_gun1.paa"
		};
		armorStructural=6;
		armor=900;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=16;
				material=-1;
				armorComponent="telo";
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=2;
				material=-1;
				armorComponent="motor";
				name="motor";
				passThrough=0.2;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_L";
				name="pas_L";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
			class HitRTrack: HitRTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_P";
				name="pas_P";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
		};
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				selectionFireAnim="muzzleflash_2";
				weapons[]=
				{
					"IC_Lancer_90mm",
					"IC_HeavyStubber_coax_Chimera",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"IC_32rnd_90mm_HEAT_MP",
					"IC_1000Rnd_Heavy_Stubber_mag",
					"SmokeLauncherMag"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				class CommanderOptics: CommanderOptics
				{
					irScanGround=0;
					irScanRangeMax=10000;
					irScanRangeMin=2000;
					radarType=2;
					reportRemoteTargets=1;
					receiveRemoteTargets=1;
					canUseScanner=1;
					reportOwnPosition=1;
					lockDetectionSystem=1;
					incomingMissileDetectionSystem=16;
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={4000};
									resource="RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay="SensorDisplay";
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={2000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
				irScanGround=0;
				irScanRangeMax=10000;
				irScanRangeMin=2000;
				radarType=2;
				reportRemoteTargets=1;
				receiveRemoteTargets=1;
				canUseScanner=1;
				reportOwnPosition=1;
				lockDetectionSystem=1;
				incomingMissileDetectionSystem=16;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class IC_Hull_turret: NewTurret
			{
				gunnerName="Hull Gunner";
				gunnerForceOptics=0;
				proxyType="CPGunner";
				proxyIndex=4;
				gunBeg="usti hlavne2";
				gunEnd="konec hlavne2";
				body="Hull_turret";
				gun="Hull_gun";
				gunnerAction="crew_tank01_out";
				gunnerInAction="ic_chimera_hull_gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOpticsEffect[]={};
				animationSourceBody="Hull_turret";
				animationSourceGun="Hull_gun";
				memoryPointGun="usti hlavne2";
				memoryPointGunnerOptics="Hull_gunnerview";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				weapons[]=
				{
					"IC_Heavy_Bolter"
				};
				magazines[]=
				{
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells"
				};
				selectionFireAnim="";
				startEngine=0;
				stabilizedInAxes=3;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="hull_gunner_stick";
				minElev=-16;
				maxElev=16;
				initElev=0;
				minTurn=-30;
				maxTurn=20;
				initTurn=0;
				gunnerFireAlsoInInternalCamera=1;
				turretFollowFreeLook=0;
				forceHideGunner=1;
				primaryGunner=0;
				viewGunnerInExternal=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				viewGunnerShadow=1;
				viewGunnerShadowAmb=0;
				viewGunnerShadowDiff=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hull_turret_hitpoint";
						name="hull_turret_hitpoint";
						visual="hull_turret_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						armorComponent="hull_gun_hitpoint";
						name="hull_gun_hitpoint";
						visual="hull_gun_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.050000001;
						isGun=1;
					};
				};
			};
		};
	};
	class IC_Chimerro_01_desert;
	class XI_Chimerro: IC_Chimerro_01_desert
	{
		author="";
		displayName="[PXI] Equites-Class Chimerro";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		maxFordingDepth=1.5;
		engineMOI=12;
		maxSpeed=95;
		enginePower=2100;
		peakTorque=4900;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_body.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_tracks.paa",
			"\SR_XI\XI_vehicles\Data\XI Vehicles\pxi_u_chimera_turret.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_gun1.paa"
		};
		armorStructural=6;
		armor=900;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=16;
				material=-1;
				armorComponent="telo";
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=2;
				material=-1;
				armorComponent="motor";
				name="motor";
				passThrough=0.2;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_L";
				name="pas_L";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
			class HitRTrack: HitRTrack
			{
				armor=1;
				material=-1;
				armorComponent="pas_P";
				name="pas_P";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.4400001;
				radius=0.1;
			};
		};
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				selectionFireAnim="muzzleflash_2";
				weapons[]=
				{
					"IC_HeavyStubber_coax_Chimera",
					"IC_Hunter_Killer_Missile_vic_wep",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"IC_1000Rnd_Heavy_Stubber_mag",
					"IC_8Rnd_HunterKiller_missile",
					"IC_8Rnd_HunterKiller_missile",
					"IC_8Rnd_HunterKiller_missile",
					"SmokeLauncherMag"
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				class CommanderOptics: CommanderOptics
				{
					irScanGround=0;
					irScanRangeMax=10000;
					irScanRangeMin=2000;
					radarType=2;
					reportRemoteTargets=1;
					receiveRemoteTargets=1;
					canUseScanner=1;
					reportOwnPosition=1;
					lockDetectionSystem=1;
					incomingMissileDetectionSystem=16;
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={4000};
									resource="RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay="SensorDisplay";
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={2000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
				irScanGround=0;
				irScanRangeMax=10000;
				irScanRangeMin=2000;
				radarType=2;
				reportRemoteTargets=1;
				receiveRemoteTargets=1;
				canUseScanner=1;
				reportOwnPosition=1;
				lockDetectionSystem=1;
				incomingMissileDetectionSystem=16;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class IC_Hull_turret: NewTurret
			{
				gunnerName="Hull Gunner";
				gunnerForceOptics=0;
				proxyType="CPGunner";
				proxyIndex=4;
				gunBeg="usti hlavne2";
				gunEnd="konec hlavne2";
				body="Hull_turret";
				gun="Hull_gun";
				gunnerAction="crew_tank01_out";
				gunnerInAction="ic_chimera_hull_gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOpticsEffect[]={};
				animationSourceBody="Hull_turret";
				animationSourceGun="Hull_gun";
				memoryPointGun="usti hlavne2";
				memoryPointGunnerOptics="Hull_gunnerview";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				weapons[]=
				{
					"IC_Heavy_Bolter"
				};
				magazines[]=
				{
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells",
					"ic_40Rnd_HB_shells"
				};
				selectionFireAnim="";
				startEngine=0;
				stabilizedInAxes=3;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="hull_gunner_stick";
				minElev=-16;
				maxElev=16;
				initElev=0;
				minTurn=-30;
				maxTurn=20;
				initTurn=0;
				gunnerFireAlsoInInternalCamera=1;
				turretFollowFreeLook=0;
				forceHideGunner=1;
				primaryGunner=0;
				viewGunnerInExternal=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				viewGunnerShadow=1;
				viewGunnerShadowAmb=0;
				viewGunnerShadowDiff=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hull_turret_hitpoint";
						name="hull_turret_hitpoint";
						visual="hull_turret_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						armorComponent="hull_gun_hitpoint";
						name="hull_gun_hitpoint";
						visual="hull_gun_hitpoint";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.050000001;
						isGun=1;
					};
				};
			};
		};
	};
	class IC_Leman_Russ_01_desert;
	class XI_Leman: IC_Leman_Russ_01_desert
	{
		author="";
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=40;
				canBeTransported=1;
				dimensions[]=
				{
					{-3.5,-1.5,0.5},
					{1,4,3}
				};
				rotation=-90;
			};
		};
		displayName="[PXI] Invictus-Variant Leman Russ";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		maxFordingDepth=2;
		maxSpeed=85;
		enginePower=5500;
		peakTorque=8550;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		engineMOI=8;
		armorStructural=800;
		armor=600;
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_hull.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_Leman_Tracks.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_Leman_Turret.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_gun1.paa"
		};
		animationList[]=
		{
			"showDozerBlade",
			1
		};
		irScanGround=0;
		irScanRangeMax=1000;
		irScanRangeMin=1000;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class XI_Hull_turret: Hull_turret
			{
			};
			class XI_Left_Sponson_turret: Left_Sponson_turret
			{
			};
			class XI_Right_Sponson_turret: Right_Sponson_turret
			{
			};
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"XI_Vanquisher_120mm",
					"IC_HeavyStubber_coax_Chimera",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"XI_30Rnd_120mm",
					"IC_1000Rnd_Heavy_Stubber_mag",
					"SmokeLauncherMag"
				};
				class CommanderOptics: CommanderOptics
				{
					irScanGround=0;
					irScanRangeMax=10000;
					irScanRangeMin=2000;
					radarType=2;
					reportRemoteTargets=1;
					receiveRemoteTargets=1;
					canUseScanner=1;
					reportOwnPosition=1;
					lockDetectionSystem=1;
					incomingMissileDetectionSystem=16;
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={1000};
									resource="RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay="SensorDisplay";
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={1000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
				irScanGround=0;
				irScanRangeMax=10000;
				irScanRangeMin=2000;
				radarType=2;
				reportRemoteTargets=1;
				receiveRemoteTargets=1;
				canUseScanner=1;
				reportOwnPosition=1;
				lockDetectionSystem=1;
				incomingMissileDetectionSystem=16;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	class IC_Leman_Russ_02_8th;
	class XI_Leman_BC: IC_Leman_Russ_02_8th
	{
		author="";
		displayName="[PXI] Invictus-Variant Leman Russ";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		maxFordingDepth=2;
		maxSpeed=85;
		enginePower=5500;
		peakTorque=8550;
		minOmega=100;
		maxOmega=320;
		clutchStrength=500;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		engineMOI=8;
		armorStructural=5;
		armor=1000;
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_hull.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_Leman_Tracks.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_Leman_Turret.paa",
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\pxi_leman_gun1.paa"
		};
		animationList[]=
		{
			"showDozerBlade",
			1
		};
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class XI_Hull_turret: Hull_turret
			{
			};
			class XI_Left_Sponson_turret: Left_Sponson_turret
			{
			};
			class XI_Right_Sponson_turret: Right_Sponson_turret
			{
			};
			class MainTurret: MainTurret
			{
				class CommanderOptics: CommanderOptics
				{
					irScanGround=0;
					irScanRangeMax=10000;
					irScanRangeMin=2000;
					radarType=2;
					reportRemoteTargets=1;
					receiveRemoteTargets=1;
					canUseScanner=1;
					reportOwnPosition=1;
					lockDetectionSystem=1;
					incomingMissileDetectionSystem=16;
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={4000};
									resource="RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay="SensorDisplay";
							class Components: Components
							{
								class SensorDisplay
								{
									componentType="SensorsDisplayComponent";
									range[]={2000};
									resource="RscCustomInfoSensors";
								};
							};
						};
					};
				};
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				selectionFireAnim="muzzleflash_coax";
				weapons[]=
				{
					"IC_Battlecannon_160mm",
					"IC_HeavyStubber_coax_Chimera",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"IC_32Rnd_160mm_HE_shells",
					"IC_1000Rnd_Heavy_Stubber_mag",
					"SmokeLauncherMag"
				};
				irScanGround=0;
				irScanRangeMax=10000;
				irScanRangeMin=2000;
				radarType=2;
				reportRemoteTargets=1;
				receiveRemoteTargets=1;
				canUseScanner=1;
				reportOwnPosition=1;
				lockDetectionSystem=1;
				incomingMissileDetectionSystem=16;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: Components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	class cannon_railgun;
	class pxi_leman_vc_carnivore: XI_Leman
	{
		displayName="[PXI] Leman - CARNIFEX";
		class Turrets: Turrets
		{
			class XI_Hull_turret: Hull_turret
			{
			};
			class XI_Left_Sponson_turret: Left_Sponson_turret
			{
			};
			class XI_Right_Sponson_turret: Right_Sponson_turret
			{
			};
			class MainTurret: MainTurret
			{
				class CommanderOptics: CommanderOptics
				{
					class Components
					{
					};
				};
				weapons[]=
				{
					"cannon_railgun_fake",
					"cannon_railgun",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"60Rnd_75mm_RailGun_APFSDS_mag",
					"RailGun_01_DummyMagazine",
					"SmokeLauncherMag"
				};
				turretInfoType="RscOptics_MBT_02_Railgun_gunner";
				class Components
				{
				};
			};
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"MBT_01_Engine_RPM0_INT_SoundSet",
				"MBT_01_Engine_RPM1_INT_SoundSet",
				"MBT_01_Engine_RPM2_INT_SoundSet",
				"MBT_01_Engine_RPM3_INT_SoundSet",
				"MBT_01_Engine_RPM4_INT_SoundSet",
				"MBT_01_Engine_RPM5_INT_SoundSet",
				"MBT_01_Engine_RPM6_INT_SoundSet",
				"MBT_01_Engine_INT_Burst_SoundSet",
				"MBT_01_Tracks_01_INT_SoundSet",
				"MBT_01_Tracks_02_INT_SoundSet",
				"MBT_01_Tracks_03_INT_SoundSet",
				"MBT_01_Tracks_04_INT_SoundSet",
				"MBT_01_Tracks_05_INT_SoundSet",
				"MBT_01_Tracks_06_INT_SoundSet",
				"MBT_01_Interior_Tone_Engine_Off_SoundSet",
				"MBT_01_Interior_Tone_Engine_On_SoundSet",
				"MBT_01_Rattling_INT_SoundSet",
				"MBT_01_Rain_INT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_01_Drive_Water_INT_SoundSet",
				"MBT_01_Drive_Dirt_INT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet",
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet"
			};
			soundSetsExt[]=
			{
				"MBT_01_Engine_RPM0_EXT_SoundSet",
				"MBT_01_Engine_RPM1_EXT_SoundSet",
				"MBT_01_Engine_RPM2_EXT_SoundSet",
				"MBT_01_Engine_RPM3_EXT_SoundSet",
				"MBT_01_Engine_RPM4_EXT_SoundSet",
				"MBT_01_Engine_RPM5_EXT_SoundSet",
				"MBT_01_Engine_RPM6_EXT_SoundSet",
				"MBT_01_Engine_EXT_Burst_SoundSet",
				"MBT_01_Tracks_01_EXT_SoundSet",
				"MBT_01_Tracks_02_EXT_SoundSet",
				"MBT_01_Tracks_03_EXT_SoundSet",
				"MBT_01_Tracks_04_EXT_SoundSet",
				"MBT_01_Tracks_05_EXT_SoundSet",
				"MBT_01_Tracks_06_EXT_SoundSet",
				"MBT_01_Rain_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_01_Drive_Water_EXT_SoundSet",
				"MBT_01_Drive_Dirt_EXT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader",
				"Railgun_01_Charge_Start_SoundSet",
				"Railgun_01_Charge_Stop_SoundSet",
				"Railgun_01_Charge_Loop_SoundSet"
			};
		};
	};
	class ML700_Hydra_Platform_BLOOD;
	class XI_HighDispersion_Flak_Platform_chaos: ML700_Hydra_Platform_BLOOD
	{
		author="";
		displayName="[PXI] High Dispersion Flak Emplacement";
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		crew="O_UAV_AI";
		side=0;
		armor=4500;
		scope=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"XI_HighDispersion_Flak_cannon"
				};
				magazines[]=
				{
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance"
				};
				minElev=1.5;
			};
		};
	};
	class ML700_Hydra_Platform;
	class XI_HighDispersion_Flak_Platform_guard: ML700_Hydra_Platform
	{
		author="";
		displayName="[PXI] High Dispersion Flak Emplacement (GUARD)";
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		crew="O_UAV_AI";
		side=0;
		armor=4500;
		scope=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"XI_HighDispersion_Flak_cannon"
				};
				magazines[]=
				{
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance"
				};
				minElev=1.5;
			};
		};
	};
	class XI_HighDispersion_Flak_Platform_guardHIGH: ML700_Hydra_Platform
	{
		author="";
		displayName="[PXI] High Dispersion Flak Emplacement (GUARD HIGH)";
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		crew="O_UAV_AI";
		side=0;
		armor=4500;
		scope=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"XI_HighDispersion_Flak_cannonHIGH"
				};
				magazines[]=
				{
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance",
					"XI_Quad_Autocannon_Magazine_Hydra_Flak_Rebalance"
				};
				minElev=40;
			};
		};
	};
	class TIOW_ValhallanHydra_White;
	class XI_Hydra_Rebalance_Blufor: TIOW_ValhallanHydra_White
	{
		displayName="[XI] Hydra";
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		side=1;
		crew="B_G_Soldier_A_F";
		scope=2;
		scopeCurator=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"TIOW_HydraAutocannonCannon_90mm_Mag",
					"TIOW_HydraAutocannonCannon_90mm_Mag",
					"TIOW_HydraAutocannonCannon_90mm_Mag"
				};
			};
		};
	};
	class AnimationSources;
	class B_AAA_System_01_F;
	class B_SAM_System_01_F;
	class XI_SAM_System: B_SAM_System_01_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"hide_missilecover_01",
					1
				},
				
				{
					"hide_missilecover_02",
					1
				},
				
				{
					"hide_missilecover_03",
					1
				},
				
				{
					"hide_missilecover_04",
					1
				},
				
				{
					"hide_missilecover_05",
					1
				},
				
				{
					"hide_missilecover_06",
					1
				},
				
				{
					"hide_missilecover_07",
					1
				},
				
				{
					"hide_missilecover_08",
					1
				},
				
				{
					"hide_missilecover_09",
					1
				},
				
				{
					"hide_missilecover_10",
					1
				},
				
				{
					"hide_missilecover_11",
					1
				},
				
				{
					"hide_missilecover_12",
					1
				},
				
				{
					"hide_missilecover_13",
					1
				},
				
				{
					"hide_missilecover_14",
					1
				},
				
				{
					"hide_missilecover_15",
					1
				},
				
				{
					"hide_missilecover_16",
					1
				},
				
				{
					"hide_missilecover_17",
					1
				},
				
				{
					"hide_missilecover_18",
					1
				},
				
				{
					"hide_missilecover_19",
					1
				},
				
				{
					"hide_missilecover_20",
					1
				},
				
				{
					"hide_missilecover_21",
					1
				},
				
				{
					"damageturret",
					0
				},
				
				{
					"damage_hide_missilecover_01",
					0
				},
				
				{
					"damage_hide_missilecover_02",
					0
				},
				
				{
					"damage_hide_missilecover_03",
					0
				},
				
				{
					"damage_hide_missilecover_04",
					0
				},
				
				{
					"damage_hide_missilecover_05",
					0
				},
				
				{
					"damage_hide_missilecover_06",
					0
				},
				
				{
					"damage_hide_missilecover_07",
					0
				},
				
				{
					"damage_hide_missilecover_08",
					0
				},
				
				{
					"damage_hide_missilecover_09",
					0
				},
				
				{
					"damage_hide_missilecover_10",
					0
				},
				
				{
					"damage_hide_missilecover_11",
					0
				},
				
				{
					"damage_hide_missilecover_12",
					0
				},
				
				{
					"damage_hide_missilecover_13",
					0
				},
				
				{
					"damage_hide_missilecover_14",
					0
				},
				
				{
					"damage_hide_missilecover_15",
					0
				},
				
				{
					"damage_hide_missilecover_16",
					0
				},
				
				{
					"damage_hide_missilecover_17",
					0
				},
				
				{
					"damage_hide_missilecover_18",
					0
				},
				
				{
					"damage_hide_missilecover_19",
					0
				},
				
				{
					"damage_hide_missilecover_20",
					0
				},
				
				{
					"damage_hide_missilecover_21",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.755;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				weapons[]=
				{
					"xi_sam_fork"
				};
				magazines[]=
				{
					"magazine_Missile_rim116_x21",
					"magazine_Missile_rim116_x21",
					"magazine_Missile_rim116_x21"
				};
			};
		};
		displayName="[PXI] SAM Site";
		armor=9000;
		armorStructural=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		crew="O_UAV_AI_F";
		side=0;
		scope=2;
	};
	class B_T_APC_Tracked_01_AA_F;
	class XI_OPfor_AA_1: B_T_APC_Tracked_01_AA_F
	{
		displayName="[XI] (Pirate) Bardelas";
		armor=2500;
		armorStructural=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		side=0;
		scope=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"SmokeLauncherMag",
					"680Rnd_35mm_AA_shells_Tracer_Red",
					"680Rnd_35mm_AA_shells_Tracer_Red"
				};
			};
		};
	};
	class I_MRAP_03_F;
	class PXI_MRAP_1: I_MRAP_03_F
	{
		displayname="[PXI] HQ-Staff MRAP";
		side=1;
		scope=2;
		scopeCurator=2;
		editorCategory="XI_categ_editor";
		editorSubcategory="XI_subcat_fz";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\XI_Vehicles\Data\XI Vehicles\fennec.paa"
		};
		armorStructural=4000;
	};
	class DRA_CRAM_01: B_AAA_System_01_F
	{
		displayName="[PXI] Praetorian 1D C-RAM/FORKED";
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		side=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"xi_weapon_phalanx"
				};
				magazines[]=
				{
					"DRA_magazine_CRAM"
				};
			};
		};
	};
	class B_T_UAV_03_dynamicLoadout_F;
	class pxi_falconDrone_O: B_T_UAV_03_dynamicLoadout_F
	{
		displayName="[PXI] Falcon-Spotter Drone";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_drones";
	};
	class B_UAV_05_F;
	class pxi_UCAVDrone_O: B_UAV_05_F
	{
		displayName="[PXI] UCAV Sentinel";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_drones";
	};
	class B_Ship_MRLS_01_F;
	class pxi_vlsLauncher_O: B_Ship_MRLS_01_F
	{
		displayName="[PXI] Cruise-Missile Site";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_drones";
	};
};
