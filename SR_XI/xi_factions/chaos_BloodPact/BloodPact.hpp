	//-------------------------------------------------------------------------------------------Base troppers----------------------------------------------------------------------------------------------------------------------  

	class pxi_BP_light_base: xi_basetrooper_F
	{
		displayName = "[LIGHT] Base";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		scope=2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"Laserbatteries"};
		items[] = {};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};	
	class pxi_BP_line_base: xi_basetrooper_F
	{
		displayName = "[LINE] Base";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		scope=2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};	
	class pxi_BP_shock_base: xi_basetrooper_F
	{
		displayName = "[SHOCK] Base";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		scope=2;
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	
	//-------------------------------------------------------------------------------------------Light troppers----------------------------------------------------------------------------------------------------------------------
	
	class pxi_BP_light_Autogun_1: pxi_BP_light_base
	{
		displayName = "[LIGHT] Autogun (1)";
		
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		
		
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"dm_cad_autogunPara","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
		items[] = {};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};
	class pxi_BP_light_Autogun_2: pxi_BP_light_base
	{
		displayName = "[LIGHT] Autogun (2)";
		
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
	
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"dm_cad_autogunHerlis","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
		items[] = {};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};
	class pxi_BP_light_Lasgun: pxi_BP_light_base
	{
		displayName = "[LIGHT] Lasgun";
		
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"dm_M36ModularV3","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};
	class pxi_BP_light_AT: pxi_BP_light_base
	{
		displayName = "[LIGHT] AT (unguided)";
		
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "B_Messenger_Black_F";
		weapons[] = {"dm_M36ModularV3","IC_CAD_Rocketlauncher_base","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","IC_Krak_rocket_mag","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Krak_rocket_mag"};
		items[] = {};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};
	class pxi_BP_light_Medic: pxi_BP_light_base
	{
		displayName = "[LIGHT] Medic";
		
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		hiddenSelections[] = {attendant = 1};
		
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "ic_elysianBackpack";
		weapons[] = {"dm_M36ModularV2","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_Burnwand","XI_p_Stim","XI_p_Stim","XI_p_HypolettaStim","XI_p_HypolettaStim","ACE_splint","ACE_splint","ACE_splint","ACE_splint","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin"};
		linkedItems[] = {"pxi_BP_vest_light","pxi_BP_Light_Helmet","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS"};
	};
	
	//-------------------------------------------------------------------------------------------Line troppers----------------------------------------------------------------------------------------------------------------------
	
	class pxi_BP_line_SL: pxi_BP_line_base
	{
		displayName = "[LINE] Squadlead";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		//weapons[] = {"ic_cad_LuciusFMPoly","ic_cad_magnoculars","Throw","Put"};
		weapons[] = {"pxi_ic_cad_LuciusFMPoly_dm_M362xSightNM","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","IC_CAD_FRAG_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet","dm_M362xSightNM"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01_silver","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown","dm_M362xSightNM"};
	};
	class pxi_BP_line_Autogun: pxi_BP_line_base
	{
		displayName = "[LINE] Autogun";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"dm_cad_autogun","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_2_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_Lasgun: pxi_BP_line_base
	{
		displayName = "[LINE] Lasgun(1)";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"pxi_dm_M36ModularV1_dm_M36HoloSight","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_Lasgun_2: pxi_BP_line_base
	{
		displayName = "[LINE] Lasgun(2)";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
	
		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"pxi_ic_dm_accatranSight_dm_M36HoloSightNM","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_2_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_Sniper: pxi_BP_line_base
	{
		displayName = "[LINE] Sniper";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"pxi_dm_M36ModularV4_dm_M3610xSight","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"IC_LuciusLongLas_powerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack","IC_LuciusLongLas_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_MG: pxi_BP_line_base
	{
		displayName = "[LINE] Heavy Stubber";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ICP_LMG_01_imp","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_100rnd_825_Tracer_rifleMag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_100rnd_825_Tracer_rifleMag","ic_100rnd_825_Tracer_rifleMag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_LMG: pxi_BP_line_base
	{
		displayName = "[LINE] Las LMG";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_LuciusLMG","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_LMGpowerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_LMGpowerpack","ic_las_LMGpowerpack","ic_las_LMGpowerpack","ic_las_LMGpowerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_Medic: pxi_BP_line_base
	{
		displayName = "[LINE] Medic";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "ic_elysianBackpack";
		weapons[] = {"pxi_dm_M36ModularV2_dm_M36HoloSight","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_TombRobber","XI_p_TombRobber","XI_p_Burnwand","XI_p_Stim","XI_p_Stim","XI_p_HypolettaStim","XI_p_HypolettaStim","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_melta: pxi_BP_line_base
	{
		displayName = "[LINE] Melta Gunner";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_melta","dm_cad_laspistol","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_melta_canister","ic_laspistol_powerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_melta_canister","ic_laspistol_powerpack","ic_laspistol_powerpack","ic_laspistol_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_2_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_AT: pxi_BP_line_base
	{
		displayName = "[LINE] AT (Guided)";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "B_Messenger_Black_F";
		weapons[] = {"pxi_dm_M36ModularV3_dm_M36HoloSight","IC_Launcher_AT_grey","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","IC_krakk_Missile_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_krakk_Missile_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_AA: pxi_BP_line_base
	{
		displayName = "[LINE] Anti Air";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "B_Messenger_Black_F";
		weapons[] = {"pxi_dm_M36ModularV3_dm_M36HoloSight","IC_Launcher_AA_grey","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","IC_Flak_Missile_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","IC_Flak_Missile_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_line","pxi_WR_chaosU_1_base_LIN","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_line_crew: pxi_BP_line_base
	{
		displayName = "[LINE] Crew";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_autogunDM","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_Thracian_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag","ic_Thracian_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"ic_Bloodpact_Vest4","ren_helm_red","IC_Bloodpact_mask_01","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};	
	
	//-------------------------------------------------------------------------------------------Shock troppers----------------------------------------------------------------------------------------------------------------------
	
	class pxi_BP_shock_ST: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Skulltaker";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "IC_Moebian_pack_6th";
		weapons[] = {"ic_cad_magnoculars","IC_Hellgun","Throw","Put"};
		magazines[] = {"ic_hellgun_mag2","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_FRAG_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_SL: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Team Leader";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_bolter","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_bolt_small_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_medic: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Medic";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "ic_elysianBackpack";
		weapons[] = {"pxi_dm_M36ModularV1_dm_M362xSight","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_ArtiBlood500","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_Sealant","XI_p_TombRobber","XI_p_TombRobber","XI_p_Burnwand","XI_p_Stim","XI_p_Stim","XI_p_HypolettaStim","XI_p_HypolettaStim","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_autogun: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Autogun";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"pxi_dm_cad_autogun_ic_las_optic_2x","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_30rnd_825_rifleMag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag","ic_30rnd_825_rifleMag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_Lasgun: pxi_BP_shock_base
	{
		displayName = "[SHOCK] lasgun";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"pxi_dm_M36ModularV1_dm_M362xSight","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_las_powerpack","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack","ic_las_powerpack"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_Bolter: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Bolter(Grenadier)";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_cad_bolter","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_bolt_small_mag","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","ic_bolt_small_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	class pxi_BP_shock_Plasma: pxi_BP_shock_base
	{
		displayName = "[SHOCK] Plasma gunner";
		side = 0;
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_infantry";
		
		identityTypes[] = {"LanguageENG_F","NoGlasses"};

		// Exported from Arsenal by [CG/HP] "Kyrent"
		uniformClass = "IC_ChaosRenegade_U_V2Red_B";
		backpack = "";
		weapons[] = {"ic_PlasmaGunRed","ic_cad_magnoculars","Throw","Put"};
		magazines[] = {"ic_plasma_canisterRed","Laserbatteries","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","IC_CAD_SMOKE_mag","ic_plasma_canisterRed","ic_plasma_canisterRed","ic_plasma_canisterRed","ic_plasma_canisterRed","ic_plasma_canisterRed"};
		items[] = {"XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SealNGo","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","XI_p_SynthSkin","ACE_splint","ACE_tourniquet"};
		linkedItems[] = {"pxi_BP_vest_shock","pxi_WR_chaosU_1_base_SH","IC_Bloodpact_mask_02","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","ic_AjaxGogglesDown"};
	};
	
	//----------------------------------------------------------------------------------------------Vehicles---------------------------------------------------------------------------------------------------------------------------

	class pxi_Leman_Russ_BC_BP: IC_Leman_Russ_02_8th
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_armoured";
		scope=2;
		side=0;
		displayName="Leman Russ (Battle Cannon)";
		hiddenSelectionsTextures[]={"ic_departmento_munitorum\dm_vicchanges\data\dm_hull_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_tracks_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_turret_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_gun_bpact.paa"};
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};

	class pxi_Leman_Russ_V_BP: IC_Leman_Russ_01_desert
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_armoured";
		scope=2;
		side=0;
		displayName="Leman Russ (Vanquisher)";
		hiddenSelectionsTextures[]={"ic_departmento_munitorum\dm_vicchanges\data\dm_hull_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_tracks_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_turret_bpact.paa","ic_departmento_munitorum\dm_vicchanges\data\dm_gun_bpact.paa"};
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};

	class pxi_Chimera_AC_BP: IC_Chimera_01_desert
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_armoured";
		scope=2;
		side=0;
		displayName="Chimera (Autocanon)";
		hiddenSelectionsTextures[]={"ic_departmento_munitorum\dm_vicchanges\data\chimera_hull_bp_co.paa","ic_departmento_munitorum\dm_vicchanges\data\chimera_tracks_bp_co.paa","ic_departmento_munitorum\dm_vicchanges\data\chimera_turret_bp_co.paa"};
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};

	class pxi_Chimera_ML_BP: DM_Chimera_01_desertMultiLas
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_armoured";
		scope=2;
		side=0;
		displayName="Chimera (Multylas)";
		hiddenSelectionsTextures[]={"ic_departmento_munitorum\dm_vicchanges\data\chimera_hull_bp_co.paa","ic_departmento_munitorum\dm_vicchanges\data\chimera_tracks_bp_co.paa","ic_departmento_munitorum\dm_vicchanges\data\chimera_turret_bp_co.paa"};
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};

	class pxi_BP_Valkyrie: PXI_CU_Valkyrie
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_aircraft";
		scope=2;
		side=0;
		displayName="Valkyrie";
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};

	class pxi_BP_Thunderbolt: PXI_CU_Thunderbolt
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_aircraft";
		scope=2;
		side=0;
		displayName="Thunderbolt";
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};
  
	class pxi_taurox_BP: IC_Taurox_HS_SL
	{
		faction = "xi_opf_faction_BP";
		editorcategory = "xi_opf_BP";
		editorsubcategory = "xi_opf_vehicles";
		scope=2;
		side=0;
		displayName="Taurox w.Heavy Stubber";
		hiddenSelectionsTextures[]={"ic_taurox\data\taurox_sl_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa","ic_taurox\data\addons\addon_armor_taurox_sl_co.paa"};
		crew="pxi_BP_line_crew";
		typicalCargo[]={"pxi_BP_line_crew"};
	};
	