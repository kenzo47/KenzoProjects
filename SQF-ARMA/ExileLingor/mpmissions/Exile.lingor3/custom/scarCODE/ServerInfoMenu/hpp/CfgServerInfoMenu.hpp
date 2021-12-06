class CfgServerInfoMenu
{
   addAction = 0; // Enable/disable action menu item | use 0 to disable | default: 1 (enabled)
   antiHACK = "infiSTAR";
   hostedBy = "Hetzner";
   ipPort = "51.195.63.13:2302";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   openAtLogin = yes;
   restart = 4; // Amount of hours before server automatically restarts
   serverName = "Tripwire Gaming - Exile Lingor";
   class menuItems
   {
      // title AND content accept formatted text ( since update Oct5.2016 )
      class first
      {
         menuName = "General";
         title = "<t color='#ffffff'>GENERAL INFORMATION</t>";
         content[] = {
            "Welcome To Tripwire Gaming Community's Exile Lingor Server!"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
         "<t size='1.75'>Rule #1</t><br />Use common sense!<br />",
         "<t size='1.75'>Rule #2</t><br />No racism or excessive use of profanity.<br />",
			"<t size='1.75'>Rule #3</t><br />Don't camp bambi spawnzones or safezones.<br />",
         "<t size='1.75'>Rule #4</t><br />No kamikaze of any kind, this includes ramming unmanned vehicles.<br />",
			"<t size='1.75'>BUILDING RULES</t><br />",
			"Do not build within 1000m of a safezone.<br />",
			"Do not block military loot spawns or build within 300m of a military loot spawn.<br />",
			"Do not build on airfields.<br />",
			"If you're not sure about your building location ask an admin BEFORE you build.<br />"
         };
      };
      class third
      {
         menuName = "Crafting";
         title = "CRAFTING GUIDE";
         content[] = {
            "On the second page of your XM8 you can find a list of craftable items in the crafting menu."
            };
      };
      class fourth
      {
         menuName = "Admins";
         title = "ADMINISTRATORS";
         content[] = {
         "<t size='1'>Owner/Dev: kenzo47</t><br />",
         "<t size='1'>Owner/Dev: CHVMPVGN</t> "
         };
      };
      class fifth
      {
         menuName = "Scripts";
         title = "INSTALLED SCRIPTS";
         content[] = {
         "<t size='1'>Exile 64bit Edition Conversion by BrettNordin</t><br />",
         "<t size='1'>infiSTAR Custom Apps (Deploy Vehicle and Crafting Menu) by infiSTAR</t><br />",
         "<t size='1'>Enable XM8/Fix Stair bug script by unknown</t><br />",
         "<t size='1'>Claim Vehicle Ownership script by MezoPlays</t><br />",
         "<t size='1'>A3EX CMAT by El Rabito</t><br />",
         "<t size='1'>Exile Abandon Territory by MGTDB and El Rabito</t><br />",
         "<t size='1'>Enigma_Exile_Revive by happydayz-enigma</t><br />",
         "<t size='1'>Crate Sale logger Script by [GADD]Monkeynutz</t><br />",
         "<t size='1'>Loadout, SafeX, Dual Arms, Virtual Garage scripts by Andrew_S90</t><br />",
         "<t size='1'>DMS Exile by Defent</t><br />",
         "<t size='1'>ZCP Exile by Zupa</t><br />",
         "<t size='1'>ExileZ Mod by patrix87 and [FPS]kuplion</t><br />",
         "<t size='1'>R3F Logistics by madbull and Super Jerome</t><br />",
         "<t size='1'>Advanced Towing Script by Seth Duda</t><br />",         
         "<t size='1'>StatusBar by Creampie and [FPS]kuplion</t><br />",
         "<t size='1'>Server Info Menu by IT07</t><br />",
         "<t size='1'>XS Spawn Menu by bambam</t><br />",
         "<t size='1'>Lots of custom scripts/rebalancing by kenzo47 and CHVMPVGN</t><br />"
         };
      };
      class sixth
      {
         menuName = "Communication";
         title = "DISCORD";
         content[] = {
            "You can join our discord at: https://discord.gg/HnFCCz5pHz</t>"
         };
      };
      class seventh
      {
         menuName = "Credits";
         title = "CREDITS";
         content[] = {
         "<t size='1'>Thanks to all the creators of the scripts/mods</t><br />", 
			"<t size='1'>[BD] Bear for helping with setting up the server and troubleshooting</t><br />",
			"<t size='1'>[TGC] Lars for his python and loadout respect check script :)</t><br />",
			"<t size='1'>The Exile Discord Community for their help</t><br />",
			"</ br>",
			"<t size='1'>And a special thanks to the players on the server.</t>"
         };
      };
   };
};
