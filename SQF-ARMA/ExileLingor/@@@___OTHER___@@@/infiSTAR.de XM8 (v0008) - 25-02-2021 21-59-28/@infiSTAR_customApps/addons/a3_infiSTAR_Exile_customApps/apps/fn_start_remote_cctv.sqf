disableSerialization;
false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
_display = uiNamespace getVariable ['RscExileXM8', displayNull];
_ctrl = _display displayCtrl 1000;
_data = _ctrl lbData (lbCurSel _ctrl);
ExileCameraSystemBase = objectFromNetId _data;

_display = uiNamespace getVariable ['RscExileCameraView',displayNull];
_camerasCombo = _display displayCtrl 4005;
_range = ExileCameraSystemBase getVariable ['ExileTerritorySize',0];
_cameras = ExileCameraSystemBase nearObjects ['Exile_Construction_BaseCamera_Static',_range];
lbClear _camerasCombo;

_index = _camerasCombo lbAdd 'Select a Camera';
_camerasCombo lbSetData [_index,'0'];
_camerasCombo lbSetPictureRight [_index,'\exile_assets\texture\ui\cameraView\camera.paa'];
{
	_index = _camerasCombo lbAdd ('Camera ' + (str _forEachIndex));
	_camerasCombo lbSetData [_index,netId _x];
	_camerasCombo lbSetPicture [_index,'\exile_assets\texture\ui\cameraView\camera.paa'];
	if(_x getVariable ['ExileCameraInUse',false])then
	{
		_camerasCombo lbSetColor [_index,[221/255, 38/255, 38/255, 1]];
		_camerasCombo lbSetPictureRightColor [_index,[221/255, 38/255, 38/255, 1]];
		_camerasCombo lbSetTextRight [_index,'IN USE!'];
		_camerasCombo lbSetColorRight [_index,[221/255, 38/255, 38/255, 1]];
	}
	else
	{
		_camerasCombo lbSetColor [_index,[160/255, 223/255, 59/255, 1]];
	};
} forEach _cameras;
_camerasCombo lbSetCurSel 0;

ExileClientPlayerIsInSecurityCamera = true;
ExileClientPostProcessingColorCorrections ppEffectAdjust [1,1.1,-0.05,[0.4,0.2,0.3,-0.1],[0.5,0.5,0.5,0],[0.5,0.5,0.5,0],[0,0,0,0,0,0,4]];
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectEnable true;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectCommit 0;
ExileClientPostProcessingSecurityCameraFilmGrain ppEffectEnable true;
false call ExileClient_gui_hud_toggle;
createDialog 'RscExileCameraView';


_speedUpCamServer = {
	_player = objectFromNetId(_this select 0);
	_camera = objectFromNetId(_this select 1);
	_ownerPlayer = owner _player;
	_ownerCamera = owner _camera;
	_camera setOwner _ownerPlayer;
};
CUSTOM_FUNCTION_ARRAY set[0,_speedUpCamServer];

fnc_camera_change_code = {
	_change_camera_owner = {
		if(isNil'ExileClientCameraParentObject')then{ExileClientCameraParentObject=objNull;};
		if(!local ExileClientCameraParentObject)then
		{
			if(isNull ExileClientCameraParentObject)exitWith{};
			if(isNull ExileClientCameraObject)exitWith{};
			if!(alive ExileClientCameraParentObject)exitWith{};
			[3,[0,[netId player,netId ExileClientCameraParentObject]]] call FN_infiSTAR_CS;
			systemChat '<infiSTAR.de> camera is now local to you, control should be way better and faster!';
		};
	};
	if(!isNil'camera_changed_thread')then{[camera_changed_thread] call ExileClient_system_thread_removeTask;};
	camera_changed_thread = [1,_change_camera_owner, [], true] call ExileClient_system_thread_addtask;
};
publicVariable 'fnc_camera_change_code';
'' remoteExecCall ['fnc_camera_change_code',-2,'camera_change_jip'];
true