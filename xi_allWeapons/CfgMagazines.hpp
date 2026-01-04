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
	class SR_XI_Melta_Mag: ic_melta_canister
	{
		author="";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="SR_XI_Melta_Round";
		displayName="Meltagun Ammo";
		initSpeed=1500;
		count=5;
		mass=30;
	};
	// class XI_Melta_Mag_Super_BIII: ic_melta_canister
	// {
		// author="";
		// scope=2;
		// scopeCurator=2;
		// scopeArsenal=2;
		// ammo="XI_Melta_Super_BIII";
		// displayName="(B/III) Meltagun Ammo (Super)";
		// initSpeed=1500;
		// count=5;
		// mass=60;
	// };
	// class XI_Melta_Mag_Normal_BII: ic_melta_canister
	// {
		// author="";
		// scope=2;
		// scopeCurator=2;
		// scopeArsenal=2;
		// ammo="XI_Melta_Normal_BII";
		// displayName="(B/II) Meltagun Ammo";
		// initSpeed=1500;
		// count=5;
		// mass=30;
	// };
	class TIOW_IG_GL_Smoke_mag;
	class XI_IG_GL_Smoke_White_Mag: TIOW_IG_GL_Smoke_mag
	{
		scope=2;
		displayName="[TSR] [PXI] White Smoke Mag";
		ammo="XI_IG_GL_Smoke_White";
	};
	class XI_IG_UBGL_Smoke_White_Mag_3rnd: TIOW_IG_GL_Smoke_mag
	{
		scope=2;
		displayName="[TSR] [PXI] 3rnd White Smoke Mag";
		ammo="XI_IG_GL_Smoke_White";
		count="3";
		mass=1;
	};
	class XI_IG_UBGL_Smoke_Red_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		scope=2;
		displayName="[TSR] [PXI] 3rnd Red Smoke Mag";
		ammo="XI_IG_GL_Smoke_Red";
		count="3";
	};
	class XI_IG_UBGL_Smoke_Orange_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[TSR] [PXI] 3rnd Orange Smoke Mag";
		ammo="XI_IG_GL_Smoke_Orange";
	};
	class XI_IG_UBGL_Smoke_Blue_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[TSR] [PXI] 3rnd Blue Smoke Mag";
		ammo="XI_IG_GL_Smoke_Blue";
	};
	class XI_IG_UBGL_Smoke_Yellow_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[TSR] [PXI] 3rnd Yellow Smoke Mag";
		ammo="XI_IG_GL_Smoke_Yellow";
	};
	class XI_IG_UBGL_Smoke_Green_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[TSR] [PXI] 3rnd Green Smoke Mag";
		ammo="XI_IG_GL_Smoke_Green";
	};
	class XI_IG_UBGL_Smoke_Purple_Mag_3rnd: XI_IG_UBGL_Smoke_White_Mag_3rnd
	{
		displayName="[TSR] [PXI] 3rnd Purple Smoke Mag";
		ammo="XI_IG_GL_Smoke_Purple";
	};
	
	// class ic_bolt_large_mag;
	// class xi_bolt_large_mag_EW: ic_bolt_large_mag
	// {
		// mass=60;
		// displayName="(EW) Heavy Bolter Magazine";
		// ammo="xi_bolter_round_primary_standard_EW";
	// };
	// class ic_plasma_canister;
	// class XI_PlasmaRifle_Battery_Standard_EW: ic_plasma_canister
	// {
		// displayName="(EW) Plasmaflask";
		// plasmaHeatGeneration=6;
		// minimumPlasmaHeat=26;
		// minimumPlasmaDetonationChance=1;
		// maximumPlasmaDetonationChance=15;
	// };
	// class XI_PlasmaRifle_Battery_Overhcarged_EW: ic_plasma_canister
	// {
		// displayName="Plasma Mag Overcharged (XI)";
		// plasmaHeatGeneration=30;
		// minimumPlasmaHeat=70;
		// minimumPlasmaDetonationChance=5;
		// maximumPlasmaDetonationChance=35;
	// };
	
	// class ic_30rnd_825_rifleMag;
	// class xi_825_standard_mag_BI: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/I) 30rnd Magazine";
		// ammo="xi_standard_825_BI";
		// initSpeed=1000;
		// magazineGroup[]={};
		// mass="20";
		// count=30;
		// tracersEvery=5;
		// lastRoundsTracer=5;
	// };
	// class xi_825_standard_mag_BII: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/II) 45rnd Magazine";
		// ammo="xi_standard_825_BII";
		// initSpeed=1140;
		// magazineGroup[]={};
		// mass="25";
		// count=45;
		// tracersEvery=5;
		// lastRoundsTracer=5;
	// };
	// class xi_825_standard_mag_lmg_BI: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/I) 50rnd Magazine";
		// ammo="xi_standard_825_BI";
		// initSpeed=1090;
		// magazineGroup[]={};
		// mass="25";
		// count=50;
		// tracersEvery=0;
		// lastRoundsTracer=10;
	// };
	// class xi_825_standard_mag_lmg_BII: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/II) 100rnd Magazine";
		// ammo="xi_standard_825_BII";
		// initSpeed=1140;
		// magazineGroup[]={};
		// mass="35";
		// count=100;
		// tracersEvery=5;
		// lastRoundsTracer=10;
	// };
	// class xi_825_standard_mag_lmg_tracers_BII: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/II) 100rnd Magazine T.";
		// ammo="xi_standard_825_BII";
		// initSpeed=1140;
		// magazineGroup[]={};
		// mass="35";
		// count=100;
		// tracersEvery=1;
	// };
	// class xi_12mm_5rnd_Mag_BII: ic_30rnd_825_rifleMag
	// {
		// displayName="(B/II) 5rnd Mag";
		// displaynameshort="5rnd";
		// ammo="xi_standard_12mm_BII";
		// initSpeed=1140;
		// magazineGroup[]={};
		// mass="5";
		// count=5;
	// };
	// class xi_23rnd_autogun_br_BII: ic_30rnd_825_rifleMag
	// {
		// author="Bones";
		// displayName="(B/II) 23rnd Magazine";
		// displaynameshort="23rnd Mag";
		// ammo="xi_autogun_ammo_br_BII";
		// initSpeed=1200;
		// count=23;
		// magazineGroup[]=
		// {
			// ""
		// };
		// mass="30";
	// };
	// class AP_MAG;
	// class XI_AP_EW: AP_MAG
	// {
		// displayName="(E/W) Thunderclap Round";
		// dlc="LAGO";
		// displayNameShort="AP";
		// ammo="xi_20mm_ap_EW";
		// initSpeed=900;
		// count=1;
		// tracersEvery=1;
		// mass=30;
	// };
	// class XI_AP_N_EW: AP_MAG
	// {
		// displayName="(E/W) Penetrator Round";
		// dlc="LAGO";
		// displayNameShort="AP NORMAL";
	// };
	// class 20Rnd_762x51_Mag;
	// class XI_Longlas_Mag_BI: 20Rnd_762x51_Mag
	// {
		// scope=2;
		// scopeArsenal=2;
		// scopeCurator=2;
		// displayName="(B/I) 12chrg Longlas Penetrator Rounds";
		// ammo="XI_longlas_penetrator_BI";
		// count=12;
		// initSpeed=2300;
		// tracersEvery=1;
		// descriptionShort="";
		// mass="15";
		// lastRoundsTracer=10;
	// };
	// class XI_Longlas_Mag_BII: 20Rnd_762x51_Mag
	// {
		// scope=2;
		// scopeArsenal=2;
		// scopeCurator=2;
		// displayName="(B/II) 36chrg Longlas Penetrator Rounds";
		// ammo="XI_longlas_penetrator_BI";
		// count=36;
		// initSpeed=2300;
		// tracersEvery=1;
		// descriptionShort="";
		// mass="30";
		// lastRoundsTracer=10;
	// };
	// class XI_DMR_Mag_BI: 20Rnd_762x51_Mag
	// {
		// displayName="(B/I) 23 chrg High-Brand Lasgun Battery";
		// scope=2;
		// scopeArsenal=2;
		// scopeCurator=2;
		// ammo="XI_dmr_highbandrounds_BI";
		// count=23;
		// initSpeed=2300;
		// tracersEvery=1;
		// descriptionShort="";
		// mass="15";
		// lastRoundsTracer=10;
	// };
	// class XI_DMR_Mag_BII: 20Rnd_762x51_Mag
	// {
		// displayName="(B/II) 46chrg High-Brand Lasgun Battery";
		// scope=2;
		// scopeArsenal=2;
		// scopeCurator=2;
		// ammo="XI_dmr_highbandrounds_BI";
		// count=46;
		// initSpeed=2300;
		// tracersEvery=1;
		// descriptionShort="";
		// mass="30";
		// lastRoundsTracer=10;
	// };
	// class ic_las_powerpack;
	// class xi_laspack_standard_BI: ic_las_powerpack
	// {
		// displayName="(B/I) 40 chrg Lasgun Battery";
		// ammo="xi_standard_lasbolt_BI";
		// initSpeed=900;
		// magazineGroup[]={};
		// count=40;
		// lastRoundsTracer=10;
	// };
	// class xi_laspack_standard_BII: ic_las_powerpack
	// {
		// displayName="(B/II) 80 chrg Lasgun Battery";
		// ammo="xi_standard_lasbolt_BII";
		// initSpeed=950;
		// magazineGroup[]={};
		// count=80;
		// lastRoundsTracer=10;
	// };
	// class ic_hellgun_mag;
	// class xi_hellgun_mag_highband_BI: ic_hellgun_mag
	// {
		// displayName="(B/I) Hellgun Highband rounds";
		// ammo="XI_hellgun_highbandrounds_BI";
		// initSpeed=1300;
		// magazineGroup[]={};
	// };
	// class xi_hellgun_mag_highband_BII: ic_hellgun_mag
	// {
		// displayName="(B/II) Hellgun Highband rounds";
		// ammo="XI_hellgun_highbandrounds_BII";
		// initSpeed=1350;
		// magazineGroup[]={};
	// };
	
	class SatchelCharge_Remote_Mag;
	class MTI_SatchelCharge_Mag: SatchelCharge_Remote_Mag
	{
		scope=2;
		author="author";
		displayName="[TSR] [PXI] Gravitas-Pattern Demo Charge";
		descriptionShort="High-yield explosive";
		ammo="MTI_SatchelCharge_Ammo";
		ace_explosives_setupObject="MTI_SatchelCharge_Place";
		useAction=0;
		mass=30;
	};
	
	
	
	class ic_plasma_canister;
	class SR_XI_Plasma_Mag: ic_plasma_canister
	{
		scope=2;
		author="Waagheur";
		displayName="[TSR] [PXI] Plasma Flask";
		descriptionShort="PlasmaGun flask";
		ammo="TIOW_SM_PlasmagunRound";
		useAction=0;
		mass=30;
		count=50;
		initSpeed=750;
		lastRoundsTracer = 999;
	};
	class TIOW_IGPlasmaPistol_Mag;
	class SR_XI_PlasmaPistol_Mag: TIOW_IGPlasmaPistol_Mag
	{
		scope = 2;
		author="Waagheur";
		displayName="[TSR] [PXI] Plasma Pistol Flask";
		descriptionShort="Plasma Pistol flask";
		ammo="SR_PlasmaPistolRound";
		mass = 6;
		count = 10;
	};
	
	
	
	class ic_30rnd_825_rifleMag;
	class ic_las_powerpack;
	class 20Rnd_762x51_Mag;
	
	class SR_XI_Lasbolt_Mag: ic_las_powerpack
	{
		displayName="100 chrg Lasgun Battery";
		ammo="SR_XI_Lasbolt";
		initSpeed=1150;
		magazineGroup[]={};
		count=100;
		mass="20";
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	
	class SR_XI_Heavy_Lasbolt_Mag: 20Rnd_762x51_Mag
	{
		displayName="60 chrg Heavy Lasgun Battery";
		descriptionShort="";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		ammo="SR_XI_Heavy_Lasbolt";
		count=60;
		initSpeed=1200;
		mass="20";
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	
	class ic_Thracian_mag;
	class SR_XI_SMG_Mag: ic_Thracian_mag
	{
		displayName="60rnd SMG Magazine";
		ammo="SR_XI_SMG_Round";
		initSpeed=950;
		count=60;
		mass="20";
	};
	
	class SR_XI_Stubber_Mag: ic_30rnd_825_rifleMag
	{
		displayName="100rnd Magazine";
		ammo="SR_XI_Stub_Round";
		initSpeed=950;
		magazineGroup[]={};
		mass="40";
		count=100;
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	class SR_XI_Autogun_Mag: ic_30rnd_825_rifleMag
	{
		displayName="40rnd Magazine";
		ammo="SR_XI_Stub_Round";
		initSpeed=950;
		magazineGroup[]={};
		mass="20";
		count=40;
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	
	class SR_XI_BattleRifle_Mag: ic_30rnd_825_rifleMag
	{
		displayName="25rnd Magazine";
		ammo="SR_XI_Stub_Round";
		initSpeed=1000;
		magazineGroup[]={};
		mass="20";
		count=25;
		tracersEvery=1;
		lastRoundsTracer=999;
	};

	class SR_XI_HandCanon_Mag: ic_30rnd_825_rifleMag
	{
		displayName="5rnd Clip";
		displaynameshort="";
		ammo="SR_XI_HandCanon_Round";
		initSpeed=1000;
		magazineGroup[]={};
		mass="5";
		count=5;
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	
	class SR_XI_Longlag_Lasbolt_Mag: 20Rnd_762x51_Mag
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="12chrg Longlas Penetrator Rounds";
		ammo="SR_XI_LongLas_Lasbolt";
		count=12;
		initSpeed=1500;
		descriptionShort="";
		mass="10";
		tracersEvery=1;
		lastRoundsTracer=999;
	};
	
	class Lucius22c_Solid;
	class Lucius22c_Pellet;
	class SR_XI_Lucius22c_Solid: Lucius22c_Solid
	{
		displayName="18rnd Shotgun Slugs";
		count=18;
		mass="10";
	};
	class SR_XI_Lucius22c_Pellet: Lucius22c_Pellet
	{
		displayName="18rnd Shotgun Pellets";
		count=18;
		mass="10";
	};
	
	
	
	
	
	// Grenade Launchers.
	
	class TIOW_Krieg_GL_Buck_mag;
	class TIOW_Krieg_GL_Flare_mag;
	class TIOW_Krieg_GL_Frag_mag;
	class TIOW_Krieg_GL_Krak_mag;
	class TIOW_Krieg_GL_Smoke_mag;
	
	class SR_XI_Heavy_Single_Buck_GL_Mag: TIOW_Krieg_GL_Buck_mag
	{
		displayName="[TSR] [PXI] [Krieg] Buck Round";
		initSpeed = 220;
		ammo="SR_XI_Heavy_GL_Buck_Ammo";
		mass="2";
	};
	class SR_XI_Heavy_Single_Flare_GL_Mag: TIOW_Krieg_GL_Flare_mag
	{
		displayName="[TSR] [PXI] [Krieg] Flare Round";
		initSpeed = 220;
		ammo="SR_XI_Heavy_GL_Flare_Ammo";
		mass="4";
	};
	class SR_XI_Heavy_Single_Frag_GL_Mag: TIOW_Krieg_GL_Frag_mag
	{
		displayName="[TSR] [PXI] [Krieg] Frag Round";
		initSpeed = 220;
		ammo="SR_XI_Heavy_GL_Frag_Ammo";
		mass="4";
	};
	class SR_XI_Heavy_Single_Krak_GL_Mag: TIOW_Krieg_GL_Krak_mag
	{
		displayName="[TSR] [PXI] [Krieg] Krak Round";
		initSpeed = 220;
		ammo="SR_XI_Heavy_GL_Krak_Ammo";
		mass="4";
	};
	class SR_XI_Heavy_Single_Smoke_GL_Mag: TIOW_Krieg_GL_Smoke_mag
	{
		displayName="[TSR] [PXI] [Krieg] Smoke Round";
		initSpeed = 220;
		ammo="SR_XI_Heavy_GL_Smoke_Ammo";
		mass="4";
	};
	
	
	
	class smoll_buck_round;
	class smoll_flare1_round;
	class frag_round_smol;
	class Krak_round_smol;
	class smoll_smoke_round;
	
	class SR_XI_Buck_GL_Mag: smoll_buck_round
	{
		displayName="[TSR] [PXI] [Imperium] Buck Barrel";
		initSpeed = 160;
		ammo="SR_XI_GL_Buck_Ammo";
		mass="20";
	};
	class SR_XI_Flare_GL_Mag: smoll_flare1_round
	{
		displayName="[TSR] [PXI] [Imperium] Flare Barrel";
		initSpeed = 160;
		ammo="SR_XI_GL_Flare_Ammo";
		mass="20";
	};
	class SR_XI_Frag_GL_Mag: frag_round_smol
	{
		displayName="[TSR] [PXI] [Imperium] Frag Barrel";
		initSpeed = 160;
		ammo="SR_XI_GL_Frag_Ammo";
		mass="20";
	};
	class SR_XI_Krak_GL_Mag: Krak_round_smol
	{
		displayName="[TSR] [PXI] [Imperium] Krak Barrel";
		initSpeed = 160;
		ammo="SR_XI_GL_Krak_Ammo";
		mass="20";
	};
	class SR_XI_Smoke_GL_Mag: smoll_smoke_round
	{
		displayName="[TSR] [PXI] [Imperium] Smoke Barrel";
		initSpeed = 160;
		ammo="SR_XI_GL_Smoke_Ammo";
		mass="20";
	};
	
};
