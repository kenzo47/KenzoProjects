private["_display", "_row", "_apps", "_i", "_col", "_appID", "_extraControlGroup", "_appTile"];
disableSerialization;
_display = uiNamespace getVariable ['RscExileXM8', displayNull];

_row = 0;
_colRow = [];
for "_i" from 1 to 14 do
{
	_col = (_i - 1) % 5;
	if (_i < 10) then {_appID = format["XM8_App0%1_Button", _i];} else {_appID = format["XM8_App%1_Button",_i];};
	if (getText(missionConfigFile >> _appID >> "text") isEqualTo "") then {_colRow pushBackUnique [_col,_row,_appID];};
	if (_col isEqualTo 4) then { _row = _row + 1; };
};
infiSTAR_xm8apps_btnCntP1 = count _colRow;

{
	_x params ['_submenu','_toggleable','_text','_tooltip','_fnc','_pic'];
	_idc = 5004 + _forEachIndex;
	if(count _colRow > 0)then
	{
		if(_text isEqualTo '' && _fnc isEqualTo '')exitWith{};
		(_colRow select 0) params ['_col','_row','_appID'];
		_colRow deleteAt 0;

		customAppIDCs pushBackUnique _idc;
		ctrlDelete (_display displayCtrl _idc);
		_extraControlGroup = _display displayCtrl 5000;
		_ctrl = _display ctrlCreate [_appID, _idc, _extraControlGroup];
		_ctrl ctrlSetPosition [(1 + (6.5 * _col)) * (0.025), (2 + (5.5 * _row)) * (0.04)];
		_ctrl ctrlCommit 0;
		customAppBTNsP1 pushBackUnique _idc;
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
		if(_submenu)then{_fnc = _fnc + "if(ExileClientXM8CurrentSlide in ['','server'])then{'extraApps' call apps_fnc_add_gobackbutton;};";};
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlRemoveAllEventHandlers 'ButtonClick';
		_ctrl ctrlSetEventHandler ['ButtonClick',_fnc];

		_idc = (ctrlIDC _ctrl)+10000;
		_ctrlPos = ctrlPosition _ctrl;
		_ctrlPos set[0,(_ctrlPos select 0)+((_ctrlPos select 2)/4)];
		_ctrlPos set[1,(_ctrlPos select 1)+((_ctrlPos select 3)/5.75)];
		customAppIDCs pushBackUnique _idc;
		ctrlDelete (_display displayCtrl _idc);
		_ctrl = _display ctrlCreate ['RscPicture', _idc, _extraControlGroup];
		_ctrl ctrlSetText _pic;
		_ctrl ctrlSetPosition _ctrlPos;
		_ctrl ctrlSetScale 0.5;
		_ctrl ctrlCommit 0;
		customAppBTNsP1 pushBackUnique _idc;
	};
} forEach APP_CODE_ARRAY;