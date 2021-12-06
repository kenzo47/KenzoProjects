/*
	________   _______ _      ______    __  __  ____  _____  
	|  ____\ \ / /_   _| |    |  ____|  |  \/  |/ __ \|  __ \ 
	| |__   \ V /  | | | |    | |__     | \  / | |  | | |  | |
	|  __|   > <   | | | |    |  __|    | |\/| | |  | | |  | |
	| |____ / . \ _| |_| |____| |____   | |  | | |__| | |__| |
	|______/_/ \_\_____|______|______|  |_|  |_|\____/|_____/ 
                                                          
  	^ Leet ASCII art. For documentation, refer to:

  	http://www.exilemod.com/wiki/developer-toolbox/loot-table-compiler/
*/

/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////
	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.
	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////
	You can link one group of items to loot tables.
	One item should only be in one group.
	Syntax:
	= <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>
	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////
	<Spawn Chance>,<Item>
	10, Banana
	20, Tomato
	30, Cherry
	Sum of chances:
	10 + 20 + 30 = 60 = 100%
	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%
	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Banana.
	///////////////////////////////////////////////////////////////////////////////
	// Loot Tables
	///////////////////////////////////////////////////////////////////////////////
	Defines which item group spawns in which building type. The loot table itself
	is linked with a building in exile_server_config.pbo/config/CfgBuildings. Spawn
	chances work like for items.
	Syntax:
	> <Loot Table Name>
	<Spawn Chance Within Loot Table>,<Group Name>
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
1, Restraints
2, Miscellaneous
2, PistolAttachments
3, ShotgunAmmo
3, SMGAmmo
3, SMGAttachments
2, Shotguns
2, SMG
5, CivilianVests
5, PistolAmmo
8, Pistols
10, CUP_Pistols
12, CUP_PistolAmmo
10, Chemlights
10, CivilianItems
10, Drinks
10, RoadFlares
11, CivilianBackpacks
25, CivilianClothing
25, CivilianHeadgear
28, Food
20, Trash

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
1, Valuables
1, Restraints
3, Miscellaneous
5, PistolAttachments
2, RifleAmmo
3, RifleAttachments
2, Rifles
3, ShotgunAmmo
3, SMGAmmo
5, SMGAttachments
5, Shotguns
6, CUP_Shotguns
6, CUP_ShotgunAmmo
6, CUP_SMG
6, CUP_SMGAmmo
10, CUP_Pistols
12, CUP_PistolAmmo
10, CUP_PistolAttachments
2, CUP_MilitaryBackpacks
5, SMG
8, CivilianVests
8, PistolAmmo
10, Pistols
8, Chemlights
10, CivilianItems
16, Drinks
10, RoadFlares
13, CivilianBackpacks
15, CivilianClothing
20, CivilianHeadgear
30, Food
10, Trash

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
1, Valuables
3, Miscellaneous
4, CivilianClothing
4, CivilianVests
2, PistolAttachments
1, ShotgunAmmo
1, SMGAmmo
2, SMGAttachments
2, PistolAmmo
3, CUP_Shotguns
3, CUP_ShotgunAmmo
3, CUP_SMG
3, CUP_SMGAmmo
8, CUP_Pistols
5, CUP_PistolAmmo
5, CUP_PistolAttachments
3, CUP_MilitaryBackpacks
3, CivilianHeadgear
3, IndustrialItems
3, MedicalItems
3, Restraints
4, Shotguns
4, SmokeGrenades
5, Chemlights
8, CivilianBackpacks
5, RoadFlares
5, SMG
7, CivilianItems
10, Pistols
25, Drinks
25, Food
10, Trash

///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
8, Miscellaneous
1, Restraints
1, MedicalItems
1, Drinks
1, Food
1, Pistols
1, PistolAmmo
1, CUP_Pistols
1, CUP_PistolAmmo
3, RoadFlares
5, Vehicle
6, Trash
15, IndustrialItems

///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
4, Miscellaneous
2, Electronics
1, Drinks
1, Shotguns
1, ShotgunAmmo
1, Food
3, Trash
5, IndustrialItems

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
4, Miscellaneous
1, Restraints
1, Pistols
1, PistolAmmo
3, RoadFlares
5, IndustrialItems
6, Trash
8, Vehicle
2, CUP_MilitaryBackpacks
1, CUP_MilitaryHeadgear

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
1, Valuables
3, CUP_MilitaryVests
3, CUP_MilitaryBackpacks
2, CUP_MilitaryClothing
3, CUP_MilitaryHeadgear
2, CUP_PistolAttachments
2, CUP_Shotguns
2, CUP_SMG
20, CUP_Rifles
5, CUP_RifleAmmo
6, CUP_Attachments
7, CUP_LMG
5, CUP_LMGAmmo
4, CUP_Snipers
2, CUP_SniperAmmo
1, CUP_GrenadeLaunchers
//1, DLCGhillies
//1, Ghillies
1, Rebreathers
4, Bipods
2, DLCAmmo
4, DLCOptics
4, DLCSupressor
2, LMGAmmo
2, MedicalItems
2, Restraints
2, SniperAmmo
4, SniperAttachments
1, DLCRifles
3, DLCVests
3, GuerillaHeadgear
3, GuerillaVests
3, HandGrenades
3, HEGrenades
3, MilitaryBackpacks
3, MilitaryHeadgear
3, MilitaryVests
3, RifleAmmo
3, RifleAttachments
3, SmokeGrenades
5, Snipers
3, UGLFlares
3, UGLSmokes
4, CivilianItems
4, GuerillaBackpacks
4, GuerillaItems
5, LMG
5, Explosives
5, GuerillaClothing
5, MilitaryClothing
12, Rifles
1, Trash

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc. (Does not spawn on Altis!)
///////////////////////////////////////////////////////////////////////////////
> Medical
2, Trash
8, MedicalItems
3, Drinks
2, Food

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
1, Valuables
1, Miscellaneous
2, CUP_MilitaryVests
5, CUP_MilitaryClothing
4, CUP_MilitaryBackpacks
2, CUP_MilitaryHeadgear
5, CUP_Attachments
1, CUP_LMG
1, CUP_LMGAmmo
1, DLCAmmo
1, DLCOptics
1, DLCSupressor
1, SniperAmmo
1, SniperAttachments
2, CivilianItems
2, Explosives
2, HandGrenades
2, MedicalItems
2, Restraints
//3, DLCGhillies
//3, Ghillies
4, MilitaryBackpacks
4, MilitaryHeadgear
1, DLCRifles
//3, Snipers

///////////////////////////////////////////////////////////////////////////////
// Ghost Hotel Buildings
///////////////////////////////////////////////////////////////////////////////
> Radiation
3, Valuables
3, CUP_MilitaryVests
3, CUP_MilitaryBackpacks
1, CUP_MilitaryClothing
2, CUP_MilitaryHeadgear
10, CUP_Rifles
5, CUP_RifleAmmo
10, CUP_Attachments
10, CUP_LMG
5, CUP_LMGAmmo
5, CUP_Snipers
2, CUP_SniperAmmo
2, CUP_GrenadeLaunchers
1, DLCAmmo
1, DLCOptics
1, DLCSupressor
1, SniperAmmo
1, SniperAttachments
2, EpicWeapons
2, HandGrenades
2, MedicalItems
2, Restraints
3, DLCGhillies
3, Ghillies
5, Explosives
5, MilitaryBackpacks
5, MilitaryHeadgear
1, DLCRifles
5, Snipers