	
    // Faction / Armor Values / Type / Weapon / Variant
    // HP / Light (LHT), Line (LIN) or Shock (SHK) / Infantry, vehicle or other / Lasgun, Autogun, Melta or Other / 1, 2, 3...
    
    class xi_HP_LIN_Infantry_L: xi_basetrooper_F
	{
		displayName = "[LINE] Infantry Lasgun";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ic_dm_m36K","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_las_powerpack","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    class xi_HP_LIN_Infantry_A: xi_basetrooper_F
	{
		displayName = "[LINE] Infantry Autogun";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","dm_cad_autogun","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_30rnd_825_rifleMag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};

	};

    class xi_HP_LIN_Infantry_RPG: xi_basetrooper_F
	{
		displayName = "[LINE] Infantry AT (Rocket)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ic_dm_m36K","IC_CAD_Rocketlauncher_base","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_las_powerpack","IC_Krak_rocket_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    class xi_HP_LIN_Infantry_AA: xi_basetrooper_F
	{
		displayName = "[LINE] Infantry AA (MANPAD)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_dm_m36K","IC_Launcher_AA_grey","ic_cad_magnoculars","Throw","Put"};
        magazines[] = {"ic_las_powerpack","IC_Flak_Missile_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Flak_Missile_mag","IC_Flak_Missile_mag"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};

	};

    class xi_HP_LIN_Infantry_AT: xi_basetrooper_F
	{
		displayName = "[LINE] Infantry AT (GUIDED)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_dm_m36K","ic_cad_magnoculars","IC_Launcher_AT_grey","Throw","Put"};
        magazines[] = {"ic_las_powerpack","Laserbatteries","IC_krakk_Missile_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_krakk_Missile_mag","IC_krakk_Missile_mag"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    
    class xi_HP_LIN_Infantry_Melta: xi_basetrooper_F
	{
		displayName = "[LINE] Melta Trooper";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ic_cad_melta","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_melta_canister","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    class xi_HP_LIN_Infantry_Plasma: xi_basetrooper_F
	{
		displayName = "[LINE] Plasma Trooper";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ic_PlasmaGunPurple","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_plasma_canisterPurple","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_plasma_canisterPurple","ic_plasma_canisterPurple","ic_plasma_canisterPurple"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    class xi_HP_LIN_Infantry_MKR: xi_basetrooper_F
	{
		displayName = "[LINE] Marksman";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ic_cad_LuciusLongLas","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_las_powerpack","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

    class xi_HP_LIN_Infantry_STB: xi_basetrooper_F
	{
		displayName = "[LINE] Stubber Gunner";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
        // Exported from Arsenal by [OPT] "Bones"
        uniformClass = "IC_CAD_U_Helris_B";
        backpack = "TKE_CamelBakUCN";
        weapons[] = {"ic_cad_magnoculars","ICP_LMG_01_imp","Throw","Put"};
        magazines[] = {"Laserbatteries","ic_30rnd_825_rifleMag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_100rnd_825_HP_Tracer_rifleMag","ic_100rnd_825_HP_Tracer_rifleMag","ic_100rnd_825_HP_Tracer_rifleMag"};
        items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
        linkedItems[] = {"xi_cadianArmour_Line2","xi_darkTideHelmet_line","IC_cad_rebreather_base","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

	class xi_HP_LHT_Infantry_L: xi_basetrooper_F
	{
		displayName = "[LIGHT] Rifleman (Lasgun)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "IC_CAD_U_Helris_B";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","ic_dm_m36K","Throw","Put"};
		magazines[] = {"Laserbatteries","ic_las_powerpack","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmour_LIGHT","xi_cadianHelmet_light","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};

	};

	class xi_HP_LHT_Infantry_A: xi_basetrooper_F
	{
		displayName = "[LIGHT] Rifleman (Autogun)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "IC_CAD_U_Helris_B";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","ic_cad_autogun","Throw","Put"};
		magazines[] = {"Laserbatteries","ic_30rnd_825_rifleMag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmour_LIGHT","xi_cadianHelmet_light","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

	class xi_HP_LHT_Infantry_SKIRM: xi_basetrooper_F
	{
		displayName = "[LIGHT] Skirmisher (Lasgun)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "U_TKE_Uniform_Rolled_UCNCamo";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","ic_cad_LuciusFMPoly","Throw","Put"};
		magazines[] = {"Laserbatteries","ic_las_powerpack","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmourV2_LIGHT","H_HeadSet_black_F","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

	class xi_HP_LHT_Infantry_SKIRMA: xi_basetrooper_F
	{
		displayName = "[LIGHT] Skirmisher (Rifle)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "U_TKE_Uniform_Rolled_UCNCamo";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","srifle_DMR_02_F","Throw","Put"};
		magazines[] = {"Laserbatteries","10Rnd_338_Mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ACE_10Rnd_338_API526_Mag","ACE_10Rnd_338_API526_Mag","ACE_10Rnd_338_API526_Mag","ACE_10Rnd_338_API526_Mag"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmourV2_LIGHT","H_HeadSet_black_F","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

	class xi_HP_LHT_Infantry_Melta: xi_basetrooper_F
	{
		displayName = "[LIGHT] Skirmisher (Melta)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "U_TKE_Uniform_Rolled_UCNCamo";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","ic_cad_melta","Throw","Put"};
		magazines[] = {"Laserbatteries","ic_melta_canister","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmour_LIGHT","H_Cap_oli_hs","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};
	};

	class xi_HP_LHT_Infantry_RPG: xi_basetrooper_F
	{
		displayName = "[LIGHT] Rifleman (RPG)";
		side = 0;
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_infantry";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [OPT] "Bones"
		uniformClass = "IC_CAD_U_Helris_B";
		backpack = "ic_CadianBackpackV1";
		weapons[] = {"ic_cad_magnoculars","ICP_Rifle_Voss_green","IC_CAD_Rocketlauncher_base","Throw","Put"};
		magazines[] = {"Laserbatteries","ic_las_powerpack","IC_Krak_rocket_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Krak_rocket_mag","IC_Frag_rocket_mag","IC_Frag_rocket_mag","IC_Frag_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Krak_rocket_mag","IC_Frag_rocket_mag"};
		items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
		linkedItems[] = {"xi_cadianArmour_LIGHT","dm_KantraelHelm","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152"};

	};


	// Vehicles


	class MEOP_SX3fighter_veh_mercBlue_F;
	class xi_hp_me_interceptor: MEOP_SX3fighter_veh_mercBlue_F
	{
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_aircraft";
		side=0;
		displayName="Helris Interceptor";
		hiddenSelectionsTextures[]={"meop_vehicles\sx3\al\data\cerfighter_clear_co.paa"};
		    crew="xi_HP_LHT_Infantry_L";
	scope=2;
		magazines[] = {"MEOP_1000Rnd_M3_VFM_AA_shells","MEOP_1000Rnd_M3_VFM_AA_shells","MEOP_1000Rnd_M3_VFM_AA_shells","MEOP_1000Rnd_M3_VFM_AA_shells","240Rnd_CMFlare_Chaff_Magazine"};
	};

  class IC_Chimedon_01_desert;
  class IC_Chimera_01_desert;
  class DM_Chimera_01_desertMultilas;
  class IC_Chimerro_01_desert;
  class _1491stChimAuto;
  class TIOW_KriegHydra_1491st;
  class B_T_AFV_Wheeled_01_up_cannon_F;
  class IC_Taurox_HS_SL;
  class IC_Tauros_GMG_woodland_F;
  class IC_Tauros_HMG_woodland_F;
  class IC_Tauros_Venator_woodland_F;
  class IC_Leman_Russ_02_8th;
  class IC_Leman_Russ_01_desert;
  class TIOW_Krieg_LR_Annihilator_1491st_Blu;
  class TIOW_Krieg_LR_Executioner_1491st_Blu;
  class TIOW_Krieg_LR_Exterminator_1491st_Blu;
  class TIOW_Krieg_LR_Punisher_1491st_Blu;
  class TIOW_Krieg_Mach_BC_1491st_Blu;
  class TIOW_Krieg_Mach_VC_1491st_Blu;

  class XI_HP_Chimedon: IC_Chimedon_01_desert
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
		side=0;
		displayName="HP Chimedon";
		hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_greenblack_co.paa","ic_chimera\data\chimera_tracks_greenblack_co.paa","ic_chimera\data\chimera_turret_greenblack_co.paa","ic_chimera\data\variants_green_co.paa"};
		    crew="xi_HP_LHT_Infantry_L";
	scope=2;
		typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Chimera_Autocannon: IC_Chimera_01_desert
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Chimera Autocannon";
    hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_greenblack_co.paa","ic_chimera\data\chimera_tracks_greenblack_co.paa","ic_chimera\data\chimera_turret_greenblack_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Chimera_Multilas: DM_Chimera_01_desertMultilas
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Chimera Multilas";
    hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_greenblack_co.paa","ic_chimera\data\chimera_tracks_greenblack_co.paa","ic_chimera\data\chimera_turret_greenblack_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Chimerro: IC_Chimerro_01_desert
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Chimerro";
    hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_greenblack_co.paa","ic_chimera\data\chimera_tracks_greenblack_co.paa","ic_chimera\data\chimera_turret_greenblack_co.paa","ic_chimera\data\variants_green_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Chimera_TIOW: _1491stChimAuto
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Chimera TIOW";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimera1491st_co.paa","apcs\data\textures\chimerainsignia1491st_ca.paa","apcs\data\textures\chimera_track_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Hydra_Tiow: TIOW_KriegHydra_1491st
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Hydra Tiow";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimera1491st_co.paa","apcs\data\textures\chimerainsignia1491st_ca.paa","apcs\data\textures\tiow_hydra1491_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Tank_Destroyer: B_T_AFV_Wheeled_01_up_cannon_F
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Tank Destroyer";
    hiddenSelectionsTextures[]={"a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext1_green_co.paa","a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext2_green_co.paa","a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_wheel_green_co.paa","a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext3_co.paa","a3\armor_f_tank\afv_wheeled_01\data\afv_commander_tow_co.paa","a3\armor_f\data\camonet_nato_green_co.paa","a3\armor_f_tank\afv_wheeled_01\data\afv_wheeled_01_ext3_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Taurox: IC_Taurox_HS_SL
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Taurox";
    hiddenSelectionsTextures[]={"ic_taurox\data\taurox_sl_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa","ic_taurox\data\addons\addon_armor_taurox_sl_co.paa"};
    crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Tauros_GMG: IC_Tauros_GMG_woodland_F
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_Vehicles";
    side=0;
    displayName="HP Tauros GMG";
    hiddenSelectionsTextures[]={"ic_tauros\data\ic_tauros_green_co.paa","ic_tauros\data\dashboard_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Tauros_HMG: IC_Tauros_HMG_woodland_F
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_Vehicles";
    side=0;
    displayName="HP Tauros HMG";
    hiddenSelectionsTextures[]={"ic_tauros\data\ic_tauros_green_co.paa","ic_tauros\data\dashboard_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Tauros_Venator: IC_Tauros_Venator_woodland_F
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_Vehicles";
    side=0;
    displayName="HP Tauros Venator";
    hiddenSelectionsTextures[]={"ic_tauros\data\ic_tauros_green_co.paa","ic_tauros\data\dashboard_co.paa","ic_tauros\data\ic_venator_turret_green_co.paa","ic_tauros\data\venator_plates_green_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Heavy_Battlecannon: IC_Leman_Russ_02_8th
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Heavy Battlecannon";
    hiddenSelectionsTextures[]={"ic_leman_russ\data\hull_green_co.paa","ic_leman_russ\data\tracks_green_co.paa","ic_leman_russ\data\turret_green_co.paa","ic_leman_russ\data\gun_green_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Heavy_Vanquisher: IC_Leman_Russ_01_desert
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Heavy Vanquisher";
    hiddenSelectionsTextures[]={"ic_leman_russ\data\hull_green_co.paa","ic_leman_russ\data\tracks_green_co.paa","ic_leman_russ\data\turret_green_co.paa","ic_leman_russ\data\gun_green_co.paa"};
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Leman_Annihilator_TIOW: TIOW_Krieg_LR_Annihilator_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Leman Annihilator TIOW";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Leman_Executioner_TIOW: TIOW_Krieg_LR_Executioner_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Leman Executioner TIOW";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Leman_Exterminator_TIOW: TIOW_Krieg_LR_Exterminator_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Leman Exterminator TIOW";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Leman_Punisher_TIOW: TIOW_Krieg_LR_Punisher_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Leman Punisher TIOW";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Super_Heavy_Battlecannon: TIOW_Krieg_Mach_BC_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Super Heavy Battlecannon";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };

  class XI_HP_Super_Heavy_Vanquisher: TIOW_Krieg_Mach_VC_1491st_Blu
  {
		faction = "xi_opf_faction";
		editorcategory = "xi_opf_Helris";
		editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="HP Super Heavy Vanquisher";
        crew="xi_HP_LHT_Infantry_L";
	scope=2;
    typicalCargo[]={"xi_HP_LHT_Infantry_L"};
  };