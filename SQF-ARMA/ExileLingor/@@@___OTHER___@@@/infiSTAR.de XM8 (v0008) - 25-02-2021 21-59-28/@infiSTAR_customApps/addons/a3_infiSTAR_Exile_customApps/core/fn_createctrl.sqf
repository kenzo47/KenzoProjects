params[
	["_display",displayNull],
	["_type",""],
	["_idc",0],
	["_controlsGroup",controlNull]
];
customAppIDCs pushBackUnique _idc;
ctrlDelete (_display displayCtrl _idc);

if(isNull _controlsGroup)then
{
	_controlsGroup = _display displayCtrl 4007;
};

_ctrl = _display ctrlCreate[_type, _idc, _controlsGroup];
_ctrl