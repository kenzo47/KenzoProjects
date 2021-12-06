private["_display", "_row", "_i", "_col"];
disableSerialization;
_display = uiNamespace getVariable ['RscExileXM8', displayNull];

_row = 0;
_colRow = [];
for "_i" from 1 to 14 do
{
	_col = (_i - 1) % 5;
	_colRow pushBackUnique [_col,_row];
	if (_col isEqualTo 4) then { _row = _row + 1; };
};

{
	_x params ['_submenu','_toggleable','_text','_tooltip','_fnc','_pic'];
	_idc = 5004 + _forEachIndex;
	if(_forEachIndex > infiSTAR_xm8apps_btnCntP1 && count _colRow > 0)then
	{
		if(_text isEqualTo '' && _fnc isEqualTo '')exitWith{};
		(_colRow select 0) params ['_col','_row'];
		_colRow deleteAt 0;

		_ctrl = [_display, "RscExileXM8AppButton1x1", _idc] call apps_fnc_createctrl;
		_ctrl ctrlSetPosition [(1 + (6.5 * _col)) * (0.025), (2 + (5.5 * _row)) * (0.04)];
		_ctrl ctrlCommit 0;
		customAppBTNsP2 pushBackUnique _idc;
		if(_submenu)then{_fnc = "['', 0] call ExileClient_gui_xm8_slide;call apps_fnc_togglepictures;" + _fnc;};
		if(_toggleable)then
		{
			private _togglevarname = format['apptogglestate_%1',_idc];
			private _toggled = missionNameSpace getVariable _togglevarname;
			_ctrl ctrlSetStructuredText parseText format['<t color="%1">%2</t>',if(isNil'_toggled')then{'#44CD00'}else{'#FF0000'},_text];

			_fnc = _fnc + format['',_togglevarname];
		}
		else
		{
			_ctrl ctrlSetText _text;
		};
		if(_submenu)then{_fnc = _fnc + "if(ExileClientXM8CurrentSlide in ['','server'])then{'XM8 #2' call apps_fnc_add_gobackbutton;};";};
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlRemoveAllEventHandlers 'ButtonClick';
		_ctrl ctrlSetEventHandler ['ButtonClick',_fnc];

		_idc = (ctrlIDC _ctrl)+20000;
		_ctrlPos = ctrlPosition _ctrl;
		_ctrlPos set[0,(_ctrlPos select 0)+((_ctrlPos select 2)/4)];
		_ctrlPos set[1,(_ctrlPos select 1)+((_ctrlPos select 3)/5.75)];
		_ctrl = [_display, "RscPicture", _idc] call apps_fnc_createctrl;
		_ctrl ctrlSetText _pic;
		_ctrl ctrlSetPosition _ctrlPos;
		_ctrl ctrlSetScale 0.5;
		_ctrl ctrlCommit 0;
		customAppBTNsP2 pushBackUnique _idc;
	};
} forEach APP_CODE_ARRAY;

_btnback = [_display, "RscExileXM8ButtonMenu", 8002] call apps_fnc_createctrl;
_btnback ctrlSetPosition [0.675,0.68,0.15,0.04];
_btnback ctrlCommit 0;
_btnback ctrlSetText "GO BACK";
_btnback ctrlSetEventHandler ["ButtonClick", "_this spawn {ctrlDelete (_this select 0);};_this spawn apps_fnc_remove_customappctrls;['extraApps', 1] call ExileClient_gui_xm8_slide"];
customAppBTNsP2 pushBackUnique 8002;