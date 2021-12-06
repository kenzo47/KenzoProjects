
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
	if(!(_text isEqualTo "")&&!(_fnc isEqualTo ""))then{
		_pic = getText(_configpath >> "pic");
		APP_CODE_ARRAY pushBackUnique [_submenu,_toggleable,_text,_tooltip,_fnc,_pic];
	};
} forEach _configs;
publicVariable "APP_CODE_ARRAY";



_configs = "true" configClasses (configFile >> "Cfg_infiSTAR_xm8apps" >> "core");
{
	private _fileContent = preprocessFileLineNumbers ("a3_infiSTAR_Exile_customApps\core\fn_" + configName _x + ".sqf");
	private _varname = format["apps_fnc_%1",configName _x];
	missionNameSpace setVariable [_varname, compile _fileContent];
	publicVariable _varname;
} forEach _configs;

_configs = "true" configClasses (configFile >> "Cfg_infiSTAR_xm8apps" >> "apps");
{
	private _fileContent = preprocessFileLineNumbers ("a3_infiSTAR_Exile_customApps\apps\fn_" + configName _x + ".sqf");
	private _varname = format["apps_fnc_%1",configName _x];
	missionNameSpace setVariable [_varname, compile _fileContent];
	publicVariable _varname;
} forEach _configs;


fn_xm8apps_server = {
	params[
		["_player",objNull,[objNull]],
		["_request","",[""]],
		["_input",[],[[]]]
	];
	private _clientOwner = owner _player;
	if!(alive _player)exitWith{ diag_log format["fn_xm8apps_server: Player (%1) not alive.",remoteExecutedOwner]; };
	if!(_clientOwner isEqualTo remoteExecutedOwner)exitWith{ diag_log format["fn_xm8apps_server: Player (%1) wrong object owner %2.",remoteExecutedOwner,_clientOwner]; };

	if(_request isEqualTo "packRequest")exitWith{
		_input params[
			["_itemClassName","",[""]]
		];
		_posATL = getPosATL _player;
		_pos = _player modelToWorld [0,1.5,0];
		_pos set[2,_posATL select 2];

		_lootHolder = objNull;
		_wpnh = nearestObjects [_player, ["GroundWeaponHolder","WeaponHolderSimulated","LootWeaponHolder"], 3];
		if!(_wpnh isEqualTo [])then{_lootHolder = _wpnh select 0;};
		if(isNull _lootHolder)then
		{
			_lootHolder = createVehicle ["GroundWeaponHolder",_pos,[],3,"CAN_COLLIDE"];
			_lootHolder setPosATL _pos;
			_lootHolder setVariable ["BIS_enableRandomization",false];
		};
		_lootHolder addItemCargoGlobal [_itemClassName,1];


		[
			[_itemClassName,netId _lootHolder],
			{
				params["_itemClassName","_lootHolderNetId"];
				_lootHolder = objectFromNetId _lootHolderNetId;
				if(!isNull _lootHolder)then
				{
					_displayName = getText(configFile >> "CfgWeapons" >> _itemClassName >> "displayName");
					if(_displayName isEqualTo "")then{_displayName = getText(configFile >> "CfgMagazines" >> _itemClassName >> "displayName");};

					_displayPic = getText(configFile >> "CfgWeapons" >> _itemClassName >> "picture");
					if(_displayPic isEqualTo "")then{_displayPic = getText(configFile >> "CfgMagazines" >> _itemClassName >> "picture");};

					_fn_PackESP = "
						if(isNull findDisplay 49)then{
							_lootHolder = objectFromNetId "+str _lootHolderNetId+";
							if(player distance2D _lootHolder < 10)then{
								drawIcon3D[
									"+str _displayPic+",
									[0.83,0.85,0,1],_lootHolder modelToWorldVisual [0,0,-.5],1,1,0,"+str _displayName+",0,0.035,'PuristaMedium','',true
								];
							};
						};
					";
					_fn_PackESP = compile _fn_PackESP;
					_id = addMissionEventHandler ["Draw3D", _fn_PackESP ];
					[_lootHolder,_id] spawn {
						params["_lootHolder","_id"];
						_timeOut = diag_tickTime + 180;
						waitUntil {isNull _lootHolder || diag_tickTime > _timeOut};
						removeMissionEventHandler ["Draw3D",_id];
					};
				};
			}
		] remoteExecCall ["call",remoteExecutedOwner,false];
	};
	if(_request isEqualTo "deployRequest")exitWith{
		_input params[
			["_vehicleClass","",["",[]]],
			["_poptabs",0,[0]],
			["_respect",0,[0]],
			["_canRepack",false,[false]],
			["_itemNeeded","",[""]]
		];

		if(_poptabs > 0)then
		{
			_playerMoney = _player getVariable ["ExileMoney", 0];
			_lockerMoney = _player getVariable ["ExileLocker", 0];
			_lockerMoney = _lockerMoney - _poptabs;
			_poptabsplayer = _playerMoney + _lockerMoney;
			_player setVariable ["ExilePopTabsCheck", _poptabsplayer];
			_player setVariable ["ExileMoney", _playerMoney, true];
			_player setVariable ["ExileLocker", _lockerMoney, true];
			format["updateLocker:%1:%2", _lockerMoney, (getPlayerUID _player)] call ExileServer_system_database_query_fireAndForget;
		};
		if(_respect > 0)then
		{
			_playerRespect = _player getVariable ["ExileScore", 0];
			_playerRespect = _playerRespect - _respect;
			_player setVariable ["ExileScoreCheck", _playerRespect];
			_player setVariable ["ExileScore", _playerRespect, true];
			[_playerRespect,{ExileClientPlayerScore = _this;},(owner _player),false] call FN_infiSTAR_S;
			format["setAccountScore:%1:%2", _playerRespect, (getPlayerUID _player)] call ExileServer_system_database_query_fireAndForget;
		};


		_varname = format["veh_deploy_%1",getPlayerUID _player];
		_objects = missionNameSpace getVariable [_varname,[]];
		{
			_obj = objectFromNetId _x;
			if(owner _obj < 3)then{
				_objects = _objects - [_x];
				deleteVehicle _obj;
			};
		} forEach _objects;

		if(_vehicleClass isEqualType [])then
		{
			_vehicleClass = selectRandom _vehicleClass;
		};

		_vehicleObject = objNull;
		if(_vehicleClass find "UAV" > -1)then
		{
			if(_vehicleClass isKindOf "Air")then
			{
				_position = AGLToASL (_player modelToWorld [0,0,350]);
			};
			_vehicleObject = createVehicle [_vehicleClass, _position, [], 0, "FLY"];
		}
		else
		{
			_vehicleObject = _vehicleClass createVehicle (_player modelToWorld [0,2,0]);
			_vehicleObject setVelocity [0,0,0];
		};
		clearBackpackCargoGlobal _vehicleObject;
		clearItemCargoGlobal _vehicleObject;
		clearMagazineCargoGlobal _vehicleObject;
		clearWeaponCargoGlobal _vehicleObject;
		if(getNumber (configfile >> "CfgSettings" >> "VehicleSpawn" >> "nightVision") isEqualTo 0)then
		{
			_vehicleObject disableNVGEquipment true;
		};
		if(getNumber (configfile >> "CfgSettings" >> "VehicleSpawn" >> "thermalVision") isEqualTo 0)then
		{
			_vehicleObject disableTIEquipment true;
		};
		_vehicleObject setVariable ["ExileOwnerUID", getPlayerUID _player];
		_vehicleObject lock 0;
		_vehicleObject addEventHandler ["GetIn", {_this call ExileServer_object_vehicle_event_onGetIn}];
		_vehicleObject call ExileServer_system_simulationMonitor_addVehicle;


		_objects pushBack (netId _vehicleObject);
		missionNameSpace setVariable [_varname,_objects];

		_displayName = getText(configFile >> "CfgVehicles" >> _vehicleClass >> "displayName");

		if(_canRepack)then{
			[
				[netId _vehicleObject, _displayName, _itemNeeded],
				{
					params["_objNetId", "_displayName", "_itemNeeded"];
					_vehicleObject = objectFromNetId _objNetId;

					_function = "
						_vehicleObject = _this select 0;
						_actionId = _this select 2;
						if(local _vehicleObject)then
						{
							_vehicleObject removeAction _actionId;
							deleteVehicle _vehicleObject;
							[player,'packRequest',["+str _itemNeeded+"]] remoteExecCall ['fn_xm8apps_server', 2, false];
						}
						else
						{
							['ErrorTitleAndText', ['infiSTAR pack', 'Please get in the driver seat first!']] spawn ExileClient_gui_toaster_addTemplateToast;
						};
					";
					_function = compile _function;

					_title = format["<img size='1'image='\exile_assets\texture\ui\xm8_app_settings_ca.paa'/> <t color='#0096ff'>Pack %1</t>",_displayName];
					_vehicleObject addAction [_title, _function, "", 1, true, true, "", "player distance _target < 8"];
				}
			] remoteExecCall ["call",remoteExecutedOwner,false];
		};
		["SuccessTitleAndText", ["infiSTAR deploy", format["Deployed: %1",_displayName]]] remoteExec ["ExileClient_gui_toaster_addTemplateToast",remoteExecutedOwner,false];
	};
};


_initAppsOnClient = {
	waitUntil{getClientStateNumber >= 10 && !isNull findDisplay 46 && !isNil "ExileClientLoadedIn" && {alive player}};
	uiSleep 3;
	["SuccessTitleAndText", ["infiSTAR.de", "Loaded infiSTAR xm8apps"]] call ExileClient_gui_toaster_addTemplateToast;

	if(isNil"customAppBTNsP1")then{customAppBTNsP1 = [];};
	if(isNil"customAppBTNsP2")then{customAppBTNsP2 = [];};
	if(isNil"customAppIDCs")then{customAppIDCs = [];};
	_code = {
		_display = uiNamespace getVariable ["RscExileXM8", displayNull];
		if(isNull _display)then
		{
			ExileClientXM8CurrentSlide = "apps";
		}
		else
		{
			_ctrl = _display displayCtrl 4006;
			_ctrl ctrlRemoveAllEventHandlers "ButtonClick";
			_ctrl ctrlSetEventHandler ["ButtonClick","_this spawn apps_fnc_remove_customappctrls;[""apps"", 1] call ExileClient_gui_xm8_slide;[] spawn ExileClient_gui_xm8_togglePower;"];

			_ctrl = _display displayCtrl 1117;
			_ctrl ctrlRemoveAllEventHandlers "ButtonClick";
			_ctrl ctrlSetEventHandler ["ButtonClick","[""extraApps"", 0] call ExileClient_gui_xm8_slide;call apps_fnc_add_customappctrls;"];

			if(ExileClientXM8CurrentSlide in ["","extraApps","XM8 #2"])then
			{
				_display = uiNamespace getVariable ["RscExileXM8", displayNull];
				ctrlDelete (_display displayCtrl 9999123);
				_ctrl = _display ctrlCreate["RscStructuredText", 9999123];
				_ctrl ctrlSetPosition [0.25,0.81,.5,0.04];
				_ctrl ctrlSetStructuredText parseText '<t size=".5" align="center" color="#00BBFA" font="RobotoMedium"><a href="https://infistar.de/product/infistar-xm8apps">custom apps by infiSTAR.de</a></t>';
				_ctrl ctrlCommit 0;
				_ctrl ctrlAddEventHandler ["KillFocus", "ctrlSetFocus (_this select 0);"];ctrlSetFocus _ctrl;
			};

			if(isNull (_display displayCtrl 8001))then
			{
				_nextPage = [_display, "RscExileXM8ButtonMenu", 8001, _display displayCtrl 5000] call apps_fnc_createctrl;
				_nextPage ctrlSetPosition [0.675,0.63,0.15,0.04];
				_nextPage ctrlCommit 0;
				_nextPage ctrlSetText "NEXT PAGE";
				_nextPage ctrlSetEventHandler ["ButtonClick", "_this spawn {ctrlDelete (_this select 0);};[""XM8 #2"", 0] call ExileClient_gui_xm8_slide;[] spawn apps_fnc_initPage2;"];
				customAppBTNsP1 pushBackUnique 8001;
			};
		};
		call apps_fnc_togglepictures;
	};
	if(!isNil"highjackxm8")then{[highjackxm8] call ExileClient_system_thread_removeTask;highjackxm8=nil;};
	highjackxm8 = [0.1, _code, [], true] call ExileClient_system_thread_addtask;

	if(!isNil "apps_fnc_change_viewdistance")then{
		uiSleep 5;
		systemChat "Restoring viewDistance and terrain grid..";
		setViewDistance (profileNameSpace getVariable ["xm8apps_viewDistance", viewDistance]);
		setObjectViewDistance (profileNameSpace getVariable ["xm8apps_objectViewDistance", getObjectViewDistance]);
		setTerrainGrid (profileNameSpace getVariable ["xm8apps_terrainGrid", getTerrainGrid]);
	};
};
["",_initAppsOnClient] remoteExecCall ["spawn",-2,"fnc_initAppsOnClient_JIPID"];
true
