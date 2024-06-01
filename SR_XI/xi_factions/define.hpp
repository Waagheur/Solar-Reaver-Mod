
#define ARMOR_LIGHT \
        class HitpointsProtectionInfo { \
		class Neck { hitpointName = "HitNeck"; armor = 1; passThrough = 0.5; }; \
		class Arms { hitpointName = "HitArms"; armor = 1; passThrough = 0.5; }; \
		class Chest { hitpointName = "HitChest"; armor = 1; passThrough = 0.6; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = 1; passThrough = 0.6; }; \
		class Abdomen { hitpointName = "HitAbdomen"; armor = 1; passThrough = 0.3; }; \
		class Pelvis { hitpointName = "HitPelvis"; armor = 1; passThrough = 0.3; }; \
		class Body { hitpointName = "HitBody"; passThrough = 0.6; }; \
		class Legs { hitpointName = "HitLegs"; armor = 1; passThrough = 0.3;}; } 

#define ARMOR_LINE \
        class HitpointsProtectionInfo { \
		class Neck { hitpointName = "HitNeck"; armor = 16; passThrough = 0.5; }; \
		class Arms { hitpointName = "HitArms"; armor = 16; passThrough = 0.5; }; \
		class Chest { hitpointName = "HitChest"; armor = 26; passThrough = 0.4; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = 26; passThrough = 0.4; }; \
		class Abdomen { hitpointName = "HitAbdomen"; armor = 26; passThrough = 0.4; }; \
		class Pelvis { hitpointName = "HitPelvis"; armor = 26; passThrough = 0.4; }; \
		class Body { hitpointName = "HitBody"; passThrough = 0.6; }; \
		class Legs { hitpointName = "HitLegs"; armor = 16; passThrough = 0.4;}; } 

#define ARMOR_SHOCK \
        class HitpointsProtectionInfo { \
		class Neck { hitpointName = "HitNeck"; armor = 35; passThrough = 0.5; }; \
		class Arms { hitpointName = "HitArms"; armor = 35; passThrough = 0.5; }; \
		class Chest { hitpointName = "HitChest"; armor = 35; passThrough = 0.6; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = 35; passThrough = 0.6; }; \
		class Abdomen { hitpointName = "HitAbdomen"; armor = 35; passThrough = 0.3; }; \
		class Pelvis { hitpointName = "HitPelvis"; armor = 35; passThrough = 0.3; }; \
		class Body { hitpointName = "HitBody"; passThrough = 0.6; };\
		class Legs { hitpointName = "HitLegs"; armor = 35; passThrough = 0.3;}; } 

#define ARMOR_HELMET_LIGHT \
        class HitpointsProtectionInfo { \
		class Head { hitpointName = "HitHead"; armor = 20; passThrough = 0.5; }; }

#define ARMOR_HELMET_LINE \
        class HitpointsProtectionInfo { \
		class Head { hitpointName = "HitHead"; armor = 40; passThrough = 0.5; }; \
		class Face { hitpointName = "HitFace"; armor = 20; passThrough = 0.5; }; }
		

#define ARMOR_HELMET_SHOCK \
        class HitpointsProtectionInfo { \
		class Head { hitpointName = "HitHead"; armor = 120; passThrough = 0.5; }; \
		class Face { hitpointName = "HitFace"; armor = 120; passThrough = 0.5; }; }



class xi_CU_LIG_Infantry_AG_1;
class ic_elysianBackpack;
class IC_Chimera_01_SoS;
class DM_Chimera_01_SoSMultiLas;
class IC_Leman_Russ_02_SoS;
class IC_Leman_Russ_01_SoS;
class IC_Tauros_GMG_snow_F;
class IC_Tauros_HMG_snow_F;
class IC_Tauros_unarmed_snow_F;
class IC_Tauros_Venator_snow_F;
class IC_Taurox_HS_SL;
class B_Mortar_01_F;
class B_Truck_01_transport_F;
class B_UAV_05_F;
class B_APC_Wheeled_01_cannon_F;
class B_AFV_Wheeled_01_up_cannon_F;
class B_APC_Tracked_01_rcws_F;
class C_M080apc1_civ_F;
class I_E_Offroad_01_comms_F;
class I_E_Truck_02_MRL_F;
class ML700_Basalisk_base_AT_AT_BP;
class ML700_Basalisk_base_AT_BP;
class ML700_Static_Autocannon_Tripod_High_BLOOD;
class ML700_Static_Autocannon_Tripod_BLOOD;
class ML700_Static_HeavyBolter_Tripod_BLOOD;
class ML700_Static_Lascannon_Tripod_BLOOD;
class ML700_Static_MultiLaser_Tripod_BLOOD;
class ML700_Static_MultiLaser_Tripod_High_BLOOD;
class ML700_Static_LockeLauncher_Tripod_BLOOD;
class Valkyrie_Possessed_B_O;
class ML700_Thunderbolt_BLOOD_AIOnly;
class ML700_Static_Lascannon_Tripod_High_BLOOD;
class ML700_Static_HeavyBolter_Tripod_High_BLOOD;

class IC_Leman_Russ_02_8th;
class IC_Leman_Russ_01_desert;
class IC_Chimera_01_desert;
class DM_Chimera_01_desertMultiLas;

class ML700_Taurox_Stubber;
class IC_Taurox_GatlingGun;
class IC_Taurox_BattleCannon;
class IC_Taurox_AutoCannon;