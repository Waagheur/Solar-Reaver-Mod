class cfgpatches
{
	class XI_BuffSystem
	{
		author="Jenna";
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"cba_xeh",
			"ace_main",
			"ace_medical"
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class xi_buffs_postinit
	{
		init="call compileScript ['\SR_XI\xi_buffs\xeh_postinit.sqf']";
	};
};
class XI_Buffs
{
	class Speed
	{
		displayname="Speed";
		statement="xi_fnc_speedbuff";
		duration=30;
		cooldown=60;
	};
	class Heal: Speed
	{
		displayname="Heal";
		statement="xi_fnc_speedbuff";
	};
	class Rally: Speed
	{
		displayname="Rally";
		statement="xi_fnc_rallybuff";
	};
};
class cfgfunctions
{
	class xi
	{
		class functions
		{
			class buff
			{
				file="\SR_XI\xi_buffs\functions\fn_buff.sqf";
			};
			class selectbuff
			{
				file="\SR_XI\xi_buffs\functions\fn_selectbuff.sqf";
			};
			class speedbuff
			{
				file="\SR_XI\xi_buffs\functions\fn_speedbuff.sqf";
			};
			class rallybuff
			{
				file="\SR_XI\xi_buffs\functions\fn_rallybuff.sqf";
			};
			class healbuff
			{
				file="\SR_XI\xi_buffs\functions\fn_healbuff.sqf";
			};
		};
	};
};
class cfgweapons
{
	class hgun_Pistol_heavy_01_F;
	class XI_TestGun: hgun_Pistol_heavy_01_F
	{
		displayname="(A- XI) Test Thing";
		baseweapon="XI_TestGun";
		XI_buffs[]=
		{
			"Speed",
			"Heal",
			"Rally"
		};
	};
};
class cfgMods
{
	author="jennderqueer";
	timepacked="1681864524";
};
