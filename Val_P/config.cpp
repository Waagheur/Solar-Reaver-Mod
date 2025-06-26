class CfgPatches
{
	class val_P
	{
		author="Original Battlestad+SabreOne, Moddet by GobelGobel";
		name="There is Only War Valkyries";
		units[]=
		{
			"TIOW_Valkyrie_Fuel_B",
			"TIOW_Valkyrie_Fuel_M_B",
			"TIOW_Valkyrie_Rocket_B",
			"TIOW_Valkyrie_Rocket_M_B",
			"TIOW_Valkyrie_Rocket_AC_B",
			"TIOW_Valkyrie_Pylon_B",
			"TIOW_Valkyrie_Pylon_M_B",
			"TIOW_Valkyrie_Pylon_AC_B",
			"TIOW_Valkyrie_Fuel_O",
			"TIOW_Valkyrie_Fuel_M_O",
			"TIOW_Valkyrie_Rocket_O",
			"TIOW_Valkyrie_Rocket_M_O",
			"TIOW_Valkyrie_Fuel_I",
			"TIOW_Valkyrie_Fuel_M_I",
			"TIOW_Valkyrie_Rocket_I",
			"TIOW_Valkyrie_Rocket_M_I",
			"Valkyrie_Looted_0",
			"Valkyrie_Looted_1",
			"Valkyrie_Looted_2",
			"Valkyrie_Renegade_B",
			"Valkyrie_Renegade_O",
			"Valkyrie_Renegade_I",
			"Valkyrie_Possessed_B_O",
			"Valkyrie_Possessed_B_B",
			"Valkyrie_Possessed_B_I",
			"Valkyrie_Possessed_BL_O",
			"Valkyrie_Possessed_BL_B",
			"Valkyrie_Possessed_BL_I",
			"Valkyrie_Possessed_G_O",
			"Valkyrie_Possessed_G_B",
			"Valkyrie_Possessed_G_I",
			"Valkyrie_Possessed_GR_O",
			"Valkyrie_Possessed_GR_B",
			"Valkyrie_Possessed_GR_I"
		};
		weapons[]=
		{
			"TIOW_Thunderbolt_AutoCannon60mm",
			"TIOW_rockets_Skyfire_v",
			"TIOW_Thunderbolt_Missile_Pod7",
			"TIOW_Thunderbolt_LasCannon"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A40k_WepBase",
			"TIOW_Warhound",
			"Valkyrie"
		};
		magazines[]=
		{
			"TIOW_Thunderbolt_Autocannon60mmAPMag",
			"TIOW_Thunderbolt_Autocannon60mmHEMag",
			"TIOW_Thunderbolt_Hellstrike_Missiles_x2",
			"TIOW_Thunderbolt_Skystrike_Missiles_x2",
			"TIOW_Thunderbolt_Plasma_Missile_x1",
			"TIOW_Thunderbolt_Hellfury_Missile_x1",
			"TIOW_Thunderbolt_500_Bomb_x4",
			"TIOW_Thunderbolt_1000_Bomb_x1",
			"TIOW_Thunderbolt_Rockets_x19",
			"TIOW_Thunderbolt_Hellstrike_Missiles_x2_P",
			"TIOW_Thunderbolt_Skystrike_Missiles_x2_P",
			"TIOW_Thunderbolt_Plasma_Missile_x1_P",
			"TIOW_Thunderbolt_Hellfury_Missile_x1_P",
			"TIOW_Thunderbolt_500_Bomb_x4_P",
			"TIOW_Thunderbolt_1000_Bomb_x1_P",
			"TIOW_Thunderbolt_Rockets_x19_P"
		};
		ammo[]=
		{
			"TIOW_R_80mm_HE_v",
			"MissileBase",
			"M_Scalpel_AT",
			"Missile_AGM_02_F",
			"M_Air_AA",
			"TIOW_Hellstrike_Missile",
			"TIOW_Skystrike_Missile",
			"TIOW_Plasma_Missile",
			"TIOW_Hellfury_Bomblet",
			"TIOW_Hellfury_Missile",
			"TIOW_500_Bomb",
			"TIOW_1000_Bomb",
			"TIOW_Skyfire"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class FFV_BaseActions;
	class ManActions
	{
		pilot_plane_Valkyrie="pilot_plane_Valkyrie";
		hb_gunner_valkyrie="hb_gunner_valkyrie";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class vehicle_turnout_1_Aim;
	class cargo_base;
	class AmovPercMstpSlowWrflDnon;
	class cargo_basebinoc;
	class States
	{
		class Crew;
		class pilot_plane_cas_01;
		class pilot_plane_Valkyrie: pilot_plane_cas_01
		{
			file="\WHair\Val\DATA\Anim\pilot_valk_static.rtm";
			speed=0.33000001;
		};
		class hb_gunner_valkyrie: Crew
		{
			file="\WHair\Val\DATA\Anim\HB_gunner.rtm";
			interpolateTo[]=
			{
				"",
				1
			};
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
			speed=1e+010;
		};
	};
};
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};
class CfgCloudlets
{
	class Default;
	class HeavyBombExp1;
	class PlasmaMissileExp1: HeavyBombExp1
	{
		particleShape="\TIOW_Thunderbolt\plasma_exp1.p3d";
		lifeTime=2;
	};
};
class PlasmaMissileExplosion
{
	class ExpSparksBig
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurning3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="PlasmaExpLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=2;
	};
	class Explosion1Big
	{
		simulation="particles";
		type="VehExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BombExp1
	{
		simulation="particles";
		type="PlasmaMissileExp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1Big
	{
		simulation="particles";
		type="VehExpSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		type="VehExpSmoke2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class CfgAmmo
{
	class TIOW_LemanRuss_Lascannon_Rnd;
	class R_80mm_HE;
	class TIOW_R_80mm_HE_v: R_80mm_HE
	{
		proxyShape="\WHair\Val\weapons\pod_rocket.p3d";
		model="\WHair\Val\weapons\pod_rocket_flight.p3d";
	};
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class Sh_120mm_HE;
	class Components;
	class M_Scalpel_AT: MissileBase
	{
	};
	class Missile_AGM_02_F: MissileBase
	{
	};
	class M_Air_AA: MissileBase
	{
	};
	class TopDown;
	class Direct;
	class Bomb_04_F;
	class Radar_Sensors;
	class AirTarget;
	class LoalDistance;
	class LoalAltitude;
	class TIOW_Hellstrike_Missile: M_Scalpel_AT
	{
		proxyShape="\TIOW_Thunderbolt\Hellstrike.p3d";
		model="\TIOW_Thunderbolt\Hellstrike.p3d";
		aiAmmoUsageFlags="128 + 512";
		hit=15000;
		indirectHit=12000;
		indirectHitRange=2;
		explosive=0.5;
		cost=50;
		maneuvrability=100;
		coefgravity=0;
		maxSpeed=900;
		autoSeekTarget=1;
		cameraViewAvailable=1;
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234097,
			1
		};
		airlock=0;
		nvLock=1;
		thrust=350;
		thrustTime=2;
		fuseDistance=50;
		airfriction=0;
		weaponLockDelay=0;
		missileLockMinDistance=5;
		missileLockMaxDistance=8000;
		missileKeepLockedCone=360;
		missileLockCone=180;
		trackOversteer=1;
		effectsMissile="missile2";
		effectsMissileInit="MissileDAR1";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		flightProfiles[]=
		{
			"TopDown",
			"LoalDistance",
			"LoalAltitude"
		};
		class Topdown
		{
		};
		class LoalDistance: Direct
		{
			lockSeekDistanceFromParent=1;
		};
		class LoalAltitude: Direct
		{
			lockSeekAltitude=1;
		};
	};
	class TIOW_Skystrike_Missile: M_Air_AA
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\Skystrike.p3d";
		model="\TIOW_Thunderbolt\Pylons\Skystrike.p3d";
		aiAmmoUsageFlags="256";
		hit=400;
		indirectHit=100;
		indirectHitRange=5;
		cost=50;
		coefgravity=0;
		maxSpeed=900;
		thrust=350;
		thrustTime=20;
		maneuvrability=200;
		fuseDistance=5;
		airfriction=0;
		missileLockMinDistance=50;
		missileLockMaxDistance=8000;
		cmImmunity=0.5;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class Radar_Sensors
					{
						componentType="ActiveRadarSensorComponent";
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget: AirTarget
						{
							maxRange=5000;
						};
						typeRecognitionDistance=7000;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						groundNoiseDistanceCoef=0.5;
						maxGroundNoiseDistance=250;
						minSpeedThreshold=150;
						maxSpeedThreshold=400;
					};
				};
			};
		};
	};
	class TIOW_Plasma_Missile: Missile_AGM_02_F
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\Plasma_Missile.p3d";
		model="\TIOW_Thunderbolt\Pylons\Plasma_Missile.p3d";
		aiAmmoUsageFlags="64 + 128 + 512";
		hit=5000;
		indirectHit=2000;
		indirectHitRange=20;
		cost=50;
		coefgravity=0;
		irLock=0;
		laserLock=0;
		simulationStep=0.0099999998;
		sideAirFriction=0.075000003;
		initTime=0.2;
		maxSpeed=1200;
		thrust=450;
		thrustTime=25;
		fuseDistance=5;
		effectsMissile="missile2";
		effectsMissileInit="MissileDAR1";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		whistleDist=4;
		timeToLive=60;
		lockType=0;
		airfriction=0;
		weaponLockSystem="0";
		explosionEffects="PlasmaMissileExplosion";
		soundHit1[]=
		{
			"",
			1.77828,
			1,
			1800
		};
		soundHit2[]=
		{
			"",
			1.77828,
			1,
			1800
		};
		soundHit3[]=
		{
			"",
			1.77828,
			1,
			1800
		};
		soundHit4[]=
		{
			"",
			1.77828,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		SoundSetExplosion[]=
		{
			"PlasmaBlastGunShell_Exp_SoundSet",
			"Shell105mm130mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class TIOW_Hellfury_Bomblet: Sh_120mm_HE
	{
		hit=100;
		indirectHit=130;
		indirectHitRange=8;
		typicalSpeed=1400;
		explosive=0.80000001;
		cost=50;
		airFriction=-0.000275;
		caliber=10;
		timeToLive=15;
		whistleOnFire=1;
		whistleDist=14;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
		muzzleEffect="";
		explosionEffects="ATMissileExplosion";
		CraterEffects="ATMissileCrater";
		class CamShakeExplode
		{
			power="(13^0.5)";
			duration="((round (13^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((13^0.5)*3)";
		};
		class CamShakeHit
		{
			power=13;
			duration="((round (13^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class TIOW_Hellfury_Missile: MissileBase
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\Hellfury.p3d";
		model="\TIOW_Thunderbolt\Pylons\Hellfury.p3d";
		submunitionAmmo="TIOW_Hellfury_Bomblet";
		submunitionInitSpeed=1;
		triggerspeedcoef[]={0.25};
		triggeronimpact=1;
		submunitionConeAngle[]={20,30};
		submunitionConeAngleHorizontal=30;
		SubmunitionTargetDirection=1;
		submunitionConeType[]=
		{
			"random",
			20
		};
		aiAmmoUsageFlags="64 + 128";
		timeToLive=15;
		cost=50;
		coefgravity=0;
		deflecting=0;
		laserLock=1;
		manualControl=0;
		maneuvrability=20;
		maxSpeed=900;
		thrust=350;
		thrustTime=25;
		simulationStep=0.0099999998;
		triggerDistance=75;
		sideAirFriction=0.001;
		maxControlRange=100000;
		airfriction=0;
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
		explosionSoundEffect="DefaultExplosion";
		soundFly[]=
		{
			"",
			1,
			1,
			400
		};
		soundEngine[]=
		{
			"",
			1,
			1,
			50
		};
		supersonicCrackNear[]=
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",
			0.39810699,
			1,
			20
		};
		supersonicCrackFar[]=
		{
			"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",
			0.316228,
			1,
			50
		};
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		muzzleEffect="BIS_fnc_effectFiredRocket";
		effectsMissile="missile4";
		weaponLockSystem=0;
		flightProfiles[]=
		{
			"Direct",
			"LoalDistance",
			"LoalAltitude"
		};
		class Direct
		{
		};
		class LoalDistance: Direct
		{
			lockSeekDistanceFromParent=300;
		};
		class LoalAltitude: Direct
		{
			lockSeekAltitude=100;
		};
	};
	class TIOW_500_Bomb: Bomb_04_F
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\500_bomb.p3d";
		model="\TIOW_Thunderbolt\Pylons\500_bomb.p3d";
		maverickWeaponIndexOffset=8;
		aiAmmoUsageFlags="64 + 128 + 512";
		hit=6000;
		indirectHit=1400;
		indirectHitRange=12;
		cost=50;
		nvLock=1;
		weaponLockSystem="2 + 16 + 4";
		maneuvrability=20;
		fuseDistance=35;
		trackLead=0.94999999;
		trackOversteer=1;
		craterEffects="BombCrater";
		explosionEffects="ATMissileExplosion";
		explosionSoundEffect="DefaultExplosion";
		explosionTime=2;
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.2,
			"soundHit5",
			0.2
		};
		soundHit1[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_1",
			2.5118899,
			1,
			2400
		};
		soundHit2[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_2",
			2.5118899,
			1,
			2400
		};
		soundHit3[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.5118899,
			1,
			2400
		};
		soundHit4[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_shell_1",
			2.5118899,
			1,
			2400
		};
		soundHit5[]=
		{
			"\A3\Sounds_F\weapons\Explosion\expl_shell_2",
			2.5118899,
			1,
			2400
		};
		whistleDist=24;
	};
	class TIOW_1000_Bomb: TIOW_500_Bomb
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\1000_bomb.p3d";
		model="\TIOW_Thunderbolt\Pylons\1000_bomb.p3d";
		hit=9000;
		indirectHit=3000;
		indirectHitRange=20;
		explosionEffects="BombExplosion";
	};
	class TIOW_Skyfire: R_80mm_HE
	{
		proxyShape="\TIOW_Thunderbolt\Pylons\Rocket.p3d";
		model="\TIOW_Thunderbolt\Pylons\Rocket.p3d";
	};
};
class Mlaser_valk;
class CfgMagazines
{
	class VehicleMagazine;
	class 38Rnd_80mm_rockets;
	class TIOW_LemanRuss_Lascannon_Mag;
	class TIOW_38Rnd_80mm_rockets_v: 38Rnd_80mm_rockets
	{
		ammo="TIOW_R_80mm_HE_v";
	};
	class TIOW_LsCnn_pc_v: TIOW_LemanRuss_Lascannon_Mag
	{
		count=30;
		ammo="TIOW_LemanRuss_Lascannon_Rnd";
	};
	class TIOW_LsCnn_pc_vc: TIOW_LemanRuss_Lascannon_Mag
	{
		ammo="TIOW_LemanRuss_Lascannon_Rnd";
		count=30;
	};
	class TIOW_Thunderbolt_Autocannon60mmAPMag: VehicleMagazine
	{
		scope=2;
		displayName="150Rnd 60mm AP Drum";
		ammo="TIOW_Autocannon60mmAP";
		count=350;
		initSpeed=1000;
		maxLeadSpeed=100;
		tracersEvery=1;
		dispersion=0.001;
	};
	class TIOW_Thunderbolt_Autocannon60mmHEMag: VehicleMagazine
	{
		scope=2;
		displayName="150Rnd 60mm HE Drum";
		ammo="TIOW_Autocannon60mmHE";
		count=350;
		initSpeed=1000;
		maxLeadSpeed=100;
		tracersEvery=1;
		dispersion=0.001;
	};
	class TIOW_Thunderbolt_Lascannon_Mag: TIOW_LemanRuss_Lascannon_Mag
	{
		diplayName="Thunderbolt Lascannon Mag";
		count=2;
	};
	class TIOW_Thunderbolt_Hellstrike_Missiles_x2: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_Hellstrike_Missile";
		count=2;
		displayName="Hellstrike Missile (AT, Radar)";
		descriptionShort="Hellstrike Missile";
		displayNameShort="Hellstrike Missile";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_Skystrike_Missiles_x2: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_Skystrike_Missile";
		count=2;
		displayName="Skystrike Missile (AA, IR)";
		descriptionShort="Skystrike Missile";
		displayNameShort="Skystrike Missile";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_Plasma_Missile_x1: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_Plasma_Missile";
		count=1;
		displayName="Plasma Missile (HE, Dumb)";
		descriptionShort="Plasma Missile";
		displayNameShort="Plasma Missile";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_Hellfury_Missile_x1: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_Hellfury_Missile";
		count=1;
		displayName="Hellfury Missile (Cluster, Dumb)";
		descriptionShort="Hellfury Missile";
		displayNameShort="Hellfury Missile";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_500_Bomb_x4: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_500_Bomb";
		count=4;
		displayName="500lb Bomb (Bomb, Laser)";
		descriptionShort="500lb Bomb";
		displayNameShort="500lb Bomb ";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_1000_Bomb_x1: VehicleMagazine
	{
		scope=2;
		ammo="TIOW_1000_Bomb";
		count=1;
		displayName="1000lb Bomb (Bomb, Laser)";
		descriptionShort="1000lb Bomb";
		displayNameShort="1000lb Bomb ";
		initSpeed=0;
		maxLeadSpeed=30;
	};
	class TIOW_Thunderbolt_Rockets_x19: 38Rnd_80mm_rockets
	{
		scope=2;
		ammo="TIOW_Skyfire";
		count=19;
		displayName="Skyfire Rocket Pod (Rocket, Dumb)";
		descriptionShort="Skyfire Rockets";
		displayNameShort="Skyfire Rockets";
	};
	class TIOW_Thunderbolt_Hellstrike_Missiles_x2_P: TIOW_Thunderbolt_Hellstrike_Missiles_x2
	{
		displayName="Hellstrike Missile (AT, Radar)";
		model="\TIOW_Thunderbolt\Pylons\Dual_Pylon.p3d";
		count=2;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod1";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class TIOW_Thunderbolt_Skystrike_Missiles_x2_P: TIOW_Thunderbolt_Skystrike_Missiles_x2
	{
		displayName="Skystrike Missile (AA, IR)";
		model="\TIOW_Thunderbolt\Pylons\Dual_Pylon.p3d";
		count=2;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod2";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class TIOW_Thunderbolt_Plasma_Missile_x1_P: TIOW_Thunderbolt_Plasma_Missile_x1
	{
		displayName="Plasma Missile (HE, Dumb)";
		model="\TIOW_Thunderbolt\Pylons\Single_Pylon.p3d";
		count=1;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod3";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114K;
	class PylonRack_3Rnd_ACE_Hellfire_AGM114L;
	class PylonRack_3Rnd_ACE_Hellfire_AGM114N;
	class xi_hellfire_3_K: PylonRack_3Rnd_ACE_Hellfire_AGM114K
	{
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="xi_hellfire_pylon";
	};
	class xi_hellfire_3_L: PylonRack_3Rnd_ACE_Hellfire_AGM114L
	{
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="xi_hellfire_pylon";
	};
	class xi_hellfire_3_N: PylonRack_3Rnd_ACE_Hellfire_AGM114N
	{
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="xi_hellfire_pylon";
	};
	class TIOW_Thunderbolt_Hellfury_Missile_x1_P: TIOW_Thunderbolt_Hellfury_Missile_x1
	{
		displayName="Hellfury Missile (Cluster, Dumb)";
		model="\TIOW_Thunderbolt\Pylons\Single_Pylon.p3d";
		count=1;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod4";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class TIOW_Thunderbolt_500_Bomb_x4_P: TIOW_Thunderbolt_500_Bomb_x4
	{
		displayName="500lb Bomb (Bomb, Laser)";
		model="\TIOW_Thunderbolt\Pylons\Dual_Pylon.p3d";
		count=4;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod5";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class TIOW_Thunderbolt_1000_Bomb_x1_P: TIOW_Thunderbolt_1000_Bomb_x1
	{
		displayName="1000lb Bomb (Bomb, Laser)";
		model="\TIOW_Thunderbolt\Pylons\Single_Pylon.p3d";
		count=1;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod6";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
	class TIOW_Thunderbolt_Rockets_x19_P: TIOW_Thunderbolt_Rockets_x19
	{
		displayName="Skyfire Rocket Pod (Rocket, Dumb)";
		model="\TIOW_Thunderbolt\Pylons\Rocketpod.p3d";
		count=19;
		hardpoints[]=
		{
			"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
		};
		pylonWeapon="TIOW_Thunderbolt_Missile_Pod7";
		initSpeedY=0;
		initSpeedZ=0;
		initSpeedX=0;
	};
};
class CfgWeapons
{
	class TIOW_MultiLaser;
	class MGun;
	class HMG_127;
	class LsCnn_mkII;
	class MissileLauncher;
	class missiles_SCALPEL;
	class missiles_ASRAAM;
	class rockets_Skyfire;
	class LMHb;
	class RMHb;
	class TIOW_IG_HeavyBolter;
	class Left_TIOW_IG_HeavyBolter;
	class Right_TIOW_IG_HeavyBolter;
	class TIOW_LemanRuss_Lascannon;
	class RocketPods;
	class TIOW_Thunderbolt_AutoCannon60mm: HMG_127
	{
		class manual: MGun
		{
			class StandardSound
			{
				begin1[]=
				{
					"\A40k_Sound\BtlCnn.wav",
					1.58489,
					1,
					2100
				};
				begin2[]=
				{
					"\A40k_Sound\BtlCnn.wav",
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
					"\A40k_Sound\BtlCnn.wav",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\A40k_Sound\BtlCnn.wav",
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
		Multiplier=2;
		displayName="60mm Thunderbolt Autocannon Array";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="cannon";
		cursorSize=1;
		dispersion=0.0020000001;
		burst=1;
		reloadTime=0.1;
		autoFire=1;
		magazineReloadTime=8;
		modes[]=
		{
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		shotfromturret=0;
		memoryPointGun="Lascannon_muzzle";
		class GunParticles
		{
			class effect1
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
		};
		magazines[]=
		{
			"TIOW_Thunderbolt_Autocannon60mmHEMag",
			"TIOW_Thunderbolt_Autocannon60mmAPMag"
		};
		class LowROF: manual
		{
			displayName="60mm Autocannon Array";
			reloadTime=0.125;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
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
		};
		class HighROF: LowROF
		{
			reloadTime=0.125;
			minRange=1;
			minRangeProbab=0.079999998;
			midRange=2;
			midRangeProbab=0.057999998;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			displayname="60mm Autocannon Array";
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
			burst=10;
			aiRateOfFire=0;
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
			burst=7;
			aiRateOfFire=0;
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
			burst=5;
			aiRateOfFire=0;
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
			burst=2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1000;
		};
	};
	class TIOW_Thunderbolt_LasCannon: TIOW_LemanRuss_Lascannon
	{
		class manual: MGun
		{
			class StandardSound
			{
				begin1[]=
				{
					"\A40k_Sound\Lscnn2.wss",
					3.1622801,
					1,
					5000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
			showtoplayer=1;
			soundContinuous=0;
			reloadTime=0;
			magazineReloadTime=6;
			autoReload=1;
			ballisticsComputer=1;
			canLock=0;
			autoFire=0;
			dispersion=0;
		};
		scope=2;
		displayName="Twin-Linked Lascannon";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		cursorSize=1;
		nameSound="cannon";
		magazines[]=
		{
			"TIOW_Thunderbolt_Lascannon_Mag"
		};
		reloadTime=0;
		minRange=8;
		minRangeProbab=0.69999999;
		midRange=1200;
		midRangeProbab=0.69999999;
		maxRange=2500;
		maxRangeProbab=0.1;
		magazineReloadTime=2;
		autoReload=1;
		ballisticsComputer=1;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		shotfromturret=0;
		memoryPointGun="Lascannon_muzzle";
		class GunParticles
		{
			class effect1
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
			class effect2
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
		};
		class close: manual
		{
			displayname="Twin-linked";
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.34999999;
			midRange=500;
			midRangeProbab=0.77999997;
			maxRange=1000;
			maxRangeProbab=0.039999999;
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			burst=2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.050000001;
			midRange=1000;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
			burst=2;
		};
		class medium: short
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.050000001;
			midRange=1500;
			midRangeProbab=0.57999998;
			maxRange=2000;
			maxRangeProbab=0.039999999;
			burst=1;
		};
		class far: medium
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.050000001;
			midRange=2500;
			midRangeProbab=0.40000001;
			maxRange=3000;
			maxRangeProbab=0.0099999998;
			burst=1;
		};
	};
	class TIOW_Thunderbolt_Missile_Pod1: missiles_SCALPEL
	{
		displayName="Hellstrike Missile (AT, Radar)";
		canLock=2;
		weaponLockDelay=0;
		lockAcquire=1;
		weaponLockSystem=0;
		magazines[]=
		{
			"TIOW_Thunderbolt_Hellstrike_Missiles_x2_P",
			"TIOW_Thunderbolt_Hellstrike_Missiles_x2"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSfired";
				positionName="missile_effect_dir1";
				directionName="missile_effect_pos1";
			};
		};
		class Direct
		{
			reloadTime=0.096000001;
			dispersion=0.00092999998;
			minRange=2000;
			minRangeProbab=0.5;
			midRange=5000;
			midRangeProbab=0.5;
			maxRange=7000;
			maxRangeProbab=0.5;
			showToPlayer=1;
			displayName="Hellstrike Missile (AT, Radar)";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class TIOW_Thunderbolt_Missile_Pod2: missiles_ASRAAM
	{
		displayName="Skystrike Missile (AA, IR)";
		canLock=2;
		weaponLockDelay=0.5;
		weaponLockSystem="2 + 8";
		magazines[]=
		{
			"TIOW_Thunderbolt_Skystrike_Missiles_x2_P"
		};
		holdsterAnimValue=1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSfired";
				positionName="missile_effect_dir1";
				directionName="missile_effect_pos1";
			};
		};
		class Direct
		{
			reloadTime=0.096000001;
			dispersion=0.00092999998;
			minRange=2000;
			minRangeProbab=0.5;
			midRange=5000;
			midRangeProbab=0.5;
			maxRange=7000;
			maxRangeProbab=0.5;
			showToPlayer=1;
			textureType="Direct";
			displayName="Skystrike Missile (AA, IR)";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class ace_hellfire_launcher;
	class xi_hellfire_pylon: ace_hellfire_launcher
	{
		magazines[]=
		{
			"xi_hellfire_3_L",
			"xi_hellfire_3_N",
			"xi_hellfire_3_K"
		};
	};
	class TIOW_Thunderbolt_Missile_Pod3: RocketPods
	{
		displayName="Plasma Missile (HE, Dumb)";
		canLock=2;
		weaponLockDelay=0.5;
		cursor="EmptyCursor";
		cursorAim="rocket";
		magazines[]=
		{
			"TIOW_Thunderbolt_Plasma_Missile_x1_P"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSfired";
				positionName="missile_effect_dir1";
				directionName="missile_effect_pos1";
			};
		};
		class Direct
		{
			reloadTime=0.096000001;
			showToPlayer=1;
			textureType="Direct";
			displayName="Direct";
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
			burst=1;
			aiRateOfFire=0.050000001;
			aiRateOfFireDistance=500;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class TIOW_Thunderbolt_Missile_Pod4: RocketPods
	{
		displayName="Hellfury Missile (Cluster, Dumb)";
		canLock=1;
		weaponLockDelay=2.5;
		weaponLockSystem=4;
		cursor="EmptyCursor";
		cursorAim="rocket";
		magazines[]=
		{
			"TIOW_Thunderbolt_Hellfury_Missile_x1_P"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSfired";
				positionName="missile_effect_dir1";
				directionName="missile_effect_pos1";
			};
		};
		class Direct
		{
			reloadTime=0.096000001;
			showToPlayer=1;
			textureType="Direct";
			displayName="Direct";
			sounds[]=
			{
				"StandardSound"
			};
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.57999998;
			maxRange=1500;
			maxRangeProbab=0.039999999;
			burst=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class TIOW_Thunderbolt_Missile_Pod5: RocketPods
	{
		displayName="500lb Bomb (Bomb, Laser)";
		magazines[]=
		{
			"TIOW_Thunderbolt_500_Bomb_x4_P"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.7782794,
				1.2,
				1600
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class TIOW_Thunderbolt_Missile_Pod6: RocketPods
	{
		displayName="1000lb Bomb (Bomb, Laser)";
		magazines[]=
		{
			"TIOW_Thunderbolt_1000_Bomb_x1_P"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.7782794,
				1.2,
				1600
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class TIOW_Thunderbolt_Missile_Pod7: rockets_Skyfire
	{
		scope=2;
		displayName="Skyfire Rocket Pod (Rocket, Dumb)";
		magazines[]=
		{
			"TIOW_Thunderbolt_Rockets_x19_P"
		};
	};
	class TIOW_MultiLaser_Valk: TIOW_MultiLaser
	{
		magazines[]=
		{
			"TIOW_Mlaser_valk"
		};
		Multiplier=1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
		};
	};
	class TIOW_LsCnn_mkII_v: TIOW_LemanRuss_Lascannon
	{
		magazines[]=
		{
			"TIOW_LsCnn_pc_v"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
		};
	};
	class TIOW_LsCnn_mkII_c;
	class TIOW_LsCnn_mkII_vc: TIOW_LemanRuss_Lascannon
	{
		magazines[]=
		{
			"TIOW_LsCnn_pc_vc"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Lascannon_muzzle";
				directionName="Lascannon_chamber";
			};
		};
	};
	class TIOW_rockets_Skyfire_v: rockets_Skyfire
	{
		scope=2;
		magazines[]=
		{
			"TIOW_38Rnd_80mm_rockets_v"
		};
	};
	class TIOW_LMHb_v: Left_TIOW_IG_HeavyBolter
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="lhbmuz";
				directionName="lhbbrch";
			};
			class Shell
			{
				effectname="HBGunCartridge";
				positionname="LMHb_shell_eject_pos";
				directionname="LMHb_shell_eject_dir";
			};
		};
	};
	class TIOW_RMHb_v: Right_TIOW_IG_HeavyBolter
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="rhbmuz";
				directionName="rhbbrch";
			};
			class Shell
			{
				effectname="HBGunCartridge";
				positionname="RMHb_shell_eject_pos";
				directionname="RMHb_shell_eject_dir";
			};
		};
	};
};
class cfgFactionClasses
{
	class Imperial_Navy_B
	{
		displayName="Imperial Navy";
		priority=3;
		side=1;
		icon="";
	};
	class Imperial_Navy_O: Imperial_Navy_B
	{
		side=0;
	};
	class Imperial_Navy_I: Imperial_Navy_B
	{
		side=2;
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class HitPoints;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class EventHandlers;
		class NewTurret;
		class CargoTurret;
		class Components;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
	class VTOL_02_base_F: VTOL_Base_F
	{
		class AnimationSources;
		class CamShake;
		class camShakeDamage;
		class camShakeGForce;
		class CargoSpec;
		class CargoTurret;
		class Components;
		class Damage;
		class DestructionEffects;
		class EventHandlers;
		class Exhausts;
		class FxExplo;
		class GunClouds;
		class GunFire;
		class HitPoints;
		class MarkerLights;
		class MFD;
		class MGunClouds;
		class MGunFire;
		class NewTurret;
		class NVGMarker;
		class NVGMarkers;
		class pilotCamera;
		class PilotSpec;
		class PulsationSound;
		class Reflectors;
		class RenderTargets;
		class scrubLandInt;
		class SimpleObject;
		class SoundBreath;
		class SoundBreathAutomatic;
		class SoundBreathInjured;
		class SoundBreathSwimming;
		class SoundBurning;
		class SoundChoke;
		class SoundDrown;
		class SoundDrowning;
		class SoundEnvironExt;
		class SoundEquipment;
		class SoundEvents;
		class SoundGear;
		class SoundHitScream;
		class SoundInjured;
		class SoundRecovered;
		class Sounds;
		class SpeechVariants;
		class TextureSources;
		class TransportBackpacks;
		class TransportItems;
		class TransportMagazines;
		class TransportWeapons;
		class Turrets
		{
			class GunnerTurret;
			class ViewGunner;
		};
		class ViewCargo;
		class ViewOptics;
		class ViewPilot;
		class Wheels
		{
			class Wheel_1;
			class Wheel_2;
			class Wheel_3;
			class Wheel_4;
		};
		class WingVortices;
	};
	class TIOW_Valkyrie_Base: VTOL_02_base_F
	{
		author="Sabre One, BattleStad";
		displayName="Valkkyrie Base";
		showCrewAim="1+2+4";
		radarRange=150000;
		canUseScanner=1;
		incomingMissileDetectionSystem="2+4+8+16";
		irScanToEyeFactor=1;
		irScanRangeMin=200;
		irScanRangeMax=10000;
		irScanGround=1;
		irTarget=1;
		irTargetSize=2;
		laserScanner=1;
		laserTarget=0;
		weaponLockSystem="2+4+8+16";
		nvScanner=1;
		radarTarget=1;
		radarTargetSize=2;
		radarType=4;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		airBrakeFrictionCoef=4;
		rudderInfluence=1;
		maxSpeed=550;
		elevatorSensitivity=1;
		aileronSensitivity=1;
		ace_cargo_space=16;
		ace_repair_canRepair=1;
		model="\WHair\Val\model\Valkyrie.p3d";
		armor=350;
		icon="\WHair\Val\ui\icon_valkyrie_ca.paa";
		picture="\WHair\Val\ui\picture_valkyrie_ca.paa";
		driverAction="pilot_plane_Valkyrie";
		driverRightHandAnimName="flight_stick";
		driverLeftHandAnimName="throttle_stick";
		driverRightLegAnimName="pedal_r";
		driverLeftLegAnimName="pedal_l";
		extCameraPosition[]={0,1,-25};
		gun="TIOW_MultiLaser_Valk";
		gunBeg="Lascannon_muzzle";
		gunEnd="Lascannon_chamber";
		gunAimDown=0;
		headAimDown=0;
		enableGPS=1;
		insideSoundCoef=0.2;
		visualTarget=1;
		visualTargetSize=1;
		namesound="veh_air_plane_s";
		memoryPointGun="Lascannon_muzzle";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		weapons[]=
		{
			"TIOW_MultiLaser_Valk",
			"TIOW_rockets_Skyfire_v",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Mlaser_valk",
			"TIOW_38Rnd_80mm_rockets_v",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_leanright",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		cargoGetInAction[]=
		{
			"GetInHigh"
		};
		cargoGetOutAction[]=
		{
			"GetOutHigh"
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		hiddenSelections[]=
		{
			"camo",
			"valkyrie_low_res_parts"
		};
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		transportSoldier=13;
		hideWeaponsCargo=1;
		cargoCanEject=1;
		cargoProxyIndexes[]={4,5,6,7,8,9,10,11,12,13};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",
			1,
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext",
			1.77828,
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext",
			1.77828,
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.1,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432797,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432797,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095701,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095701,
			1,
			100
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
				commanding=-1;
				isCopilot=1;
				primaryGunner=0;
				primaryObserver=1;
				CanEject=1;
				animationSourceBody="pilotcamera_roth_axis";
				animationSourceGun="pilotcamera_rotv_axis";
				gunnerAction="pilot_plane_Valkyrie";
				gunnerInAction="pilot_plane_Valkyrie";
				precisegetinout=1;
				body="pilotcamera";
				gun="pilotcamera_dir";
				memoryPointGun="Lascannon_muzzle";
				selectionFireAnim="";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				memoryPointGunnerOptics="PilotCamera_pos";
				proxyIndex=1;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				gunnerLeftHandAnimName="flight_stick_copilot";
				gunnerRightHandAnimName="throttle_stick_copilot";
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				turretInfoType="RscOptics_UAV_gunner";
				weapons[]={};
				magazines[]={};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="WFOV";
						initAngleX=10;
						minAngleX=-45;
						maxAngleX=25;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						maxHorizontalRotSpeed=3;
						maxVerticalRotSpeed=3;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="MFOV";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="NFOV";
						initFov="(2 / 120)";
						minFov="(2 / 120)";
						maxFov="(2 / 120)";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
			};
			class LeftDoorGun: GunnerTurret
			{
				canEject=1;
				canUseScanner=0;
				isCopilot=0;
				gunnerName="Left Heavy Bolter";
				primaryObserver=0;
				commanding=-3;
				body="mainTurret_2";
				gun="mainGun_2";
				animationSourceBody="mainTurret_2";
				animationSourceGun="mainGun_2";
				proxyType="CPGunner";
				proxyIndex=1;
				gunBeg="HB_gun_beg_l";
				gunEnd="HB_gun_end_l";
				memoryPointGun="HB_muzzle_l";
				selectionFireAnim="HB_muzzleflash_l";
				memoryPointGunnerOutOptics="gunnerview_l";
				memoryPointGunnerOptics="gunnerview_l";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				minElev=-90;
				maxElev=40;
				minTurn=0;
				maxTurn=180;
				initTurn=0;
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
				gunnerForceOptics=0;
				weapons[]=
				{
					"TIOW_LMHb_v"
				};
				magazines[]=
				{
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag"
				};
				soundServo[]={};
				gunnerAction="hb_gunner_valkyrie";
				gunnerInAction="hb_gunner_valkyrie";
				canHideGunner=0;
				turretInfoType="RscWeaponZeroing";
				discreteDistance[]={400,500,600,700,800};
				discreteDistanceInitIndex=0;
				gunnerOutOpticsShowCursor=1;
				gunnerOutForceOptics=0;
				viewGunnerInExternal=0;
				maxHorizontalRotSpeed=3;
				gunnerRightHandAnimName="HB_right_hand_l";
				gunnerLeftHandAnimName="HB_left_hand_l";
				stabilizedInAxes=3;
				memoryPointsGetInGunner="pos left gunner";
				memoryPointsGetInGunnerDir="pos left gunner dir";
				OutGunnerMayFire=1;
				InGunnerMayFire=0;
				isPersonTurret=0;
				disableSoundAttenuation=1;
				startEngine=0;
				primaryGunner=0;
				gunnerUsesPilotView=0;
				gunnerCompartments="Compartment2";
				castGunnerShadow=1;
				ejectDeadGunner=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=10;
						minAngleX=-45;
						maxAngleX=25;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName="M";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						opticsDisplayName="N";
					};
				};
			};
			class RightDoorGun: LeftDoorGun
			{
				isCopilot=0;
				gunnerName="Right Heavy Bolter";
				body="Turret_2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				proxyIndex=2;
				gunBeg="HB_gun_beg_r";
				gunEnd="HB_gun_end_r";
				memoryPointGun="HB_muzzle_r";
				selectionFireAnim="HB_muzzleflash_r";
				memoryPointGunnerOutOptics="gunnerview_r";
				memoryPointGunnerOptics="gunnerview_r";
				minTurn=-180;
				maxTurn=0;
				initTurn=0;
				weapons[]=
				{
					"TIOW_RMHb_v"
				};
				gunnerRightHandAnimName="HB_right_hand_r";
				gunnerLeftHandAnimName="HB_left_hand_r";
				memoryPointsGetInGunner="pos right gunner";
				memoryPointsGetInGunnerDir="pos right gunner dir";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-5;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=30;
						angleRangeVertical=30;
						aimDown=5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=2000;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeVertical=90;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
		};
		class Wheels
		{
			class Wheel_1
			{
				boneName="Wheel_1";
				steering=0;
				side="left";
				center="Wheel_1_center";
				boundary="Wheel_1_rim";
				width=0.28;
				mass=150;
				MOI=3;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=4000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="Wheel_1_center";
				tireForceAppPointOffset="Wheel_1_center";
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=439;
				springStrength=173830;
				springDamperRate=52150.602;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=1;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_2: Wheel_1
			{
				width=0.28;
				maxBrakeTorque=8000;
				boneName="Wheel_2";
				center="Wheel_2_center";
				boundary="Wheel_2_rim";
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				sprungMass=1818;
				springStrength=127288;
				springDamperRate=415861;
				suspForceAppPointOffset="Wheel_2_center";
				tireForceAppPointOffset="Wheel_2_center";
			};
			class Wheel_3: Wheel_2
			{
				boneName="Wheel_3";
				side="right";
				center="Wheel_3_center";
				boundary="Wheel_3_rim";
				suspForceAppPointOffset="Wheel_3_center";
				tireForceAppPointOffset="Wheel_3_center";
			};
			class Wheel_4: Wheel_3
			{
				boneName="Wheel_4";
				side="right";
				center="Wheel_4_center";
				boundary="Wheel_4_rim";
				suspForceAppPointOffset="Wheel_4_center";
				tireForceAppPointOffset="Wheel_4_center";
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="Green";
				author="13th Legion";
				factions[]=
				{
					"Imperial_Navy_B",
					"Imperial_Navy_I",
					"Imperial_Navy_O"
				};
				textures[]=
				{
					"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
					"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
				};
			};
			class Black
			{
				displayName="Black";
				author="13th Legion";
				factions[]=
				{
					"Imperial_Navy_B",
					"Imperial_Navy_I",
					"Imperial_Navy_O"
				};
				textures[]=
				{
					"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa",
					"\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"
				};
			};
			class Grey
			{
				displayName="Grey";
				author="13th Legion";
				factions[]=
				{
					"Imperial_Navy_B",
					"Imperial_Navy_I",
					"Imperial_Navy_O"
				};
				textures[]=
				{
					"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
					"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"Green",
			1,
			"Black",
			1,
			"Grey",
			1
		};
		class Exhausts: Exhausts
		{
			class Exhaust_rear_L
			{
				position="exhaust_l";
				direction="exhaust_l_dir";
				effect="ExhaustsEffectPlane";
			};
			class Exhaust_rear_R: Exhaust_rear_L
			{
				position="exhaust_r";
				direction="exhaust_r_dir";
			};
			class Exhaust_left_1_L: Exhaust_rear_L
			{
				position="exhaust_1_l";
				direction="exhaust_1_l_dir";
			};
			class Exhaust_right_1_L: Exhaust_rear_L
			{
				position="exhaust_1_r";
				direction="exhaust_1_r_dir";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_1_L";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_1_R";
			};
			class RearWingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_2_L";
			};
			class RearWingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_2_R";
			};
		};
		class AnimationSources
		{
			class muzzle_rot_LC
			{
				source="ammorandom";
				weapon="TIOW_LsCnn_mkII_v";
			};
			class muzzle_rot_LC_u
			{
				source="user";
				animPeriod=0.25;
				initPhase=0;
			};
			class muzzle_rot_HB_L
			{
				source="ammorandom";
				weapon="TIOW_LMHb_v";
			};
			class muzzle_rot_HB_R
			{
				source="ammorandom";
				weapon="TIOW_RMHb_v";
			};
			class recoil_HB_L
			{
				source="reload";
				weapon="TIOW_LMHb_v";
			};
			class recoil_HB_R
			{
				source="reload";
				weapon="TIOW_RMHb_v";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="TIOW_rockets_Skyfire_v";
			};
			class SideDoors
			{
				source="user";
				animPeriod=3;
				initPhase=1;
			};
			class GunnerPosHide
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HB_Turn_out
			{
				source="user";
				animPeriod=4;
				initPhase=1;
			};
			class HB_Real_hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class HB_Dummy_hide
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class RearDoorSrc
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class BurnerVibr_L
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class BurnerVibr_R
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
			class BurnersStretch
			{
				source="user";
				animPeriod=3;
				initPhase=1;
			};
			class BurnersWingsStretch
			{
				source="user";
				animPeriod=3;
				initPhase=1;
			};
			class BurnersHide
			{
				source="user";
				animPeriod=4;
				initPhase=1;
			};
			class HideRocketPods
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class HideFuelPods
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class laser_mf_hide
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class canopy_src
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class HidePossessedParts
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		class UserActions
		{
			class OpenRearDoor
			{
				displayName="Open rear door";
				position="pilot_control";
				radius=5;
				onlyForPlayer=1;
				condition="(this animationSourcePhase ""RearDoorSrc"" < 0.1) && (player in [gunner this, driver this])";
				statement="this animateSource [""RearDoorSrc"",1];playSound3D [""WHair\Val\sounds\door_01.ogg"", this, false, getPosASL this, 2];";
			};
			class CloseRearDoor: OpenRearDoor
			{
				displayName="Close rear door";
				condition="(this animationSourcePhase ""RearDoorSrc"" > 0.9) && (player in [gunner this, driver this])";
				statement="this animateSource [""RearDoorSrc"",0];playSound3D [""WHair\Val\sounds\door_01.ogg"", this, false, getPosASL this, 2];";
			};
		};
		class Eventhandlers
		{
			getin="_this execVM '\WHair\Val\scripts\get_in.sqf';";
			getout="_this execVM '\WHair\Val\scripts\get_out.sqf';";
		};
	};
	class TIOW_Valkyrie_Pylon_Base: TIOW_Valkyrie_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		faction="Imperial_Navy_B";
		crew="TIOW_Cad_Tnk836th";
		side=1;
		weapons[]=
		{
			"TIOW_Thunderbolt_LasCannon",
			"TIOW_Thunderbolt_Missile_Pod1",
			"TIOW_Thunderbolt_Missile_Pod2",
			"TIOW_Thunderbolt_Missile_Pod3",
			"TIOW_Thunderbolt_Missile_Pod4",
			"TIOW_Thunderbolt_Missile_Pod5",
			"TIOW_Thunderbolt_Missile_Pod6",
			"TIOW_Thunderbolt_Missile_Pod7",
			"xi_hellfire_pylon",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"TIOW_Thunderbolt_Lascannon_Mag",
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		displayName="Valkyrie->Pylon/Lascannon";
		editorPreview="\WHair\Val\ui\editor_pic_valk_rp_ca.paa";
		fuelCapacity=800;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="";
				class pylons
				{
					class pylons1
					{
						maxweight=50000;
						hardpoints[]=
						{
							"TIOW_THUNDERBOLT_MISSILE_HARDPOINT"
						};
						attachment="TIOW_Thunderbolt_Hellstrike_Missiles_x2_P";
						priority=1;
						UIposition[]={0.2,0.2};
						turret[]={};
					};
					class pylons2: pylons1
					{
						attachment="TIOW_Thunderbolt_Hellstrike_Missiles_x2_P";
						priority=2;
						UIposition[]={0.44999999,0.2};
					};
					class pylons3: pylons1
					{
						attachment="TIOW_Thunderbolt_Hellstrike_Missiles_x2_P";
						priority=2;
						UIposition[]={0.2,0.44999999};
					};
					class pylons4: pylons1
					{
						attachment="TIOW_Thunderbolt_Hellstrike_Missiles_x2_P";
						priority=2;
						UIposition[]={0.44999999,0.44999999};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Multi-Role";
						attachment[]=
						{
							"TIOW_Thunderbolt_Hellstrike_Missiles_x2_P",
							"TIOW_Thunderbolt_Skystrike_Missiles_x2_P"
						};
					};
					class Valkkyrie_Bomber_L
					{
						displayName="Bomber Light";
						attachment[]=
						{
							"TIOW_Thunderbolt_500_Bomb_x4_P",
							"TIOW_Thunderbolt_500_Bomb_x4_P"
						};
					};
					class Valkkyrie_Bomber_H
					{
						displayName="Bomber Heavy";
						attachment[]=
						{
							"TIOW_Thunderbolt_1000_Bomb_x1_P",
							"TIOW_Thunderbolt_1000_Bomb_x1_P"
						};
					};
					class Valkkyrie_AA
					{
						displayName="AA";
						attachment[]=
						{
							"TIOW_Thunderbolt_Skystrike_Missiles_x2_P",
							"TIOW_Thunderbolt_Skystrike_Missiles_x2_P"
						};
					};
					class Valkkyrie_CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"TIOW_Thunderbolt_Hellfury_Missile_x1_P",
							"TIOW_Thunderbolt_Hellstrike_Missiles_x2_P"
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeftSensors
			{
				class Components: components
				{
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
						resource="RscTransportCameraComponentDriver";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRightSensors
			{
				class Components: components
				{
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000};
						showTargetTypes="1+2+4+8+16+32+64+128+256+512+1024";
						resource="RscCustomInfoSensors";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
				};
			};
		};
	};
	class TIOW_Valkyrie_Rockets_Base: TIOW_Valkyrie_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		faction="Imperial_Navy_B";
		crew="TIOW_Cad_Tnk836th";
		side=1;
		weapons[]=
		{
			"TIOW_LsCnn_mkII_v",
			"TIOW_rockets_Skyfire_v",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_LsCnn_pc_v",
			"TIOW_38Rnd_80mm_rockets_v",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		displayName="Valkyrie->Rockets/Lascannon";
		editorPreview="\WHair\Val\ui\editor_pic_valk_rp_ca.paa";
		fuelCapacity=800;
		class AnimationSources: AnimationSources
		{
			class HideRocketPods
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
	};
	class TIOW_Valkyrie_Fuel_Base: TIOW_Valkyrie_Rockets_Base
	{
		displayName="Valkyrie->Fuel/Lascannon";
		editorPreview="\WHair\Val\ui\editor_pic_valk_fp_ca.paa";
		fuelCapacity=1500;
		weapons[]=
		{
			"TIOW_LsCnn_mkII_v",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_LsCnn_pc_v",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources: AnimationSources
		{
			class HideFuelPods
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
	};
	class TIOW_Valkyrie_Rockets_M_Base: TIOW_Valkyrie_Rockets_Base
	{
		displayName="Valkyrie->Rockets/Multilaser";
		weapons[]=
		{
			"TIOW_MultiLaser_Valk",
			"TIOW_rockets_Skyfire_v",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Mlaser_valk",
			"TIOW_38Rnd_80mm_rockets_v",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class TIOW_Valkyrie_Rockets_AC_Base: TIOW_Valkyrie_Rockets_Base
	{
		displayName="Valkyrie->Rockets/Autocannon";
		weapons[]=
		{
			"TIOW_Thunderbolt_AutoCannon60mm",
			"CMFlareLauncher",
			"TIOW_rockets_Skyfire_v"
		};
		magazines[]=
		{
			"TIOW_Thunderbolt_Autocannon60mmAPMag",
			"TIOW_Thunderbolt_Autocannon60mmHEMag",
			"120Rnd_CMFlare_Chaff_Magazine",
			"TIOW_38Rnd_80mm_rockets_v"
		};
	};
	class TIOW_Valkyrie_Pylon_M_Base: TIOW_Valkyrie_Pylon_Base
	{
		displayName="Valkyrie->Pylon/Multilaser";
		weapons[]=
		{
			"TIOW_MultiLaser_Valk",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Mlaser_valk",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class TIOW_Valkyrie_Pylon_AC_Base: TIOW_Valkyrie_Pylon_Base
	{
		displayName="Valkyrie->Pylon/Autocannon Forked";
		weapons[]=
		{
			"TIOW_Thunderbolt_AutoCannon60mm",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Thunderbolt_Autocannon60mmAPMag",
			"TIOW_Thunderbolt_Autocannon60mmHEMag",
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};
	class TIOW_Valkyrie_Fuel_M_Base: TIOW_Valkyrie_Fuel_Base
	{
		displayName="Valkyrie->Fuel/Multilaser";
		weapons[]=
		{
			"TIOW_MultiLaser_Valk",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_Mlaser_valk",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class TIOW_Valkyrie_Fuel_B: TIOW_Valkyrie_Fuel_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Fuel_M_B: TIOW_Valkyrie_Fuel_M_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Pylon_B: TIOW_Valkyrie_Pylon_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Pylon_M_B: TIOW_Valkyrie_Pylon_M_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Pylon_AC_B: TIOW_Valkyrie_Pylon_AC_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ace_repair_canRepair=1;
	};
	class TIOW_Valkyrie_Rocket_B: TIOW_Valkyrie_Rockets_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Rocket_M_B: TIOW_Valkyrie_Rockets_M_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Rocket_AC_B: TIOW_Valkyrie_Rockets_AC_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class TIOW_Valkyrie_Fuel_O: TIOW_Valkyrie_Fuel_B
	{
		faction="Imperial_Navy_O";
		crew="TIOW_Cad_Tnk836th_OP";
		side=0;
	};
	class TIOW_Valkyrie_Fuel_M_O: TIOW_Valkyrie_Fuel_M_B
	{
		faction="Imperial_Navy_O";
		crew="TIOW_Cad_Tnk836th_OP";
		side=0;
	};
	class TIOW_Valkyrie_Rocket_O: TIOW_Valkyrie_Rocket_B
	{
		faction="Imperial_Navy_O";
		crew="TIOW_Cad_Tnk836th_OP";
		side=0;
	};
	class TIOW_Valkyrie_Rocket_M_O: TIOW_Valkyrie_Rocket_M_B
	{
		faction="Imperial_Navy_O";
		crew="TIOW_Cad_Tnk836th_OP";
		side=0;
	};
	class TIOW_Valkyrie_Fuel_I: TIOW_Valkyrie_Fuel_B
	{
		faction="Imperial_Navy_I";
		crew="TIOW_Cad_Tnk836th_Indep";
		side=2;
	};
	class TIOW_Valkyrie_Fuel_M_I: TIOW_Valkyrie_Fuel_M_B
	{
		faction="Imperial_Navy_I";
		crew="TIOW_Cad_Tnk836th_Indep";
		side=2;
	};
	class TIOW_Valkyrie_Rocket_I: TIOW_Valkyrie_Rocket_B
	{
		faction="Imperial_Navy_I";
		crew="TIOW_Cad_Tnk836th_Indep";
		side=2;
	};
	class TIOW_Valkyrie_Rocket_M_I: TIOW_Valkyrie_Rocket_M_B
	{
		faction="Imperial_Navy_I";
		crew="TIOW_Cad_Tnk836th_Indep";
		side=2;
	};
	class Valkyrie_RP_1490th_0: TIOW_Valkyrie_Rockets_Base
	{
		side=0;
		crew="DKoK_Eng_1490th_OP";
		faction="DKoK_1490th_OP";
		displayName="Valkyrie->Rocket pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1490th_0: TIOW_Valkyrie_Fuel_Base
	{
		side=0;
		crew="DKoK_Eng_1490th_OP";
		faction="DKoK_1490th_OP";
		displayName="Valkyrie->Fuel pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1491th_0: TIOW_Valkyrie_Rockets_Base
	{
		side=0;
		crew="DKoK_Eng_1491st_OP";
		faction="DKoK_1491st_OP";
		displayName="Valkyrie->Rocket pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1491th_0: TIOW_Valkyrie_Fuel_Base
	{
		side=0;
		crew="DKoK_Eng_1491st_OP";
		faction="DKoK_1491st_OP";
		displayName="Valkyrie->Fuel pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1489th_1: TIOW_Valkyrie_Rockets_Base
	{
		side=1;
		crew="DKoK_Eng_1489th";
		faction="DKoK_1489th";
		displayName="Valkyrie->Rocket pods, 1489th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1489th_1: TIOW_Valkyrie_Fuel_Base
	{
		side=1;
		crew="DKoK_Eng_1489th";
		faction="DKoK_1489th";
		displayName="Valkyrie->Fuel pods, 1489th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1490th_1: TIOW_Valkyrie_Rockets_Base
	{
		side=1;
		crew="DKoK_Eng_1490th";
		faction="DKoK_1490th";
		displayName="Valkyrie->Rocket pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1490th_1: TIOW_Valkyrie_Fuel_Base
	{
		side=1;
		crew="DKoK_Eng_1490th";
		faction="DKoK_1490th";
		displayName="Valkyrie->Fuel pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1491th_1: TIOW_Valkyrie_Rockets_Base
	{
		side=1;
		crew="DKoK_Eng_1491st";
		faction="DKoK_1491st";
		displayName="Valkyrie->Rocket pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1491th_1: TIOW_Valkyrie_Fuel_Base
	{
		side=1;
		crew="DKoK_Eng_1491st";
		faction="DKoK_1491st";
		displayName="Valkyrie->Fuel pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1489th_2: TIOW_Valkyrie_Rockets_Base
	{
		side=2;
		crew="DKoK_Eng_1489th_Indep";
		faction="DKoK_1489th_Indep";
		displayName="Valkyrie->Rocket pods, 1489th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1489th_2: TIOW_Valkyrie_Fuel_Base
	{
		side=2;
		crew="DKoK_Eng_1489th_Indep";
		faction="DKoK_1489th_Indep";
		displayName="Valkyrie->Fuel pods, 1489th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1490th_2: TIOW_Valkyrie_Rockets_Base
	{
		side=2;
		crew="DKoK_Eng_1490th_Indep";
		faction="DKoK_1490th_Indep";
		displayName="Valkyrie->Rocket pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1490th_2: TIOW_Valkyrie_Fuel_Base
	{
		side=2;
		crew="DKoK_Eng_1490th_Indep";
		faction="DKoK_1490th_Indep";
		displayName="Valkyrie->Fuel pods, 1490th";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"
		};
	};
	class Valkyrie_RP_1491th_2: TIOW_Valkyrie_Rockets_Base
	{
		side=2;
		crew="DKoK_Eng_1491st_Indep";
		faction="DKoK_1491st_Indep";
		displayName="Valkyrie->Rocket pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_FP_1491th_2: TIOW_Valkyrie_Fuel_Base
	{
		side=2;
		crew="DKoK_Eng_1491st_Indep";
		faction="DKoK_1491st_Indep";
		displayName="Valkyrie->Fuel pods, 1491st";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa",
			"\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"
		};
	};
	class Valkyrie_Renegade_Base: TIOW_Valkyrie_Rockets_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		faction="TIOW_Ren_B_O";
		crew="TIOW_O_Ren_B_Crew";
		side=0;
		displayName="Renegade Valkyrie";
		model="\WHair\Val\model\Valkyrie_possessed.p3d";
		editorPreview="\WHair\Val\ui\editor_pic_valk_fp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_possessed_ca.paa",
			"\WHair\Val\DATA\Valkyrie_possessed_low_res_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class HideRocketPods
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class HidePossessedParts
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Hide_eyes
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
			};
			class LeftDoorGun: LeftDoorGun
			{
				weapons[]=
				{
					"TIOW_LMHb_v"
				};
				magazines[]=
				{
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag"
				};
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[]=
				{
					"TIOW_RMHb_v"
				};
				magazines[]=
				{
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag"
				};
			};
		};
	};
	class Valkyrie_Renegade_B: Valkyrie_Renegade_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		faction="TIOW_Ren_B_B";
		crew="TIOW_B_Ren_B_Crew";
		side=1;
	};
	class Valkyrie_Renegade_O: Valkyrie_Renegade_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
	};
	class Valkyrie_Renegade_I: Valkyrie_Renegade_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		faction="TIOW_Ren_B_I";
		crew="TIOW_I_Ren_B_Crew";
		side=2;
	};
	class Valkyrie_Possessed_B_O: Valkyrie_Renegade_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
	};
	class Valkyrie_Possessed_B_B: Valkyrie_Renegade_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		faction="TIOW_Ren_B_B";
		crew="TIOW_B_Ren_B_Crew";
	};
	class Valkyrie_Possessed_B_I: Valkyrie_Renegade_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=2;
		faction="TIOW_Ren_B_I";
		crew="TIOW_I_Ren_B_Crew";
	};
	class Valkyrie_Possessed_BL_O: Valkyrie_Renegade_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=0;
		faction="TIOW_Ren_BL_O";
		crew="TIOW_O_Ren_BL_Crew";
	};
	class Valkyrie_Possessed_BL_B: Valkyrie_Renegade_Base
	{
		side=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_BL_B";
		crew="TIOW_B_Ren_BL_Crew";
	};
	class Valkyrie_Possessed_BL_I: Valkyrie_Renegade_Base
	{
		side=2;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_BL_I";
		crew="TIOW_I_Ren_BL_Crew";
	};
	class Valkyrie_Possessed_G_O: Valkyrie_Renegade_Base
	{
		side=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_G_O";
		crew="TIOW_O_Ren_G_Crew";
	};
	class Valkyrie_Possessed_G_B: Valkyrie_Renegade_Base
	{
		side=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_G_B";
		crew="TIOW_B_Ren_G_Crew";
	};
	class Valkyrie_Possessed_G_I: Valkyrie_Renegade_Base
	{
		side=2;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_G_I";
		crew="TIOW_I_Ren_G_Crew";
	};
	class Valkyrie_Possessed_GR_O: Valkyrie_Renegade_Base
	{
		side=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_GR_O";
		crew="TIOW_O_Ren_GR_Crew";
	};
	class Valkyrie_Possessed_GR_B: Valkyrie_Renegade_Base
	{
		side=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_GR_B";
		crew="TIOW_B_Ren_GR_Crew";
	};
	class Valkyrie_Possessed_GR_I: Valkyrie_Renegade_Base
	{
		side=2;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="TIOW_Ren_GR_I";
		crew="TIOW_I_Ren_GR_Crew";
	};
	class Valkyrie_Looted_0: TIOW_Valkyrie_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="Orks";
		crew="ShootaBoy2_OP";
		side=0;
		displayName="Looted Valkyrie";
		model="\WHair\Val\model\Valkyrie_looted.p3d";
		editorPreview="\WHair\Val\ui\editor_pic_valk_fp_ca.paa";
		weapons[]=
		{
			"TIOW_LsCnn_mkII_vc",
			"bommsLauncha",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"TIOW_LsCnn_pc_vc",
			"4rnd_bommsmag",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
			};
			class LeftDoorGun: LeftDoorGun
			{
				weapons[]=
				{
					"TIOW_LMHb_v"
				};
				magazines[]=
				{
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag"
				};
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[]=
				{
					"TIOW_RMHb_v"
				};
				magazines[]=
				{
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag",
					"TIOW_IG_HeavyBolter_Mag"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\WHair\Val\DATA\Valkyrie_looted_ca.paa",
			"\WHair\Val\DATA\Valkyrie_looted_low_res_ca.paa"
		};
		class Eventhandlers
		{
		};
	};
	class Valkyrie_Looted_1: Valkyrie_Looted_0
	{
		side=1;
		crew="ShootaBoy2";
	};
	class Valkyrie_Looted_2: Valkyrie_Looted_0
	{
		side=2;
		crew="ShootaBoy2_Blu";
	};
};
class cfgMods
{
	author="E_50_Panzer";
	timepacked=1547933903;
};
