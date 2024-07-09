class CfgPatches
{
	class XI_Props
	{
		units[]=
		{
			"land_dmDonation_dragnteethLine",
			"land_pxi_wall_straight_pipes",
			"land_pxi_wall_straight_gateway",
			"land_pxi_wall_straight_noPipes",
			"land_pxi_wall_straight_90E",
			"land_pxi_wall_straight_90i",
			"land_pxi_wall_straight_45e",
			"land_pxi_wall_straight_45i",
			"land_pxi_wall_straight_wipTrenchTop1"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark"
		};
		weapons[]={};
	};
};
class CfgEditorCategories
{
	class XI_Props
	{
		displayName="[XI] Fortifications";
		priority=1;
		side=1;
	};
};
class CfgEditorSubcategories
{
	class XI_Walls_Large
	{
		displayName="Defensive Walls (Large)";
	};
	class XI_Walls_Small
	{
		displayName="Defensive Walls (Large)";
	};
	class XI_OtherObjects
	{
		displayName="Other Objects";
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class land_dmDonation_dragnteethLine: House_F
	{
		model="\xi_Props\base.p3d";
		armor=4000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Dragonteeth Line";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_OtherObjects";
	};
	class land_pxi_wall_straight_pipes: House_F
	{
		model="\xi_Props\pxi_wall_straight_pipes.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall Straight - Pipes";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_gateway: House_F
	{
		model="\xi_Props\pxi_wall_straight_gateway.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall Straight - Gateway";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_noPipes: House_F
	{
		model="\xi_Props\pxi_wall_straight_NoPipes.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall Straight - No Pipes";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_90E: House_F
	{
		model="\xi_Props\pxi_wall_straight_90E.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall 90 - Exterior";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_90i: House_F
	{
		model="\xi_Props\pxi_wall_straight_90i.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall 90 - Interior";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_45e: House_F
	{
		model="\xi_Props\pxi_wall_straight_45e.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall 45 - Exterior";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_45i: House_F
	{
		model="\xi_Props\pxi_wall_straight_45i.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] Wall 45 - Interior";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
	class land_pxi_wall_straight_wipTrenchTop1: House_F
	{
		model="\xi_Props\straight_TrenchTop_1.p3d";
		armor=96000;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[PXI] WIP Trench Top";
		faction="Empty";
		vehicleClass="Objects";
		editorCategory="XI_Props";
		editorSubcategory="XI_Walls_Large";
	};
};
