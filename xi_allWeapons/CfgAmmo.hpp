class CfgAmmo
{
	class Default;
	class BulletBase;
	class IC_melta_rnd;
	class TIOW_PlasmagunRound;
	class B_762x51_Ball;
	class IC_bolter_small_rnd;
	class SmokeShell;
	class XI_IG_GL_Smoke_White: SmokeShell
	{
		explosive=1;
		explosionEffects="XI_ImpactSmokeWhiteEffect";
		fuseDistance=0;
		explosionTime=0;
		deflecting=5;
		deflectionSlowdown=0.28;
		simulation="shotShell";
		craterEffects="";
		craterWaterEffects="ImpactEffectsWater";
		explosionSoundEffect="";
		SoundSetExplosion[]=
		{
			""
		};
		soundHit[]=
		{
			"",
			1,
			1,
			45
		};
		soundHit1[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit4[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit5[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit6[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
	};
	class XI_IG_GL_Smoke_Red: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokeRedEffect";
	};
	class XI_IG_GL_Smoke_Orange: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokeOrangeEffect";
	};
	class XI_IG_GL_Smoke_Blue: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokeBlueEffect";
	};
	class XI_IG_GL_Smoke_Purple: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokePurpleEffect";
	};
	class XI_IG_GL_Smoke_Green: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokeGreenEffect";
	};
	class XI_IG_GL_Smoke_Yellow: XI_IG_GL_Smoke_White
	{
		explosionEffects="XI_ImpactSmokeYellowEffect";
	};
	// class XI_longlas_penetrator_BI: B_762x51_Ball
	// {
		// hit=46;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class XI_dmr_highbandrounds_BI: B_762x51_Ball
	// {
		// hit=26;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class XI_hellgun_highbandrounds_BI: B_762x51_Ball
	// {
		// hit=20;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class IC_lasbolt;
	// class xi_standard_lasbolt_BI: IC_lasbolt
	// {
		// hit=14;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class ic_long_825_rnd;
	// class xi_standard_825_BI: ic_long_825_rnd
	// {
		// model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		// hit=17;
		// coefGravity=0.0099999998;
		// caliber=1;
	// };
	// class XI_Melta_Normal_BII: IC_melta_rnd
	// {
		// caliber=90;
	// };
	// class xi_autogun_ammo_br_BII: B_762x51_Ball
	// {
		// hit=36;
		// coefGravity=0.0099999998;
		// caliber=1;
	// };
	// class xi_standard_12mm_BII: ic_long_825_rnd
	// {
		// hit=36;
		// coefGravity=0.0099999998;
		// caliber=1;
	// };
	// class xi_standard_825_BII: ic_long_825_rnd
	// {
		// model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		// hit=20;
		// coefGravity=0.0099999998;
		// caliber=1;
	// };
	// class xi_standard_lasbolt_BII: IC_lasbolt
	// {
		// hit=15.5;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class XI_hellgun_highbandrounds_BII: B_762x51_Ball
	// {
		// hit=22;
		// coefGravity=0.0099999998;
		// airFriction=0;
		// caliber=1;
	// };
	// class XI_Melta_Super_BIII: IC_melta_rnd
	// {
		// caliber=90;
		// hit=1200;
		// timeToLive=0.34999999;
	// };
	// class 20mm_AP;
	// class xi_20mm_ap_EW: 20mm_AP
	// {
		// ACE_caliber=70;
		// hit=1200;
	// };
	// class xi_bolter_round_primary_standard_EW: IC_bolter_small_rnd
	// {
		// hit=100;
	// };
	class SatchelCharge_Remote_Ammo;
	class MTI_SatchelCharge_Ammo: SatchelCharge_Remote_Ammo
	{
		ace_explosives_explosive="MTI_SatchelCharge_Ammo_Scripted";
		ace_explosives_magazine="MTI_SatchelCharge_Mag";
		defaultMagazine="MTI_SatchelCharge_Mag";
		model="ic_weapons_base\Grenades\charge.p3d";
		mineModelDisabled="ic_weapons_base\Grenades\charge.p3d";
		hit=24000;
		indirectHit=24000;
		indirectHitRange=5;
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		SoundSetExplosion[]=
		{
			"BigIED_Exp_SoundSet",
			"BigIED_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		whistleDist=30;
		mineInconspicuousness=3;
		mineTrigger="RemoteTrigger";
	};
	class MTI_SatchelCharge_Ammo_Scripted: MTI_SatchelCharge_Ammo
	{
	};
	
	class IC_lasbolt;
	class ic_long_825_rnd;
	
	class SR_XI_Lasbolt: IC_lasbolt
	{
		hit=14;
		coefGravity=0.0099999998;
		caliber=1;
		typicalSpeed = 1150;
	};
	
	class IC_Thracian_rnd;
	class SR_XI_SMG_Round: IC_Thracian_rnd
	{
		hit=20;
		caliber=1;
		typicalSpeed = 950;
	};
	
	class SR_XI_Heavy_Lasbolt: IC_lasbolt
	{
		hit=20;
		coefGravity=0.0099999998;
		caliber=1;
		typicalSpeed = 1200;
	};
	
	class SR_XI_Stub_Round: ic_long_825_rnd
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=26;
		caliber=1;
		typicalSpeed = 950;
	};
	class SR_XI_OC_Lasbolt: IC_lasbolt
	{
		hit=26;
		coefGravity=0.0099999998;
		caliber=1;
		typicalSpeed = 1200;
	};
	
	class SR_XI_Heavy_Stub_Round: ic_long_825_rnd
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=32;
		caliber=1;
		typicalSpeed = 1000;
	};
	class SR_XI_OC_Heavy_Lasbolt: IC_lasbolt
	{
		hit=32;
		coefGravity=0.0099999998;
		caliber=1;
		typicalSpeed = 1250;
	};
	
	class SR_XI_HandCanon_Round: ic_long_825_rnd
	{
		hit=36;
		coefGravity=0.5;
		caliber=2;
		typicalSpeed = 1000;
	};

	class SR_XI_LongLas_Lasbolt: B_762x51_Ball
	{
		hit=58;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
		typicalSpeed = 800;
	};
	
	class SR_XI_Melta_Round: IC_melta_rnd
	{
		caliber=90;
		hit=1200;
		timeToLive=0.34999999;
	};
	
	
	
	
	
	// Grenade Launchers.
	
	class TIOW_IG_GL_Buck_ammo;
	class TIOW_IG_GL_Flare_ammo;
	class TIOW_IG_GL_Frag_ammo;
	class TIOW_IG_GL_Krak_ammo;
	class TIOW_IG_GL_Smoke_ammo;
	
	class SR_XI_Heavy_GL_Buck_Ammo: TIOW_IG_GL_Buck_ammo
	{
		caliber = 2;
		hit = 60;
		indirectHit = 5;
		indirectHitRange = 0;
	};
	class SR_XI_Heavy_GL_Flare_Ammo: TIOW_IG_GL_Flare_ammo
	{
	};
	class SR_XI_Heavy_GL_Frag_Ammo: TIOW_IG_GL_Frag_ammo
	{
		caliber = 2;
		hit = 80;
		indirectHit = 40;
		indirectHitRange = 8;
	};
	class SR_XI_Heavy_GL_Krak_Ammo: TIOW_IG_GL_Krak_ammo
	{
		caliber = 40;
		hit = 4000;
		indirectHit = 3000;
		indirectHitRange = 1.5;
	};
	class SR_XI_Heavy_GL_Smoke_Ammo: TIOW_IG_GL_Smoke_ammo
	{
	};
	
	
	
	class smoll_shotgun_shels;
	class smoll_flare1_ammo;
	class Smol_frag;
	class Krak_Smol_Standart;
	class smoll_smoke_ammo;
	
	class SR_XI_GL_Buck_Ammo: smoll_shotgun_shels
	{
		caliber = 1;
		hit = 26;
		indirectHit = 10;
		indirectHitRange = 0;
	};
	class SR_XI_GL_Flare_Ammo: smoll_flare1_ammo
	{
	};
	class SR_XI_GL_Frag_Ammo: Smol_frag
	{
		caliber = 2;
		hit = 40;
		indirectHit = 24;
		indirectHitRange = 5;
	};
	class SR_XI_GL_Krak_Ammo: Krak_Smol_Standart
	{
		caliber = 40;
		hit = 3200;
		indirectHit = 3000;
		indirectHitRange = 1;
	};
	class SR_XI_GL_Smoke_Ammo: smoll_smoke_ammo
	{
	};
	
	
};
