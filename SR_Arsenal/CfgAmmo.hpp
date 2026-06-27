class TIOW_SM_Plasmagun_Mag;
class TIOW_CombiPlas_Mag;
class Steve_30k_CombiPlas_Mag;
class TIOW_Melta_Ammo;
class Steve_30k_Lascutter_Round;
class TIOW_LemanRuss_Lascannon_Rnd;

class Steve_Phob_Atrox_SmBoltRound;

class R_MRAAWS_HEAT_F;

class Steve_SM_Grav_Mag_Rnd;
class Steve_Volkite_Cav_Rnd;
class Steve_Volkite_Charger_Rnd;
class Steve_Volkite_Culv_Rnd;

class IC_Frag_Missile;
class IC_Krakk_Missile;
class TIOW_SM_Rocket_Frag_Round;
class TIOW_SM_Rocket_Krak_Round;
class TIOW_SM_Rocket_Frag_Round_LSLOT;
class TIOW_SM_Rocket_Krak_Round_LSLOT;

class Grenade;

class CfgAmmo
{
	class SR_Meltagun_Ammo: TIOW_Melta_Ammo
	{
		hit=1200;
		timeToLive=0.17;
	};
	class SR_Master_Crafted_Meltagun_Ammo: SR_Meltagun_Ammo
	{
		hit=1200;
		timeToLive=0.215;
	};
	class SR_Lascutter_Round: Steve_30k_Lascutter_Round
	{
		displayName="[TSR] lascutter Round";
		timeToLive=0.079999998;
	};
	class SR_LasFusil_Rnd: TIOW_LemanRuss_Lascannon_Rnd
	{
		hit = 100;
		explosionEffects = "TIOW_BoltRoundRoundExplosion";
		effectFly = "SR_LasFusil_Beam";
		indirectHit = 1;
		indirectHitRange = 0.4;
		caliber = 3;
	};
	class TIOW_SM_PlasmagunRound;
	class Sh_120mm_HE;
	// Currently unused
	class SR_PlasmagunRound: TIOW_SM_PlasmagunRound // B_20mm
	{
		hit = 80;
		typicalSpeed = 1050;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "AP";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmagunRound: TIOW_SM_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 240; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 80;
		// Origin : 2.5
		indirectHitRange = 5;
		typicalSpeed = 1140;
		warheadName = "HE";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 300;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
		
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	class SR_PlasmaPistolRound: TIOW_SM_PlasmagunRound
	{
		hit = 70;
		typicalSpeed = 1050;
		indirectHit = 20;
		indirectHitRange = 1.5;
		warheadName = "AP";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmapistolRound: TIOW_SM_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 200; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 60;
		// Origin : 2.5
		indirectHitRange = 3;
		typicalSpeed = 1140;
		warheadName = "HE";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 250;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
		
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	
	
	
	class SR_Steve_Phob_Atrox_SmBoltRound: Steve_Phob_Atrox_SmBoltRound
	{
		hit=70;
		caliber=4;
		coefGravity = 0.25;
		typicalSpeed=1200;
	};
	
	
	
	// Disposable rocket. This is a krak round.
	class SR_Disposable_Rocket_Ammo: R_MRAAWS_HEAT_F
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		airLock=1;
		effectsMissile="missile3";
		allowAgainstInfantry=1;
		cost=1;
		class CamShakeExplode
		{
		};
		class CamShakeFire
		{
		};
		class CamShakeHit
		{
		};
		class CamShakePlayerFire
		{
		};
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	
	class SR_Light_Frag_Missile_Round_LSLOT: TIOW_SM_Rocket_Frag_Round_LSLOT
	{
		airLock = 0;
		manualControl = 1;
		
		hit = 120;
		indirectHit = 60;
		indirectHitRange = 40;
	};
	
	class SR_Light_Frag_Missile_Round: TIOW_SM_Rocket_Frag_Round
	{
		hit = 120;
		indirectHit = 60;
		indirectHitRange = 40;
	};
	
	
	
	class SR_SM_Grav_Mag_Rnd : Steve_SM_Grav_Mag_Rnd
	{
		ACE_bulletLength = 102;
		ACE_bulletMass = 80.4;
		ACE_caliber = 16;
		caliber = 1.4;
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = 160;
		deflectionDirDistribution = 0.39;
		deflectionSlowDown = 0.8;
		directionalExplosion = 0;
		explosionAngle = 60;
		explosionForceCoef = 1;
		explosive = 0.65;
		hit = 65;
		indirectHit = 20;
		indirectHitRange = 3;
		typicalSpeed = 1050;
	};
	class SR_Volkite_Cav_Rnd : Steve_Volkite_Cav_Rnd
	{
		hit = 60;
		typicalSpeed = 1050;
		caliber = 1.4;
		explosive = 0;
		ACE_caliber = 16;
		ACE_bulletLength = 102;
		ACE_bulletMass = 75.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Volkite_Charger_Rnd : Steve_Volkite_Charger_Rnd
	{
		hit = 80;
		typicalSpeed = 1050;
		caliber = 1.4;
		explosive = 0;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Volkite_Culv_Rnd : Steve_Volkite_Culv_Rnd
	{	
		hit = 450;
		indirectHit = 25;
		indirectHitRange = 0.4;
		typicalSpeed = 1000;
		caliber = 105;
	};
	
	
	
	// SR missiles
	
	class SR_IC_Frag_Missile: IC_Frag_Missile
	{
		airLock = 0;
		manualControl = 1;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 250;
		indirectHit = 80;
		indirectHitRange = 25;
	};
	class SR_IC_Krakk_Missile: IC_Krakk_Missile
	{
		airLock = 0;
		manualControl = 1;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	class SR_TIOW_SM_Rocket_Frag_Round_LSLOT: TIOW_SM_Rocket_Frag_Round_LSLOT
	{
		airLock = 0;
		manualControl = 1;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 250;
		indirectHit = 80;
		indirectHitRange = 25;
	};
	class SR_TIOW_SM_Rocket_Krak_Round_LSLOT: TIOW_SM_Rocket_Krak_Round_LSLOT
	{
		airLock = 0;
		manualControl = 1;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	
	// SM Rockets
	
	class SR_TIOW_SM_Rocket_Frag_Round: TIOW_SM_Rocket_Frag_Round
	{
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 250;
		indirectHit = 80;
		indirectHitRange = 25;
	};
	class SR_TIOW_SM_Rocket_Krak_Round: TIOW_SM_Rocket_Krak_Round
	{
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	
	// Visibomb missiles
	
	class SR_VB_IC_Frag_Missile: IC_Frag_Missile
	{
		airLock = 0;
		manualControl = 0;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 250;
		indirectHit = 80;
		indirectHitRange = 25;
	};
	class SR_VB_IC_Krakk_Missile: IC_Krakk_Missile
	{
		airLock = 0;
		manualControl = 0;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	class SR_VB_TIOW_SM_Rocket_Frag_Round_LSLOT: TIOW_SM_Rocket_Frag_Round_LSLOT
	{
		airLock = 0;
		manualControl = 0;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 250;
		indirectHit = 80;
		indirectHitRange = 25;
	};
	class SR_VB_TIOW_SM_Rocket_Krak_Round_LSLOT: TIOW_SM_Rocket_Krak_Round_LSLOT
	{
		airLock = 0;
		manualControl = 0;
		thrust = 45;
		thrustTime = 0.5;
		timeToLive = 60;
		
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 0.3;
		submunitionAmmo = "";
	};
	
	
	
	class SR_Ammo_Rad_Grenade: Grenade
	{
		hit=1;
		indirectHit=0.5;
		indirectHitRange=12;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		soundHit[] = {"",1,1};
	};
	class SR_Ammo_Earthshaker_Grenade: Grenade
	{
		hit=1;
		indirectHit=0.5;
		indirectHitRange=16;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	class SR_Ammo_Stasis_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Tanglefoot_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Antigrav_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Vortex_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=8;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		timeToLive = 300;
		explosionTime = 8;
	};
};