[] execVM "A3EX_CMAT\content\fn_load_mapContent.sqf";

// START LOADOUTS

ExileClient_gui_LoadoutDialog_calculateLoadoutPrice = compileFinal (preprocessFileLineNumbers 'custom\loadouts\ExileClient_gui_loadoutDialog_calculateLoadoutPrice.sqf');
ExileClient_gui_loadoutDialog_event_checkLoadout = compileFinal (preprocessFileLineNumbers 'custom\loadouts\ExileClient_gui_loadoutDialog_event_checkLoadout.sqf');
ExileClient_gui_LoadoutDialog_calculateLoadoutRespect = compileFinal (preprocessFileLineNumbers 'custom\loadouts\ExileClient_gui_loadoutDialog_calculateLoadoutRespect.sqf');

// END LOADOUTS