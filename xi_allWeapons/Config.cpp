class CfgPatches
{
	class xi_allWeapons
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"ace_explosives",
			"A3_Characters_F",
			"A3_Data_F_Mark",
			"IC_weapons_base",
			"Cadian_Weapons",
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Armor_F_Beta",
			"A3_Data_F_Decade_Loadorder",
			"SR_Arsenal",
			"TIOW_Spec_Weps",
			"Wbk_Improved40Weapons_OverridCfg_Krieg"
		};
		vehicles[]={};
		units[]={};
		weapons[]=
		{
			"pxi_wrsAR_onagerBase",
			"pxi_onagerAutogun_T2",
			"XI_Mars_lasgun_wGl",
			"XI_autogun_GL",
			"xi_BoltPistol",
			"xi_BoltPistol_Kyrent",
			"xi_BoltPistolWar",
			"XI_bullPup_base",
			"XI_RevolverA_base",
			"XI_lucius_dmr",
			"XI_Pugio_SMG",
			"xi_longlas_standard",
			"XI_Shotgun",
			"XI_Augustus_P",
			"XI_Mars_Variant_Lasgun",
			"pxi_aquiliferAutogun_T1",
			"pxi_RubiconLasgun_T1",
			"pxi_PugioAutogun_T1",
			"pxi_m36Lasgun_T1",
			"pxi_m36Carbine_T1",
			"pxi_m36Galaxy_T1",
			"pxi_ArcusAutogun_T2",
			"pxi_marsLasgun_T3",
			"pxi_aquiliferAutogun_T3",
			"pxi_malleusAutogun_T3",
			"pxi_cultroAutogun_T3",
			"xi_Autogun_Kyrent",
			"SR_XI_SMG",
			"SR_XI_TIOW_KriegLauncher",
			"SR_XI_Imperator_ira"
		};
		magazines[]=
		{
			"XI_Melta_Mag_Super_BIII",
			"XI_Melta_Mag_Normal_BII",
			"XI_IG_GL_Smoke_White_Mag",
			"XI_IG_UBGL_Smoke_White_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Red_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Orange_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Blue_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Yellow_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Green_Mag_3rnd",
			"XI_IG_UBGL_Smoke_Purple_Mag_3rnd",
			"XI_Longlas_Mag_BI",
			"XI_Longlas_Mag_BII",
			"XI_DMR_Mag_BI",
			"XI_DMR_Mag_BII",
			"MTI_SatchelCharge_Mag",
			"SR_XI_SMG_Mag",
			"SR_XI_Heavy_Single_Buck_GL_Mag",
			"SR_XI_Heavy_Single_Flare_GL_Mag",
			"SR_XI_Heavy_Single_Frag_GL_Mag",
			"SR_XI_Heavy_Single_Krak_GL_Mag",
			"SR_XI_Heavy_Single_Smoke_GL_Mag",
			"SR_XI_Buck_GL_Mag",
			"SR_XI_Flare_GL_Mag",
			"SR_XI_Frag_GL_Mag",
			"SR_XI_Krak_GL_Mag",
			"SR_XI_Smoke_GL_Mag"
		};
		ammo[]=
		{
			"XI_IG_GL_Smoke_White",
			"XI_IG_GL_Smoke_Red",
			"XI_IG_GL_Smoke_Orange",
			"XI_IG_GL_Smoke_Blue",
			"XI_IG_GL_Smoke_Purple",
			"XI_IG_GL_Smoke_Green",
			"XI_IG_GL_Smoke_Yellow",
			"XI_longlas_penetrator_BI",
			"XI_dmr_highbandrounds_BI",
			"XI_hellgun_highbandrounds_BI",
			"xi_standard_lasbolt_BI",
			"xi_standard_825_BI",
			"XI_Melta_Normal_BII",
			"xi_autogun_ammo_br_BII",
			"xi_standard_12mm_BII",
			"xi_standard_825_BII",
			"xi_standard_lasbolt_BII",
			"XI_hellgun_highbandrounds_BII",
			"XI_Melta_Super_BIII",
			"xi_20mm_ap_EW",
			"xi_bolter_round_primary_standard_EW",
			"MTI_SatchelCharge_Ammo",
			"MTI_SatchelCharge_Ammo_Scripted",
			"SR_XI_SMG_Round",
			"SR_XI_Heavy_GL_Buck_Ammo",
			"SR_XI_Heavy_GL_Flare_Ammo",
			"SR_XI_Heavy_GL_Frag_Ammo",
			"SR_XI_Heavy_GL_Krak_Ammo",
			"SR_XI_Heavy_GL_Smoke_Ammo",
			"SR_XI_GL_Buck_Ammo",
			"SR_XI_GL_Flare_Ammo",
			"SR_XI_GL_Frag_Ammo",
			"SR_XI_GL_Krak_Ammo",
			"SR_XI_GL_Smoke_Ammo"
		};
	};
};



class CfgFunctions
{
	class xi_allWeapons
	{
		class Hack
		{
			file = "xi_allWeapons\functions";
			class las_overcharge_main {
				//file = "xi_allWeapons\functions\fn_las_overcharge_main.sqf";
			};
			class las_overcharge_init {
				postInit 	= 1;
				//file = "xi_allWeapons\functions\fn_las_overcharge_init.sqf";
			};
		};
	};
};

// Shotgun preinit
class Extended_PreInit_EventHandlers
{
	class SR_XI_WH40OverrideInit_WBK
	{
		init="call compile preprocessFileLineNumbers '\xi_allWeapons\XEH_preInit.sqf'";
	};
};

// Sped up TIOW shotgun anims
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	
	class ManActions
	{
		SR_XI_WH_ShotGun_AfterFire[]=
		{
			"SR_XI_WH_ShotGun_AfterFire",
			"Gesture"
		};
		SR_XI_WH_ShotGun_Reload_LowShells[]=
		{
			"SR_XI_WH_ShotGun_Reload_LowShells",
			"Gesture"
		};
		SR_XI_Handcanon_Reload[]=
		{
			"SR_XI_Handcanon_Reload",
			"Gesture"
		};
	};
	
};
class CfgGesturesMale
{
	class Default;
	skeletonName="OFP2_ManSkeleton";
	class States
	{
		class SR_XI_WH_ShotGun_AfterFire: Default
		{
			file="WBK_Improved40KWeapons\anims\WH_ShotGun_AfterFire.rtm";
			speed=-0.20;
			looped=0;
			mask="handsWeapon";
			headBobStrength=-0.2;
			headBobMode=1;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.072992697,1,0.10218978,0,0.92240876,0,0.99890512,1};
		};
		class SR_XI_WH_ShotGun_Reload_LowShells: Default
		{
			file="WBK_Improved40KWeapons\anims\WH_ShotGun_Reload_LowShells.rtm";
			speed=-3.0;
			looped=0;
			mask="handsWeapon";
			headBobStrength=-1;
			headBobMode=1;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.0129927,1,0.032189779,0,0.92240876,0,0.99890512,1};
		};
		class GestureReloadPistolHeavy02;
		class SR_XI_Handcanon_Reload: GestureReloadPistolHeavy02
		{
			speed = 0.82;
		};
	};
};

class XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect
	{
		simulation="particles";
		type="XI_ImpactSmokeWhiteEffect";
		qualityLevel=-1;
		lifetime=240;
		position[]={0,0,0};
		start=-1;
		enabled=1;
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeWhiteEffect";
	};
	class SmokeShelWhiteUW: SmokeEffect
	{
		type="SmokeShellWhiteUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellWhite2UW";
	};
};
class XI_ImpactSmokeRedEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokeRedEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeRedEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellRedUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellRed2UW";
	};
};
class XI_ImpactSmokeGreenEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokeGreenEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeGreenEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellGreenUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellGreen2UW";
	};
};
class XI_ImpactSmokeYellowEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokeYellowEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeYellowEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellYellowUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellYellow2UW";
	};
};
class XI_ImpactSmokePurpleEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokePurpleEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokePurpleEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellPurpleUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellPurple2UW";
	};
};
class XI_ImpactSmokeBlueEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokeBlueEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeBlueEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellBlueUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellBlue2UW";
	};
};
class XI_ImpactSmokeOrangeEffect: XI_ImpactSmokeWhiteEffect
{
	class SmokeEffect: SmokeEffect
	{
		type="XI_ImpactSmokeOrangeEffect";
	};
	class SmokeEffect2: SmokeEffect
	{
		type="XI_ImpactSmokeOrangeEffect2";
	};
	class SmokeShellUW: SmokeEffect
	{
		type="SmokeShellOrangeUW";
	};
	class SmokeShellUW2: SmokeEffect
	{
		type="SmokeShellOrange2UW";
	};
};
class CfgCloudlets
{
	class SmokeShellWhite;
	class XI_ImpactSmokeWhiteEffect: SmokeShellWhite
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
	};
	class XI_ImpactSmokeRedEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class XI_ImpactSmokeGreenEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class XI_ImpactSmokeYellowEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class XI_ImpactSmokePurpleEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class XI_ImpactSmokeBlueEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class XI_ImpactSmokeOrangeEffect: XI_ImpactSmokeWhiteEffect
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
	class SmokeShellWhite2;
	class XI_ImpactSmokeWhiteEffect2: SmokeShellWhite2
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={1,1,1,1};
	};
	class XI_ImpactSmokeRedEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class XI_ImpactSmokeGreenEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.21250001,0.62580001,0.48910001,1};
	};
	class XI_ImpactSmokeYellowEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.98830003,0.86059999,0.071900003,1};
	};
	class XI_ImpactSmokePurpleEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.4341,0.1388,0.41440001,1};
	};
	class XI_ImpactSmokeBlueEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.1183,0.1867,1,1};
	};
	class XI_ImpactSmokeOrangeEffect2: XI_ImpactSmokeWhiteEffect2
	{
		colorCoef[]={0.66970003,0.22750001,0.10053,1};
	};
};
class CfgSounds
{
	sounds[]={};
	class SR_XI_WBK_WH_shotgun_pump
	{
		name="SR_XI_WBK_WH_shotgun_pump";
		sound[]=
		{
			"\xi_allWeapons\sounds\shotgun_pump.wav",
			"db+6",
			1
		};
		titles[]={};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class LongLas_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"LongLas_Closure_SoundShader",
			"LongLas_closeShot_SoundShader",
			"LongLas_midShot_SoundShader",
			"LongLas_distShot_SoundShader"
		};
	};
	class INEEDMOREBOOLETS_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"INEEDMOREBOOLETS_Closure_SoundShader",
			"INEEDMOREBOOLETS_closeShot_SoundShader",
			"INEEDMOREBOOLETS_midShot_SoundShader",
			"INEEDMOREBOOLETS_distShot_SoundShader"
		};
	};
	class BullPup_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Bullpup_Closure_SoundShader",
			"BullPup_closeShot_SoundShader",
			"BullPup_midShot_SoundShader",
			"BullPup_distShot_SoundShader"
		};
	};
	class Revolver_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Revolver_Closure_SoundShader",
			"Revolver_closeShot_SoundShader",
			"Revolver_midShot_SoundShader",
			"Revolver_distShot_SoundShader"
		};
	};
	class MarsPattern_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MarsPattern_Closure_SoundShader",
			"MarsPattern_closeShot_SoundShader",
			"MarsPattern_midShot_SoundShader",
			"MarsPattern_distShot_SoundShader"
		};
	};
	class XIBolter_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"XIBolter_Closure_SoundShader",
			"XIBolter_closeShot_SoundShader",
			"XIBolter_midShot_SoundShader",
			"XIBolter_distShot_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class LongLas_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			}
		};
		volume=0.30000001;
		range=5;
	};
	class LongLas_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class LongLas_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			}
		};
		volume=0.79432797;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class LongLas_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\LongLas.ogg",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class Bullpup_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			}
		};
		volume=1;
		range=5;
	};
	class BullPup_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class BullPup_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class BullPup_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			},
			
			{
				"\xi_allWeapons\bullpupLMG\Sounds\BullPup.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class Revolver_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			}
		};
		volume=1;
		range=5;
	};
	class Revolver_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Revolver_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class Revolver_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			},
			
			{
				"\xi_allWeapons\Revolver\Sounds\xiRevolver.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class MarsPattern_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			}
		};
		volume=0.30000001;
		range=5;
	};
	class MarsPattern_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class MarsPattern_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			}
		};
		volume=0.79432797;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class MarsPattern_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			},
			
			{
				"\xi_allWeapons\marsLasgun\Sounds\MarsPattern.ogg",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class XIBolter_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			}
		};
		volume=0.446684;
		range=5;
	};
	class XIBolter_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class XIBolter_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			}
		};
		volume=0.79432797;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class XIBolter_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			},
			
			{
				"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\huuh.ogg",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class INEEDMOREBOOLETS_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			}
		};
		volume=0.30000001;
		range=5;
	};
	class INEEDMOREBOOLETS_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class INEEDMOREBOOLETS_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			}
		};
		volume=0.79432797;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class INEEDMOREBOOLETS_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			},
			
			{
				"\xi_allWeapons\longlas\Sounds\boolets.ogg",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
};

class CfgVehicles
{
	class SatchelCharge_F;
	class MTI_SatchelCharge: SatchelCharge_F
	{
		author="Mokka";
		_generalMacro="MTI_SatchelCharge";
		ammo="MTI_SatchelCharge_Ammo";
		model="ic_weapons_base\Grenades\charge.p3d";
		displayName="[TSR] [PXI] Gravitas-Pattern Explosive Device";
	};
	class ACE_Explosives_Place_SatchelCharge;
	class MTI_SatchelCharge_Place: ACE_Explosives_Place_SatchelCharge
	{
		author="Mokka";
		displayName="[TSR] [PXI] Gravitas-Pattern Explosive Device";
		model="ic_weapons_base\Grenades\charge.p3d";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgRecoils
{
	class Default;
	class recoil_default: Default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class xi_recoil_rubicon_lasgun: recoil_default
	{
		muzzleOuter[]={0.2,0.2,0.23,0.23};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.0099999998;
		temporary=0.0099999998;
	};
	class xi_recoil_kinetic: recoil_default
	{
		muzzleOuter[]={0.2,0.2,0.23,0.23};
		kickBack[]={0.050000001,0.079999998};
		permanent=0.0099999998;
		temporary=0.0099999998;
	};
};
class XtdGearModels
{
	class cfgWeapons
	{
		class pxi_xtd_t1weapons
		{
			label="TIER 1 WEAPONS";
			author="";
			options[]=
			{
				"camo"
			};
			class camo
			{
				changeingame=0;
				values[]=
				{
					"a",
					"b",
					"c",
					"d",
					"e",
					"f",
					"g",
					"h",
					"i"
				};
				class a
				{
					label="TESTING 1";
				};
				class b
				{
					label="TESTING 2";
				};
			};
		};
	};
};





#include "CfgAmmo.hpp"

#include "CfgMagazines.hpp"

#include "CfgWeapons.hpp"