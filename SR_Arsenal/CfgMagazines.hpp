class TIOW_Meltagun_Mag;
class Steve_Trig_BoltPistolMag;
class Steve_Phob_BoltPistolMag;
class Steve_30k_lascutter_Mag;
class TIOW_30rnd_GodwynBoltgunMag;
class Steve_SM_PlasmaPistol_Mag;
class Steve_Umbra_BoltgunMag;

class Steve_Phob_Atrox_BoltgunMag;

class MRAWS_HE_F;

class TIOW_SM_Rocket_Frag_Mag;
class TIOW_SM_Rocket_Krak_Mag;

class Steve_SM_Grav_Mag;
class Steve_Volkite_Cav_Mag;
class Steve_Volkite_Charger_Mag;
class Steve_Volkite_Can_Mag_1;
class Steve_Volkite_PistolMag;

class HandGrenade_Stone;

class Steve_Trig_BoltgunMag_DF;
class Steve_Trig_Exitus_BoltgunMag_DF;
class Steve_Trig_BoltPistolMag_DF;
class Steve_Phob_BoltgunMag_DF;
class Steve_Phob_BoltPistolMag_DF;
class Steve_Phob_CombiBoltgunMag_DF;
class Steve_Phob_Atrox_BoltgunMag_DF;

class IC_frag_Missile_mag;
class IC_krakk_Missile_mag;
class TIOW_SM_Rocket_Frag_Mag_LSLOT;
class TIOW_SM_Rocket_Krak_Mag_LSLOT;

class CfgMagazines
{
	class SR_Master_Crafted_Phobos_BoltPistol_Mag: Steve_Phob_BoltPistolMag
	{
		displayName="[TSR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[TSR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Master_Crafted_Tigrus_BoltPistol_Mag: Steve_Trig_BoltPistolMag
	{
		displayName="[TSR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[TSR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Meltagun_Mag: TIOW_Meltagun_Mag
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="SR_Meltagun_Ammo";
		displayName="[TSR] Meltagun Ammo";
		initSpeed=1500;
		count=5;
		mass=40;
	};
	class SR_Master_Crafted_Meltagun_Mag: SR_Meltagun_Mag
	{
		ammo="SR_Master_Crafted_Meltagun_Ammo";
		displayName="[TSR] [Master Crafted] Meltagun Ammo";
	};
	class SR_Lascutter_Mag: Steve_30k_lascutter_Mag
	{
		displayName="[TSR] Lasscutter Core";
		descriptionShort="[TSR] Lasscutter Core";
		ammo="SR_Lascutter_Round";
		initSpeed=1500;
		count=10;
		mass=20;
	};
	class SR_LasFusil_Mag: TIOW_30rnd_GodwynBoltgunMag
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[TSR] LasFusil Flask";
		count = 15;
		mass = 25;
		descriptionShort = "[TSR] LasFusil Flask";
		picture = "\TIOW_SMWep\Icon\RagefireMag_ca.paa";
		ammo = "SR_LasFusil_Rnd";
		initSpeed = 1000;
		maxLeadSpeed = 150;
		tracersEvery = 1;
	};
	
	class SR_PlasmaPistol_Mag: Steve_SM_PlasmaPistol_Mag
	{
		scope = 2;
		author="Waagheur";
		displayName="[TSR] Plasma Pistol Flask";
		descriptionShort="Plasma Pistol flask";
		ammo="SR_PlasmaPistolRound";
		mass = 12;
		count = 20;
	};

	class SR_Steve_Umbra_BoltgunMag: Steve_Umbra_BoltgunMag
	{
		mass = 25;
		picture = "\TIOW_SMWep\Icon\GodwynBolter30Mag_ca.paa";
		displayName = "[AOD] Umbra Boltgun Magazine 60 Rnd.";
		ammo = "Steve_Umbra_SmBoltRound";
		count = 60;
		descriptionShort = "[AOD] Tigrus Boltgun Magazine 60 Rnd.";
	};
	
	
	
	// Standardised phobos atrox
	class SR_Steve_Phob_Atrox_BoltgunMag: Steve_Phob_Atrox_BoltgunMag
	{
		displayName = "[TSR] [AOD] Phobos Boltgun Magazine 10 Rnd.";
		ammo="SR_Steve_Phob_Atrox_SmBoltRound";
		initSpeed=1500;
	};
	
	
	
	// Disposable rocket.
	class SR_Disposable_Rocket_Mag: MRAWS_HE_F
	{
		ammo="SR_Disposable_Rocket_Ammo";
		descriptionShort="[TSR] Disposable Rocket";
		displayName="[TSR] Disposable Rocket";
		displayNameShort="HEAT";
		initSpeed=350;
		mass=40;
	};
	
	class SR_Light_Frag_Missile_LSLOT: TIOW_SM_Rocket_Frag_Mag_LSLOT
	{
		displayName = "[TSR] Light Frag Missile";
		descriptionShort = "[TSR] Light Frag Missile";
		initSpeed = 100;
		mass = 30;
		ammo = "SR_Light_Frag_Missile_Round_LSLOT";
	};
	
	class SR_Light_Frag_Missile: TIOW_SM_Rocket_Frag_Mag
	{
		displayName = "[TSR] Light Frag Rocket";
		descriptionShort = "[TSR] Light Frag Rocket";
		initSpeed = 50;
		mass = 20;
		ammo = "SR_Light_Frag_Missile_Round";
	};
	
	
	
	// Grav
	class SR_SM_Grav_Mag : Steve_SM_Grav_Mag
	{
		ammo = "SR_SM_Grav_Mag_Rnd";
		count = 100;
		initSpeed = 1050;
		mass = 60;
	};
	
	// Volkite
	class SR_Volkite_Cav_Mag : Steve_Volkite_Cav_Mag
	{
		ammo = "SR_Volkite_Cav_Rnd";
		count = 60;
		initSpeed = 1050;
	};
	class SR_Volkite_Charger_Mag : Steve_Volkite_Charger_Mag
	{
		ammo = "SR_Volkite_Charger_Rnd";
		count = 30;
		initSpeed = 1050;
	};
	class SR_Volkite_Can_Mag_1 : Steve_Volkite_Can_Mag_1
	{
		ammo = "SR_Volkite_Culv_Rnd";
		count = 30;
		initSpeed = 1000;
		mass = 50;
	};
	class SR_Volkite_PistolMag : Steve_Volkite_PistolMag
	{
		ammo = "SR_Volkite_Charger_Rnd";
		count = 15;
		initSpeed = 1050;
	};
	
	
	
	
	// Special Issue Grenades
	
	class SR_Mag_Rad_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;       
		displayName = "[SR] Rad Grenade";
		displayNameShort = "[SR] Rad Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Rad_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=10;
	};
	class SR_Mag_Earthshaker_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;       
		displayName = "[SR] Earthshaker Grenade";
		displayNameShort = "[SR] Earthshaker Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Earthshaker_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=10;
	};
	class SR_Mag_Stasis_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] Stasis Grenade";
		displayNameShort = "[SR] Stasis Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Stasis_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=10;
	};
	class SR_Mag_Tanglefoot_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] Tanglefoot Grenade";
		displayNameShort = "[SR] Tanglefoot Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Tanglefoot_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=10;
	};
	class SR_Mag_Antigrav_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] Antigrav Grenade";
		displayNameShort = "[SR] Antigrav Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Antigrav_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=10;
	};
	class SR_Mag_Vortex_Grenade: HandGrenade_Stone
	{
		author = "Waagheur";
		scope = 2;        
		scopeArsenal = 2;        
		displayName = "[SR] Vortex Grenade";
		displayNameShort = "[SR] Vortex Grenade";
		value = 0.1;
		ammo = "SR_Ammo_Vortex_Grenade";
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_mag.p3d";
		picture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		UIpicture="\TIOW_IG_Explosives\TIOW_ig_frag_grenade\data\frag_icon.paa";
		initSpeed=25;
		mass=100;
	};
	
	
	
	// DragonFire Magazines (fire aoe)
	
	class SR_Trig_BoltgunMag_DF: Steve_Trig_BoltgunMag_DF
	{
		
	};
	
	class SR_Trig_Exitus_BoltgunMag_DF: Steve_Trig_Exitus_BoltgunMag_DF
	{
		
	};
	
	class SR_Trig_BoltPistolMag_DF: Steve_Trig_BoltPistolMag_DF
	{
		
	};
	
	class SR_Phob_BoltgunMag_DF: Steve_Phob_BoltgunMag_DF
	{
		
	};
	
	class SR_Phob_BoltPistolMag_DF: Steve_Phob_BoltPistolMag_DF
	{
		
	};
	
	class SR_Phob_CombiBoltgunMag_DF: Steve_Phob_CombiBoltgunMag_DF
	{
		
	};
	
	class SR_Phob_Atrox_BoltgunMag_DF: Steve_Phob_Atrox_BoltgunMag_DF
	{
		
	};
	
	
	
	// SR missile mags
	
	class SR_IC_frag_Missile_mag: IC_frag_Missile_mag
	{
		displayName="[TSR] [PXI] Frag Missile";
		ammo = "SR_IC_Frag_Missile";
		
		mass = 40;
		initSpeed = 50;
	};
	class SR_IC_krakk_Missile_mag: IC_krakk_Missile_mag
	{
		displayName="[TSR] [PXI] Krak Missile";
		ammo = "SR_IC_Krakk_Missile";
		
		mass = 40;
		initSpeed = 50;
	};
	class SR_TIOW_SM_Rocket_Frag_Mag_LSLOT: TIOW_SM_Rocket_Frag_Mag_LSLOT
	{
		displayName="[TSR] [Astartes] Frag Missile";
		ammo = "SR_TIOW_SM_Rocket_Frag_Round_LSLOT";
		
		mass = 40;
		initSpeed = 50;
	};
	class SR_TIOW_SM_Rocket_Krak_Mag_LSLOT: TIOW_SM_Rocket_Krak_Mag_LSLOT
	{
		displayName="[TSR] [Astartes] Krak Missile";
		ammo = "SR_TIOW_SM_Rocket_Krak_Round_LSLOT";
		
		mass = 40;
		initSpeed = 50;
	};
	
	// SM rockets mag
	
	class SR_TIOW_SM_Rocket_Frag_Mag: TIOW_SM_Rocket_Frag_Mag
	{
		displayName="[TSR] [Astartes] Frag Rocket";
		ammo = "SR_TIOW_SM_Rocket_Frag_Round_LSLOT";
		
		mass = 30;
		initSpeed = 50;
	};
	class SR_TIOW_SM_Rocket_Krak_Mag: TIOW_SM_Rocket_Krak_Mag
	{
		displayName="[TSR] [Astartes] Krak Rocket";
		ammo = "SR_TIOW_SM_Rocket_Krak_Round_LSLOT";
		
		mass = 30;
		initSpeed = 50;
	};
	
	// Visibomb missile mags
	
	class SR_VB_IC_frag_Missile_mag: IC_frag_Missile_mag
	{
		displayName="[TSR] [PXI] Visibomb Frag Missile";
		ammo = "SR_VB_IC_Frag_Missile";
		
		mass = 60;
		initSpeed = 50;
	};
	class SR_VB_IC_krakk_Missile_mag: IC_krakk_Missile_mag
	{
		displayName="[TSR] [PXI] Visibomb Krak Missile";
		ammo = "SR_VB_IC_Krakk_Missile";
		
		mass = 60;
		initSpeed = 50;
	};
	class SR_VB_TIOW_SM_Rocket_Frag_Mag_LSLOT: TIOW_SM_Rocket_Frag_Mag_LSLOT
	{
		displayName="[TSR] [Astartes] Visibomb Frag Missile";
		ammo = "SR_VB_TIOW_SM_Rocket_Frag_Round_LSLOT";
		
		mass = 60;
		initSpeed = 50;
	};
	class SR_VB_TIOW_SM_Rocket_Krak_Mag_LSLOT: TIOW_SM_Rocket_Krak_Mag_LSLOT
	{
		displayName="[TSR] [Astartes] Visibomb Krak Missile";
		ammo = "SR_VB_TIOW_SM_Rocket_Krak_Round_LSLOT";
		
		mass = 60;
		initSpeed = 50;
	};
	
};