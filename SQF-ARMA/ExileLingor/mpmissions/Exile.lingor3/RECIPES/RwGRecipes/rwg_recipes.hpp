//====================
//====================
//RwG CRAFTING RECIPES
//====================
//====================

class Elevator_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Elevator Kit";
		pictureItem = "RwG_Elevator_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Elevator_Kit"}
		};
		components[] = 
		{
			{4, "RwG_Item_Electric_Engine"},
			{4, "Exile_Item_Rope"},
			{4, "Exile_Item_MetalBoard"},
			{6, "Exile_Item_JunkMetal"}
		}; 
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder"
		};
		requiredInteractionModelGroup = "WorkBench_Metal";
	};
	class WorkBench_Metal_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Workbench (Metal) Kit";
		pictureItem = "RwG_Workbench_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Workbench_Kit"}
		};
		components[] = 
		{
			{1, "RwG_Item_Bench_Vise"},
			{2, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"}
		}; 
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
	};
	class EIE_WorkBench_to_WorkBench_Metal_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Workbench (Metal) Kit";
		pictureItem = "RwG_Workbench_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Workbench_Kit"}
		};
		components[] = 
		{
			{1, "Exitem_advancedworkbench"}
		}; 
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
	};
	class Anvil_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Anvil Kit";
		pictureItem = "RwG_Anvil_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Anvil_Kit"}
		};
		components[] = 
		{
			{3, "Exile_Item_JunkMetal"},
			{1, "Exile_Item_WoodLog"}

		}; 
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_CookingPot"
		};
		requiredInteractionModelGroup = "Furnace";
		requiresFire = 1; // inflamed object nearby
	};
	class Box_Of_Nails_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Box Of Nails";
		pictureItem = "RwG_Item_Box_Of_Nails"; 
		returnedItems[] = 
		{
			{1, "RwG_Item_Box_Of_Nails"}
		};
		components[] = 
		{
			{1, "Exile_Item_JunkMetal"}
		}; 
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "Anvil";
	};
	class EIE_Nails_To_Box_Of_Nails_Recipe: Exile_AbstractCraftingRecipe // Kenzo
	{
		name = "Box Of Nails";
		pictureItem = "RwG_Item_Box_Of_Nails"; 
		returnedItems[] = 
		{
			{1, "RwG_Item_Box_Of_Nails"}
		};
		components[] = 
		{
			{1, "Exitem_nails"}
		}; 
	};
	class Woodplanks_Upgrade_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Wood Planks Upgrade-Kit";
		pictureItem = "RwG_Item_WoodPlanks_Upgrade"; 
		components[] = 
		{
			{1, "RwG_Item_Box_Of_Nails"},
			{4, "Exile_Item_WoodPlank"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Item_WoodPlanks_Upgrade"}
		}; 
	};
	class Overhead_Light_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Overhead Light Kit";
		pictureItem = "RwG_Overhead_Light_Kit"; 
		components[] = 
		{
			{1, "Exile_Item_LightBulb"},
			{1, "Exile_Item_MetalBoard"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Overhead_Light_Kit"}
		}; 
		requiredInteractionModelGroup = "WorkBench_Metal";
	};


	class Wooden_Beams_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Wooden Beams";
		pictureItem = "RwG_Item_Wooden_Beams"; 
		tools[] = {"Exile_Item_Handsaw"};
		components[] = 
		{
			{3, "Exile_Item_WoodLog"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Item_Wooden_Beams"}
		}; 
	};
	// WoodFrame Construction
	class Wood_Wall_Frame_Kit_Recipe: Exile_AbstractCraftingRecipe
	{
		name = "Wood-Wall (Frame) Kit";
		pictureItem = "RwG_Wood_Wall_Frame_Kit"; 
		components[] = 
		{
			{4, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Wall_Frame_Kit"}
		}; 
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw"
		};
		requiredInteractionModelGroup = "WorkBench";
	};
	class Wood_DoorWay_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-DoorWay (Frame) Kit";
		pictureItem = "RwG_Wood_Doorway_Frame_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Wood_Doorway_Frame_Kit"}
		}; 
	};
	class Wood_Door_nLock_nWin_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Door (No Lock & Window)";
		pictureItem = "RwG_Wood_Door_nLock_nWin_Kit"; 
		components[] = 
		{
			{1, "RwG_Wood_Doorway_Frame_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{1, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Door_nLock_nWin_Kit"}
		}; 
	};
	class Wood_Door_nLock_Win_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Door (No Lock w/ Window)";
		pictureItem = "RwG_Wood_Door_nLock_Win_Kit"; 
		components[] = 
		{
			{1, "RwG_Wood_Doorway_Frame_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Door_nLock_Win_Kit"}
		}; 
	};
	class Wood_Door_Lock_nWin_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Door (Locked, no Window)";
		pictureItem = "RwG_Wood_Door_Lock_nWin_Kit"; 
		components[] = 
		{
			{1, "RwG_Wood_Doorway_Frame_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Door_Lock_nWin_Kit"}
		}; 
	};
	class Wood_Wood_Door_Lock_Win_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Door (Locked & Window)";
		pictureItem = "RwG_Wood_Door_Lock_Win_Kit"; 
		components[] = 
		{
			{1, "RwG_Wood_Doorway_Frame_Kit"},
			{3, "Exile_Item_WoodPlank"},
			{3, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Door_Lock_Win_Kit"}
		}; 
	};
	class Wood_Window_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Window (Frame) Kit";
		pictureItem = "RwG_Wood_Window_Frame_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Wood_Window_Frame_Kit"}
		}; 
	};
	class Wood_Gate_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Gate (Frame) Kit";
		pictureItem = "RwG_Wood_Gate_Frame_Kit"; 
		components[] = 
		{
			{2, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Gate_Frame_Kit"}
		}; 
	};
	class Wood_Gate_Frame_Swing_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Gate (Frame) Kit";
		pictureItem = "RwG_Wood_Gate_Frame_Swing_Kit"; 
		components[] = 
		{
			{1, "RwG_Wood_Gate_Frame_Kit"},
			{4, "RwG_Item_Wooden_Beams"},
			{1, "Exile_Item_JunkMetal"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_Gate_Frame_Swing_Kit"}
		}; 
	};
	class Wood_DoubleGate_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-DoubleGate (Frame) Kit";
		pictureItem = "RwG_Wood_DoubleGate_Frame_Kit"; 
		components[] = 
		{
			{4, "RwG_Item_Wooden_Beams"},
			{2, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_DoubleGate_Frame_Kit"}
		}; 
	};
	class Wood_DoubleGate_Frame_Swing_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-DoubleGate (Frame/Swing) Kit";
		pictureItem = "RwG_Wood_DoubleGate_Frame_Swing_Kit"; 
		components[] = 
		{
			{2, "RwG_Wood_Gate_Frame_Kit"},
			{8, "RwG_Item_Wooden_Beams"},
			{1, "Exile_Item_JunkMetal"},
			{2, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_Wood_DoubleGate_Frame_Swing_Kit"}
		}; 
	};
	class Wood_Floor_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-Floor (Frame) Kit";
		pictureItem = "RwG_Wood_Floor_Frame_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Wood_Floor_Frame_Kit"}
		}; 
	};
	class Wood_FloorPort_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "Wood-FloorPort (Frame) Kit";
		pictureItem = "RwG_Wood_FloorPort_Frame_Kit"; 
		returnedItems[] = 
		{
			{1, "RwG_Wood_FloorPort_Frame_Kit"}
		}; 
	};
	class WoodGrid_Wall_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "WoodGrid-Wall (Frame) Kit";
		pictureItem = "RwG_WoodGrid_Wall_Frame_Kit"; 
		components[] = 
		{
			{2, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_WoodGrid_Wall_Frame_Kit"}
		}; 
	};
	class WoodGrid_Doorway_Frame_Kit_Recipe: Wood_Wall_Frame_Kit_Recipe
	{
		name = "WoodGrid-Doorway (Frame) Kit";
		pictureItem = "RwG_WoodGrid_Doorway_Frame_Kit"; 
		components[] = 
		{
			{2, "RwG_Item_Wooden_Beams"},
			{1, "RwG_Item_Box_Of_Nails"}
		};
		returnedItems[] = 
		{
			{1, "RwG_WoodGrid_Doorway_Frame_Kit"}
		}; 
	};