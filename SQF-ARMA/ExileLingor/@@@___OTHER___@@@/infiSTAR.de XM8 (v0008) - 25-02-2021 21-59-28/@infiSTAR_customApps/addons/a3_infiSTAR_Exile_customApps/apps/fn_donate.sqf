disableSerialization;
["server", 0] call ExileClient_gui_xm8_slide;
_display = uiNamespace getVariable ["RscExileXM8", displayNull];
(_display displayCtrl 4004) ctrlSetStructuredText parseText '<t align="center" font="RobotoMedium">Donate</t>';
(_display displayCtrl 4091) ctrlShow false;
if(isNil "HTML_LOAD_URL_DONATE")then{HTML_LOAD_URL_DONATE = "http://htmlload.infistar.de/donate.html";};
(_display displayCtrl 4092) htmlLoad HTML_LOAD_URL_DONATE;