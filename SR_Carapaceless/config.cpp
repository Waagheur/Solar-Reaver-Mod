class CfgPatches
{
	class SR_Carapaceless
	{
		requiredAddons[]=
		{
			"HOV_BlackCarapace"
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

// Just kill the HOV event handlers to kill the scripts
class Extended_Preinit_EventHandlers
{
	class HOV_blackCarapace_settings_init
	{
		init="";
	};
};
class Extended_PostInit_EventHandlers
{
	class HOV_blackCarapace_script_init
	{
		init="";
	};
};