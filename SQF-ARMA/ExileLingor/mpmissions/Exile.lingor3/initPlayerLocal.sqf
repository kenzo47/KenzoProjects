if (!hasInterface || isServer) exitWith {};

//safeX
ExileClientPlayerSafeXItems = [];
ExileClientPlayerMarXetItems = [];

private ['_code', '_function', '_file'];
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	//SafeX
	['ExileClient_gui_safeXDialog_event_onDepositButtonClick','custom\SafeX\ExileClient_gui_safeXDialog_event_onDepositButtonClick.sqf'],
	['ExileClient_gui_safeXDialog_event_onDropDownSelectionChanged','custom\SafeX\ExileClient_gui_safeXDialog_event_onDropDownSelectionChanged.sqf'],
	['ExileClient_gui_safeXDialog_event_onInventoryListBoxSelectionChanged','custom\SafeX\ExileClient_gui_safeXDialog_event_onInventoryListBoxSelectionChanged.sqf'],
	['ExileClient_gui_safeXDialog_event_onListBoxSelectionChanged','custom\SafeX\ExileClient_gui_safeXDialog_event_onListBoxSelectionChanged.sqf'],
	['ExileClient_gui_safeXDialog_event_onWithdrawButtonClick','custom\SafeX\ExileClient_gui_safeXDialog_event_onWithdrawButtonClick.sqf'],
	['ExileClient_gui_safeXDialog_show','custom\SafeX\ExileClient_gui_safeXDialog_show.sqf'],
	['ExileClient_gui_safeXDialog_updateListBox','custom\SafeX\ExileClient_gui_safeXDialog_updateListBox.sqf'],
	['ExileClient_gui_safeXDialog_updateSelection','custom\SafeX\ExileClient_gui_safeXDialog_updateSelection.sqf'],
	['ExileClient_system_safeX_network_depositItemResponse','custom\SafeX\ExileClient_system_safeX_network_depositItemResponse.sqf'],
	['ExileClient_system_safeX_network_hasSafeXResponse','custom\SafeX\ExileClient_system_safeX_network_hasSafeXResponse.sqf'],
	['ExileClient_system_safeX_network_updateMarXetResponse','custom\SafeX\ExileClient_system_safeX_network_updateMarXetResponse.sqf'],
	['ExileClient_system_safeX_network_withdrawItemResponse','custom\SafeX\ExileClient_system_safeX_network_withdrawItemResponse.sqf'],
	['ExileClient_system_safeX_network_withdrawVehicleResponse','custom\SafeX\ExileClient_system_safeX_network_withdrawVehicleResponse.sqf']
];

// LOADOUTS

ExileClientPlayerLoadoutServerName = getText(missionConfigFile >> "CfgLoadout" >> "Settings" >> "ServerName");
ExileClientPlayerLoadoutMax = getNumber(missionConfigFile >> "CfgLoadout" >> "Settings" >> "MaxLoadouts");
ExileClientPlayerLoadoutNumber = 1;

private ['_code', '_function', '_file'];
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['ExileClient_gui_loadoutDialog_calculateLoadoutPrice', 'custom\loadouts\ExileClient_gui_loadoutDialog_calculateLoadoutPrice.sqf'],
	['ExileClient_gui_loadoutDialog_calculateLoadoutRespect', 'custom\loadouts\ExileClient_gui_loadoutDialog_calculateLoadoutRespect.sqf'],
	['ExileClient_gui_loadoutDialog_canAddLoadoutItem', 'custom\loadouts\ExileClient_gui_loadoutDialog_canAddLoadoutItem.sqf'],
	['ExileClient_gui_loadoutDialog_containerCargo_list', 'custom\loadouts\ExileClient_gui_loadoutDialog_containerCargo_list.sqf'],
	['ExileClient_gui_loadoutDialog_event_checkLoadout', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_checkLoadout.sqf'],
	['ExileClient_gui_loadoutDialog_event_onAddLoadoutButtonClick', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onAddLoadoutButtonClick.sqf'],
	['ExileClient_gui_loadoutDialog_event_onApplyLoadoutButtonClick', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onApplyLoadoutButtonClick.sqf'],
	['ExileClient_gui_loadoutDialog_event_onBuyLoadoutButtonClick', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onBuyLoadoutButtonClick.sqf'],
	['ExileClient_gui_loadoutDialog_event_onClearLoadoutButtonClick', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onClearLoadoutButtonClick.sqf'],
	['ExileClient_gui_loadoutDialog_event_onInventoryListBoxSelectionChanged', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onInventoryListBoxSelectionChanged.sqf'],
	['ExileClient_gui_loadoutDialog_event_onPlayerInventoryDropDownSelectionChanged', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onPlayerInventoryDropDownSelectionChanged.sqf'],
	['ExileClient_gui_loadoutDialog_event_onLoudoutDropDownSelectionChanged', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onLoudoutDropDownSelectionChanged.sqf'],
	['ExileClient_gui_loadoutDialog_event_onUnload', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onUnload.sqf'],
	['ExileClient_gui_loadoutDialog_event_onWarningCheckboxStateChanged', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_onWarningCheckboxStateChanged.sqf'],
	['ExileClient_gui_loadoutDialog_event_save', 'custom\loadouts\ExileClient_gui_loadoutDialog_event_save.sqf'],
	['ExileClient_gui_loadoutDialog_getItemCapacity', 'custom\loadouts\ExileClient_gui_loadoutDialog_getItemCapacity.sqf'],
	['ExileClient_gui_loadoutDialog_getItemMass', 'custom\loadouts\ExileClient_gui_loadoutDialog_getItemMass.sqf'],
	['ExileClient_gui_loadoutDialog_removeLoadoutItem', 'custom\loadouts\ExileClient_gui_loadoutDialog_removeLoadoutItem.sqf'],
	['ExileClient_gui_loadoutDialog_removeLoadoutListboxItem', 'custom\loadouts\ExileClient_gui_loadoutDialog_removeLoadoutListboxItem.sqf'],
	['ExileClient_gui_loadoutDialog_show', 'custom\loadouts\ExileClient_gui_loadoutDialog_show.sqf'],
	['ExileClient_gui_loadoutDialog_updateInventoryDropdown', 'custom\loadouts\ExileClient_gui_loadoutDialog_updateInventoryDropdown.sqf'],
	['ExileClient_gui_loadoutDialog_updateInventoryListBox', 'custom\loadouts\ExileClient_gui_loadoutDialog_updateInventoryListBox.sqf'],
	['ExileClient_gui_loadoutDialog_updateLoadoutDropdown', 'custom\loadouts\ExileClient_gui_loadoutDialog_updateLoadoutDropdown.sqf'],
	['ExileClient_gui_loadoutDialog_updateLoadoutInterface', 'custom\loadouts\ExileClient_gui_loadoutDialog_updateLoadoutInterface.sqf'],
	['ExileClient_gui_loadoutDialog_updateLoadoutListBox', 'custom\loadouts\ExileClient_gui_loadoutDialog_updateLoadoutListBox.sqf'],
	['ExileClient_gui_loadoutDialog_updatePriceInterface', 'custom\loadouts\ExileClient_gui_loadoutDialog_updatePriceInterface.sqf'],
	['ExileClient_system_trading_network_purchaseLoadoutResponse', 'custom\loadouts\ExileClient_system_trading_network_purchaseLoadoutResponse.sqf'],
	['ExileClient_util_addCommas', 'custom\loadouts\ExileClient_util_addCommas.sqf']
];


// Turn on XM8 cause why the fuck not?
missionNamespace setVariable ["ExileClientXM8IsPowerOn",true];
player setVariable ["ExileXM8IsOnline",true];
profileNamespace setVariable ["ExileEnable8GNetwork",true];

// Fix stair bug
waitUntil {!isNil"ExileClientLoadedIn"};
[
    1,
    {
        _fs = ["afalpercmstpsraswrfldnon","afalpercmstpsnonwnondnon","afalpercmstpsraswpstdnon","afalpknlmstpsraswrfldnon","afalpknlmstpsnonwnondnon"];
        if ((animationState player) in _fs) then
        {
            _f = (getPos player select 2);
            if (_f < 0.1) then 
            {
                player setvelocity [0,0,0];
            };

        };

    },
    [],
    true,
    true
] call ExileClient_system_thread_addtask;


//ZCP Missions (This is the only ZCP code in Mission file)
call compile preprocessfilelinenumbers "custom\zcp.sqf";

[] execVM "custom\StatusBar\statusBar_init.sqf";

// Virtual Garage Locations
PublicVirtualGarageLocation = [3308,3604,0]; // Safezone, in front of wastedump
PublicVirtualGarageDistance = 15;


