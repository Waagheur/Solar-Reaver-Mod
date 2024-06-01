    // Faction / Armor Values / Type / Weapon / Variant
    // HP / Light (LHT), Line (LIN) or Shock (SHK) / Infantry, vehicle or other / Lasgun, Autogun, Melta or Other / 1, 2, 3...

class pxi_f_gOpfor_TrooperBase: xi_basetrooper_F
{
    displayName = "[LINE] Generic Opfor Base Class";
    side = 0;
    faction = "xi_opf_faction";
    editorcategory = "xi_opfor_Generic";
    editorsubcategory = "xi_opf_infantry";
    scope = 0;
    identityTypes[] = {"LanguageENG_F","NoGlasses"};
    // Exported from Arsenal by [CNT] Bones
    uniformClass = "U_BG_Guerrilla_6_1";
    backpack = "";
    weapons[] = {"Throw","Put"};
    magazines[] = {};
    items[] = {};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class pxi_f_gOpfor_TrooperLine_1: xi_basetrooper_F
{
    displayName = "[LINE] Generic Opfor Lasgunner";
    editorsubcategory = "xi_opf_infantry";
    scope = 2;
    identityTypes[] = {"LanguageENG_F","NoGlasses"};
    // Exported from Arsenal by [CNT] Bones
    uniformClass = "IC_U_feudal_Renegade_B";
    backpack = "";
    weapons[] = {"ic_dm_m36K","Throw","Put"};
    magazines[] = {"ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
    items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    linkedItems[] = {"xi_ElysianArmour_Line","xi_darkTideHelmet_line","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class pxi_f_gOpfor_GDA_Taurox: ML700_Taurox_Stubber
{
    faction = "xi_opf_faction";
    editorcategory = "xi_opfor_Generic";
    editorsubcategory = "xi_opf_vehicles";
    side=0;
    scope = 2;
    displayName="(GDA) Taurox w/ Stubber";
    crew="PXI_CU_Crewman";
    typicalCargo[]={"pxi_f_gOpfor_TrooperLine_1"};
};
class pxi_f_gOpfor_ICP_Taurox_GG: IC_Taurox_GatlingGun
{
    faction = "xi_opf_faction";
    editorcategory = "xi_opfor_Generic";
    editorsubcategory = "xi_opf_vehicles";
    side=0;
    scope = 2;
    displayName="(ICP) Taurox / Gatling Gun";
    crew="PXI_CU_Crewman";
    typicalCargo[]={"pxi_f_gOpfor_TrooperLine_1"};
};
class pxi_f_gOpfor_ICP_Taurox_BC: IC_Taurox_BattleCannon
{
    faction = "xi_opf_faction";
    editorcategory = "xi_opfor_Generic";
    editorsubcategory = "xi_opf_vehicles";
    side=0;
    scope = 2;
    displayName="(ICP) Taurox / Battle Cannon";
    crew="PXI_CU_Crewman";
    typicalCargo[]={"pxi_f_gOpfor_TrooperLine_1"};
};
class pxi_f_gOpfor_ICP_Taurox_AC: IC_Taurox_AutoCannon
{
    faction = "xi_opf_faction";
    editorcategory = "xi_opfor_Generic";
    editorsubcategory = "xi_opf_vehicles";
    side=0;
    scope = 2;
    displayName="(ICP) Taurox / Autocannon";
    crew="PXI_CU_Crewman";
    typicalCargo[]={"pxi_f_gOpfor_TrooperLine_1"};
};







// Generic OPFOR Turrets
#include "pxi_generic_opfor_statics.hpp"