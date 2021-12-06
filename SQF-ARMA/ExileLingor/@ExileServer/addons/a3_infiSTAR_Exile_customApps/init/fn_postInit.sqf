
APP_CODE_ARRAY = [];
_cfgpath = configFile >> "Cfg_infiSTAR_xm8apps" >> "custom";
_configs = "true" configClasses _cfgpath;
{
	_configName = configName _x;
	_configpath = _cfgpath >> _configName;
	_submenu = getNumber(_configpath >> "submenu") isEqualTo 1;
	_toggleable = getNumber(_configpath >> "toggleable") isEqualTo 1;
	_text = getText(_configpath >> "text");
	_tooltip = getText(_configpath >> "tooltip");
	_fnc = getText(_configpath >> "fnc");
	if(!(_text isEqualTo ")&&!(_fnc isEqualTo "))then
	{
		_pic = getText(_configpath >> "pic");
		APP_CODE_ARRAY pushBackUnique [_submenu,_toggleable,_text,_tooltip,_fnc,_pic];
	};
} forEach _configs;
publicVariable "APP_CODE_ARRAY";



_configs = "true" configClasses (configFile >> "Cfg_infiSTAR_xm8apps" >> "core");
{
	private _fileContent = preprocessFileLineNumbers ("a3_infiSTAR_Exile_customApps\core\fn_" + configName _x + ".sqf");
	private _varname = format["apps_fnc_%1",configName _x];
	missionNameSpace setVariable [_varname, compile _fileContent, true];
} forEach _configs;

_configs = "true" configClasses (configFile >> "Cfg_infiSTAR_xm8apps" >> "apps");
{
	private _fileContent = preprocessFileLineNumbers ("a3_infiSTAR_Exile_customApps\apps\fn_" + configName _x + ".sqf");
	private _varname = format["apps_fnc_%1",configName _x];
	missionNameSpace setVariable [_varname, compile _fileContent, true];
} forEach _configs;


_initAppsOnClient = {
	waitUntil{getClientStateNumber >= 10 && !isNull findDisplay 46 && !isNil "ExileClientLoadedIn"};
	uiSleep 3;
	["SuccessTitleAndText", ["infiSTAR.de", "Loaded infiSTAR xm8apps"]] call ExileClient_gui_toaster_addTemplateToast;


	if(isNil"customAppBTNs")then{customAppBTNs = [];};
	if(isNil"customAppIDCs")then{customAppIDCs = [];};
	_code = {
		_display = uiNamespace getVariable ["RscExileXM8", displayNull];
		if(!isNull _display)then
		{
			_ctrl = _display displayCtrl 4006;
			_ctrl ctrlRemoveAllEventHandlers "ButtonClick";
			_ctrl ctrlSetEventHandler ["ButtonClick","_this spawn apps_fnc_remove_customappctrls;[""apps"", 1] call ExileClient_gui_xm8_slide;[] spawn ExileClient_gui_xm8_togglePower;"];

			_ctrl = _display displayCtrl 1117;
			_ctrl ctrlRemoveAllEventHandlers "ButtonClick";
			_ctrl ctrlSetEventHandler ["ButtonClick","[""extraApps"", 0] call ExileClient_gui_xm8_slide;call apps_fnc_add_customappctrls;"];

			if(ExileClientXM8CurrentSlide isEqualTo "extraApps")then
			{
				if(isNull (_display displayCtrl 9999123))then
				{
					call apps_fnc_add_customappctrls;["extraApps", 0] call ExileClient_gui_xm8_slide
				};
			};
		}
		else
		{
			ExileClientXM8CurrentSlide = "apps";
		};
		call apps_fnc_showpictures;
	};
	if(!isNil"highjackxm8")then{[highjackxm8] call ExileClient_system_thread_removeTask;highjackxm8=nil;};
	highjackxm8 = [0.1, _code, [], true] call ExileClient_system_thread_addtask;
};
["",_initAppsOnClient] remoteExecCall ["spawn",-2,"fnc_initAppsOnClient_JIPID"];
true