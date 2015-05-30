// sav_arsenal_AAF.sqf
// by SavageCDN
// ====================================================================================
// name an editor object "arsenal_box_AAF"
//  initServer.sqf
// 		[] execVM "scripts\sav_arsenal_AAF.sqf";
// ====================================================================================

private ["_box"];
_box = arsenal_box_AAF;

// ====================================================================================
// weapons

[_box,
	[
		//rifle 
		"arifle_Mk20_F",
		"arifle_Mk20C_F",
		//GL
		"arifle_Mk20_GL_F",
		//MG
		"LMG_Mk200_F",
		"LMG_Mk200_BI_F",
		"LMG_Zafir_F",
		// "MMG_02_camo_F",
		"MMG_02_black_F",
		//sniper
		"srifle_GM6_LRPS_F",
		"srifle_DMR_01_F",
		// "srifle_EBR_F",
		"srifle_DMR_06_camo_F",
		//smg
		"hgun_PDW2000_F",
		//launcher
		"launch_NLAW_F",			//LAT
		"launch_I_Titan_short_F",	//HAT
		"launch_I_Titan_F",			//AA		
		//pistol
		"hgun_ACPC2_F",
		//binocs
		"NVGoggles",
		"RangeFinder",
		"Laserdesignator_03",
		"Binocular"
	], true
] call BIS_fnc_addVirtualWeaponCargo;

// ====================================================================================
// magazines

[_box,
	[
		//rifle
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Green",
		// "30Rnd_556x45_Stanag_Tracer_Yellow",
		// "30Rnd_556x45_Stanag_Tracer_Red",
		//gl
		"UGL_FlareCIR_F",
		"UGL_FlareGreen_F",
		"UGL_FlareRed_F",
		"UGL_FlareYellow_F",
		"UGL_FlareWhite_F",
		"1Rnd_HE_Grenade_shell",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"1Rnd_SmokeBlue_Grenade_shell",
		//mg
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Tracer",
		"150Rnd_762x51_Box",
		"150Rnd_762x51_Box_Tracer",
		"130Rnd_338_Mag",
		//sniper
		"5Rnd_127x108_Mag",
		"5Rnd_127x108_APDS_Mag",
		"10Rnd_762x54_Mag",
		"20Rnd_762x51_Mag",
		//smg
		"16Rnd_9x21_Mag",
		"30Rnd_9x21_Mag",
		//launcher
		"NLAW_F",
		"Titan_AP",
		"Titan_AT",
		"Titan_AA",
		//pistol
		"9Rnd_45ACP_Mag",
		//throw
		"SmokeShell",
		"SmokeShellBlue",
		"SmokeShellYellow",
		"SmokeShellGreen",
		"SmokeShellOrange",
		"SmokeShellPurple",
		"SmokeShellRed",
		"HandGrenade",
		"MiniGrenade",
		"I_IR_Grenade",
		// other
		"Laserbatteries",
		"Chemlight_green",
		"Chemlight_red",
		"ATMine_Range_Mag",
		"APERSTripMine_Wire_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"SLAMDirectionalMine_Wire_Mag",
		"DemoCharge_Remote_Mag",
		"SatchelCharge_Remote_Mag"	
	], true
] call BIS_fnc_addVirtualMagazineCargo;

// ====================================================================================
// items	

[_box,
	[
		"ItemCompass",
		"ItemGPS",
		"ItemMap",
		"ItemWatch",
		"FirstAidKit",
		"Medikit",
		"ToolKit",
		"I_UavTerminal",
		//gun optics
		"optic_Aco_grn",
		"optic_Arco",
		"optic_MRCO",
		"optic_Hamr",
		"optic_holosight",
		"optic_DMS",
		"optic_SOS",
		"optic_LRPS",
		"optic_Nightstalker",
		"optic_NVS",
		"optic_tws",
		"optic_tws_mg",
		"optic_KHS_blk",
		"optic_AMS",
		"optic_Holosight_smg",
		//suppressors
		"muzzle_snds_M",
		"muzzle_snds_acp",
		"muzzle_snds_B",
		"muzzle_snds_L",
		"muzzle_snds_H_MG",
		"muzzle_snds_93mmg",
		"muzzle_snds_338_black",
		"muzzle_snds_338_green",
		//weapon attachments
		"acc_flashlight",
		"acc_pointer_IR",
		"bipod_03_F_oli",
		"bipod_03_F_blk",
		//uniforms
		"U_I_OfficerUniform",
		"U_I_CombatUniform_tshirt",
		"U_I_CombatUniform",
		"U_I_GhillieSuit",
		"U_I_FullGhillie_sard",
		"U_I_HeliPilotCoveralls",
		//vests
		"V_PlateCarrierIA1_dgtl",
		"V_PlateCarrierIA2_dgtl",
		"V_PlateCarrierIAGL_dgtl",
		"V_PlateCarrierIAGL_oli",
		"V_Chestrig_oli",		
		"V_TacVest_oli",
		//helmets
		"H_HelmetIA",
		"H_HelmetIA_net",
		"H_HelmetIA_camo",
		"H_HelmetCrew_I",
		"H_PilotHelmetHeli_I",
		"H_CrewHelmetHeli_I",
		"H_Watchcap_camo",
		"H_Hat_camo",
		//googles (do nothing)
		"G_Spectacles",
		"G_Combat",
		"G_Aviator",
		"G_Sport_Blackred",
		"G_Lowprofile",
		"G_Shades_Black"
	], true
] call BIS_fnc_addVirtualItemCargo;

// ====================================================================================
// backpacks

[_box,
	[
		"I_Mortar_01_support_F",
		"I_Mortar_01_weapon_F",
		"I_HMG_01_support_F",
		"I_HMG_01_support_high_F",
		"I_HMG_01_weapon_F",
		"I_HMG_01_high_weapon_F",
		"I_UAV_01_backpack_F",
		"B_AssaultPack_dgtl",
		"B_TacticalPack_oli",
		"B_Carryall_oli"
	], true
] call BIS_fnc_addVirtualBackpackCargo;

// ====================================================================================

["Preload"] call BIS_fnc_arsenal;

// ====================================================================================
// ====================================================================================