/*

ExileZ Mod by [FPS]kuplion - Based on ExileZ 2.0 by Patrix87

*/

// Get EZM version
exileZmod_version = getText (configFile >> "CfgPatches" >> "exilez_mod" >> "exileZmod_version");

// Log stuff
diag_log format["ExileZ Mod: Version %1 | Loading Configs at %2", exileZmod_version, time];

// Get the Zombie Configs/Loot/Vests/Classes
// Get the Zombie Classes List
call compileFinal preprocessFileLineNumbers "exilez_mod\zombies\zClassesList.sqf";
if (isNil "EZM_zClassesListCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\zombies\zClassesList.sqf, check for typos (time: %1)",time];
};

// Get the Zombie Loot
call compileFinal preprocessFileLineNumbers "exilez_mod\zombies\zLoot.sqf";
if (isNil "EZM_zLootCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\zombies\zLoot.sqf, check for typos (time: %1)",time];
};

// Get the Zombie Vests
call compileFinal preprocessFileLineNumbers "exilez_mod\zombies\zVest.sqf";
if (isNil "EZM_zVestCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\zombies\zVest.sqf, check for typos (time: %1)",time];
};

// Get the Zombie Classes
call compileFinal preprocessFileLineNumbers "exilez_mod\zombies\zClasses.sqf";
if (isNil "EZM_zClassesCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\zombies\zClasses.sqf, check for typos (time: %1)",time];
};

// Get the config for ExileZ Mod
call compileFinal preprocessFileLineNumbers "exilez_mod\config.sqf";
if (isNil "EZM_CompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\config.sqf, check for typos (time: %1)",time];
};

// Create Zombie Monitor
EZM_aliveZombies = [];
publicVariable "EZM_aliveZombies";

// Create Dead Zombie Monitor
EZM_deadZombies = [];
publicVariable "EZM_deadZombies";

// Create Blacklist Arrays
EZM_BlacklistedPositions = [];
EZM_BlacklistedTraders = [];

// Trigger Positions
call compileFinal preprocessFileLineNumbers "exilez_mod\triggers\lingor3TriggerPositions.sqf";

//Loot Crate and Mission Objects
//EZM_triggerMission = compileFinal preprocessFileLineNumbers "exilez_mod\mission\lingor3ZedMission.sqf";
//EZM_triggerLootCrate = compileFinal preprocessFileLineNumbers "exilez_mod\mission\zMissionLootCrate.sqf";

// Trigger Settings
call compileFinal preprocessFileLineNumbers "exilez_mod\triggers\lingor3TriggerSettings.sqf";


// Check Triggers Compiled Correctly
if (isNil "EZM_TriggersCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\triggers\(worldNameHere)TriggerPosition.sqf, check for typos (time: %1)", time];
};

// Check Trigger Settings Compiled Correctly
if (isNil "EZM_SettingsCompiledOkay") exitWith
{
	diag_log format["ExileZ Mod: Failed to read exilez_mod\triggers\(worldNameHere)TriggerSettings.sqf, check for typos (time: %1)", time];
};

// Log more stuff
diag_log format["ExileZ Mod: Version %1 | Loaded all Configs at %2", exileZmod_version, time];
