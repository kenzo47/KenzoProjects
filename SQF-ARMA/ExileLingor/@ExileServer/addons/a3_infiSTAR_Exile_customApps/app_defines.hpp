/*
	max 10 customapps! (not more slots on the app page lol)
	in the function part you could also just call your custom function or BIS_FNC_XXX e.g.:

	class customapp_0 {
		submenu = 0;
		toggleable = 0;
		text = "Open BIS Arsenal";
		tooltip = "Open BIS Arsenal - Gear yourself up!";
		fnc = "if(isNil'infiSTAR_ADMINS')then{['ErrorTitleOnly', ['Only infiSTAR admins can use this!']] call ExileClient_gui_toaster_addTemplateToast;}else{['Open',true] call BIS_fnc_arsenal;};";
		pic = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
	};
*/
class customapp_0 {
	submenu = 1;
	toggleable = 0;
	text = "Donate";
	tooltip = "Donate to keep this server running!";
	fnc = "call apps_fnc_donate;";
	pic = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
};
class customapp_1 {
	submenu = 0;
	toggleable = 0;
	text = "Priv. Chat";
	tooltip = "Priv. Chat";
	fnc = "if(isNil'fnc_chat_send')then{['ErrorTitleOnly', ['This app needs infiSTAR.de AntiHack and AdminTools..!']] call ExileClient_gui_toaster_addTemplateToast;}else{if(isNull (findDisplay -1340))then{createdialog 'infiSTAR_CHAT';};};";
	pic = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
};
class customapp_2 {
	submenu = 1;
	toggleable = 0;
	text = "ViewDistance\nTerrain Grid";
	tooltip = "ViewDistance\nTerrain Grid";
	fnc = "false call apps_fnc_change_viewdistance;"; // true/false to toggle the terrain grid change option
	pic = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
};
class customapp_3 {
	submenu = 0;
	toggleable = 0;
	text = "Player Scan";
	tooltip = "Player Scan";
	fnc = "call apps_fnc_scan;";
	pic = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
};
class customapp_4 {
	submenu = 1;
	toggleable = 0;
	text = "Remote CCTV";
	tooltip = "Remote CCTV";
	fnc = "call apps_fnc_initremotecctv;";
	pic = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
};
class customapp_5 {
	submenu = 0;
	toggleable = 1;
	text = "Vehicle HP Bars";
	tooltip = "Vehicle HP Bars";
	fnc = "_this call apps_fnc_vehicle_hp_bars;";
	pic = "\exile_assets\texture\item\Exile_Item_DuctTape.paa";
};
class customapp_6 {
	submenu = 1;
	toggleable = 0;
	text = "Crafting Menu";
	tooltip = "List of craftable items";
	fnc = "_this call apps_fnc_Cookbook;";
	pic = "\exile_assets\texture\marker\concrete_mixer_ca.paa";
};
class customapp_7 {
	submenu = 0;
	toggleable = 0;
	text = "Deploy Quad";
	tooltip = "Deploys a Quad right infront of you, once per life!";
	fnc = "[['Exile_Bike_QuadBike_Black','Exile_Bike_QuadBike_Blue','Exile_Bike_QuadBike_Red','Exile_Bike_QuadBike_White','Exile_Bike_QuadBike_Nato','Exile_Bike_QuadBike_Csat','Exile_Bike_QuadBike_Fia','Exile_Bike_QuadBike_Guerilla01','Exile_Bike_QuadBike_Guerilla02'],'Exile_Item_ExtensionCord',0,0,true,true,true] call apps_fnc_deploy;";
	pic = "\A3\Soft_F\Quadbike_01\Data\UI\Quadbike_01_CA.paa";
};
/*
class customapp_8 {
	submenu = 0;
	toggleable = 0;
	text = "Deploy Quadbike";
	tooltip = "Deploys a quadbike right infront of you, once per life!";
	fnc = "['Exile_Bike_QuadBike_Black', 'Exile_Item_ExtensionCord', 0, 0, false, true, true] call apps_fnc_deploy;"; // [class, itemcost (empty '' - no item cost), poptabs from bank, respect, has to be bambi, can repack, once per life?]
	pic = "\dbo\dbo_old_bike\data\icon_mmt_ca.paa";
};
*/
/*
class customapp_9 {
	submenu = 1;
	toggleable = 0;
	text = "Donate 2";
	tooltip = "Donate to keep this server running!";
	fnc = "call apps_fnc_donate;";
	pic = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
};
class customapp_10 {
	submenu = 1;
	toggleable = 0;
	text = "Donate 3";
	tooltip = "Donate to keep this server running!";
	fnc = "call apps_fnc_donate;";
	pic = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
};
class customapp_11 {
	submenu = 1;
	toggleable = 0;
	text = "Donate 4";
	tooltip = "Donate to keep this server running!";
	fnc = "call apps_fnc_donate;";
	pic = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
};
*/