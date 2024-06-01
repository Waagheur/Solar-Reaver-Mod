class cfgpatches
{
	class pxi_statics
	{
		author="XI Dev Team";
		units[]=
		{
			"pxi_s_refort_GS_Rebalance",
			"pxi_s_refort_GSML_Rebalance",
			"pxi_s_refort_GSL_Rebalance"
		};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F"
		};
		magazines[]={};
	};
};
class cfgMagazines
{
	class TIOW_IG_HeavyBolter_Mag;
	class pxi_TIOW_HeavyBolter_Rebalance_Mag: TIOW_IG_HeavyBolter_Mag
	{
		count=1000;
	};
};
class Mode_FullAuto;
class MGun;
class CfgWeapons
{
	class TIOW_IG_HeavyBolter;
	class pxi_TIOW_HeavyBolter_Rebalance: TIOW_IG_HeavyBolter
	{
		displayName="eat my ass (DO NOT RC)";
		modes[]=
		{
			"close",
			"far"
		};
		class manual: MGun
		{
			class StandardSound
			{
				begin1[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					1.58489,
					1,
					2100
				};
				begin2[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
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
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
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
		class close: manual
		{
			showToPlayer=0;
			reloadTime=0.039999999;
			burst=1;
			minRange=1;
			minRangeProbab=1;
			midRange=250;
			midRangeProbab=1;
			maxRange=500;
			maxRangeProbab=1;
			dispersion=0.001;
		};
		class far: close
		{
			reloadTime=0.5;
			burst=1;
			minRange=501;
			minRangeProbab=1;
			midRange=950;
			midRangeProbab=1;
			maxRange=1500;
			maxRangeProbab=1;
			dispersion=0.0080000004;
		};
		magazines[]=
		{
			"pxi_TIOW_HeavyBolter_Rebalance_Mag"
		};
	};
	class ML700_Multilas;
	class pxi_GDA_MultiLas_Rebalance: ML700_Multilas
	{
		displayName="eat my ass (DO NOT RC)";
		modes[]=
		{
			"close",
			"far"
		};
		class LowROF: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"ML700_Multilas_Shot_SoundSet",
					"ML700_Multilas_Tail_Base_SoundSet"
				};
			};
			soundContinuous=0;
			autoFire=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			burst=15;
			showToPlayer=1;
			reloadTime=0.029999999;
			dispersion=0.0060000001;
			aiRateOfFire=0.050000001;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: LowROF
		{
			showToPlayer=0;
			reloadTime=0.029999999;
			burst=16;
			minRange=1;
			minRangeProbab=1;
			midRange=250;
			midRangeProbab=1;
			maxRange=500;
			maxRangeProbab=1;
			dispersion=0.0060000001;
		};
		class far: close
		{
			reloadTime=0.079999998;
			burst=60;
			minRange=501;
			minRangeProbab=1;
			midRange=950;
			midRangeProbab=1;
			maxRange=1500;
			maxRangeProbab=1;
			dispersion=0.0080000004;
		};
		magazines[]=
		{
			"ML700_2000_multilas_magazine_pylon"
		};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class turrets;
	class mainturret;
	class components;
	class DefaultVehicleSystemsDisplayManagerLeft;
	class GuardianSentry;
	class pxi_s_refort_GS_Rebalance: GuardianSentry
	{
		displayname="[SENTRY] HEAVY BOLTER (DO NOT RC)";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		class Turrets: turrets
		{
			class MainTurret: mainturret
			{
				class Components: components
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
								range[]={2000};
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
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				minelev=-25;
				maxelev=2.5;
				minturn=-130;
				maxturn=130;
				initElev=0;
				initTurn=0;
				weapons[]=
				{
					"pxi_TIOW_HeavyBolter_Rebalance"
				};
				magazines[]=
				{
					"pxi_TIOW_HeavyBolter_Rebalance_Mag",
					"pxi_TIOW_HeavyBolter_Rebalance_Mag",
					"pxi_TIOW_HeavyBolter_Rebalance_Mag",
					"pxi_TIOW_HeavyBolter_Rebalance_Mag",
					"pxi_TIOW_HeavyBolter_Rebalance_Mag",
					"pxi_TIOW_HeavyBolter_Rebalance_Mag"
				};
			};
		};
	};
	class GuardianSentryLascannon;
	class pxi_s_refort_GSML_Rebalance: GuardianSentryLascannon
	{
		displayname="[SENTRY] MULTILAS (DO NOT RC)";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		class Turrets: turrets
		{
			class MainTurret: mainturret
			{
				class Components: components
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
								range[]={2000};
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
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				minelev=-25;
				maxelev=2.5;
				minturn=-130;
				maxturn=130;
				initElev=0;
				initTurn=0;
				weapons[]=
				{
					"pxi_GDA_MultiLas_Rebalance"
				};
				magazines[]=
				{
					"ML700_2000_multilas_magazine_pylon",
					"ML700_2000_multilas_magazine_pylon",
					"ML700_2000_multilas_magazine_pylon"
				};
			};
		};
	};
	class pxi_s_refort_GSL_Rebalance: GuardianSentryLascannon
	{
		displayname="[SENTRY] LASCANNON (DO NOT RC)";
		side=0;
		scope=2;
		faction="xi_opf_faction";
		editorcategory="xi_opfor_Generic";
		editorsubcategory="xi_opf_statics";
		class Turrets: turrets
		{
			class MainTurret: mainturret
			{
				class Components: components
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
								range[]={2000};
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
								range[]={2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				minelev=-25;
				maxelev=2.5;
				minturn=-130;
				maxturn=130;
				initElev=0;
				initTurn=0;
			};
		};
	};
};
