disableSerialization;
false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
_display = uiNamespace getVariable ['RscExileXM8', displayNull];


_ctrl = [_display,'RSCText',44667] call apps_fnc_createctrl;
_ctrl ctrlSetPosition [0.15,0.2,1.3,.1];
_ctrl ctrlSetText format['ViewDistance: %1',viewDistance];
_ctrl ctrlCommit 0;

_ctrl = [_display,'RscXSliderH',44668] call apps_fnc_createctrl;
_ctrl sliderSetRange [150, 3000];
_ctrl sliderSetPosition viewDistance;
_ctrl ctrlSetPosition [0.15,0.275,(ctrlPosition _ctrl select 2) + 0.3,ctrlPosition _ctrl select 3];
_ctrl ctrlSetBackgroundColor [0.15,0.15,0.15,1];
_ctrl ctrlRemoveAllEventHandlers 'SliderPosChanged';
_ctrl ctrlAddEventHandler ['SliderPosChanged','
	setViewDistance (_this select 1);
	setObjectViewDistance [(_this select 1),(getObjectViewDistance select 1)];
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44670) sliderSetPosition (_this select 1);
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44667) ctrlSetText format["ViewDistance: %1",viewDistance];
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44669) ctrlSetText format["ObjectViewDistance: %1",(getObjectViewDistance select 0)];
'];
_ctrl ctrlCommit 0;


_ctrl = [_display,'RSCText',44669] call apps_fnc_createctrl;
_ctrl ctrlSetPosition [0.15,0.3,1.3,.1];
_ctrl ctrlSetText format['ObjectViewDistance: %1',getObjectViewDistance select 0];
_ctrl ctrlCommit 0;

_ctrl = [_display,'RscXSliderH',44670] call apps_fnc_createctrl;
_ctrl sliderSetRange [150, 2200];
_ctrl sliderSetPosition (getObjectViewDistance select 0);
_ctrl ctrlSetPosition [0.15,0.375,(ctrlPosition _ctrl select 2) + 0.3,ctrlPosition _ctrl select 3];
_ctrl ctrlSetBackgroundColor [0.15,0.15,0.15,1];
_ctrl ctrlRemoveAllEventHandlers 'SliderPosChanged';
_ctrl ctrlAddEventHandler ['SliderPosChanged','
	setViewDistance (_this select 1);
	setObjectViewDistance [(_this select 1),(getObjectViewDistance select 1)];
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44668) sliderSetPosition (_this select 1);
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44667) ctrlSetText format["ViewDistance: %1",viewDistance];
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44669) ctrlSetText format["ObjectViewDistance: %1",(getObjectViewDistance select 0)];
'];
_ctrl ctrlCommit 0;


_ctrl = [_display,'RSCText',44671] call apps_fnc_createctrl;
_ctrl ctrlSetPosition [0.15,0.4,1.3,.1];
_ctrl ctrlSetText format['ShadowViewDistance: %1',getObjectViewDistance select 1];
_ctrl ctrlCommit 0;

_ctrl = [_display,'RscXSliderH',44672] call apps_fnc_createctrl;
_ctrl sliderSetRange [0, 300];
_ctrl sliderSetPosition (getObjectViewDistance select 1);
_ctrl ctrlSetPosition [0.15,0.475,(ctrlPosition _ctrl select 2) + 0.3,ctrlPosition _ctrl select 3];
_ctrl ctrlSetBackgroundColor [0.15,0.15,0.15,1];
_ctrl ctrlRemoveAllEventHandlers 'SliderPosChanged';
_ctrl ctrlAddEventHandler ['SliderPosChanged','
	setObjectViewDistance [(getObjectViewDistance select 0),(_this select 1)];
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44671) ctrlSetText format["ShadowViewDistance: %1",(getObjectViewDistance select 1)];
'];
_ctrl ctrlCommit 0;

if(_this)then{
_ctrl = [_display,'RSCText',44673] call apps_fnc_createctrl;
_ctrl ctrlSetPosition [0.15,0.5,1.3,.1];
_ctrl ctrlSetText format['TerrainGrid: %1',getTerrainGrid];
_ctrl ctrlCommit 0;

_ctrl = [_display,'RscXSliderH',44674] call apps_fnc_createctrl;
_ctrl sliderSetRange [3.125, 50];
_ctrl sliderSetPosition getTerrainGrid;
_ctrl ctrlSetPosition [0.15,0.575,(ctrlPosition _ctrl select 2) + 0.3,ctrlPosition _ctrl select 3];
_ctrl ctrlSetBackgroundColor [0.15,0.15,0.15,1];
_ctrl ctrlRemoveAllEventHandlers 'SliderPosChanged';
_ctrl ctrlAddEventHandler ['SliderPosChanged','
	setTerrainGrid (_this select 1);
	((uiNamespace getVariable ["RscExileXM8", displayNull]) displayCtrl 44673) ctrlSetText format["TerrainGrid: %1",getTerrainGrid];
'];
_ctrl ctrlCommit 0;
};
