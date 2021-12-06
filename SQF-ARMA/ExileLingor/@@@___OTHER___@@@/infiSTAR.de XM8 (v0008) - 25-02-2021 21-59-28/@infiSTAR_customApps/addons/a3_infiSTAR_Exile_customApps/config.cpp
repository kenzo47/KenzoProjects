/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	Copyright infiSTAR. All rights reserved.

	What is this?
	A package with some custom Apps for your Exile xm8 that also allows you fairly easy to add more custom apps to it!
*/
class CfgPatches
{
	class a3_infiSTAR_Exile_customApps
	{
		requiredVersion = 0.vi8349010949;
		requiredAddons[] = {"exile_client"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		a3_infiSTAR_Exile_customApps_version = 0.vi8349010949;
		author[]= {"Chris(tian) 'infiSTAR' Lorenzen"};
		website[]= {"https://infiSTAR.de"};
		contact[]= {"admin@infiSTAR.de","infiSTAR23@gmail.com"};
		license[]= {contact = "mrkenzo47@gmail.com", version = "v0008", date = "25-02-2021 21-59-28"};
	};
};
class CfgFunctions
{
	class apps
	{
		class main
		{
			file = "a3_infiSTAR_Exile_customApps\init";
			class preInit { preInit = 1; };
		};
	};
};
class Cfg_infiSTAR_xm8apps
{
	class core
	{
		file = "a3_infiSTAR_Exile_customApps\core";
		class createctrl {};
		class togglepictures {};
		class remove_customappctrls {};
		class add_customappctrls {};
		class add_gobackbutton {};
		class initPage2 {};
	};
	class apps
	{
		file = "a3_infiSTAR_Exile_customApps\apps";
		class vehicle_hp_bars {};
		class change_viewdistance {};
		class start_remote_cctv {};
		class xm8_fill_cameras {};
		class initremotecctv {};
		class scan {};
		class cookbook {};
		class deploy {};
		class donate {};
	};
	class custom
	{
		#include "app_defines.hpp"
	};
};