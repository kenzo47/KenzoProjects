
	class CookMeat: Exile_AbstractCraftingRecipe
	{
		name = "Cook Slab of Meat";
		pictureItem = "Exitem_meat_cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_meat_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_meat"}
		};
	};
	class CookBakedBeans: Exile_AbstractCraftingRecipe
	{
		name = "Cook Baked Beans";
		pictureItem = "Exitem_bakedbeans";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_bakedbeans_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_bakedbeans"}
		};
	};

	class PurifyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Salt Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Dirty Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_dirty"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Salt Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_salt"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class CookCoffeeCanteen: Exile_AbstractCraftingRecipe
	{
		name = "Brew Coffee";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_coffee"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_canteen_fresh"},
			{1, "Exile_Item_InstantCoffee"}
		};
	};
	class CookCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dirty Water";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_dirty"}
		};
	};
	class CookCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Salt Water";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_salt"}
		};
	};
	class EmptyCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Dirty Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen"}
		};
		components[] =
		{
			{1, "Exitem_canteen_dirty"}
		};
	};
	class EmptyCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Salt Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen"}
		};
		components[] =
		{
			{1, "Exitem_canteen_salt"}
		};
	};
	class FillEmptyCanteenWithFreshWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fresh Water";
		pictureItem = "Exitem_canteen";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
	class FillEmptyCanteenWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exitem_canteen";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
	class FillEmptyCanteenWithSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Salt Water";
		pictureItem = "Exitem_canteen";
		requiresOcean = 1;
		returnedItems[] = 
		{
			{1, "Exitem_canteen_salt"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
	
	class CutPillow: Exile_AbstractCraftingRecipe
	{
		name = "Cut Pillow";
		pictureItem = "Exitem_pillow";
		returnedItems[] =
		{
			{1, "Exitem_cloth"}
		};
		tools[] =
		{
			"Exile_Item_Knife"
		};
		components[] = 
		{
			{1, "Exitem_pillow"}
		};
	};
	class CutPillowFlannel: Exile_AbstractCraftingRecipe
	{
		name = "Cut Pillow";
		pictureItem = "Exitem_pillow_flannel";
		returnedItems[] =
		{
			{1, "Exitem_cloth"}
		};
		tools[] =
		{
			"Exile_Item_Knife"
		};
		components[] = 
		{
			{1, "Exitem_pillow_flannel"}
		};
	};
	class SmeltCansEmpty: Exile_AbstractCraftingRecipe
	{
		name = "Smelt Empty Cans";
		pictureItem = "Exile_Item_Can_Empty";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_JunkMetal"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot",
			"Exitem_torch"
		};
		components[] = 
		{
			{5, "Exile_Item_Can_Empty"}
		};
	};
	class SmeltCansCrushed: Exile_AbstractCraftingRecipe
	{
		name = "Smelt Empty Cans";
		pictureItem = "Exitem_can_crushed";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_JunkMetal"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot",
			"Exitem_torch"
		};
		components[] = 
		{
			{5, "Exitem_can_crushed"}
		};
	};
	
	class SmeltBucket: Exile_AbstractCraftingRecipe
	{
		name = "Smelt Bucket";
		pictureItem = "Exitem_bucket";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_JunkMetal"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot",
			"Exitem_torch"
		};
		components[] = 
		{
			{1, "Exitem_bucket"}
		};
	};
	
	class CraftBandageToilet: Exile_AbstractCraftingRecipe
	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exitem_bandage_dirty"}
		};
		components[] = 
		{
			{2, "Exile_Item_ToiletPaper"}
		};
	};
	
	class ScrapExtinguisher: Exile_AbstractCraftingRecipe
	{
		name = "Scrap Fire Extinguisher";
		pictureItem = "Exile_Item_FireExtinguisher";
		tools[] =
		{
			"Exile_Item_Grinder", 
			"Exitem_torch"
		};
		returnedItems[] =
		{
			{1, "Exile_Item_JunkMetal"}
		};
		components[] = 
		{
			{1, "Exile_Item_FireExtinguisher"}
		};
	};
	class CraftCleanBandage: Exile_AbstractCraftingRecipe
	{
		name = "Sanitize Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exile_Item_Bandage"}
		};
		components[] = 
		{
			{1, "Exitem_bandage_dirty"},
			{1, "Exitem_disinfectant"}
		};
	};
	class CraftBandageCloth: Exile_AbstractCraftingRecipe
	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exitem_bandage_dirty"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};

	class CraftNails: Exile_AbstractCraftingRecipe
	{
		name = "Craft Box of Nails";
		pictureItem = "Exitem_nails";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_metal"},
			{1, "Exitem_nails"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_metal"},
			{2, "Exile_Item_JunkMetal"}
		};
	};
	class CraftLeaves: Exile_AbstractCraftingRecipe
	{
		name = "Pick Leaves";
		pictureItem = "Exile_Item_Leaves";
		tools[] = 
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_Leaves"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodLog"}
		};
	};
	///////////////////////////////////////////////////	
	//Base Building Crafting
	///////////////////////////////////////////////////	
	class CraftBoard: Exile_AbstractCraftingRecipe
	{
		name = "Craft Window Board";
		pictureItem = "Exitem_board";
		returnedItems[] = 
		{
			{1, "Exitem_board"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"}
		};
	};

	class CraftSmallShelf: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Small Shelf";
		pictureItem = "Exitem_shelf_small";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_shelf_small"},
			{1, "Exitem_shelf_small"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_shelf_small"},
			{10, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftLargeShelf: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Large Shelf";
		pictureItem = "Exitem_shelf_large";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_shelf_large"},
			{1, "Exitem_shelf_large"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_shelf_large"},
			{14, "Exile_Item_WoodPlank"},
			{5, "Exile_Item_MetalPole"},
			{1, "Exitem_nails"}
		};
	};
	class CraftStoragePallet: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Storage Pallet";
		pictureItem = "Exitem_pallet_large";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_pallet_large"},
			{1, "Exitem_pallet_large"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_pallet_large"},
			{4, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_MetalPole"},
			{6, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftAdvancedWorkbench: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Advanced Workbench";
		pictureItem = "Exitem_advancedworkbench";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_measuringtape",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_workbench"},
			{1, "Exitem_advancedworkbench"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_workbench"},
			{4, "Exile_Item_MetalBoard"},
			{4, "Exile_Item_MetalPole"},
			{1, "Exitem_nails"}
		};
	};
	class CraftCodeLock: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Code Lock";
		pictureItem = "Exile_Item_Codelock";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_codelock"},
			{1, "Exile_Item_Codelock"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_codelock"},
			{2, "Exile_Item_MetalBoard"},
			{1, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_DuctTape"},
			{2, "Exile_Item_LightBulb"},
			{1, "Exitem_nails"}
		};
	};


	class CraftEngine: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Engine";
		pictureItem = "exitem_engine";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_engine"},
			{1, "Exitem_engine"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_engine"},
			{4, "Exile_Item_MetalBoard"},
			{6, "Exile_Item_MetalPole"},
			{2, "Exile_Item_DuctTape"},
			{1, "Exitem_carbattery"},
			{1, "Exile_Item_OilCanister"},
			{1, "Exitem_nails"}
		};
	};
	class CraftMainRotorAssembly: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Main Rotor Assembly";
		pictureItem = "Exitem_rotor";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_rotor"},
			{1, "Exitem_rotor"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_rotor"},
			{2, "Exile_Item_MetalBoard"},
			{8, "Exile_Item_MetalPole"},
			{4, "Exile_Item_DuctTape"},
			{1, "Exile_Item_OilCanister"},
			{1, "Exitem_nails"}
		};
	};
	class Craft9mmSuppressor: Exile_AbstractCraftingRecipe  
	{
		name = "9mm Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_9mmsuppressor"},
			{1, "muzzle_snds_L"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_9mmsuppressor"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class Craft556Suppressor: Exile_AbstractCraftingRecipe  
	{
		name = "Craft 5.56 Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_556suppressor"},
			{1, "muzzle_snds_M"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_556suppressor"},
			{2, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class Craft762Suppressor: Exile_AbstractCraftingRecipe  
	{
		name = "Craft 7.62 Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_762suppressor"},
			{1, "muzzle_snds_B"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_762suppressor"},
			{3, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class CraftBeer: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Beer";
		pictureItem = "Exile_Item_Beer";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_beer"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_Beer"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_beer"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_InstantCoffee"},
			{2, "Exile_Item_Raisins"},
			{1, "Exile_Item_Moobar"}
		};
	};
	class CraftLabtop: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Laptop";
		pictureItem = "Exile_Item_Laptop";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_laptop"},
			{1, "Exile_Item_Laptop"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_laptop"},
			{2, "Exile_Item_MetalBoard"},
			{4, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_ExtensionCord"},
			{1, "Exitem_camera"},
			{1, "Exitem_nails"}
		};
	};
	class CraftCanOpenerKnife: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_ZipTie"},
			{1, "Exile_Item_Knife"}
		};
	};
	class CraftCanOpenerPliers: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_ZipTie"},
			{1, "Exile_Item_Pliers"}
		};
	};
	class CraftMatches: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Matches";
		pictureItem = "Exile_Item_Matches";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_matches"},
			{1, "Exile_Item_Matches"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_matches"},
			{1, "Exitem_pencil"},
			{1, "Exile_Item_WoodLog"}
		};
	};
	
	
	
	//more miscellaneous
	class CraftGhillieSuitArid: Exile_AbstractCraftingRecipe
	{
		name = "Craft Ghillie Suit (Arid)";
		pictureItem = "Exitem_ghilliesuit_arid";
		returnedItems[] =
		{
			{1, "CM_H_Ghillie_Suit_Arid"}
		};
		components[] = 
		{
			{3, "Exitem_glue"},
			{6, "Exile_Item_BurlapSack"},
			{2, "Exile_Item_Rope"}
		};
	};
	class CraftGhillieSuitLush: Exile_AbstractCraftingRecipe
	{
		name = "Craft Ghillie Suit (Lush)";
		pictureItem = "Exitem_ghilliesuit_lush";
		returnedItems[] =
		{
			{1, "CM_H_Ghillie_Suit_Lush"}
		};
		components[] = 
		{
			{3, "Exitem_glue"},
			{6, "Exile_Item_BurlapSack"},
			{2, "Exile_Item_Rope"}
		};
	};
	class CraftArmband: Exile_AbstractCraftingRecipe
	{
		name = "Craft Plain Armband";
		pictureItem = "Exitem_armband_white";
		returnedItems[] =
		{
			{1, "Armband_White"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class CraftArmbandBlue: Exile_AbstractCraftingRecipe
	{
		name = "Craft Blue Armband";
		pictureItem = "Exitem_armband_blue";
		tools[] = 
		{
			"Exile_Item_SprayCan_Blue"
		};
		returnedItems[] =
		{
			{1, "Armband_Blue"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class CraftArmbandGreen: Exile_AbstractCraftingRecipe
	{
		name = "Craft Green Armband";
		pictureItem = "Exitem_armband_green";
		tools[] = 
		{
			"Exile_Item_SprayCan_Green"
		};
		returnedItems[] =
		{
			{1, "Armband_Green"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class CraftArmbandRed: Exile_AbstractCraftingRecipe
	{
		name = "Craft Red Armband";
		pictureItem = "Exitem_armband_red";
		tools[] = 
		{
			"Exile_Item_SprayCan_Red"
		};
		returnedItems[] =
		{
			{1, "Armband_Red"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class CraftArmbandYellow: Exile_AbstractCraftingRecipe
	{
		name = "Craft Yellow Armband";
		pictureItem = "Exitem_armband_yellow";
		tools[] = 
		{
			"Exile_Item_SprayCan_Yellow"
		};
		returnedItems[] =
		{
			{1, "Armband_Yellow"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class CraftArmbandPurple: Exile_AbstractCraftingRecipe
	{
		name = "Craft Purple Armband";
		pictureItem = "Exitem_armband_purple";
		tools[] = 
		{
			"Exile_Item_SprayCan_Purple"
		};
		returnedItems[] =
		{
			{1, "Armband_Purple"}
		};
		components[] = 
		{
			{2, "Exitem_cloth"}
		};
	};
	class SmeltCanCrushed2: Exile_AbstractCraftingRecipe
	{
		name = "Smelt Bent Cans";
		pictureItem = "Exile_Item_JunkMetal";
		requiresFire = 1;
		tools[] = 
		{
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_JunkMetal"}
		};
		components[] = 
		{
			{4, "Exitem_can_crushed2"}
		};
	};
	class CraftPlywood: Exile_AbstractCraftingRecipe
	{
		name = "Craft Plywood Sheet";
		pictureItem = "Exitem_plywood";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_plywood"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"},
			{1, "Exitem_glue"}
		};
	};
	class CraftWaterCatchment: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Water Catchment";
		pictureItem = "Exitem_watercatchment";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_watercatchment"}
		};
		components[] = 
		{
			{1, "Exitem_tarp"},
			{4, "Exile_Item_WoodPlank"},
			{1, "Exitem_drum"},
			{1, "Exitem_nails"}
		};
	};

	class CookRice: Exile_AbstractCraftingRecipe
	{
		name = "Cook Rice";
		pictureItem = "Exitem_rice";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_rice_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_rice"}
		};
	};

	class CookSpam: Exile_AbstractCraftingRecipe
	{
		name = "Cook Spam";
		pictureItem = "Exitem_spam";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_spam_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_spam"}
		};
	};
	class CookTuna: Exile_AbstractCraftingRecipe
	{
		name = "Cook Tuna";
		pictureItem = "Exitem_tuna";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_tuna_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_tuna"}
		};
	};
	class CookSpaghetti: Exile_AbstractCraftingRecipe
	{
		name = "Cook Spaghetti";
		pictureItem = "Exitem_spaghetti";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_spaghetti_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_spaghetti"}
		};
	};
	class CookMeatballs: Exile_AbstractCraftingRecipe
	{
		name = "Cook Meatballs";
		pictureItem = "Exitem_meatballs";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_meatballs_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_meatballs"}
		};
	};
	class CookHotdogs: Exile_AbstractCraftingRecipe
	{
		name = "Cook Hotdogs";
		pictureItem = "Exitem_hotdogs";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_hotdogs_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_hotdogs"}
		};
	};
	
	