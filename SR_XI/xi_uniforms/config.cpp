class CfgPatches
{
	class xi_uniforms
	{
		vehicles[]={};
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Mark",
			"IC_weapons_base"
		};
	};
};
class Man;
class CAManBase: Man
{
	class HitPoints
	{
		class HitHead;
		class HitBody;
		class HitHands;
		class HitLegs;
	};
};
class cfgWeapons
{
	class ItemInfo;
	class VestItem;
	class UniformItem;
	
	class ic_FeudalHelm;
	class ic_AquilaHelm;
	class ic_moebianHelm;
	class ic_AgripinaaHelm2;
	class IC_cad_kasr_helmet_green;
	class IC_Scion_Beret;
	class xi_beret_winchester: IC_Scion_Beret
	{
		author="Winchester";
		scope=2;
		displayName="[XI] Winchesters Beret";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_beret_winchester.paa"
		};
				class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class xi_beret_red: IC_Scion_Beret
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Beret (Red)";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_beret_red.paa"
		};
				class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class xi_beret_grey: IC_Scion_Beret
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Beret (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\129th_beret_wo.paa"
		};
				class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class TIOW_IG_PatrolCap_836;
	class IC_officer_cap_sl;
	class DMCLS_Comissar_Cap;
	class xi_commissar_cap: DMCLS_Comissar_Cap
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Commissar Cap";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_commissar_cap.paa"
		};
				class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class xi_commissar_cap2: DMCLS_Comissar_Cap
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Commissar Cap (Gold)";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_commissar_cap2.paa"
		};
				class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class IC_cad_helmet_green;
	class TIOW_Priest_Hood;
	class IC_cad_heavy_helmet_green;	
	class IC_SOS_helmet_01;
	class IC_SL_HELMET_01;
	class IC_SL_HELMET_02;
	class IC_SOS_helmet_02;
	class ic_PraetorianHelm;
	class ic_catachan_Headband;
	class IC_scion_helm_BASE;
	class TIOW_Tau_HelmetB2;
	class xi_flux_helmet: TIOW_Tau_HelmetB2
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Flux' Helmet";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_flux_helmet.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.5;
				};
			};
		};
	};
	class ic_Tallarn_OfficerVest1;
	class ic_Tallarn_Vest1;
	class ic_Tallarn_Vest2;
	class ic_Tallarn_Vest3;
	class ic_Tallarn_Vest4;
	class ic_Tallarn_Vest5;
	class ic_Tallarn_Vest6;
	class TIOW_Tau_Belt_VL;
	class xi_flux_armor: TIOW_Tau_Belt_VL
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Flux' Armor";
				hiddenSelections[]=
		{
			"camo",
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_flux_belts.paa"
		};
				class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class IC_Scion_armor_01;
	class ic_luciferArmour_Vest1;
	class ic_luciferArmour_Vest2;
	class ic_feudalArmour_Vest1;
	class ic_Moebian_Vest2;
	class ic_Moebian_Vest3;
	class ic_Moebian_Vest1;
	class dm_CadianArmour2;
	class xi_crew_flak: dm_CadianArmour2
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Crew Flak Armor";
		hiddenSelections[]=
		{
			"Camo",
			"camo1",
			"camo2",
			"holster"
		};
		descriptionShort="Flak Level II";
		hiddenSelectionsTextures[]=
		{
			"SR_XI\xi_uniforms\data\GI\xi_crew_flak.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_crew_shoulder.paa",
			"",
			""
		};
			class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class dm_CadianArmour3;
	class dm_CadianArmour;
	class dm_CadianArmour4;
	class ic_guevesa_Vest1;
	class IC_SL_VEST_01;
	class xi_SL_gear_bd: IC_SL_VEST_01
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Crew Webbing (Bedroll)";
		hiddenSelections[]=
		{
			"Camo"
		};
		descriptionShort="with Bedroll";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_crew.paa"
		};
						class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class IC_SL_VEST_03;
	class xi_SL_gear_bdo: IC_SL_VEST_03
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Crew Webbing (Officer+Bedroll)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		descriptionShort="with Bedroll";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_crew.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_crew_o.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class IC_SL_VEST_04;
	class xi_SL_gear: IC_SL_VEST_04
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Crew Webbing (Officer)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_crew.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_crew_o.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class IC_SL_VEST_02;
	class xi_SL_gear02: IC_SL_VEST_02
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Crew Webbing";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_crew.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply190";
			mass=25;
				class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.30000001;
				};
			};
		};
	};
	class IC_CAD_KasrArmor_green;
	class IC_Chaos_Armor_01;
	class ic_Ajax_Vest2;
	class xi_pilot_vest: ic_Ajax_Vest2
	{
		author="Winchester";
		scope=2;
		displayName="[P.XI] Pilot Vest";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_pilot_vest.paa"
		};
	};
	class ic_stormtrooper_vest2;
	// class Sol_Aux_Helm_1;
	// class PXI_Sol_Aux_Helm_1: Sol_Aux_Helm_1
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Void-Helm";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_SolAux_BugEye_Helm_Base_CO.paa"
		// };
	// };
	// class Sol_Aux_Helm_1_Open;
	// class PXI_Sol_Aux_Helm_1_Open: Sol_Aux_Helm_1_Open
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Void-Helm (OPEN)";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_SolAux_BugEye_Helm_Base_CO.paa"
		// };
	// };
	// class Sol_Aux_Helm_4;
	// class PXI_Veletari_Helm_1: Sol_Aux_Helm_4
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Veletaris Void-Helm";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_2Veletari_Helm_Base_CO.paa"
		// };
	// };
	// class Sol_Aux_Helm_4_open;
	// class PXI_Veletari_Helm_1_open: Sol_Aux_Helm_4_open
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Veletaris Void-Helm (OPEN)";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_2Veletari_Helm_Base_CO.paa"
		// };
	// };
	
	// class Sol_Aux_Vest_1;
	// class PXI_Sol_Aux_Vest_1: Sol_Aux_Vest_1
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Void-Armor";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_SolAux_AuxArmor_Base_CO.paa"
		// };
	// };

	// class Sol_Aux_Vest_8;
	// class PXI_Veletari_Vest_1: Sol_Aux_Vest_8
	// {
		// author="Winchester";
		// scope=2;
		// displayName="[P.XI] Veletari Void-Armor";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// descriptionShort="";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_Veletari_Vest_Base_CO.paa"
		// };
	// };
	
	// class Sol_Aux_Uni_1;
	// class PXI_Sol_Aux_Uni_1: Sol_Aux_Uni_1
	// {
		// author="Winchester";
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// allowedSlots[]=
		// {
			// "BACKPACK_SLOT"
		// };
		// displayName="[P.XI] Void-Suit";
		// class ItemInfo: UniformItem
		// {
			// hiddenSelections[]=
			// {
				// "camo",
			// };
			// hiddenSelectionsTextures[]=
			// {
				// "\SR_XI\xi_uniforms\data\GI\PXI_SolAux_AuxUni_1_CO.paa",
			// };
			// uniformModel="-";
			// uniformClass="pxi_void_unit_1";
			// containerClass="Supply90";
			// mass=80;
		// };
	// };
	
	// class Sol_Aux_Uni_15;
	// class PXI_Veletari_Uni_1: Sol_Aux_Uni_15
	// {
		// author="Winchester";
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// allowedSlots[]=
		// {
			// "BACKPACK_SLOT"
		// };
		// displayName="[P.XI] Veletari Void-Suit";
		// class ItemInfo: UniformItem
		// {
			// hiddenSelections[]=
			// {
				// "camo",
			// };
			// hiddenSelectionsTextures[]=
			// {
				// "\SR_XI\xi_uniforms\data\GI\PXI_Veletari_Uni_Base_CO.paa",
			// };
			// uniformModel="-";
			// uniformClass="pxi_vel_void_unit_1";
			// containerClass="Supply90";
			// mass=80;
		// };
	// };
	
	
	// class U_DMCLS_Comissar;
	// class xi_commissar_uniform: U_DMCLS_Comissar
	// {
		// author="Winchester";
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// allowedSlots[]=
		// {
			// "BACKPACK_SLOT"
		// };
		// displayName="[P.XI] Commissar Uniform";
		// class ItemInfo: UniformItem
		// {
			// hiddenSelections[]=
			// {
				// "camo",
				// "camo1"
			// };
			// hiddenSelectionsTextures[]=
			// {
				// "\SR_XI\xi_uniforms\data\GI\xi_commissar_uniform.paa",
				// "\SR_XI\xi_uniforms\data\GI\xi_commissar_coat.paa"
			// };
			// uniformModel="-";
			// uniformClass="xi_commissar_unit";
			// containerClass="Supply90";
			// mass=80;
		// };
	// };
	// class xi_commissar_uniform2: U_DMCLS_Comissar
	// {
		// author="Winchester";
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// allowedSlots[]=
		// {
			// "BACKPACK_SLOT"
		// };
		// displayName="[P.XI] Commissar Uniform (Gold)";
		// class ItemInfo: UniformItem
		// {
			// hiddenSelections[]=
			// {
				// "camo",
				// "camo1"
			// };
			// hiddenSelectionsTextures[]=
			// {
				// "\SR_XI\xi_uniforms\data\GI\xi_commissar_uniform2.paa",
				// "\SR_XI\xi_uniforms\data\GI\xi_commissar_coat2.paa"
			// };
			// uniformModel="-";
			// uniformClass="xi_commissar_unit2";
			// containerClass="Supply90";
			// mass=80;
		// };
	// };
	class IC_CAD_U_836_B;
	class IC_CADUExtra_U_B;
	class xi_uniform_pe: IC_CADUExtra_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Enforcer)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_pants02_pe.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_top_pe.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_UExtra.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_pe";
			containerClass="Supply90";
			mass=80;
		};
	};
	class IC_sos_U_rifleman_04_O;
	class IC_CAD_U_836_2_B;
	class xi_uniform_evo: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Evocati 1st)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_evo_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_evo_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_evo";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_evo2: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Evocati 2nd)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_evo2_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_evo_top2.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_evo2";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_pilot: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Pilot)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_pilot_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_pilot";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_leo: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Leoprint)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_pants02_leo.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_leo";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_medicae: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Medicae)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_medicae_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_medicae_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_medicae";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Trooper)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_trooper";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_nco: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (NCO)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_nco_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_nco";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_nco1: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (NCO 1st Centuria)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_nco1_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_nco1";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_nco2: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (NCO 2nd Centuria)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_nco2_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_nco2";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_prefect: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Prefect)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_prefect_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_prefect_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_prefect";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_winchester: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Winchester)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_winchester_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_winchester_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_winchester";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_bones: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Bones)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_bones_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_bones";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_stripe: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Stripes)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_stripe_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_stripe";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_grey: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Grey Pants)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_grey_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_grey";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_doctores: IC_CAD_U_836_2_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Uniform (Doctores)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_doctores_pants02.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_doctores_top.paa"
			};
			uniformModel="-";
			uniformClass="xi_unit_doctores";
			containerClass="Supply90";
			mass=80;
		};
	};
	class TIOW_U_Fire_Warrior_TA_B;
	class xi_flux_uniform: TIOW_U_Fire_Warrior_TA_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Flux' Uniform ";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_flux_armor.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_flux_uniform.paa"
			};
			uniformModel="-";
			uniformClass="XI_flux_unit";
			containerClass="Supply90";
			mass=80;
		};
	};
	class IC_sos_U_rifleman_02_O;
	class IC_SL_U_B;
	class xi_uniform_coat: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat1";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_bones: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat (Bones)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_bones.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_bones.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_bones";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_1st: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] NCO Coat (1st Centuria)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_1st.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_1st.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_1st";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_2nd: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] NCO Coat (2nd Centuria)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_2nd.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_2nd.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_2nd";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_prefect: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat (Prefect)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_prefect.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo1st.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_prefect";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_evo1st: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat (Evocati 1st)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_evo1st.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo1st.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_evo1st";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_evo2nd: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat (Evocati 2nd)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_evo2nd.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo2nd.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_evo2nd";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_coat_medicae: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Coat (Medicae)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_top_medicae.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat_medicae";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_crew_coat: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Crew Coat ";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_bottom.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_top.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat2";
			containerClass="Supply90";
			mass=80;
		};
	};
	class xi_uniform_crew_coat_nco: IC_SL_U_B
	{
		author="Winchester";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[P.XI] Crew Coat (NCO)";
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_bottom_nco.paa",
				"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_top.paa"
			};
			uniformModel="-";
			uniformClass="XI_winchester_unit_coat3";
			containerClass="Supply90";
			mass=80;
		};
	};
	class U_TIOW_Priest;
	class IC_Scion_U_B;
};
class cfgVehicles
{
	class IC_Scion_inf_01_B;
	// class WBK_SolarAux_99_Rifleman;
	// class pxi_void_unit_1: WBK_SolarAux_99_Rifleman
	// {
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// linkedItems[]=
		// {
			// "ItemMap",
			// "ItemCompass",
			// "ItemWatch",
			// "ItemRadio"
		// };
		// side=1;
		// editorCategory="";
		// editorSubcategory="";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// displayName="[PXI_void_unit_1]";
		// uniformClass="PXI_Sol_Aux_Uni_1";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_SolAux_AuxUni_1_CO.paa",
		// };
	// };
	// class WBK_SolarAux_63_Veletaris;
	// class pxi_vel_void_unit_1: WBK_SolarAux_63_Veletaris
	// {
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// linkedItems[]=
		// {
			// "ItemMap",
			// "ItemCompass",
			// "ItemWatch",
			// "ItemRadio"
		// };
		// side=1;
		// editorCategory="";
		// editorSubcategory="";
		// hiddenSelections[]=
		// {
			// "camo",
		// };
		// displayName="[PXI_vel_void_unit_1]";
		// uniformClass="PXI_Veletari_Uni_1";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\PXI_Veletari_Uni_Base_CO.paa",
		// };
	// };
	// class DMCLS_comissar;
	// class xi_commissar_unit: DMCLS_comissar
	// {
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// linkedItems[]=
		// {
			// "ItemMap",
			// "ItemCompass",
			// "ItemWatch",
			// "ItemRadio"
		// };
		// side=1;
		// editorCategory="";
		// editorSubcategory="";
		// hiddenSelections[]=
		// {
			// "camo",
			// "camo1"
		// };
		// displayName="[xi_commissar_unit]";
		// uniformClass="xi_commissar_uniform";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\xi_commissar_uniform.paa",
			// "\SR_XI\xi_uniforms\data\GI\xi_commissar_coat.paa"
		// };
	// };
	// class xi_commissar_unit2: DMCLS_comissar
	// {
		// scope=2;
		// scopecurator=2;
		// scopearsenal=2;
		// linkedItems[]=
		// {
			// "ItemMap",
			// "ItemCompass",
			// "ItemWatch",
			// "ItemRadio"
		// };
		// side=1;
		// editorCategory="";
		// editorSubcategory="";
		// hiddenSelections[]=
		// {
			// "camo",
			// "camo1"
		// };
		// displayName="[xi_commissar_unit2]";
		// uniformClass="xi_commissar_uniform2";
		// hiddenSelectionsTextures[]=
		// {
			// "\SR_XI\xi_uniforms\data\GI\xi_commissar_uniform2.paa",
			// "\SR_XI\xi_uniforms\data\GI\xi_commissar_coat2.paa"
		// };
	// };
	class IC_CAD_inf_836_Light_B;
	class IC_CADUExtra_B;
	class xi_unit_pe: IC_CADUExtra_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo",
			"camo2"
		};
		displayName="[xi_unit_pe]";
		uniformClass="xi_uniform_pe";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_pants02_pe.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_top_pe.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_uextra.paa"
		};
	};
	class IC_sos_inf_rifleman_04_o;
	class IC_CAD_inf_836_B;
	class xi_unit_evo: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_evo]";
		uniformClass="xi_uniform_evo";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_evo_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_evo_top.paa"
		};
	};
	class xi_unit_evo2: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_evo2]";
		uniformClass="xi_uniform_evo2";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_evo2_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_evo_top2.paa"
		};
	};
	class xi_unit_pilot: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_pilot]";
		uniformClass="xi_uniform_pilot";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_pilot_top.paa"
		};
	};
	
	class xi_unit_leo: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_leo]";
		uniformClass="xi_uniform_leo";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_pants02_leo.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
		};
	};
	class xi_unit_medicae: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_medicae]";
		uniformClass="xi_uniform_medicae";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_medicae_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_medicae_top.paa"
		};
	};
	
	class xi_unit_trooper: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_trooper]";
		uniformClass="xi_uniform";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
		};
	};
	class xi_unit_nco: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_nco]";
		uniformClass="xi_uniform_nco";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_nco_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
		};
	};
	class xi_unit_nco1: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_nco1]";
		uniformClass="xi_uniform_nco1";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_nco1_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
		};
	};
	class xi_unit_nco2: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_nco2]";
		uniformClass="xi_uniform_nco2";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_nco2_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
		};
	};
	class xi_unit_prefect: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_prefect]";
		uniformClass="xi_uniform_prefect";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_prefect_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_prefect_top.paa"
		};
	};
	class xi_unit_winchester: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_winchester]";
		uniformClass="xi_uniform_winchester";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_winchester_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_winchester_top.paa"
		};
	};
	class xi_unit_bones: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_bones]";
		uniformClass="xi_uniform_bones";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_bones_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_nco_top.paa"
		};
	};
	class xi_unit_stripe: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_stripe]";
		uniformClass="xi_uniform_stripe";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_stripe_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
		};
	};
	class xi_unit_grey: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_grey]";
		uniformClass="xi_uniform_grey";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_grey_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_top.paa"
		};
	};
	class xi_unit_doctores: IC_CAD_inf_836_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		displayName="[xi_unit_doctores]";
		uniformClass="xi_uniform_doctores";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_doctores_pants02.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_doctores_top.paa"
		};
	};
	class IC_sos_inf_rifleman_02_O;
	class IC_SL_Inf_B;
	class XI_winchester_unit_coat1: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat1]";
		uniformClass="xi_uniform_unit_coat1";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top.paa"
		};
	};
	class XI_winchester_unit_coat2: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat2]";
		uniformClass="xi_uniform_unit_coat2";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_bottom.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_top.paa"
		};
	};
	class XI_winchester_unit_coat3: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat3]";
		uniformClass="xi_uniform_unit_coat3";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_bottom_nco.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_crew_top.paa"
		};
	};
	class XI_winchester_unit_coat_bones: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_bones]";
		uniformClass="xi_uniform_unit_coat_bones";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_bones.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_bones.paa"
		};
	};
	class XI_winchester_unit_coat_1st: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_1st]";
		uniformClass="xi_uniform_unit_coat_1st";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_1st.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_1st.paa"
		};
	};
	class XI_winchester_unit_coat_2nd: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_2nd]";
		uniformClass="xi_uniform_unit_coat_2nd";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_2nd.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_2nd.paa"
		};
	};
	class XI_winchester_unit_coat_prefect: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_prefect]";
		uniformClass="xi_uniform_unit_coat_prefect";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_prefect.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo1st.paa"
		};
	};
	class XI_winchester_unit_coat_evo1st: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_evo1st]";
		uniformClass="xi_uniform_unit_coat_evo1st";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_evo1st.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo1st.paa"
		};
	};
	class XI_winchester_unit_coat_evo2nd: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_evo2nd]";
		uniformClass="xi_uniform_unit_coat_evo2nd";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom_evo2nd.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_evo2nd.paa"
		};
	};
	class XI_winchester_unit_coat_medicae: IC_SL_Inf_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		displayName="[XI_winchester_unit_coat_medicae]";
		uniformClass="xi_uniform_unit_coat_medicae";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_SL_bottom.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_SL_top_medicae.paa"
		};
	};
	class TIOW_priest;
	class TIOW_Strike_TA_B;
	class XI_flux_unit: TIOW_Strike_TA_B
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		editorCategory="";
		editorSubcategory="";
		displayName="[XI_flux_unit]";
		uniformClass="xi_flux_uniform";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_flux_armor.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_flux_uniform.paa"
		};
	};
	class WBK_Armiger_1;
	class XI_Armiger: WBK_Armiger_1
	{
		displayName="[P.XI] Armiger";
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_armiger_top.paa",
			"\SR_XI\xi_uniforms\data\GI\xi_armiger_low.paa",
		};
	};
};
class cfgGlasses
{
	class dm_KantraelMaskGrey;
	class xi_mask1: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Red Visor)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask1.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask2: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Orange Visor)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask2.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask3: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Winchester)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask3.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask4: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Bones)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask4.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask5: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Doctores)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask5.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask6: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Evocati 1st)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask6.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
		
	class xi_mask7: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Evocati 2nd)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask7.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask8: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (1st Centuria)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask8.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask9: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (2nd Centuria)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask9.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask10: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Prefect)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask10.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask11: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Enforcer)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask11.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
	class xi_mask12: dm_KantraelMaskGrey
	{
		author="Winchester";
		displayname="[P.XI] Kantrael Mask (Medicae)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_XI\xi_uniforms\data\GI\xi_mask12.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
		mass=4;
	};
	
};
