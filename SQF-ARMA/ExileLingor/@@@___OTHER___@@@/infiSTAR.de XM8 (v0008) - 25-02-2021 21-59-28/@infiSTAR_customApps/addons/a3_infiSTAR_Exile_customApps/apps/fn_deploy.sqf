params[
	["_vehicleClass","",["",[]]],
	["_itemNeeded","",[""]],
	["_poptabs",0,[0]],
	["_respect",0,[0]],
	["_needBambi",false,[false]],
	["_canRepack",false,[false]],
	["_onlyOnce",false,[false]]
];
if(_itemNeeded in assignedItems player || _itemNeeded in (magazines player) || _itemNeeded isEqualTo "")then {
	_deployedVehicles = player getVariable ["deployedVehicles",[]];
	if(_onlyOnce && (_vehicleClass in _deployedVehicles))exitWith{
		["ErrorTitleAndText", ["infiSTAR deploy", "You can only deploy once in a lifetime!"]] spawn ExileClient_gui_toaster_addTemplateToast;
	};
	if(!ExileClientPlayerIsBambi && _needBambi)exitWith{
		["ErrorTitleAndText", ["infiSTAR deploy", "Only a Bambi can use this!"]] spawn ExileClient_gui_toaster_addTemplateToast;
	};
	if(player getVariable ["ExileLocker", 0] < _poptabs)exitWith{
		["ErrorTitleAndText", ["infiSTAR deploy", format["You need at least %1 PopTabs in your Locker!",_poptabs]]] spawn ExileClient_gui_toaster_addTemplateToast;
	};
	if(ExileClientPlayerScore < _respect)exitWith{
		["ErrorTitleAndText", ["infiSTAR deploy", format["You need at least %1 Respect!",_respect]]] spawn ExileClient_gui_toaster_addTemplateToast;
	};

	if(_needBambi)then{call ExileClient_object_player_bambiStateEnd;};
	if!(_itemNeeded isEqualTo "")then{
		player removeMagazine _itemNeeded;
		player removeItem _itemNeeded;
		player unassignItem _itemNeeded;
	};
	if(_onlyOnce)then{
		_deployedVehicles pushBackUnique _vehicleClass;
		player setVariable ["deployedVehicles",_deployedVehicles];
	};

	[player,"deployRequest",[_vehicleClass,_poptabs,_respect,_canRepack,_itemNeeded]] remoteExecCall ["fn_xm8apps_server", 2, false];
} else {
	_displayName = getText(configFile >> "CfgWeapons" >> _itemNeeded >> "displayName");
	if(_displayName isEqualTo "")then{_displayName = getText(configFile >> "CfgMagazines" >> _itemNeeded >> "displayName");};
	["ErrorTitleAndText", ["infiSTAR deploy", format["You need a %1 to deploy this object!",_displayName]]] spawn ExileClient_gui_toaster_addTemplateToast;
};
