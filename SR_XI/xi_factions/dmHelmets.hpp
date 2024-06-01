	class dm_CadianHelm_BASE;
	class dm_CadianHelm: dm_CadianHelm_BASE {class ItemInfo;};
	class xi_cadianHelmet_light: dm_CadianHelm
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[LIGHT] Cadian Helm";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LIGHT;
		};
	};

	class H_HelmetB;
	class IC_Scion_Beret: H_HelmetB {class ItemInfo;};
	class xi_beret_light: IC_Scion_Beret
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[LIGHT] Cadian Beret";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LIGHT;
		};
	};

    class xi_cadianHelmet_line: dm_CadianHelm
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[LINE] Cadian Helm";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};
	class ic_moebianHelm_BASE;
	class IC_moebianHelm: ic_moebianHelm_BASE {class ItemInfo;};
    class xi_MoebianFlakHelmet_line: ic_moebianHelm
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[LINE] Moebian Helm";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};

	class IC_cad_helmet_green;
	class darktide_basicHelmet: IC_cad_helmet_green {class ItemInfo;};
    class xi_darkTideHelmet_line: darktide_basicHelmet
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[LINE] Generic Helm";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};

	class ic_feudalHelm_BASE;
	class ic_feudalHelm: ic_feudalHelm_BASE {class ItemInfo;};
	class xi_FeudalHelmetFULL_SHOCK: ic_feudalHelm
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[SHOCK] Feudal Helmet";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_SHOCK;
		};
	};

    class ic_Stormtrooper_helmet_base;
	class ic_Stormtrooper_helmet: ic_Stormtrooper_helmet_base {class ItemInfo;};
	class xi_StormTrooperHelmet_SHOCK: ic_Stormtrooper_helmet
	{
		author="Bones";
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[SHOCK] Stormtrooper Helmet";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_SHOCK;
		};
	};


	class severan_salvaged_helmet_red1;
	class pxi_WR_chaosU_1_base_LIN: severan_salvaged_helmet_red1
	{
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[CU] Chaos-Undivided Helmet (no spikes) [LINE]";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};

	class severan_salvaged_helmet_red2;
	class pxi_WR_chaosU_2_base_LIN: severan_salvaged_helmet_red2
	{
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[CU] Chaos-Undivided Helmet (spikes) [LINE]";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};

	class severan_helmet_red;
	class pxi_WR_chaosU_3_base_LIN: severan_helmet_red
	{
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[CU] Chaos-Undivided Helmet [LINE]";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};

	class severan_heavy_helmet_red;
	class pxi_WR_chaosU_1_base_SH: severan_heavy_helmet_red
	{
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[CU] Chaos-Undivided Heavy Helmet [SHOCK]";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_SHOCK;
		};
	};

	class ic_moebianHelm6th;
	class pxi_WR_showCase_1_base_LI: ic_moebianHelm6th
	{
		scope=2;
        scopecurator=2;
        scopearsenal=2;
		displayName="[SC] UCMC Helmet [LINE]";
		class ItemInfo: ItemInfo
        {
			ARMOR_HELMET_LINE;
		};
	};
	
	class ic_BloodPactHelm_BASE;
    class pxi_BP_Light_Helmet: ic_BloodPactHelm_BASE
    {
        author="Kyrent";
        scope=2;
        scopecurator=2;
        scopearsenal=2;
        displayName="[LIGHT] Blood Pact Helmet";
        class ItemInfo: ItemInfo
        {
            ARMOR_HELMET_LIGHT;
        };        
    };
    
    class ren_helm_red;
    class pxi_BP_Crew_Helmet: ren_helm_red
    {
        author="Kyrent";
        scope=2;
        scopecurator=2;
        scopearsenal=2;
        displayName="[Crew] Blood Pact Helmet";
        class ItemInfo: ItemInfo
        {
            ARMOR_HELMET_LIGHT;
        };        
    };
	class DKoK_GM_Helm_82nd;
	class xi_DKOK_Helm_LIN: DKoK_GM_Helm_82nd
	{
		author="Dwev";
		scope=2;
    	scopecurator=2;
    	scopearsenal=2;
		displayName="[DK] Helmet [LINE]";
		class ItemInfo: ItemInfo
		{
			ARMOR_HELMET_LINE;
		};
	};

	class xi_DKOK_Helm_SH: DKoK_GM_Helm_82nd
	{
		author="Dwev";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayName="[DK] Helmet [SHOCK]";
		class ItemInfo: ItemInfo
		{
			ARMOR_HELMET_SHOCK;
		};
	};

	class 129th_aquila;
	class pxi_129_line_H: 129th_aquila
	{
		author="Dwev";
		scope=2;
    	scopecurator=2;
    	scopearsenal=2;
		displayName="[LINE] 129th Helmet";
		class ItemInfo: ItemInfo
		{
			ARMOR_HELMET_LINE;
		};
	};

	class 129th_aquila2;
	class pxi_129_line_H_Cpl: 129th_aquila2
	{
		author="Dwev";
		scope=2;
    	scopecurator=2;
    	scopearsenal=2;
		displayName="[LINE] 129th Corporal Helmet";
		class ItemInfo: ItemInfo
		{
			ARMOR_HELMET_LINE;
		};
	};

	class 129th_aquila_sgt2;
	class pxi_129_line_H_Sgt: 129th_aquila_sgt2
	{
		author="Dwev";
		scope=2;
    	scopecurator=2;
    	scopearsenal=2;
		displayName="[LINE] 129th Sergeant Helmet";
		class ItemInfo: ItemInfo
		{
			ARMOR_HELMET_LINE;
		};
	};