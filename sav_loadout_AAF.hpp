// sav_loadout_AAF.hpp
// by SavageCDN
// ====================================================================================
// Use with BIS respawnTemplates
//  description.ext
// 		respawnTemplates[] = {"MenuInventory"};
// 		class CfgRespawnInventory
// 		{
//	 		#include "rsc\loadout_aaf.hpp"
// 		};
//	initServer.sqf (or init.sqf)
//  	[resistance, 'SAV_AAF_FTL'] call BIS_fnc_addRespawnInventory;
// ====================================================================================

class SAV_AAF_FTL 
{
	displayName = "Fireteam Leader";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"arifle_Mk20_GL_F", "hgun_ACPC2_F", "NVGoggles", "Laserdesignator_03"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
		"SmokeShell", "SmokeShell", "SmokeShell","SmokeShell",
		"SmokeShellGreen", "SmokeShellOrange",
		"HandGrenade", "HandGrenade",
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell",
		"Laserbatteries"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn", "muzzle_snds_M"}; 
	linkedItems[] = {
		"V_PlateCarrierIA2_dgtl", "H_HelmetIA", 
		"optic_Arco", "acc_flashlight", "acc_pointer_IR", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform_tshirt"; 
	backpack = "B_TacticalPack_oli"; 	
	// vehicle = "I_Soldier_SL_F";
	// vehicleIgnore[] = {"uniform","vest","headgear"};
	// uniformClass = "U_B_CTRG_3";
	// linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin"};
};
// ====================================================================================
class SAV_AAF_RIFLE 
{
	displayName = "Rifleman";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	show = "side group _this == resistance"; //or guerilla?
	weapons[] = {"arifle_Mk20_F", "hgun_ACPC2_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", 
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", 
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", 
		"SmokeShell", "SmokeShell", "SmokeShell","SmokeShell",
		"HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn", "muzzle_snds_M"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_CrewHelmetHeli_I", 
		"optic_MRCO", "acc_flashlight", "acc_pointer_IR", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	backpack = "B_TacticalPack_oli"; 	
	// vehicle = "I_Soldier_F";
};
// ====================================================================================
class SAV_AAF_LAT
{
	displayName = "Rifleman AT";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	show = "side group _this == resistance"; //or guerilla?
	weapons[] = {"arifle_Mk20_F", "hgun_ACPC2_F", "launch_NLAW_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", 
		"NLAW_F", "NLAW_F",
		"SmokeShell", "SmokeShell", "SmokeShell","SmokeShell",
		"HandGrenade", "HandGrenade", 
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn", "muzzle_snds_M"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_HelmetIA", 
		"optic_MRCO", "acc_flashlight", "acc_pointer_IR", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	backpack = "B_TacticalPack_oli"; 	
	// vehicle = "I_Soldier_LAT_F";
};
// ====================================================================================
class SAV_AAF_GREN
{
	displayName = "Grenadier";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"arifle_Mk20_GL_F", "hgun_ACPC2_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		// "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", 
		"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
		"SmokeShell", "SmokeShell", 
		"HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell",
		// "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn", "muzzle_snds_M"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_CrewHelmetHeli_I", 
		"optic_Arco", "acc_flashlight", "acc_pointer_IR", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	backpack = "B_TacticalPack_oli";	
	// vehicle = "I_Soldier_GL_F";
};
// ====================================================================================
class SAV_AAF_AR
{
	displayName = "AutoRifleman 7.62";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"LMG_Zafir_F", "hgun_ACPC2_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box",
		"150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
		"SmokeShell", "SmokeShell", 
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {"FirstAidKit","FirstAidKit","optic_holosight","muzzle_snds_B"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_HelmetIA", 
		"optic_MRCO", "acc_pointer_IR", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	backpack = "B_TacticalPack_oli"; 	
	// vehicle = "I_Soldier_AR_F";
};
// ====================================================================================
class SAV_AAF_MEDIC
{ 
	displayName = "Medic";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"arifle_Mk20_F", "hgun_ACPC2_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", 
		"SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell",
		"SmokeShell", "SmokeShell",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {
		"Medikit",
		"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit",
		"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit",
		"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit",
		"optic_Aco_grn","muzzle_snds_M"
	}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_HelmetIA", 
		"optic_Holosight", "acc_pointer_IR", "acc_flashlight", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	backpack = "B_Carryall_oli";	
	// vehicle = "I_medic_F";
};
// ====================================================================================
// class SAV_AAF_HAT
// { 
	// vehicle = "I_Soldier_AT_F";
// };
// ====================================================================================
class SAV_AAF_DM
{ 
	displayName = "Marksman";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"srifle_EBR_F", "hgun_ACPC2_F", "NVGoggles", "Laserdesignator_03"}; 
	magazines[] = { 
		"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag",
		"SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellRed",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag",
		"Laserbatteries"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_HelmetIA", 
		"optic_DMS","acc_pointer_IR", "acc_flashlight", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform_tshirt"; 
	backpack = "B_TacticalPack_oli";	
	// vehicle = "I_medic_F";
};
// ====================================================================================
class SAV_AAF_MG
{ 
	displayName = "Machinegunner";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"MMG_02_black_F", "hgun_ACPC2_F", "NVGoggles", "RangeFinder"}; 
	magazines[] = { 
		"130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag",
		"SmokeShell", "SmokeShell", "HandGrenade", "HandGrenade",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {"FirstAidKit", "FirstAidKit", "optic_Aco_grn"}; 
	linkedItems[] = {
		"V_PlateCarrierIA1_dgtl", "H_HelmetIA", 
		"optic_Hamr","acc_pointer_IR", "acc_flashlight", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform_tshirt"; 
	backpack = "B_Carryall_oli";	
	// vehicle = "I_medic_F";
};
// ====================================================================================
class SAV_AAF_CREW
{ 
	displayName = "Crewman";
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	show = "side group _this == resistance"; //or guerilla? 
	weapons[] = {"arifle_Mk20C_F", "hgun_ACPC2_F", "NVGoggles", "Binocular"}; 
	magazines[] = { 
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag",
		"SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade",
		"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
	};
	items[] = {"FirstAidKit"}; 
	linkedItems[] = {
		"V_BandollierB_oli", "H_HelmetCrew_I", 
		"optic_Aco_grn","acc_pointer_IR", "acc_flashlight", "muzzle_snds_acp",
		"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
	}; 
	uniformClass = "U_I_CombatUniform"; 
	// backpack = "B_Carryall_oli";	
	// vehicle = "I_medic_F";
};
// ====================================================================================
// ====================================================================================