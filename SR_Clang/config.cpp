class CfgPatches
{
	class SR_Clang
	{
		requiredAddons[]=
		{
			"IC_Cadia",
			"IC_ace_compatability"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{
		};
		
		skipWhenMissingDependencies = 1;
	};
};

// Try to silence some of those damn errors

class B_9x21_Ball;

class CfgAmmo
{

};

class CfgMagazine 
{

};

class IC_CAD_inf_836_B;
class IC_Pilot_blue_B;

class CfgVehicles
{
	class IC_Pilot_blue_B: IC_CAD_inf_836_B 
	{
		weapons[]=
		{
			"ic_stub_pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ic_stub_pistol",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag"
		};
		respawnMagazines[]=
		{
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag",
			"ic_stubPistol_mag"
		};
	};
};

class CfgWeapons 
{

};