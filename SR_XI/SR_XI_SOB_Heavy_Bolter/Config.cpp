class CfgPatches
{
	class SR_XI_SOB_Heavy_Bolter
	{
		vehicles[]={};
		units[]={};
		weapons[] = {"SR_XI_GR_HEAVY_BOLTER_BLK","SR_XI_GR_HEAVY_BOLTER_RED","SR_XI_GR_HEAVY_BOLTER_WTE",};
		magazines[] = {"SR_XI_HEAVY_BOLTER_BELTX100","SR_XI_HEAVY_BOLTER_BELTX250","SR_XI_HEAVY_BOLTER_BELTX500"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"GR_SOB_Bolter"
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgRecoils
{
	class recoil_SR_XI_SOB_Heavy_Bolter
	{
		muzzleInner[] = {0,0,0.1,0.1}; // No clues about this one, isn't on the BIKI
		muzzleOuter[]	= { 0.6, 0.8, 0.6, 0.4 }; // x, y, a, b
		kickBack[]	= { 0.028, 0.112 };
		permanent	= 0.020;
		temporary	= 0.016;
	};
	
	class recoil_prone_SR_XI_SOB_Heavy_Bolter
	{
		muzzleInner[] = {0,0,0.1,0.1}; // No clues about this one, isn't on the BIKI
		muzzleOuter[]	= { 0.3, 0.4, 0.4, 0.2 }; // x, y, a, b
		kickBack[]	= { 0.020, 0.080 };
		permanent	= 0.008;
		temporary	= 0.008;
	};
};

class CfgMagazines
{
	class HEAVY_BOLTER_BELTX100;
	class HEAVY_BOLTER_BELTX250;
	class HEAVY_BOLTER_BELTX500;
	class SR_XI_HEAVY_BOLTER_BELTX100: HEAVY_BOLTER_BELTX100
	{
		displayName = "[TSR] [PXI] [SOB] 100RND Heavy Bolter Belt";
		ammo = "SR_XI_ProtoBoltRound";
		descriptionShort = "[TSR] [PXI] [SOB] 100 Rounds Heavy Bolter Belt";
	};
	class SR_XI_HEAVY_BOLTER_BELTX250: HEAVY_BOLTER_BELTX250
	{
		displayName = "[TSR] [PXI] [SOB] 250RND Heavy Bolter Belt";
		ammo = "SR_XI_ProtoBoltRound";
		descriptionShort = "[TSR] [PXI] [SOB] 250 Rounds Heavy Bolter Belt";
	};
	class SR_XI_HEAVY_BOLTER_BELTX500: HEAVY_BOLTER_BELTX500
	{
		displayName = "[TSR] [PXI] [SOB] 500RND Heavy Bolter Belt";
		ammo = "SR_XI_ProtoBoltRound";
		descriptionShort = "[TSR] [PXI] [SOB] 500 Rounds Heavy Bolter Belt";
	};
};

class CfgAmmo
{
	class ProtoBoltRound;
	class SR_XI_ProtoBoltRound: ProtoBoltRound
	{
		coefGravity = 0.8;
	};
};

class Mode_FullAuto;

class CfgWeapons
{
	class GR_HEAVY_BOLTER_BLK;
	class SR_XI_GR_HEAVY_BOLTER_BLK: GR_HEAVY_BOLTER_BLK
	{
		displayName = "[TSR] [PXI] [SOB] Heavy Bolter Black";
		BaseWeapon = "SR_XI_GR_HEAVY_BOLTER:";
		author = "Waagheur";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		magazines[] = {"SR_XI_HEAVY_BOLTER_BELTX100","SR_XI_HEAVY_BOLTER_BELTX250","SR_XI_HEAVY_BOLTER_BELTX500"};
		recoil = "recoil_SR_XI_SOB_Heavy_Bolter";
		recoilProne = "recoil_prone_SR_XI_SOB_Heavy_Bolter";
		class FullAutoSlow: Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] = { "\PodWIP\Weapons\Sounds\HeavyBolterFire.ogg", 2.625, 1, 1200 };
				soundBegin[] = { "begin1", 1 };
			};
			class SoundTails
			{
				// Tail sounds
				class TailInterior
				{
					sound[] = { "A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior", 1.5848932, 1, 1000 };
					frequency = 1;
					volume = "interior";
				};
				// Additional Tail classes...
			};
			reloadTime=0.16;
			dispersion=0.0015;
		};
		class FullAutoFast: FullAutoSlow
		{
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] = { "\PodWIP\Weapons\Sounds\HeavyBolterFire.ogg", 2.0, 1, 1200 };
				soundBegin[] = { "begin1", 1 };
			};
			class SoundTails
			{
				// Tail sounds
				class TailInterior
				{
					sound[] = { "A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior", 1.2, 1, 1000 };
					frequency = 1;
					volume = "interior";
				};
				// Additional Tail classes...
			};
			reloadTime=0.08;
			dispersion=0.02;
			textureType="fastAuto";
			
			minRange = 10;
			minRangeProbab = 0.5;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.4;
		};
	};
	class SR_XI_GR_HEAVY_BOLTER_WTE: SR_XI_GR_HEAVY_BOLTER_BLK
	{
		displayName = "[TSR] [PXI] [SOB] Heavy Bolter White";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PodWIP\Weapons\Data\BolterTextureWhite_co.paa"};
	};
	class SR_XI_GR_HEAVY_BOLTER_RED: SR_XI_GR_HEAVY_BOLTER_BLK
	{
		displayName = "[TSR] [PXI] [SOB] Heavy Bolter Red";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PodWIP\Weapons\Data\BolterTextureRed_co.paa"};
	};
};