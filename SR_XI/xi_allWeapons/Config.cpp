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
			"A3_Data_F_Decade_Loadorder"
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
			"xi_Autogun_Kyrent"
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
			"MTI_SatchelCharge_Mag"
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
			"MTI_SatchelCharge_Ammo_Scripted"
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
	class XI_longlas_penetrator_BI: B_762x51_Ball
	{
		hit=46;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class XI_dmr_highbandrounds_BI: B_762x51_Ball
	{
		hit=26;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class XI_hellgun_highbandrounds_BI: B_762x51_Ball
	{
		hit=20;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class IC_lasbolt;
	class xi_standard_lasbolt_BI: IC_lasbolt
	{
		hit=14;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class ic_long_825_rnd;
	class xi_standard_825_BI: ic_long_825_rnd
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=17;
		coefGravity=0.0099999998;
		caliber=1;
	};
	class XI_Melta_Normal_BII: IC_melta_rnd
	{
		caliber=90;
	};
	class xi_autogun_ammo_br_BII: B_762x51_Ball
	{
		hit=36;
		coefGravity=0.0099999998;
		caliber=1;
	};
	class xi_standard_12mm_BII: ic_long_825_rnd
	{
		hit=36;
		coefGravity=0.0099999998;
		caliber=1;
	};
	class xi_standard_825_BII: ic_long_825_rnd
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=20;
		coefGravity=0.0099999998;
		caliber=1;
	};
	class xi_standard_lasbolt_BII: IC_lasbolt
	{
		hit=15.5;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class XI_hellgun_highbandrounds_BII: B_762x51_Ball
	{
		hit=22;
		coefGravity=0.0099999998;
		airFriction=0;
		caliber=1;
	};
	class XI_Melta_Super_BIII: IC_melta_rnd
	{
		caliber=90;
		hit=1200;
		timeToLive=0.34999999;
	};
	class 20mm_AP;
	class xi_20mm_ap_EW: 20mm_AP
	{
		ACE_caliber=70;
		hit=1200;
	};
	class xi_bolter_round_primary_standard_EW: IC_bolter_small_rnd
	{
		hit=100;
	};
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
	class ic_melta_canister;
	class XI_Melta_Mag_Super_BIII: ic_melta_canister
	{
		author="";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="XI_Melta_Super_BIII";
		displayName="(B/III) Meltagun Ammo (Super)";
		initSpeed=1500;
		count=5;
		mass=60;
	};
	class XI_Melta_Mag_Normal_BII: ic_melta_canister
	{
		author="";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="XI_Melta_Normal_BII";
		displayName="(B/II) Meltagun Ammo";
		initSpeed=1500;
		count=5;
		mass=30;
	};
	class TIOW_IG_GL_Smoke_mag;
	class XI_IG_GL_Smoke_White_Mag: TIOW_IG_GL_Smoke_mag
	{
		scope=2;
		displayName="[XI] White Smoke Mag";
		ammo="XI_IG_GL_Smoke_White";
	};
	class XI_IG_UBGL_Smoke_White_Mag_3rnd: TIOW_IG_GL_Smoke_mag
	{
		scope=2;
		displayName="[XI] 3rnd White Smoke Mag";
		ammo="XI_IG_GL_Smoke_White";
		count="3";
		mass=1;
	};
	class XI_IG_UBGL_Smoke_Red_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		scope=2;
		displayName="[XI] 3rnd Red Smoke Mag";
		ammo="XI_IG_GL_Smoke_Red";
		count="3";
	};
	class XI_IG_UBGL_Smoke_Orange_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[XI] 3rnd Orange Smoke Mag";
		ammo="XI_IG_GL_Smoke_Orange";
	};
	class XI_IG_UBGL_Smoke_Blue_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[XI] 3rnd Blue Smoke Mag";
		ammo="XI_IG_GL_Smoke_Blue";
	};
	class XI_IG_UBGL_Smoke_Yellow_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[XI] 3rnd Yellow Smoke Mag";
		ammo="XI_IG_GL_Smoke_Yellow";
	};
	class XI_IG_UBGL_Smoke_Green_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[XI] 3rnd Green Smoke Mag";
		ammo="XI_IG_GL_Smoke_Green";
	};
	class XI_IG_UBGL_Smoke_Purple_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[XI] 3rnd Purple Smoke Mag";
		ammo="XI_IG_GL_Smoke_Purple";
	};
	class ic_bolt_large_mag;
	class xi_bolt_large_mag_EW: ic_bolt_large_mag
	{
		mass=60;
		displayName="(EW) Heavy Bolter Magazine";
		ammo="xi_bolter_round_primary_standard_EW";
	};
	class ic_plasma_canister;
	class XI_PlasmaRifle_Battery_Standard_EW: ic_plasma_canister
	{
		displayName="(EW) Plasmaflask";
		plasmaHeatGeneration=6;
		minimumPlasmaHeat=26;
		minimumPlasmaDetonationChance=1;
		maximumPlasmaDetonationChance=15;
	};
	class XI_PlasmaRifle_Battery_Overhcarged_EW: ic_plasma_canister
	{
		displayName="Plasma Mag Overcharged (XI)";
		plasmaHeatGeneration=30;
		minimumPlasmaHeat=70;
		minimumPlasmaDetonationChance=5;
		maximumPlasmaDetonationChance=35;
	};
	class ic_30rnd_825_rifleMag;
	class xi_825_standard_mag_BI: ic_30rnd_825_rifleMag
	{
		displayName="(B/I) 30rnd Magazine";
		ammo="xi_standard_825_BI";
		initSpeed=1000;
		magazineGroup[]={};
		mass="20";
		count=30;
		tracersEvery=5;
		lastRoundsTracer=5;
	};
	class xi_825_standard_mag_BII: ic_30rnd_825_rifleMag
	{
		displayName="(B/II) 45rnd Magazine";
		ammo="xi_standard_825_BII";
		initSpeed=1140;
		magazineGroup[]={};
		mass="25";
		count=45;
		tracersEvery=5;
		lastRoundsTracer=5;
	};
	class xi_825_standard_mag_lmg_BI: ic_30rnd_825_rifleMag
	{
		displayName="(B/I) 50rnd Magazine";
		ammo="xi_standard_825_BI";
		initSpeed=1090;
		magazineGroup[]={};
		mass="25";
		count=50;
		tracersEvery=0;
		lastRoundsTracer=10;
	};
	class xi_825_standard_mag_lmg_BII: ic_30rnd_825_rifleMag
	{
		displayName="(B/II) 100rnd Magazine";
		ammo="xi_standard_825_BII";
		initSpeed=1140;
		magazineGroup[]={};
		mass="35";
		count=100;
		tracersEvery=5;
		lastRoundsTracer=10;
	};
	class xi_825_standard_mag_lmg_tracers_BII: ic_30rnd_825_rifleMag
	{
		displayName="(B/II) 100rnd Magazine T.";
		ammo="xi_standard_825_BII";
		initSpeed=1140;
		magazineGroup[]={};
		mass="35";
		count=100;
		tracersEvery=1;
	};
	class xi_12mm_5rnd_Mag_BII: ic_30rnd_825_rifleMag
	{
		displayName="(B/II) 5rnd Mag";
		displaynameshort="5rnd";
		ammo="xi_standard_12mm_BII";
		initSpeed=1140;
		magazineGroup[]={};
		mass="5";
		count=5;
	};
	class xi_23rnd_autogun_br_BII: ic_30rnd_825_rifleMag
	{
		author="Bones";
		displayName="(B/II) 23rnd Magazine";
		displaynameshort="23rnd Mag";
		ammo="xi_autogun_ammo_br_BII";
		initSpeed=1200;
		count=23;
		magazineGroup[]=
		{
			""
		};
		mass="30";
	};
	class AP_MAG;
	class XI_AP_EW: AP_MAG
	{
		displayName="(E/W) Thunderclap Round";
		dlc="LAGO";
		displayNameShort="AP";
		ammo="xi_20mm_ap_EW";
		initSpeed=900;
		count=1;
		tracersEvery=1;
		mass=30;
	};
	class XI_AP_N_EW: AP_MAG
	{
		displayName="(E/W) Penetrator Round";
		dlc="LAGO";
		displayNameShort="AP NORMAL";
	};
	class 20Rnd_762x51_Mag;
	class XI_Longlas_Mag_BI: 20Rnd_762x51_Mag
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="(B/I) 12chrg Longlas Penetrator Rounds";
		ammo="XI_longlas_penetrator_BI";
		count=12;
		initSpeed=2300;
		tracersEvery=1;
		descriptionShort="";
		mass="15";
		lastRoundsTracer=10;
	};
	class XI_Longlas_Mag_BII: 20Rnd_762x51_Mag
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="(B/II) 36chrg Longlas Penetrator Rounds";
		ammo="XI_longlas_penetrator_BI";
		count=36;
		initSpeed=2300;
		tracersEvery=1;
		descriptionShort="";
		mass="30";
		lastRoundsTracer=10;
	};
	class XI_DMR_Mag_BI: 20Rnd_762x51_Mag
	{
		displayName="(B/I) 23 chrg High-Brand Lasgun Battery";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		ammo="XI_dmr_highbandrounds_BI";
		count=23;
		initSpeed=2300;
		tracersEvery=1;
		descriptionShort="";
		mass="15";
		lastRoundsTracer=10;
	};
	class XI_DMR_Mag_BII: 20Rnd_762x51_Mag
	{
		displayName="(B/II) 46chrg High-Brand Lasgun Battery";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		ammo="XI_dmr_highbandrounds_BI";
		count=46;
		initSpeed=2300;
		tracersEvery=1;
		descriptionShort="";
		mass="30";
		lastRoundsTracer=10;
	};
	class ic_las_powerpack;
	class xi_laspack_standard_BI: ic_las_powerpack
	{
		displayName="(B/I) 40 chrg Lasgun Battery";
		ammo="xi_standard_lasbolt_BI";
		initSpeed=900;
		magazineGroup[]={};
		count=40;
		lastRoundsTracer=10;
	};
	class xi_laspack_standard_BII: ic_las_powerpack
	{
		displayName="(B/II) 80 chrg Lasgun Battery";
		ammo="xi_standard_lasbolt_BII";
		initSpeed=950;
		magazineGroup[]={};
		count=80;
		lastRoundsTracer=10;
	};
	class ic_hellgun_mag;
	class xi_hellgun_mag_highband_BI: ic_hellgun_mag
	{
		displayName="(B/I) Hellgun Highband rounds";
		ammo="XI_hellgun_highbandrounds_BI";
		initSpeed=1300;
		magazineGroup[]={};
	};
	class xi_hellgun_mag_highband_BII: ic_hellgun_mag
	{
		displayName="(B/II) Hellgun Highband rounds";
		ammo="XI_hellgun_highbandrounds_BII";
		initSpeed=1350;
		magazineGroup[]={};
	};
	class SatchelCharge_Remote_Mag;
	class MTI_SatchelCharge_Mag: SatchelCharge_Remote_Mag
	{
		scope=2;
		author="author";
		displayName="[XI] Gravitas-Pattern Demo Charge";
		descriptionShort="High-yield explosive";
		ammo="MTI_SatchelCharge_Ammo";
		ace_explosives_setupObject="MTI_SatchelCharge_Place";
		useAction=0;
		mass=30;
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
		displayName="[XI] Gravitas-Pattern Explosive Device";
	};
	class ACE_Explosives_Place_SatchelCharge;
	class MTI_SatchelCharge_Place: ACE_Explosives_Place_SatchelCharge
	{
		author="Mokka";
		displayName="[XI] Gravitas-Pattern Explosive Device";
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
		displayName="'[PXI] TESTING";
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
				compatibleItems[]={};
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
		displayName="[XI] Mars Pattern lasgun";
		descriptionShort="[XI] Mars Pattern lasgun";
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
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
		};
		magazineReloadSwitchPhase=0.47999999;
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
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosightNM"
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
			"FullAuto"
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
	};
	// class XI_Mars_lasgun_Shield: Rifle_Base_F
	// {
		// author="Bones";
		// scope=0;
		// displayName="'[XI] Testing Shield/Mars";
		// descriptionShort="[XI] Mars Pattern lasgun";
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
		// magazineReloadSwitchPhase=0.47999999;
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
		displayName="'[NCO] Mars-Pattern w/GL (PXI)";
		descriptionShort="[XI] Mars Pattern lasgun";
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
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
		};
		magazineWell[]={};
		magazineReloadSwitchPhase=0.47999999;
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
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"optic_MRCO",
					"optic_HAMR",
					"jmsfall_aog_scope_1",
					"optic_Holosight",
					"dm_m36holosightNM",
					"dm_M362xSightNM"
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
			"FullAuto"
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
		displayName="'[PXI][A] Aquilifer Pattern Autogun Base";
		escriptionShort="Bread is fat";
		model="xi_allWeapons\XI_autogun.p3d";
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
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
		};
		magazineWell[]={};
		magazineReloadSwitchPhase=0.47999999;
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
					"dm_m36holosight"
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
		// magazineReloadSwitchPhase=0.47999999;
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
		// displayName="'[XI][A] Aquilifer-Pattern Autogun/War ";
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
		// magazineReloadSwitchPhase=0.47999999;
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
		model="xi_allWeapons\XI_autogun.p3d";
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
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
		};
		magazineWell[]={};
		magazineReloadSwitchPhase=0.47999999;
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
					"dm_m362xsight"
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
		magazineReloadSwitchPhase=0.40000001;
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
				compatibleItems[]={};
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
		displayName="'[XI] Carnifex-Pattern Boltgun";
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
		displayName="'[XI] Carnifex-Pattern Boltgun, Kyrent";
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
		displayName="'[XI] XI Bolt Pistol (War)";
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
		displayName="'[S] Taurus-Patern Light Stubber (PXI)";
		descriptionShort="[XI] Bullpup LMG";
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
			"xi_825_standard_mag_lmg_BI",
			"xi_825_standard_mag_lmg_BII",
			"xi_825_standard_mag_lmg_tracers_BII"
		};
		magazineReloadSwitchPhase=0.47999999;
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
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Holosight",
					"dm_m36holosight"
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
		displayName="'[XI][A] Imperious Handcannon [B/II]";
		descriptionShort="[XI] Revolver";
		picture="\XI_lasgun\UI\MarsPattern.paa";
		UiPicture="\XI_lasgun\UI\MarsPattern.paa";
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
		reloadAction="GestureReloadPistolHeavy02";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",
			0.56234133,
			1,
			10
		};
		magazineWell[]={};
		magazines[]=
		{
			"xi_12mm_5rnd_Mag_BII"
		};
		magazineReloadSwitchPhase=0.47999999;
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
				compatibleItems[]={};
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
			reloadTime=0.19599999;
			dispersion=0.00034999999;
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
		displayName="'[S] Pilum-Variant DMR (PXI)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"XI_DMR_Mag_BI",
			"XI_DMR_MAG_BII"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.56999999,0.44999999};
				compatibleItems[]=
				{
					"optic_hamr",
					"optic_erco_blk_f"
				};
				iconScale=0.1;
			};
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
		displayName="'[XI][L] Rubicon Variant Kantrael";
		picture="\IC_weapons_base\Rifles\M36_Kantrael\data\ic_kantrael_ca.paa";
		UiPicture="\IC_weapons_base\Rifles\M36_Kantrael\data\ic_kantrael_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xi_allWeapons\data\base\kantrael_xi_g_new.paa"
		};
		magazines[]=
		{
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
		};
		magazineWell[]={};
	};
	class WRS_Weapon_AR;
	class pxi_wrsAR_onagerBase: WRS_Weapon_AR
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		baseWeapon="";
		displayName="'[PXI][A] Onager Autogun";
		Magazines[]=
		{
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
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
					"dm_m36holosight"
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
		displayName="'[PXI][A] Pugio Autogun";
		Magazines[]=
		{
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
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
					"dm_m36holosight"
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
		displayName="'[PXI][A] Malleus Autogun";
		Magazines[]=
		{
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
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
					"dm_m36holosightNM",
					"dm_m362xsightNM"
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
		displayName="'[PXI][A] Cultro Autogun";
		Magazines[]=
		{
			"xi_825_standard_mag_BI",
			"xi_825_standard_mag_BII"
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
					"dm_m362xsight"
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
			"xi_23rnd_autogun_br_BII"
		};
		magazineWell[]={};
		modes[]=
		{
			"FullAuto",
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
		displayName="'[PXI][A] M36 Lasgun";
		magazines[]=
		{
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
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
					"dm_m36holosight"
				};
			};
		};
	};
	class dm_M36ModularV3;
	class pxi_m36DMCarbine_base: dm_M36ModularV3
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI][A] M36 Carbine";
		magazines[]=
		{
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
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
					"dm_m36holosight"
				};
			};
		};
	};
	class dm_M36ModularV2;
	class pxi_m36DMGalaxy_base: dm_M36ModularV2
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="'[PXI][A] M36 Galaxy";
		magazines[]=
		{
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
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
					"dm_m36holosight"
				};
			};
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
			"xi_laspack_standard_BI",
			"xi_laspack_standard_BII"
		};
		magazineWell[]={};
	};
	class srifle_DMR_02_sniper_F;
	class XI_longlas_base: srifle_DMR_02_sniper_F
	{
		author="Bones";
		scope=0;
		displayName="[XI] Longlas Pattern lasgun";
		descriptionShort="[XI] Longlas Pattern lasgun";
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
			"XI_Longlas_Mag_BI",
			"xi_longlas_mag_BII"
		};
		magazineReloadSwitchPhase=0.47999999;
		initSpeed=2300;
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
					"optic_DMS",
					"optic_Nightstalker",
					"optic_tws",
					"jmsfall_wonyeonts12x_scope",
					"jmsfall_talon8x_scope"
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
		displayName="'[S] Pilum-Variant, Mars-Pattern LongLas (PXI)";
	};
	class ic_cad_melta;
	class XI_Melta_Rebalance: ic_cad_melta
	{
		displayName="'[AT] Ignis-Variant Meltagun (PXI)";
		magazines[]=
		{
			"XI_Melta_Mag_Normal_BII"
		};
		magazineWell[]={};
	};
	class TIOW_Shotgun;
	class XI_Shotgun: TIOW_Shotgun
	{
		displayName="'[AP] Combat Shotgun (PXI)";
		magazines[]=
		{
			"Lucius22c_Solid",
			"Lucius22c_Pellet"
		};
		magazineWell[]={};
		scope=2;
	};
	class ic_cad_bolter;
	class XI_Augustus_P: ic_cad_bolter
	{
		displayName="'[NCO] Augustus-Pattern Personal Bolter (NCO)";
		magazines[]=
		{
			"ic_bolt_small_mag"
		};
		magazineWell[]={};
		scope=2;
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
			displayName="[XI] Gravitas-Pattern Demo Charge";
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
		displayName="'[T1] Rubicon Lasgun (PXI)";
	};
	class pxi_PugioAutogun_T1: pxi_wrsAUG_pugioBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T1] Pugio Autogun (PXI)";
	};
	class pxi_m36Lasgun_T1: pxi_m36DM_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T1] M36 Lasgun (PXI)";
	};
	class pxi_m36Carbine_T1: pxi_m36DMCarbine_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T1] M36 Lasgun (Carbine) (PXI)";
	};
	class pxi_m36Galaxy_T1: pxi_m36DMGalaxy_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T1] M36 Lasgun (Galaxy) (PXI)";
	};
	class pxi_onagerAutogun_T2: pxi_wrsAR_onagerBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T2] Onager Autogun (PXI)";
	};
	class pxi_ArcusAutogun_T2: XI_icpAgripinaa_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T2] Arcus Autogun (PXI)";
	};
	class pxi_marsLasgun_T3: XI_Mars_lasgun_base
	{
		scope=2;
		displayName="'[T3] Mars Lasrifle (PXI)";
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
					"dm_m36holosightNM",
					"dm_m362xsightNM"
				};
			};
		};
	};
	class pxi_aquiliferAutogun_T3: XI_autogun
	{
		scope=2;
		displayName="'[T3] Aquilifer Autogun (PXI)";
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
					"dm_m362xsight"
				};
			};
		};
	};
	class pxi_malleusAutogun_T3: pxi_JMSFALL_malleusBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T3] Malleus Autogun (PXI)";
	};
	class pxi_cultroAutogun_T3: pxi_JMSFALL_cultroBase
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="'[T3] Cultro Autogun (PXI)";
	};
	class xi_Autogun_Kyrent: XI_autogun
	{
		scope=2;
		author="Rogue771";
		displayName="'[C] Aquilifer Pattern Autogun, Kyrent (PXI)";
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
					"dm_m362xsight"
				};
			};
		};
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
