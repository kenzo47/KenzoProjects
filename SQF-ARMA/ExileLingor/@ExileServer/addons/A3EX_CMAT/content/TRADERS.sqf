/**
* A3EX_CMAT - Arma 3 Exile Serverside Custom Mapping and Traders - v0.10
* 2020 - El Rabito
*
* !!! Use "Log position to clipboard" and get the rotation via attributes via Arma 3 Editor + Exile Eden plugin !!
*
*
** Informations:
* 
* - Trader Animations
* 	Only one looped animation is supported (All the ones i included are working properly).
* 	If you add multiple non looped animations the trader just freezes after he finished his animation (didn't bother to make a server side animation switcher)
*
* - Getting Trader Loadout
*	Easiest way to get the loadouts, place unit in Arma 3 Editor, gear it, place another unit, press play with this unit and paste the line below into debug console.
*	Then you can just copy the whole output and paste it at the end of every ExileServer_object_trader_create call.
*	getUnitLoadout cursorObject;
*
*
*
*/

/**
*
*-> TRADER NPC's
*
*/
_trader_equip = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_04",
    ["HubStanding_idle1"],
    [3263.68, 3623.36, 0],
    22.727,
	[["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15; // The sleep after every ExileServer_object_trader_create is needed ! #Arma

_trader_armory = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "WhiteHead_15",
    ["HubStanding_idle2"],
    [3260.46, 3630.45, 0],
    102.779,
	[["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_hardware= 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "LivonianHead_9",
    ["InBaseMoves_HandsBehindBack1"],
    [3269.63, 3637.56, 0],
    193.721,
	[[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_food= 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "RussianHead_2",
    ["HubStandingUA_idle1"],
    [3266.55, 3637.06, 0],
    161.075,
	[[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Clear",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_office= 
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "RussianHead_1",
    ["HubStandingUA_idle2"],
    [3272.39, 3636.59, 0],
    216.656,
	[[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Combat",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_vehicle= 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_16",
    ["HubStandingUA_idle3"],
    [3362.03, 3591.17, 0],
    249.845,
	[[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Tactical_Clear",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_vehicle_customs= 
[
    "Exile_Trader_VehicleCustoms",
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_20",
    ["HubStandingUB_idle1"],
    [3362.18, 3589.41, 0],
    256.112,
	[[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_aircraft= 
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "AfricanHead_02",
    ["HubStandingUB_idle2"],
    [3295.98, 3592.72, 0],
    89.243,
	[[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_aircraft_customs= 
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "WhiteHead_21",
    ["HubStandingUB_idle3"],
    [3294.65, 3593.69, 0],
    36.936,
	[[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Combat",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_boat= 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "Sturrock",
    ["InBaseMoves_HandsBehindBack1"],
    [5226.96, 7867.19, 9.834],
    238.870,
	[[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Tactical_Black",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_boat_customs= 
[
    "Exile_Trader_BoatCustoms",
    "Exile_Trader_BoatCustoms",
    "WhiteHead_10",
    ["HubStandingUC_idle1"],
    [5225.43, 7868.93, 9.636],
    221.676,
	[[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_wastedump= 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "LivonianHead_3",
    ["HubStandingUC_idle2"],
    [3314.68, 3613.44, 0],
    223.445,
	[[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Tactical_Clear",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_wastedump2= 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "WhiteHead_13",
    ["HubStandingUC_idle3"],
    [6949.7, 1267.65, 0],
    293.742,
	[[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]]
]
call ExileServer_object_trader_create;
sleep 0.15;

_trader_specOps= 
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "WhiteHead_24",
    ["InBaseMoves_HandsBehindBack1"],
    [3261.26, 3626.45, 0.15],
    68.495,
	[["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]]
]
call ExileServer_object_trader_create;
sleep 0.15;