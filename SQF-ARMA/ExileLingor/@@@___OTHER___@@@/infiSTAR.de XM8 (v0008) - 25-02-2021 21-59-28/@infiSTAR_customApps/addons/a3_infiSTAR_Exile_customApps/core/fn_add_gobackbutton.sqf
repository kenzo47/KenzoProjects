disableSerialization;
_display = uiNamespace getVariable ["RscExileXM8", displayNull];

ctrlDelete (_display displayCtrl 8002);
_btnback = [_display,"RscExileXM8ButtonMenu",-2] call apps_fnc_createctrl;
_btnback ctrlSetPosition [0.675,0.68,0.15,0.04];
_btnback ctrlCommit 0;
_btnback ctrlSetText "GO BACK";
_btnback ctrlRemoveAllEventHandlers "ButtonClick";

if(_this isEqualTo "extraApps")then{
	_btnback ctrlSetEventHandler ["ButtonClick", "_this spawn apps_fnc_remove_customappctrls;['extraApps', 1] call ExileClient_gui_xm8_slide"];
} else {
	_btnback ctrlSetEventHandler ["ButtonClick", "_this spawn apps_fnc_remove_customappctrls;['XM8 #2', 0] call ExileClient_gui_xm8_slide;[] spawn apps_fnc_initPage2;"];
};