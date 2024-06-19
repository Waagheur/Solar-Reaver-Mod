// Just here to group all the XI addons in a single addon file
class CfgPatches
{
	class xi_addons
	{
		vehicles[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

// We're here because the postInits don't seem to trigger in the sub addons
class CfgFunctions
{
	class SR
	{
		class xi_vehicles
		{
			file = "SR_XI\xi_vehicles\functions";
			class grenades_main {
				//file = "SR_XI\xi_vehicles\functions\fn_grenades_main.sqf";
			};
			class grenades_init {
				postInit 	= 1;
				//file = "SR_XI\xi_vehicles\functions\fn_grenades_init.sqf";
			};
		};
	};
};