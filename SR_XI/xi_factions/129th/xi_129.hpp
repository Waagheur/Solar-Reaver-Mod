// Base classes

class xi_129_base_line: xi_basetrooper_F
{
	displayName = "UwU Line";
	side = 0;
	faction = "xi_opf_faction_129";
	editorcategory = "xi_opf_129";
	editorsubcategory = "xi_opf_infantry_line";
	scope = 0;
	identityTypes[] = {"LanguageENG_F","NoGlasses"};
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "U_Competitor";
	backpack = "";
	weapons[] = {"Throw","Put"};
	magazines[] = {};
	items[] = {};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class xi_129_base_light: xi_129_base_line
{
	displayName = "UwU Light";
	editorsubcategory = "xi_opf_infantry_light";
};

// Light Infantry

class xi_129_light_infantry_LG: xi_129_base_light
{
    displayName = "[LIGHT] Lasgunner";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_M36ModularV2","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_inf","129th_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_LG_G: xi_129_base_light
{
    displayName = "[LIGHT] Lasgunner (Grenades)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_M36ModularV2","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_inf","129th_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_AG: xi_129_base_light
{
    displayName = "[LIGHT] Autogunner";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_cad_autogunHerlis","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_inf","129th_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_AG_G: xi_129_base_light
{
    displayName = "[LIGHT] Autogunner (Grenades)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_cad_autogunHerlis","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_inf","129th_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_AA: xi_129_base_light
{
    displayName = "[LIGHT] Anti-Air Specialist";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_camo";
	backpack = "ic_cad_RocketPack_NoStraps";
	weapons[] = {"dm_M36ModularV2","IC_Launcher_AA_grey","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","IC_Flak_Missile_mag","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Flak_Missile_mag","IC_Flak_Missile_mag","IC_Flak_Missile_mag","IC_Flak_Missile_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_Spec","129th_cap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_AT: xi_129_base_light
{
    displayName = "[LIGHT] Anti-Tank Specialist";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_camo";
	backpack = "ic_cad_RocketPack_NoStraps";
	weapons[] = {"dm_M36ModularV2","IC_Launcher_AT_grey","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","IC_krakk_Missile_mag","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_krakk_Missile_mag","IC_krakk_Missile_mag","IC_krakk_Missile_mag","IC_krakk_Missile_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_Spec","129th_cap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_CPL: xi_129_base_light
{
    displayName = "[LIGHT] Team Leader (Cpl)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_coat_o";
	backpack = "ic_elysianBackpack";
	weapons[] = {"ic_cad_LuciusLongLas","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_Cpl","129th_cap_o2","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_infantry_SGT: xi_129_base_light
{
    displayName = "[LIGHT] Squad Leader (Sgt)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_coat_o";
	backpack = "ic_elysianBackpack";
	weapons[] = {"ic_cad_bolter","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_bolt_small_mag","Laserbatteries","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_Sgt","129th_cap_o","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_light_crew: xi_129_base_light
{
    displayName = "[LIGHT] Crew dude";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_coat_o";
	backpack = "ic_elysianBackpack";
	weapons[] = {"ic_cad_magnoculars","ic_cad_autogunDM","Throw","Put"};
	magazines[] = {"Laserbatteries","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_light_Spec","129th_beret","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

// Line Infantry

class xi_129_line_infantry_LG: xi_129_base_line
{
    displayName = "[LINE] Lasgunner";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_M36ModularV2","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_inf","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_LG_G: xi_129_base_line
{
    displayName = "[LINE] Lasgunner (Grenades)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_M36ModularV2","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_inf","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_AG: xi_129_base_line
{
    displayName = "[LINE] Autogunner";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_cad_autogunHerlis","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_inf","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_AG_G: xi_129_base_line
{
    displayName = "[LINE] Autogunner (Grenades)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform";
	backpack = "ic_elysianBackpack";
	weapons[] = {"dm_cad_autogunHerlis","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_inf","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_AA: xi_129_base_line
{
    displayName = "[LINE] Anti-Air Specialist";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_camo";
	backpack = "ic_cad_RocketPack_NoStraps";
	weapons[] = {"dm_M36ModularV2","IC_Launcher_AA_grey","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","IC_Flak_Missile_mag","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Flak_Missile_mag","IC_Flak_Missile_mag","IC_Flak_Missile_mag","IC_Flak_Missile_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_Spec","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_AT: xi_129_base_line
{
    displayName = "[LINE] Anti-Tank Specialist";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_camo";
	backpack = "ic_cad_RocketPack_NoStraps";
	weapons[] = {"dm_M36ModularV2","IC_Launcher_AT_grey","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","IC_krakk_Missile_mag","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_krakk_Missile_mag","IC_krakk_Missile_mag","IC_krakk_Missile_mag","IC_krakk_Missile_mag"};
	items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_Spec","pxi_129_line_H","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_CPL: xi_129_base_line
{
    displayName = "[LINE] Team Leader (Cpl)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_camo_o";
	backpack = "ic_elysianBackpack";
	weapons[] = {"ic_cad_LuciusLongLas","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_Cpl","pxi_129_line_H_Cpl","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_line_infantry_SGT: xi_129_base_line
{
    displayName = "[LINE] Squad Leader (Sgt)";
	scope = 2;
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_uniform_o";
	backpack = "ic_elysianBackpack";
	weapons[] = {"ic_cad_bolter","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_bolt_small_mag","Laserbatteries","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"pxi_129_line_V_Sgt","pxi_129_line_H_Sgt","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

// Da Commissar Boyo's

class xi_129_Commissar: xi_129_base_line
{
    displayName = "129th Commissar Ben";
	scope = 2;
	editorsubcategory = "xi_opf_special";
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_commissar_uniform";
	backpack = "";
	weapons[] = {"TIOW_Bolt_Pistol","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_IGBoltPistol_Mag","Laserbatteries","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"129th_invisible","129th_commissar_cap","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_129_Commissar_2: xi_129_base_line
{
	displayName = "129th Commissar Fred";
	scope = 2;
	editorsubcategory = "xi_opf_special";
	// Exported from Arsenal by [P.LCPL] Dwev
	uniformClass = "129th_commissar_uniform2";
	backpack = "";
	weapons[] = {"TIOW_Bolt_Pistol","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_IGBoltPistol_Mag","Laserbatteries","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
	linkedItems[] = {"129th_invisible","129th_commissar_cap2","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

// Vehicles

class IC_Chimera_01_snow;
class IC_Leman_Russ_02_snow;
class IC_Leman_Russ_01_snow;
class pxi_129_chimera: IC_Chimera_01_snow
  {
    faction = "xi_opf_faction_129";
	editorcategory = "xi_opf_129";
	editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="Chimera";
    hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_beige_co.paa","ic_chimera\data\chimera_tracks_beige_co.paa","ic_chimera\data\chimera_turret_beige_co.paa"};
    crew="xi_129_light_crew";
    typicalCargo[]={"xi_129_light_crew"};
  };

  class pxi_129_lr_bc: IC_Leman_Russ_02_snow
  {
    faction = "xi_opf_faction_129";
	editorcategory = "xi_opf_129";
	editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="Leman Russ Battle Cannon";
    hiddenSelectionsTextures[]={"ic_leman_russ\data\hull_beige_co.paa","ic_leman_russ\data\tracks_beige_co.paa","ic_leman_russ\data\turret_beige_co.paa","ic_leman_russ\data\gun_beige_co.paa"};
    crew="xi_129_light_crew";
    typicalCargo[]={"xi_129_light_crew"};
  };

  class pxi_129_lr_vanquisher: IC_Leman_Russ_01_snow
  {
    faction = "xi_opf_faction_129";
	editorcategory = "xi_opf_129";
	editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="Leman Russ Vanquisher";
    hiddenSelectionsTextures[]={"ic_leman_russ\data\hull_beige_co.paa","ic_leman_russ\data\tracks_beige_co.paa","ic_leman_russ\data\turret_beige_co.paa","ic_leman_russ\data\gun_beige_co.paa"};
    crew="xi_129_light_crew";
    typicalCargo[]={"xi_129_light_crew"};
  };

  class pxi_129_chimedon: IC_Chimedon_01_desert
  {
    faction = "xi_opf_faction_129";
	editorcategory = "xi_opf_129";
	editorsubcategory = "xi_opf_armoured";
    side=0;
    displayName="Chimedon";
    hiddenSelectionsTextures[]={"ic_chimera\data\chimera_hull_beige_co.paa","ic_chimera\data\chimera_tracks_beige_co.paa","ic_chimera\data\chimera_turret_beige_co.paa","ic_chimera\data\variants_beige_co.paa"};
    crew="xi_129_light_crew";
    typicalCargo[]={"xi_129_light_crew"};
  };