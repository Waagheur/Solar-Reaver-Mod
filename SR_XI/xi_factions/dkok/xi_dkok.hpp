class xi_dkok_base_line: xi_basetrooper_F
{
	displayName = "UwU Line";
	side = 0;
	faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
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

class xi_dkok_base_light: xi_dkok_base_line
{
	displayName = "UwU Light";
	editorsubcategory = "xi_opf_infantry_light";
};

class xi_dkok_base_shock: xi_dkok_base_line
{
	displayName = "UwU Shock";
	editorsubcategory = "xi_opf_infantry_shock";
};

class xi_dk_light_infantry_LG: xi_dkok_base_light
{
    displayName = "[LIGHT] Rifleman (Lasgun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_light_infantry_LG_G: xi_dkok_base_light
{
    displayName = "[LIGHT] Rifleman (Lasgun/Grenades)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_light_infantry_AG: xi_dkok_base_light
{
	displayName = "[LIGHT] Rifleman (Autogun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_AgripinaaType2_1","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"30Rnd_Agrip_mag","Laserbatteries","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_light_infantry_HS: xi_dkok_base_light
{
	displayName = "[LIGHT] Machinegunner (Heavy Stubber)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"KriegHeavyStubberDK","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_50Rnd_Stubber_mag","Laserbatteries","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_light_infantry_LL: xi_dkok_base_light
{
	displayName = "[LIGHT] Marksman (LongLas)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_LongLas_776","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_LongLas_Mag","Laserbatteries","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_LG: xi_dkok_base_line
{
	displayName = "[LINE] Rifleman (Lasgun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_LG_G: xi_dkok_base_line
{
	displayName = "[LINE] Rifleman (Lasgun/Grenades)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_AG: xi_dkok_base_line
{
	displayName = "[LINE] Rifleman (Autogun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_AgripinaaType2_1","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"30Rnd_Agrip_mag","Laserbatteries","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_HS: xi_dkok_base_line
{
	displayName = "[LINE] Machinegunner (Heavy Stubber)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"KriegHeavyStubberDK","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_50Rnd_Stubber_mag","Laserbatteries","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infatry_LL: xi_dkok_base_line
{
	displayName = "[LINE] Marksman (LongLas)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_LongLas_776","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_LongLas_Mag","Laserbatteries","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_M: xi_dkok_base_line
{
	displayName = "[LINE] Meltagunner";
	scope = 2;
// Exported from Arsenal by [SLGN] Dwev
uniformClass = "DKoK_Gren_Uniform_82nd";
backpack = "DKoK_BackPack";
weapons[] = {"TIOW_MeltaGun_01","ic_cad_magnoculars","Throw","Put"};
magazines[] = {"TIOW_Meltagun_Mag","Laserbatteries","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};
items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_line_infantry_GAT: xi_dkok_base_line
{
	displayName = "[LINE] Rifleman (AT)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","MissileLauncherDKOKBlack","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","MLAT_Mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","MLAT_Mag","MLAT_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIN_1","xi_DKOK_Helm_LIN","DKOKEngMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_LG: xi_dkok_base_shock
{
	displayName = "[SHOCK] Rifleman (Lasgun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_LG_G: xi_dkok_base_shock
{
	displayName = "[SHOCK] Rifleman (Lasgun/Grenades)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_AG: xi_dkok_base_shock
{
	displayName = "[SHOCK] Rifleman (Autogun)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_AgripinaaType2_1","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"30Rnd_Agrip_mag","Laserbatteries","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_HS: xi_dkok_base_shock
{
	displayName = "[SHOCK] Machinegunner (Heavy Stubber)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"KriegHeavyStubberDK","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_50Rnd_Stubber_mag","Laserbatteries","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag","VNG_150Rnd_Stubber_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infatry_LL: xi_dkok_base_shock
{
	displayName = "[SHOCK] Marksman (LongLas)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_LongLas_776","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_LongLas_Mag","Laserbatteries","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_M: xi_dkok_base_shock
{
	displayName = "[SHOCK] Meltagunner";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_MeltaGun_01","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"TIOW_Meltagun_Mag","Laserbatteries","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_GAT: xi_dkok_base_shock
{
	displayName = "[SHOCK] Rifleman (AT)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","MissileLauncherDKOKBlack","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","MLAT_Mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","MLAT_Mag","MLAT_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_B: xi_dkok_base_shock
{
	displayName = "[SHOCK] Bolter specialist";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"ic_cad_bolter","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_bolt_small_mag","Laserbatteries","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_B_AT: xi_dkok_base_shock
{
	displayName = "[SHOCK] Bolter specialist (AT)";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"ic_cad_bolter","MissileLauncherDKOKBlack","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"ic_bolt_small_mag","MLAT_Mag","Laserbatteries","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","MLAT_Mag","MLAT_Mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_shock_infantry_P: xi_dkok_base_shock
{
	displayName = "[SHOCK] Plasmagunner";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"TIOW_IG_Plasmagun_01","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"DK_PlasmaGun_Flask","Laserbatteries","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_SH_1","xi_DKOK_Helm_SH","DKOKGrenMask82nd","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class xi_dk_light_crew_1: xi_dkok_base_light
{
	displayName = "[DK] Crewman";
	scope = 2;
	// Exported from Arsenal by [SLGN] Dwev
	uniformClass = "DKoK_Gren_Uniform_82nd";
	backpack = "DKoK_BackPack";
	weapons[] = {"Lucius98LasgunBlackG","ic_cad_magnoculars","Throw","Put"};
	magazines[] = {"Lucius98_mag","Laserbatteries","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag","Lucius98_mag"};
	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint"};
	linkedItems[] = {"pxi_WR_DKOK_armor_base_LIT_1","DKoK_GM_Helm_82nd","DKOKTroopMask","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};









// Vehicles

class _82ndChimAuto;
class TIOW_Centaur_01_Krieg_82_Blu;
class TIOW_DKOKTrojan_82;
class TIOW_Krieg_LR_Annihilator_82nd_Blu;
class TIOW_Krieg_LR_Vanquisher_82nd_Blu;
class TIOW_Krieg_Mach_BC_82nd_Blu;

class xi_DK_Chimera: _82ndChimAuto
{
	faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_armoured";
    side=0;
	scope=2;
    displayName="DK Chimera (Autocannon)";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimera82nd_co.paa","apcs\data\textures\chimerainsignia82nd_ca.paa","apcs\data\textures\chimera_track_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};

class xi_DK_Centaur: TIOW_Centaur_01_Krieg_82_Blu
{
	faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_vehicles";
    side=0;
	scope=2;
    displayName="DK Centaur";
    hiddenSelectionsTextures[]={"whtransports\data\tiow_centaur_grey_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};

class xi_DK_Trojan: TIOW_DKOKTrojan_82
{
    faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_armoured";
    side=0;
	scope=2;
    displayName="DK Trojan";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimera82nd_co.paa","apcs\data\textures\chimerainsignia82nd_ca.paa","apcs\data\textures\tiow_expansion_chassis_82_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};

class xi_DK_LR_Annihilator: TIOW_Krieg_LR_Annihilator_82nd_Blu
{
    faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_armoured";
    side=0;
	scope=2;
    displayName="DK Leman Russ Annihilator";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsignia82nd_ca.paa","whtracked\lrmiv\data\lr_krieg82nd_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};

class xi_DK_LR_Vanquisher: TIOW_Krieg_LR_Vanquisher_82nd_Blu
{
    faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_armoured";
    side=0;
	scope=2;
    displayName="DK Leman Russ Vanquisher";
    hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsignia82nd_ca.paa","whtracked\lrmiv\data\lr_krieg82nd_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};

class xi_DK_Macharius_HT: TIOW_Krieg_Mach_BC_82nd_Blu
{
    faction = "xi_opf_faction_dkok";
	editorcategory = "xi_opf_DKOK";
	editorsubcategory = "xi_opf_armoured";
    side=0;
	scope=2;
    displayName="DK Macharius Heavy Tank";
    hiddenSelectionsTextures[]={"tiow_armor\data\textures\82dk_mach_co.paa","tiow_armor\data\textures\macharius_tracks_co.paa"};
    crew="xi_dk_light_crew_1";
    typicalCargo[]={"xi_dk_light_crew_1"};
};
