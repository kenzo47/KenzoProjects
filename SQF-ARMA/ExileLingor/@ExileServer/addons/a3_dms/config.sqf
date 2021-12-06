/*
	Main DMS Config File

	Created by eraser1
	Several revisions and additions have been made by community members.


	A lot of these configs are influenced by WAI :P
	https://github.com/nerdalertdk/WICKED-AI
*/

// You dawg... heard you like configs... so here's some configs for your config.... so you can configure your configuration to make it easier to configure your configuration http://i.imgur.com/9eJjEEo.jpg


// If you don't want the AI to have marksman DLC weapons, then simply remove the line below, or comment it by putting // at the beginning of the line
#define GIVE_AI_MARKSMAN_DLC_WEAPONS 1

// If you don't want crates to spawn with marksman DLC weapons, simply remove the line below or comment it out.
#define USE_MARKSMAN_DLC_WEAPONS_IN_CRATES 1

// Uncomment this if you want Apex weapons on AI.
#define GIVE_AI_APEX_WEAPONS 1

// Uncomment this if you want Apex gear on AI. Uniforms, Vests, Backpacks, Helmets,Scopes
#define GIVE_AI_APEX_GEAR 1

// Uncomment this if you want Apex weapons in loot crates
#define USE_APEX_WEAPONS_IN_CRATES 1

// Uncomment this if you want Apex vehicles to spawn for AI/missions
#define USE_APEX_VEHICLES 1

// Uncomment this if you want CUP gear on AI. Weapons, Uniforms, Vests, Backpacks, Helmets, Scopes
#define GIVE_AI_CUP_GEAR 1




DMS_Use_Map_Config = true;	// Whether or not to use config overwrites specific to the map.
/*
	If you are using a map other than a map listed in the "map_configs" folder, you should set this to false OR create a new file within the map_configs folder for the map so that you don't get a missing file error.
	To share your map-specific config, please create a merge request on GitHub and/or leave a message on the DMS thread in the Exile forums.
	For any questions regarding map-specific configs, please leave a reply in the DMS thread on the Exile forums.
*/

DMS_Enable_RankChange = false; // Whether or not to use Rank Changes. (Required 'true' if using Occupation)
/*
	I am sharing this upgrade to all. If you utilize GR8 Humanity (fully compatible) or a custom version of a ranking system(simple variable changes), this will allow your players to score +/- for Bandit and Hero kills as well as a custom Survivor Faction added to DMS as well. You can still utilize the HERO / BANDIT / SURVIVOR respect and poptab settings for gameplay :) ENJOY! DONKEYPUNCH.INFO!
*/

DMS_Add_AIKill2DB = false;  // Adds killstat for player in the database ;)

DMS_SpawnMissions_Scheduled = false;	// Whether or not to spawn missions in a scheduled environment. Setting to true may help with lag when certain missions spawn.
//Note, if you have the above to true, you need to set DMS_ai_freezeOnSpawn = false; and DMS_ai_share_info = true;

/* Mission System Settings */
	/*General settings for dynamic missions*/
	DMS_DynamicMission					= true;						// Enable/disable dynamic mission system.
	DMS_MaxBanditMissions				= 2;						// Maximum number of Bandit Missions running at the same time
	DMS_TimeToFirstMission				= [180,420];				// [Minimum,Maximum] time between first mission spawn. | DEFAULT: 3-7 minutes.
	DMS_TimeBetweenMissions				= [600,900];				// [Minimum,Maximum] time between missions (if mission limit is not reached) | DEFAULT: 10-15 mins
	DMS_MissionTimeout					= [900,1800]; 				// [Minimum,Maximum] time it will take for a mission to timeout | DEFAULT: 15-30 mins
	DMS_MissionTimeoutResetRange		= 1500;						// If a player is this close to a mission then it won't time-out. Set to 0 to disable this check.
	DMS_MissionTimeoutResetFrequency	= 180;						// How often (in seconds) to check for nearby players and reset the mission timeout.
	DMS_ResetMissionTimeoutOnKill		= true;						// Whether or not to reset the mission timeout when an AI is killed.
	/*General settings for dynamic missions*/

	/*General settings for static missions*/
	DMS_StaticMission					= true;						// Enable/disable static mission system.
	DMS_MaxStaticMissions				= 1;						// Maximum number of Static Missions running at the same time. It's recommended you set this to the same amount of static missions that you have in total. This config will be ignored by "DMS_StaticMissionsOnServerStart".
	DMS_TimeToFirstStaticMission		= [30,30];					// [Minimum,Maximum] time between first static mission spawn. | DEFAULT: 3-7 minutes.
	DMS_TimeBetweenStaticMissions		= [900,1800];				// [Minimum,Maximum] time between static missions (if static mission limit is not reached) | DEFAULT: 15-30 mins
	DMS_StaticMissionTimeOut			= [1800,3600]; 				// [Minimum,Maximum] time it will take for a static mission to timeout | DEFAULT: 30-60 mins
	DMS_StaticMissionTimeoutResetRange	= 1500;						// If a player is this close to a mission then it won't time-out. Set to 0 to disable this check.
	DMS_SMissionTimeoutResetFrequency	= 180;						// How often (in seconds) to check for nearby players and reset the mission timeout for static missions.
	DMS_ResetStaticMissionTimeoutOnKill	= true;						// Whether or not to reset the mission timeout when an AI is killed (for Static Missions).
	DMS_StaticMinPlayerDistance			= 1500;						// If a player is this close to a mission location, then it won't spawn the mission and will wait 60 seconds before attempting to spawn it.
	DMS_AllowStaticReinforcements		= true;						// Whether or not static missions will receive reinforcements. This will simply disable the calling of GroupReinforcementsMonitor;
	DMS_SpawnFlareOnReinforcements		= true;						// Whether or not to spawn a flare and noise when AI reinforcements have spawned.
	/*General settings for static missions*/

	DMS_playerNearRadius				= 100;						// How close a player has to be to a mission in order to satisfy the "playerNear" mission requirement (can be customized per mission).

	DMS_AI_KillPercent					= 100;						// The percent amount of AI that need to be killed for "killPercent" mission requirement (NOT IMPLEMENTED)

	/*Mission Marker settings*/
	DMS_ShowDifficultyColorLegend		= true;						// Whether or not to show a "color legend" at the bottom left of the map that shows which color corresponds to which difficulty. I know it's not very pretty, meh.
	DMS_ShowMarkerCircle				= false;					// Whether or not to show the colored "circle" around a mission marker.
	DMS_MarkerText_ShowMissionPrefix	= true;						// Whether or not to place a prefix before the mission marker text. Enable this if your players get confused by the marker names :P
	DMS_MarkerText_MissionPrefix		= "Mission:";				// The text displayed before the mission name in the mission marker.
	DMS_MarkerText_ShowAICount			= true;						// Whether or not to display the number of remaining AI in the marker name.
	DMS_MarkerText_ShowAICount_Static	= true;						// Whether or not to display the number of remaining AI in the marker name for STATIC missions.
	DMS_MarkerText_AIName				= "Units";					// What the AI will be called in the map marker. For example, the marker text can show: "Car Dealer (3 Units remaining)"
	DMS_MarkerPosRandomization			= false;					// Randomize the position of the circle marker of a mission
	DMS_MarkerPosRandomRadius			= [25,100];					// Minimum/Maximum distance that the circle marker position will be randomized | DEFAULT: 0 meters to 200 meters
	DMS_RandomMarkerBrush				= "Cross";					// See: https://community.bistudio.com/wiki/setMarkerBrush
	DMS_MissionMarkerWinDot				= true;						// Keep the mission marker dot with a "win" message after mission is over
	DMS_MissionMarkerLoseDot			= true;						// Keep the mission marker dot with a "lose" message after mission is over
	DMS_MissionMarkerWinDot_Type		= "mil_end";				// The marker type to show when a mission is completed. Refer to: https://community.bistudio.com/wiki/cfgMarkers
	DMS_MissionMarkerLoseDot_Type		= "KIA";					// The marker type to show when a mission fails. Refer to: https://community.bistudio.com/wiki/cfgMarkers
	DMS_MissionMarkerWinDotTime			= 30;						// How many seconds the "win" mission dot will remain on the map
	DMS_MissionMarkerLoseDotTime		= 30;						// How many seconds the "lose" mission dot will remain on the map
	DMS_MissionMarkerWinDotColor		= "ColorBlue";				// The color of the "win" marker dot
	DMS_MissionMarkerLoseDotColor		= "ColorRed";				// The color of the "lose" marker dot
	/*Mission Marker settings*/

	/*Mission Cleanup settings*/
	DMS_CompletedMissionCleanup			= true;						// Cleanup mission-spawned buildings and AI bodies after some time
	DMS_CompletedMissionCleanupTime		= 1800;						// Minimum time until mission-spawned buildings and AI are cleaned up
	DMS_CleanUp_PlayerNearLimit			= 20;						// Cleanup of an object is aborted if a player is this many meters close to the object
	DMS_AIVehCleanUpTime				= 300;						// Time until a destroyed AI vehicle is cleaned up.
	/*Mission Cleanup settings*/

	/*Mission spawn location settings*/
	DMS_UsePredefinedMissionLocations	= false;					// Whether or not to use a list of pre-defined mission locations instead before attempting to find a random (valid) position. The positions will still be checked for validity. If none of the provided positions are valid, a random one will be generated.
	DMS_PredefinedMissionLocations = 	[							// List of Preset/Predefined mission locations.
											/* List of positions:
											position1: [x_1,y_1,z_1],
											position2: [x_2,y_2,z_2],
											...
											positionN: [x_N,y_N,z_N]
											*/

										];

	DMS_PredefinedMissionLocations_WEIGHTED = 	[					// List of Preset/Predefined mission locations WITH WEIGHTED CHANCES. This will NOT override "DMS_PredefinedMissionLocations", and everything from "DMS_PredefinedMissionLocations" will behave as though it has 1 weight per position.
											/* List of arrays with position and weighted chance:
											[[x_1,y_1,z_1], chance_1],
											[[x_2,y_2,z_2], chance_2],
											...
											[[x_N,y_N,z_N], chance_N]
											*/

										];
	DMS_ThrottleBlacklists				= true;						// Whether or not to "throttle" the blacklist distance parameters in DMS_fnc_FindSafePos. This will reduce the values of the minimum
																		//distances for some of the below parameters if several attempts have been made, but a suitable position was not yet found. This
																		//should help with server performance drops when spawning a mission, as DMS_fnc_findSafePos is the most resource-intensive function.
	DMS_AttemptsUntilThrottle			= 15;						// How many attempts until the parameters are throttled.
	DMS_ThrottleCoefficient				= 0.92;						// How much the parameters are throttled. The parameters are multiplied by the coefficient, so 0.9 means 90% of whatever the parameter was.
	DMS_MinThrottledDistance			= 500;						// The minimum distance to which it will throttle. If the throttled value is less than this value, then this value is used instead.
	DMS_PlayerNearBlacklist				= 1000;						// Missions won't spawn in a position this many meters close to a player
	DMS_SpawnZoneNearBlacklist			= 750;						// Missions won't spawn in a position this many meters close to a spawn zone
	DMS_TraderZoneNearBlacklist			= 800;						// Missions won't spawn in a position this many meters close to a trader zone
	DMS_MissionNearBlacklist			= 1500;						// Missions won't spawn in a position this many meters close to another mission
	DMS_WaterNearBlacklist				= 500;						// Missions won't spawn in a position this many meters close to water
	DMS_TerritoryNearBlacklist			= 100;						// Missions won't spawn in a position this many meters close to a territory flag. This is a resource intensive check, don't set this value too high!
	DMS_MixerNearBlacklist				= 300;						// Missions won't spawn in a position this many meters close to a concrete mixer
	DMS_ContaminatedZoneNearBlacklist	= 1000;						// Missions won't spawn in a position this many meters close to a contaminated zone
	DMS_MinSurfaceNormal				= 0.9;						// Missions won't spawn in a position where its surfaceNormal is less than this amount. The lower the value, the steeper the location. Greater values means flatter locations. Values can range from 0-1, with 0 being sideways, and 1 being perfectly flat. For reference: SurfaceNormal of about 0.7 is when you are forced to walk up a surface. If you want to convert surfaceNormal to degrees, use the arc-cosine of the surfaceNormal. 0.9 is about 25 degrees. Google "(arccos 0.9) in degrees"
	DMS_MinDistFromWestBorder			= 250;						// Missions won't spawn in a position this many meters close to the western map border.
	DMS_MinDistFromEastBorder			= 250;						// Missions won't spawn in a position this many meters close to the easter map border.
	DMS_MinDistFromSouthBorder			= 250;						// Missions won't spawn in a position this many meters close to the southern map border.
	DMS_MinDistFromNorthBorder			= 250;						// Missions won't spawn in a position this many meters close to the northern map border.
	DMS_SpawnZoneMarkerTypes =			[							// If you're using custom spawn zone markers, make sure you define them here. CASE SENSITIVE!!!
											"ExileSpawnZoneIcon"
										];
	DMS_TraderZoneMarkerTypes =			[							// If you're using custom trader markers, make sure you define them here. CASE SENSITIVE!!!
											"ExileTraderZoneIcon"
										];
	DMS_MixerMarkerTypes =				[							// If you're using custom concrete mixer map markers, make sure you define them here. CASE SENSITIVE!!!
											"ExileConcreteMixerZoneIcon"
										];
	DMS_ContaminatedZoneMarkerTypes =	[							// If you're using custom contaminated zone markers, make sure you define them here. CASE SENSITIVE!!!
											"ExileContaminatedZoneIcon"
										];
	/*Mission spawn location settings*/

	DMS_MinWaterDepth					= 20;						// Minimum depth of water that an underwater mission can spawn at.

	/*Crate/Box settings*/
	DMS_HideBox							= false;					// "Hide" the box from being visible by players until the mission is completed.
	DMS_EnableBoxMoving					= true;						// Whether or not to allow the box to move and/or be lifted by choppers.
	DMS_SpawnBoxSmoke					= true;						// Spawn a smoke grenade on mission box upon misson completion during daytime
	DMS_DefaultSmokeClassname 			= "SmokeShellGreen";		// Classname of the smoke you want to spawn.
	DMS_SpawnBoxIRGrenade				= false;						// Spawn an IR grenade on mission box upon misson completion during nighttime
	/*Crate/Box settings*/

	/*Mine settings*/
	DMS_SpawnMinefieldForEveryMission	= false;					// Whether or not to spawn a minefield for every dynamic mission.
	DMS_SpawnMinesAroundMissions		= false;						// Whether or not to spawn mines around AI missions that have them.
	DMS_despawnMines_onCompletion		= true;						// Despawn mines spawned around missions when the mission is completed
	DMS_MineInfo_easy					= [5,50];					// Mine info for "easy" missions. This will spawn 5 mines within a 50m radius.
	DMS_MineInfo_moderate				= [10,50];					// Mine info for "moderate" missions. This will spawn 10 mines within a 50m radius.
	DMS_MineInfo_difficult				= [15,75];					// Mine info for "difficult" missions. This will spawn 15 mines within a 75m radius.
	DMS_MineInfo_hardcore				= [25,100];					// Mine info for "hardcore" missions. This will spawn 25 mines within a 100m radius.
	DMS_SpawnMineWarningSigns			= true;						// Whether or not to spawn mine warning signs around a minefield.
	DMS_BulletProofMines				= true;						// Whether or not you want to make the mines bulletproof. Prevents players from being able to shoot the mines and creating explosions.
	/*Mine settings*/

	DMS_MinPlayerCount					= 0; 						// Minimum number of players until mission start
	DMS_MinServerFPS					= 30; 						// Minimum server FPS for missions to start

	/*Mission notification settings*/
	DMS_PlayerNotificationTypes =		[									// Notification types. Supported values are: ["dynamicTextRequest", "standardHintRequest", "systemChatRequest", "textTilesRequest", "ExileToasts"]. Details below.
											//"dynamicTextRequest",			// You should use either "dynamicTextRequest" or "textTilesRequest", and I think "textTilesRequest" looks better, but this is less performance-intensive.
											//"standardHintRequest",		// Hints are a bit wonky...
											//"textTilesRequest",			// Keep in mind you can only have 1 "text tile" message up at a time, so the message will disappear if the player gets a kill or something while the message is shown. This message type is also performance-intensive, so I advise against it.
											//"systemChatRequest",			// Always nice to show in chat so that players can scroll up to read the info if they need to.
											"ExileToasts"					// Default notification type since Exile 0.98, see (http://www.exilemod.com/devblog/new-ingame-notifications/)
										];

		/*Exile Toasts Notification Settings*/
	DMS_ExileToasts_Title_Size			= 22;						// Size for Client Exile Toasts  mission titles.
	DMS_ExileToasts_Title_Font			= "puristaMedium";			// Font for Client Exile Toasts  mission titles.
	DMS_ExileToasts_Message_Color		= "#FFFFFF";				// Exile Toasts color for "ExileToast" client notification type.
	DMS_ExileToasts_Message_Size		= 19;						// Exile Toasts size for "ExileToast" client notification type.
	DMS_ExileToasts_Message_Font		= "PuristaLight";			// Exile Toasts font for "ExileToast" client notification type.
		/*Exile Toasts Notification Settings*/

		/*Dynamic Text Notification Settings*/
	DMS_dynamicText_Duration			= 7;						// Number of seconds that the message will last on the screen.
	DMS_dynamicText_FadeTime			= 1.5;						// Number of seconds that the message will fade in/out (does not affect duration).
	DMS_dynamicText_Title_Size			= 1.2;						// Size for Client Dynamic Text mission titles.
	DMS_dynamicText_Title_Font			= "puristaMedium";			// Font for Client Dynamic Text mission titles.
	DMS_dynamicText_Message_Color		= "#FFFFFF";				// Dynamic Text color for "dynamicTextRequest" client notification type.
	DMS_dynamicText_Message_Size		= 0.65;						// Dynamic Text size for "dynamicTextRequest" client notification type.
	DMS_dynamicText_Message_Font		= "OrbitronMedium";			// Dynamic Text font for "dynamicTextRequest" client notification type.
		/*Dynamic Text Notification Settings*/

		/*Standard Hint Notification Settings*/
	DMS_standardHint_Title_Size			= 2;						// Size for Client Standard Hint mission titles.
	DMS_standardHint_Title_Font			= "puristaMedium";			// Font for Client Standard Hint mission titles.
	DMS_standardHint_Message_Color		= "#FFFFFF";				// Standard Hint color for "standardHintRequest" client notification type.
	DMS_standardHint_Message_Size		= 1;						// Standard Hint size for "standardHintRequest" client notification type.
	DMS_standardHint_Message_Font		= "OrbitronMedium";			// Standard Hint font for "standardHintRequest" client notification type.
		/*Standard Hint Notification Settings*/

		/*Text Tiles Notification Settings*/
	DMS_textTiles_Duration				= 7;						// Number of seconds that the message will last on the screen.
	DMS_textTiles_FadeTime				= 1.5;						// Number of seconds that the message will fade in/out (does not affect duration).
	DMS_textTiles_Title_Size			= 2.3;						// Size for Client Text Tiles mission titles.
	DMS_textTiles_Title_Font			= "puristaMedium";			// Font for Client Text Tiles mission titles.
	DMS_textTiles_Message_Color			= "#FFFFFF";				// Text Tiles color for "textTilesRequest" client notification type.
	DMS_textTiles_Message_Size			= 1.25;						// Text Tiles size for "textTilesRequest" client notification type.
	DMS_textTiles_Message_Font			= "OrbitronMedium";			// Text Tiles font for "textTilesRequest" client notification type.
		/*Text Tiles Notification Settings*/

	/*Mission notification settings*/

	DMS_RandomBanditMissionsOnStart		= 0;						// Number of (random) bandit missions to spawn when the server starts, just so players don't have to wait for missions to spawn.
	DMS_BanditMissionTypes =			[			//	List of missions with spawn chances. If they add up to 100%, they represent the percentage chance each one will spawn
											["bandits",3],
											["bauhaus",3],
											["beertransport",3],
											["behindenemylines",3],
											["blackhawkdown",3],
											["cardealer",3],
											["construction",3],
											["donthasslethehoff",3],
											["foodtransport",3],
											["guntransport",3],
											["humanitarian",3],
											["lost_battalion",3],
											["medical",3],
											["mercbase",2],
											["mercenaries",3],
											["nedbuilding1_mission",3],
											["nedcar_mission",4],
											["nedguns1_mission",3],
											["nedhatchback_mission",3],
											["nedhunter_mission",2],
											["nedifrit_mission",2],
											["nedlittlebird_mission",2],
											["nedmedical1_mission",3],
											["nedoffroad_mission",3],
											["nedresearch_mission",3],
											["nedsnipercamp_mission",3],
											["nedstrider_mission",2],
											["nedural_mission",3],
											["roguenavyseals",3],
											["thieves",3],
											["walmart",3]
										];


	DMS_StaticMissionTypes =			[								// List of STATIC missions with spawn chances.
											//["saltflats",1]		//<--Example (already imported by default on Altis in map configs)
											//["slums",1]			//<--Example (already imported by default on Altis in map configs)
											//["occupation",1]		//<--Example
											//["sectorB",1]			//<--Example for Taviana
										];

	DMS_SpecialMissions =				[								// List of special missions with restrictions. Each element must be defined as [mission<STRING>, minPlayers<SCALAR>, maxPlayers<SCALAR>, timesPerRestart<SCALAR>, _timeBetween<SCALAR>].
											//["specops",15,60,2,900]	//<-- Example for a mission named "specops.sqf" that must be placed in the "special" folder. It will only spawn when there are at least 15 players, less than 60 players, it will only spawn up to twice per restart, and at least 900 seconds must pass before another instance of the mission can spawn.
										];

	DMS_BasesToImportOnServerStart = 	[								// List of static bases to import on server startup (spawned post-init). This will reduce the amount of work the server has to do when it actually spawns static missions, and players won't be surprised when a base suddenly pops up. You can also include any other M3E-exported bases to spawn here.
											//"saltflatsbase",		//<--Example (already imported by default on Altis)
											//"slums_objects"		//<--Example (already imported by default on Altis)
										];

	DMS_BanditMissionsOnServerStart =	[
											//"construction"		//<-- Example
										];

	DMS_StaticMissionsOnServerStart =	[								// List of STATIC missions with spawn chances.
											//"saltflats"			//<--Example
											//"slums"				//<--Example
											//"occupation"			//<--Example
											//"sectorB"				//<--Example for Taviana
										];



	DMS_findSafePosBlacklist =			[								// This list defines areas where missions WILL NOT spawn. For position blacklist info refer to: http://www.exilemod.com/topic/61-dms-defents-mission-system/?do=findComment&comment=31190
											// There are examples in the altis map config (it blacklists the salt flats) and in the tavi/taviana map configs.

											//[[2350,4680],100]		// This random example blacklists any position within 100 meters of coordinates "[2350,4680]"
										];
/* Mission System Settings */


/* AI Settings */
	DMS_AI_Classname					= "O_Soldier_unarmed_F";				// Since some of you wanted this...

	DMS_AI_NamingType					= 0;						// This specifies the "naming scheme" for the AI. 0 corresponds with the default ArmA names; 1 means you want a DMS name (eg: [DMS BANDIT SOLDIER 123]); 2 means you want to generate a name from a list of first and last names (DMS_AI_FirstNames, DMS_AI_LastNames).
	DMS_AI_FirstNames =					[							// List of "first names" that an AI can have. Only used when DMS_AI_NamingType = 2.
											"Adam",
											"Benjamin",
											"Charles",
											"David",
											"Eric"
											// etc.
										];
	DMS_AI_LastNames =					[							// List of "last names" that an AI can have. Only used when DMS_AI_NamingType = 2.
											"Smith",
											"Johnson",
											"Williams",
											"Jones",
											"Brown"
											// etc.
										];

	DMS_Show_Kill_Poptabs_Notification	= true;						// Whether or not to show the poptabs gained/lost message on the player's screen when killing an AI. (It will still change the player's money, it just won't show the "Money Received" notification)
	DMS_Show_Kill_Respect_Notification	= true;						// Whether or not to show the "Frag Message" on the player's screen when killing an AI. (It will still change the player's respect, it just won't show the "AI Killed" frag message)
	DMS_Show_Kill_Rank_Notification		= true;
	DMS_Show_Party_Kill_Notification	= true;						// Whether or not to show in chat when a party member kills an AI.

	DMS_Spawn_AI_With_Money				= true;						// Whether or not to spawn AI with money that can be looted from the body.
	DMS_AIMoney_PopulationMultiplier	= 2;						// This determines how much EXTRA money an AI will have on his body. For example, setting this to 5 and having a server population of 30 means the AI will have an extra 150 poptabs on the body. Set to 0 to disable.

	DMS_GiveMoneyToPlayer_OnAIKill		= false;						// Whether or not to give money directly to players when they kill AI (old method of giving money).
	DMS_GiveRespectToPlayer_OnAIKill	= true;						// Whether or not to give respect to players when they kill AI.

	DMS_Bandit_Soldier_MoneyGain		= 50;						// The amount of Poptabs gained for killing a bandit soldier
	DMS_Bandit_Soldier_RepGain			= 35;						// The amount of Respect gained for killing a bandit soldier
	DMS_Bandit_Soldier_RankGain			= 40;
	DMS_Bandit_Soldier_SpawnMoney		= 50;						// The amount of Poptabs carried by a bandit soldier

	DMS_Bandit_Static_MoneyGain			= 75;						// The amount of Poptabs gained for killing a bandit static gunner
	DMS_Bandit_Static_RepGain			= 40;						// The amount of Respect gained for killing a bandit static gunner
	DMS_Bandit_Static_RankGain			= 50;
	DMS_Bandit_Static_SpawnMoney		= 80;						// The amount of Poptabs carried by a bandit static gunner

	DMS_Bandit_Vehicle_MoneyGain		= 100;						// The amount of Poptabs gained for killing a bandit vehicle crew member
	DMS_Bandit_Vehicle_RepGain			= 50;						// The amount of Respect gained for killing a bandit vehicle crew member
	DMS_Bandit_Vehicle_RankGain			= 60;
	DMS_Bandit_Vehicle_SpawnMoney		= 100;						// The amount of Poptabs carried by a bandit vehicle crew member

/* DonkeyPunchDMS Custom Settings for Hero AI*/
	DMS_Hero_Soldier_MoneyGain			= 100;						// The amount of Poptabs gained for killing a hero soldier
	DMS_Hero_Soldier_RepGain			= 20;						// The amount of Respect gained for killing a hero soldier
	DMS_Hero_Soldier_RankGain			= -30;
	DMS_Hero_Soldier_SpawnMoney			= 100;						// The amount of Poptabs carried by a hero soldier

	DMS_Hero_Static_MoneyGain			= 120;						// The amount of Poptabs gained for killing a hero static gunner
	DMS_Hero_Static_RepGain				= 30;						// The amount of Respect gained for killing a hero static gunner
	DMS_Hero_Static_RankGain			= -60;
	DMS_Hero_Static_SpawnMoney			= 120;						// The amount of Poptabs carried by a hero static gunner

	DMS_Hero_Vehicle_MoneyGain			= 200;						// The amount of Poptabs gained for killing a hero vehicle crew member
	DMS_Hero_Vehicle_RepGain			= 50;						// The amount of Respect gained for killing a hero vehicle crew member
	DMS_Hero_Vehicle_RankGain			= -100;
	DMS_Hero_Vehicle_SpawnMoney			= 200;						// The amount of Poptabs carried by a hero vehicle crew member
/* DonkeyPunchDMS Custom Settings for Survivor AI*/
	DMS_Survivor_Soldier_MoneyGain		= -100;						// The amount of Poptabs gained for killing a Survivor soldier
	DMS_Survivor_Soldier_RepGain		= -100;						// The amount of Respect gained for killing a Survivor soldier
	DMS_Survivor_Soldier_RankGain		= -250;
	DMS_Survivor_Soldier_SpawnMoney		= 0;						// The amount of Poptabs carried by a Survivor soldier

	DMS_Survivor_Static_MoneyGain		= -100;						// The amount of Poptabs gained for killing a Survivor static gunner
	DMS_Survivor_Static_RepGain			= -100;						// The amount of Respect gained for killing a Survivor static gunner
	DMS_Survivor_Static_RankGain		= -400;
	DMS_Survivor_Static_SpawnMoney		= 0;						// The amount of Poptabs carried by a Survivor static gunner

	DMS_Survivor_Vehicle_MoneyGain		= -500;						// The amount of Poptabs gained for killing a Survivor vehicle crew member
	DMS_Survivor_Vehicle_RepGain		= -100;						// The amount of Respect gained for killing a Survivor vehicle crew member
	DMS_Survivor_Vehicle_RankGain		= -600;
	DMS_Survivor_Vehicle_SpawnMoney		= 0;						// The amount of Poptabs carried by a Survivor vehicle crew member

	DMS_AIKill_DistanceBonusMinDistance	= 100;						// Minimum distance from the player to the AI to apply the distance bonus.
	DMS_AIKill_DistanceBonusCoefficient	= 0.05;						// If the distance from the player to the killed unit is more than "DMS_AIKill_DistanceBonusMinDistance" meters then the player gets a respect bonus equivalent to the distance multiplied by this coefficient. For example, killing an AI from 400 meters will give 100 extra respect (when the coefficient is 0.25). Set to 0 to disable the bonus. This bonus will not be applied if there isn't a regular AI kill bonus.

	DMS_Diff_RepOrTabs_on_roadkill 		= true;						// Whether or not you want to use different values for giving respect/poptabs when you run an AI over. Default values are NEGATIVE. This means player will LOSE respect or poptabs.
	DMS_Bandit_Soldier_RoadkillMoney	= -10;						// The amount of Poptabs gained/lost for running over a bandit soldier
	DMS_Bandit_Soldier_RoadkillRep		= -5;						// The amount of Respect gained/lost for running over a bandit soldier
	DMS_Bandit_Soldier_RoadkillRank		= 20;
	DMS_Bandit_Static_RoadkillMoney		= -10;						// The amount of Poptabs gained/lost for running over a bandit static gunner
	DMS_Bandit_Static_RoadkillRep		= -5;						// The amount of Respect gained/lost for running over a bandit static gunner
	DMS_Bandit_Static_RoadkillRank		= 30;
	DMS_Bandit_Vehicle_RoadkillMoney	= -10;						// The amount of Poptabs gained/lost for running over a bandit vehicle crew member
	DMS_Bandit_Vehicle_RoadkillRep		= -5;						// The amount of Respect gained/lost for running over a bandit vehicle crew member
	DMS_Bandit_Vehicle_RoadkillRank		= 50;
/* DonkeyPunchDMS Custom RoadKill Settings for Hero AI*/
	DMS_Hero_Soldier_RoadkillMoney		= 20;						// The amount of Poptabs gained/lost for running over a hero soldier
	DMS_Hero_Soldier_RoadkillRep		= 10;						// The amount of Respect gained/lost for running over a hero soldier
	DMS_Hero_Soldier_RoadkillRank		= -40;
	DMS_Hero_Static_RoadkillMoney		= 20;						// The amount of Poptabs gained/lost for running over a hero static gunner
	DMS_Hero_Static_RoadkillRep			= 10;						// The amount of Respect gained/lost for running over a hero static gunner
	DMS_Hero_Static_RoadkillRank		= -60;
	DMS_Hero_Vehicle_RoadkillMoney		= 20;						// The amount of Poptabs gained/lost for running over a hero vehicle crew member
	DMS_Hero_Vehicle_RoadkillRep		= 10;						// The amount of Respect gained/lost for running over a hero vehicle crew member
	DMS_Hero_Vehicle_RoadkillRank		= -100;
/* DonkeyPunchDMS Custom Roadkill Settings for Survivor AI*/
	DMS_Survivor_Soldier_RoadkillMoney	= -200;						// The amount of Poptabs gained/lost for running over a Survivor soldier
	DMS_Survivor_Soldier_RoadkillRep	= -200;						// The amount of Respect gained/lost for running over a Survivor soldier
	DMS_Survivor_Soldier_RoadkillRank	= -200;
	DMS_Survivor_Static_RoadkillMoney	= -200;						// The amount of Poptabs gained/lost for running over a Survivor static gunner
	DMS_Survivor_Static_RoadkillRep		= -200;						// The amount of Respect gained/lost for running over a Survivor static gunner
	DMS_Survivor_Static_RoadkillRank	= -200;
	DMS_Survivor_Vehicle_RoadkillMoney	= -500;						// The amount of Poptabs gained/lost for running over a Survivor vehicle crew member
	DMS_Survivor_Vehicle_RoadkillRep	= -100;						// The amount of Respect gained/lost for running over a Survivor vehicle crew member
	DMS_Survivor_Vehicle_RoadkillRank	= -100;

	DMS_banditSide						= EAST;						// The side (team) that AI Bandits will spawn on
/* DonkeyPunchDMS Custom Side Factions */
	DMS_heroSide						= WEST;						// The side (team) that AI Heros will spawn on
	DMS_survivorSide					= CIV;						// The side (team) that AI Survivor will spawn on

	DMS_clear_AI_body					= false;					// Clear AI body as soon as they die
	DMS_clear_AI_body_chance			= 50;						// Percentage chance that AI bodies will be cleared when they die
	DMS_ai_disable_ramming_damage 		= false;					// Disables damage due to ramming into AI. !!!NOTE: THIS WILL NOT BE RELIABLE WITH "DMS_ai_offload_to_client"!!!
	DMS_remove_roadkill					= true; 					// Remove gear from AI bodies that are roadkilled
	DMS_remove_roadkill_chance			= 50;						// Percentage chance that roadkilled AI bodies will be deleted
	DMS_explode_onRoadkill				= true;						// Whether or not to spawn an explosion when an AI gets run over. It will likely take out the 2 front wheels. Should help mitigate the ineffective AI vs. striders issue ;)
	DMS_RemoveNVG						= false;					// Remove NVGs from AI bodies

	DMS_MaxAIDistance					= 300;						// The maximum distance an AI unit can be from a mission before he is killed. Helps with AI running away and forcing the mission to keep running. Set to 0 if you don't want it.
	DMS_AIDistanceCheckFrequency		= 45;						// How often to check within DMS_fnc_TargetsKilled whether or not the AI is out of the maximum radius. Lower values increase frequency and increase server load, greater values decrease frequency and may cause longer delays for "runaway" AI.

	DMS_ai_offload_to_client			= true;						// Offload spawned AI groups to random clients. Helps with server performance.
	DMS_ai_offload_Only_DMS_AI			= true;						// Don't set this to false unless you know what you're doing.
	DMS_ai_offload_notifyClient			= false;					// Notify the client when AI has been offloaded to the client.

	DMS_ai_allowFreezing				= true;						// Whether or not to "freeze" AI that are a certain distance away from players (and therefore inactive).
	DMS_ai_freeze_Only_DMS_AI			= false;					// Whether or not to "freeze" AI that are not spawned by DMS.
	DMS_ai_freezingDistance				= 2500;						// If there are no players within this distance of the leader of an AI group, then the AI group will be "frozen".
	DMS_ai_unfreezingDistance			= 2500;						// If there are players within this distance of the leader of an AI group, then the AI group will be "un-frozen".
	DMS_ai_offloadOnUnfreeze			= true;						// Whether or not to offload AI to clients once they have been "un-frozen". NOTE: This config will be ignored if "DMS_ai_offload_to_client" is set to false.
	DMS_ai_freezeCheckingDelay			= 15;						// How often (in seconds) DMS will check whether to freeze/un-freeze AI.
	DMS_ai_freezeOnSpawn				= true;						// Whether or not to freeze an AI group when initially spawned.

	DMS_ai_share_info					= false;					// Share info about killer
	DMS_ai_share_info_distance			= 25;						// The distance killer's info will be shared to other AI

	DMS_ai_nighttime_accessory_chance	= 75;						// Percentage chance that AI will have a flashlight or laser pointer on their guns if spawned during nighttime
	DMS_ai_enable_water_equipment		= true;						// Enable/disable overriding default weapons of an AI if it spawns on/in water

	// https://community.bistudio.com/wiki/AI_Sub-skills#general
	DMS_ai_skill_static					= [["aimingAccuracy",0.20],["aimingShake",0.70],["aimingSpeed",0.75],["spotDistance",0.70],["spotTime",0.50],["courage",1.00],["reloadSpeed",1.00],["commanding",1.00],["general",1.00]];	// Static AI Skills

	DMS_ai_skill_easy					= [["aimingAccuracy",0.30],["aimingShake",0.40],["aimingSpeed",0.40],["spotDistance",0.40],["spotTime",0.50],["courage",0.50],["reloadSpeed",1.00],["commanding",1.00],["general",0.40]];	// Easy

	DMS_ai_skill_moderate				= [["aimingAccuracy",0.50],["aimingShake",0.60],["aimingSpeed",0.50],["spotDistance",0.60],["spotTime",0.60],["courage",0.60],["reloadSpeed",1.00],["commanding",1.00],["general",0.60]];	// Moderate

	DMS_ai_skill_difficult				= [["aimingAccuracy",0.70],["aimingShake",0.70],["aimingSpeed",0.60],["spotDistance",0.70],["spotTime",0.70],["courage",0.80],["reloadSpeed",1.00],["commanding",1.00],["general",0.70]]; 	// Difficult
	
	DMS_ai_skill_hardcore				= [["aimingAccuracy",0.90],["aimingShake",0.90],["aimingSpeed",0.90],["spotDistance",0.90],["spotTime",0.90],["courage",0.90],["reloadSpeed",1.00],["commanding",1.00],["general",0.90]]; 	// Hardcore

	DMS_ai_skill_random					= ["hardcore","difficult","difficult","difficult","moderate","moderate","moderate","moderate","easy","easy"];	// Skill frequencies for "random" AI skills | Default: 10% hardcore, 30% difficult, 40% moderate, and 20% easy
	DMS_ai_skill_randomDifficult		= ["hardcore","hardcore","difficult","difficult","difficult"];	// 60% chance for "difficult", 40% chance for "hardcore" AI.
	DMS_ai_skill_randomEasy				= ["moderate","moderate","easy","easy","easy"];					// 60% chance for "easy", 40% chance for "moderate" AI.
	DMS_ai_skill_randomIntermediate		= ["difficult","difficult","moderate","moderate","moderate"];	// 60% chance for "moderate", 40% chance for "difficult" AI.
	DMS_AI_WP_Radius_easy				= 20;						// Waypoint radius for "easy" AI.
	DMS_AI_WP_Radius_moderate			= 30;						// Waypoint radius for "moderate" AI.
	DMS_AI_WP_Radius_difficult			= 50;						// Waypoint radius for "difficult" AI.
	DMS_AI_WP_Radius_hardcore			= 75;						// Waypoint radius for "hardcore" AI.
	DMS_AI_AimCoef_easy					= 0.9;						// "Custom Aim Coefficient" (weapon sway multiplier) for "easy" AI
	DMS_AI_AimCoef_moderate				= 0.65;						// "Custom Aim Coefficient" (weapon sway multiplier) for "moderate" AI
	DMS_AI_AimCoef_difficult			= 0.5;						// "Custom Aim Coefficient" (weapon sway multiplier) for "difficult" AI
	DMS_AI_AimCoef_hardcore				= 0.2;						// "Custom Aim Coefficient" (weapon sway multiplier) for "hardcore" AI
	DMS_AI_EnableStamina_easy			= true;						// Whether or not to keep the stamina system for "easy" AI.
	DMS_AI_EnableStamina_moderate		= true;						// Whether or not to keep the stamina system for "moderate" AI.
	DMS_AI_EnableStamina_difficult		= false;					// Whether or not to keep the stamina system for "difficult" AI.
	DMS_AI_EnableStamina_hardcore		= false;					// Whether or not to keep the stamina system for "hardcore" AI.
	DMS_AI_WP_Radius_base				= 5;						// Waypoint radius for AI in bases.
	DMS_AI_WP_Radius_heli				= 500;						// Waypoint radius for AI in helis.

	DMS_AI_destroyVehicleChance			= 100;						// Percent chance that an AI vehicle will be destroyed after the AI have been killed. Set to 100 for always, or 0 for never.

	DMS_AI_destroyStaticWeapon			= true;						// Whether or not to destroy static HMGs after AI death.
	DMS_AI_destroyStaticWeapon_chance	= 100;						// Percent chance that a static weapon will be destroyed (only applied if "DMS_AI_destroyStaticWeapon" is true)

	DMS_static_weapons =				[							// Static weapons for AI
											"O_HMG_01_high_F"
										];

	DMS_ai_default_items =				[							// Toolbelt items each AI will spawn with
											"ItemWatch",
											"ItemMap",
											"ItemCompass",
											"ItemRadio"
										];

	DMS_ai_BipodList =					[
											"bipod_01_F_blk",
											"bipod_01_F_mtp",
											"bipod_01_F_snd",
											"bipod_02_F_blk",
											"bipod_02_F_hex",
											"bipod_02_F_tan",
											"bipod_03_F_blk",
											"bipod_03_F_oli"
										];

	//Assault Class
	DMS_assault_weps =					[							// Assault Rifles
											#ifdef GIVE_AI_CUP_GEAR
											"arifle_AK12_F",
											"arifle_ARX_ghex_F",
											"arifle_CTAR_blk_F",
											"arifle_SPAR_01_khk_F",
											"arifle_SPAR_03_khk_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_arifle_G36C",
											"CUP_arifle_MG36",
											"CUP_arifle_L85A2",
											"CUP_arifle_G36C_camo",
											"CUP_arifle_MG36_camo",
											"CUP_arifle_M4A1_camo",
											"CUP_arifle_M4A1_BUIS_camo_GL",
											"CUP_arifle_M4A1_black",
											"CUP_arifle_Sa58P",
											"CUP_arifle_Sa58V",
											"CUP_arifle_Mk16_CQC",
											"CUP_arifle_XM8_Compact_Rail",
											"CUP_arifle_XM8_Carbine_FG",
											"CUP_arifle_XM8_Carbine_GL",
											"CUP_arifle_XM8_Compact",
											"CUP_arifle_xm8_SAW",
											"CUP_arifle_xm8_sharpshooter",
											"CUP_arifle_CZ805_A1",
											"CUP_arifle_CZ805_GL",
											"CUP_arifle_CZ805_B_GL",
											"CUP_arifle_CZ805_B",
											"CUP_arifle_Sa58RIS2",
											"CUP_arifle_Mk16_CQC_FG",
											"CUP_arifle_Mk17_CQC",
											"CUP_arifle_Mk17_STD",
											"CUP_arifle_Mk20",
											#endif
											"arifle_Katiba_GL_F",
											"arifle_MX_GL_Black_F",
											"arifle_Mk20_GL_F",
											"arifle_TRG21_GL_F",
											"arifle_Katiba_F",
											"arifle_MX_Black_F",
											"arifle_TRG21_F",
											"arifle_TRG20_F",
											"arifle_Mk20_plain_F",
											"arifle_Mk20_F",
											"Exile_Weapon_AK107",
											"Exile_Weapon_AK107_GL",
											"Exile_Weapon_AK74_GL",
											"Exile_Weapon_AK47",
											"Exile_Weapon_AKS_Gold"
										];
	DMS_assault_pistols =				[							// Pistols for Assault Class (Set to empty array if you don't want to give them any pistols)
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_hgun_Colt1911",
											"CUP_hgun_Compact",
											"CUP_hgun_Glock17",
											"CUP_hgun_M9",
											"CUP_hgun_Makarov",
											"CUP_hgun_PB6P9",
											"CUP_hgun_MicroUzi",
											"CUP_hgun_TaurusTracker455",
											"CUP_hgun_TaurusTracker455_gold",
											"CUP_hgun_SA61",
											"CUP_hgun_Duty",
											"CUP_hgun_Phantom",
											#endif
											"hgun_ACPC2_F",
											"hgun_Rook40_F",
											"hgun_P07_F",
											"hgun_Pistol_heavy_01_F",
											"hgun_Pistol_heavy_02_F",
											"Exile_Weapon_Colt1911",
											"Exile_Weapon_Makarov",
											"Exile_Weapon_Taurus",
											"Exile_Weapon_TaurusGold"
										];
	DMS_assault_optics =				[							// Optics for Assault Class
											#ifdef GIVE_AI_APEX_GEAR
											"optic_ERCO_khk_F",
											"optic_Holosight_blk_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_optic_PSO_1",
											"CUP_optic_PSO_3",
											"CUP_optic_Kobra",
											//"CUP_optic_GOSHAWK",
											"CUP_optic_NSPU",
											"CUP_optic_PechenegScope",
											// "CUP_optic_MAAWS_Scope",
											// "CUP_optic_SMAW_Scope",
											// "CUP_optic_AN_PAS_13c2",
											"CUP_optic_LeupoldMk4",
											"CUP_optic_HoloBlack",
											"CUP_optic_HoloWdl",
											"CUP_optic_HoloDesert",
											"CUP_optic_Eotech533",
											"CUP_optic_CompM4",
											"CUP_optic_SUSAT",
											"CUP_optic_ACOG",
											"CUP_optic_CWS",
											"CUP_optic_Leupold_VX3",
											"CUP_optic_AN_PVS_10",
											"CUP_optic_CompM2_Black",
											"CUP_optic_CompM2_Woodland",
											"CUP_optic_CompM2_Woodland2",
											"CUP_optic_CompM2_Desert",
											"CUP_optic_RCO",
											"CUP_optic_RCO_desert",
											"CUP_optic_LeupoldM3LR",
											"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
											"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
											"CUP_optic_ElcanM145",
											//"CUP_optic_AN_PAS_13c1",
											"CUP_optic_LeupoldMk4_CQ_T",
											"CUP_optic_ELCAN_SpecterDR",
											"CUP_optic_LeupoldMk4_MRT_tan",
											"CUP_optic_SB_11_4x20_PM",
											"CUP_optic_ZDDot",
											"CUP_optic_MRad",
											"CUP_optic_TrijiconRx01_desert",
											"CUP_optic_TrijiconRx01_black",
											"CUP_optic_AN_PVS_4",
											#endif
											"optic_Arco",
											"optic_Hamr",
											"optic_Aco",
											"optic_Holosight",
											"optic_MRCO",
											"optic_DMS"
											
										];
	DMS_assault_optic_chance			= 50;						// Percentage chance that an Assault Class AI will get an optic
	DMS_assault_bipod_chance			= 35;						// Percentage chance that an Assault Class AI will get a bipod
	DMS_assault_suppressor_chance		= 10;						// Percentage chance that an Assault Class AI will get a suppressor

	DMS_assault_items =					[							// Items for Assault Class AI (Loot stuff that goes in uniform/vest/backpack)
											"Exile_Item_Bandage"
										];
	DMS_assault_equipment =				[							// Equipment for Assault Class AI (stuff that goes in toolbelt slots)
											"ItemGPS"
										];
	DMS_assault_RandItemCount =			1;							// How many random items to add to the AI's inventory.
	DMS_assault_RandItems =				[							// The random items that will be added to the AI's inventory.
											"Exile_Item_Catfood_Cooked",
											"Exile_Item_Surstromming_Cooked",
											"Exile_Item_PowerDrink",
											"Exile_Item_EnergyDrink",
											"Exile_Item_Vishpirin",
											"Exile_Item_Bandage",
											"Exile_Item_Bandage",
											"Exile_Item_Bandage",
											"Exile_Item_Bandage",
											"Exile_Item_Bandage",											
											"HandGrenade",
											"MiniGrenade",
											"Exile_Item_DuctTape",
											"Exile_Item_Vishpirin",
											"Exile_Item_Heatpack",
											"Exile_Item_MacasCheese",
											"Exile_Item_BeefParts",
											"Exile_Item_Cheathas",
											"Exile_Item_DsNuts",
											"Exile_Item_Noodles",
											"Exile_Item_ChocolateMilk",
											"Exile_Item_Beer",
											"Exitem_purificationtablets",
											"Exile_Item_Bandage",
											"Exitem_antibiotic",
											"Exitem_painkillers",
											"Exitem_vitamins",
											"Exile_Item_Vishpirin",
											"Exitem_dressing",
											"Exitem_morphineauto",
											"Exitem_disinfectant",
											"Exitem_makeshift_bandage"
										];
	DMS_assault_helmets	=				[							// Helmets for Assault Class
											"Exile_Headgear_SafetyHelmet",
											"H_Bandanna_camo",
											"H_Bandanna_cbr",
											"H_Bandanna_gry",
											"H_Bandanna_khk",
											"H_Bandanna_khk_hs",
											"H_Bandanna_mcamo",
											"H_Bandanna_sgg",
											"H_Bandanna_surfer",
											"H_Beret_02",
											"H_Beret_Colonel",
											"H_Beret_blk",
											"H_Beret_blk_POLICE",
											"H_Beret_brn_SF",
											"H_Beret_grn",
											"H_Beret_grn_SF",
											"H_Beret_ocamo",
											"H_Beret_red",
											"H_Booniehat_dgtl",
											"H_Booniehat_dirty",
											"H_Booniehat_grn",
											"H_Booniehat_indp",
											"H_Booniehat_khk",
											"H_Booniehat_khk_hs",
											"H_Booniehat_mcamo",
											"H_Booniehat_tan",
											"H_Cap_blk",
											"H_Cap_blk_Raven",
											"H_Cap_blu",
											"H_Cap_brn_SPECOPS",
											"H_Cap_grn",
											"H_Cap_headphones",
											"H_Cap_khaki_specops_UK",
											"H_Cap_oli",
											"H_Cap_press",
											"H_Cap_red",
											"H_Cap_tan",
											"H_Cap_tan_specops_US",
											"H_CrewHelmetHeli_B",
											"H_CrewHelmetHeli_I",
											"H_CrewHelmetHeli_O",
											"H_Hat_blue",
											"H_Hat_brown",
											"H_Hat_camo",
											"H_Hat_checker",
											"H_Hat_grey",
											"H_Hat_tan",
											"H_HelmetB",
											"H_HelmetB_black",
											"H_HelmetB_camo",
											"H_HelmetB_desert",
											"H_HelmetB_grass",
											"H_HelmetB_light",
											"H_HelmetB_light_black",
											"H_HelmetB_light_desert",
											"H_HelmetB_light_grass",
											"H_HelmetB_light_sand",
											"H_HelmetB_light_snakeskin",
											"H_HelmetB_paint",
											"H_HelmetB_plain_blk",
											"H_HelmetB_sand",
											"H_HelmetB_snakeskin",
											"H_HelmetCrew_B",
											"H_HelmetCrew_B",
											"H_HelmetCrew_I",
											"H_HelmetCrew_I",
											"H_HelmetCrew_O",
											"H_HelmetCrew_O",
											"H_HelmetIA",
											"H_HelmetIA_camo",
											"H_HelmetIA_net",
											"H_HelmetLeaderO_ocamo",
											"H_HelmetLeaderO_oucamo",
											"H_HelmetO_ocamo",
											"H_HelmetO_oucamo",
											"H_HelmetSpecB",
											"H_HelmetSpecB_blk",
											"H_HelmetSpecB_paint1",
											"H_HelmetSpecB_paint2",
											"H_HelmetSpecO_blk",
											"H_HelmetSpecO_ocamo",
											"H_MilCap_blue",
											"H_MilCap_dgtl",
											"H_MilCap_mcamo",
											"H_MilCap_ocamo",
											"H_MilCap_oucamo",
											"H_MilCap_rucamo",
											"H_PilotHelmetHeli_B",
											"H_PilotHelmetHeli_I",
											"H_PilotHelmetHeli_O",
											"H_ShemagOpen_khk",
											"H_ShemagOpen_tan",
											"H_Shemag_khk",
											"H_Shemag_olive",
											"H_Shemag_olive_hs",
											"H_Shemag_tan",
											"H_StrawHat",
											"H_StrawHat_dark",
											"H_TurbanO_blk",
											"H_Watchcap_blk",
											"H_Watchcap_camo",
											"H_Watchcap_khk",
											"H_Watchcap_sgg",
											#ifdef GIVE_AI_APEX_GEAR
											"H_Beret_gen_F",
											"H_Booniehat_tna_F",
											"H_Cap_blk_Syndikat_F",
											"H_Cap_grn_Syndikat_F",
											"H_Cap_oli_Syndikat_F",
											"H_Cap_tan_Syndikat_F",
											"H_HelmetB_Enh_tna_F",
											"H_HelmetB_Light_tna_F",
											"H_HelmetB_TI_tna_F",
											"H_HelmetB_tna_F",
											"H_HelmetCrew_O_ghex_F",
											"H_HelmetLeaderO_ghex_F",
											"H_HelmetO_ghex_F",
											"H_HelmetSpecO_ghex_F",
											"H_Helmet_Skate",
											"H_MilCap_gen_F",
											"H_MilCap_ghex_F",
											"H_MilCap_tna_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_H_BAF_Helmet_1_DDPM",
											"CUP_H_BAF_Helmet_1_DPM",
											"CUP_H_BAF_Helmet_1_MTP",
											"CUP_H_BAF_Helmet_2_DDPM",
											"CUP_H_BAF_Helmet_2_DPM",
											"CUP_H_BAF_Helmet_2_MTP",
											"CUP_H_BAF_Helmet_3_DDPM",
											"CUP_H_BAF_Helmet_3_DPM",
											"CUP_H_BAF_Helmet_3_MTP",
											"CUP_H_BAF_Helmet_4_DDPM",
											"CUP_H_BAF_Helmet_4_DPM",
											"CUP_H_BAF_Helmet_4_MTP",
											"CUP_H_BAF_Officer_Beret_PRR_O",
											"CUP_H_C_Beanie_01",
											"CUP_H_C_Beanie_02",
											"CUP_H_C_Beanie_03",
											"CUP_H_C_Beanie_04",
											"CUP_H_C_Beret_01",
											"CUP_H_C_Beret_02",
											"CUP_H_C_Beret_03",
											"CUP_H_C_Beret_04",
											"CUP_H_C_Ushanka_01",
											"CUP_H_C_Ushanka_02",
											"CUP_H_C_Ushanka_03",
											"CUP_H_C_Ushanka_04",
											"CUP_H_FR_BandanaGreen",
											"CUP_H_FR_BandanaWdl",
											"CUP_H_FR_Bandana_Headset",
											"CUP_H_FR_BeanieGreen",
											"CUP_H_FR_BoonieMARPAT",
											"CUP_H_FR_BoonieWDL",
											"CUP_H_FR_Cap_Headset_Green",
											"CUP_H_FR_Cap_Officer_Headset",
											"CUP_H_FR_ECH",
											"CUP_H_FR_Headband_Headset",
											"CUP_H_FR_Headset",
											"CUP_H_FR_PRR_BoonieWDL",
											"CUP_H_GER_Boonie_Flecktarn",
											"CUP_H_GER_Boonie_desert",
											"CUP_H_NAPA_Fedora",
											"CUP_H_Navy_CrewHelmet_Blue",
											"CUP_H_Navy_CrewHelmet_Brown",
											"CUP_H_Navy_CrewHelmet_Green",
											"CUP_H_Navy_CrewHelmet_Red",
											"CUP_H_Navy_CrewHelmet_Violet",
											"CUP_H_Navy_CrewHelmet_White",
											"CUP_H_Navy_CrewHelmet_Yellow",
											"CUP_H_PMC_Cap_Grey",
											"CUP_H_PMC_Cap_PRR_Grey",
											"CUP_H_PMC_Cap_PRR_Tan",
											"CUP_H_PMC_Cap_Tan",
											"CUP_H_PMC_EP_Headset",
											"CUP_H_PMC_PRR_Headset",
											"CUP_H_RACS_Beret_Blue",
											"CUP_H_RACS_Helmet_DPAT",
											"CUP_H_RACS_Helmet_Des",
											"CUP_H_RACS_Helmet_Goggles_DPAT",
											"CUP_H_RACS_Helmet_Goggles_Des",
											"CUP_H_RACS_Helmet_Headset_DPAT",
											"CUP_H_RACS_Helmet_Headset_Des",
											"CUP_H_SLA_Beret",
											"CUP_H_SLA_Boonie",
											"CUP_H_SLA_Helmet",
											"CUP_H_SLA_OfficerCap",
											"CUP_H_SLA_Pilot_Helmet",
											"CUP_H_SLA_SLCap",
											"CUP_H_SLA_TankerHelmet",
											"CUP_H_TKI_Lungee_01",
											"CUP_H_TKI_Lungee_02",
											"CUP_H_TKI_Lungee_03",
											"CUP_H_TKI_Lungee_04",
											"CUP_H_TKI_Lungee_05",
											"CUP_H_TKI_Lungee_06",
											"CUP_H_TKI_Lungee_Open_01",
											"CUP_H_TKI_Lungee_Open_02",
											"CUP_H_TKI_Lungee_Open_03",
											"CUP_H_TKI_Lungee_Open_04",
											"CUP_H_TKI_Lungee_Open_05",
											"CUP_H_TKI_Lungee_Open_06",
											"CUP_H_TKI_Pakol_1_01",
											"CUP_H_TKI_Pakol_1_02",
											"CUP_H_TKI_Pakol_1_03",
											"CUP_H_TKI_Pakol_1_04",
											"CUP_H_TKI_Pakol_1_05",
											"CUP_H_TKI_Pakol_1_06",
											"CUP_H_TKI_Pakol_2_01",
											"CUP_H_TKI_Pakol_2_02",
											"CUP_H_TKI_Pakol_2_03",
											"CUP_H_TKI_Pakol_2_04",
											"CUP_H_TKI_Pakol_2_05",
											"CUP_H_TKI_Pakol_2_06",
											"CUP_H_TKI_SkullCap_01",
											"CUP_H_TKI_SkullCap_02",
											"CUP_H_TKI_SkullCap_03",
											"CUP_H_TKI_SkullCap_04",
											"CUP_H_TKI_SkullCap_05",
											"CUP_H_TKI_SkullCap_06",
											"CUP_H_TK_Beret",
											"CUP_H_TK_Helmet",
											"CUP_H_TK_Lungee",
											"CUP_H_TK_PilotHelmet",
											"CUP_H_TK_TankerHelmet",
											"CUP_H_USMC_Crew_Helmet",
											"CUP_H_USMC_Goggles_HelmetWDL",
											"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
											"CUP_H_USMC_HeadSet_HelmetWDL",
											"CUP_H_USMC_HelmetWDL",
											"CUP_H_USMC_Helmet_Pilot",
											"CUP_H_USMC_Officer_Cap",
											//Light CUP Helmets Start
											"CUP_H_BAF_Helmet_1_DDPM",
											"CUP_H_BAF_Helmet_1_DPM",
											"CUP_H_BAF_Helmet_1_MTP",
											"CUP_H_BAF_Helmet_2_DDPM",
											"CUP_H_BAF_Helmet_2_DPM",
											"CUP_H_BAF_Helmet_2_MTP",
											"CUP_H_BAF_Helmet_3_DDPM",
											"CUP_H_BAF_Helmet_3_DPM",
											"CUP_H_BAF_Helmet_3_MTP",
											"CUP_H_BAF_Helmet_4_DDPM",
											"CUP_H_BAF_Helmet_4_DPM",
											"CUP_H_BAF_Helmet_4_MTP",
											"CUP_H_RACS_Helmet_DPAT",
											"CUP_H_RACS_Helmet_Des",
											"CUP_H_RACS_Helmet_Goggles_DPAT",
											"CUP_H_RACS_Helmet_Goggles_Des",
											"CUP_H_RACS_Helmet_Headset_DPAT",
											"CUP_H_RACS_Helmet_Headset_Des",
											"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
											"CUP_H_USMC_HeadSet_HelmetWDL",
											"CUP_H_USMC_HelmetWDL",
											//Light CUP Helmets End	
											//Light CUP Helmets Start
											"CUP_H_BAF_Helmet_1_DDPM",
											"CUP_H_BAF_Helmet_1_DPM",
											"CUP_H_BAF_Helmet_1_MTP",
											"CUP_H_BAF_Helmet_2_DDPM",
											"CUP_H_BAF_Helmet_2_DPM",
											"CUP_H_BAF_Helmet_2_MTP",
											"CUP_H_BAF_Helmet_3_DDPM",
											"CUP_H_BAF_Helmet_3_DPM",
											"CUP_H_BAF_Helmet_3_MTP",
											"CUP_H_BAF_Helmet_4_DDPM",
											"CUP_H_BAF_Helmet_4_DPM",
											"CUP_H_BAF_Helmet_4_MTP",
											"CUP_H_RACS_Helmet_DPAT",
											"CUP_H_RACS_Helmet_Des",
											"CUP_H_RACS_Helmet_Goggles_DPAT",
											"CUP_H_RACS_Helmet_Goggles_Des",
											"CUP_H_RACS_Helmet_Headset_DPAT",
											"CUP_H_RACS_Helmet_Headset_Des",
											"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
											"CUP_H_USMC_HeadSet_HelmetWDL",
											"CUP_H_USMC_HelmetWDL",
											//Light CUP Helmets End	
											//Light CUP Helmets Start
											"CUP_H_BAF_Helmet_1_DDPM",
											"CUP_H_BAF_Helmet_1_DPM",
											"CUP_H_BAF_Helmet_1_MTP",
											"CUP_H_BAF_Helmet_2_DDPM",
											"CUP_H_BAF_Helmet_2_DPM",
											"CUP_H_BAF_Helmet_2_MTP",
											"CUP_H_BAF_Helmet_3_DDPM",
											"CUP_H_BAF_Helmet_3_DPM",
											"CUP_H_BAF_Helmet_3_MTP",
											"CUP_H_BAF_Helmet_4_DDPM",
											"CUP_H_BAF_Helmet_4_DPM",
											"CUP_H_BAF_Helmet_4_MTP",
											"CUP_H_RACS_Helmet_DPAT",
											"CUP_H_RACS_Helmet_Des",
											"CUP_H_RACS_Helmet_Goggles_DPAT",
											"CUP_H_RACS_Helmet_Goggles_Des",
											"CUP_H_RACS_Helmet_Headset_DPAT",
											"CUP_H_RACS_Helmet_Headset_Des",
											"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
											"CUP_H_USMC_HeadSet_HelmetWDL",
											"CUP_H_USMC_HelmetWDL",
											//Light CUP Helmets End	
											//Light CUP Helmets Start
											"CUP_H_BAF_Helmet_1_DDPM",
											"CUP_H_BAF_Helmet_1_DPM",
											"CUP_H_BAF_Helmet_1_MTP",
											"CUP_H_BAF_Helmet_2_DDPM",
											"CUP_H_BAF_Helmet_2_DPM",
											"CUP_H_BAF_Helmet_2_MTP",
											"CUP_H_BAF_Helmet_3_DDPM",
											"CUP_H_BAF_Helmet_3_DPM",
											"CUP_H_BAF_Helmet_3_MTP",
											"CUP_H_BAF_Helmet_4_DDPM",
											"CUP_H_BAF_Helmet_4_DPM",
											"CUP_H_BAF_Helmet_4_MTP",
											"CUP_H_RACS_Helmet_DPAT",
											"CUP_H_RACS_Helmet_Des",
											"CUP_H_RACS_Helmet_Goggles_DPAT",
											"CUP_H_RACS_Helmet_Goggles_Des",
											"CUP_H_RACS_Helmet_Headset_DPAT",
											"CUP_H_RACS_Helmet_Headset_Des",
											"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
											"CUP_H_USMC_HeadSet_HelmetWDL",
											"CUP_H_USMC_HelmetWDL",
											//Light CUP Helmets End											
											#endif
											//Light Helmets Start
											"H_HelmetB",
											"H_HelmetB_black",
											"H_HelmetB_camo",
											"H_HelmetB_desert",
											"H_HelmetB_grass",
											"H_HelmetB_light",
											"H_HelmetB_light_black",
											"H_HelmetB_light_desert",
											"H_HelmetB_light_grass",
											"H_HelmetB_light_sand",
											"H_HelmetB_light_snakeskin",
											//Light Helmets End
											//Light Helmets Start
											"H_HelmetB",
											"H_HelmetB_black",
											"H_HelmetB_camo",
											"H_HelmetB_desert",
											"H_HelmetB_grass",
											"H_HelmetB_light",
											"H_HelmetB_light_black",
											"H_HelmetB_light_desert",
											"H_HelmetB_light_grass",
											"H_HelmetB_light_sand",
											"H_HelmetB_light_snakeskin",
											//Light Helmets End
											//Light Helmets Start
											"H_HelmetB",
											"H_HelmetB_black",
											"H_HelmetB_camo",
											"H_HelmetB_desert",
											"H_HelmetB_grass",
											"H_HelmetB_light",
											"H_HelmetB_light_black",
											"H_HelmetB_light_desert",
											"H_HelmetB_light_grass",
											"H_HelmetB_light_sand",
											"H_HelmetB_light_snakeskin"
											//Light Helmets End
										];
	DMS_assault_clothes	=				[							// Uniforms for Assault Class
											#ifdef GIVE_AI_APEX_GEAR
											//Common Uniform Start
											"U_B_T_Soldier_F",
											"U_B_T_Soldier_SL_F",
											"U_B_CTRG_Soldier_F",
											"U_O_V_Soldier_Viper_F",
											"U_I_C_Soldier_Bandit_2_F",
											"U_I_C_Soldier_Camo_F",
											"U_B_CTRG_Soldier_urb_1_F",
											//Common Uniform End
											//Common Uniform Start
											"U_B_T_Soldier_F",
											"U_B_T_Soldier_SL_F",
											"U_B_CTRG_Soldier_F",
											"U_O_V_Soldier_Viper_F",
											"U_I_C_Soldier_Bandit_2_F",
											"U_I_C_Soldier_Camo_F",
											"U_B_CTRG_Soldier_urb_1_F",
											//Common Uniform End
											//Common Uniform Start
											"U_B_T_Soldier_F",
											"U_B_T_Soldier_SL_F",
											"U_B_CTRG_Soldier_F",
											"U_O_V_Soldier_Viper_F",
											"U_I_C_Soldier_Bandit_2_F",
											"U_I_C_Soldier_Camo_F",
											"U_B_CTRG_Soldier_urb_1_F",
											//Common Uniform End
											//Common Uniform Start
											"U_B_T_Soldier_F",
											"U_B_T_Soldier_SL_F",
											"U_B_CTRG_Soldier_F",
											"U_O_V_Soldier_Viper_F",
											"U_I_C_Soldier_Bandit_2_F",
											"U_I_C_Soldier_Camo_F",
											"U_B_CTRG_Soldier_urb_1_F",
											//Common Uniform End
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											// "CUP_U_B_GER_Ghillie",
											// "CUP_U_B_GER_Fleck_Ghillie",
											// "CUP_U_B_USMC_Ghillie_WDL",
											// "CUP_U_I_Ghillie_Top",
											// "CUP_U_O_SLA_Officer", //TEST, gave error in mission :)
											// "CUP_U_O_TK_Ghillie",
											// "CUP_U_O_TK_Ghillie_Top",
											"CUP_O_TKI_Khet_Partug_01",
											"CUP_O_TKI_Khet_Partug_02",
											"CUP_O_TKI_Khet_Partug_03",
											"CUP_O_TKI_Khet_Partug_04",
											"CUP_O_TKI_Khet_Partug_05",
											"CUP_O_TKI_Khet_Partug_06",
											"CUP_O_TKI_Khet_Partug_07",
											"CUP_O_TKI_Khet_Partug_08",
											"CUP_O_TKI_Khet_Jeans_01",
											"CUP_O_TKI_Khet_Jeans_02",
											"CUP_O_TKI_Khet_Jeans_03",
											"CUP_O_TKI_Khet_Jeans_04",
											"CUP_U_C_Pilot_01",
											"CUP_U_B_CZ_WDL_TShirt",
											"CUP_U_B_GER_Tropentarn_1",
											"CUP_U_B_GER_Tropentarn_2",
											"CUP_U_B_GER_Flecktarn_1",
											"CUP_U_B_GER_Flecktarn_2",
											"CUP_U_B_USMC_Officer",
											"CUP_U_B_USMC_PilotOverall",
											"CUP_U_B_USMC_MARPAT_WDL_Sleeves",
											"CUP_U_B_USMC_MARPAT_WDL_RolledUp",
											"CUP_U_B_USMC_MARPAT_WDL_Kneepad",
											"CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
											"CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
											"CUP_U_B_FR_SpecOps",
											"CUP_U_B_FR_Scout",
											"CUP_U_B_FR_Scout1",
											"CUP_U_B_FR_Scout2",
											"CUP_U_B_FR_Scout3",
											"CUP_U_B_FR_Officer",
											"CUP_U_B_FR_Corpsman",
											"CUP_U_B_FR_DirAction",
											"CUP_U_B_FR_DirAction2",
											"CUP_U_B_FR_Light",
											"CUP_U_I_GUE_Flecktarn",
											"CUP_U_I_GUE_Flecktarn2",
											"CUP_U_I_GUE_Flecktarn3",
											"CUP_U_I_GUE_Woodland1",
											"CUP_U_I_RACS_PilotOverall",
											"CUP_U_I_RACS_Desert_1",
											"CUP_U_I_RACS_Desert_2",
											"CUP_U_I_RACS_Urban_1",
											"CUP_U_I_RACS_Urban_2",
											"CUP_U_O_SLA_Officer_Suit",
											"CUP_U_O_SLA_MixedCamo",
											"CUP_U_O_SLA_Green",
											"CUP_U_O_SLA_Urban",
											"CUP_U_O_SLA_Desert",
											"CUP_U_O_SLA_Overalls_Pilot",
											"CUP_U_O_SLA_Overalls_Tank",
											"CUP_U_O_Partisan_TTsKO",
											"CUP_U_O_Partisan_TTsKO_Mixed",
											"CUP_U_O_Partisan_VSR_Mixed1",
											"CUP_U_O_Partisan_VSR_Mixed2",
											"CUP_U_O_TK_Officer",
											"CUP_U_O_TK_MixedCamo",
											"CUP_U_O_TK_Green",
											"CUP_U_B_BAF_DDPM_S1_RolledUp",
											//"CUP_U_B_BAF_DDPM_S1_UnRolled",
											"CUP_U_B_BAF_DDPM_Tshirt",
											"CUP_U_B_BAF_DPM_S1_RolledUp",
											"CUP_U_B_BAF_DPM_S2_UnRolled",
											"CUP_U_B_BAF_DPM_Tshirt",
											"CUP_U_B_BAF_MTP_S1_RolledUp",
											"CUP_U_B_BAF_MTP_S2_UnRolled",
											"CUP_U_B_BAF_MTP_Tshirt",
											"CUP_U_B_BAF_MTP_S3_RolledUp",
											"CUP_U_B_BAF_MTP_S4_UnRolled",
											"CUP_U_B_BAF_MTP_S5_UnRolled",
											"CUP_U_B_BAF_MTP_S6_UnRolled",
											#endif
											"U_O_CombatUniform_ocamo",
											"U_O_PilotCoveralls",
											//"U_B_Wetsuit",
											"U_BG_Guerilla3_1",
											"U_BG_Guerilla2_3",
											"U_BG_Guerilla2_2",
											"U_BG_Guerilla1_1",
											"U_BG_Guerrilla_6_1",
											"U_IG_Guerilla3_2",
											"U_B_SpecopsUniform_sgg",
											"U_I_OfficerUniform",
											"U_B_CTRG_3",
											"U_I_G_resistanceLeader_F"

										];
	DMS_assault_vests =					[							// Vests for Assault Class
											#ifdef GIVE_AI_APEX_GEAR
											"V_TacChestrig_grn_F",
											"V_PlateCarrier2_tna_F",
											"V_PlateCarrierSpec_tna_F",
											"V_PlateCarrierGL_tna_F",
											"V_TacVest_gen_F",
											"V_PlateCarrier1_rgr_noflag_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											// "CUP_V_OI_TKI_Jacket1_01",
											// "CUP_V_OI_TKI_Jacket1_02",
											// "CUP_V_OI_TKI_Jacket1_03",
											// "CUP_V_OI_TKI_Jacket1_04",
											// "CUP_V_OI_TKI_Jacket1_05",
											// "CUP_V_OI_TKI_Jacket1_06",
											// "CUP_V_OI_TKI_Jacket2_01",
											// "CUP_V_OI_TKI_Jacket2_02",
											// "CUP_V_OI_TKI_Jacket2_03",
											// "CUP_V_OI_TKI_Jacket2_04",
											// "CUP_V_OI_TKI_Jacket2_05",
											// "CUP_V_OI_TKI_Jacket2_06",
											// "CUP_V_OI_TKI_Jacket3_01",
											// "CUP_V_OI_TKI_Jacket3_02",
											// "CUP_V_OI_TKI_Jacket3_03",
											// "CUP_V_OI_TKI_Jacket3_04",
											// "CUP_V_OI_TKI_Jacket3_05",
											// "CUP_V_OI_TKI_Jacket3_06",
											// "CUP_V_OI_TKI_Jacket4_01",
											// "CUP_V_OI_TKI_Jacket4_02",
											// "CUP_V_OI_TKI_Jacket4_03",
											// "CUP_V_OI_TKI_Jacket4_04",
											// "CUP_V_OI_TKI_Jacket4_05",
											// "CUP_V_OI_TKI_Jacket4_06",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Medic",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Officer",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Sapper",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Scout",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1",
											"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2",
											"CUP_V_BAF_Osprey_Mk2_DPM_Grenadier",
											"CUP_V_BAF_Osprey_Mk2_DPM_Medic",
											"CUP_V_BAF_Osprey_Mk2_DPM_Officer",
											"CUP_V_BAF_Osprey_Mk2_DPM_Sapper",
											"CUP_V_BAF_Osprey_Mk2_DPM_Scout",
											"CUP_V_BAF_Osprey_Mk2_DPM_Soldier1",
											"CUP_V_BAF_Osprey_Mk2_DPM_Soldier2",
											"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",
											"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner",
											"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",
											"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",
											"CUP_V_B_GER_Carrier_Rig",
											"CUP_V_B_GER_Carrier_Rig_2",
											"CUP_V_B_GER_Carrier_Vest",
											"CUP_V_B_GER_Carrier_Vest_2",
											"CUP_V_B_GER_Carrier_Vest_3",
											"CUP_V_B_GER_Vest_1",
											"CUP_V_B_GER_Vest_2",
											"CUP_V_B_LHDVest_Blue",
											"CUP_V_B_LHDVest_Brown",
											"CUP_V_B_LHDVest_Green",
											"CUP_V_B_LHDVest_Red",
											"CUP_V_B_LHDVest_Violet",
											"CUP_V_B_LHDVest_White",
											"CUP_V_B_LHDVest_Yellow",
											"CUP_V_B_MTV",
											"CUP_V_B_MTV_LegPouch",
											"CUP_V_B_MTV_MG",
											"CUP_V_B_MTV_Marksman",
											"CUP_V_B_MTV_Mine",
											"CUP_V_B_MTV_Patrol",
											"CUP_V_B_MTV_PistolBlack",
											"CUP_V_B_MTV_Pouches",
											"CUP_V_B_MTV_TL",
											"CUP_V_B_MTV_noCB",
											"CUP_V_B_PilotVest",
											"CUP_V_B_RRV_DA1",
											"CUP_V_B_RRV_DA2",
											"CUP_V_B_RRV_Light",
											"CUP_V_B_RRV_MG",
											"CUP_V_B_RRV_Medic",
											"CUP_V_B_RRV_Officer",
											"CUP_V_B_RRV_Scout",
											"CUP_V_B_RRV_Scout2",
											"CUP_V_B_RRV_Scout3",
											"CUP_V_B_RRV_TL",
											"CUP_V_I_Carrier_Belt",
											"CUP_V_I_Guerilla_Jacket",
											"CUP_V_I_RACS_Carrier_Vest",
											"CUP_V_I_RACS_Carrier_Vest_2",
											"CUP_V_I_RACS_Carrier_Vest_3",
											"CUP_V_O_SLA_Carrier_Belt",
											"CUP_V_O_SLA_Carrier_Belt02",
											"CUP_V_O_SLA_Carrier_Belt03",
											"CUP_V_O_SLA_Flak_Vest01",
											"CUP_V_O_SLA_Flak_Vest02",
											"CUP_V_O_SLA_Flak_Vest03",
											"CUP_V_O_TK_CrewBelt",
											"CUP_V_O_TK_OfficerBelt",
											"CUP_V_O_TK_OfficerBelt2",
											"CUP_V_O_TK_Vest_1",
											"CUP_V_O_TK_Vest_2",
											//Common Vest Start
											"CUP_V_B_GER_Carrier_Rig",
											"CUP_V_B_GER_Carrier_Rig_2",
											"CUP_V_B_GER_Carrier_Vest",
											"CUP_V_B_GER_Carrier_Vest_2",
											"CUP_V_B_GER_Carrier_Vest_3",
											"CUP_V_B_GER_Vest_1",
											"CUP_V_B_GER_Vest_2",
											"CUP_V_B_LHDVest_Blue",
											"CUP_V_B_LHDVest_Brown",
											"CUP_V_B_LHDVest_Green",
											"CUP_V_B_LHDVest_Red",
											"CUP_V_B_LHDVest_Violet",
											"CUP_V_B_LHDVest_White",
											"CUP_V_B_LHDVest_Yellow",
											"CUP_V_B_MTV",
											"CUP_V_B_MTV_LegPouch",
											"CUP_V_B_MTV_MG",
											"CUP_V_B_MTV_Marksman",
											"CUP_V_B_MTV_Mine",
											"CUP_V_B_MTV_Patrol",
											"CUP_V_B_MTV_PistolBlack",
											"CUP_V_B_MTV_Pouches",
											"CUP_V_B_MTV_TL",
											"CUP_V_B_MTV_noCB",
											"CUP_V_B_PilotVest",
											"CUP_V_B_RRV_DA1",
											"CUP_V_B_RRV_DA2",
											"CUP_V_B_RRV_Light",
											"CUP_V_B_RRV_MG",
											"CUP_V_B_RRV_Medic",
											"CUP_V_B_RRV_Officer",
											"CUP_V_B_RRV_Scout",
											"CUP_V_B_RRV_Scout2",
											"CUP_V_B_RRV_Scout3",
											"CUP_V_B_RRV_TL",
											"CUP_V_I_Carrier_Belt",
											"CUP_V_I_Guerilla_Jacket",
											"CUP_V_I_RACS_Carrier_Vest",
											"CUP_V_I_RACS_Carrier_Vest_2",
											"CUP_V_I_RACS_Carrier_Vest_3",
											"CUP_V_O_SLA_Carrier_Belt",
											"CUP_V_O_SLA_Carrier_Belt02",
											"CUP_V_O_SLA_Carrier_Belt03",
											"CUP_V_O_SLA_Flak_Vest01",
											"CUP_V_O_SLA_Flak_Vest02",
											"CUP_V_O_SLA_Flak_Vest03",
											"CUP_V_O_TK_CrewBelt",
											"CUP_V_O_TK_OfficerBelt",
											"CUP_V_O_TK_OfficerBelt2",
											"CUP_V_O_TK_Vest_1",
											"CUP_V_O_TK_Vest_2",
											//Common Vest End
											//Common Vest Start
											"CUP_V_B_GER_Carrier_Rig",
											"CUP_V_B_GER_Carrier_Rig_2",
											"CUP_V_B_GER_Carrier_Vest",
											"CUP_V_B_GER_Carrier_Vest_2",
											"CUP_V_B_GER_Carrier_Vest_3",
											"CUP_V_B_GER_Vest_1",
											"CUP_V_B_GER_Vest_2",
											"CUP_V_B_LHDVest_Blue",
											"CUP_V_B_LHDVest_Brown",
											"CUP_V_B_LHDVest_Green",
											"CUP_V_B_LHDVest_Red",
											"CUP_V_B_LHDVest_Violet",
											"CUP_V_B_LHDVest_White",
											"CUP_V_B_LHDVest_Yellow",
											"CUP_V_B_MTV",
											"CUP_V_B_MTV_LegPouch",
											"CUP_V_B_MTV_MG",
											"CUP_V_B_MTV_Marksman",
											"CUP_V_B_MTV_Mine",
											"CUP_V_B_MTV_Patrol",
											"CUP_V_B_MTV_PistolBlack",
											"CUP_V_B_MTV_Pouches",
											"CUP_V_B_MTV_TL",
											"CUP_V_B_MTV_noCB",
											"CUP_V_B_PilotVest",
											"CUP_V_B_RRV_DA1",
											"CUP_V_B_RRV_DA2",
											"CUP_V_B_RRV_Light",
											"CUP_V_B_RRV_MG",
											"CUP_V_B_RRV_Medic",
											"CUP_V_B_RRV_Officer",
											"CUP_V_B_RRV_Scout",
											"CUP_V_B_RRV_Scout2",
											"CUP_V_B_RRV_Scout3",
											"CUP_V_B_RRV_TL",
											"CUP_V_I_Carrier_Belt",
											"CUP_V_I_Guerilla_Jacket",
											"CUP_V_I_RACS_Carrier_Vest",
											"CUP_V_I_RACS_Carrier_Vest_2",
											"CUP_V_I_RACS_Carrier_Vest_3",
											"CUP_V_O_SLA_Carrier_Belt",
											"CUP_V_O_SLA_Carrier_Belt02",
											"CUP_V_O_SLA_Carrier_Belt03",
											"CUP_V_O_SLA_Flak_Vest01",
											"CUP_V_O_SLA_Flak_Vest02",
											"CUP_V_O_SLA_Flak_Vest03",
											"CUP_V_O_TK_CrewBelt",
											"CUP_V_O_TK_OfficerBelt",
											"CUP_V_O_TK_OfficerBelt2",
											"CUP_V_O_TK_Vest_1",
											"CUP_V_O_TK_Vest_2",
											//Common Vest End
											//Common Vest Start
											"CUP_V_B_GER_Carrier_Rig",
											"CUP_V_B_GER_Carrier_Rig_2",
											"CUP_V_B_GER_Carrier_Vest",
											"CUP_V_B_GER_Carrier_Vest_2",
											"CUP_V_B_GER_Carrier_Vest_3",
											"CUP_V_B_GER_Vest_1",
											"CUP_V_B_GER_Vest_2",
											"CUP_V_B_LHDVest_Blue",
											"CUP_V_B_LHDVest_Brown",
											"CUP_V_B_LHDVest_Green",
											"CUP_V_B_LHDVest_Red",
											"CUP_V_B_LHDVest_Violet",
											"CUP_V_B_LHDVest_White",
											"CUP_V_B_LHDVest_Yellow",
											"CUP_V_B_MTV",
											"CUP_V_B_MTV_LegPouch",
											"CUP_V_B_MTV_MG",
											"CUP_V_B_MTV_Marksman",
											"CUP_V_B_MTV_Mine",
											"CUP_V_B_MTV_Patrol",
											"CUP_V_B_MTV_PistolBlack",
											"CUP_V_B_MTV_Pouches",
											"CUP_V_B_MTV_TL",
											"CUP_V_B_MTV_noCB",
											"CUP_V_B_PilotVest",
											"CUP_V_B_RRV_DA1",
											"CUP_V_B_RRV_DA2",
											"CUP_V_B_RRV_Light",
											"CUP_V_B_RRV_MG",
											"CUP_V_B_RRV_Medic",
											"CUP_V_B_RRV_Officer",
											"CUP_V_B_RRV_Scout",
											"CUP_V_B_RRV_Scout2",
											"CUP_V_B_RRV_Scout3",
											"CUP_V_B_RRV_TL",
											"CUP_V_I_Carrier_Belt",
											"CUP_V_I_Guerilla_Jacket",
											"CUP_V_I_RACS_Carrier_Vest",
											"CUP_V_I_RACS_Carrier_Vest_2",
											"CUP_V_I_RACS_Carrier_Vest_3",
											"CUP_V_O_SLA_Carrier_Belt",
											"CUP_V_O_SLA_Carrier_Belt02",
											"CUP_V_O_SLA_Carrier_Belt03",
											"CUP_V_O_SLA_Flak_Vest01",
											"CUP_V_O_SLA_Flak_Vest02",
											"CUP_V_O_SLA_Flak_Vest03",
											"CUP_V_O_TK_CrewBelt",
											"CUP_V_O_TK_OfficerBelt",
											"CUP_V_O_TK_OfficerBelt2",
											"CUP_V_O_TK_Vest_1",
											"CUP_V_O_TK_Vest_2",
											//Common Vest End
											//Common Vest Start
											"CUP_V_B_GER_Carrier_Rig",
											"CUP_V_B_GER_Carrier_Rig_2",
											"CUP_V_B_GER_Carrier_Vest",
											"CUP_V_B_GER_Carrier_Vest_2",
											"CUP_V_B_GER_Carrier_Vest_3",
											"CUP_V_B_GER_Vest_1",
											"CUP_V_B_GER_Vest_2",
											"CUP_V_B_LHDVest_Blue",
											"CUP_V_B_LHDVest_Brown",
											"CUP_V_B_LHDVest_Green",
											"CUP_V_B_LHDVest_Red",
											"CUP_V_B_LHDVest_Violet",
											"CUP_V_B_LHDVest_White",
											"CUP_V_B_LHDVest_Yellow",
											"CUP_V_B_MTV",
											"CUP_V_B_MTV_LegPouch",
											"CUP_V_B_MTV_MG",
											"CUP_V_B_MTV_Marksman",
											"CUP_V_B_MTV_Mine",
											"CUP_V_B_MTV_Patrol",
											"CUP_V_B_MTV_PistolBlack",
											"CUP_V_B_MTV_Pouches",
											"CUP_V_B_MTV_TL",
											"CUP_V_B_MTV_noCB",
											"CUP_V_B_PilotVest",
											"CUP_V_B_RRV_DA1",
											"CUP_V_B_RRV_DA2",
											"CUP_V_B_RRV_Light",
											"CUP_V_B_RRV_MG",
											"CUP_V_B_RRV_Medic",
											"CUP_V_B_RRV_Officer",
											"CUP_V_B_RRV_Scout",
											"CUP_V_B_RRV_Scout2",
											"CUP_V_B_RRV_Scout3",
											"CUP_V_B_RRV_TL",
											"CUP_V_I_Carrier_Belt",
											"CUP_V_I_Guerilla_Jacket",
											"CUP_V_I_RACS_Carrier_Vest",
											"CUP_V_I_RACS_Carrier_Vest_2",
											"CUP_V_I_RACS_Carrier_Vest_3",
											"CUP_V_O_SLA_Carrier_Belt",
											"CUP_V_O_SLA_Carrier_Belt02",
											"CUP_V_O_SLA_Carrier_Belt03",
											"CUP_V_O_SLA_Flak_Vest01",
											"CUP_V_O_SLA_Flak_Vest02",
											"CUP_V_O_SLA_Flak_Vest03",
											"CUP_V_O_TK_CrewBelt",
											"CUP_V_O_TK_OfficerBelt",
											"CUP_V_O_TK_OfficerBelt2",
											"CUP_V_O_TK_Vest_1",
											"CUP_V_O_TK_Vest_2",
											//Common Vest End
											#endif											
											"V_PlateCarrierH_CTRG",
											"V_PlateCarrierSpec_rgr",
											"V_PlateCarrierGL_blk",
											"V_PlateCarrierGL_mtp",
											"V_PlateCarrierGL_rgr",
											"V_PlateCarrierSpec_blk",
											"V_PlateCarrierSpec_mtp",
											"V_PlateCarrierL_CTRG",
											"V_TacVest_blk_POLICE",
											"V_PlateCarrierIA2_dgtl"
										];
	DMS_assault_backpacks =				[							// Backpacks for Assault Class
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											//Assaultpack Start
											"B_AssaultPack_blk",
											"B_AssaultPack_cbr",
											"B_AssaultPack_dgtl",
											"B_AssaultPack_khk",
											"B_AssaultPack_mcamo",
											"B_AssaultPack_rgr",
											"B_AssaultPack_sgg",
											//Assaultpack End
											"B_Bergen_blk",
											"B_Bergen_mcamo",
											"B_Bergen_rgr",
											"B_Bergen_sgg",
											"B_Carryall_cbr",
											"B_Carryall_khk",
											"B_Carryall_mcamo",
											"B_Carryall_ocamo",
											"B_Carryall_oli",
											"B_Carryall_oucamo",
											//Fieldpack Start
											"B_FieldPack_blk",
											"B_FieldPack_cbr",
											"B_FieldPack_ocamo",
											"B_FieldPack_oucamo",
											//Fieldpack End
											"B_FieldPack_blk",
											"B_FieldPack_cbr",
											"B_FieldPack_ocamo",
											"B_FieldPack_oucamo",
											//Fieldpack End
											"B_FieldPack_blk",
											"B_FieldPack_cbr",
											"B_FieldPack_ocamo",
											"B_FieldPack_oucamo",
											//Fieldpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											//MediumBackpack Start
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack Start
										 	//MediumBackpack End
											"B_HuntingBackpack",
											"B_Kitbag_cbr",
											"B_Kitbag_mcamo",
											"B_Kitbag_sgg",
											"B_OutdoorPack_blk",
											"B_OutdoorPack_blu",
											"B_OutdoorPack_tan",
											"B_TacticalPack_blk",
											"B_TacticalPack_mcamo",
											"B_TacticalPack_ocamo",
											"B_TacticalPack_oli",
											"B_TacticalPack_rgr",
										 	//MediumBackpack End
											#ifdef GIVE_AI_APEX_GEAR
											// "B_Bergen_Base_F",
											// "B_Bergen_dgtl_F",
											// "B_Bergen_hex_F",
											// "B_Bergen_mcamo_F",
											// "B_Bergen_tna_F",
											"B_Carryall_ghex_F",
											"B_FieldPack_ghex_F",
											"B_ViperHarness_blk_F",
											"B_ViperHarness_ghex_F",
											"B_ViperHarness_hex_F",
											"B_ViperHarness_khk_F",
											"B_ViperHarness_oli_F",
											//Start ViperLightHarness
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											//End ViperLightHarness
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											//End ViperLightHarness
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_B_ACRPara_m95",
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start CUP AssaultPack
											"CUP_B_AssaultPack_ACU",
											"CUP_B_AssaultPack_Black",
											"CUP_B_AssaultPack_Coyote",
											//End CUP AssaultPack
											//Start Decent CUP Backpacks
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											//End Decent CUP Backpacks
											//Start Decent CUP Backpacks
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											//End Decent CUP Backpacks
											//Start Decent CUP Backpacks
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											//End Decent CUP Backpacks
											#endif
											// "B_Bergen_rgr",
											"B_Carryall_oli",
											"B_Kitbag_mcamo",
											"B_Carryall_cbr",
											// "B_Bergen_blk"
											//Extended Items Exile
											"Exitem_Large_Gunbag",
											"Exitem_Czech_Backpack",
											"Exitem_Coyote_Backpack",
											"Exitem_Assault_Backpack",
											"Exitem_Civilian_Backpack",
											"Exitem_Assault_Backpack",
											"Exitem_Civilian_Backpack",
											"Exitem_Assault_Backpack",
											"Exitem_Civilian_Backpack",
											"Exitem_Assault_Backpack",
											"Exitem_Civilian_Backpack",
											"Exitem_Assault_Backpack",
											"Exitem_Civilian_Backpack"
										];
	//Machine Gun Class
	DMS_MG_weps	=						[							// Machine Guns
											#ifdef GIVE_AI_MARKSMAN_DLC_WEAPONS
											//"MMG_01_hex_F", //navid
											//"MMG_02_black_F", //spmg
											#endif
											#ifdef GIVE_AI_APEX_WEAPONS
											"LMG_03_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_lmg_L7A2",
											"CUP_lmg_L110A1",
											//"CUP_lmg_M60A4",
											"CUP_lmg_M240",
											"CUP_lmg_M249",
											"CUP_lmg_M249_para",
											"CUP_lmg_Mk48_des",
											"CUP_lmg_Mk48_wdl",
											"CUP_lmg_PKM",
											"CUP_lmg_UK59",
											"CUP_lmg_Pecheneg",
											#endif
											"LMG_Zafir_F",
											"LMG_Mk200_F",
											"arifle_MX_SW_Black_F",
											"Exile_Weapon_RPK",
											"Exile_Weapon_PKP"

										];
	DMS_MG_pistols = DMS_assault_pistols;
	DMS_MG_optics =	DMS_assault_optics;
	DMS_MG_optic_chance					= 25;						// Percentage chance that an MG Class AI will get an optic
	DMS_MG_bipod_chance					= 60;						// Percentage chance that an MG Class AI will get a bipod
	DMS_MG_suppressor_chance			= 15;						// Percentage chance that an MG Class AI will get a suppressor

	DMS_MG_items =						[							// Items for MG Class AI (Loot stuff that goes in uniform/vest/backpack)
											"Exile_Item_Bandage",
											"Exile_Item_Heatpack"
										];
	DMS_MG_equipment =					[							// Equipment for MG Class AI (stuff that goes in toolbelt slots)
											"Binocular"
										];
	DMS_MG_RandItemCount =				1;							// How many random items to add to the AI's inventory.
	DMS_MG_RandItems = DMS_assault_RandItems + ["Exitem_money"];
	DMS_MG_helmets = DMS_assault_helmets;
	DMS_MG_clothes = DMS_assault_clothes;
	DMS_MG_vests = DMS_assault_vests;
	DMS_MG_backpacks = DMS_assault_backpacks;
	//Sniper Class
	DMS_sniper_weps =					[							// Sniper Rifles
											"srifle_EBR_F",
											//"srifle_GM6_F",
											//"srifle_LRR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_EBR_F",
											"arifle_MXM_Black_F",
											"srifle_DMR_01_F",
											//Common Snipers End
											#ifdef GIVE_AI_MARKSMAN_DLC_WEAPONS
											"srifle_DMR_05_blk_F", //Cyrus 9.3mm
											//"srifle_DMR_04_F",			// Does anybody like the ASP-1? :p
											//Common Snipers Start
											"srifle_DMR_02_F",
											"srifle_DMR_03_woodland_F",
											"srifle_DMR_06_olive_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_02_F",
											"srifle_DMR_03_woodland_F",
											"srifle_DMR_06_olive_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_02_F",
											"srifle_DMR_03_woodland_F",
											"srifle_DMR_06_olive_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_02_F",
											"srifle_DMR_03_woodland_F",
											"srifle_DMR_06_olive_F",
											//Common Snipers End
											#endif
											#ifdef GIVE_AI_APEX_WEAPONS
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											//Common Snipers Start
											"srifle_DMR_07_ghex_F",
											//Common Snipers End
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											//"CUP_srifle_AWM_des",
											//"CUP_srifle_AWM_wdl",
											//"CUP_srifle_M107_Base",
											//"CUP_srifle_ksvk",
											//"CUP_srifle_AS50"
											//Common Snipers Start
											"CUP_srifle_CZ750",
											"CUP_srifle_DMR",
											"CUP_srifle_CZ550",
											"CUP_srifle_LeeEnfield",
											"CUP_srifle_M14",
											"CUP_srifle_Mk12SPR",
											"CUP_srifle_M24_des",
											"CUP_srifle_M24_wdl",
											"CUP_srifle_M40A3",
											"CUP_srifle_M110",
											"CUP_srifle_SVD",
											"CUP_srifle_SVD_des",
											"CUP_srifle_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"CUP_srifle_CZ750",
											"CUP_srifle_DMR",
											"CUP_srifle_CZ550",
											"CUP_srifle_LeeEnfield",
											"CUP_srifle_M14",
											"CUP_srifle_Mk12SPR",
											"CUP_srifle_M24_des",
											"CUP_srifle_M24_wdl",
											"CUP_srifle_M40A3",
											"CUP_srifle_M110",
											"CUP_srifle_SVD",
											"CUP_srifle_SVD_des",
											"CUP_srifle_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"CUP_srifle_CZ750",
											"CUP_srifle_DMR",
											"CUP_srifle_CZ550",
											"CUP_srifle_LeeEnfield",
											"CUP_srifle_M14",
											"CUP_srifle_Mk12SPR",
											"CUP_srifle_M24_des",
											"CUP_srifle_M24_wdl",
											"CUP_srifle_M40A3",
											"CUP_srifle_M110",
											"CUP_srifle_SVD",
											"CUP_srifle_SVD_des",
											"CUP_srifle_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"CUP_srifle_CZ750",
											"CUP_srifle_DMR",
											"CUP_srifle_CZ550",
											"CUP_srifle_LeeEnfield",
											"CUP_srifle_M14",
											"CUP_srifle_Mk12SPR",
											"CUP_srifle_M24_des",
											"CUP_srifle_M24_wdl",
											"CUP_srifle_M40A3",
											"CUP_srifle_M110",
											"CUP_srifle_SVD",
											"CUP_srifle_SVD_des",
											"CUP_srifle_VSSVintorez",
											//Common Snipers End
											#endif	
											//Common Snipers Start
											"Exile_Weapon_DMR",
											"Exile_Weapon_SVD",
											"Exile_Weapon_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"Exile_Weapon_DMR",
											"Exile_Weapon_SVD",
											"Exile_Weapon_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"Exile_Weapon_DMR",
											"Exile_Weapon_SVD",
											"Exile_Weapon_VSSVintorez",
											//Common Snipers End
											//Common Snipers Start
											"Exile_Weapon_DMR",
											"Exile_Weapon_SVD",
											"Exile_Weapon_VSSVintorez"
											//Common Snipers End
										];
	DMS_sniper_pistols = DMS_assault_pistols;				
	DMS_sniper_optics =					[							// Optics for Sniper Class
											#ifdef GIVE_AI_APEX_GEAR
											"optic_SOS_khk_F",
											"optic_DMS_ghex_F",
											"optic_LRPS_tna_F",
											#endif
											#ifdef GIVE_AI_MARKSMAN_DLC_WEAPONS
											"optic_AMS_khk",
											#endif
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_optic_PSO_1",
											"CUP_optic_PSO_3",
											"CUP_optic_NSPU",
											"CUP_optic_ACOG",
											"CUP_optic_ElcanM145",
											"CUP_optic_ELCAN_SpecterDR",
											"CUP_optic_LeupoldMk4_MRT_tan",
											#endif
											"optic_SOS",
											"optic_DMS",
											"optic_LRPS"
										];
	DMS_sniper_optic_chance				= 75;						// Percentage chance that a Sniper Class AI will get an optic
	DMS_sniper_bipod_chance				= 50;						// Percentage chance that a Sniper Class AI will get a bipod
	DMS_sniper_suppressor_chance		= 25;						// Percentage chance that a Sniper Class AI will get a suppressor

	DMS_sniper_items =					[							// Items for Sniper Class AI (Loot stuff that goes in uniform/vest/backpack)
											"Exile_Item_PlasticBottleFreshWater",
											"Exile_Item_Matches",
											"Exile_Item_Vishpirin",
											"Exile_Item_Bandage"
										];
	DMS_sniper_equipment =				[							// Equipment for Sniper Class AI (stuff that goes in toolbelt slots)
											//"Rangefinder",
											"ItemGPS"
										];
	DMS_sniper_RandItemCount =			1;							// How many random items to add to the AI's inventory.
	DMS_sniper_RandItems = DMS_assault_RandItems + ["Exitem_money"];
	DMS_sniper_helmets = DMS_assault_helmets;
	DMS_sniper_clothes = DMS_assault_clothes + 
										[							
											#ifdef GIVE_AI_APEX_GEAR
											"U_B_T_Sniper_F",
											"U_B_T_FullGhillie_tna_F",				
											"U_O_T_Sniper_F",
											"U_O_T_FullGhillie_tna_F",
											#endif
											#ifdef GIVE_AI_CUP_GEAR 
											"CUP_U_B_GER_Ghillie",
											"CUP_U_B_GER_Fleck_Ghillie",
											"CUP_U_B_USMC_Ghillie_WDL",
											"CUP_U_I_Ghillie_Top",
											"CUP_U_O_TK_Ghillie",
											"CUP_U_O_TK_Ghillie_Top",
											"CUP_U_B_GER_Ghillie",
											"CUP_U_B_GER_Fleck_Ghillie",
											"CUP_U_B_USMC_Ghillie_WDL",
											"CUP_U_I_Ghillie_Top",
											"CUP_U_O_TK_Ghillie",
											"CUP_U_O_TK_Ghillie_Top",
											#endif
											"U_O_GhillieSuit",
											"U_B_FullGhillie_ard",
											"U_B_FullGhillie_lsh",
											"U_B_FullGhillie_sard",
											"U_B_GhillieSuit",
											"U_I_FullGhillie_ard",
											"U_I_FullGhillie_lsh",
											"U_I_FullGhillie_sard",
											"U_I_GhillieSuit",
											"U_O_FullGhillie_ard",
											"U_O_FullGhillie_lsh",
											"U_O_FullGhillie_sard"
										];
	DMS_sniper_vests = DMS_assault_vests;
	DMS_sniper_backpacks = DMS_assault_backpacks;
	DMS_ai_SupportedClasses =			[							// Allowed AI classes. If you want to create your own class, make sure you define everything as I've defined above, and add it here
											"assault",
											"MG",
											"sniper"
										];

	DMS_ai_SupportedRandomClasses = 	[							// Allowed "random" AI presets here if you want to create different random presets.
											"random",
											"random_non_assault",
											"random_non_MG",
											"random_non_sniper"
										];

	DMS_random_AI =						[							// Random AI preset that contains all default classes | DEFAULT: 60% Assault, 20% MG, 20% Sniper
											"assault",
											"assault",
											"assault",
											"assault",
											"assault",
											"assault",
											"assault",
											"MG",
											"MG",
											"sniper"										
										];

	DMS_random_non_assault_AI =			[							// Random AI preset that excludes the "assault" class
											"MG",
											"MG",
											"sniper"
										];

	DMS_random_non_MG_AI =				[							// Random AI preset that excludes the "MG" class
											"assault",
											"assault",
											"sniper"
										];

	DMS_random_non_sniper_AI =			[							// Random AI preset that excludes the "sniper" class
											"assault",
											"assault",
											"MG"
										];

	DMS_ai_use_launchers				= true;						// Enable/disable spawning an AI in a group with a launcher
	DMS_ai_launchers_per_group			= 1;						// How many units per AI group can get a launcher.
	DMS_ai_use_launchers_chance			= 5;						// Percentage chance to actually spawn the launcher (per-unit). With "DMS_ai_launchers_per_group" set to 2, and "DMS_ai_use_launchers_chance" set to 50, there will be an average of 1 launcher per group.
	DMS_AI_launcher_ammo_count			= 2;						// How many rockets an AI will get with its launcher
	DMS_ai_remove_launchers				= false;						// Remove rocket launchers on AI death

	DMS_AI_wep_launchers_AT =			[							// AT Launchers
											#ifdef GIVE_AI_APEX_WEAPONS
											"launch_RPG7_F",
											#endif
											"launch_NLAW_F",
											"launch_RPG32_F",
											"launch_B_Titan_short_F"
										];
	DMS_AI_wep_launchers_AA =			[							// AA Launchers
											//"launch_B_Titan_F"
											"launch_RPG7_F"
										];

	DMS_RHeli_Height					= 500;						// Altitude of the heli when flying to drop point.
	DMS_RHeli_MinDistFromDrop			= 500;						// Minimum distance for the reinforcement heli to spawn from drop point.
	DMS_RHeli_MaxDistFromDrop			= 5000;						// Maximum distance for the reinforcement heli to spawn from drop point.
	DMS_RHeli_MinDistFromPlayers		= 1000;						// Minimum distance for the reinforcement heli to spawn from players.

/* AI Settings */


/* Loot Settings */
	DMS_GodmodeCrates 					= true;						// Whether or not crates will have godmode after being filled with loot.
	DMS_MinimumMagCount					= 2;						// Minimum number of magazines for weapons.
	DMS_MaximumMagCount					= 4;						// Maximum number of magazines for weapons.
	DMS_CrateCase_Sniper =				[							// If you pass "Sniper" in _lootValues, then it will spawn these weapons/items/backpacks
											[
												["Rangefinder",1],
												["srifle_GM6_F",1],
												["srifle_LRR_F",1],
												["srifle_EBR_F",1],
												["hgun_Pistol_heavy_01_F",1],
												["hgun_PDW2000_F",1]
											],
											[
												["ItemGPS",1],
												["U_B_FullGhillie_ard",1],
												["U_I_FullGhillie_lsh",1],
												["U_O_FullGhillie_sard",1],
												["U_O_GhillieSuit",1],
												["V_PlateCarrierGL_blk",1],
												["V_HarnessO_brn",1],
												["Exile_Item_InstaDoc",3],
												["Exile_Item_Surstromming_Cooked",5],
												["Exile_Item_PlasticBottleFreshWater",5],
												["optic_DMS",1],
												["acc_pointer_IR",1],
												["muzzle_snds_B",1],
												["optic_LRPS",1],
												["optic_MRD",1],
												["muzzle_snds_acp",1],
												["optic_Holosight_smg",1],
												["muzzle_snds_L",1],
												["5Rnd_127x108_APDS_Mag",3],
												["7Rnd_408_Mag",3],
												["20Rnd_762x51_Mag",5],
												["11Rnd_45ACP_Mag",3],
												["30Rnd_9x21_Mag",3]
											],
											[
												["B_Carryall_cbr",1],
												["B_Kitbag_mcamo",1]
											]
										];
	DMS_BoxWeapons =					[							// List of weapons that can spawn in a crate
											#ifdef USE_MARKSMAN_DLC_WEAPONS_IN_CRATES
											"srifle_DMR_02_F",
											"srifle_DMR_03_woodland_F",
											//"srifle_DMR_04_F",			// ASP-1 Kir
											"srifle_DMR_05_blk_F",
											"srifle_DMR_06_olive_F",
											//"MMG_01_hex_F", //navid
											//"MMG_02_black_F", //spmg
											#endif

											#ifdef USE_APEX_WEAPONS_IN_CRATES
											"arifle_AK12_F",
											"arifle_ARX_ghex_F",
											"arifle_CTAR_blk_F",
											"arifle_SPAR_01_khk_F",
											"arifle_SPAR_03_khk_F",
											//"srifle_DMR_07_ghex_F",				// Oh great, a 6.5mm 20 round sniper rifle... because everybody wanted a nerfed MXM :p
											"LMG_03_F",
											#endif
											//"Exile_Melee_Axe",
											//"Exile_Melee_SledgeHammer",
											//"Exile_Melee_Shovel",					// Not really interesting for players...
											"arifle_Katiba_GL_F",
											"arifle_MX_GL_Black_F",
											"arifle_Mk20_GL_F",
											"arifle_TRG21_GL_F",
											"arifle_Katiba_F",
											"arifle_MX_Black_F",
											"arifle_TRG21_F",
											"arifle_TRG20_F",
											"arifle_Mk20_plain_F",
											"arifle_Mk20_F",
											"Exile_Weapon_AK107",
											"Exile_Weapon_AK107_GL",
											"Exile_Weapon_AK74_GL",
											"Exile_Weapon_AK47",
											"Exile_Weapon_AKS_Gold",
											"LMG_Zafir_F",
											"LMG_Mk200_F",
											"arifle_MX_SW_Black_F",
											"Exile_Weapon_RPK",
											"Exile_Weapon_PK",
											"Exile_Weapon_PKP",
											"srifle_EBR_F",
											"srifle_DMR_01_F",
											"srifle_GM6_F",
											"srifle_LRR_F",
											"arifle_MXM_Black_F",
											"Exile_Weapon_DMR",
											"Exile_Weapon_SVD",
											"Exile_Weapon_VSSVintorez",
											"Exile_Weapon_CZ550",
											"Exile_Weapon_SVDCamo"
										];
	DMS_BoxFood =						[							// List of food that can spawn in a crate.
											"Exile_Item_EMRE",						// 75% Hunger
											"Exile_Item_GloriousKnakworst",			// 60% Hunger
											"Exile_Item_Surstromming",				// 55% Hunger
											"Exile_Item_SausageGravy",				// 50% Hunger
											"Exile_Item_ChristmasTinner",			// 40% Hunger
											"Exile_Item_MacasCheese",				// 40% Hunger
											"Exile_Item_BBQSandwich",				// 40% Hunger
											"Exile_Item_CatFood",					// 40% Hunger
											"Exile_Item_Dogfood",					// 30% Hunger
											"Exile_Item_BeefParts",					// 30% Hunger
											"Exile_Item_Cheathas",					// 30% Hunger
											"Exile_Item_DsNuts",					// 30% Hunger
											"Exile_Item_Noodles",					// 25% Hunger
											"Exile_Item_CockONut",					// 20% Hunger
											"Exile_Item_SeedAstics",				// 20% Hunger
											"Exile_Item_Raisins",					// 15% Hunger
											"Exile_Item_Moobar",					// 10% Hunger
											"Exile_Item_InstantCoffee",				//  5% Hunger
											"Exitem_bakedbeans_cooked",
											"Exitem_bakedbeans",
											"Exitem_orange",
											"Exitem_pumpkin",
											"Exitem_cereal_crunchin",
											"Exitem_rice",
											"Exitem_rice_cooked",
											"Exitem_container_beef",
											"Exitem_tacticalbacon_cooked",
											"Exitem_tacticalbacon",
											"Exitem_spam_cooked",
											"Exitem_spam",
											"Exitem_tuna_cooked",
											"Exitem_tuna",
											"Exitem_spaghetti_cooked",
											"Exitem_spaghetti",
											"Exitem_meatballs_cooked",
											"Exitem_meatballs",
											"Exitem_hotdogs_cooked",
											"Exitem_hotdogs",
											"Exitem_cereal_bloodsucker",
											"Exitem_cereal_honeyhoops",
											"Exitem_cereal_squares",
											"Exitem_cereal_stars",
											"Exitem_cereal_kush",
											"Exitem_cereal_rick",
											"Exitem_meat",
											"Exitem_meat_cooked"
										];
	DMS_BoxDrinks =						[
											"Exile_Item_PlasticBottleCoffee",
											"Exile_Item_PowerDrink",
											"Exile_Item_Beer",
											"Exile_Item_PlasticBottleFreshWater",
											"Exile_Item_EnergyDrink",
											"Exile_Item_MountainDupe",
											"Exile_Item_ChocolateMilk",
											"Exitem_franta",
											"Exitem_redgull",
											"Exitem_spirit",
											"Exitem_container_soup",
											"Exitem_canteen_coffee",
											"Exitem_canteen_fresh"
										];
	DMS_BoxFoodAndDrinks = DMS_BoxFood + DMS_BoxDrinks;
	DMS_BoxMeds =						[
											"Exile_Item_InstaDoc",
											"Exile_Item_Vishpirin",
											"Exile_Item_Bandage",
											"Exile_Item_Heatpack",
											"Exile_Item_Defibrillator",
											"Exitem_bloodbag",
											"Exile_Item_InstaDoc",
											"Exitem_purificationtablets",
											"Exile_Item_Bandage",
											"Exitem_antibiotic",
											"Exitem_painkillers",
											"Exitem_vitamins",
											"Exile_Item_Vishpirin",
											"Exile_Item_Heatpack",
											"Exitem_dressing",
											"Exitem_morphine",
											"Exitem_splint",
											"Exitem_bandage_dirty",
											"Exitem_firstaid",
											"Exitem_bloodbag_empty",
											"Exitem_morphineauto",
											"Exitem_disinfectant",
											"Exitem_surgerykit",
											"Exitem_peptobismol",
											"Exitem_makeshift_bandage"												
										];
	DMS_BoxSurvivalSupplies	=			[							//List of survival supplies (food/drink/meds) that can spawn in a crate. "DMS_BoxFood", "DMS_BoxDrinks", and "DMS_BoxMeds" is automatically added to this list.
											"Exile_Item_Matches",
											"Exile_Item_CookingPot",
											"Exile_Melee_Axe",
											"Exile_Item_CanOpener"
										] + DMS_BoxFood + DMS_BoxDrinks + DMS_BoxMeds;
	DMS_Box_BaseParts_Wood =			[							// List of wooden base parts.
											"Exile_Item_WoodWallKit",
											"Exile_Item_WoodWallHalfKit",
											"Exile_Item_WoodWindowKit",
											"Exile_Item_WoodDoorKit",
											"Exile_Item_WoodDoorwayKit",
											"Exile_Item_WoodGateKit",
											"Exile_Item_WoodFloorKit",
											"Exile_Item_WoodFloorPortKit",
											"Exile_Item_WoodStairsKit"
										];
	DMS_Box_BaseParts_Concrete =		[							// List of concrete base parts
											"Exile_Item_ConcreteWallKit",
											"Exile_Item_ConcreteWindowKit",
											"Exile_Item_ConcreteDoorKit",
											"Exile_Item_ConcreteDoorwayKit",
											"Exile_Item_ConcreteGateKit",
											"Exile_Item_ConcreteFloorKit",
											"Exile_Item_ConcreteFloorPortKit",
											"Exile_Item_ConcreteStairsKit"
										];
	DMS_BoxBaseParts =					[							// List of all base parts to spawn. Weighted towards wood base parts.
											"Exile_Item_FortificationUpgrade",
											"Exile_Item_FortificationUpgrade",
											"Exile_Item_SandBagsKit_Long",
											"Exile_Item_SandBagsKit_Long",
											"Exile_Item_SandBagsKit_Corner",
											"Exile_Item_SandBagsKit_Corner",
											"Exile_Item_HBarrier5Kit"
										] + DMS_Box_BaseParts_Wood + DMS_Box_BaseParts_Wood + DMS_Box_BaseParts_Wood;// + DMS_Box_BaseParts_Concrete;
	DMS_BoxCraftingMaterials =			[
											"Exile_Item_Cement",
											"Exile_Item_Sand",
											"Exile_Item_Sand",
											"Exile_Item_WaterCanisterDirtyWater",
											"Exile_Item_MetalBoard",
											"Exile_Item_MetalPole",
											"Exile_Item_MetalPole",
											"Exile_Item_JunkMetal",
											"Exile_Item_JunkMetal",
											"Exile_Item_JunkMetal",
											"Exile_Item_WoodPlank",
											"Exile_Item_WoodPlank",
											"Exile_Item_WoodPlank",
											"Exile_Item_WoodPlank"
										];
	DMS_BoxTools =						[
											"Exile_Item_Grinder",
											"Exile_Item_Handsaw",
											"Exile_Item_CanOpener",
											"Exile_Item_Pliers",
											"Exile_Item_Screwdriver",
											"Exile_Item_Foolbox"
										];
	DMS_BoxBuildingSupplies	=			[							// List of building supplies that can spawn in a crate ("DMS_BoxBaseParts", "DMS_BoxCraftingMaterials", and "DMS_BoxTools" are automatically added to this list. "DMS_BoxCraftingMaterials" is added twice for weight.)
											"Exile_Item_DuctTape",
											"Exile_Item_PortableGeneratorKit"
										] + DMS_BoxBaseParts + DMS_BoxCraftingMaterials + DMS_BoxCraftingMaterials + DMS_BoxTools;
	DMS_BoxOptics =						[							// List of optics that can spawn in a crate
											"optic_Arco",
											"optic_Hamr",
											"optic_Aco",
											"optic_Holosight",
											"optic_MRCO",
											"optic_SOS",
											"optic_DMS",
											"optic_LRPS",
											#ifdef GIVE_AI_CUP_GEAR //CUP
											"CUP_optic_PSO_1",
											"CUP_optic_PSO_3",
											"CUP_optic_Kobra",
											//"CUP_optic_GOSHAWK",
											"CUP_optic_NSPU",
											"CUP_optic_PechenegScope",
											"CUP_optic_MAAWS_Scope",
											"CUP_optic_SMAW_Scope",
											// "CUP_optic_AN_PAS_13c2",
											"CUP_optic_LeupoldMk4",
											"CUP_optic_HoloBlack",
											"CUP_optic_HoloWdl",
											"CUP_optic_HoloDesert",
											"CUP_optic_Eotech533",
											"CUP_optic_CompM4",
											"CUP_optic_SUSAT",
											"CUP_optic_ACOG",
											"CUP_optic_CWS",
											"CUP_optic_Leupold_VX3",
											"CUP_optic_AN_PVS_10",
											"CUP_optic_CompM2_Black",
											"CUP_optic_CompM2_Woodland",
											"CUP_optic_CompM2_Woodland2",
											"CUP_optic_CompM2_Desert",
											"CUP_optic_RCO",
											"CUP_optic_RCO_desert",
											"CUP_optic_LeupoldM3LR",
											"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
											"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
											"CUP_optic_ElcanM145",
											//"CUP_optic_AN_PAS_13c1",
											"CUP_optic_LeupoldMk4_CQ_T",
											"CUP_optic_ELCAN_SpecterDR",
											"CUP_optic_LeupoldMk4_MRT_tan",
											"CUP_optic_SB_11_4x20_PM",
											"CUP_optic_ZDDot",
											"CUP_optic_MRad",
											"CUP_optic_TrijiconRx01_desert",
											"CUP_optic_TrijiconRx01_black",
											"CUP_optic_AN_PVS_4",
											#endif
											"optic_Nightstalker"			// Nightstalker scope lost thermal in Exile v0.9.4
										];
	DMS_BoxBackpacks =					[							//List of backpacks that can spawn in a crate
											//START Duplicates to increase rarity of Bergen/Large Gunbag
											"B_Carryall_oli",
											"B_Kitbag_mcamo",
											"B_Carryall_cbr",
											"B_FieldPack_oucamo",
											#ifdef GIVE_AI_CUP_GEAR
											"CUP_B_ACRPara_m95",
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											// "CUP_B_MOLLE_WDL",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",											
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											#endif
											"B_FieldPack_cbr",
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											"Exitem_Czech_Backpack",
											"Exitem_Coyote_Backpack",
											//END Duplicates to increase rarity of Bergen/Large Gunbag
											//START Duplicates to increase rarity of Bergen/Large Gunbag
											"B_Carryall_oli",
											"B_Kitbag_mcamo",
											"B_Carryall_cbr",
											"B_FieldPack_oucamo",
											#ifdef GIVE_AI_CUP_GEAR
											"CUP_B_ACRPara_m95",
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											// "CUP_B_MOLLE_WDL",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",											
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											#endif
											"B_FieldPack_cbr",
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											"Exitem_Czech_Backpack",
											"Exitem_Coyote_Backpack",
											//END Duplicates to increase rarity of Bergen/Large Gunbag
											//START Duplicates to increase rarity of Bergen/Large Gunbag
											"B_Carryall_oli",
											"B_Kitbag_mcamo",
											"B_Carryall_cbr",
											"B_FieldPack_oucamo",
											#ifdef GIVE_AI_CUP_GEAR
											"CUP_B_ACRPara_m95",
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											// "CUP_B_MOLLE_WDL",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",											
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											#endif
											"B_FieldPack_cbr",
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											"Exitem_Czech_Backpack",
											"Exitem_Coyote_Backpack",
											//END Duplicates to increase rarity of Bergen/Large Gunbag
											//START Duplicates to increase rarity of Bergen/Large Gunbag
											"B_Carryall_oli",
											"B_Kitbag_mcamo",
											"B_Carryall_cbr",
											"B_FieldPack_oucamo",
											#ifdef GIVE_AI_CUP_GEAR
											"CUP_B_ACRPara_m95",
											"CUP_B_Bergen_BAF",
											"CUP_B_CivPack_WDL",
											"CUP_B_GER_Pack_Flecktarn",
											"CUP_B_GER_Pack_Tropentarn",
											"CUP_B_HikingPack_Civ",
											// "CUP_B_MOLLE_WDL",
											"CUP_B_RUS_Backpack",
											"CUP_B_USMC_AssaultPack",
											"CUP_B_USMC_MOLLE",
											"CUP_B_USMC_MOLLE_WDL",											
											"CUP_B_USPack_Black",
											"CUP_B_USPack_Coyote",
											#endif
											"B_FieldPack_cbr",
											"B_ViperLightHarness_blk_F",
											"B_ViperLightHarness_ghex_F",
											"B_ViperLightHarness_hex_F",
											"B_ViperLightHarness_khk_F",
											"B_ViperLightHarness_oli_F",
											"Exitem_Czech_Backpack",
											"Exitem_Coyote_Backpack",
											//END Duplicates to increase rarity of Bergen/Large Gunbag
											"Exitem_Large_Gunbag",
											"B_Bergen_dgtl_F",
											"B_Bergen_hex_F",
											"B_Bergen_mcamo_F",
											"B_Bergen_tna_F"
										];
	DMS_BoxItems						= DMS_BoxSurvivalSupplies+DMS_BoxBuildingSupplies+DMS_BoxOptics;	// Random "items" can spawn optics, survival supplies, or building supplies

	DMS_Box_BreachingCharges =			[							// List of breaching charges (weighted). Not used (yet).
											"BreachingChargeBigMomma",
											"BreachingChargeMetal",
											"BreachingChargeMetal",
											"BreachingChargeWood",
											"BreachingChargeWood",
											"BreachingChargeWood"
										];

	DMS_RareLoot						= true;						// Potential chance to spawn rare loot in any crate.
	DMS_RareLootAmount					= 2;						// How many rare loot items to add.
	DMS_RareLootList =					[							// List of rare loot to spawn
											//"Exile_Item_SafeKit",
											"Exile_Item_CodeLock",
											"Exile_Item_CodeLock",
											"Exile_Item_CodeLock",
											"Exile_Item_CodeLock",
											"Exitem_documents",
											"Exitem_documents",
											"Exitem_documents",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_money",
											"Exitem_briefcase"

										];
	DMS_RareLootChance					= 10;						// Percentage Chance to spawn rare loot in any crate | Default: 10%

	// Vehicles
	DMS_ArmedVehicles =					[							// List of armed vehicles that can spawn
											#ifdef USE_APEX_VEHICLES
											"B_T_LSV_01_armed_F",
											"O_T_LSV_02_armed_F",
											#endif
											"Exile_Car_Offroad_Armed_Guerilla01"
										];

	DMS_MilitaryVehicles =				[							// List of (unarmed) military vehicles that can spawn
											#ifdef USE_APEX_VEHICLES
											"B_T_LSV_01_unarmed_F",
											"O_T_LSV_02_unarmed_F",
											#endif
											"Exile_Car_Strider",
											"Exile_Car_Hunter",
											"Exile_Car_Ifrit"
										];

	DMS_TransportTrucks =				[							// List of transport trucks that can spawn
											"Exile_Car_Van_Guerilla01",
											"Exile_Car_Zamak",
											"Exile_Car_Tempest",
											"Exile_Car_HEMMT",
											"Exile_Car_Ural_Open_Military",
											"Exile_Car_Ural_Covered_Military"
										];

	DMS_RefuelTrucks =					[							// List of refuel trucks that can spawn
											"Exile_Car_Van_Fuel_Black",
											"Exile_Car_Van_Fuel_White",
											"Exile_Car_Van_Fuel_Red",
											"Exile_Car_Van_Fuel_Guerilla01",
											"Exile_Car_Van_Fuel_Guerilla02",
											"Exile_Car_Van_Fuel_Guerilla03"
										];

	DMS_CivilianVehicles =				[							// List of civilian vehicles that can spawn
											#ifdef USE_APEX_VEHICLES
											"C_Offroad_02_unarmed_F",
											"I_C_Van_01_transport_F",
											#endif
											"Exile_Car_SUV_Red",
											"Exile_Car_Hatchback_Rusty1",
											"Exile_Car_Hatchback_Rusty2",
											"Exile_Car_Hatchback_Sport_Red",
											"Exile_Car_SUV_Red",
											"Exile_Car_Offroad_Rusty2",
											"Exile_Bike_QuadBike_Fia"
										];

	DMS_TransportHelis =				[							// List of transport helis that can spawn
											#ifdef USE_APEX_VEHICLES
											"B_T_VTOL_01_infantry_F",
											"O_T_VTOL_02_infantry_F",
											#endif
											"Exile_Chopper_Hummingbird_Green",
											"Exile_Chopper_Orca_BlackCustom",
											"Exile_Chopper_Mohawk_FIA",
											"Exile_Chopper_Huron_Black",
											"Exile_Chopper_Hellcat_Green",
											"Exile_Chopper_Taru_Transport_Black"
										];

	DMS_ReinforcementHelis =			[							// List of helis that can spawn for AI paratrooper reinforcements.
											//"B_Heli_Transport_01_camo_F"		// Ghosthawk: You'll have to whitelist this in infistar if you want to use it.
										] + DMS_TransportHelis;

	DMS_CarThievesVehicles =			[							// List of vehicles that can spawn in the "car thieves" mission. By default, it's just "DMS_MilitaryVehicles" and "DMS_TransportTrucks".
											//"Exile_Car_Offroad_Armed_Guerilla01"
										] + DMS_MilitaryVehicles + DMS_TransportTrucks;
/* Loot Settings */


DMS_ConfigLoaded = true;
