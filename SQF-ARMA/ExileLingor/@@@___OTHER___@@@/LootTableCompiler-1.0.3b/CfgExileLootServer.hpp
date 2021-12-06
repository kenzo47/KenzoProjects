class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0,48%
			Miscellaneous     = 0,97%
			PistolAttachments = 0,97%
			ShotgunAmmo       = 1,45%
			SMGAmmo           = 1,45%
			SMGAttachments    = 1,45%
			Shotguns          = 0,97%
			SMG               = 0,97%
			CivilianVests     = 2,42%
			PistolAmmo        = 2,42%
			Pistols           = 3,86%
			CUP_Pistols       = 4,83%
			CUP_PistolAmmo    = 5,80%
			Chemlights        = 4,83%
			CivilianItems     = 4,83%
			Drinks            = 4,83%
			RoadFlares        = 4,83%
			CivilianBackpacks = 5,31%
			CivilianClothing  = 12,08%
			CivilianHeadgear  = 12,08%
			Food              = 13,53%
			Trash             = 9,66%
		*/
		CivillianLowerClass[] = {"RoadFlares", "CivilianHeadgear", "Food", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "CivilianHeadgear", "CivilianVests", "CivilianHeadgear", "CivilianClothing", "CivilianItems", "CUP_PistolAmmo", "PistolAmmo", "CivilianHeadgear", "CUP_PistolAmmo", "CivilianVests", "CivilianClothing", "CivilianBackpacks", "CUP_Pistols", "CUP_Pistols", "CivilianBackpacks", "Trash", "Drinks", "SMGAmmo", "PistolAttachments", "SMGAmmo", "Food", "CivilianItems", "CivilianHeadgear", "CivilianClothing", "Food", "CivilianBackpacks", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "CUP_PistolAmmo", "Trash", "CivilianItems", "CivilianHeadgear", "RoadFlares", "CivilianBackpacks", "Drinks", "CivilianItems", "Chemlights", "Food", "Food", "CivilianHeadgear", "Drinks", "CivilianClothing", "CivilianVests", "Trash", "RoadFlares", "CivilianHeadgear", "RoadFlares", "Food", "CivilianHeadgear", "Chemlights", "CivilianClothing", "Miscellaneous", "CUP_PistolAmmo", "Food", "CUP_Pistols", "Food", "CivilianClothing", "Trash", "Miscellaneous", "CivilianClothing", "CivilianItems", "SMGAmmo", "CUP_Pistols", "Food", "Chemlights", "CUP_Pistols", "Drinks", "PistolAmmo", "CUP_Pistols", "Drinks", "Food", "CivilianHeadgear", "RoadFlares", "Trash", "CivilianHeadgear", "SMGAttachments", "RoadFlares", "CivilianClothing", "CivilianHeadgear", "CUP_PistolAmmo", "CivilianClothing", "Food", "CivilianClothing", "CivilianItems", "CivilianVests", "CivilianClothing", "ShotgunAmmo", "CivilianItems", "RoadFlares", "CUP_Pistols", "Food", "Trash", "Trash", "RoadFlares", "CivilianVests", "Pistols", "Food", "Pistols", "CivilianClothing", "Food", "Pistols", "CivilianClothing", "CivilianHeadgear", "CUP_PistolAmmo", "Drinks", "Trash", "Trash", "CivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CivilianClothing", "Shotguns", "Trash", "CivilianBackpacks", "Drinks", "CivilianBackpacks", "Chemlights", "RoadFlares", "Chemlights", "CUP_PistolAmmo", "PistolAmmo", "CUP_PistolAmmo", "CUP_Pistols", "Food", "CivilianHeadgear", "CivilianHeadgear", "CUP_PistolAmmo", "SMGAttachments", "Food", "Food", "RoadFlares", "CivilianBackpacks", "CivilianBackpacks", "Food", "Chemlights", "SMG", "Food", "CivilianHeadgear", "Drinks", "CivilianBackpacks", "CUP_Pistols", "CivilianHeadgear", "Food", "Trash", "Trash", "Trash", "CivilianBackpacks", "PistolAmmo", "Food", "Food", "CivilianClothing", "CivilianClothing", "SMGAttachments", "Trash", "Trash", "CivilianClothing", "Food", "CUP_PistolAmmo", "Chemlights", "Trash", "CUP_PistolAmmo", "Food", "Pistols", "Restraints", "CivilianClothing", "SMG", "ShotgunAmmo", "Trash", "Food", "CivilianClothing", "Pistols", "Pistols", "CivilianBackpacks", "CivilianClothing", "CivilianHeadgear", "Food", "PistolAmmo", "Trash", "Shotguns", "ShotgunAmmo", "CivilianHeadgear", "CivilianClothing", "Trash", "CUP_PistolAmmo", "Chemlights", "CivilianItems", "Food", "Trash", "Food", "Drinks", "CivilianHeadgear", "CUP_Pistols", "Pistols", "Pistols", "Chemlights", "PistolAttachments", "Drinks", "CivilianItems", "CivilianHeadgear", "Chemlights"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Valuables             = 0,39%
			Restraints            = 0,39%
			Miscellaneous         = 1,18%
			PistolAttachments     = 1,97%
			RifleAmmo             = 0,79%
			RifleAttachments      = 1,18%
			Rifles                = 0,79%
			ShotgunAmmo           = 1,18%
			SMGAmmo               = 1,18%
			SMGAttachments        = 1,97%
			Shotguns              = 1,97%
			CUP_Shotguns          = 2,36%
			CUP_ShotgunAmmo       = 2,36%
			CUP_SMG               = 2,36%
			CUP_SMGAmmo           = 2,36%
			CUP_Pistols           = 3,94%
			CUP_PistolAmmo        = 4,72%
			CUP_PistolAttachments = 3,94%
			CUP_MilitaryBackpacks = 0,79%
			SMG                   = 1,97%
			CivilianVests         = 3,15%
			PistolAmmo            = 3,15%
			Pistols               = 3,94%
			Chemlights            = 3,15%
			CivilianItems         = 3,94%
			Drinks                = 6,30%
			RoadFlares            = 3,94%
			CivilianBackpacks     = 5,12%
			CivilianClothing      = 5,91%
			CivilianHeadgear      = 7,87%
			Food                  = 11,81%
			Trash                 = 3,94%
		*/
		CivillianUpperClass[] = {"Pistols", "Drinks", "RoadFlares", "CivilianItems", "RoadFlares", "RifleAttachments", "CUP_ShotgunAmmo", "CivilianVests", "CUP_ShotgunAmmo", "Food", "Chemlights", "Drinks", "SMG", "CUP_PistolAttachments", "CivilianHeadgear", "CivilianItems", "Shotguns", "CUP_SMGAmmo", "CUP_PistolAttachments", "Food", "SMGAttachments", "SMGAttachments", "CivilianHeadgear", "PistolAmmo", "CUP_PistolAttachments", "CUP_PistolAmmo", "CivilianClothing", "CUP_PistolAttachments", "Pistols", "CUP_SMGAmmo", "Pistols", "Food", "Drinks", "CUP_Pistols", "RifleAmmo", "CivilianItems", "RifleAmmo", "CivilianBackpacks", "CUP_Pistols", "CivilianVests", "CUP_PistolAttachments", "Rifles", "PistolAttachments", "CUP_PistolAmmo", "CivilianBackpacks", "CivilianItems", "CUP_MilitaryBackpacks", "Miscellaneous", "Chemlights", "Food", "PistolAttachments", "Food", "CUP_Pistols", "Chemlights", "CivilianVests", "CivilianItems", "CivilianBackpacks", "Food", "Trash", "SMGAmmo", "Food", "CivilianVests", "Food", "Pistols", "Food", "CUP_PistolAmmo", "CivilianClothing", "CivilianClothing", "CivilianClothing", "CivilianClothing", "Food", "ShotgunAmmo", "Drinks", "CUP_Pistols", "CUP_Shotguns", "SMG", "Rifles", "CivilianHeadgear", "CUP_PistolAttachments", "Pistols", "CivilianHeadgear", "CivilianClothing", "CUP_SMG", "PistolAttachments", "Trash", "CivilianHeadgear", "CivilianHeadgear", "CivilianItems", "CUP_Pistols", "SMGAttachments", "Food", "SMGAmmo", "CUP_Pistols", "CUP_Shotguns", "Drinks", "CUP_SMG", "CivilianBackpacks", "CUP_Shotguns", "Food", "Food", "SMG", "Food", "Trash", "CUP_SMG", "Drinks", "CivilianVests", "Trash", "PistolAmmo", "Food", "CUP_PistolAmmo", "RifleAttachments", "CUP_PistolAttachments", "Miscellaneous", "Food", "CUP_PistolAttachments", "CUP_Pistols", "CUP_PistolAmmo", "RoadFlares", "PistolAmmo", "CUP_PistolAmmo", "CUP_Shotguns", "CUP_PistolAmmo", "CUP_ShotgunAmmo", "CivilianItems", "CUP_PistolAmmo", "PistolAttachments", "CivilianClothing", "Food", "Food", "SMG", "CUP_PistolAmmo", "Trash", "Miscellaneous", "CivilianBackpacks", "CivilianHeadgear", "PistolAmmo", "PistolAmmo", "Shotguns", "CivilianBackpacks", "CivilianBackpacks", "Trash", "Chemlights", "PistolAmmo", "RifleAttachments", "Food", "CivilianClothing", "Drinks", "Chemlights", "RoadFlares", "CivilianVests", "CivilianHeadgear", "PistolAmmo", "CivilianBackpacks", "CivilianVests", "Trash", "Food", "CUP_SMGAmmo", "CivilianHeadgear", "Pistols", "CUP_PistolAmmo", "CivilianVests", "CivilianItems", "CivilianClothing", "Food", "RoadFlares", "Chemlights", "Pistols", "CivilianClothing", "CUP_SMGAmmo", "ShotgunAmmo", "Shotguns", "Drinks", "RoadFlares", "CivilianHeadgear", "Trash", "CUP_ShotgunAmmo", "CivilianHeadgear", "Chemlights", "CivilianClothing", "CUP_Pistols", "CivilianClothing", "Drinks", "Drinks", "Pistols", "Food", "CUP_SMGAmmo", "ShotgunAmmo", "CivilianItems", "CUP_MilitaryBackpacks", "Food", "CivilianBackpacks", "CivilianClothing", "SMGAmmo", "CUP_SMG", "CUP_Pistols", "PistolAmmo", "Shotguns", "Drinks", "Food", "Trash", "CUP_SMGAmmo", "RoadFlares", "Chemlights", "CUP_Shotguns", "CUP_PistolAmmo", "CivilianHeadgear", "Restraints", "RoadFlares", "CUP_PistolAmmo", "CUP_PistolAttachments", "CivilianHeadgear", "CUP_SMG", "SMGAttachments", "CivilianBackpacks", "Drinks", "CivilianHeadgear", "CUP_PistolAttachments", "PistolAttachments", "CivilianBackpacks", "Pistols", "CivilianHeadgear", "Food", "Shotguns", "Food", "CUP_Pistols", "Trash", "CivilianHeadgear", "Food", "SMG", "Food", "Drinks", "CivilianHeadgear", "CivilianHeadgear", "Drinks", "Food", "CUP_ShotgunAmmo", "CivilianClothing", "CUP_ShotgunAmmo", "CivilianBackpacks", "CivilianItems", "CivilianHeadgear", "Valuables", "RoadFlares", "Drinks", "RoadFlares", "CUP_Shotguns", "Pistols", "Food", "CUP_SMG", "CivilianClothing", "SMGAttachments", "CivilianHeadgear", "Drinks", "CivilianBackpacks"};

		/*
			Percental Item Group Spawn Chances of Shop:

			Valuables             = 0,58%
			Miscellaneous         = 1,73%
			CivilianClothing      = 2,31%
			CivilianVests         = 2,31%
			PistolAttachments     = 1,16%
			ShotgunAmmo           = 0,58%
			SMGAmmo               = 0,58%
			SMGAttachments        = 1,16%
			PistolAmmo            = 1,16%
			CUP_Shotguns          = 1,73%
			CUP_ShotgunAmmo       = 1,73%
			CUP_SMG               = 1,73%
			CUP_SMGAmmo           = 1,73%
			CUP_Pistols           = 4,62%
			CUP_PistolAmmo        = 2,89%
			CUP_PistolAttachments = 2,89%
			CUP_MilitaryBackpacks = 1,73%
			CivilianHeadgear      = 1,73%
			IndustrialItems       = 1,73%
			MedicalItems          = 1,73%
			Restraints            = 1,73%
			Shotguns              = 2,31%
			SmokeGrenades         = 2,31%
			Chemlights            = 2,89%
			CivilianBackpacks     = 4,62%
			RoadFlares            = 2,89%
			SMG                   = 2,89%
			CivilianItems         = 4,05%
			Pistols               = 5,78%
			Drinks                = 14,45%
			Food                  = 14,45%
			Trash                 = 5,78%
		*/
		Shop[] = {"Food", "SMG", "Food", "Drinks", "CivilianClothing", "CUP_SMG", "Drinks", "Food", "Trash", "Food", "Miscellaneous", "CUP_Pistols", "CUP_SMG", "Drinks", "Drinks", "Pistols", "CUP_Shotguns", "CivilianBackpacks", "PistolAttachments", "Drinks", "CivilianBackpacks", "CivilianBackpacks", "Food", "CivilianVests", "Food", "Drinks", "Trash", "Food", "SMG", "CUP_ShotgunAmmo", "Drinks", "SMGAttachments", "Drinks", "Pistols", "SMGAmmo", "Drinks", "Food", "MedicalItems", "Drinks", "CUP_PistolAmmo", "SmokeGrenades", "Pistols", "Drinks", "CUP_Pistols", "Food", "SMG", "Trash", "MedicalItems", "CUP_MilitaryBackpacks", "Food", "RoadFlares", "Food", "Food", "CUP_SMGAmmo", "Food", "RoadFlares", "Shotguns", "CUP_MilitaryBackpacks", "RoadFlares", "SMG", "CivilianItems", "Food", "Drinks", "CivilianItems", "Pistols", "Drinks", "Trash", "Shotguns", "Chemlights", "Food", "CUP_PistolAttachments", "Drinks", "Trash", "CUP_SMG", "Pistols", "CivilianBackpacks", "Chemlights", "RoadFlares", "Pistols", "CivilianBackpacks", "Miscellaneous", "IndustrialItems", "Drinks", "MedicalItems", "CivilianClothing", "Restraints", "CivilianHeadgear", "CivilianClothing", "CUP_PistolAttachments", "Chemlights", "CUP_SMGAmmo", "Pistols", "CUP_ShotgunAmmo", "SmokeGrenades", "CivilianVests", "CUP_PistolAmmo", "CivilianItems", "ShotgunAmmo", "CUP_Pistols", "Valuables", "CUP_PistolAttachments", "Trash", "Pistols", "CivilianHeadgear", "CivilianItems", "SMGAttachments", "Trash", "Food", "Shotguns", "CUP_Shotguns", "PistolAmmo", "CUP_PistolAttachments", "Food", "Drinks", "CivilianClothing", "Pistols", "CUP_Shotguns", "CivilianVests", "CUP_PistolAttachments", "PistolAttachments", "Drinks", "CUP_ShotgunAmmo", "CivilianBackpacks", "IndustrialItems", "PistolAmmo", "CivilianBackpacks", "Drinks", "Restraints", "CivilianBackpacks", "CUP_PistolAmmo", "Food", "CivilianItems", "Miscellaneous", "CUP_Pistols", "Food", "CivilianVests", "RoadFlares", "Drinks", "Drinks", "Restraints", "Food", "CivilianItems", "CUP_Pistols", "CUP_Pistols", "CUP_PistolAmmo", "SmokeGrenades", "Trash", "CUP_SMGAmmo", "CUP_Pistols", "Drinks", "Drinks", "Shotguns", "Food", "IndustrialItems", "CUP_PistolAmmo", "CUP_Pistols", "Drinks", "Pistols", "Chemlights", "Drinks", "CivilianItems", "CivilianHeadgear", "Food", "Food", "SmokeGrenades", "Chemlights", "Food", "Food", "Trash", "CUP_MilitaryBackpacks", "Drinks", "Trash", "SMG"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Miscellaneous   = 17,78%
			Restraints      = 2,22%
			MedicalItems    = 2,22%
			Drinks          = 2,22%
			Food            = 2,22%
			Pistols         = 2,22%
			PistolAmmo      = 2,22%
			CUP_Pistols     = 2,22%
			CUP_PistolAmmo  = 2,22%
			RoadFlares      = 6,67%
			Vehicle         = 11,11%
			Trash           = 13,33%
			IndustrialItems = 33,33%
		*/
		Industrial[] = {"CUP_PistolAmmo", "Miscellaneous", "Food", "Trash", "Miscellaneous", "RoadFlares", "Trash", "Vehicle", "IndustrialItems", "Drinks", "Trash", "Trash", "Pistols", "IndustrialItems", "Vehicle", "IndustrialItems", "RoadFlares", "IndustrialItems", "Miscellaneous", "Miscellaneous", "Vehicle", "Miscellaneous", "Miscellaneous", "IndustrialItems", "Vehicle", "Trash", "Vehicle", "CUP_Pistols", "IndustrialItems", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Restraints", "PistolAmmo", "Miscellaneous", "IndustrialItems", "RoadFlares", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "MedicalItems", "Miscellaneous", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Miscellaneous   = 22,22%
			Electronics     = 11,11%
			Drinks          = 5,56%
			Shotguns        = 5,56%
			ShotgunAmmo     = 5,56%
			Food            = 5,56%
			Trash           = 16,67%
			IndustrialItems = 27,78%
		*/
		Factories[] = {"Miscellaneous", "Shotguns", "ShotgunAmmo", "IndustrialItems", "IndustrialItems", "Trash", "Food", "Electronics", "IndustrialItems", "IndustrialItems", "Trash", "Miscellaneous", "Electronics", "Miscellaneous", "Drinks", "Trash", "IndustrialItems", "Miscellaneous"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Miscellaneous         = 12,50%
			Restraints            = 3,13%
			Pistols               = 3,13%
			PistolAmmo            = 3,13%
			RoadFlares            = 9,38%
			IndustrialItems       = 15,63%
			Trash                 = 18,75%
			Vehicle               = 25,00%
			CUP_MilitaryBackpacks = 6,25%
			CUP_MilitaryHeadgear  = 3,13%
		*/
		VehicleService[] = {"PistolAmmo", "RoadFlares", "Miscellaneous", "IndustrialItems", "Vehicle", "Vehicle", "IndustrialItems", "Miscellaneous", "RoadFlares", "Pistols", "Trash", "RoadFlares", "Vehicle", "Trash", "IndustrialItems", "Trash", "Vehicle", "IndustrialItems", "Vehicle", "Restraints", "Miscellaneous", "CUP_MilitaryBackpacks", "Trash", "Vehicle", "Vehicle", "Miscellaneous", "CUP_MilitaryHeadgear", "Trash", "CUP_MilitaryBackpacks", "Trash", "Vehicle", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			Valuables             = 0,54%
			CUP_MilitaryVests     = 1,62%
			CUP_MilitaryBackpacks = 1,62%
			CUP_MilitaryClothing  = 1,08%
			CUP_MilitaryHeadgear  = 1,62%
			CUP_PistolAttachments = 1,08%
			CUP_Shotguns          = 1,08%
			CUP_SMG               = 1,08%
			CUP_Rifles            = 10,81%
			CUP_RifleAmmo         = 2,70%
			CUP_Attachments       = 3,24%
			CUP_LMG               = 3,78%
			CUP_LMGAmmo           = 2,70%
			CUP_Snipers           = 2,16%
			CUP_SniperAmmo        = 1,08%
			CUP_GrenadeLaunchers  = 0,54%
			Rebreathers           = 0,54%
			Bipods                = 2,16%
			DLCAmmo               = 1,08%
			DLCOptics             = 2,16%
			DLCSupressor          = 2,16%
			LMGAmmo               = 1,08%
			MedicalItems          = 1,08%
			Restraints            = 1,08%
			SniperAmmo            = 1,08%
			SniperAttachments     = 2,16%
			DLCRifles             = 0,54%
			DLCVests              = 1,62%
			GuerillaHeadgear      = 1,62%
			GuerillaVests         = 1,62%
			HandGrenades          = 1,62%
			HEGrenades            = 1,62%
			MilitaryBackpacks     = 1,62%
			MilitaryHeadgear      = 1,62%
			MilitaryVests         = 1,62%
			RifleAmmo             = 1,62%
			RifleAttachments      = 1,62%
			SmokeGrenades         = 1,62%
			Snipers               = 2,70%
			UGLFlares             = 1,62%
			UGLSmokes             = 1,62%
			CivilianItems         = 2,16%
			GuerillaBackpacks     = 2,16%
			GuerillaItems         = 2,16%
			LMG                   = 2,70%
			Explosives            = 2,70%
			GuerillaClothing      = 2,70%
			MilitaryClothing      = 2,70%
			Rifles                = 6,49%
			Trash                 = 0,54%
		*/
		Military[] = {"CUP_Rifles", "CivilianItems", "LMG", "CUP_Attachments", "CUP_MilitaryVests", "CUP_PistolAttachments", "GuerillaBackpacks", "CUP_Rifles", "HandGrenades", "CUP_LMG", "MilitaryClothing", "Rifles", "Rifles", "CUP_Rifles", "Explosives", "CUP_LMGAmmo", "Explosives", "CUP_Rifles", "SniperAttachments", "GuerillaClothing", "MilitaryBackpacks", "CUP_LMG", "CUP_MilitaryBackpacks", "HEGrenades", "CUP_Rifles", "Valuables", "UGLFlares", "CUP_Rifles", "Rifles", "CUP_SniperAmmo", "HandGrenades", "LMGAmmo", "CUP_Snipers", "GuerillaVests", "GuerillaClothing", "GuerillaItems", "CUP_PistolAttachments", "Rifles", "HEGrenades", "Bipods", "CUP_GrenadeLaunchers", "CUP_Attachments", "GuerillaHeadgear", "CUP_SMG", "CUP_Attachments", "CUP_Rifles", "Rifles", "CUP_LMG", "Restraints", "LMG", "Bipods", "CUP_RifleAmmo", "Rifles", "CUP_LMGAmmo", "CUP_MilitaryHeadgear", "Snipers", "CUP_MilitaryClothing", "CivilianItems", "GuerillaBackpacks", "CUP_Rifles", "Rifles", "GuerillaClothing", "UGLFlares", "MilitaryHeadgear", "CUP_LMGAmmo", "CUP_MilitaryBackpacks", "DLCSupressor", "DLCVests", "RifleAttachments", "CUP_Attachments", "SmokeGrenades", "CUP_Rifles", "CUP_LMG", "DLCOptics", "RifleAmmo", "CUP_MilitaryVests", "CUP_Rifles", "Snipers", "CUP_Rifles", "LMG", "CUP_Attachments", "CUP_LMG", "UGLSmokes", "GuerillaHeadgear", "CUP_Rifles", "SmokeGrenades", "Explosives", "CUP_MilitaryBackpacks", "UGLSmokes", "GuerillaHeadgear", "CUP_SniperAmmo", "GuerillaItems", "CUP_LMGAmmo", "DLCAmmo", "SniperAmmo", "DLCVests", "RifleAttachments", "Rebreathers", "Rifles", "SniperAmmo", "MilitaryClothing", "Bipods", "CUP_MilitaryClothing", "CUP_LMG", "CUP_Snipers", "Bipods", "CUP_Rifles", "MedicalItems", "MilitaryHeadgear", "GuerillaClothing", "HEGrenades", "Snipers", "CUP_Rifles", "CUP_Rifles", "LMG", "GuerillaBackpacks", "DLCOptics", "Rifles", "CUP_Rifles", "DLCOptics", "MilitaryVests", "GuerillaClothing", "MilitaryHeadgear", "GuerillaItems", "CivilianItems", "MilitaryBackpacks", "CUP_Rifles", "CUP_MilitaryVests", "CUP_RifleAmmo", "CUP_MilitaryHeadgear", "LMG", "CUP_LMGAmmo", "CUP_Rifles", "Rifles", "UGLSmokes", "GuerillaItems", "Explosives", "CUP_RifleAmmo", "GuerillaVests", "LMGAmmo", "CUP_SMG", "SniperAttachments", "Trash", "MilitaryClothing", "CUP_Shotguns", "RifleAttachments", "DLCSupressor", "MilitaryVests", "RifleAmmo", "CUP_RifleAmmo", "Rifles", "Rifles", "MilitaryClothing", "GuerillaBackpacks", "DLCRifles", "MilitaryBackpacks", "SniperAttachments", "CUP_Snipers", "Snipers", "CUP_LMG", "CUP_Attachments", "CUP_Snipers", "DLCOptics", "SniperAttachments", "CUP_Rifles", "CUP_Shotguns", "MilitaryVests", "UGLFlares", "CUP_MilitaryHeadgear", "CUP_Rifles", "Explosives", "Restraints", "Snipers", "DLCSupressor", "GuerillaVests", "HandGrenades", "MedicalItems", "DLCVests", "SmokeGrenades", "MilitaryClothing", "CUP_RifleAmmo", "DLCSupressor", "DLCAmmo", "CivilianItems", "RifleAmmo"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 13,33%
			MedicalItems = 53,33%
			Drinks       = 20,00%
			Food         = 13,33%
		*/
		Medical[] = {"Drinks", "Trash", "MedicalItems", "Drinks", "MedicalItems", "Food", "Drinks", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Food", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			Valuables             = 2,17%
			Miscellaneous         = 2,17%
			CUP_MilitaryVests     = 4,35%
			CUP_MilitaryClothing  = 10,87%
			CUP_MilitaryBackpacks = 8,70%
			CUP_MilitaryHeadgear  = 4,35%
			CUP_Attachments       = 10,87%
			CUP_LMG               = 2,17%
			CUP_LMGAmmo           = 2,17%
			DLCAmmo               = 2,17%
			DLCOptics             = 2,17%
			DLCSupressor          = 2,17%
			SniperAmmo            = 2,17%
			SniperAttachments     = 2,17%
			CivilianItems         = 4,35%
			Explosives            = 4,35%
			HandGrenades          = 4,35%
			MedicalItems          = 4,35%
			Restraints            = 4,35%
			MilitaryBackpacks     = 8,70%
			MilitaryHeadgear      = 8,70%
			DLCRifles             = 2,17%
		*/
		Tourist[] = {"Explosives", "Restraints", "CUP_Attachments", "DLCAmmo", "SniperAmmo", "CUP_MilitaryBackpacks", "MedicalItems", "CUP_MilitaryVests", "CUP_MilitaryHeadgear", "DLCOptics", "MilitaryBackpacks", "MilitaryHeadgear", "CUP_MilitaryClothing", "SniperAttachments", "Valuables", "DLCSupressor", "CivilianItems", "MilitaryBackpacks", "CUP_MilitaryBackpacks", "Explosives", "CUP_MilitaryClothing", "DLCRifles", "CUP_LMG", "CUP_MilitaryBackpacks", "CUP_LMGAmmo", "Restraints", "CUP_MilitaryClothing", "CUP_Attachments", "MilitaryHeadgear", "MilitaryBackpacks", "HandGrenades", "CUP_MilitaryClothing", "CUP_Attachments", "CUP_MilitaryBackpacks", "MilitaryHeadgear", "MilitaryBackpacks", "CUP_Attachments", "CUP_MilitaryClothing", "CivilianItems", "CUP_MilitaryHeadgear", "MedicalItems", "MilitaryHeadgear", "CUP_MilitaryVests", "Miscellaneous", "HandGrenades", "CUP_Attachments"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			Valuables             = 2,97%
			CUP_MilitaryVests     = 2,97%
			CUP_MilitaryBackpacks = 2,97%
			CUP_MilitaryClothing  = 0,99%
			CUP_MilitaryHeadgear  = 1,98%
			CUP_Rifles            = 9,90%
			CUP_RifleAmmo         = 4,95%
			CUP_Attachments       = 9,90%
			CUP_LMG               = 9,90%
			CUP_LMGAmmo           = 4,95%
			CUP_Snipers           = 4,95%
			CUP_SniperAmmo        = 1,98%
			CUP_GrenadeLaunchers  = 1,98%
			DLCAmmo               = 0,99%
			DLCOptics             = 0,99%
			DLCSupressor          = 0,99%
			SniperAmmo            = 0,99%
			SniperAttachments     = 0,99%
			EpicWeapons           = 1,98%
			HandGrenades          = 1,98%
			MedicalItems          = 1,98%
			Restraints            = 1,98%
			DLCGhillies           = 2,97%
			Ghillies              = 2,97%
			Explosives            = 4,95%
			MilitaryBackpacks     = 4,95%
			MilitaryHeadgear      = 4,95%
			DLCRifles             = 0,99%
			Snipers               = 4,95%
		*/
		Radiation[] = {"Snipers", "CUP_MilitaryClothing", "EpicWeapons", "CUP_SniperAmmo", "CUP_MilitaryHeadgear", "CUP_LMG", "CUP_MilitaryVests", "CUP_LMG", "CUP_MilitaryHeadgear", "HandGrenades", "CUP_LMG", "CUP_LMG", "DLCGhillies", "CUP_LMG", "MedicalItems", "EpicWeapons", "CUP_MilitaryBackpacks", "CUP_LMG", "CUP_MilitaryVests", "CUP_Attachments", "CUP_Snipers", "MilitaryHeadgear", "CUP_Attachments", "CUP_Rifles", "CUP_LMGAmmo", "CUP_Snipers", "CUP_MilitaryBackpacks", "DLCRifles", "MilitaryBackpacks", "MilitaryHeadgear", "Explosives", "Explosives", "DLCGhillies", "CUP_Attachments", "DLCAmmo", "CUP_Rifles", "MilitaryBackpacks", "CUP_LMGAmmo", "CUP_Attachments", "HandGrenades", "CUP_LMGAmmo", "CUP_RifleAmmo", "CUP_Rifles", "CUP_Attachments", "CUP_Attachments", "Snipers", "CUP_Snipers", "CUP_Rifles", "MedicalItems", "CUP_RifleAmmo", "Restraints", "CUP_RifleAmmo", "CUP_LMG", "Ghillies", "MilitaryHeadgear", "MilitaryBackpacks", "CUP_LMG", "CUP_SniperAmmo", "Restraints", "Valuables", "CUP_Rifles", "CUP_Rifles", "Ghillies", "CUP_LMGAmmo", "CUP_Snipers", "DLCSupressor", "CUP_Attachments", "MilitaryBackpacks", "CUP_LMGAmmo", "MilitaryHeadgear", "CUP_Snipers", "CUP_Attachments", "Snipers", "MilitaryHeadgear", "Valuables", "CUP_RifleAmmo", "Explosives", "CUP_RifleAmmo", "SniperAmmo", "Explosives", "DLCGhillies", "Snipers", "Snipers", "CUP_Attachments", "CUP_GrenadeLaunchers", "Ghillies", "CUP_GrenadeLaunchers", "CUP_Attachments", "CUP_Rifles", "CUP_Rifles", "CUP_LMG", "CUP_Rifles", "CUP_MilitaryVests", "Valuables", "SniperAttachments", "DLCOptics", "MilitaryBackpacks", "Explosives", "CUP_MilitaryBackpacks", "CUP_LMG", "CUP_Rifles"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exitem_bakedbeans_cooked     = 1,33%
			Exitem_bakedbeans            = 1,33%
			Exitem_orange                = 1,33%
			Exitem_pumpkin               = 1,33%
			Exitem_cereal_crunchin       = 1,33%
			Exitem_rice                  = 1,77%
			Exitem_rice_cooked           = 0,88%
			Exitem_container             = 1,33%
			Exitem_tacticalbacon_cooked  = 0,88%
			Exitem_tacticalbacon         = 1,77%
			Exitem_spam_cooked           = 0,88%
			Exitem_spam                  = 1,77%
			Exitem_tuna_cooked           = 0,88%
			Exitem_tuna                  = 1,77%
			Exitem_spaghetti_cooked      = 0,88%
			Exitem_spaghetti             = 1,77%
			Exitem_meatballs_cooked      = 0,88%
			Exitem_meatballs             = 1,77%
			Exitem_hotdogs_cooked        = 0,44%
			Exitem_hotdogs               = 1,33%
			Exitem_cereal_bloodsucker    = 1,33%
			Exitem_cereal_honeyhoops     = 1,33%
			Exitem_cereal_squares        = 1,33%
			Exitem_cereal_stars          = 1,33%
			Exitem_cereal_kush           = 0,88%
			Exitem_cereal_rick           = 1,33%
			Exitem_meat                  = 1,33%
			Exitem_meat_cooked           = 1,33%
			Exitem_container_beef        = 0,44%
			Exile_Item_CookingPot        = 1,33%
			Exile_Item_CanOpener         = 2,21%
			Exile_Item_Matches           = 2,21%
			Exile_Item_EMRE              = 1,33%
			Exile_Item_GloriousKnakworst = 2,65%
			Exile_Item_Surstromming      = 3,10%
			Exile_Item_SausageGravy      = 3,10%
			Exile_Item_ChristmasTinner   = 3,10%
			Exile_Item_MacasCheese       = 3,10%
			Exile_Item_BBQSandwich       = 3,10%
			Exile_Item_CatFood           = 3,10%
			Exile_Item_Dogfood           = 3,10%
			Exile_Item_BeefParts         = 3,10%
			Exile_Item_Cheathas          = 3,10%
			Exile_Item_DsNuts            = 3,10%
			Exile_Item_Noodles           = 3,10%
			Exile_Item_CockONut          = 3,54%
			Exile_Item_SeedAstics        = 3,54%
			Exile_Item_Raisins           = 3,98%
			Exile_Item_Moobar            = 3,98%
			Exile_Item_InstantCoffee     = 4,87%
		*/
		Food[] = {"Exile_Item_GloriousKnakworst", "Exile_Item_CatFood", "Exile_Item_CockONut", "Exitem_rice_cooked", "Exitem_cereal_kush", "Exitem_tacticalbacon", "Exile_Item_Surstromming", "Exile_Item_Moobar", "Exile_Item_CanOpener", "Exile_Item_SeedAstics", "Exile_Item_MacasCheese", "Exitem_meatballs", "Exile_Item_CookingPot", "Exitem_container", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exitem_cereal_rick", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exitem_tacticalbacon", "Exile_Item_SeedAstics", "Exile_Item_MacasCheese", "Exitem_cereal_stars", "Exile_Item_ChristmasTinner", "Exile_Item_SeedAstics", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exitem_spaghetti", "Exitem_cereal_stars", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exitem_orange", "Exitem_meatballs", "Exile_Item_BeefParts", "Exitem_cereal_rick", "Exile_Item_SeedAstics", "Exitem_meat", "Exile_Item_CanOpener", "Exitem_cereal_honeyhoops", "Exile_Item_GloriousKnakworst", "Exitem_tuna", "Exitem_hotdogs_cooked", "Exile_Item_Moobar", "Exile_Item_Noodles", "Exile_Item_BBQSandwich", "Exile_Item_Dogfood", "Exitem_bakedbeans", "Exile_Item_DsNuts", "Exile_Item_CanOpener", "Exile_Item_Cheathas", "Exile_Item_Dogfood", "Exile_Item_SausageGravy", "Exile_Item_CockONut", "Exitem_cereal_kush", "Exitem_meat_cooked", "Exitem_bakedbeans", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exitem_spam", "Exile_Item_Surstromming", "Exile_Item_MacasCheese", "Exitem_cereal_squares", "Exile_Item_Cheathas", "Exitem_meatballs", "Exile_Item_DsNuts", "Exile_Item_DsNuts", "Exile_Item_InstantCoffee", "Exile_Item_CookingPot", "Exitem_cereal_crunchin", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_SausageGravy", "Exitem_bakedbeans_cooked", "Exile_Item_BBQSandwich", "Exile_Item_CockONut", "Exitem_meatballs_cooked", "Exile_Item_Cheathas", "Exile_Item_Matches", "Exile_Item_InstantCoffee", "Exile_Item_ChristmasTinner", "Exile_Item_SeedAstics", "Exile_Item_CockONut", "Exile_Item_GloriousKnakworst", "Exile_Item_BeefParts", "Exile_Item_Surstromming", "Exitem_tuna", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_Noodles", "Exile_Item_BeefParts", "Exile_Item_Dogfood", "Exile_Item_CanOpener", "Exile_Item_CanOpener", "Exile_Item_BBQSandwich", "Exile_Item_Dogfood", "Exitem_meatballs", "Exile_Item_Surstromming", "Exitem_spam_cooked", "Exile_Item_Raisins", "Exitem_cereal_honeyhoops", "Exile_Item_SausageGravy", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exitem_orange", "Exile_Item_Raisins", "Exitem_cereal_bloodsucker", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exitem_spam", "Exile_Item_BeefParts", "Exitem_cereal_squares", "Exile_Item_InstantCoffee", "Exitem_spaghetti_cooked", "Exitem_spaghetti", "Exile_Item_SausageGravy", "Exile_Item_CockONut", "Exitem_cereal_bloodsucker", "Exile_Item_ChristmasTinner", "Exile_Item_BBQSandwich", "Exitem_cereal_crunchin", "Exile_Item_GloriousKnakworst", "Exitem_tacticalbacon_cooked", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exitem_meat_cooked", "Exitem_orange", "Exile_Item_MacasCheese", "Exile_Item_BBQSandwich", "Exitem_container", "Exitem_bakedbeans_cooked", "Exitem_spaghetti", "Exile_Item_CatFood", "Exile_Item_BBQSandwich", "Exitem_tacticalbacon", "Exile_Item_EMRE", "Exitem_cereal_rick", "Exitem_rice", "Exile_Item_Moobar", "Exile_Item_CockONut", "Exitem_tuna_cooked", "Exile_Item_Cheathas", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exitem_pumpkin", "Exitem_spaghetti", "Exitem_container_beef", "Exile_Item_CatFood", "Exitem_meatballs_cooked", "Exitem_pumpkin", "Exile_Item_Raisins", "Exitem_tuna", "Exile_Item_SeedAstics", "Exitem_spam", "Exile_Item_Matches", "Exitem_cereal_stars", "Exile_Item_GloriousKnakworst", "Exile_Item_EMRE", "Exitem_rice", "Exile_Item_Noodles", "Exitem_container", "Exile_Item_ChristmasTinner", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_Noodles", "Exile_Item_EMRE", "Exile_Item_Noodles", "Exile_Item_BeefParts", "Exitem_hotdogs", "Exitem_spam_cooked", "Exile_Item_DsNuts", "Exitem_meat_cooked", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exitem_meat", "Exitem_cereal_bloodsucker", "Exile_Item_Raisins", "Exile_Item_ChristmasTinner", "Exitem_bakedbeans_cooked", "Exile_Item_Noodles", "Exitem_hotdogs", "Exile_Item_CatFood", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_Dogfood", "Exitem_tuna_cooked", "Exitem_tuna", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exitem_meat", "Exile_Item_CatFood", "Exitem_spam", "Exitem_rice", "Exitem_tacticalbacon", "Exitem_rice_cooked", "Exitem_tacticalbacon_cooked", "Exitem_rice", "Exile_Item_BBQSandwich", "Exile_Item_Dogfood", "Exitem_cereal_honeyhoops", "Exile_Item_Matches", "Exitem_spaghetti_cooked", "Exitem_pumpkin", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_Matches", "Exitem_cereal_crunchin", "Exile_Item_Matches", "Exile_Item_InstantCoffee", "Exitem_cereal_squares", "Exitem_hotdogs", "Exitem_bakedbeans"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exitem_container_soup              = 1,82%
			Exitem_canteen_dirty               = 3,64%
			Exitem_canteen_salt                = 3,64%
			Exitem_canteen_coffee              = 1,82%
			Exitem_canteen_fresh               = 1,82%
			Exitem_franta                      = 7,27%
			Exitem_redgull                     = 7,27%
			Exitem_spirit                      = 7,27%
			Exile_Item_PlasticBottleCoffee     = 3,64%
			Exile_Item_Beer                    = 7,27%
			Exile_Item_EnergyDrink             = 7,27%
			Exile_Item_PlasticBottleFreshWater = 7,27%
			Exile_Item_PowerDrink              = 3,64%
			Exile_Item_MountainDupe            = 7,27%
			Exile_Item_ChocolateMilk           = 10,91%
			Exile_Item_PlasticBottleDirtyWater = 18,18%
		*/
		Drinks[] = {"Exile_Item_Beer", "Exitem_canteen_dirty", "Exitem_canteen_fresh", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_Beer", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleCoffee", "Exitem_canteen_salt", "Exitem_redgull", "Exitem_canteen_coffee", "Exitem_canteen_dirty", "Exile_Item_Beer", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exitem_spirit", "Exile_Item_PowerDrink", "Exitem_container_soup", "Exitem_franta", "Exile_Item_EnergyDrink", "Exitem_franta", "Exile_Item_EnergyDrink", "Exitem_canteen_salt", "Exitem_redgull", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_MountainDupe", "Exitem_spirit", "Exitem_redgull", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exitem_spirit", "Exitem_spirit", "Exile_Item_PlasticBottleDirtyWater", "Exitem_franta", "Exitem_redgull", "Exile_Item_MountainDupe", "Exitem_franta", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_EnergyDrink", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleCoffee", "Exile_Item_PowerDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_MountainDupe", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_PlasticBottleDirtyWater"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 5,88%
			Exile_Weapon_Makarov    = 5,88%
			Exile_Weapon_Taurus     = 5,88%
			Exile_Weapon_TaurusGold = 5,88%
			hgun_P07_khk_F          = 5,88%
			hgun_Pistol_01_F        = 5,88%
			hgun_Pistol_heavy_01_F  = 5,88%
			hgun_Pistol_heavy_02_F  = 5,88%
			hgun_Pistol_Signal_F    = 5,88%
			hgun_ACPC2_F            = 11,76%
			hgun_P07_F              = 11,76%
			hgun_Rook40_F           = 11,76%
			Exile_Weapon_SA61       = 11,76%
		*/
		Pistols[] = {"hgun_Pistol_heavy_01_F", "hgun_P07_F", "Exile_Weapon_Makarov", "hgun_Pistol_heavy_02_F", "hgun_P07_F", "hgun_P07_khk_F", "hgun_ACPC2_F", "hgun_Rook40_F", "hgun_Rook40_F", "Exile_Weapon_SA61", "Exile_Weapon_SA61", "Exile_Weapon_TaurusGold", "hgun_Pistol_01_F", "Exile_Weapon_Taurus", "hgun_ACPC2_F", "Exile_Weapon_Colt1911", "hgun_Pistol_Signal_F"};

		/*
			Percental Item Spawn Chances of CUP_Pistols:

			CUP_hgun_Colt1911              = 8,33%
			CUP_hgun_Compact               = 8,33%
			CUP_hgun_Glock17               = 8,33%
			CUP_hgun_M9                    = 8,33%
			CUP_hgun_Makarov               = 8,33%
			CUP_hgun_PB6P9                 = 8,33%
			CUP_hgun_MicroUzi              = 8,33%
			CUP_hgun_TaurusTracker455      = 8,33%
			CUP_hgun_TaurusTracker455_gold = 8,33%
			CUP_hgun_SA61                  = 8,33%
			CUP_hgun_Duty                  = 8,33%
			CUP_hgun_Phantom               = 8,33%
		*/
		CUP_Pistols[] = {"CUP_hgun_TaurusTracker455_gold", "CUP_hgun_TaurusTracker455", "CUP_hgun_MicroUzi", "CUP_hgun_Compact", "CUP_hgun_PB6P9", "CUP_hgun_Phantom", "CUP_hgun_Glock17", "CUP_hgun_Duty", "CUP_hgun_M9", "CUP_hgun_Makarov", "CUP_hgun_Colt1911", "CUP_hgun_SA61"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F               = 2,44%
			6Rnd_RedSignal_F                 = 2,44%
			16Rnd_9x21_Mag                   = 2,44%
			6Rnd_45ACP_Cylinder              = 4,88%
			10Rnd_9x21_Mag                   = 9,76%
			11Rnd_45ACP_Mag                  = 9,76%
			30Rnd_9x21_Mag                   = 9,76%
			9Rnd_45ACP_Mag                   = 9,76%
			Exile_Magazine_6Rnd_45ACP        = 9,76%
			Exile_Magazine_7Rnd_45ACP        = 9,76%
			Exile_Magazine_8Rnd_9x18         = 9,76%
			Exile_Magazine_10Rnd_765x17_SA61 = 9,76%
			Exile_Magazine_20Rnd_765x17_SA61 = 9,76%
		*/
		PistolAmmo[] = {"Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "6Rnd_GreenSignal_F", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "10Rnd_9x21_Mag", "30Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_7Rnd_45ACP", "30Rnd_9x21_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "30Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "10Rnd_9x21_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "16Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "6Rnd_RedSignal_F"};

		/*
			Percental Item Spawn Chances of CUP_PistolAmmo:

			CUP_10Rnd_9x19_Compact    = 10,53%
			CUP_7Rnd_45ACP_1911       = 10,53%
			CUP_17Rnd_9x19_glock17    = 10,53%
			CUP_15Rnd_9x19_M9         = 10,53%
			CUP_8Rnd_9x18_Makarov_M   = 10,53%
			CUP_8Rnd_9x18_MakarovSD_M = 10,53%
			CUP_30Rnd_9x19_UZI        = 5,26%
			CUP_6Rnd_45ACP_M          = 10,53%
			CUP_10Rnd_B_765x17_Ball_M = 10,53%
			CUP_20Rnd_B_765x17_Ball_M = 5,26%
			CUP_50Rnd_B_765x17_Ball_M = 2,63%
			CUP_18Rnd_9x19_Phantom    = 2,63%
		*/
		CUP_PistolAmmo[] = {"CUP_20Rnd_B_765x17_Ball_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_10Rnd_B_765x17_Ball_M", "CUP_50Rnd_B_765x17_Ball_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_15Rnd_9x19_M9", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_15Rnd_9x19_M9", "CUP_7Rnd_45ACP_1911", "CUP_10Rnd_B_765x17_Ball_M", "CUP_10Rnd_9x19_Compact", "CUP_17Rnd_9x19_glock17", "CUP_15Rnd_9x19_M9", "CUP_8Rnd_9x18_Makarov_M", "CUP_6Rnd_45ACP_M", "CUP_7Rnd_45ACP_1911", "CUP_15Rnd_9x19_M9", "CUP_18Rnd_9x19_Phantom", "CUP_30Rnd_9x19_UZI", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_7Rnd_45ACP_1911", "CUP_10Rnd_B_765x17_Ball_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_30Rnd_9x19_UZI", "CUP_8Rnd_9x18_Makarov_M", "CUP_6Rnd_45ACP_M", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_17Rnd_9x19_glock17", "CUP_6Rnd_45ACP_M", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_10Rnd_9x19_Compact", "CUP_7Rnd_45ACP_1911", "CUP_10Rnd_9x19_Compact", "CUP_6Rnd_45ACP_M", "CUP_10Rnd_9x19_Compact", "CUP_10Rnd_B_765x17_Ball_M"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16,67%
			optic_Yorris    = 16,67%
			muzzle_snds_acp = 33,33%
			muzzle_snds_L   = 33,33%
		*/
		PistolAttachments[] = {"muzzle_snds_L", "optic_MRD", "optic_Yorris", "muzzle_snds_L", "muzzle_snds_acp", "muzzle_snds_acp"};

		/*
			Percental Item Spawn Chances of CUP_PistolAttachments:

			CUP_muzzle_snds_M9       = 50,00%
			CUP_muzzle_snds_MicroUzi = 50,00%
		*/
		CUP_PistolAttachments[] = {"CUP_muzzle_snds_MicroUzi", "CUP_muzzle_snds_M9", "CUP_muzzle_snds_MicroUzi", "CUP_muzzle_snds_M9", "CUP_muzzle_snds_MicroUzi", "CUP_muzzle_snds_M9", "CUP_muzzle_snds_MicroUzi", "CUP_muzzle_snds_M9"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 100,00%
		*/
		Shotguns[] = {"Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of CUP_Shotguns:

			CUP_sgun_AA12     = 10,00%
			CUP_sgun_Saiga12K = 20,00%
			CUP_sgun_CZ584    = 50,00%
			CUP_sgun_M1014    = 20,00%
		*/
		CUP_Shotguns[] = {"CUP_sgun_Saiga12K", "CUP_sgun_M1014", "CUP_sgun_CZ584", "CUP_sgun_Saiga12K", "CUP_sgun_CZ584", "CUP_sgun_CZ584", "CUP_sgun_M1014", "CUP_sgun_CZ584", "CUP_sgun_CZ584", "CUP_sgun_AA12"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100,00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of CUP_ShotgunAmmo:

			CUP_20Rnd_B_AA12_Pellets       = 3,70%
			CUP_20Rnd_B_AA12_74Slug        = 3,70%
			CUP_8Rnd_B_Saiga12_74Slug_M    = 14,81%
			CUP_8Rnd_B_Saiga12_74Pellets_M = 14,81%
			CUP_1Rnd_B_CZ584_74Slug        = 14,81%
			CUP_1Rnd_B_CZ584_74Pellets     = 14,81%
			CUP_7Rnd_B_CZ584_OFP           = 3,70%
			CUP_1Rnd_762x51_CZ584          = 14,81%
			CUP_8Rnd_B_Beneli_74Slug       = 7,41%
			CUP_8Rnd_B_Beneli_74Pellets    = 7,41%
		*/
		CUP_ShotgunAmmo[] = {"CUP_1Rnd_762x51_CZ584", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_1Rnd_B_CZ584_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_7Rnd_B_CZ584_OFP", "CUP_1Rnd_762x51_CZ584", "CUP_20Rnd_B_AA12_Pellets", "CUP_8Rnd_B_Beneli_74Slug", "CUP_1Rnd_B_CZ584_74Pellets", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_1Rnd_B_CZ584_74Slug", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_1Rnd_B_CZ584_74Slug", "CUP_1Rnd_762x51_CZ584", "CUP_1Rnd_B_CZ584_74Pellets", "CUP_1Rnd_B_CZ584_74Pellets", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_1Rnd_B_CZ584_74Slug", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_1Rnd_762x51_CZ584", "CUP_1Rnd_B_CZ584_74Slug", "CUP_20Rnd_B_AA12_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25,00%
			SMG_02_F       = 25,00%
			SMG_05_F       = 25,00%
			hgun_PDW2000_F = 25,00%
		*/
		SMG[] = {"SMG_02_F", "SMG_01_F", "hgun_PDW2000_F", "SMG_05_F"};

		/*
			Percental Item Spawn Chances of CUP_SMG:

			CUP_smg_bizon  = 25,00%
			CUP_smg_EVO    = 25,00%
			CUP_smg_MP5SD6 = 25,00%
			CUP_smg_MP5A5  = 25,00%
		*/
		CUP_SMG[] = {"CUP_smg_MP5SD6", "CUP_smg_EVO", "CUP_smg_bizon", "CUP_smg_MP5A5"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16,67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16,67%
			30Rnd_9x21_Mag_SMG_02               = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16,67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_45ACP_Mag_SMG_01"};

		/*
			Percental Item Spawn Chances of CUP_SMGAmmo:

			CUP_64Rnd_9x19_Bizon_M               = 7,14%
			CUP_64Rnd_Green_Tracer_9x19_Bizon_M  = 7,14%
			CUP_64Rnd_Red_Tracer_9x19_Bizon_M    = 7,14%
			CUP_64Rnd_White_Tracer_9x19_Bizon_M  = 7,14%
			CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M = 7,14%
			CUP_30Rnd_9x19_EVO                   = 7,14%
			30Rnd_9x21_Mag                       = 7,14%
			30Rnd_9x21_Green_Mag                 = 7,14%
			30Rnd_9x21_Red_Mag                   = 7,14%
			30Rnd_9x21_Yellow_Mag                = 7,14%
			CUP_30Rnd_9x19_MP5                   = 28,57%
		*/
		CUP_SMGAmmo[] = {"30Rnd_9x21_Red_Mag", "CUP_30Rnd_9x19_MP5", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Green_Mag", "CUP_64Rnd_Green_Tracer_9x19_Bizon_M", "30Rnd_9x21_Mag", "CUP_30Rnd_9x19_MP5", "CUP_64Rnd_Red_Tracer_9x19_Bizon_M", "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M", "CUP_64Rnd_White_Tracer_9x19_Bizon_M", "CUP_64Rnd_9x19_Bizon_M", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_EVO"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16,67%
			optic_Holosight_smg_blk_F = 16,67%
			optic_ACO_grn_smg         = 16,67%
			optic_Aco_smg             = 16,67%
			optic_ACO_grn             = 16,67%
			optic_Aco                 = 16,67%
		*/
		SMGAttachments[] = {"optic_Holosight_smg", "optic_ACO_grn_smg", "optic_Aco_smg", "optic_Aco", "optic_Holosight_smg_blk_F", "optic_ACO_grn"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F       = 0,71%
			arifle_Mk20_GL_F         = 1,43%
			arifle_MX_GL_Black_F     = 0,71%
			arifle_MX_GL_F           = 0,71%
			arifle_MXM_F             = 0,71%
			arifle_TRG21_GL_F        = 1,43%
			Exile_Weapon_AK107_GL    = 1,43%
			Exile_Weapon_AK74_GL     = 1,43%
			arifle_AK12_GL_F         = 1,43%
			arifle_AKM_F             = 1,43%
			arifle_AKM_FL_F          = 1,43%
			arifle_AKS_F             = 2,14%
			arifle_ARX_blk_F         = 1,43%
			arifle_ARX_ghex_F        = 1,43%
			arifle_ARX_hex_F         = 1,43%
			arifle_CTAR_blk_F        = 1,43%
			arifle_CTAR_ghex_F       = 1,43%
			arifle_CTAR_GL_blk_F     = 1,43%
			arifle_CTAR_hex_F        = 1,43%
			arifle_CTARS_blk_F       = 1,43%
			arifle_CTARS_ghex_F      = 1,43%
			arifle_CTARS_hex_F       = 1,43%
			arifle_Katiba_F          = 1,43%
			arifle_Mk20_F            = 1,43%
			arifle_Mk20C_F           = 1,43%
			arifle_MX_Black_F        = 1,43%
			arifle_MX_F              = 1,43%
			arifle_MXC_Black_F       = 1,43%
			arifle_MXC_F             = 1,43%
			arifle_MXM_Black_F       = 1,43%
			arifle_SDAR_F            = 1,43%
			arifle_SPAR_01_blk_F     = 1,43%
			arifle_SPAR_01_GL_blk_F  = 1,43%
			arifle_SPAR_01_GL_khk_F  = 1,43%
			arifle_SPAR_01_GL_snd_F  = 1,43%
			arifle_SPAR_01_khk_F     = 1,43%
			arifle_SPAR_01_snd_F     = 1,43%
			arifle_SPAR_02_blk_F     = 1,43%
			arifle_SPAR_02_khk_F     = 1,43%
			arifle_SPAR_02_snd_F     = 1,43%
			arifle_SPAR_03_blk_F     = 0,71%
			arifle_SPAR_03_khk_F     = 0,71%
			arifle_SPAR_03_snd_F     = 0,71%
			arifle_TRG20_F           = 1,43%
			arifle_TRG21_F           = 1,43%
			Exile_Weapon_AK107       = 1,43%
			Exile_Weapon_AK74        = 1,43%
			Exile_Weapon_DMR         = 1,43%
			arifle_MXM_khk_F         = 2,14%
			Exile_Weapon_AK47        = 2,14%
			Exile_Weapon_AKS_Gold    = 2,14%
			Exile_Weapon_SVD         = 1,43%
			Exile_Weapon_SVDCamo     = 1,43%
			Exile_Weapon_VSSVintorez = 2,14%
			arifle_MX_GL_khk_F       = 2,14%
			arifle_AK12_F            = 2,14%
			Exile_Weapon_CZ550       = 2,14%
			arifle_MX_khk_F          = 2,14%
			arifle_MXC_khk_F         = 2,14%
			Exile_Weapon_M4          = 2,14%
			Exile_Weapon_M16A4       = 2,14%
			Exile_Weapon_M16A2       = 2,14%
			Exile_Weapon_LeeEnfield  = 7,14%
		*/
		Rifles[] = {"Exile_Weapon_M16A2", "arifle_AKS_F", "arifle_Mk20_GL_F", "arifle_SPAR_02_snd_F", "arifle_AKM_FL_F", "arifle_Mk20C_F", "arifle_MXC_Black_F", "arifle_SPAR_01_blk_F", "arifle_SPAR_02_khk_F", "arifle_AKM_F", "Exile_Weapon_M4", "arifle_AK12_GL_F", "Exile_Weapon_AK47", "arifle_CTAR_hex_F", "arifle_AK12_F", "Exile_Weapon_AK107", "arifle_SPAR_03_snd_F", "arifle_MX_khk_F", "arifle_SPAR_01_khk_F", "arifle_MXC_khk_F", "arifle_MXM_khk_F", "arifle_CTAR_blk_F", "arifle_Katiba_F", "arifle_SPAR_01_GL_blk_F", "Exile_Weapon_AKS_Gold", "arifle_TRG20_F", "Exile_Weapon_LeeEnfield", "arifle_AKS_F", "arifle_SDAR_F", "arifle_MXC_F", "arifle_SPAR_03_blk_F", "arifle_MXC_Black_F", "arifle_TRG20_F", "arifle_SPAR_02_blk_F", "arifle_SPAR_01_GL_khk_F", "arifle_ARX_blk_F", "arifle_MXC_F", "arifle_MXM_Black_F", "Exile_Weapon_DMR", "arifle_Katiba_F", "arifle_CTARS_ghex_F", "Exile_Weapon_M16A4", "arifle_SPAR_01_GL_khk_F", "arifle_MX_Black_F", "arifle_AK12_GL_F", "arifle_TRG21_GL_F", "arifle_MX_Black_F", "Exile_Weapon_DMR", "Exile_Weapon_AK47", "arifle_TRG21_F", "arifle_TRG21_F", "arifle_CTAR_GL_blk_F", "Exile_Weapon_SVDCamo", "Exile_Weapon_LeeEnfield", "arifle_MX_F", "Exile_Weapon_CZ550", "arifle_Mk20_F", "arifle_SPAR_02_snd_F", "arifle_SPAR_01_GL_snd_F", "Exile_Weapon_VSSVintorez", "arifle_SPAR_01_GL_blk_F", "Exile_Weapon_AK107", "arifle_MXM_khk_F", "Exile_Weapon_CZ550", "Exile_Weapon_AK74_GL", "Exile_Weapon_AK74", "Exile_Weapon_AK107_GL", "arifle_SDAR_F", "arifle_CTAR_GL_blk_F", "Exile_Weapon_AK47", "arifle_SPAR_01_blk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_M16A2", "arifle_Mk20_GL_F", "Exile_Weapon_AKS_Gold", "arifle_TRG21_GL_F", "arifle_MXM_khk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_M16A4", "Exile_Weapon_VSSVintorez", "Exile_Weapon_AK74_GL", "arifle_CTARS_ghex_F", "arifle_ARX_ghex_F", "Exile_Weapon_SVD", "arifle_AKS_F", "arifle_CTARS_blk_F", "arifle_CTARS_hex_F", "Exile_Weapon_M4", "arifle_SPAR_02_blk_F", "Exile_Weapon_AKS_Gold", "arifle_Katiba_GL_F", "arifle_MX_GL_khk_F", "arifle_MX_F", "arifle_CTAR_hex_F", "arifle_ARX_hex_F", "arifle_MX_khk_F", "arifle_Mk20_F", "arifle_ARX_hex_F", "arifle_AKM_FL_F", "arifle_SPAR_01_GL_snd_F", "arifle_MXM_F", "arifle_MX_GL_khk_F", "arifle_MX_GL_khk_F", "arifle_AK12_F", "arifle_MX_khk_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_CZ550", "arifle_SPAR_01_snd_F", "Exile_Weapon_AK107_GL", "arifle_MXC_khk_F", "arifle_CTAR_ghex_F", "Exile_Weapon_M16A2", "Exile_Weapon_LeeEnfield", "Exile_Weapon_LeeEnfield", "arifle_MX_GL_Black_F", "Exile_Weapon_M16A4", "Exile_Weapon_SVDCamo", "arifle_CTAR_blk_F", "arifle_SPAR_03_khk_F", "arifle_CTARS_hex_F", "arifle_MXC_khk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_snd_F", "arifle_SPAR_01_khk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_SVD", "arifle_AKM_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_AK74", "Exile_Weapon_LeeEnfield", "Exile_Weapon_VSSVintorez", "arifle_CTARS_blk_F", "arifle_CTAR_ghex_F", "arifle_MXM_Black_F", "arifle_AK12_F", "arifle_ARX_ghex_F", "arifle_Mk20C_F", "arifle_ARX_blk_F", "arifle_MX_GL_F", "Exile_Weapon_M4"};

		/*
			Percental Item Spawn Chances of CUP_Rifles:

			CUP_arifle_AK74                = 1,59%
			CUP_arifle_AK107               = 1,59%
			CUP_arifle_AK107_GL            = 1,59%
			CUP_arifle_AKS74               = 1,59%
			CUP_arifle_AKS74U              = 1,59%
			CUP_arifle_AK74_GL             = 1,59%
			CUP_arifle_AKM                 = 1,59%
			CUP_arifle_AKS                 = 1,59%
			CUP_arifle_AKS_Gold            = 1,59%
			CUP_arifle_RPK74               = 1,59%
			CUP_arifle_CZ805_A2            = 1,59%
			CUP_arifle_FNFAL               = 1,59%
			CUP_arifle_FNFAL_railed        = 1,59%
			CUP_arifle_G36C                = 1,59%
			CUP_arifle_G36C_camo           = 1,59%
			CUP_arifle_MG36                = 1,59%
			CUP_arifle_MG36_camo           = 1,59%
			CUP_arifle_L85A2               = 1,59%
			CUP_arifle_L85A2_GL            = 1,59%
			CUP_arifle_L86A2               = 1,59%
			CUP_arifle_M16A2               = 1,59%
			CUP_arifle_M16A2_GL            = 1,59%
			CUP_arifle_M16A4_GL            = 1,59%
			CUP_arifle_M4A1                = 1,59%
			CUP_arifle_M4A1_camo           = 1,59%
			CUP_arifle_M16A4_Base          = 1,59%
			CUP_arifle_M4A1_BUIS_GL        = 1,59%
			CUP_arifle_M4A1_BUIS_camo_GL   = 1,59%
			CUP_arifle_M4A1_BUIS_desert_GL = 1,59%
			CUP_arifle_M4A1_black          = 1,59%
			CUP_arifle_M4A1_desert         = 1,59%
			CUP_arifle_Sa58P               = 1,59%
			CUP_arifle_Sa58V               = 1,59%
			CUP_arifle_Mk16_CQC            = 1,59%
			CUP_arifle_XM8_Compact_Rail    = 1,59%
			CUP_arifle_XM8_Railed          = 1,59%
			CUP_arifle_XM8_Carbine         = 1,59%
			CUP_arifle_XM8_Carbine_FG      = 1,59%
			CUP_arifle_XM8_Carbine_GL      = 1,59%
			CUP_arifle_XM8_Compact         = 1,59%
			CUP_arifle_xm8_SAW             = 1,59%
			CUP_arifle_xm8_sharpshooter    = 1,59%
			CUP_arifle_CZ805_A1            = 1,59%
			CUP_arifle_CZ805_GL            = 1,59%
			CUP_arifle_CZ805_B_GL          = 1,59%
			CUP_arifle_CZ805_B             = 1,59%
			CUP_arifle_Sa58P_des           = 1,59%
			CUP_arifle_Sa58V_camo          = 1,59%
			CUP_arifle_Sa58RIS1            = 1,59%
			CUP_arifle_Sa58RIS2            = 1,59%
			CUP_arifle_Sa58RIS2_camo       = 1,59%
			CUP_arifle_Mk16_CQC_FG         = 1,59%
			CUP_arifle_Mk16_STD            = 1,59%
			CUP_arifle_Mk16_STD_EGLM       = 1,59%
			CUP_arifle_Mk17_CQC            = 1,59%
			CUP_arifle_Mk17_CQC_FG         = 1,59%
			CUP_arifle_Mk17_CQC_SFG        = 1,59%
			CUP_arifle_Mk17_CQC_EGLM       = 1,59%
			CUP_arifle_Mk17_STD            = 1,59%
			CUP_arifle_Mk17_STD_FG         = 1,59%
			CUP_arifle_Mk17_STD_SFG        = 1,59%
			CUP_arifle_Mk17_STD_EGLM       = 1,59%
			CUP_arifle_Mk20                = 1,59%
		*/
		CUP_Rifles[] = {"CUP_arifle_Mk17_STD_FG", "CUP_arifle_MG36", "CUP_arifle_G36C", "CUP_arifle_M16A2_GL", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_Sa58P_des", "CUP_arifle_XM8_Compact_Rail", "CUP_arifle_Mk16_CQC", "CUP_arifle_Mk16_STD", "CUP_arifle_M16A2_GL", "CUP_arifle_Sa58V", "CUP_arifle_xm8_sharpshooter", "CUP_arifle_AKS", "CUP_arifle_M4A1", "CUP_arifle_FNFAL_railed", "CUP_arifle_AK107", "CUP_arifle_M4A1_BUIS_desert_GL", "CUP_arifle_L85A2", "CUP_arifle_M16A2", "CUP_arifle_AK74_GL", "CUP_arifle_AK74", "CUP_arifle_AK74", "CUP_arifle_xm8_sharpshooter", "CUP_arifle_XM8_Compact_Rail", "CUP_arifle_XM8_Compact_Rail", "CUP_arifle_Sa58RIS1", "CUP_arifle_Mk17_STD", "CUP_arifle_Mk17_CQC", "CUP_arifle_L86A2", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_MG36_camo", "CUP_arifle_XM8_Carbine", "CUP_arifle_CZ805_B", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_MG36_camo", "CUP_arifle_G36C_camo", "CUP_arifle_M4A1_black", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_Mk17_STD_FG", "CUP_arifle_Mk16_STD", "CUP_arifle_MG36_camo", "CUP_arifle_AK107", "CUP_arifle_L85A2", "CUP_arifle_Sa58P", "CUP_arifle_CZ805_B", "CUP_arifle_AKM", "CUP_arifle_RPK74", "CUP_arifle_M16A4_Base", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_M16A2", "CUP_arifle_CZ805_A1", "CUP_arifle_Mk17_CQC_SFG", "CUP_arifle_Sa58V_camo", "CUP_arifle_M4A1", "CUP_arifle_M4A1", "CUP_arifle_M4A1_camo", "CUP_arifle_L85A2_GL", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_Sa58V_camo", "CUP_arifle_Sa58RIS2", "CUP_arifle_FNFAL_railed", "CUP_arifle_AK74_GL", "CUP_arifle_XM8_Carbine_FG", "CUP_arifle_Mk17_CQC_SFG", "CUP_arifle_Mk17_STD_EGLM", "CUP_arifle_Sa58P_des", "CUP_arifle_M16A2", "CUP_arifle_AKM", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_XM8_Carbine_GL", "CUP_arifle_G36C", "CUP_arifle_M4A1_black", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_L85A2_GL", "CUP_arifle_Mk16_CQC", "CUP_arifle_MG36", "CUP_arifle_AK74", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_Mk16_CQC_FG", "CUP_arifle_M16A2_GL", "CUP_arifle_L85A2_GL", "CUP_arifle_L86A2", "CUP_arifle_XM8_Carbine_GL", "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_CZ805_B_GL", "CUP_arifle_Sa58RIS2_camo", "CUP_arifle_XM8_Carbine_FG", "CUP_arifle_XM8_Compact", "CUP_arifle_Mk17_STD", "CUP_arifle_XM8_Carbine", "CUP_arifle_Mk17_CQC_SFG", "CUP_arifle_xm8_SAW", "CUP_arifle_Sa58V_camo", "CUP_arifle_Mk16_CQC", "CUP_arifle_CZ805_GL", "CUP_arifle_M4A1_desert", "CUP_arifle_XM8_Carbine_GL", "CUP_arifle_Mk17_CQC", "CUP_arifle_FNFAL", "CUP_arifle_L85A2", "CUP_arifle_Mk17_CQC_SFG", "CUP_arifle_xm8_sharpshooter", "CUP_arifle_L86A2", "CUP_arifle_Mk16_CQC", "CUP_arifle_M16A4_Base", "CUP_arifle_RPK74", "CUP_arifle_AKS_Gold", "CUP_arifle_Sa58RIS1", "CUP_arifle_M16A4_Base", "CUP_arifle_Sa58V", "CUP_arifle_G36C", "CUP_arifle_Mk17_STD_EGLM", "CUP_arifle_AKS74", "CUP_arifle_M16A4_GL", "CUP_arifle_Mk16_STD", "CUP_arifle_Mk20", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_AKS74", "CUP_arifle_XM8_Railed", "CUP_arifle_Sa58RIS2_camo", "CUP_arifle_AKS74", "CUP_arifle_L85A2", "CUP_arifle_M4A1_camo", "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_CZ805_A1", "CUP_arifle_AKS74U", "CUP_arifle_Sa58P_des", "CUP_arifle_Sa58RIS2", "CUP_arifle_Mk20", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_Sa58RIS1", "CUP_arifle_M4A1_BUIS_desert_GL", "CUP_arifle_XM8_Carbine_FG", "CUP_arifle_Sa58RIS2", "CUP_arifle_CZ805_GL", "CUP_arifle_AK107", "CUP_arifle_Sa58RIS2", "CUP_arifle_Sa58V", "CUP_arifle_M4A1_camo", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_AKS_Gold", "CUP_arifle_AKS", "CUP_arifle_XM8_Carbine", "CUP_arifle_AKS_Gold", "CUP_arifle_M16A2", "CUP_arifle_RPK74", "CUP_arifle_AK107_GL", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_M4A1_desert", "CUP_arifle_XM8_Compact", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_xm8_SAW", "CUP_arifle_Mk17_STD_FG", "CUP_arifle_Mk16_CQC_FG", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_G36C_camo", "CUP_arifle_Sa58P", "CUP_arifle_CZ805_A2", "CUP_arifle_CZ805_GL", "CUP_arifle_AK107_GL", "CUP_arifle_AK107_GL", "CUP_arifle_FNFAL_railed", "CUP_arifle_AK74_GL", "CUP_arifle_AK107_GL", "CUP_arifle_M4A1_BUIS_desert_GL", "CUP_arifle_XM8_Carbine_GL", "CUP_arifle_G36C_camo", "CUP_arifle_XM8_Railed", "CUP_arifle_Mk16_CQC_FG", "CUP_arifle_Mk17_STD_EGLM", "CUP_arifle_XM8_Compact", "CUP_arifle_L85A2_GL", "CUP_arifle_XM8_Compact_Rail", "CUP_arifle_M4A1_desert", "CUP_arifle_Mk16_STD", "CUP_arifle_XM8_Compact", "CUP_arifle_AKS", "CUP_arifle_M4A1_black", "CUP_arifle_M4A1_black", "CUP_arifle_CZ805_B", "CUP_arifle_XM8_Railed", "CUP_arifle_M16A4_GL", "CUP_arifle_MG36", "CUP_arifle_M16A2_GL", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_AKS_Gold", "CUP_arifle_XM8_Railed", "CUP_arifle_Sa58RIS1", "CUP_arifle_Sa58P_des", "CUP_arifle_M4A1_BUIS_camo_GL", "CUP_arifle_Sa58V_camo", "CUP_arifle_Mk17_STD_FG", "CUP_arifle_MG36_camo", "CUP_arifle_M4A1_camo", "CUP_arifle_M16A4_GL", "CUP_arifle_G36C", "CUP_arifle_AKS74U", "CUP_arifle_Mk16_CQC_FG", "CUP_arifle_CZ805_B_GL", "CUP_arifle_RPK74", "CUP_arifle_FNFAL", "CUP_arifle_CZ805_A1", "CUP_arifle_Mk20", "CUP_arifle_AKS", "CUP_arifle_G36C_camo", "CUP_arifle_Mk17_CQC", "CUP_arifle_AKS74U", "CUP_arifle_AK107", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_MG36", "CUP_arifle_Sa58RIS2_camo", "CUP_arifle_xm8_sharpshooter", "CUP_arifle_CZ805_GL", "CUP_arifle_CZ805_A2", "CUP_arifle_M4A1_desert", "CUP_arifle_M4A1_BUIS_desert_GL", "CUP_arifle_Mk17_STD", "CUP_arifle_FNFAL_railed", "CUP_arifle_FNFAL", "CUP_arifle_Sa58P", "CUP_arifle_AK74_GL", "CUP_arifle_Sa58V", "CUP_arifle_XM8_Carbine_FG", "CUP_arifle_CZ805_B_GL", "CUP_arifle_AKS74U", "CUP_arifle_Mk17_STD", "CUP_arifle_XM8_Carbine", "CUP_arifle_Mk20", "CUP_arifle_CZ805_A1", "CUP_arifle_Sa58P", "CUP_arifle_CZ805_A2", "CUP_arifle_AKM", "CUP_arifle_M16A4_Base", "CUP_arifle_M4A1_BUIS_GL", "CUP_arifle_FNFAL", "CUP_arifle_L86A2", "CUP_arifle_AK74", "CUP_arifle_Mk17_CQC", "CUP_arifle_xm8_SAW", "CUP_arifle_AKM", "CUP_arifle_CZ805_B", "CUP_arifle_Sa58RIS2_camo", "CUP_arifle_CZ805_A2", "CUP_arifle_xm8_SAW", "CUP_arifle_M16A4_GL", "CUP_arifle_AKS74", "CUP_arifle_CZ805_B_GL", "CUP_arifle_Mk17_STD_EGLM", "CUP_arifle_M4A1"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                    = 2,20%
			30Rnd_556x45_Stanag                    = 2,20%
			30Rnd_556x45_Stanag_green              = 2,20%
			30Rnd_556x45_Stanag_red                = 2,20%
			30Rnd_556x45_Stanag_Tracer_Green       = 2,20%
			30Rnd_556x45_Stanag_Tracer_Red         = 2,20%
			30Rnd_556x45_Stanag_Tracer_Yellow      = 2,20%
			30Rnd_65x39_caseless_green             = 2,20%
			30Rnd_65x39_caseless_green_mag_Tracer  = 2,20%
			30Rnd_65x39_caseless_mag               = 2,20%
			30Rnd_65x39_caseless_mag_Tracer        = 2,20%
			Exile_Magazine_10Rnd_303               = 10,99%
			Exile_Magazine_30Rnd_762x39_AK         = 2,20%
			Exile_Magazine_30Rnd_545x39_AK         = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Green   = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Red     = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_White   = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Yellow  = 2,20%
			Exile_Magazine_20Rnd_762x51_DMR        = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Red    = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Green  = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_White  = 1,10%
			Exile_Magazine_5Rnd_22LR               = 2,20%
			Exile_Magazine_10Rnd_762x54            = 2,20%
			Exile_Magazine_10Rnd_9x39              = 2,20%
			Exile_Magazine_20Rnd_9x39              = 2,20%
			30Rnd_762x39_Mag_F                     = 2,20%
			30Rnd_762x39_Mag_Green_F               = 2,20%
			30Rnd_762x39_Mag_Tracer_F              = 2,20%
			30Rnd_762x39_Mag_Tracer_Green_F        = 2,20%
			30Rnd_762x39_AK47_M                    = 2,20%
			30Rnd_545x39_Mag_F                     = 2,20%
			30Rnd_545x39_Mag_Green_F               = 2,20%
			30Rnd_545x39_Mag_Tracer_F              = 2,20%
			30Rnd_545x39_Mag_Tracer_Green_F        = 2,20%
			10Rnd_50BW_Mag_F                       = 2,20%
			30Rnd_580x42_Mag_F                     = 2,20%
			30Rnd_580x42_Mag_Tracer_F              = 2,20%
			100Rnd_580x42_Mag_F                    = 2,20%
			100Rnd_580x42_Mag_Tracer_F             = 2,20%
			150Rnd_556x45_Drum_Mag_F               = 2,20%
			150Rnd_556x45_Drum_Mag_Tracer_F        = 2,20%
			20Rnd_762x51_Mag                       = 2,20%
		*/
		RifleAmmo[] = {"10Rnd_50BW_Mag_F", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "Exile_Magazine_10Rnd_303", "100Rnd_580x42_Mag_F", "30Rnd_545x39_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_5Rnd_22LR", "20Rnd_762x51_Mag", "30Rnd_545x39_Mag_Tracer_F", "20Rnd_762x51_Mag", "30Rnd_556x45_Stanag_green", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_20Rnd_762x51_DMR_Green", "30Rnd_545x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_65x39_caseless_green_mag_Tracer", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_762x39_Mag_F", "30Rnd_545x39_Mag_Tracer_Green_F", "Exile_Magazine_10Rnd_9x39", "30Rnd_65x39_caseless_green", "100Rnd_580x42_Mag_F", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_White", "30Rnd_65x39_caseless_mag", "30Rnd_545x39_Mag_Green_F", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_30Rnd_545x39_AK_Green", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_5Rnd_22LR", "20Rnd_556x45_UW_mag", "Exile_Magazine_20Rnd_762x51_DMR_White", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_556x45_Stanag_Tracer_Red", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_762x39_AK47_M", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_AK47_M", "30Rnd_545x39_Mag_F", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_green", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_White", "30Rnd_556x45_Stanag_red", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag", "Exile_Magazine_30Rnd_545x39_AK_Green", "Exile_Magazine_20Rnd_762x51_DMR", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_20Rnd_762x51_DMR_Red", "150Rnd_556x45_Drum_Mag_F", "30Rnd_762x39_Mag_Tracer_Green_F", "Exile_Magazine_20Rnd_9x39", "30Rnd_762x39_Mag_Tracer_Green_F", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_Tracer_F", "10Rnd_50BW_Mag_F", "30Rnd_762x39_Mag_F", "Exile_Magazine_30Rnd_545x39_AK", "Exile_Magazine_20Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK", "30Rnd_545x39_Mag_Green_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_556x45_Stanag_red", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_10Rnd_303", "20Rnd_556x45_UW_mag"};

		/*
			Percental Item Spawn Chances of CUP_RifleAmmo:

			30Rnd_556x45_Stanag                               = 0,97%
			30Rnd_556x45_Stanag_Tracer_Red                    = 0,97%
			30Rnd_556x45_Stanag_Tracer_Green                  = 0,97%
			30Rnd_556x45_Stanag_Tracer_Yellow                 = 0,97%
			30Rnd_556x45_Stanag_red                           = 0,97%
			CUP_30Rnd_545x39_AK_M                             = 0,97%
			CUP_30Rnd_Subsonic_545x39_AK_M                    = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M            = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M              = 0,97%
			CUP_30Rnd_TE1_White_Tracer_545x39_AK_M            = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M           = 0,97%
			CUP_30Rnd_545x39_AK74M_M                          = 0,97%
			CUP_30Rnd_Subsonic_545x39_AK74M_M                 = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M         = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M           = 0,97%
			CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M         = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M        = 0,97%
			CUP_30Rnd_545x39_AK74_plum_M                      = 0,97%
			CUP_30Rnd_Subsonic_545x39_AK74_plum_M             = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M     = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M       = 0,97%
			CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M     = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M    = 0,97%
			CUP_30Rnd_545x39_AK74M_camo_M                     = 0,97%
			CUP_20Rnd_545x39_AKSU_M                           = 0,97%
			CUP_20Rnd_Subsonic_545x39_AKSU_M                  = 0,97%
			CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M      = 0,77%
			CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M   = 0,77%
			CUP_60Rnd_545x39_AK74M_M                          = 0,58%
			CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M         = 0,58%
			CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M           = 0,58%
			CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M        = 0,58%
			CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M         = 0,58%
			CUP_30Rnd_762x39_AK47_M                           = 0,97%
			CUP_30Rnd_762x39_AK47_bakelite_M                  = 0,97%
			CUP_30Rnd_762x39_AK103_bakelite_M                 = 0,97%
			CUP_30Rnd_762x39_AK47_TK_M                        = 0,97%
			CUP_20Rnd_762x39_AMD63_M                          = 0,97%
			CUP_10Rnd_762x39_SaigaMk03_M                      = 0,97%
			CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M      = 0,77%
			CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M      = 0,39%
			CUP_20Rnd_762x51_FNFAL_M                          = 0,97%
			CUP_30Rnd_556x45_G36                              = 0,97%
			CUP_30Rnd_556x45_G36_camo                         = 0,97%
			CUP_30Rnd_556x45_G36_wdl                          = 0,97%
			CUP_30Rnd_556x45_G36_hex                          = 0,97%
			CUP_100Rnd_556x45_BetaCMag                        = 0,19%
			CUP_100Rnd_556x45_BetaCMag_camo                   = 0,19%
			CUP_100Rnd_556x45_BetaCMag_wdl                    = 0,19%
			CUP_100Rnd_556x45_BetaCMag_hex                    = 0,19%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36               = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36             = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36            = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo          = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo        = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo       = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl           = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl         = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl        = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex           = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex         = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex        = 0,97%
			CUP_30Rnd_556x45_XM8                              = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_556x45_XM8               = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_556x45_XM8             = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8            = 0,97%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag         = 0,19%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag       = 0,19%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag      = 0,19%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo    = 0,19%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_camo  = 0,19%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_camo = 0,19%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_wdl     = 0,19%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_wdl   = 0,19%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_wdl  = 0,19%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_hex     = 0,19%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_hex   = 0,19%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_hex  = 0,19%
			CUP_30Rnd_556x45_Stanag_L85                       = 0,97%
			CUP_30Rnd_556x45_Emag                             = 0,97%
			CUP_30Rnd_556x45_Stanag_Mk16                      = 0,97%
			CUP_30Rnd_556x45_Stanag_Mk16_black                = 0,97%
			CUP_30Rnd_556x45_Stanag_Mk16_woodland             = 0,97%
			CUP_20Rnd_556x45_Stanag                           = 0,97%
			CUP_100Rnd_556x45_BetaCMag_ar15                   = 0,19%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15    = 0,19%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15  = 0,19%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15 = 0,19%
			CUP_30Rnd_Sa58_M_TracerG                          = 0,97%
			CUP_30Rnd_Sa58_M_TracerR                          = 0,97%
			CUP_30Rnd_Sa58_M_TracerY                          = 0,97%
			CUP_30Rnd_Sa58_M                                  = 0,97%
			CUP_30Rnd_556x45_Stanag                           = 0,97%
			CUP_60Rnd_556x45_SureFire                         = 0,58%
			CUP_20Rnd_762x51_B_SCAR                           = 0,97%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR           = 0,97%
			CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR              = 0,97%
			CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR            = 0,97%
			CUP_20Rnd_TE1_White_Tracer_762x51_SCAR            = 0,97%
			CUP_20Rnd_762x51_B_SCAR_bkl                       = 0,97%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl       = 0,97%
			CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl          = 0,97%
			CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl        = 0,97%
			CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl        = 0,97%
			CUP_20Rnd_762x51_B_SCAR_wdl                       = 0,97%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl       = 0,97%
			CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl          = 0,97%
			CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl        = 0,97%
			CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl        = 0,97%
			CUP_30Rnd_762x51_1_B_SCAR                         = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR         = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR            = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR          = 0,97%
			CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR          = 0,97%
			CUP_30Rnd_762x51_2_B_SCAR                         = 0,97%
			CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR         = 0,97%
			CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR            = 0,97%
			CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR          = 0,97%
			CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR          = 0,97%
			CUP_50Rnd_762x51_B_SCAR                           = 0,77%
			CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR           = 0,77%
			CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR              = 0,77%
			CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR            = 0,77%
			CUP_50Rnd_TE1_White_Tracer_762x51_SCAR            = 0,77%
		*/
		CUP_RifleAmmo[] = {"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR", "CUP_20Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8", "CUP_30Rnd_545x39_AK74M_camo_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_Subsonic_545x39_AK74M_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_XM8", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", "CUP_20Rnd_762x51_B_SCAR", "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_10Rnd_762x39_SaigaMk03_M", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo", "CUP_30Rnd_Sa58_M_TracerY", "CUP_30Rnd_545x39_AK_M", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_30Rnd_556x45_Stanag_L85", "30Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "30Rnd_556x45_Stanag_red", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo", "CUP_30Rnd_TE1_Green_Tracer_556x45_XM8", "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_20Rnd_762x51_B_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_20Rnd_762x51_B_SCAR", "CUP_30Rnd_556x45_G36_hex", "CUP_100Rnd_556x45_BetaCMag_camo", "CUP_30Rnd_Subsonic_545x39_AK74_plum_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR", "CUP_30Rnd_545x39_AK74_plum_M", "CUP_30Rnd_762x39_AK47_bakelite_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M", "CUP_50Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR", "CUP_30Rnd_762x39_AK103_bakelite_M", "CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR", "CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_20Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_30Rnd_556x45_XM8", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_762x39_AK47_TK_M", "CUP_30Rnd_545x39_AK74_plum_M", "CUP_30Rnd_Sa58_M_TracerG", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15", "CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_556x45_G36_wdl", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_30Rnd_Sa58_M_TracerR", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo", "CUP_20Rnd_762x39_AMD63_M", "CUP_20Rnd_Subsonic_545x39_AKSU_M", "CUP_30Rnd_556x45_G36_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_762x39_AK47_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR", "CUP_20Rnd_545x39_AKSU_M", "30Rnd_556x45_Stanag", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_545x39_AK74_plum_M", "CUP_30Rnd_556x45_G36_camo", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_20Rnd_762x51_B_SCAR_bkl", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_545x39_AK_M", "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_20Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_Sa58_M_TracerY", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_Sa58_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_556x45_Stanag_Mk16_black", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_556x45_G36_hex", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_30Rnd_Sa58_M_TracerR", "CUP_20Rnd_762x39_AMD63_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_100Rnd_556x45_BetaCMag_hex", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo", "CUP_30Rnd_Sa58_M_TracerY", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_20Rnd_762x51_FNFAL_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15", "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_556x45_Stanag_Mk16_woodland", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_hex", "CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_30Rnd_762x51_1_B_SCAR", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_556x45_Stanag_Mk16_woodland", "CUP_30Rnd_Subsonic_545x39_AK74M_M", "CUP_30Rnd_556x45_Stanag_L85", "CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_30Rnd_Sa58_M_TracerR", "CUP_30Rnd_762x39_AK47_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl", "CUP_100Rnd_556x45_BetaCMag_wdl", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_XM8", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_30Rnd_762x51_1_B_SCAR", "CUP_30Rnd_Sa58_M_TracerG", "CUP_30Rnd_762x51_1_B_SCAR", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_wdl", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl", "30Rnd_556x45_Stanag", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl", "CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_545x39_AK_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", "CUP_60Rnd_556x45_SureFire", "CUP_30Rnd_556x45_G36_wdl", "CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_556x45_Stanag_Mk16_woodland", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex", "CUP_30Rnd_762x39_AK47_M", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag", "CUP_30Rnd_Sa58_M", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_100Rnd_556x45_BetaCMag", "CUP_30Rnd_TE1_Red_Tracer_556x45_XM8", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M", "CUP_20Rnd_762x51_B_SCAR_bkl", "CUP_30Rnd_556x45_XM8", "CUP_30Rnd_Subsonic_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_762x39_AK47_TK_M", "CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_762x39_AK103_bakelite_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_Sa58_M_TracerR", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_20Rnd_762x51_B_SCAR_wdl", "CUP_30Rnd_545x39_AK74M_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15", "CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR", "CUP_30Rnd_762x39_AK47_bakelite_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_camo_M", "CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR", "CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_762x51_2_B_SCAR", "CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_Subsonic_545x39_AK74_plum_M", "CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_hex", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR", "CUP_30Rnd_Sa58_M_TracerY", "CUP_60Rnd_545x39_AK74M_M", "30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36_camo", "CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR", "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl", "CUP_20Rnd_Subsonic_545x39_AKSU_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_XM8", "CUP_30Rnd_762x51_2_B_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_20Rnd_762x51_B_SCAR_wdl", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl", "CUP_20Rnd_762x51_B_SCAR", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_hex", "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_762x39_AK47_TK_M", "CUP_30Rnd_545x39_AK74M_camo_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", "CUP_50Rnd_762x51_B_SCAR", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR", "CUP_50Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_556x45_Stanag_Mk16_woodland", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex", "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_20Rnd_556x45_Stanag", "CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR", "CUP_20Rnd_Subsonic_545x39_AKSU_M", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_30Rnd_Sa58_M", "CUP_30Rnd_556x45_Stanag_Mk16_black", "CUP_30Rnd_Sa58_M_TracerR", "CUP_30Rnd_556x45_G36_camo", "CUP_60Rnd_556x45_SureFire", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_Subsonic_545x39_AK74M_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_762x51_B_SCAR_wdl", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M", "CUP_50Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_20Rnd_762x51_B_SCAR_bkl", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Red_Tracer_556x45_XM8", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_556x45_G36_camo", "CUP_30Rnd_556x45_Stanag", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_wdl", "CUP_30Rnd_Sa58_M_TracerG", "CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_20Rnd_Subsonic_545x39_AKSU_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_556x45_XM8", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_XM8", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_762x39_AK47_bakelite_M", "CUP_20Rnd_545x39_AKSU_M", "CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR", "CUP_30Rnd_556x45_Stanag_L85", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR", "CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_30Rnd_762x51_2_B_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", "CUP_20Rnd_762x51_FNFAL_M", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_762x51_1_B_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_30Rnd_762x39_AK103_bakelite_M", "CUP_30Rnd_762x39_AK47_TK_M", "CUP_30Rnd_556x45_Stanag_Mk16", "30Rnd_556x45_Stanag_red", "CUP_30Rnd_Sa58_M", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_30Rnd_762x51_1_B_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl", "CUP_20Rnd_762x51_B_SCAR_bkl", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_556x45_Stanag", "CUP_10Rnd_762x39_SaigaMk03_M", "CUP_20Rnd_762x51_B_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_762x39_AMD63_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_60Rnd_545x39_AK74M_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl", "CUP_50Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_30Rnd_556x45_Emag", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_556x45_Stanag_L85", "CUP_30Rnd_556x45_G36_hex", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl", "CUP_30Rnd_556x45_XM8", "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_30Rnd_545x39_AK74_plum_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_camo_M", "CUP_30Rnd_545x39_AK74_plum_M", "30Rnd_556x45_Stanag_red", "CUP_30Rnd_Sa58_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_Sa58_M_TracerG", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_20Rnd_556x45_Stanag", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_30Rnd_Sa58_M_TracerG", "CUP_10Rnd_762x39_SaigaMk03_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_50Rnd_762x51_B_SCAR", "CUP_20Rnd_545x39_AKSU_M", "30Rnd_556x45_Stanag_red", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_20Rnd_Subsonic_545x39_AKSU_M", "CUP_60Rnd_545x39_AK74M_M", "CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_762x39_AK47_bakelite_M", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_camo", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR", "CUP_30Rnd_556x45_Stanag_Mk16_black", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_XM8", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8", "CUP_30Rnd_556x45_Stanag_L85", "CUP_30Rnd_762x51_2_B_SCAR", "CUP_20Rnd_545x39_AKSU_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_XM8", "CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR", "CUP_50Rnd_762x51_B_SCAR", "CUP_30Rnd_556x45_Stanag_Mk16_black", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_camo", "CUP_30Rnd_Sa58_M_TracerY", "CUP_30Rnd_556x45_G36_hex", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_Subsonic_545x39_AK74_plum_M", "CUP_30Rnd_556x45_XM8", "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M", "30Rnd_556x45_Stanag_red", "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "30Rnd_556x45_Stanag", "CUP_20Rnd_762x51_B_SCAR_wdl", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M", "CUP_50Rnd_762x51_B_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex", "CUP_20Rnd_545x39_AKSU_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_10Rnd_762x39_SaigaMk03_M", "CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR", "CUP_30Rnd_556x45_G36_camo", "CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR", "CUP_30Rnd_762x39_AK47_TK_M", "CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR", "CUP_20Rnd_762x51_B_SCAR_bkl", "CUP_30Rnd_556x45_Stanag_Mk16_black", "CUP_30Rnd_762x39_AK103_bakelite_M", "CUP_30Rnd_Subsonic_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_545x39_AK74M_camo_M", "CUP_20Rnd_762x39_AMD63_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_556x45_G36_hex", "CUP_30Rnd_Subsonic_545x39_AK74M_M", "CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo", "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_60Rnd_556x45_SureFire", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_762x39_AK103_bakelite_M", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_TE1_Green_Tracer_556x45_XM8", "CUP_30Rnd_762x51_2_B_SCAR", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M", "CUP_30Rnd_556x45_G36_wdl", "CUP_10Rnd_762x39_SaigaMk03_M", "CUP_30Rnd_Subsonic_545x39_AK74_plum_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_20Rnd_762x39_AMD63_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl", "CUP_30Rnd_556x45_Stanag_Mk16_woodland", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_762x39_AK47_bakelite_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_762x51_B_SCAR_wdl", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_30Rnd_556x45_G36_wdl", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 3,39%
			muzzle_snds_H            = 3,39%
			muzzle_snds_H_khk_F      = 3,39%
			muzzle_snds_H_snd_F      = 3,39%
			muzzle_snds_58_blk_F     = 3,39%
			muzzle_snds_m_khk_F      = 3,39%
			muzzle_snds_m_snd_F      = 3,39%
			muzzle_snds_58_wdm_F     = 3,39%
			muzzle_snds_65_TI_blk_F  = 3,39%
			muzzle_snds_65_TI_hex_F  = 3,39%
			muzzle_snds_65_TI_ghex_F = 3,39%
			muzzle_snds_H_MG_blk_F   = 3,39%
			muzzle_snds_H_MG_khk_F   = 3,39%
			optic_Arco               = 3,39%
			optic_Arco_blk_F         = 3,39%
			optic_Arco_ghex_F        = 3,39%
			optic_Hamr               = 3,39%
			optic_Hamr_khk_F         = 3,39%
			optic_Holosight          = 3,39%
			optic_Holosight_blk_F    = 3,39%
			optic_Holosight_khk_F    = 3,39%
			acc_flashlight           = 3,39%
			acc_pointer_IR           = 3,39%
			optic_MRCO               = 3,39%
			optic_DMS                = 3,39%
			optic_DMS_ghex_F         = 3,39%
			optic_ERCO_blk_F         = 3,39%
			optic_ERCO_khk_F         = 3,39%
			optic_ERCO_snd_F         = 3,39%
			optic_NVS                = 1,69%
		*/
		RifleAttachments[] = {"optic_ERCO_snd_F", "muzzle_snds_58_blk_F", "acc_flashlight", "muzzle_snds_58_blk_F", "optic_Arco", "acc_pointer_IR", "acc_pointer_IR", "optic_Holosight_khk_F", "optic_ERCO_blk_F", "muzzle_snds_H", "muzzle_snds_65_TI_hex_F", "optic_Hamr_khk_F", "muzzle_snds_H_snd_F", "optic_ERCO_snd_F", "optic_Hamr", "muzzle_snds_58_wdm_F", "optic_DMS", "muzzle_snds_H_MG_blk_F", "muzzle_snds_H", "acc_flashlight", "optic_MRCO", "muzzle_snds_M", "muzzle_snds_M", "optic_ERCO_khk_F", "muzzle_snds_65_TI_hex_F", "optic_Arco_ghex_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_m_khk_F", "optic_Holosight_khk_F", "optic_Arco_blk_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_65_TI_blk_F", "optic_ERCO_blk_F", "optic_Holosight", "optic_ERCO_khk_F", "optic_DMS", "optic_NVS", "muzzle_snds_H_khk_F", "optic_MRCO", "optic_Hamr", "muzzle_snds_m_snd_F", "optic_Holosight", "optic_Arco", "optic_Holosight_blk_F", "optic_Arco_ghex_F", "optic_Holosight_blk_F", "optic_DMS_ghex_F", "muzzle_snds_m_khk_F", "optic_Arco_blk_F", "muzzle_snds_65_TI_blk_F", "optic_DMS_ghex_F", "muzzle_snds_m_snd_F", "muzzle_snds_H_khk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_H_snd_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_58_wdm_F", "optic_Hamr_khk_F"};

		/*
			Percental Item Spawn Chances of CUP_Attachments:

			CUP_muzzle_PBS4                         = 1,92%
			CUP_muzzle_Bizon                        = 1,92%
			CUP_muzzle_snds_M110                    = 1,92%
			CUP_muzzle_snds_M14                     = 1,92%
			CUP_muzzle_snds_G36_black               = 1,92%
			CUP_muzzle_snds_G36_desert              = 1,92%
			CUP_muzzle_snds_L85                     = 1,92%
			CUP_muzzle_snds_M16_camo                = 1,92%
			CUP_muzzle_snds_M16                     = 1,92%
			CUP_muzzle_snds_SCAR_L                  = 1,92%
			CUP_muzzle_mfsup_SCAR_L                 = 1,92%
			CUP_muzzle_snds_SCAR_H                  = 1,92%
			CUP_muzzle_mfsup_SCAR_H                 = 1,92%
			CUP_muzzle_snds_XM8                     = 1,92%
			CUP_optic_PSO_1                         = 1,92%
			CUP_optic_PSO_3                         = 1,92%
			CUP_optic_Kobra                         = 1,92%
			CUP_optic_GOSHAWK                       = 1,92%
			CUP_optic_NSPU                          = 1,92%
			CUP_optic_PechenegScope                 = 1,92%
			CUP_optic_MAAWS_Scope                   = 1,92%
			CUP_optic_SMAW_Scope                    = 1,92%
			CUP_optic_LeupoldMk4                    = 1,92%
			CUP_optic_HoloBlack                     = 1,92%
			CUP_optic_HoloWdl                       = 1,92%
			CUP_optic_HoloDesert                    = 1,92%
			CUP_optic_Eotech533                     = 1,92%
			CUP_optic_CompM4                        = 1,92%
			CUP_optic_SUSAT                         = 1,92%
			CUP_optic_ACOG                          = 1,92%
			CUP_optic_CWS                           = 1,92%
			CUP_optic_Leupold_VX3                   = 1,92%
			CUP_optic_AN_PVS_10                     = 1,92%
			CUP_optic_CompM2_Black                  = 1,92%
			CUP_optic_CompM2_Woodland               = 1,92%
			CUP_optic_CompM2_Woodland2              = 1,92%
			CUP_optic_CompM2_Desert                 = 1,92%
			CUP_optic_RCO                           = 1,92%
			CUP_optic_RCO_desert                    = 1,92%
			CUP_optic_LeupoldM3LR                   = 1,92%
			CUP_optic_LeupoldMk4_10x40_LRT_Desert   = 1,92%
			CUP_optic_LeupoldMk4_10x40_LRT_Woodland = 1,92%
			CUP_optic_ElcanM145                     = 1,92%
			CUP_optic_LeupoldMk4_CQ_T               = 1,92%
			CUP_optic_ELCAN_SpecterDR               = 1,92%
			CUP_optic_LeupoldMk4_MRT_tan            = 1,92%
			CUP_optic_SB_11_4x20_PM                 = 1,92%
			CUP_optic_ZDDot                         = 1,92%
			CUP_optic_MRad                          = 1,92%
			CUP_optic_TrijiconRx01_desert           = 1,92%
			CUP_optic_TrijiconRx01_black            = 1,92%
			CUP_optic_AN_PVS_4                      = 1,92%
		*/
		CUP_Attachments[] = {"CUP_optic_MRad", "CUP_optic_Kobra", "CUP_optic_MAAWS_Scope", "CUP_optic_ZDDot", "CUP_optic_CompM2_Woodland2", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "CUP_optic_GOSHAWK", "CUP_optic_SB_11_4x20_PM", "CUP_optic_ACOG", "CUP_optic_Leupold_VX3", "CUP_optic_RCO", "CUP_optic_CompM2_Black", "CUP_muzzle_snds_G36_black", "CUP_optic_CompM2_Desert", "CUP_optic_CWS", "CUP_optic_ZDDot", "CUP_optic_CompM2_Black", "CUP_optic_CWS", "CUP_optic_NSPU", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "CUP_optic_LeupoldM3LR", "CUP_muzzle_snds_M110", "CUP_muzzle_snds_M14", "CUP_muzzle_snds_M16", "CUP_muzzle_snds_M16", "CUP_muzzle_Bizon", "CUP_muzzle_PBS4", "CUP_optic_TrijiconRx01_desert", "CUP_muzzle_Bizon", "CUP_optic_Eotech533", "CUP_optic_GOSHAWK", "CUP_muzzle_snds_XM8", "CUP_optic_Kobra", "CUP_optic_SUSAT", "CUP_optic_CompM2_Woodland", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "CUP_optic_CompM4", "CUP_optic_HoloBlack", "CUP_muzzle_snds_M16", "CUP_optic_RCO", "CUP_optic_SB_11_4x20_PM", "CUP_optic_HoloWdl", "CUP_muzzle_snds_G36_desert", "CUP_optic_RCO_desert", "CUP_optic_TrijiconRx01_black", "CUP_optic_PechenegScope", "CUP_muzzle_snds_SCAR_H", "CUP_optic_CompM2_Black", "CUP_optic_CompM2_Woodland2", "CUP_optic_LeupoldMk4", "CUP_optic_LeupoldMk4_MRT_tan", "CUP_optic_ElcanM145", "CUP_optic_LeupoldMk4_CQ_T", "CUP_optic_RCO", "CUP_muzzle_snds_M16_camo", "CUP_optic_PSO_1", "CUP_optic_RCO", "CUP_optic_MRad", "CUP_muzzle_mfsup_SCAR_L", "CUP_optic_ELCAN_SpecterDR", "CUP_muzzle_mfsup_SCAR_L", "CUP_optic_CompM2_Woodland", "CUP_muzzle_mfsup_SCAR_H", "CUP_optic_SB_11_4x20_PM", "CUP_optic_ZDDot", "CUP_optic_TrijiconRx01_black", "CUP_optic_SMAW_Scope", "CUP_optic_PSO_3", "CUP_optic_AN_PVS_10", "CUP_muzzle_snds_G36_black", "CUP_muzzle_PBS4", "CUP_optic_PSO_1", "CUP_optic_MAAWS_Scope", "CUP_optic_ElcanM145", "CUP_optic_CompM2_Woodland", "CUP_optic_ZDDot", "CUP_optic_LeupoldM3LR", "CUP_muzzle_snds_L85", "CUP_optic_NSPU", "CUP_optic_Kobra", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "CUP_optic_PSO_3", "CUP_optic_AN_PVS_4", "CUP_optic_Leupold_VX3", "CUP_optic_ACOG", "CUP_optic_Kobra", "CUP_optic_HoloDesert", "CUP_optic_CompM4", "CUP_optic_MRad", "CUP_muzzle_snds_M14", "CUP_optic_HoloBlack", "CUP_optic_LeupoldMk4_MRT_tan", "CUP_optic_CompM2_Desert", "CUP_optic_GOSHAWK", "CUP_muzzle_snds_L85", "CUP_optic_SUSAT", "CUP_optic_HoloDesert", "CUP_muzzle_snds_XM8", "CUP_muzzle_snds_M16_camo", "CUP_muzzle_snds_SCAR_H", "CUP_muzzle_snds_SCAR_L", "CUP_optic_LeupoldM3LR", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "CUP_optic_Eotech533", "CUP_optic_AN_PVS_10", "CUP_optic_CompM4", "CUP_optic_HoloDesert", "CUP_muzzle_snds_SCAR_L", "CUP_optic_TrijiconRx01_black", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "CUP_optic_NSPU", "CUP_muzzle_snds_G36_desert", "CUP_muzzle_snds_G36_black", "CUP_muzzle_snds_G36_desert", "CUP_muzzle_snds_SCAR_L", "CUP_optic_CWS", "CUP_optic_ELCAN_SpecterDR", "CUP_optic_PechenegScope", "CUP_optic_PSO_1", "CUP_optic_ACOG", "CUP_optic_TrijiconRx01_desert", "CUP_optic_MAAWS_Scope", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "CUP_optic_ELCAN_SpecterDR", "CUP_muzzle_snds_G36_black", "CUP_optic_CWS", "CUP_optic_GOSHAWK", "CUP_optic_Eotech533", "CUP_muzzle_snds_SCAR_L", "CUP_muzzle_mfsup_SCAR_H", "CUP_muzzle_mfsup_SCAR_L", "CUP_optic_HoloWdl", "CUP_optic_NSPU", "CUP_optic_CompM2_Woodland", "CUP_muzzle_PBS4", "CUP_muzzle_snds_G36_desert", "CUP_optic_LeupoldMk4_MRT_tan", "CUP_muzzle_snds_M14", "CUP_optic_CompM2_Desert", "CUP_optic_ELCAN_SpecterDR", "CUP_optic_Eotech533", "CUP_muzzle_snds_XM8", "CUP_optic_AN_PVS_4", "CUP_muzzle_mfsup_SCAR_H", "CUP_optic_LeupoldM3LR", "CUP_optic_HoloWdl", "CUP_optic_LeupoldMk4", "CUP_muzzle_snds_M110", "CUP_optic_ElcanM145", "CUP_optic_SMAW_Scope", "CUP_optic_HoloBlack", "CUP_muzzle_snds_L85", "CUP_muzzle_mfsup_SCAR_L", "CUP_optic_AN_PVS_10", "CUP_optic_LeupoldMk4_CQ_T", "CUP_optic_PSO_3", "CUP_optic_RCO_desert", "CUP_optic_MRad", "CUP_optic_AN_PVS_4", "CUP_optic_SMAW_Scope", "CUP_optic_AN_PVS_4", "CUP_optic_SUSAT", "CUP_optic_ACOG", "CUP_optic_HoloWdl", "CUP_optic_MAAWS_Scope", "CUP_muzzle_snds_SCAR_H", "CUP_optic_CompM2_Desert", "CUP_optic_TrijiconRx01_desert", "CUP_muzzle_snds_SCAR_H", "CUP_optic_RCO_desert", "CUP_optic_HoloBlack", "CUP_muzzle_snds_M110", "CUP_optic_CompM2_Woodland2", "CUP_optic_CompM2_Black", "CUP_optic_CompM2_Woodland2", "CUP_optic_LeupoldMk4", "CUP_muzzle_snds_M110", "CUP_optic_AN_PVS_10", "CUP_optic_TrijiconRx01_black", "CUP_muzzle_snds_M16", "CUP_optic_LeupoldMk4", "CUP_optic_PSO_3", "CUP_optic_HoloDesert", "CUP_muzzle_Bizon", "CUP_optic_LeupoldMk4_MRT_tan", "CUP_optic_RCO_desert", "CUP_muzzle_PBS4", "CUP_optic_PechenegScope", "CUP_optic_ElcanM145", "CUP_muzzle_mfsup_SCAR_H", "CUP_optic_TrijiconRx01_desert", "CUP_muzzle_snds_XM8", "CUP_muzzle_snds_M16_camo", "CUP_optic_SMAW_Scope", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "CUP_optic_CompM4", "CUP_optic_LeupoldMk4_CQ_T", "CUP_optic_SB_11_4x20_PM", "CUP_muzzle_snds_M14", "CUP_optic_SUSAT", "CUP_optic_LeupoldMk4_CQ_T", "CUP_muzzle_snds_L85", "CUP_optic_PechenegScope", "CUP_muzzle_snds_M16_camo", "CUP_optic_Leupold_VX3", "CUP_optic_Leupold_VX3", "CUP_muzzle_Bizon", "CUP_optic_PSO_1"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F = 20,00%
			arifle_MX_SW_F       = 20,00%
			Exile_Weapon_RPK     = 20,00%
			Exile_Weapon_PK      = 20,00%
			Exile_Weapon_PKP     = 20,00%
		*/
		LMG[] = {"arifle_MX_SW_Black_F", "Exile_Weapon_RPK", "arifle_MX_SW_F", "Exile_Weapon_PK", "Exile_Weapon_PKP"};

		/*
			Percental Item Spawn Chances of CUP_LMG:

			CUP_lmg_L7A2      = 10,26%
			CUP_lmg_L110A1    = 7,69%
			CUP_lmg_M240      = 10,26%
			CUP_lmg_M249      = 5,13%
			CUP_lmg_M249_para = 5,13%
			CUP_lmg_Mk48_des  = 10,26%
			CUP_lmg_Mk48_wdl  = 10,26%
			CUP_lmg_PKM       = 7,69%
			CUP_lmg_UK59      = 25,64%
			CUP_lmg_Pecheneg  = 7,69%
		*/
		CUP_LMG[] = {"CUP_lmg_M249", "CUP_lmg_UK59", "CUP_lmg_UK59", "CUP_lmg_UK59", "CUP_lmg_Mk48_des", "CUP_lmg_Mk48_wdl", "CUP_lmg_UK59", "CUP_lmg_M240", "CUP_lmg_Pecheneg", "CUP_lmg_Mk48_des", "CUP_lmg_PKM", "CUP_lmg_Mk48_des", "CUP_lmg_Mk48_wdl", "CUP_lmg_M240", "CUP_lmg_M249_para", "CUP_lmg_L7A2", "CUP_lmg_UK59", "CUP_lmg_UK59", "CUP_lmg_L7A2", "CUP_lmg_L110A1", "CUP_lmg_Mk48_des", "CUP_lmg_Mk48_wdl", "CUP_lmg_M240", "CUP_lmg_UK59", "CUP_lmg_PKM", "CUP_lmg_L110A1", "CUP_lmg_L110A1", "CUP_lmg_M249", "CUP_lmg_L7A2", "CUP_lmg_Pecheneg", "CUP_lmg_M240", "CUP_lmg_Pecheneg", "CUP_lmg_M249_para", "CUP_lmg_PKM", "CUP_lmg_UK59", "CUP_lmg_UK59", "CUP_lmg_UK59", "CUP_lmg_Mk48_wdl", "CUP_lmg_L7A2"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 11,11%
			100Rnd_65x39_caseless_mag_Tracer      = 16,67%
			130Rnd_338_Mag                        = 27,78%
			150Rnd_93x64_Mag                      = 27,78%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 5,56%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 5,56%
			Exile_Magazine_100Rnd_762x54_PK_Green = 5,56%
		*/
		LMGAmmo[] = {"100Rnd_65x39_caseless_mag_Tracer", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_100Rnd_762x54_PK_Green", "Exile_Magazine_45Rnd_545x39_RPK_Green", "150Rnd_93x64_Mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "Exile_Magazine_75Rnd_545x39_RPK_Green", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of CUP_LMGAmmo:

			CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M  = 4,42%
			CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M    = 4,42%
			CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M  = 4,42%
			CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M = 4,42%
			CUP_200Rnd_TE4_Red_Tracer_556x45_M249           = 4,42%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249        = 4,42%
			CUP_200Rnd_TE1_Red_Tracer_556x45_M249           = 4,42%
			CUP_100Rnd_TE4_Green_Tracer_556x45_M249         = 4,42%
			CUP_100Rnd_TE4_Red_Tracer_556x45_M249           = 4,42%
			CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249        = 4,42%
			CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1       = 4,42%
			CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1         = 4,42%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1      = 4,42%
			CUP_30Rnd_556x45_Stanag                         = 4,42%
			CUP_30Rnd_556x45_G36                            = 4,42%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36           = 4,42%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36             = 4,42%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36          = 4,42%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M    = 4,42%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M      = 4,42%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M   = 4,42%
			CUP_50Rnd_UK59_762x54R_Tracer                   = 7,08%
		*/
		CUP_LMGAmmo[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_30Rnd_556x45_G36", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_30Rnd_556x45_G36", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_30Rnd_556x45_Stanag", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_30Rnd_556x45_G36", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_30Rnd_556x45_Stanag", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_30Rnd_556x45_Stanag", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F      = 19,23%
			srifle_EBR_F         = 19,23%
			srifle_GM6_F         = 0,64%
			srifle_LRR_F         = 0,64%
			srifle_LRR_tna_F     = 0,64%
			srifle_GM6_ghex_F    = 0,64%
			srifle_DMR_07_blk_F  = 19,23%
			srifle_DMR_07_hex_F  = 19,23%
			srifle_DMR_07_ghex_F = 19,23%
			Exile_Weapon_m107    = 0,64%
			Exile_Weapon_ksvk    = 0,64%
		*/
		Snipers[] = {"srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_01_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "Exile_Weapon_m107", "srifle_DMR_07_ghex_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_EBR_F", "srifle_DMR_01_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_GM6_ghex_F", "srifle_DMR_07_ghex_F", "srifle_EBR_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_LRR_F", "srifle_DMR_01_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_01_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_EBR_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_DMR_01_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_GM6_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "Exile_Weapon_ksvk", "srifle_DMR_01_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "srifle_EBR_F", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_blk_F", "srifle_LRR_tna_F", "srifle_DMR_07_hex_F", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_EBR_F"};

		/*
			Percental Item Spawn Chances of CUP_Snipers:

			CUP_srifle_AWM_des     = 1,18%
			CUP_srifle_AWM_wdl     = 1,18%
			CUP_srifle_CZ750       = 11,76%
			CUP_srifle_DMR         = 4,71%
			CUP_srifle_CZ550       = 17,65%
			CUP_srifle_LeeEnfield  = 11,76%
			CUP_srifle_M14         = 1,18%
			CUP_srifle_Mk12SPR     = 9,41%
			CUP_srifle_M24_des     = 7,06%
			CUP_srifle_M24_wdl     = 7,06%
			CUP_srifle_M40A3       = 7,06%
			CUP_srifle_M107_Base   = 0,39%
			CUP_srifle_M110        = 4,71%
			CUP_srifle_SVD         = 3,53%
			CUP_srifle_SVD_des     = 3,53%
			CUP_srifle_ksvk        = 0,39%
			CUP_srifle_VSSVintorez = 7,06%
			CUP_srifle_AS50        = 0,39%
		*/
		CUP_Snipers[] = {"CUP_srifle_CZ550", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_DMR", "CUP_srifle_DMR", "CUP_srifle_CZ750", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ750", "CUP_srifle_M24_des", "CUP_srifle_M40A3", "CUP_srifle_M110", "CUP_srifle_LeeEnfield", "CUP_srifle_LeeEnfield", "CUP_srifle_SVD", "CUP_srifle_CZ550", "CUP_srifle_CZ750", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_DMR", "CUP_srifle_CZ750", "CUP_srifle_VSSVintorez", "CUP_srifle_SVD", "CUP_srifle_M24_wdl", "CUP_srifle_M24_wdl", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_VSSVintorez", "CUP_srifle_Mk12SPR", "CUP_srifle_M24_wdl", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_M14", "CUP_srifle_AWM_des", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_wdl", "CUP_srifle_LeeEnfield", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_des", "CUP_srifle_DMR", "CUP_srifle_SVD", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ550", "CUP_srifle_VSSVintorez", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_M24_wdl", "CUP_srifle_Mk12SPR", "CUP_srifle_LeeEnfield", "CUP_srifle_M110", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_M110", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_AWM_wdl", "CUP_srifle_CZ750", "CUP_srifle_CZ750", "CUP_srifle_M40A3", "CUP_srifle_M110", "CUP_srifle_CZ750", "CUP_srifle_M24_des", "CUP_srifle_M24_des", "CUP_srifle_Mk12SPR", "CUP_srifle_M24_wdl", "CUP_srifle_SVD", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_SVD", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_Mk12SPR", "CUP_srifle_SVD_des", "CUP_srifle_LeeEnfield", "CUP_srifle_VSSVintorez", "CUP_srifle_Mk12SPR", "CUP_srifle_M24_wdl", "CUP_srifle_Mk12SPR", "CUP_srifle_M40A3", "CUP_srifle_DMR", "CUP_srifle_SVD", "CUP_srifle_M24_des", "CUP_srifle_DMR", "CUP_srifle_CZ750", "CUP_srifle_SVD_des", "CUP_srifle_M24_des", "CUP_srifle_SVD_des", "CUP_srifle_M40A3", "CUP_srifle_Mk12SPR", "CUP_srifle_LeeEnfield", "CUP_srifle_M40A3", "CUP_srifle_CZ750", "CUP_srifle_SVD", "CUP_srifle_M110", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_VSSVintorez", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ750", "CUP_srifle_VSSVintorez", "CUP_srifle_AWM_des", "CUP_srifle_M24_des", "CUP_srifle_SVD_des", "CUP_srifle_M14", "CUP_srifle_CZ550", "CUP_srifle_M110", "CUP_srifle_CZ550", "CUP_srifle_AWM_wdl", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ550", "CUP_srifle_SVD_des", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_wdl", "CUP_srifle_CZ550", "CUP_srifle_M40A3", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_VSSVintorez", "CUP_srifle_M24_des", "CUP_srifle_DMR", "CUP_srifle_M24_wdl", "CUP_srifle_M24_des", "CUP_srifle_VSSVintorez", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_wdl", "CUP_srifle_DMR", "CUP_srifle_DMR", "CUP_srifle_M110", "CUP_srifle_M110", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_Mk12SPR", "CUP_srifle_Mk12SPR", "CUP_srifle_Mk12SPR", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_des", "CUP_srifle_LeeEnfield", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_M110", "CUP_srifle_CZ750", "CUP_srifle_M24_wdl", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_Mk12SPR", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_des", "CUP_srifle_LeeEnfield", "CUP_srifle_Mk12SPR", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_AWM_wdl", "CUP_srifle_CZ750", "CUP_srifle_M24_des", "CUP_srifle_M24_des", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ750", "CUP_srifle_VSSVintorez", "CUP_srifle_VSSVintorez", "CUP_srifle_DMR", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ550", "CUP_srifle_M24_des", "CUP_srifle_CZ750", "CUP_srifle_VSSVintorez", "CUP_srifle_VSSVintorez", "CUP_srifle_M24_wdl", "CUP_srifle_AS50", "CUP_srifle_M24_wdl", "CUP_srifle_VSSVintorez", "CUP_srifle_SVD", "CUP_srifle_LeeEnfield", "CUP_srifle_SVD_des", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_M110", "CUP_srifle_DMR", "CUP_srifle_M24_des", "CUP_srifle_Mk12SPR", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_M40A3", "CUP_srifle_CZ750", "CUP_srifle_M24_wdl", "CUP_srifle_VSSVintorez", "CUP_srifle_M110", "CUP_srifle_M40A3", "CUP_srifle_LeeEnfield", "CUP_srifle_M24_des", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ550", "CUP_srifle_M40A3", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ750", "CUP_srifle_CZ750", "CUP_srifle_M24_wdl", "CUP_srifle_M24_des", "CUP_srifle_M107_Base", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ550", "CUP_srifle_M24_wdl", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_CZ750", "CUP_srifle_M24_wdl", "CUP_srifle_LeeEnfield", "CUP_srifle_LeeEnfield", "CUP_srifle_M110", "CUP_srifle_M40A3", "CUP_srifle_DMR", "CUP_srifle_M24_wdl", "CUP_srifle_CZ550", "CUP_srifle_SVD_des", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ750", "CUP_srifle_SVD_des", "CUP_srifle_CZ750", "CUP_srifle_M24_des", "CUP_srifle_CZ550", "CUP_srifle_LeeEnfield", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_M14", "CUP_srifle_M40A3", "CUP_srifle_LeeEnfield", "CUP_srifle_CZ750", "CUP_srifle_CZ750", "CUP_srifle_Mk12SPR", "CUP_srifle_SVD_des", "CUP_srifle_SVD", "CUP_srifle_Mk12SPR", "CUP_srifle_CZ550", "CUP_srifle_CZ750", "CUP_srifle_CZ550", "CUP_srifle_CZ550", "CUP_srifle_ksvk", "CUP_srifle_M40A3", "CUP_srifle_Mk12SPR", "CUP_srifle_AWM_des"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_KSVK = 4,17%
			5Rnd_127x108_Mag                      = 4,17%
			Exile_Magazine_10Rnd_127x99_m107      = 4,17%
			Exile_Magazine_5Rnd_127x108_KSVK      = 4,17%
			7Rnd_408_Mag                          = 4,17%
			10Rnd_762x54_Mag                      = 23,61%
			20Rnd_762x51_Mag                      = 26,39%
			20Rnd_650x39_Cased_Mag_F              = 29,17%
		*/
		SniperAmmo[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag"};

		/*
			Percental Item Spawn Chances of CUP_SniperAmmo:

			CUP_5Rnd_86x70_L115A1                   = 2,16%
			CUP_10Rnd_762x51_CZ750_Tracer           = 10,79%
			CUP_10Rnd_762x51_CZ750                  = 7,19%
			CUP_20Rnd_762x51_DMR                    = 3,60%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR  = 3,60%
			CUP_20Rnd_TE1_Red_Tracer_762x51_DMR     = 3,60%
			CUP_20Rnd_TE1_Green_Tracer_762x51_DMR   = 3,60%
			CUP_20Rnd_TE1_White_Tracer_762x51_DMR   = 3,60%
			20Rnd_762x51_Mag                        = 3,60%
			CUP_5x_22_LR_17_HMR_M                   = 14,39%
			CUP_10x_303_M                           = 3,60%
			CUP_20Rnd_556x45_Stanag                 = 0,72%
			CUP_30Rnd_556x45_Stanag                 = 0,72%
			CUP_30Rnd_556x45_Emag                   = 0,72%
			30Rnd_556x45_Stanag                     = 0,72%
			30Rnd_556x45_Stanag_Tracer_Red          = 0,72%
			30Rnd_556x45_Stanag_Tracer_Green        = 0,72%
			30Rnd_556x45_Stanag_Tracer_Yellow       = 0,72%
			30Rnd_556x45_Stanag_red                 = 0,72%
			30Rnd_556x45_Stanag_green               = 0,72%
			CUP_5Rnd_762x51_M24                     = 7,19%
			CUP_20Rnd_762x51_B_M110                 = 2,88%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110 = 2,88%
			CUP_20Rnd_TE1_Red_Tracer_762x51_M110    = 2,88%
			CUP_20Rnd_TE1_Green_Tracer_762x51_M110  = 2,88%
			CUP_20Rnd_TE1_White_Tracer_762x51_M110  = 2,88%
			CUP_10Rnd_762x54_SVD_M                  = 3,60%
			CUP_10Rnd_9x39_SP5_VSS_M                = 3,60%
			CUP_20Rnd_9x39_SP5_VSS_M                = 2,88%
			CUP_30Rnd_9x39_SP5_VIKHR_M              = 2,16%
		*/
		CUP_SniperAmmo[] = {"CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_762x54_SVD_M", "CUP_20Rnd_762x51_B_M110", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_5x_22_LR_17_HMR_M", "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_762x51_CZ750", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_20Rnd_762x51_B_M110", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_762x51_B_M110", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_5Rnd_86x70_L115A1", "CUP_20Rnd_556x45_Stanag", "CUP_10x_303_M", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_10Rnd_762x51_CZ750", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_10x_303_M", "CUP_5x_22_LR_17_HMR_M", "CUP_5Rnd_762x51_M24", "30Rnd_556x45_Stanag", "CUP_10Rnd_762x51_CZ750", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "CUP_10x_303_M", "20Rnd_762x51_Mag", "CUP_10x_303_M", "CUP_5x_22_LR_17_HMR_M", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_20Rnd_762x51_B_M110", "CUP_5x_22_LR_17_HMR_M", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_30Rnd_9x39_SP5_VIKHR_M", "CUP_10Rnd_762x54_SVD_M", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_5x_22_LR_17_HMR_M", "20Rnd_762x51_Mag", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_10Rnd_762x51_CZ750", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "CUP_20Rnd_762x51_DMR", "CUP_30Rnd_556x45_Emag", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_10Rnd_762x54_SVD_M", "CUP_5x_22_LR_17_HMR_M", "30Rnd_556x45_Stanag_red", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "CUP_30Rnd_556x45_Stanag", "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "20Rnd_762x51_Mag", "CUP_5x_22_LR_17_HMR_M", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "CUP_10Rnd_762x54_SVD_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_10x_303_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_5Rnd_762x51_M24", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_5x_22_LR_17_HMR_M", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "30Rnd_556x45_Stanag_green", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_5x_22_LR_17_HMR_M", "CUP_10Rnd_762x51_CZ750", "20Rnd_762x51_Mag", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_5x_22_LR_17_HMR_M", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_5Rnd_762x51_M24", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_762x51_CZ750", "CUP_20Rnd_762x51_DMR", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_5Rnd_86x70_L115A1", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_5x_22_LR_17_HMR_M", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_30Rnd_9x39_SP5_VIKHR_M", "20Rnd_762x51_Mag", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_5x_22_LR_17_HMR_M", "CUP_5x_22_LR_17_HMR_M", "CUP_5x_22_LR_17_HMR_M", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_30Rnd_9x39_SP5_VIKHR_M", "CUP_5x_22_LR_17_HMR_M", "CUP_5Rnd_86x70_L115A1", "CUP_20Rnd_762x51_DMR"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11,11%
			muzzle_snds_B_snd_F = 11,11%
			muzzle_snds_B       = 11,11%
			optic_LRPS          = 11,11%
			optic_LRPS_ghex_F   = 11,11%
			optic_LRPS_tna_F    = 11,11%
			optic_SOS           = 11,11%
			optic_SOS_khk_F     = 11,11%
			optic_DMS           = 11,11%
		*/
		SniperAttachments[] = {"optic_SOS_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_B_khk_F", "optic_SOS", "muzzle_snds_B", "optic_LRPS_ghex_F", "optic_LRPS", "optic_DMS", "optic_LRPS_tna_F"};

		/*
			Percental Item Spawn Chances of CUP_GrenadeLaunchers:

			CUP_glaunch_M79  = 66,67%
			CUP_glaunch_Mk13 = 33,33%
		*/
		CUP_GrenadeLaunchers[] = {"CUP_glaunch_M79", "CUP_glaunch_M79", "CUP_glaunch_Mk13"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 16,67%
			srifle_DMR_03_khaki_F    = 16,67%
			srifle_DMR_03_tan_F      = 16,67%
			srifle_DMR_03_woodland_F = 16,67%
			srifle_DMR_06_camo_F     = 16,67%
			srifle_DMR_06_olive_F    = 16,67%
		*/
		DLCRifles[] = {"srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_F", "srifle_DMR_03_tan_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_olive_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_khaki_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

		*/
		DLCAmmo[] = {};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14,29%
			optic_AMS_khk = 14,29%
			optic_AMS_snd = 14,29%
			optic_KHS_blk = 14,29%
			optic_KHS_hex = 14,29%
			optic_KHS_old = 14,29%
			optic_KHS_tan = 14,29%
		*/
		DLCOptics[] = {"optic_AMS", "optic_KHS_tan", "optic_KHS_blk", "optic_AMS_snd", "optic_AMS_khk", "optic_KHS_old", "optic_KHS_hex"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_B = 100,00%
		*/
		DLCSupressor[] = {"muzzle_snds_B"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

		*/
		EpicWeapons[] = {};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11,11%
			bipod_03_F_blk = 11,11%
			bipod_02_F_tan = 11,11%
			bipod_02_F_hex = 11,11%
			bipod_02_F_blk = 11,11%
			bipod_01_F_snd = 11,11%
			bipod_01_F_mtp = 11,11%
			bipod_01_F_blk = 11,11%
			bipod_01_F_khk = 11,11%
		*/
		Bipods[] = {"bipod_02_F_tan", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_03_F_oli", "bipod_01_F_khk", "bipod_02_F_hex", "bipod_01_F_blk", "bipod_03_F_blk", "bipod_01_F_mtp"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25,00%
			1Rnd_HE_Grenade_shell = 75,00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6,25%
			3Rnd_UGL_FlareRed_F    = 6,25%
			3Rnd_UGL_FlareWhite_F  = 6,25%
			3Rnd_UGL_FlareYellow_F = 6,25%
			UGL_FlareGreen_F       = 18,75%
			UGL_FlareRed_F         = 18,75%
			UGL_FlareWhite_F       = 18,75%
			UGL_FlareYellow_F      = 18,75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareGreen_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareGreen_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareRed_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3,57%
			3Rnd_SmokeBlue_Grenade_shell   = 3,57%
			3Rnd_SmokeGreen_Grenade_shell  = 3,57%
			3Rnd_SmokeOrange_Grenade_shell = 3,57%
			3Rnd_SmokePurple_Grenade_shell = 3,57%
			3Rnd_SmokeRed_Grenade_shell    = 3,57%
			3Rnd_SmokeYellow_Grenade_shell = 3,57%
			1Rnd_Smoke_Grenade_shell       = 10,71%
			1Rnd_SmokeBlue_Grenade_shell   = 10,71%
			1Rnd_SmokeGreen_Grenade_shell  = 10,71%
			1Rnd_SmokeOrange_Grenade_shell = 10,71%
			1Rnd_SmokePurple_Grenade_shell = 10,71%
			1Rnd_SmokeRed_Grenade_shell    = 10,71%
			1Rnd_SmokeYellow_Grenade_shell = 10,71%
		*/
		UGLSmokes[] = {"3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 33,33%
			MiniGrenade = 66,67%
		*/
		HandGrenades[] = {"MiniGrenade", "MiniGrenade", "HandGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			APERSTripMine_Wire_Mag   = 40,00%
			IEDLandSmall_Remote_Mag  = 40,00%
			IEDUrbanSmall_Remote_Mag = 20,00%
		*/
		Explosives[] = {"IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2,78%
			Binocular              = 11,11%
			ItemGPS                = 11,11%
			ItemRadio              = 16,67%
			ItemWatch              = 16,67%
			ItemMap                = 19,44%
			Exile_Item_Heatpack    = 22,22%
		*/
		CivilianItems[] = {"ItemRadio", "Binocular", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "Exile_Item_Heatpack", "Binocular", "ItemMap", "ItemRadio", "ItemRadio", "Exile_Item_Heatpack", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "ItemGPS", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemMap", "ItemWatch", "ItemMap", "ItemMap", "Exile_Item_Heatpack", "Exile_Item_MobilePhone", "ItemWatch", "ItemGPS", "ItemWatch", "ItemRadio", "Binocular", "ItemMap", "ItemRadio", "ItemGPS", "ItemWatch", "Binocular", "ItemWatch", "Exile_Item_Heatpack", "ItemWatch"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0,58%
			U_NikosBody              = 0,58%
			U_OrestesBody            = 0,58%
			U_C_Man_casual_1_F       = 2,92%
			U_C_Man_casual_2_F       = 2,92%
			U_C_Man_casual_3_F       = 2,92%
			U_C_Man_casual_4_F       = 2,92%
			U_C_Man_casual_5_F       = 2,92%
			U_C_Man_casual_6_F       = 2,92%
			U_C_man_sport_1_F        = 2,92%
			U_C_man_sport_2_F        = 2,92%
			U_C_man_sport_3_F        = 2,92%
			U_I_C_Soldier_Bandit_1_F = 2,92%
			U_I_C_Soldier_Bandit_2_F = 2,92%
			U_I_C_Soldier_Bandit_3_F = 2,92%
			U_I_C_Soldier_Bandit_4_F = 2,92%
			U_I_C_Soldier_Bandit_5_F = 2,92%
			U_C_Poloshirt_blue       = 4,09%
			U_C_Poloshirt_burgundy   = 4,09%
			U_C_Poloshirt_salmon     = 4,09%
			U_C_Poloshirt_stripped   = 4,09%
			U_C_Poloshirt_tricolour  = 4,09%
			U_C_HunterBody_grn       = 5,26%
			U_C_Journalist           = 5,26%
			U_C_Poor_1               = 5,26%
			U_C_Poor_2               = 5,26%
			U_C_Poor_shorts_1        = 5,26%
			U_C_Scientist            = 5,26%
			U_Rangemaster            = 5,26%
		*/
		CivilianClothing[] = {"U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_salmon", "U_C_Poloshirt_salmon", "U_C_Scientist", "U_Rangemaster", "U_C_Poor_1", "U_C_Poloshirt_blue", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Scientist", "U_I_C_Soldier_Bandit_4_F", "U_Rangemaster", "U_C_Man_casual_3_F", "U_C_Poor_2", "U_C_Poloshirt_blue", "U_C_Poor_1", "U_C_Man_casual_2_F", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Man_casual_6_F", "U_C_Man_casual_2_F", "U_C_Poor_1", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_Man_casual_3_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_2_F", "U_C_man_sport_2_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_stripped", "U_C_Poor_shorts_1", "U_C_man_sport_3_F", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Poloshirt_stripped", "U_C_Journalist", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_man_sport_1_F", "U_C_Man_casual_5_F", "U_C_man_sport_1_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_Journalist", "U_C_Poloshirt_tricolour", "U_C_Poor_2", "U_C_Poor_2", "U_C_Poloshirt_burgundy", "U_C_Poor_1", "U_C_man_sport_3_F", "U_C_HunterBody_grn", "U_C_Journalist", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Poor_2", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_Man_casual_5_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_salmon", "U_C_Journalist", "U_C_man_sport_3_F", "U_C_Man_casual_4_F", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_HunterBody_grn", "U_C_Poor_1", "U_C_Man_casual_1_F", "U_C_Scientist", "U_C_Poloshirt_stripped", "U_C_Scientist", "U_C_Poloshirt_blue", "U_C_Man_casual_2_F", "U_C_Poor_shorts_1", "U_C_Man_casual_1_F", "U_C_man_sport_1_F", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_6_F", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_3_F", "U_C_Journalist", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_C_HunterBody_grn", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Journalist", "U_C_Man_casual_5_F", "U_C_Man_casual_5_F", "U_C_man_sport_1_F", "U_NikosAgedBody", "U_C_HunterBody_grn", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_OrestesBody", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_1_F", "U_C_man_sport_2_F", "U_C_Man_casual_3_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_salmon", "U_C_HunterBody_grn", "U_C_Man_casual_4_F", "U_C_HunterBody_grn", "U_Rangemaster", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_3_F", "U_C_Scientist", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_1", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_salmon", "U_C_HunterBody_grn", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_6_F", "U_C_Man_casual_6_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_Rangemaster", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_I_C_Soldier_Bandit_1_F", "U_C_man_sport_2_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_2", "U_NikosBody", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_blue"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr             = 6,25%
			B_Kitbag_mcamo           = 6,25%
			B_Kitbag_sgg             = 6,25%
			B_AssaultPack_blk        = 6,25%
			B_AssaultPack_cbr        = 6,25%
			B_AssaultPack_dgtl       = 6,25%
			B_AssaultPack_khk        = 6,25%
			B_AssaultPack_mcamo      = 6,25%
			B_AssaultPack_rgr        = 6,25%
			B_AssaultPack_sgg        = 6,25%
			B_AssaultPack_tna_F      = 6,25%
			B_HuntingBackpack        = 6,25%
			B_OutdoorPack_blu        = 6,25%
			B_OutdoorPack_tan        = 6,25%
			B_OutdoorPack_blk        = 6,25%
			Exitem_Civilian_Backpack = 6,25%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_rgr", "Exitem_Civilian_Backpack", "B_AssaultPack_blk", "B_AssaultPack_cbr", "B_AssaultPack_sgg", "B_AssaultPack_khk", "B_HuntingBackpack", "B_Kitbag_sgg", "B_AssaultPack_tna_F", "B_AssaultPack_mcamo", "B_Kitbag_mcamo", "B_Kitbag_cbr", "B_AssaultPack_dgtl", "B_OutdoorPack_tan", "B_OutdoorPack_blk", "B_OutdoorPack_blu"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25,00%
			V_TacVest_blk_POLICE = 25,00%
			V_Rangemaster_belt   = 50,00%
		*/
		CivilianVests[] = {"V_TacVest_blk_POLICE", "V_Rangemaster_belt", "V_Press_F", "V_Rangemaster_belt"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5,56%
			H_Beret_blk_POLICE = 5,56%
			H_Cap_blk          = 5,56%
			H_Cap_blk_Raven    = 5,56%
			H_Cap_blu          = 5,56%
			H_Cap_grn          = 5,56%
			H_Cap_headphones   = 5,56%
			H_Cap_oli          = 5,56%
			H_Cap_press        = 5,56%
			H_Cap_red          = 5,56%
			H_Cap_tan          = 5,56%
			H_Hat_blue         = 5,56%
			H_Hat_brown        = 5,56%
			H_Hat_checker      = 5,56%
			H_Hat_grey         = 5,56%
			H_Hat_tan          = 5,56%
			H_StrawHat         = 5,56%
			H_StrawHat_dark    = 5,56%
		*/
		CivilianHeadgear[] = {"H_Hat_blue", "H_Hat_checker", "H_Bandanna_surfer", "H_Cap_press", "H_Cap_oli", "H_Hat_grey", "H_Hat_tan", "H_Cap_grn", "H_Cap_tan", "H_Hat_brown", "H_Cap_blk", "H_Cap_blu", "H_Cap_headphones", "H_StrawHat", "H_Beret_blk_POLICE", "H_StrawHat_dark", "H_Cap_red", "H_Cap_blk_Raven"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 9,09%
			ItemCompass        = 45,45%
			NVGoggles          = 9,09%
			NVGoggles_tna_F    = 9,09%
			O_NVGoggles_ghex_F = 9,09%
			O_NVGoggles_hex_F  = 9,09%
			O_NVGoggles_urb_F  = 9,09%
		*/
		GuerillaItems[] = {"O_NVGoggles_urb_F", "NVGoggles", "ItemCompass", "O_NVGoggles_ghex_F", "ItemCompass", "ItemCompass", "NVGoggles_tna_F", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "Rangefinder"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1,75%
			U_I_C_Soldier_Camo_F     = 5,26%
			U_I_C_Soldier_Para_1_F   = 5,26%
			U_I_C_Soldier_Para_2_F   = 5,26%
			U_I_C_Soldier_Para_3_F   = 5,26%
			U_I_C_Soldier_Para_4_F   = 5,26%
			U_I_C_Soldier_Para_5_F   = 5,26%
			U_IG_leader              = 7,02%
			U_IG_Guerilla3_1         = 8,77%
			U_IG_Guerilla3_2         = 8,77%
			U_IG_Guerilla1_1         = 10,53%
			U_IG_Guerilla2_1         = 10,53%
			U_IG_Guerilla2_2         = 10,53%
			U_IG_Guerilla2_3         = 10,53%
		*/
		GuerillaClothing[] = {"U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_1", "U_IG_Guerilla3_1", "U_IG_Guerilla3_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_Guerilla2_1", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_IG_Guerilla3_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_IG_leader", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_I_G_resistanceLeader_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_4_F"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1,67%
			B_Bergen_mcamo             = 1,67%
			B_Bergen_rgr               = 1,67%
			B_Bergen_sgg               = 1,67%
			B_FieldPack_ghex_F         = 1,67%
			B_ViperHarness_base_F      = 3,33%
			B_ViperHarness_blk_F       = 3,33%
			B_ViperHarness_ghex_F      = 3,33%
			B_ViperHarness_hex_F       = 3,33%
			B_ViperHarness_khk_F       = 3,33%
			B_ViperHarness_oli_F       = 3,33%
			B_ViperLightHarness_base_F = 5,00%
			B_ViperLightHarness_blk_F  = 5,00%
			B_ViperLightHarness_ghex_F = 5,00%
			B_ViperLightHarness_hex_F  = 5,00%
			B_ViperLightHarness_khk_F  = 5,00%
			B_ViperLightHarness_oli_F  = 5,00%
			B_FieldPack_blk            = 8,33%
			B_FieldPack_cbr            = 8,33%
			B_FieldPack_ocamo          = 8,33%
			B_FieldPack_oucamo         = 8,33%
			Exitem_Assault_Backpack    = 8,33%
		*/
		GuerillaBackpacks[] = {"B_FieldPack_oucamo", "B_ViperHarness_khk_F", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperHarness_khk_F", "B_ViperHarness_hex_F", "B_FieldPack_ocamo", "Exitem_Assault_Backpack", "B_FieldPack_blk", "B_Bergen_mcamo", "B_ViperLightHarness_blk_F", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_FieldPack_ocamo", "B_ViperHarness_blk_F", "B_ViperLightHarness_oli_F", "B_FieldPack_oucamo", "B_Bergen_rgr", "B_FieldPack_blk", "B_FieldPack_ghex_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_Bergen_blk", "B_FieldPack_ocamo", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_FieldPack_cbr", "Exitem_Assault_Backpack", "B_ViperLightHarness_hex_F", "B_ViperHarness_base_F", "B_FieldPack_ocamo", "B_ViperLightHarness_oli_F", "B_FieldPack_oucamo", "B_ViperHarness_ghex_F", "B_ViperHarness_blk_F", "B_FieldPack_cbr", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F", "B_FieldPack_oucamo", "B_ViperLightHarness_ghex_F", "B_FieldPack_cbr", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "Exitem_Assault_Backpack", "B_ViperLightHarness_ghex_F", "B_FieldPack_cbr", "B_FieldPack_cbr", "Exitem_Assault_Backpack", "Exitem_Assault_Backpack", "B_ViperLightHarness_hex_F", "B_FieldPack_blk", "B_FieldPack_blk", "B_ViperLightHarness_base_F", "B_ViperHarness_oli_F", "B_ViperHarness_oli_F", "B_ViperHarness_hex_F", "B_Bergen_sgg", "B_ViperLightHarness_ghex_F"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3,23%
			V_BandollierB_blk        = 6,45%
			V_BandollierB_cbr        = 6,45%
			V_BandollierB_khk        = 6,45%
			V_BandollierB_oli        = 6,45%
			V_BandollierB_rgr        = 6,45%
			V_Chestrig_blk           = 6,45%
			V_Chestrig_khk           = 6,45%
			V_Chestrig_oli           = 6,45%
			V_Chestrig_rgr           = 6,45%
			V_HarnessO_brn           = 6,45%
			V_HarnessO_gry           = 6,45%
			V_HarnessOGL_brn         = 6,45%
			V_HarnessOGL_gry         = 6,45%
			V_HarnessOSpec_brn       = 6,45%
			V_HarnessOSpec_gry       = 6,45%
		*/
		GuerillaVests[] = {"V_BandollierB_blk", "V_BandollierB_rgr", "V_Chestrig_rgr", "V_I_G_resistanceLeader_F", "V_HarnessOSpec_gry", "V_BandollierB_cbr", "V_HarnessOSpec_brn", "V_Chestrig_blk", "V_HarnessOSpec_brn", "V_BandollierB_cbr", "V_HarnessO_gry", "V_HarnessO_gry", "V_Chestrig_rgr", "V_HarnessOGL_gry", "V_BandollierB_blk", "V_BandollierB_rgr", "V_HarnessOGL_gry", "V_BandollierB_oli", "V_HarnessOGL_brn", "V_HarnessOSpec_gry", "V_BandollierB_oli", "V_Chestrig_khk", "V_HarnessO_brn", "V_BandollierB_khk", "V_HarnessO_brn", "V_HarnessOGL_brn", "V_Chestrig_oli", "V_Chestrig_khk", "V_BandollierB_khk", "V_Chestrig_blk", "V_Chestrig_oli"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0,82%
			H_Beret_blk               = 0,82%
			H_Beret_brn_SF            = 0,82%
			H_Beret_Colonel           = 0,82%
			H_Beret_grn               = 0,82%
			H_Beret_grn_SF            = 0,82%
			H_Beret_ocamo             = 0,82%
			H_Beret_red               = 0,82%
			H_Booniehat_tna_F         = 1,64%
			H_Cap_blk_Syndikat_F      = 1,64%
			H_Cap_grn_Syndikat_F      = 1,64%
			H_Cap_oli_Syndikat_F      = 1,64%
			H_Cap_tan_Syndikat_F      = 1,64%
			H_FakeHeadgear_Syndikat_F = 1,64%
			H_MilCap_gen_F            = 1,64%
			H_MilCap_ghex_F           = 1,64%
			H_MilCap_tna_F            = 1,64%
			H_Shemag_khk              = 1,64%
			H_Shemag_olive            = 1,64%
			H_Shemag_olive_hs         = 1,64%
			H_Shemag_tan              = 1,64%
			H_ShemagOpen_khk          = 1,64%
			H_ShemagOpen_tan          = 1,64%
			H_TurbanO_blk             = 1,64%
			H_Watchcap_camo           = 1,64%
			H_Watchcap_sgg            = 1,64%
			H_Bandanna_camo           = 2,46%
			H_Bandanna_cbr            = 2,46%
			H_Bandanna_gry            = 2,46%
			H_Bandanna_khk            = 2,46%
			H_Bandanna_khk_hs         = 2,46%
			H_Bandanna_mcamo          = 2,46%
			H_Bandanna_sgg            = 2,46%
			H_BandMask_blk            = 2,46%
			H_Cap_brn_SPECOPS         = 2,46%
			H_Cap_khaki_specops_UK    = 2,46%
			H_Cap_tan_specops_US      = 2,46%
			H_Hat_camo                = 2,46%
			H_Watchcap_blk            = 2,46%
			H_Watchcap_khk            = 2,46%
			Exile_Headgear_GasMask    = 3,28%
			H_Booniehat_dgtl          = 3,28%
			H_Booniehat_dirty         = 3,28%
			H_Booniehat_grn           = 3,28%
			H_Booniehat_indp          = 3,28%
			H_Booniehat_khk           = 3,28%
			H_Booniehat_khk_hs        = 3,28%
			H_Booniehat_mcamo         = 3,28%
			H_Booniehat_tan           = 3,28%
		*/
		GuerillaHeadgear[] = {"H_BandMask_blk", "H_Cap_grn_Syndikat_F", "H_Shemag_khk", "H_Booniehat_mcamo", "H_Beret_blk", "H_Booniehat_indp", "H_Booniehat_dgtl", "H_MilCap_tna_F", "H_Booniehat_tna_F", "H_Shemag_olive", "H_MilCap_gen_F", "H_Booniehat_khk_hs", "H_Cap_blk_Syndikat_F", "H_Hat_camo", "Exile_Headgear_GasMask", "H_Bandanna_mcamo", "H_Watchcap_blk", "H_Booniehat_tan", "H_ShemagOpen_khk", "H_Shemag_olive_hs", "H_Bandanna_sgg", "Exile_Headgear_GasMask", "H_Booniehat_mcamo", "H_Hat_camo", "H_Booniehat_indp", "H_Booniehat_khk", "Exile_Headgear_GasMask", "H_Beret_grn_SF", "H_MilCap_ghex_F", "H_Watchcap_sgg", "H_Booniehat_indp", "H_MilCap_gen_F", "H_Bandanna_gry", "H_Cap_khaki_specops_UK", "H_Cap_brn_SPECOPS", "H_Beret_grn", "H_Beret_red", "H_Bandanna_camo", "H_Booniehat_dirty", "H_Watchcap_camo", "H_FakeHeadgear_Syndikat_F", "H_Cap_oli_Syndikat_F", "H_Cap_tan_specops_US", "Exile_Headgear_GasMask", "H_Booniehat_khk", "H_Cap_brn_SPECOPS", "H_Cap_oli_Syndikat_F", "H_Booniehat_dirty", "H_Shemag_tan", "H_Booniehat_khk", "H_Bandanna_khk_hs", "H_BandMask_blk", "H_Booniehat_tan", "H_Cap_tan_Syndikat_F", "H_Cap_brn_SPECOPS", "H_Shemag_tan", "H_Booniehat_dirty", "H_Cap_tan_specops_US", "H_Watchcap_camo", "H_Bandanna_camo", "H_Shemag_khk", "H_Cap_khaki_specops_UK", "H_Cap_tan_Syndikat_F", "H_Booniehat_grn", "H_Bandanna_cbr", "H_Bandanna_mcamo", "H_ShemagOpen_khk", "H_Booniehat_dgtl", "H_Booniehat_tan", "H_Shemag_olive_hs", "H_Bandanna_mcamo", "H_Booniehat_khk_hs", "H_Booniehat_dirty", "H_Cap_tan_specops_US", "H_Hat_camo", "H_Watchcap_khk", "H_MilCap_tna_F", "H_Booniehat_dgtl", "H_Booniehat_grn", "H_Cap_grn_Syndikat_F", "H_Beret_Colonel", "H_Booniehat_khk", "H_Booniehat_indp", "H_Beret_brn_SF", "H_Cap_khaki_specops_UK", "H_Booniehat_khk_hs", "H_Bandanna_cbr", "H_MilCap_ghex_F", "H_TurbanO_blk", "H_BandMask_blk", "H_Bandanna_gry", "H_Beret_ocamo", "H_Watchcap_blk", "H_Shemag_olive", "H_Booniehat_khk_hs", "H_Bandanna_khk_hs", "H_FakeHeadgear_Syndikat_F", "H_ShemagOpen_tan", "H_Cap_blk_Syndikat_F", "H_Watchcap_khk", "H_Watchcap_khk", "H_ShemagOpen_tan", "H_Bandanna_camo", "H_Watchcap_blk", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_tan", "H_Bandanna_gry", "H_Bandanna_sgg", "H_Bandanna_khk", "H_TurbanO_blk", "H_Bandanna_khk_hs", "H_Bandanna_khk", "H_Booniehat_mcamo", "H_Booniehat_tna_F", "H_Beret_02", "H_Bandanna_sgg", "H_Bandanna_khk", "H_Bandanna_cbr", "H_Booniehat_grn", "H_Booniehat_dgtl", "H_Watchcap_sgg"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1,32%
			U_I_OfficerUniform            = 1,32%
			U_I_Wetsuit                   = 1,32%
			U_O_CombatUniform_ocamo       = 1,32%
			U_O_CombatUniform_oucamo      = 1,32%
			U_O_OfficerUniform_ocamo      = 1,32%
			U_O_SpecopsUniform_blk        = 1,32%
			U_O_SpecopsUniform_ocamo      = 1,32%
			U_O_V_Soldier_Viper_F         = 1,32%
			U_O_V_Soldier_Viper_hex_F     = 1,32%
			U_O_Wetsuit                   = 1,32%
			U_B_SpecopsUniform_sgg        = 1,97%
			U_B_HeliPilotCoveralls        = 2,63%
			U_B_PilotCoveralls            = 2,63%
			U_I_CombatUniform             = 2,63%
			U_I_CombatUniform_shortsleeve = 2,63%
			U_I_CombatUniform_tshirt      = 2,63%
			U_I_HeliPilotCoveralls        = 2,63%
			U_I_pilotCoveralls            = 2,63%
			U_O_PilotCoveralls            = 2,63%
			U_B_CombatUniform_mcam        = 3,29%
			U_B_CombatUniform_mcam_tshirt = 3,29%
			U_B_CombatUniform_mcam_vest   = 3,29%
			U_B_CombatUniform_mcam_worn   = 3,29%
			U_B_CTRG_1                    = 3,29%
			U_B_CTRG_2                    = 3,29%
			U_B_CTRG_3                    = 3,29%
			U_B_CTRG_Soldier_2_F          = 3,29%
			U_B_CTRG_Soldier_3_F          = 3,29%
			U_B_CTRG_Soldier_F            = 3,29%
			U_B_CTRG_Soldier_urb_1_F      = 3,29%
			U_B_CTRG_Soldier_urb_2_F      = 3,29%
			U_B_CTRG_Soldier_urb_3_F      = 3,29%
			U_B_GEN_Commander_F           = 3,29%
			U_B_GEN_Soldier_F             = 3,29%
			U_B_T_Soldier_AR_F            = 3,29%
			U_B_T_Soldier_SL_F            = 3,29%
			U_O_T_Officer_F               = 3,29%
			U_O_T_Soldier_F               = 3,29%
		*/
		MilitaryClothing[] = {"U_O_T_Officer_F", "U_B_T_Soldier_SL_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_urb_1_F", "U_O_CombatUniform_ocamo", "U_B_CTRG_2", "U_O_T_Officer_F", "U_B_CombatUniform_mcam_worn", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_vest", "U_O_PilotCoveralls", "U_O_PilotCoveralls", "U_B_T_Soldier_AR_F", "U_B_HeliPilotCoveralls", "U_O_SpecopsUniform_blk", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam_worn", "U_B_T_Soldier_SL_F", "U_B_GEN_Commander_F", "U_O_CombatUniform_oucamo", "U_I_Wetsuit", "U_B_CTRG_Soldier_urb_1_F", "U_I_CombatUniform", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_2_F", "U_O_SpecopsUniform_ocamo", "U_O_T_Officer_F", "U_O_Wetsuit", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_O_T_Soldier_F", "U_B_CombatUniform_mcam", "U_B_PilotCoveralls", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_2_F", "U_O_OfficerUniform_ocamo", "U_O_T_Officer_F", "U_O_Wetsuit", "U_O_SpecopsUniform_blk", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_I_CombatUniform", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_O_T_Soldier_F", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_O_V_Soldier_Viper_F", "U_O_T_Officer_F", "U_B_CTRG_Soldier_3_F", "U_I_CombatUniform", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_3", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_B_CombatUniform_mcam", "U_O_V_Soldier_Viper_hex_F", "U_I_OfficerUniform", "U_B_SpecopsUniform_sgg", "U_I_CombatUniform_shortsleeve", "U_O_CombatUniform_ocamo", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam", "U_I_CombatUniform_tshirt", "U_B_CTRG_1", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_urb_2_F", "U_O_V_Soldier_Viper_F", "U_B_GEN_Soldier_F", "U_B_CTRG_1", "U_B_Wetsuit", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_urb_3_F", "U_I_CombatUniform_tshirt", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_tshirt", "U_O_SpecopsUniform_ocamo", "U_B_PilotCoveralls", "U_B_GEN_Commander_F", "U_B_HeliPilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_3_F", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_F", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_O_OfficerUniform_ocamo", "U_B_T_Soldier_AR_F", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_3", "U_B_CTRG_3", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_1", "U_B_CTRG_2", "U_I_CombatUniform", "U_B_CTRG_1", "U_B_GEN_Soldier_F", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_GEN_Commander_F", "U_O_CombatUniform_oucamo", "U_O_T_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_B_PilotCoveralls", "U_B_GEN_Commander_F", "U_B_Wetsuit", "U_B_T_Soldier_SL_F", "U_B_CTRG_3", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_F", "U_I_OfficerUniform", "U_B_CTRG_2", "U_B_CTRG_Soldier_urb_2_F", "U_B_CombatUniform_mcam_worn", "U_O_PilotCoveralls", "U_I_CombatUniform_tshirt", "U_I_CombatUniform_shortsleeve", "U_I_HeliPilotCoveralls", "U_I_HeliPilotCoveralls", "U_O_V_Soldier_Viper_hex_F", "U_B_CTRG_2", "U_B_CTRG_1", "U_I_HeliPilotCoveralls", "U_I_CombatUniform_tshirt", "U_B_CombatUniform_mcam", "U_B_HeliPilotCoveralls", "U_I_Wetsuit", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_mcam_tshirt", "U_B_HeliPilotCoveralls", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_2_F", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_3", "U_B_CTRG_Soldier_F", "U_B_T_Soldier_SL_F"};

		/*
			Percental Item Spawn Chances of CUP_MilitaryClothing:

			CUP_U_C_Pilot_01                      = 1,66%
			CUP_U_B_CZ_WDL_TShirt                 = 1,66%
			CUP_U_B_GER_Tropentarn_1              = 1,66%
			CUP_U_B_GER_Tropentarn_2              = 1,66%
			CUP_U_B_GER_Ghillie                   = 0,33%
			CUP_U_B_GER_Flecktarn_1               = 1,66%
			CUP_U_B_GER_Flecktarn_2               = 1,66%
			CUP_U_B_GER_Fleck_Ghillie             = 0,33%
			CUP_U_B_USMC_Officer                  = 1,66%
			CUP_U_B_USMC_PilotOverall             = 1,66%
			CUP_U_B_USMC_Ghillie_WDL              = 0,33%
			CUP_U_B_USMC_MARPAT_WDL_Sleeves       = 1,66%
			CUP_U_B_USMC_MARPAT_WDL_RolledUp      = 1,66%
			CUP_U_B_USMC_MARPAT_WDL_Kneepad       = 1,66%
			CUP_U_B_USMC_MARPAT_WDL_TwoKneepads   = 1,66%
			CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad = 1,66%
			CUP_U_B_FR_SpecOps                    = 1,66%
			CUP_U_B_FR_Scout                      = 1,66%
			CUP_U_B_FR_Scout1                     = 1,66%
			CUP_U_B_FR_Scout2                     = 1,66%
			CUP_U_B_FR_Scout3                     = 1,66%
			CUP_U_B_FR_Officer                    = 1,66%
			CUP_U_B_FR_Corpsman                   = 1,66%
			CUP_U_B_FR_DirAction                  = 1,66%
			CUP_U_B_FR_DirAction2                 = 1,66%
			CUP_U_B_FR_Light                      = 1,66%
			CUP_U_I_GUE_Flecktarn                 = 1,66%
			CUP_U_I_GUE_Flecktarn2                = 1,66%
			CUP_U_I_GUE_Flecktarn3                = 1,66%
			CUP_U_I_GUE_Woodland1                 = 1,66%
			CUP_U_I_Ghillie_Top                   = 0,33%
			CUP_U_I_RACS_PilotOverall             = 1,66%
			CUP_U_I_RACS_Desert_1                 = 1,66%
			CUP_U_I_RACS_Desert_2                 = 1,66%
			CUP_U_I_RACS_Urban_1                  = 1,66%
			CUP_U_I_RACS_Urban_2                  = 1,66%
			CUP_U_O_SLA_Officer_Suit              = 1,66%
			CUP_U_O_SLA_MixedCamo                 = 1,66%
			CUP_U_O_SLA_Green                     = 1,66%
			CUP_U_O_SLA_Urban                     = 1,66%
			CUP_U_O_SLA_Desert                    = 1,66%
			CUP_U_O_SLA_Overalls_Pilot            = 1,66%
			CUP_U_O_SLA_Overalls_Tank             = 1,66%
			CUP_U_O_Partisan_TTsKO                = 1,66%
			CUP_U_O_Partisan_TTsKO_Mixed          = 1,66%
			CUP_U_O_Partisan_VSR_Mixed1           = 1,66%
			CUP_U_O_Partisan_VSR_Mixed2           = 1,66%
			CUP_U_O_TK_Officer                    = 1,66%
			CUP_U_O_TK_MixedCamo                  = 1,66%
			CUP_U_O_TK_Green                      = 1,66%
			CUP_U_O_TK_Ghillie                    = 0,33%
			CUP_U_O_TK_Ghillie_Top                = 0,33%
			CUP_U_B_BAF_DDPM_S1_RolledUp          = 1,66%
			CUP_U_B_BAF_DDPM_S1_UnRolled          = 1,66%
			CUP_U_B_BAF_DDPM_Tshirt               = 1,66%
			CUP_U_B_BAF_DPM_S1_RolledUp           = 1,66%
			CUP_U_B_BAF_DPM_S2_UnRolled           = 1,66%
			CUP_U_B_BAF_DPM_Tshirt                = 1,66%
			CUP_U_B_BAF_MTP_S1_RolledUp           = 1,66%
			CUP_U_B_BAF_MTP_S2_UnRolled           = 1,66%
			CUP_U_B_BAF_MTP_Tshirt                = 1,66%
			CUP_U_B_BAF_MTP_S3_RolledUp           = 1,66%
			CUP_U_B_BAF_MTP_S4_UnRolled           = 1,66%
			CUP_U_B_BAF_MTP_S5_UnRolled           = 1,66%
			CUP_U_B_BAF_MTP_S6_UnRolled           = 1,66%
		*/
		CUP_MilitaryClothing[] = {"CUP_U_B_BAF_DDPM_S1_UnRolled", "CUP_U_B_FR_Officer", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_I_GUE_Woodland1", "CUP_U_B_FR_DirAction2", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_B_GER_Ghillie", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_I_RACS_PilotOverall", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_O_SLA_Urban", "CUP_U_B_FR_Light", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_O_SLA_Green", "CUP_U_O_SLA_Desert", "CUP_U_O_TK_MixedCamo", "CUP_U_B_BAF_DDPM_S1_UnRolled", "CUP_U_I_GUE_Flecktarn", "CUP_U_B_FR_Light", "CUP_U_B_GER_Flecktarn_2", "CUP_U_B_FR_Scout2", "CUP_U_I_GUE_Flecktarn3", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_O_SLA_Officer_Suit", "CUP_U_I_RACS_Desert_1", "CUP_U_B_GER_Tropentarn_1", "CUP_U_B_FR_SpecOps", "CUP_U_B_FR_Officer", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_B_FR_Light", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_B_GER_Tropentarn_1", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_I_GUE_Flecktarn3", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_I_GUE_Flecktarn2", "CUP_U_O_TK_Officer", "CUP_U_O_Partisan_TTsKO_Mixed", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_O_Partisan_TTsKO_Mixed", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_O_SLA_Desert", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_O_SLA_Urban", "CUP_U_I_GUE_Flecktarn", "CUP_U_B_FR_Scout1", "CUP_U_O_TK_Green", "CUP_U_C_Pilot_01", "CUP_U_B_FR_DirAction2", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_I_GUE_Woodland1", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_I_RACS_Urban_2", "CUP_U_B_FR_SpecOps", "CUP_U_C_Pilot_01", "CUP_U_B_FR_Corpsman", "CUP_U_I_RACS_Desert_2", "CUP_U_B_FR_Officer", "CUP_U_I_GUE_Flecktarn3", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_O_Partisan_TTsKO_Mixed", "CUP_U_O_SLA_MixedCamo", "CUP_U_B_GER_Flecktarn_1", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_B_FR_Scout", "CUP_U_B_GER_Tropentarn_1", "CUP_U_I_RACS_Desert_2", "CUP_U_O_TK_Officer", "CUP_U_B_USMC_Officer", "CUP_U_B_GER_Tropentarn_2", "CUP_U_O_TK_MixedCamo", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_B_GER_Fleck_Ghillie", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_I_RACS_Urban_2", "CUP_U_B_FR_Scout1", "CUP_U_B_FR_Scout3", "CUP_U_O_TK_MixedCamo", "CUP_U_I_GUE_Flecktarn3", "CUP_U_I_GUE_Woodland1", "CUP_U_B_FR_Scout1", "CUP_U_O_SLA_Desert", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_O_TK_Officer", "CUP_U_O_TK_MixedCamo", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_U_B_GER_Flecktarn_1", "CUP_U_B_FR_DirAction", "CUP_U_I_GUE_Flecktarn", "CUP_U_C_Pilot_01", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_I_GUE_Flecktarn2", "CUP_U_O_TK_MixedCamo", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_U_I_GUE_Flecktarn", "CUP_U_B_FR_Corpsman", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_B_FR_DirAction2", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_I_RACS_Urban_1", "CUP_U_B_FR_Scout3", "CUP_U_I_RACS_Desert_1", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_I_RACS_Urban_2", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_O_SLA_Desert", "CUP_U_B_BAF_DDPM_S1_UnRolled", "CUP_U_B_FR_Scout", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_B_FR_DirAction", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_I_RACS_Desert_1", "CUP_U_B_FR_Officer", "CUP_U_I_GUE_Woodland1", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_O_TK_Green", "CUP_U_I_GUE_Woodland1", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_B_USMC_Officer", "CUP_U_B_GER_Flecktarn_1", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_B_USMC_PilotOverall", "CUP_U_O_Partisan_TTsKO_Mixed", "CUP_U_B_GER_Flecktarn_2", "CUP_U_B_FR_SpecOps", "CUP_U_C_Pilot_01", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_B_BAF_DDPM_S1_UnRolled", "CUP_U_I_GUE_Flecktarn2", "CUP_U_B_FR_Corpsman", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_GER_Tropentarn_2", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_B_USMC_PilotOverall", "CUP_U_B_FR_Scout1", "CUP_U_B_FR_DirAction", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_I_Ghillie_Top", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_O_SLA_Green", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_B_FR_Corpsman", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_O_SLA_Green", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_O_SLA_Green", "CUP_U_I_RACS_PilotOverall", "CUP_U_O_SLA_MixedCamo", "CUP_U_O_SLA_Officer_Suit", "CUP_U_O_SLA_Officer_Suit", "CUP_U_B_FR_Scout", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_U_B_FR_Scout", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_B_USMC_Ghillie_WDL", "CUP_U_B_FR_DirAction", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_B_FR_Corpsman", "CUP_U_B_GER_Flecktarn_2", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_B_FR_Scout3", "CUP_U_B_GER_Tropentarn_1", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_B_FR_Scout3", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_O_SLA_Urban", "CUP_U_B_GER_Tropentarn_2", "CUP_U_B_FR_SpecOps", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_B_FR_Scout2", "CUP_U_B_FR_Scout2", "CUP_U_I_GUE_Flecktarn2", "CUP_U_I_RACS_PilotOverall", "CUP_U_I_GUE_Flecktarn2", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_I_RACS_Urban_1", "CUP_U_B_FR_Scout1", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_B_GER_Flecktarn_1", "CUP_U_I_RACS_Desert_2", "CUP_U_O_SLA_Desert", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_U_O_TK_Officer", "CUP_U_O_SLA_Urban", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_O_TK_Green", "CUP_U_I_RACS_Urban_1", "CUP_U_I_RACS_PilotOverall", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_O_SLA_Green", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_B_FR_Scout3", "CUP_U_I_RACS_Desert_1", "CUP_U_B_FR_Light", "CUP_U_I_RACS_Desert_1", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_FR_Scout2", "CUP_U_B_USMC_PilotOverall", "CUP_U_B_GER_Flecktarn_1", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_C_Pilot_01", "CUP_U_O_TK_Green", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_B_GER_Flecktarn_2", "CUP_U_O_Partisan_TTsKO", "CUP_U_I_GUE_Flecktarn", "CUP_U_O_SLA_Urban", "CUP_U_B_USMC_Officer", "CUP_U_B_FR_DirAction2", "CUP_U_I_RACS_PilotOverall", "CUP_U_O_SLA_Officer_Suit", "CUP_U_B_FR_Light", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_I_RACS_Desert_2", "CUP_U_O_SLA_MixedCamo", "CUP_U_I_RACS_Urban_1", "CUP_U_B_GER_Tropentarn_2", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_B_USMC_PilotOverall", "CUP_U_B_FR_Scout2", "CUP_U_B_FR_Officer", "CUP_U_I_RACS_Desert_2", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_I_GUE_Flecktarn3", "CUP_U_B_GER_Tropentarn_2", "CUP_U_B_FR_DirAction2", "CUP_U_O_TK_Green", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_B_USMC_PilotOverall", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_I_RACS_Urban_1", "CUP_U_O_TK_Ghillie", "CUP_U_B_FR_DirAction", "CUP_U_I_RACS_Urban_2", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_B_FR_Scout", "CUP_U_B_BAF_DDPM_S1_UnRolled", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_O_SLA_MixedCamo", "CUP_U_B_USMC_Officer", "CUP_U_O_TK_Officer", "CUP_U_B_GER_Flecktarn_2", "CUP_U_B_USMC_Officer", "CUP_U_O_SLA_Officer_Suit", "CUP_U_B_GER_Tropentarn_1", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_B_FR_SpecOps", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_O_SLA_MixedCamo", "CUP_U_O_TK_Ghillie_Top", "CUP_U_I_RACS_Urban_2", "CUP_U_O_Partisan_TTsKO_Mixed"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			Exitem_Large_Gunbag    = 1,15%
			Exitem_Czech_Backpack  = 2,30%
			Exitem_Coyote_Backpack = 11,49%
			B_Bergen_dgtl_F        = 1,15%
			B_Bergen_hex_F         = 1,15%
			B_Bergen_mcamo_F       = 1,15%
			B_Bergen_tna_F         = 1,15%
			B_Carryall_mcamo       = 11,49%
			B_Carryall_ocamo       = 11,49%
			B_Carryall_oucamo      = 11,49%
			B_Carryall_khk         = 11,49%
			B_Carryall_oli         = 11,49%
			B_Carryall_cbr         = 11,49%
			B_Carryall_ghex_F      = 11,49%
		*/
		MilitaryBackpacks[] = {"B_Carryall_ghex_F", "B_Carryall_oli", "B_Carryall_oucamo", "B_Carryall_oli", "Exitem_Coyote_Backpack", "B_Carryall_khk", "B_Carryall_oucamo", "B_Carryall_mcamo", "B_Carryall_oucamo", "B_Carryall_ocamo", "B_Carryall_mcamo", "B_Carryall_cbr", "B_Carryall_cbr", "B_Carryall_oucamo", "B_Carryall_ghex_F", "B_Carryall_ghex_F", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Carryall_ocamo", "B_Carryall_oucamo", "Exitem_Coyote_Backpack", "B_Carryall_khk", "Exitem_Large_Gunbag", "B_Carryall_ocamo", "B_Carryall_mcamo", "B_Carryall_khk", "B_Carryall_mcamo", "Exitem_Coyote_Backpack", "B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_ghex_F", "Exitem_Czech_Backpack", "B_Carryall_ocamo", "B_Carryall_oli", "B_Carryall_oucamo", "B_Carryall_oucamo", "Exitem_Coyote_Backpack", "B_Bergen_hex_F", "B_Carryall_oli", "Exitem_Coyote_Backpack", "B_Carryall_cbr", "B_Carryall_khk", "B_Carryall_oli", "B_Carryall_ocamo", "B_Carryall_oli", "Exitem_Coyote_Backpack", "B_Carryall_cbr", "B_Carryall_ocamo", "Exitem_Coyote_Backpack", "B_Carryall_ocamo", "B_Carryall_khk", "B_Carryall_ghex_F", "B_Carryall_oucamo", "B_Carryall_oli", "B_Carryall_mcamo", "B_Carryall_oli", "B_Bergen_dgtl_F", "B_Carryall_ocamo", "B_Carryall_oucamo", "B_Carryall_cbr", "B_Carryall_ocamo", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_ghex_F", "Exitem_Coyote_Backpack", "B_Carryall_khk", "B_Carryall_cbr", "Exitem_Czech_Backpack", "B_Carryall_mcamo", "Exitem_Coyote_Backpack", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_mcamo", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Bergen_tna_F", "Exitem_Coyote_Backpack", "B_Carryall_oucamo", "B_Carryall_mcamo", "B_Carryall_mcamo", "B_Bergen_mcamo_F", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_oli", "B_Carryall_ocamo"};

		/*
			Percental Item Spawn Chances of CUP_MilitaryBackpacks:

			CUP_B_ACRPara_m95         = 5,26%
			CUP_B_AssaultPack_ACU     = 8,77%
			CUP_B_AssaultPack_Black   = 8,77%
			CUP_B_AssaultPack_Coyote  = 8,77%
			CUP_B_Bergen_BAF          = 5,26%
			CUP_B_CivPack_WDL         = 7,02%
			CUP_B_GER_Pack_Flecktarn  = 3,51%
			CUP_B_GER_Pack_Tropentarn = 3,51%
			CUP_B_HikingPack_Civ      = 5,26%
			CUP_B_RUS_Backpack        = 7,02%
			CUP_B_USMC_AssaultPack    = 8,77%
			CUP_B_USMC_MOLLE          = 5,26%
			CUP_B_USMC_MOLLE_WDL      = 5,26%
			CUP_B_USPack_Black        = 8,77%
			CUP_B_USPack_Coyote       = 8,77%
		*/
		CUP_MilitaryBackpacks[] = {"CUP_B_CivPack_WDL", "CUP_B_AssaultPack_Black", "CUP_B_USMC_AssaultPack", "CUP_B_USPack_Coyote", "CUP_B_USPack_Black", "CUP_B_USPack_Coyote", "CUP_B_AssaultPack_ACU", "CUP_B_USPack_Coyote", "CUP_B_AssaultPack_Black", "CUP_B_USMC_MOLLE_WDL", "CUP_B_USPack_Black", "CUP_B_HikingPack_Civ", "CUP_B_USPack_Black", "CUP_B_Bergen_BAF", "CUP_B_GER_Pack_Flecktarn", "CUP_B_AssaultPack_ACU", "CUP_B_USMC_AssaultPack", "CUP_B_Bergen_BAF", "CUP_B_RUS_Backpack", "CUP_B_CivPack_WDL", "CUP_B_USPack_Coyote", "CUP_B_GER_Pack_Tropentarn", "CUP_B_AssaultPack_Black", "CUP_B_USMC_MOLLE", "CUP_B_USMC_AssaultPack", "CUP_B_AssaultPack_Coyote", "CUP_B_GER_Pack_Tropentarn", "CUP_B_AssaultPack_Coyote", "CUP_B_ACRPara_m95", "CUP_B_AssaultPack_Coyote", "CUP_B_USMC_AssaultPack", "CUP_B_USMC_MOLLE", "CUP_B_USPack_Coyote", "CUP_B_Bergen_BAF", "CUP_B_AssaultPack_Black", "CUP_B_USMC_MOLLE_WDL", "CUP_B_USPack_Black", "CUP_B_ACRPara_m95", "CUP_B_AssaultPack_ACU", "CUP_B_AssaultPack_Coyote", "CUP_B_HikingPack_Civ", "CUP_B_AssaultPack_ACU", "CUP_B_USPack_Black", "CUP_B_AssaultPack_ACU", "CUP_B_AssaultPack_Black", "CUP_B_USMC_MOLLE_WDL", "CUP_B_AssaultPack_Coyote", "CUP_B_RUS_Backpack", "CUP_B_CivPack_WDL", "CUP_B_CivPack_WDL", "CUP_B_HikingPack_Civ", "CUP_B_USMC_AssaultPack", "CUP_B_ACRPara_m95", "CUP_B_USMC_MOLLE", "CUP_B_RUS_Backpack", "CUP_B_RUS_Backpack", "CUP_B_GER_Pack_Flecktarn"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5,00%
			V_PlateCarrierL_CTRG    = 5,00%
			V_PlateCarrier1_blk     = 10,00%
			V_PlateCarrier1_rgr     = 10,00%
			V_PlateCarrier2_rgr     = 10,00%
			V_PlateCarrier3_rgr     = 10,00%
			V_PlateCarrierGL_rgr    = 10,00%
			V_PlateCarrierIA1_dgtl  = 10,00%
			V_PlateCarrierIA2_dgtl  = 10,00%
			V_PlateCarrierIAGL_dgtl = 10,00%
			V_PlateCarrierSpec_rgr  = 10,00%
		*/
		MilitaryVests[] = {"V_PlateCarrierH_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierL_CTRG", "V_PlateCarrier1_rgr"};

		/*
			Percental Item Spawn Chances of CUP_MilitaryVests:

			CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier    = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Medic        = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Officer      = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Sapper       = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Scout        = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1     = 1,45%
			CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2     = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Grenadier     = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Medic         = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Officer       = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Sapper        = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Scout         = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Soldier1      = 1,45%
			CUP_V_BAF_Osprey_Mk2_DPM_Soldier2      = 1,45%
			CUP_V_BAF_Osprey_Mk4_MTP_Grenadier     = 1,45%
			CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner = 1,45%
			CUP_V_BAF_Osprey_Mk4_MTP_Rifleman      = 1,45%
			CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader   = 1,45%
			CUP_V_B_GER_Carrier_Rig                = 1,45%
			CUP_V_B_GER_Carrier_Rig_2              = 1,45%
			CUP_V_B_GER_Carrier_Vest               = 1,45%
			CUP_V_B_GER_Carrier_Vest_2             = 1,45%
			CUP_V_B_GER_Carrier_Vest_3             = 1,45%
			CUP_V_B_GER_Vest_1                     = 1,45%
			CUP_V_B_GER_Vest_2                     = 1,45%
			CUP_V_B_LHDVest_Blue                   = 1,45%
			CUP_V_B_LHDVest_Brown                  = 1,45%
			CUP_V_B_LHDVest_Green                  = 1,45%
			CUP_V_B_LHDVest_Red                    = 1,45%
			CUP_V_B_LHDVest_Violet                 = 1,45%
			CUP_V_B_LHDVest_White                  = 1,45%
			CUP_V_B_LHDVest_Yellow                 = 1,45%
			CUP_V_B_MTV                            = 1,45%
			CUP_V_B_MTV_LegPouch                   = 1,45%
			CUP_V_B_MTV_MG                         = 1,45%
			CUP_V_B_MTV_Marksman                   = 1,45%
			CUP_V_B_MTV_Mine                       = 1,45%
			CUP_V_B_MTV_Patrol                     = 1,45%
			CUP_V_B_MTV_PistolBlack                = 1,45%
			CUP_V_B_MTV_Pouches                    = 1,45%
			CUP_V_B_MTV_TL                         = 1,45%
			CUP_V_B_MTV_noCB                       = 1,45%
			CUP_V_B_PilotVest                      = 1,45%
			CUP_V_B_RRV_DA1                        = 1,45%
			CUP_V_B_RRV_DA2                        = 1,45%
			CUP_V_B_RRV_Light                      = 1,45%
			CUP_V_B_RRV_MG                         = 1,45%
			CUP_V_B_RRV_Medic                      = 1,45%
			CUP_V_B_RRV_Officer                    = 1,45%
			CUP_V_B_RRV_Scout                      = 1,45%
			CUP_V_B_RRV_Scout2                     = 1,45%
			CUP_V_B_RRV_Scout3                     = 1,45%
			CUP_V_B_RRV_TL                         = 1,45%
			CUP_V_I_Carrier_Belt                   = 1,45%
			CUP_V_I_Guerilla_Jacket                = 1,45%
			CUP_V_I_RACS_Carrier_Vest              = 1,45%
			CUP_V_I_RACS_Carrier_Vest_2            = 1,45%
			CUP_V_I_RACS_Carrier_Vest_3            = 1,45%
			CUP_V_O_SLA_Carrier_Belt               = 1,45%
			CUP_V_O_SLA_Carrier_Belt02             = 1,45%
			CUP_V_O_SLA_Carrier_Belt03             = 1,45%
			CUP_V_O_SLA_Flak_Vest01                = 1,45%
			CUP_V_O_SLA_Flak_Vest02                = 1,45%
			CUP_V_O_SLA_Flak_Vest03                = 1,45%
			CUP_V_O_TK_CrewBelt                    = 1,45%
			CUP_V_O_TK_OfficerBelt                 = 1,45%
			CUP_V_O_TK_OfficerBelt2                = 1,45%
			CUP_V_O_TK_Vest_1                      = 1,45%
			CUP_V_O_TK_Vest_2                      = 1,45%
		*/
		CUP_MilitaryVests[] = {"CUP_V_B_GER_Carrier_Rig_2", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_B_RRV_Officer", "CUP_V_O_TK_Vest_1", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_B_MTV_TL", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_B_GER_Carrier_Rig", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_RRV_DA2", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_MTV_Marksman", "CUP_V_B_PilotVest", "CUP_V_B_LHDVest_Brown", "CUP_V_B_GER_Carrier_Rig", "CUP_V_B_LHDVest_Brown", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_B_MTV_Marksman", "CUP_V_B_RRV_DA1", "CUP_V_B_RRV_DA2", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_B_RRV_Scout3", "CUP_V_B_MTV_MG", "CUP_V_B_LHDVest_Brown", "CUP_V_B_RRV_Light", "CUP_V_B_MTV_noCB", "CUP_V_B_GER_Vest_2", "CUP_V_B_RRV_Medic", "CUP_V_B_MTV_MG", "CUP_V_B_LHDVest_Green", "CUP_V_B_RRV_Scout3", "CUP_V_B_RRV_Scout3", "CUP_V_O_TK_Vest_2", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_B_MTV_LegPouch", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_B_GER_Vest_1", "CUP_V_B_LHDVest_Red", "CUP_V_B_MTV_noCB", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_B_RRV_Officer", "CUP_V_O_TK_Vest_2", "CUP_V_B_RRV_Scout", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_B_LHDVest_Blue", "CUP_V_B_MTV_Patrol", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_B_GER_Carrier_Rig_2", "CUP_V_B_RRV_DA1", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_B_MTV_TL", "CUP_V_B_RRV_Light", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_B_MTV_LegPouch", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_B_LHDVest_Green", "CUP_V_B_LHDVest_White", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_B_LHDVest_White", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_B_RRV_Officer", "CUP_V_B_MTV_PistolBlack", "CUP_V_I_Carrier_Belt", "CUP_V_B_LHDVest_White", "CUP_V_O_TK_OfficerBelt2", "CUP_V_O_TK_OfficerBelt2", "CUP_V_B_LHDVest_Brown", "CUP_V_B_LHDVest_Yellow", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_B_RRV_DA1", "CUP_V_B_RRV_Scout2", "CUP_V_B_RRV_Scout3", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_I_Guerilla_Jacket", "CUP_V_B_MTV_Mine", "CUP_V_B_MTV_LegPouch", "CUP_V_B_MTV_MG", "CUP_V_O_TK_Vest_2", "CUP_V_B_LHDVest_Green", "CUP_V_B_RRV_Light", "CUP_V_B_PilotVest", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_B_LHDVest_Violet", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_B_MTV_noCB", "CUP_V_B_RRV_DA2", "CUP_V_B_MTV_Mine", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_B_LHDVest_Violet", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_RRV_Medic", "CUP_V_B_GER_Carrier_Rig_2", "CUP_V_B_MTV_LegPouch", "CUP_V_B_MTV", "CUP_V_B_LHDVest_Red", "CUP_V_B_RRV_DA1", "CUP_V_B_LHDVest_Blue", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_I_Guerilla_Jacket", "CUP_V_B_MTV_MG", "CUP_V_B_MTV", "CUP_V_B_MTV_noCB", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_B_LHDVest_Yellow", "CUP_V_B_GER_Vest_2", "CUP_V_O_TK_CrewBelt", "CUP_V_O_TK_OfficerBelt2", "CUP_V_B_RRV_TL", "CUP_V_B_GER_Carrier_Vest", "CUP_V_B_LHDVest_Blue", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_B_RRV_TL", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_B_RRV_MG", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_B_MTV_Patrol", "CUP_V_O_TK_Vest_2", "CUP_V_O_TK_Vest_1", "CUP_V_B_MTV_Pouches", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_B_GER_Vest_2", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_B_RRV_DA2", "CUP_V_B_LHDVest_White", "CUP_V_B_MTV", "CUP_V_I_Guerilla_Jacket", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_B_GER_Vest_1", "CUP_V_B_MTV", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_B_GER_Carrier_Rig", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_B_GER_Vest_1", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_B_RRV_MG", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_B_MTV_TL", "CUP_V_B_RRV_Scout", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_B_GER_Carrier_Rig_2", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_B_MTV_MG", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_B_LHDVest_Yellow", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_B_RRV_Scout", "CUP_V_B_RRV_Officer", "CUP_V_O_TK_Vest_1", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_B_MTV_Patrol", "CUP_V_B_RRV_MG", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_B_GER_Vest_2", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_B_MTV_Pouches", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_B_LHDVest_Violet", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_B_RRV_DA1", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_I_Carrier_Belt", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_B_PilotVest", "CUP_V_B_MTV_noCB", "CUP_V_O_TK_CrewBelt", "CUP_V_B_RRV_Scout2", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_O_TK_Vest_2", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_B_RRV_TL", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_B_GER_Carrier_Vest", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_O_TK_CrewBelt", "CUP_V_B_MTV_PistolBlack", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_B_RRV_MG", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_B_LHDVest_Brown", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_B_RRV_Medic", "CUP_V_B_RRV_Scout", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_B_MTV_TL", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_I_Carrier_Belt", "CUP_V_B_LHDVest_Yellow", "CUP_V_B_RRV_TL", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_O_TK_OfficerBelt2", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_B_MTV_Marksman", "CUP_V_B_MTV_Marksman", "CUP_V_B_RRV_Scout2", "CUP_V_B_LHDVest_Red", "CUP_V_B_MTV_Mine", "CUP_V_B_RRV_Light", "CUP_V_I_Carrier_Belt", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_B_MTV_Mine", "CUP_V_B_MTV_PistolBlack", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_B_RRV_TL", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_B_RRV_Scout2", "CUP_V_O_TK_OfficerBelt", "CUP_V_I_Guerilla_Jacket", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_B_GER_Carrier_Vest", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_B_RRV_Scout2", "CUP_V_B_GER_Vest_2", "CUP_V_B_MTV_Pouches", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_B_RRV_Medic", "CUP_V_B_RRV_Medic", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_B_GER_Carrier_Vest", "CUP_V_B_GER_Carrier_Rig_2", "CUP_V_B_GER_Vest_1", "CUP_V_B_LHDVest_Green", "CUP_V_B_GER_Carrier_Vest", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_B_LHDVest_Red", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_O_TK_OfficerBelt2", "CUP_V_O_TK_OfficerBelt", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_B_LHDVest_Blue", "CUP_V_B_PilotVest", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_O_TK_CrewBelt", "CUP_V_B_MTV_Marksman", "CUP_V_B_LHDVest_Violet", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_B_MTV_Patrol", "CUP_V_B_GER_Vest_1", "CUP_V_I_Guerilla_Jacket", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_I_Carrier_Belt", "CUP_V_B_GER_Carrier_Rig", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_B_MTV_PistolBlack", "CUP_V_B_LHDVest_White", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_B_RRV_Scout", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_B_PilotVest", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_B_MTV_PistolBlack", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_O_TK_OfficerBelt", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_B_MTV_Pouches", "CUP_V_B_RRV_Officer", "CUP_V_B_RRV_DA2", "CUP_V_O_TK_OfficerBelt", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_B_MTV_Patrol", "CUP_V_O_TK_OfficerBelt", "CUP_V_O_TK_Vest_1", "CUP_V_B_MTV_Pouches", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_B_MTV", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_O_TK_Vest_1", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_B_RRV_Light", "CUP_V_B_LHDVest_Red", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_B_RRV_Scout3", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_B_RRV_MG", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_B_MTV_Mine", "CUP_V_B_LHDVest_Violet", "CUP_V_B_LHDVest_Green", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_O_TK_CrewBelt", "CUP_V_B_MTV_TL", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_B_GER_Carrier_Rig", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_LHDVest_Blue", "CUP_V_B_MTV_LegPouch", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_B_LHDVest_Yellow"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0,81%
			H_CrewHelmetHeli_I        = 0,81%
			H_CrewHelmetHeli_O        = 0,81%
			H_HelmetB_camo            = 0,81%
			H_HelmetCrew_B            = 0,81%
			H_HelmetCrew_I            = 0,81%
			H_HelmetCrew_O            = 0,81%
			H_HelmetLeaderO_ocamo     = 0,81%
			H_HelmetLeaderO_oucamo    = 0,81%
			H_HelmetO_ghex_F          = 0,81%
			H_HelmetO_ocamo           = 0,81%
			H_HelmetO_oucamo          = 0,81%
			H_HelmetSpecO_blk         = 0,81%
			H_HelmetSpecO_ocamo       = 0,81%
			H_PilotHelmetFighter_B    = 0,81%
			H_PilotHelmetFighter_I    = 0,81%
			H_PilotHelmetFighter_O    = 0,81%
			H_PilotHelmetHeli_B       = 0,81%
			H_PilotHelmetHeli_I       = 0,81%
			H_PilotHelmetHeli_O       = 0,81%
			H_BandMask_demon          = 1,63%
			H_BandMask_khk            = 1,63%
			H_BandMask_reaper         = 1,63%
			H_Beret_gen_F             = 1,63%
			H_Helmet_Skate            = 1,63%
			H_HelmetB_black           = 1,63%
			H_HelmetB_desert          = 1,63%
			H_HelmetB_Enh_tna_F       = 1,63%
			H_HelmetB_grass           = 1,63%
			H_HelmetB_light_black     = 1,63%
			H_HelmetB_light_desert    = 1,63%
			H_HelmetB_light_grass     = 1,63%
			H_HelmetB_light_sand      = 1,63%
			H_HelmetB_light_snakeskin = 1,63%
			H_HelmetB_Light_tna_F     = 1,63%
			H_HelmetB_sand            = 1,63%
			H_HelmetB_snakeskin       = 1,63%
			H_HelmetB_TI_tna_F        = 1,63%
			H_HelmetB_tna_F           = 1,63%
			H_HelmetCrew_O_ghex_F     = 1,63%
			H_HelmetIA_camo           = 1,63%
			H_HelmetIA_net            = 1,63%
			H_HelmetLeaderO_ghex_F    = 1,63%
			H_HelmetSpecO_ghex_F      = 1,63%
			H_HelmetB                 = 2,44%
			H_HelmetB_light           = 2,44%
			H_HelmetB_paint           = 2,44%
			H_HelmetB_plain_blk       = 2,44%
			H_HelmetIA                = 2,44%
			H_HelmetSpecB             = 2,44%
			H_HelmetSpecB_blk         = 2,44%
			H_HelmetSpecB_paint1      = 2,44%
			H_HelmetSpecB_paint2      = 2,44%
			Exile_Headgear_GasMask    = 3,25%
			H_MilCap_blue             = 3,25%
			H_MilCap_dgtl             = 3,25%
			H_MilCap_mcamo            = 3,25%
			H_MilCap_ocamo            = 3,25%
			H_MilCap_oucamo           = 3,25%
			H_MilCap_rucamo           = 3,25%
		*/
		MilitaryHeadgear[] = {"H_MilCap_dgtl", "H_CrewHelmetHeli_B", "H_HelmetB_light_black", "H_HelmetB", "H_MilCap_ocamo", "H_HelmetSpecB_paint2", "H_MilCap_oucamo", "H_HelmetCrew_B", "H_MilCap_mcamo", "H_HelmetB_snakeskin", "H_BandMask_reaper", "H_PilotHelmetFighter_I", "H_HelmetB_sand", "H_MilCap_dgtl", "Exile_Headgear_GasMask", "H_MilCap_ocamo", "H_MilCap_dgtl", "H_HelmetB_light", "H_MilCap_blue", "H_HelmetSpecB", "H_HelmetB_light", "H_HelmetSpecB_blk", "H_HelmetLeaderO_ghex_F", "H_MilCap_oucamo", "H_Beret_gen_F", "H_HelmetCrew_I", "H_HelmetB_paint", "H_HelmetO_ocamo", "H_HelmetB_TI_tna_F", "Exile_Headgear_GasMask", "H_MilCap_rucamo", "H_HelmetB_TI_tna_F", "H_HelmetB_grass", "Exile_Headgear_GasMask", "H_HelmetB_light_snakeskin", "H_BandMask_demon", "H_MilCap_mcamo", "H_HelmetSpecB_paint1", "H_HelmetSpecB", "H_HelmetLeaderO_ghex_F", "H_HelmetLeaderO_ocamo", "H_PilotHelmetHeli_O", "H_MilCap_rucamo", "H_MilCap_rucamo", "H_HelmetSpecB_paint2", "H_CrewHelmetHeli_I", "H_HelmetB_snakeskin", "H_PilotHelmetFighter_O", "H_MilCap_blue", "H_MilCap_dgtl", "H_HelmetB_desert", "H_HelmetB_black", "H_HelmetO_ghex_F", "H_MilCap_ocamo", "H_HelmetB_paint", "H_HelmetSpecB_paint1", "H_HelmetB_tna_F", "H_PilotHelmetFighter_B", "H_HelmetSpecB_paint1", "H_HelmetB_light_sand", "H_HelmetB_light_black", "H_MilCap_oucamo", "H_HelmetB_plain_blk", "H_HelmetB_light", "H_HelmetB", "H_HelmetB_light_desert", "H_MilCap_mcamo", "H_HelmetB_sand", "H_HelmetCrew_O_ghex_F", "H_HelmetB_light_snakeskin", "H_HelmetB_black", "H_BandMask_khk", "H_PilotHelmetHeli_I", "H_HelmetIA_net", "H_HelmetLeaderO_oucamo", "H_HelmetB_grass", "H_HelmetB_Enh_tna_F", "H_HelmetB", "H_HelmetSpecO_blk", "H_HelmetIA_camo", "H_HelmetIA", "H_HelmetB_plain_blk", "Exile_Headgear_GasMask", "H_HelmetB_paint", "H_HelmetSpecO_ocamo", "H_HelmetB_light_sand", "H_BandMask_khk", "H_HelmetCrew_O_ghex_F", "H_MilCap_oucamo", "H_Helmet_Skate", "H_BandMask_demon", "H_Beret_gen_F", "H_HelmetCrew_O", "H_HelmetB_tna_F", "H_CrewHelmetHeli_O", "H_MilCap_blue", "H_HelmetSpecB_paint2", "H_PilotHelmetHeli_B", "H_HelmetB_light_grass", "H_Helmet_Skate", "H_HelmetIA", "H_HelmetIA", "H_HelmetB_desert", "H_HelmetB_camo", "H_HelmetSpecB", "H_HelmetSpecB_blk", "H_HelmetO_oucamo", "H_HelmetB_Light_tna_F", "H_HelmetB_light_grass", "H_MilCap_blue", "H_HelmetSpecB_blk", "H_BandMask_reaper", "H_HelmetIA_camo", "H_HelmetB_Light_tna_F", "H_HelmetB_light_desert", "H_HelmetB_plain_blk", "H_HelmetB_Enh_tna_F", "H_MilCap_ocamo", "H_HelmetIA_net", "H_MilCap_rucamo", "H_MilCap_mcamo", "H_HelmetSpecO_ghex_F", "H_HelmetSpecO_ghex_F"};

		/*
			Percental Item Spawn Chances of CUP_MilitaryHeadgear:

			CUP_H_BAF_Helmet_1_DDPM              = 0,91%
			CUP_H_BAF_Helmet_1_DPM               = 0,91%
			CUP_H_BAF_Helmet_1_MTP               = 0,91%
			CUP_H_BAF_Helmet_2_DDPM              = 0,91%
			CUP_H_BAF_Helmet_2_DPM               = 0,91%
			CUP_H_BAF_Helmet_2_MTP               = 0,91%
			CUP_H_BAF_Helmet_3_DDPM              = 0,91%
			CUP_H_BAF_Helmet_3_DPM               = 0,91%
			CUP_H_BAF_Helmet_3_MTP               = 0,91%
			CUP_H_BAF_Helmet_4_DDPM              = 0,91%
			CUP_H_BAF_Helmet_4_DPM               = 0,91%
			CUP_H_BAF_Helmet_4_MTP               = 0,91%
			CUP_H_BAF_Officer_Beret_PRR_O        = 0,91%
			CUP_H_C_Beanie_01                    = 0,91%
			CUP_H_C_Beanie_02                    = 0,91%
			CUP_H_C_Beanie_03                    = 0,91%
			CUP_H_C_Beanie_04                    = 0,91%
			CUP_H_C_Beret_01                     = 0,91%
			CUP_H_C_Beret_02                     = 0,91%
			CUP_H_C_Beret_03                     = 0,91%
			CUP_H_C_Beret_04                     = 0,91%
			CUP_H_C_Ushanka_01                   = 0,91%
			CUP_H_C_Ushanka_02                   = 0,91%
			CUP_H_C_Ushanka_03                   = 0,91%
			CUP_H_C_Ushanka_04                   = 0,91%
			CUP_H_FR_BandanaGreen                = 0,91%
			CUP_H_FR_BandanaWdl                  = 0,91%
			CUP_H_FR_Bandana_Headset             = 0,91%
			CUP_H_FR_BeanieGreen                 = 0,91%
			CUP_H_FR_BoonieMARPAT                = 0,91%
			CUP_H_FR_BoonieWDL                   = 0,91%
			CUP_H_FR_Cap_Headset_Green           = 0,91%
			CUP_H_FR_Cap_Officer_Headset         = 0,91%
			CUP_H_FR_ECH                         = 0,91%
			CUP_H_FR_Headband_Headset            = 0,91%
			CUP_H_FR_Headset                     = 0,91%
			CUP_H_FR_PRR_BoonieWDL               = 0,91%
			CUP_H_GER_Boonie_Flecktarn           = 0,91%
			CUP_H_GER_Boonie_desert              = 0,91%
			CUP_H_NAPA_Fedora                    = 0,91%
			CUP_H_Navy_CrewHelmet_Blue           = 0,91%
			CUP_H_Navy_CrewHelmet_Brown          = 0,91%
			CUP_H_Navy_CrewHelmet_Green          = 0,91%
			CUP_H_Navy_CrewHelmet_Red            = 0,91%
			CUP_H_Navy_CrewHelmet_Violet         = 0,91%
			CUP_H_Navy_CrewHelmet_White          = 0,91%
			CUP_H_Navy_CrewHelmet_Yellow         = 0,91%
			CUP_H_PMC_Cap_Grey                   = 0,91%
			CUP_H_PMC_Cap_PRR_Grey               = 0,91%
			CUP_H_PMC_Cap_PRR_Tan                = 0,91%
			CUP_H_PMC_Cap_Tan                    = 0,91%
			CUP_H_PMC_EP_Headset                 = 0,91%
			CUP_H_PMC_PRR_Headset                = 0,91%
			CUP_H_RACS_Beret_Blue                = 0,91%
			CUP_H_RACS_Helmet_DPAT               = 0,91%
			CUP_H_RACS_Helmet_Des                = 0,91%
			CUP_H_RACS_Helmet_Goggles_DPAT       = 0,91%
			CUP_H_RACS_Helmet_Goggles_Des        = 0,91%
			CUP_H_RACS_Helmet_Headset_DPAT       = 0,91%
			CUP_H_RACS_Helmet_Headset_Des        = 0,91%
			CUP_H_SLA_BeenieGreen                = 0,91%
			CUP_H_SLA_Beret                      = 0,91%
			CUP_H_SLA_Boonie                     = 0,91%
			CUP_H_SLA_Helmet                     = 0,91%
			CUP_H_SLA_OfficerCap                 = 0,91%
			CUP_H_SLA_Pilot_Helmet               = 0,91%
			CUP_H_SLA_SLCap                      = 0,91%
			CUP_H_SLA_TankerHelmet               = 0,91%
			CUP_H_TKI_Lungee_01                  = 0,91%
			CUP_H_TKI_Lungee_02                  = 0,91%
			CUP_H_TKI_Lungee_03                  = 0,91%
			CUP_H_TKI_Lungee_04                  = 0,91%
			CUP_H_TKI_Lungee_05                  = 0,91%
			CUP_H_TKI_Lungee_06                  = 0,91%
			CUP_H_TKI_Lungee_Open_01             = 0,91%
			CUP_H_TKI_Lungee_Open_02             = 0,91%
			CUP_H_TKI_Lungee_Open_03             = 0,91%
			CUP_H_TKI_Lungee_Open_04             = 0,91%
			CUP_H_TKI_Lungee_Open_05             = 0,91%
			CUP_H_TKI_Lungee_Open_06             = 0,91%
			CUP_H_TKI_Pakol_1_01                 = 0,91%
			CUP_H_TKI_Pakol_1_02                 = 0,91%
			CUP_H_TKI_Pakol_1_03                 = 0,91%
			CUP_H_TKI_Pakol_1_04                 = 0,91%
			CUP_H_TKI_Pakol_1_05                 = 0,91%
			CUP_H_TKI_Pakol_1_06                 = 0,91%
			CUP_H_TKI_Pakol_2_01                 = 0,91%
			CUP_H_TKI_Pakol_2_02                 = 0,91%
			CUP_H_TKI_Pakol_2_03                 = 0,91%
			CUP_H_TKI_Pakol_2_04                 = 0,91%
			CUP_H_TKI_Pakol_2_05                 = 0,91%
			CUP_H_TKI_Pakol_2_06                 = 0,91%
			CUP_H_TKI_SkullCap_01                = 0,91%
			CUP_H_TKI_SkullCap_02                = 0,91%
			CUP_H_TKI_SkullCap_03                = 0,91%
			CUP_H_TKI_SkullCap_04                = 0,91%
			CUP_H_TKI_SkullCap_05                = 0,91%
			CUP_H_TKI_SkullCap_06                = 0,91%
			CUP_H_TK_Beret                       = 0,91%
			CUP_H_TK_Helmet                      = 0,91%
			CUP_H_TK_Lungee                      = 0,91%
			CUP_H_TK_PilotHelmet                 = 0,91%
			CUP_H_TK_TankerHelmet                = 0,91%
			CUP_H_USMC_Crew_Helmet               = 0,91%
			CUP_H_USMC_Goggles_HelmetWDL         = 0,91%
			CUP_H_USMC_HeadSet_GoggleW_HelmetWDL = 0,91%
			CUP_H_USMC_HeadSet_HelmetWDL         = 0,91%
			CUP_H_USMC_HelmetWDL                 = 0,91%
			CUP_H_USMC_Helmet_Pilot              = 0,91%
			CUP_H_USMC_Officer_Cap               = 0,91%
		*/
		CUP_MilitaryHeadgear[] = {"CUP_H_RACS_Helmet_Headset_Des", "CUP_H_SLA_Helmet", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_SLA_Boonie", "CUP_H_C_Beanie_01", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_C_Ushanka_02", "CUP_H_C_Ushanka_03", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_TKI_Pakol_1_04", "CUP_H_TKI_Lungee_Open_05", "CUP_H_C_Ushanka_01", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_FR_Cap_Headset_Green", "CUP_H_TKI_Pakol_1_03", "CUP_H_TK_Beret", "CUP_H_FR_Headband_Headset", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_C_Beanie_04", "CUP_H_SLA_Beret", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_RACS_Beret_Blue", "CUP_H_FR_Cap_Headset_Green", "CUP_H_TKI_SkullCap_03", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_TKI_Lungee_Open_02", "CUP_H_FR_BandanaWdl", "CUP_H_TK_Helmet", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_GER_Boonie_desert", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_SLA_BeenieGreen", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_SLA_Pilot_Helmet", "CUP_H_RACS_Helmet_Goggles_Des", "CUP_H_TKI_Lungee_Open_04", "CUP_H_C_Beanie_02", "CUP_H_SLA_Helmet", "CUP_H_RACS_Helmet_Des", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_TKI_SkullCap_06", "CUP_H_TKI_SkullCap_02", "CUP_H_RACS_Helmet_Des", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_TKI_Pakol_2_03", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_TKI_Pakol_2_03", "CUP_H_TKI_SkullCap_04", "CUP_H_RACS_Helmet_DPAT", "CUP_H_TK_TankerHelmet", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_TKI_Lungee_Open_06", "CUP_H_TKI_Pakol_1_04", "CUP_H_C_Beret_04", "CUP_H_FR_Headset", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_TKI_Lungee_Open_02", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_TKI_Pakol_2_06", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_TKI_Lungee_Open_05", "CUP_H_TKI_Lungee_02", "CUP_H_TKI_Lungee_Open_06", "CUP_H_FR_BoonieWDL", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_FR_BeanieGreen", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_PMC_EP_Headset", "CUP_H_FR_Headset", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_TKI_Lungee_Open_01", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_TKI_Lungee_Open_01", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_TKI_SkullCap_01", "CUP_H_USMC_Helmet_Pilot", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_TKI_Pakol_2_06", "CUP_H_C_Beanie_04", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Lungee_05", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_GER_Boonie_desert", "CUP_H_TKI_Lungee_02", "CUP_H_PMC_PRR_Headset", "CUP_H_TKI_Pakol_2_06", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_PMC_PRR_Headset", "CUP_H_TKI_Lungee_Open_03", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_GER_Boonie_desert", "CUP_H_TKI_Lungee_06", "CUP_H_TKI_Lungee_Open_05", "CUP_H_FR_ECH", "CUP_H_USMC_Helmet_Pilot", "CUP_H_TKI_Pakol_1_05", "CUP_H_TKI_Lungee_04", "CUP_H_USMC_Crew_Helmet", "CUP_H_TKI_SkullCap_02", "CUP_H_GER_Boonie_Flecktarn", "CUP_H_TKI_Lungee_06", "CUP_H_C_Beanie_03", "CUP_H_TKI_Pakol_2_02", "CUP_H_SLA_Boonie", "CUP_H_USMC_Crew_Helmet", "CUP_H_SLA_Helmet", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_C_Ushanka_01", "CUP_H_SLA_OfficerCap", "CUP_H_C_Beanie_02", "CUP_H_TKI_Lungee_03", "CUP_H_TKI_SkullCap_04", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_FR_Headband_Headset", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_SLA_TankerHelmet", "CUP_H_SLA_Helmet", "CUP_H_C_Beanie_04", "CUP_H_TK_TankerHelmet", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_TKI_Lungee_Open_01", "CUP_H_C_Beret_02", "CUP_H_TKI_SkullCap_03", "CUP_H_SLA_Beret", "CUP_H_C_Ushanka_02", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_C_Beret_03", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_BAF_Helmet_1_DDPM", "CUP_H_C_Beret_02", "CUP_H_FR_BoonieMARPAT", "CUP_H_NAPA_Fedora", "CUP_H_TKI_SkullCap_01", "CUP_H_C_Beanie_03", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_PMC_Cap_Grey", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_TKI_Pakol_2_05", "CUP_H_USMC_Crew_Helmet", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Lungee_Open_03", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_TK_TankerHelmet", "CUP_H_TKI_SkullCap_05", "CUP_H_USMC_HelmetWDL", "CUP_H_NAPA_Fedora", "CUP_H_TK_PilotHelmet", "CUP_H_FR_BoonieMARPAT", "CUP_H_C_Ushanka_03", "CUP_H_TKI_Pakol_1_04", "CUP_H_FR_Headband_Headset", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_C_Ushanka_04", "CUP_H_BAF_Helmet_1_DDPM", "CUP_H_TKI_SkullCap_01", "CUP_H_FR_BandanaGreen", "CUP_H_TKI_Pakol_2_04", "CUP_H_C_Ushanka_04", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_BAF_Helmet_1_DDPM", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_RACS_Beret_Blue", "CUP_H_Navy_CrewHelmet_White", "CUP_H_TKI_SkullCap_04", "CUP_H_TKI_Lungee_Open_01", "CUP_H_FR_Cap_Headset_Green", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_C_Beanie_02", "CUP_H_PMC_EP_Headset", "CUP_H_C_Beret_03", "CUP_H_TKI_Pakol_1_02", "CUP_H_TKI_Pakol_2_02", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_C_Beret_02", "CUP_H_TKI_Lungee_02", "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL", "CUP_H_RACS_Helmet_DPAT", "CUP_H_TK_Helmet", "CUP_H_TKI_Lungee_06", "CUP_H_FR_BeanieGreen", "CUP_H_TKI_Lungee_01", "CUP_H_TKI_Pakol_1_01", "CUP_H_FR_BeanieGreen", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_TKI_Pakol_1_03", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_TKI_Lungee_Open_02", "CUP_H_C_Ushanka_04", "CUP_H_TK_Helmet", "CUP_H_TK_Beret", "CUP_H_TKI_Pakol_1_01", "CUP_H_TKI_Lungee_Open_03", "CUP_H_TKI_Pakol_1_04", "CUP_H_TKI_Pakol_2_05", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_C_Ushanka_01", "CUP_H_TKI_Pakol_1_03", "CUP_H_SLA_SLCap", "CUP_H_USMC_HeadSet_HelmetWDL", "CUP_H_USMC_HelmetWDL", "CUP_H_C_Ushanka_01", "CUP_H_TK_Lungee", "CUP_H_C_Beanie_01", "CUP_H_RACS_Helmet_DPAT", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_C_Beret_04", "CUP_H_RACS_Helmet_Des", "CUP_H_USMC_Officer_Cap", "CUP_H_TKI_Pakol_2_03", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_TKI_SkullCap_04", "CUP_H_TKI_Pakol_1_01", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_SLA_TankerHelmet", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_USMC_HeadSet_HelmetWDL", "CUP_H_PMC_EP_Headset", "CUP_H_C_Beret_03", "CUP_H_GER_Boonie_desert", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_C_Ushanka_03", "CUP_H_SLA_OfficerCap", "CUP_H_FR_BandanaWdl", "CUP_H_TKI_Lungee_Open_04", "CUP_H_SLA_TankerHelmet", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_TKI_Pakol_1_03", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_TKI_SkullCap_05", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_SLA_SLCap", "CUP_H_USMC_Crew_Helmet", "CUP_H_C_Beret_01", "CUP_H_FR_Headband_Headset", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_TKI_SkullCap_05", "CUP_H_TK_Helmet", "CUP_H_PMC_Cap_Grey", "CUP_H_PMC_Cap_Tan", "CUP_H_TKI_Lungee_Open_06", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_SLA_SLCap", "CUP_H_TKI_Lungee_01", "CUP_H_FR_Bandana_Headset", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_TKI_Pakol_2_01", "CUP_H_Navy_CrewHelmet_White", "CUP_H_BAF_Helmet_1_DDPM", "CUP_H_TK_PilotHelmet", "CUP_H_TKI_SkullCap_05", "CUP_H_FR_ECH", "CUP_H_TKI_Lungee_04", "CUP_H_USMC_HelmetWDL", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_SLA_Boonie", "CUP_H_TK_PilotHelmet", "CUP_H_TKI_SkullCap_03", "CUP_H_SLA_Pilot_Helmet", "CUP_H_TKI_Pakol_1_06", "CUP_H_TKI_Pakol_2_02", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_RACS_Beret_Blue", "CUP_H_TK_PilotHelmet", "CUP_H_TKI_Pakol_2_06", "CUP_H_C_Beanie_02", "CUP_H_TKI_Pakol_2_02", "CUP_H_TKI_Lungee_03", "CUP_H_FR_Bandana_Headset", "CUP_H_C_Beanie_01", "CUP_H_GER_Boonie_Flecktarn", "CUP_H_SLA_BeenieGreen", "CUP_H_TK_Beret", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_NAPA_Fedora", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_TKI_SkullCap_06", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_USMC_Officer_Cap", "CUP_H_TKI_Lungee_Open_05", "CUP_H_Navy_CrewHelmet_White", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_TKI_Pakol_2_04", "CUP_H_SLA_Boonie", "CUP_H_TKI_Lungee_01", "CUP_H_TKI_Lungee_Open_05", "CUP_H_RACS_Helmet_Goggles_Des", "CUP_H_RACS_Helmet_Goggles_Des", "CUP_H_PMC_Cap_Grey", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_USMC_Officer_Cap", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_TKI_Pakol_2_05", "CUP_H_SLA_TankerHelmet", "CUP_H_USMC_HelmetWDL", "CUP_H_FR_BoonieWDL", "CUP_H_NAPA_Fedora", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_GER_Boonie_desert", "CUP_H_RACS_Helmet_Des", "CUP_H_USMC_HeadSet_HelmetWDL", "CUP_H_TKI_SkullCap_06", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_C_Ushanka_04", "CUP_H_SLA_BeenieGreen", "CUP_H_TKI_Lungee_Open_01", "CUP_H_FR_Cap_Headset_Green", "CUP_H_TKI_Lungee_06", "CUP_H_USMC_Helmet_Pilot", "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL", "CUP_H_TKI_Pakol_1_01", "CUP_H_TKI_Pakol_1_05", "CUP_H_FR_Bandana_Headset", "CUP_H_TK_Beret", "CUP_H_TKI_Lungee_04", "CUP_H_FR_Bandana_Headset", "CUP_H_GER_Boonie_Flecktarn", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_PMC_EP_Headset", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_PMC_PRR_Headset", "CUP_H_SLA_SLCap", "CUP_H_FR_Headband_Headset", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_TK_Beret", "CUP_H_TKI_Pakol_1_05", "CUP_H_TKI_SkullCap_06", "CUP_H_SLA_OfficerCap", "CUP_H_PMC_Cap_Tan", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_C_Beanie_01", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_TKI_Pakol_2_03", "CUP_H_C_Beret_04", "CUP_H_C_Beret_01", "CUP_H_USMC_HeadSet_HelmetWDL", "CUP_H_C_Ushanka_02", "CUP_H_C_Ushanka_03", "CUP_H_TKI_Lungee_Open_04", "CUP_H_C_Beret_04", "CUP_H_USMC_HeadSet_HelmetWDL", "CUP_H_TKI_Lungee_Open_03", "CUP_H_FR_BoonieWDL", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_FR_BoonieWDL", "CUP_H_USMC_Helmet_Pilot", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_TKI_SkullCap_03", "CUP_H_C_Beanie_04", "CUP_H_FR_BandanaGreen", "CUP_H_C_Ushanka_01", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_TKI_Lungee_01", "CUP_H_FR_Headset", "CUP_H_PMC_PRR_Headset", "CUP_H_C_Ushanka_02", "CUP_H_TK_Lungee", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_FR_Bandana_Headset", "CUP_H_RACS_Helmet_Headset_Des", "CUP_H_FR_BoonieMARPAT", "CUP_H_FR_Headset", "CUP_H_RACS_Beret_Blue", "CUP_H_SLA_Pilot_Helmet", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_C_Beret_03", "CUP_H_SLA_Beret", "CUP_H_TKI_Lungee_Open_04", "CUP_H_FR_BeanieGreen", "CUP_H_Navy_CrewHelmet_White", "CUP_H_C_Ushanka_02", "CUP_H_TKI_Lungee_Open_02", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_USMC_Officer_Cap", "CUP_H_TKI_SkullCap_02", "CUP_H_TKI_Lungee_05", "CUP_H_SLA_BeenieGreen", "CUP_H_FR_BandanaWdl", "CUP_H_FR_BandanaGreen", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_TKI_Pakol_1_05", "CUP_H_TKI_Lungee_03", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_SLA_Beret", "CUP_H_TKI_Pakol_1_06", "CUP_H_TKI_Pakol_2_01", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_TKI_SkullCap_01", "CUP_H_TKI_SkullCap_01", "CUP_H_TKI_Lungee_05", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_RACS_Helmet_Headset_Des", "CUP_H_TKI_Pakol_1_02", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Lungee_Open_04", "CUP_H_FR_BoonieWDL", "CUP_H_RACS_Helmet_Goggles_Des", "CUP_H_NAPA_Fedora", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_SLA_OfficerCap", "CUP_H_GER_Boonie_Flecktarn", "CUP_H_TKI_Pakol_1_01", "CUP_H_TKI_Pakol_1_06", "CUP_H_C_Beret_01", "CUP_H_TKI_SkullCap_02", "CUP_H_SLA_TankerHelmet", "CUP_H_C_Beanie_04", "CUP_H_TKI_Lungee_03", "CUP_H_RACS_Beret_Blue", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_TKI_Pakol_2_06", "CUP_H_Navy_CrewHelmet_White", "CUP_H_FR_ECH", "CUP_H_TK_PilotHelmet", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_C_Beret_03", "CUP_H_C_Beanie_03", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_FR_Headset", "CUP_H_PMC_Cap_Tan", "CUP_H_GER_Boonie_Flecktarn", "CUP_H_FR_BoonieMARPAT", "CUP_H_FR_BandanaGreen", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_TKI_Pakol_1_02", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_TKI_SkullCap_05", "CUP_H_TKI_SkullCap_06", "CUP_H_TK_Lungee", "CUP_H_TKI_Lungee_Open_03", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_TK_Helmet", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_C_Beret_04", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_FR_BeanieGreen", "CUP_H_TKI_Pakol_2_01", "CUP_H_TKI_Pakol_2_01", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_SLA_OfficerCap", "CUP_H_TKI_Lungee_02", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_C_Beret_01", "CUP_H_TKI_Pakol_2_02", "CUP_H_SLA_BeenieGreen", "CUP_H_FR_ECH", "CUP_H_TK_Lungee", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_USMC_Crew_Helmet", "CUP_H_TKI_SkullCap_04", "CUP_H_PMC_Cap_Grey", "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL", "CUP_H_TKI_Lungee_Open_06", "CUP_H_TKI_Pakol_2_03", "CUP_H_C_Beret_01", "CUP_H_C_Ushanka_03", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_TKI_Pakol_1_06", "CUP_H_USMC_HelmetWDL", "CUP_H_FR_BoonieMARPAT", "CUP_H_PMC_EP_Headset", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_C_Beanie_03", "CUP_H_TKI_Pakol_1_05", "CUP_H_TKI_Lungee_06", "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL", "CUP_H_TKI_Lungee_05", "CUP_H_TK_TankerHelmet", "CUP_H_TK_TankerHelmet", "CUP_H_C_Beanie_03", "CUP_H_TKI_Lungee_04", "CUP_H_RACS_Helmet_Goggles_Des", "CUP_H_SLA_SLCap", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_PMC_PRR_Headset", "CUP_H_RACS_Helmet_DPAT", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_TKI_Pakol_1_02", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_PMC_Cap_Tan", "CUP_H_TKI_Lungee_03", "CUP_H_TKI_SkullCap_03", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL", "CUP_H_TKI_Pakol_2_05", "CUP_H_FR_BandanaWdl", "CUP_H_C_Ushanka_04", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_FR_ECH", "CUP_H_PMC_Cap_Grey", "CUP_H_TKI_Lungee_02", "CUP_H_RACS_Helmet_Des", "CUP_H_TKI_Pakol_1_02", "CUP_H_C_Beanie_02", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_SLA_Helmet", "CUP_H_TKI_Lungee_Open_02", "CUP_H_TK_Lungee", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_PMC_Cap_Tan", "CUP_H_TKI_Pakol_1_03", "CUP_H_TKI_Pakol_2_01", "CUP_H_TKI_Pakol_2_05", "CUP_H_RACS_Helmet_Headset_Des", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_C_Beret_02", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_C_Beret_02", "CUP_H_FR_BandanaWdl", "CUP_H_SLA_Beret", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_SLA_Boonie", "CUP_H_FR_Cap_Headset_Green", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_TKI_Lungee_05", "CUP_H_RACS_Helmet_DPAT", "CUP_H_TKI_Pakol_1_04", "CUP_H_SLA_Pilot_Helmet", "CUP_H_TKI_Lungee_Open_06", "CUP_H_TKI_Lungee_04", "CUP_H_FR_BandanaGreen", "CUP_H_TKI_Lungee_01", "CUP_H_SLA_Pilot_Helmet", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_USMC_Helmet_Pilot", "CUP_H_TKI_SkullCap_02", "CUP_H_USMC_Officer_Cap", "CUP_H_RACS_Helmet_Headset_Des", "CUP_H_TKI_Pakol_1_06", "CUP_H_C_Beanie_01", "CUP_H_BAF_Helmet_1_DDPM"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33,33%
			U_O_GhillieSuit = 33,33%
			U_I_GhillieSuit = 33,33%
		*/
		Ghillies[] = {"U_I_GhillieSuit", "U_B_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			H_Ghillie_Suit1         = 2,70%
			H_Ghillie_Suit2         = 2,70%
			H_Ghillie_Suit3         = 2,70%
			U_B_FullGhillie_ard     = 2,70%
			U_B_FullGhillie_lsh     = 2,70%
			U_B_FullGhillie_sard    = 2,70%
			U_O_FullGhillie_ard     = 2,70%
			U_O_FullGhillie_lsh     = 2,70%
			U_O_FullGhillie_sard    = 2,70%
			U_I_FullGhillie_ard     = 2,70%
			U_I_FullGhillie_lsh     = 2,70%
			U_I_FullGhillie_sard    = 2,70%
			U_B_T_Sniper_F          = 13,51%
			U_B_T_Soldier_F         = 13,51%
			U_B_T_FullGhillie_tna_F = 13,51%
			U_O_T_Sniper_F          = 13,51%
			U_O_T_FullGhillie_tna_F = 13,51%
		*/
		DLCGhillies[] = {"U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_I_FullGhillie_sard", "U_B_FullGhillie_lsh", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_ard", "U_O_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_I_FullGhillie_lsh", "U_O_FullGhillie_ard", "H_Ghillie_Suit1", "U_O_FullGhillie_lsh", "U_B_T_Sniper_F", "H_Ghillie_Suit2", "U_B_T_Sniper_F", "U_I_FullGhillie_ard", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "H_Ghillie_Suit3", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_B_T_Soldier_F", "U_B_T_Soldier_F", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_FullGhillie_sard", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4,76%
			V_PlateCarrierGL_mtp         = 4,76%
			V_PlateCarrierGL_rgr         = 4,76%
			V_PlateCarrierIAGL_dgtl      = 4,76%
			V_PlateCarrierIAGL_oli       = 4,76%
			V_PlateCarrierSpec_blk       = 4,76%
			V_PlateCarrierSpec_mtp       = 4,76%
			V_PlateCarrierSpec_rgr       = 4,76%
			V_TacChestrig_grn_F          = 4,76%
			V_TacChestrig_oli_F          = 4,76%
			V_TacChestrig_cbr_F          = 4,76%
			V_PlateCarrier1_tna_F        = 4,76%
			V_PlateCarrier2_tna_F        = 4,76%
			V_PlateCarrierSpec_tna_F     = 4,76%
			V_PlateCarrierGL_tna_F       = 4,76%
			V_HarnessO_ghex_F            = 4,76%
			V_HarnessOGL_ghex_F          = 4,76%
			V_BandollierB_ghex_F         = 4,76%
			V_TacVest_gen_F              = 4,76%
			V_PlateCarrier1_rgr_noflag_F = 4,76%
			V_PlateCarrier2_rgr_noflag_F = 4,76%
		*/
		DLCVests[] = {"V_PlateCarrierIAGL_dgtl", "V_TacVest_gen_F", "V_HarnessO_ghex_F", "V_PlateCarrierGL_mtp", "V_BandollierB_ghex_F", "V_PlateCarrier2_tna_F", "V_TacChestrig_oli_F", "V_PlateCarrierGL_rgr", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_mtp", "V_HarnessOGL_ghex_F", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierIAGL_oli", "V_TacChestrig_cbr_F", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrierGL_tna_F", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_rgr_noflag_F", "V_TacChestrig_grn_F", "V_PlateCarrierGL_blk"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33,33%
			V_RebreatherIR = 33,33%
			V_RebreatherIA = 33,33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherB", "V_RebreatherIA"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exitem_bloodbag            = 1,41%
			Exile_Item_InstaDoc        = 4,23%
			Exitem_purificationtablets = 5,63%
			Exile_Item_Bandage         = 9,86%
			Exitem_antibiotic          = 14,08%
			Exitem_painkillers         = 14,08%
			Exitem_vitamins            = 9,86%
			Exile_Item_Vishpirin       = 9,86%
			Exile_Item_Defibrillator   = 1,41%
			Exitem_dressing            = 9,86%
			Exitem_firstaid            = 5,63%
			Exitem_bloodbag_empty      = 4,23%
			Exitem_surgerykit          = 1,41%
			Exitem_makeshift_bandage   = 8,45%
		*/
		MedicalItems[] = {"Exitem_bloodbag_empty", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exitem_vitamins", "Exitem_dressing", "Exile_Item_Bandage", "Exitem_makeshift_bandage", "Exitem_painkillers", "Exitem_dressing", "Exitem_painkillers", "Exile_Item_InstaDoc", "Exitem_bloodbag_empty", "Exitem_antibiotic", "Exitem_bloodbag_empty", "Exitem_antibiotic", "Exitem_painkillers", "Exitem_antibiotic", "Exitem_makeshift_bandage", "Exitem_painkillers", "Exile_Item_Vishpirin", "Exitem_painkillers", "Exile_Item_Vishpirin", "Exitem_painkillers", "Exitem_dressing", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exitem_antibiotic", "Exitem_vitamins", "Exile_Item_Bandage", "Exitem_surgerykit", "Exitem_purificationtablets", "Exitem_vitamins", "Exitem_purificationtablets", "Exitem_antibiotic", "Exitem_antibiotic", "Exitem_firstaid", "Exitem_painkillers", "Exitem_antibiotic", "Exitem_antibiotic", "Exitem_antibiotic", "Exile_Item_Bandage", "Exitem_dressing", "Exile_Item_InstaDoc", "Exitem_painkillers", "Exitem_makeshift_bandage", "Exile_Item_Bandage", "Exitem_antibiotic", "Exitem_painkillers", "Exitem_makeshift_bandage", "Exitem_purificationtablets", "Exitem_firstaid", "Exitem_firstaid", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exitem_makeshift_bandage", "Exitem_bloodbag", "Exitem_vitamins", "Exitem_dressing", "Exitem_painkillers", "Exitem_vitamins", "Exitem_dressing", "Exitem_vitamins", "Exitem_firstaid", "Exitem_dressing", "Exitem_vitamins", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exitem_purificationtablets", "Exitem_makeshift_bandage", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of Miscellaneous:

			Exitem_can_crushed    = 4,50%
			Exitem_cinderblock    = 4,50%
			Exitem_camera         = 4,50%
			Exitem_torch          = 4,50%
			Exitem_money          = 0,90%
			Exitem_bucket         = 4,50%
			Exitem_skull          = 4,50%
			Exitem_pillow_flannel = 4,50%
			Exitem_pillow         = 4,50%
			Exitem_pencil         = 4,50%
			Exitem_airhorn        = 4,50%
			Exitem_woodpile       = 4,50%
			Exitem_apsi           = 4,50%
			Exitem_multimeter     = 4,50%
			Exitem_measuringtape  = 4,50%
			Exitem_book1          = 4,50%
			Exitem_book2          = 4,50%
			Exitem_book3          = 4,50%
			Exitem_can_crushed2   = 4,50%
			Exitem_feathers       = 4,50%
			Exitem_bricks         = 4,50%
			Exitem_drum           = 4,50%
			Exitem_tarp           = 4,50%
		*/
		Miscellaneous[] = {"Exitem_can_crushed", "Exitem_torch", "Exitem_book1", "Exitem_woodpile", "Exitem_apsi", "Exitem_pencil", "Exitem_pillow_flannel", "Exitem_bricks", "Exitem_apsi", "Exitem_can_crushed", "Exitem_can_crushed", "Exitem_multimeter", "Exitem_book1", "Exitem_pillow_flannel", "Exitem_bucket", "Exitem_can_crushed2", "Exitem_skull", "Exitem_woodpile", "Exitem_drum", "Exitem_cinderblock", "Exitem_book2", "Exitem_pillow", "Exitem_airhorn", "Exitem_pillow_flannel", "Exitem_torch", "Exitem_skull", "Exitem_woodpile", "Exitem_bucket", "Exitem_pillow", "Exitem_cinderblock", "Exitem_woodpile", "Exitem_camera", "Exitem_measuringtape", "Exitem_torch", "Exitem_pillow", "Exitem_multimeter", "Exitem_can_crushed2", "Exitem_pillow", "Exitem_cinderblock", "Exitem_pencil", "Exitem_book2", "Exitem_book3", "Exitem_can_crushed2", "Exitem_apsi", "Exitem_drum", "Exitem_torch", "Exitem_pencil", "Exitem_airhorn", "Exitem_book3", "Exitem_skull", "Exitem_airhorn", "Exitem_feathers", "Exitem_book3", "Exitem_bricks", "Exitem_multimeter", "Exitem_book1", "Exitem_camera", "Exitem_tarp", "Exitem_bricks", "Exitem_multimeter", "Exitem_airhorn", "Exitem_can_crushed2", "Exitem_book2", "Exitem_pillow_flannel", "Exitem_book3", "Exitem_apsi", "Exitem_pillow_flannel", "Exitem_feathers", "Exitem_pencil", "Exitem_bucket", "Exitem_book1", "Exitem_skull", "Exitem_can_crushed", "Exitem_airhorn", "Exitem_book2", "Exitem_cinderblock", "Exitem_pencil", "Exitem_tarp", "Exitem_skull", "Exitem_feathers", "Exitem_book3", "Exitem_camera", "Exitem_feathers", "Exitem_tarp", "Exitem_tarp", "Exitem_bricks", "Exitem_feathers", "Exitem_multimeter", "Exitem_measuringtape", "Exitem_measuringtape", "Exitem_bucket", "Exitem_tarp", "Exitem_woodpile", "Exitem_money", "Exitem_bucket", "Exitem_can_crushed2", "Exitem_drum", "Exitem_cinderblock", "Exitem_pillow", "Exitem_drum", "Exitem_measuringtape", "Exitem_camera", "Exitem_camera", "Exitem_bricks", "Exitem_apsi", "Exitem_book2", "Exitem_torch", "Exitem_measuringtape", "Exitem_drum", "Exitem_can_crushed", "Exitem_book1"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exitem_advancedworkbench        = 0,58%
			RwG_Anvil_Kit                   = 0,58%
			RwG_Item_Electric_Engine        = 1,17%
			RwG_Overhead_Light_Kit          = 0,58%
			RwG_Item_Bench_Vise             = 1,75%
			RwG_Item_Wooden_Beams           = 1,17%
			Exitem_gascooker                = 2,34%
			Exitem_nails                    = 1,17%
			RwG_Item_Box_Of_Nails           = 1,17%
			Exitem_shelf_small              = 0,58%
			Exitem_shelf_large              = 0,58%
			Exitem_pallet_large             = 0,58%
			Exitem_board                    = 2,92%
			Exitem_watercatchment           = 0,58%
			Exitem_documents                = 0,58%
			Exitem_c4                       = 0,58%
			Exile_Item_ThermalScannerPro    = 0,58%
			Exile_Item_Knife                = 1,17%
			Exile_Item_Cement               = 1,75%
			Exile_Item_FloodLightKit        = 1,75%
			Exile_Item_PortableGeneratorKit = 1,75%
			Exile_Item_CamoTentKit          = 2,34%
			Exile_Item_MetalBoard           = 2,34%
			Exile_Item_Foolbox              = 2,34%
			Exile_Item_Sand                 = 2,34%
			Exile_Item_Grinder              = 2,92%
			Exile_Item_MetalScrews          = 2,92%
			Exile_Melee_SledgeHammer        = 2,92%
			Exile_Item_ExtensionCord        = 4,68%
			Exile_Item_LightBulb            = 5,26%
			Exile_Item_WaterCanisterEmpty   = 5,85%
			Exile_Melee_Shovel              = 5,85%
			Exile_Item_JunkMetal            = 6,43%
			Exile_Item_Handsaw              = 7,60%
			Exile_Item_Pliers               = 7,60%
			Exile_Item_ScrewDriver          = 7,60%
			Exile_Melee_Axe                 = 7,02%
		*/
		IndustrialItems[] = {"Exitem_advancedworkbench", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exitem_board", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_ExtensionCord", "Exile_Item_Foolbox", "Exile_Item_JunkMetal", "Exile_Item_CamoTentKit", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exitem_gascooker", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_Cement", "Exile_Item_MetalScrews", "Exile_Item_ExtensionCord", "Exile_Melee_SledgeHammer", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exitem_gascooker", "Exile_Item_Sand", "Exile_Item_LightBulb", "RwG_Item_Wooden_Beams", "Exile_Item_Sand", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Foolbox", "Exitem_board", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_Grinder", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Melee_SledgeHammer", "Exile_Melee_Shovel", "Exile_Item_Foolbox", "Exile_Item_MetalBoard", "RwG_Item_Box_Of_Nails", "Exile_Item_ScrewDriver", "Exile_Item_Cement", "Exile_Item_PortableGeneratorKit", "Exile_Item_Grinder", "Exitem_shelf_large", "Exile_Item_LightBulb", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_FloodLightKit", "RwG_Item_Wooden_Beams", "Exile_Item_Pliers", "Exile_Item_MetalScrews", "Exitem_nails", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_Foolbox", "Exile_Item_MetalScrews", "Exitem_board", "Exile_Item_Sand", "Exitem_watercatchment", "Exile_Item_PortableGeneratorKit", "Exile_Item_MetalBoard", "Exitem_board", "Exitem_pallet_large", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_Knife", "Exile_Melee_Axe", "Exile_Item_LightBulb", "RwG_Item_Bench_Vise", "Exile_Melee_SledgeHammer", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exitem_board", "RwG_Item_Electric_Engine", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exitem_nails", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exitem_gascooker", "RwG_Item_Bench_Vise", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Item_Handsaw", "RwG_Item_Electric_Engine", "Exile_Melee_Shovel", "Exile_Item_FloodLightKit", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "RwG_Item_Box_Of_Nails", "Exile_Melee_Shovel", "Exitem_c4", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_CamoTentKit", "Exitem_documents", "RwG_Item_Bench_Vise", "Exile_Item_ThermalScannerPro", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Item_PortableGeneratorKit", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "RwG_Overhead_Light_Kit", "Exitem_shelf_small", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Item_MetalScrews", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "RwG_Anvil_Kit", "Exitem_gascooker", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Handsaw"};

		/*
			Percental Item Spawn Chances of Vehicle:

			RwG_Item_Electric_Engine     = 4,55%
			RwG_Item_Bench_Vise          = 3,03%
			Exile_Item_FuelCanisterFull  = 6,06%
			Exile_Item_FuelCanisterEmpty = 7,58%
			Exile_Item_DuctTape          = 4,55%
			Exitem_nails                 = 1,52%
			RwG_Item_Box_Of_Nails        = 1,52%
			Exitem_documents             = 1,52%
			Exitem_c4                    = 1,52%
			Exitem_rotor                 = 4,55%
			Exitem_trucktire             = 4,55%
			Exitem_carbattery            = 4,55%
			Exitem_electronics           = 4,55%
			Exitem_glue                  = 4,55%
			Exitem_toolbox               = 3,03%
			Exitem_windshield            = 4,55%
			Exitem_fueltank              = 4,55%
			Exitem_engine                = 3,03%
			Exitem_cloth                 = 4,55%
			Exitem_scrapmetal            = 4,55%
			Exitem_plywood               = 4,55%
			Exitem_stones                = 4,55%
			Exitem_cooking_pot           = 4,55%
			Exitem_tire_repair_kit       = 3,03%
			Exitem_electricalcomp        = 4,55%
		*/
		Vehicle[] = {"Exitem_glue", "Exitem_fueltank", "Exitem_stones", "Exitem_glue", "Exitem_fueltank", "Exitem_plywood", "Exile_Item_FuelCanisterFull", "RwG_Item_Box_Of_Nails", "Exitem_electronics", "Exitem_toolbox", "RwG_Item_Bench_Vise", "RwG_Item_Bench_Vise", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exitem_engine", "Exitem_trucktire", "RwG_Item_Electric_Engine", "Exitem_carbattery", "Exitem_windshield", "Exile_Item_FuelCanisterEmpty", "Exitem_rotor", "RwG_Item_Electric_Engine", "Exile_Item_FuelCanisterFull", "Exitem_electronics", "Exile_Item_FuelCanisterEmpty", "Exitem_scrapmetal", "Exitem_carbattery", "Exitem_cooking_pot", "Exitem_trucktire", "Exitem_electricalcomp", "Exitem_electronics", "Exile_Item_FuelCanisterFull", "Exitem_cooking_pot", "Exitem_cloth", "Exitem_electricalcomp", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exitem_scrapmetal", "Exitem_cloth", "Exitem_windshield", "Exitem_cooking_pot", "Exitem_engine", "Exitem_trucktire", "Exitem_glue", "Exitem_cloth", "Exitem_c4", "Exitem_fueltank", "Exitem_nails", "Exitem_rotor", "Exitem_tire_repair_kit", "Exitem_stones", "Exitem_toolbox", "Exile_Item_DuctTape", "Exitem_tire_repair_kit", "Exitem_carbattery", "Exitem_documents", "Exile_Item_DuctTape", "Exitem_rotor", "Exitem_plywood", "Exitem_plywood", "RwG_Item_Electric_Engine", "Exitem_scrapmetal", "Exitem_windshield", "Exitem_stones", "Exile_Item_DuctTape", "Exitem_electricalcomp"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25,00%
			Chemlight_green  = 25,00%
			Chemlight_red    = 25,00%
			Chemlight_yellow = 25,00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_red", "Chemlight_blue", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25,00%
			FlareRed_F    = 25,00%
			FlareWhite_F  = 25,00%
			FlareYellow_F = 25,00%
		*/
		RoadFlares[] = {"FlareYellow_F", "FlareWhite_F", "FlareRed_F", "FlareGreen_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14,29%
			SmokeShellRed    = 14,29%
			SmokeShellGreen  = 14,29%
			SmokeShellYellow = 14,29%
			SmokeShellPurple = 14,29%
			SmokeShellBlue   = 14,29%
			SmokeShellOrange = 14,29%
		*/
		SmokeGrenades[] = {"SmokeShellPurple", "SmokeShell", "SmokeShellOrange", "SmokeShellBlue", "SmokeShellRed", "SmokeShellGreen", "SmokeShellYellow"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100,00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 20,00%
			Exile_Item_BaseCameraKit = 20,00%
			Exile_Item_MobilePhone   = 20,00%
			Item_SmartPhone          = 20,00%
			Item_MobilePhone         = 20,00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Item_SmartPhone", "Exile_Item_Laptop", "Item_MobilePhone", "Exile_Item_MobilePhone"};

		/*
			Percental Item Spawn Chances of Valuables:

			Exitem_money             = 33,33%
			Exitem_documents         = 20,00%
			Exile_Headgear_GasMask   = 20,00%
			Exile_Item_Defibrillator = 13,33%
			Exile_Item_InstaDoc      = 13,33%
		*/
		Valuables[] = {"Exitem_documents", "Exitem_money", "Exitem_money", "Exitem_documents", "Exitem_money", "Exile_Item_Defibrillator", "Exile_Headgear_GasMask", "Exitem_money", "Exitem_documents", "Exile_Item_Defibrillator", "Exile_Headgear_GasMask", "Exile_Headgear_GasMask", "Exitem_money", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of Trash:

			Exitem_purificationtablets    = 16,67%
			Exile_Item_Magazine01         = 5,56%
			Exile_Item_Magazine02         = 11,11%
			Exile_Item_Magazine03         = 5,56%
			Exile_Item_Magazine04         = 5,56%
			Exile_Item_Can_Empty          = 22,22%
			Exile_Item_PlasticBottleEmpty = 11,11%
			Exile_Item_ToiletPaper        = 22,22%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_Magazine03", "Exile_Item_PlasticBottleEmpty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_Magazine04", "Exile_Item_Magazine02", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_Magazine02", "Exitem_purificationtablets", "Exitem_purificationtablets", "Exitem_purificationtablets"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 12,50%
			Exile_Item_FireExtinguisher    = 12,50%
			Exile_Item_Rope                = 12,50%
			Exile_Item_Carwheel            = 12,50%
			Exile_Item_SleepingMat         = 12,50%
			Exile_Item_Wrench              = 12,50%
			Exile_Item_OilCanister         = 12,50%
			Exile_Item_Hammer              = 12,50%
		*/
		Unused[] = {"Exile_Item_Hammer", "Exile_Item_Rope", "Exile_Item_Carwheel", "Exile_Item_SleepingMat", "Exile_Item_OilCanister", "Exile_Item_FireExtinguisher", "Exile_Item_CordlessScrewdriver", "Exile_Item_Wrench"};
	};
};