class CfgPatches
{
	class SR_Crash
	{
		requiredAddons[]=
		{
			"fscl_main"
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

// Add fscl scripts to all land vehicles
class Extended_initPost_EventHandlers
{
	class LandVehicle
	{
		class FSCL
		{
			init="[_this select 0] call fscl_main_fnc_setup";
			exclude[]=
			{
				
			};
		};
	};
};