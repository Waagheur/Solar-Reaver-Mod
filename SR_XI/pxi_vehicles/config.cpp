class CfgPatches
{
	class pxi_vehicles_r
	{
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F",
			"A3_Air_F_EPC_Plane_CAS_02",
			"A3_Armor_F_Beta",
			"IC_weapons_base",
			"IC_Chimera"
		};
		units[]=
		{
			"pxi_Basilisk"
		};
		weapons[]={};
	};
};
class CfgEditorSubcategories
{
	class xi_subcat_artillery
	{
		displayName="Artillery";
	};
};
class cfgWeapons
{
	class IC_mortar_155mm;
	class pxi_mortar_155mm: IC_mortar_155mm
	{
		scope=1;
		displayName="[PXI] Basilisk 155 mm";
		magazines[]=
		{
			"32Rnd_155mm_Mo_shells",
			"32Rnd_155mm_Mo_shells_O",
			"6Rnd_155mm_Mo_smoke",
			"6Rnd_155mm_Mo_smoke_O",
			"2Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided_O",
			"2Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG_O",
			"6Rnd_155mm_Mo_mine",
			"6Rnd_155mm_Mo_mine_O",
			"2Rnd_155mm_Mo_Cluster",
			"2Rnd_155mm_Mo_Cluster_O",
			"6Rnd_155mm_Mo_AT_mine",
			"6Rnd_155mm_Mo_AT_mine_O",
			"DRA_2Rnd_155mm_Mo_DPICM"
		};
	};
};
class CfgVehicles
{
	class Turrets;
	class MainTurret;
	class CommanderOptics;
	class newTurret;
	class IC_Basilisk_01_desert;
	class pxi_Basilisk: IC_Basilisk_01_desert
	{
		side=1;
		scope=2;
		scopeCurator=2;
		faction="xi_legion_fac";
		editorCategory="XI_categ_editor";
		editorSubcategory="xi_subcat_artillery";
		crew="IC_CAD_TANKER_02_inf_836_B";
		displayName="Basilisk";
		typicalCargo[]=
		{
			"O_crew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"IC_Chimera\data\hull2_8th_co.paa",
			"IC_Chimera\data\chimera_tracks_8th_co.paa",
			"IC_Chimera\data\turret2_8th_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerForceOptics=1;
						gunnerAction="Gunner_MBT_02_arty_F_out";
						gunnerInAction="Gunner_MBT_02_arty_F_in";
					};
				};
				viewGunnerInExternal=1;
				forceHideGunner=1;
				proxyIndex=2;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerAction="Gunner_MBT_02_arty_F_out";
				gunnerInAction="Gunner_MBT_02_arty_F_in";
				selectionFireAnim="";
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				weapons[]=
				{
					"pxi_mortar_155mm"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells_O",
					"2Rnd_155mm_Mo_guided_O",
					"6Rnd_155mm_Mo_mine_O",
					"2Rnd_155mm_Mo_Cluster_O",
					"6Rnd_155mm_Mo_smoke_O",
					"4Rnd_155mm_Mo_LG_O",
					"6Rnd_155mm_Mo_AT_mine_O",
					"DRA_2Rnd_155mm_Mo_DPICM"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.158489,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.158489,
					1,
					50
				};
				minElev=-5;
				maxElev=89;
				initElev=10;
				maxCamElev=30;
				elevationMode=3;
				maxHorizontalRotSpeed=0.77999997;
				maxVerticalRotSpeed=0.25999999;
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				turretInfoType="RscWeaponRangeArtilleryAuto";
				gunnerForceOptics=1;
				commanding=1;
			};
			class Hull_turret: newTurret
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
				gunnerRightHandAnimName="";
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
			};
		};
	};
};
