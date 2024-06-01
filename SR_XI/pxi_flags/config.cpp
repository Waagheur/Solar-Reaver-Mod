class CfgPatches
{
	class pxi_d_props_1
	{
		requiredAddons[]=
		{
			"A3_Structures_F"
		};
		requiredVersion=1.9400001;
		units[]=
		{
			"Flag_pxi_1stC",
			"Banner_pxi_1stC",
			"Flag_pxi_Main",
			"Banner_pxi_Main",
			"Flag_pxi_2ndC",
			"Banner_pxi_2ndC",
			"Flag_pxi_Aux",
			"Banner_pxi_Aux"
		};
		weapons[]={};
	};
};
class CfgVehicleClasses
{
	class pxi_d_props
	{
		displayName="[P.XI] props";
	};
};
class CfgEditorCategories
{
	class pxi_obj_flag
	{
		displayName="[P.XI] Objects";
	};
};
class CfgEditorSubcategories
{
	class pxi_sub_obj_flag
	{
		displayName="Flags";
	};
};
class CfgVehicles
{
	class FlagCarrier_Asym;
	class Flag_pxi_1stC: FlagCarrier_Asym
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="1st Centuria Flag";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\pxi_flags\flags\flag_pxi_1st.paa'";
		};
	};
	class Flag_pxi_Main: Flag_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="P.XI Flag";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\pxi_flags\flags\flag_pxi_main.paa'";
		};
	};
	class Flag_pxi_2ndC: Flag_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="2nd Centuria Flag";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\pxi_flags\flags\flag_pxi_2nd.paa'";
		};
	};
	class Flag_pxi_Aux: Flag_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="P.XI Aux Flag";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\pxi_flags\flags\flag_pxi_aux.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_pxi_1stC: Banner_01_base_F
	{
		author="Dwev";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		scope=2;
		scopeCurator=2;
		displayName="1st Centuria Banner";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		hiddenSelectionsTextures[]=
		{
			"\pxi_flags\flags\flag_pxi_1st.paa"
		};
	};
	class Banner_pxi_Main: Banner_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="P.XI Banner";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		hiddenSelectionsTextures[]=
		{
			"\pxi_flags\flags\flag_pxi_main.paa"
		};
	};
	class Banner_pxi_2ndC: Banner_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="2nd Centuria Banner";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		hiddenSelectionsTextures[]=
		{
			"\pxi_flags\flags\flag_pxi_2nd.paa"
		};
	};
	class Banner_pxi_Aux: Banner_pxi_1stC
	{
		author="Dwev";
		scope=2;
		scopeCurator=2;
		displayName="P.XI Aux Banner";
		editorCategory="pxi_obj_flag";
		editorSubcategory="pxi_sub_obj_flag";
		hiddenSelectionsTextures[]=
		{
			"\pxi_flags\flags\flag_pxi_aux.paa"
		};
	};
};
