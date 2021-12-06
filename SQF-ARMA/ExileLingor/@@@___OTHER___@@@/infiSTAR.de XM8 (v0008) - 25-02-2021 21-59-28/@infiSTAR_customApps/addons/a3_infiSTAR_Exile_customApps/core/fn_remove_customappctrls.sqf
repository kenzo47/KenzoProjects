disableSerialization;
_display = uiNamespace getVariable ['RscExileXM8', displayNull];
{customAppIDCs = customAppIDCs - [_x];} forEach customAppBTNsP1;
{customAppIDCs = customAppIDCs - [_x];} forEach customAppBTNsP2;
{ctrlDelete (_display displayCtrl _x);} forEach customAppIDCs;customAppIDCs = [];
if(!isNull (_this select 0))then{ctrlDelete (_this select 0);};
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
call apps_fnc_togglepictures;