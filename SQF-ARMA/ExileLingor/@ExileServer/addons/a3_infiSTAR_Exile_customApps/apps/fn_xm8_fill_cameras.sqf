_uid = getPlayerUID player;

{
	_flag = _x;
	_buildRights = _flag getVariable ['ExileTerritoryBuildRights', []];
	if(_uid in _buildRights)then
	{
		_range = _flag getVariable ['ExileTerritorySize',0];
		_cameras = _flag nearObjects ['Exile_Construction_BaseCamera_Static',_range + 1];
		if!(_cameras isEqualTo [])then
		{
			_name = _flag getVariable ['ExileTerritoryName', ''];
			_grid = mapGridPosition _flag;
			_grid = format['%1:%2',_grid select [0,3],_grid select [3,6]];
			_index = _this lbAdd format['%1 @%2',_name,_grid];
			_this lbSetData [_index, netId _flag];
			_this lbSetValue [_index,player distance2D _flag];
		};
	};
} forEach (allMissionObjects 'Exile_Construction_Flag_Static');