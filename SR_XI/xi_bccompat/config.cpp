class CfgPatches
{
	class xi_bc2wcompat
	{
		name="BC Weapons patch";
		author="";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"IC_CAD_WEAPONS",
			"A3_Data_F_Mark",
			"xi_allWeapons"
		};
	};
};
class Noob_Auto;
class NGL;
class MuzzleSlot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class XI_Shotgun;
	class XI_Shotgun_bcsewpn: XI_Shotgun
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_Melta_Rebalance;
	class XI_Melta_Rebalance_bcsewpn: XI_Melta_Rebalance
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_lucius_dmr;
	class XI_lucius_dmr_bcsewpn: XI_lucius_dmr
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class xi_longlas_standard;
	class xi_longlas_standard_bcsewpn: xi_longlas_standard
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_bullPup_base;
	class XI_bullPup_base_bcsewpn: XI_bullPup_base
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_Autogun_GL;
	class XI_Autogun_GL_bcsewpn: XI_Autogun_GL
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_mars_lasgun_wGL;
	class XI_mars_lasgun_wGL_bcsewpn: XI_mars_lasgun_wGL
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_Augustus_P;
	class XI_Augustus_P_bcsewpn: XI_Augustus_P
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class XI_Mars_Variant_Lasgun;
	class XI_Mars_Variant_Lasgun_bcsewpn: XI_Mars_Variant_Lasgun
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_marsLasgun_T2;
	class pxi_marsLasgun_T2_bcsewpn: pxi_marsLasgun_T2
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_marsLasgun_T3;
	class pxi_marsLasgun_T3_bcsewpn: pxi_marsLasgun_T3
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_aquiliferAutogun_T1;
	class pxi_aquiliferAutogun_T1_bcsewpn: pxi_aquiliferAutogun_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_aquiliferAutogun_T2;
	class pxi_AquiliferAutogun_t2_bcsewpn: pxi_aquiliferAutogun_T2
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_aquiliferAutogun_T3;
	class pxi_aquiliferAutogun_T3_bcsewpn: pxi_aquiliferAutogun_T3
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_RubiconLasgun_T1;
	class pxi_RubiconLasgun_T1_bcsewpn: pxi_RubiconLasgun_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"zasleh"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_m36Lasgun_T1;
	class pxi_m36Lasgun_T1_bcsewpn: pxi_m36Lasgun_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_m36Carbine_T1;
	class pxi_m36Carbine_T1_bcsewpn: pxi_m36Carbine_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_m36Galaxy_T1;
	class pxi_m36Galaxy_T1_bcsewpn: pxi_m36Galaxy_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_PugioAutogun_T1;
	class pxi_PugioAutogun_T1_bcsewpn: pxi_PugioAutogun_T1
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_onagerAutogun_T2;
	class pxi_onagerAutogun_T2_bcsewpn: pxi_onagerAutogun_T2
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_ArcusAutogun_T2;
	class pxi_ArcusAutogun_T2_bcsewpn: pxi_ArcusAutogun_T2
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_rubiconLasgun_T2;
	class pxi_rubiconLasgun_T2_bcsewpn: pxi_rubiconLasgun_T2
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_malleusAutogun_T3;
	class pxi_malleusAutogun_T3_bcsewpn: pxi_malleusAutogun_T3
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class pxi_cultroAutogun_T3;
	class pxi_cultroAutogun_T3_bcsewpn: pxi_cultroAutogun_T3
	{
		enableAttack=0;
		type=4;
		scope=1;
		scopeArsenal=2;
		handAnim[]={};
		class Noob_Auto: Noob_Auto
		{
		};
		modes[]=
		{
			"Noob_Auto"
		};
		class NGL: NGL
		{
		};
		muzzles[]=
		{
			"this",
			"NGL"
		};
		_generalMacro="";
		baseWeapon="";
		hiddenSelections[]=
		{
			"muzzleflash"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};
