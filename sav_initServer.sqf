// initServer.sqf
// by SavageCDN
// ====================================================================================
// ====================================================================================

// respawn inventory

[resistance, 'SAV_AAF_FTL'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_RIFLE'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_LAT'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_GREN'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_AR'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_MEDIC'] call BIS_fnc_addRespawnInventory;
// [resistance, 'SAV_AAF_HAT'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_DM'] call BIS_fnc_addRespawnInventory;
[resistance, 'SAV_AAF_MG'] call BIS_fnc_addRespawnInventory;

// ====================================================================================
// virtual arsenal and ammo boxes

[] execVM "scripts\sav_arsenal_AAF.sqf";

// ====================================================================================
// ====================================================================================