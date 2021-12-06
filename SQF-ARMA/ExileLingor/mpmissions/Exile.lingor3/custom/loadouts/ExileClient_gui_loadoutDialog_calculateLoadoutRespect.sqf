 /*
 *
 * Author: TGC
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */
private ["_loadout", "_loadoutPrimary", "_loadoutSecondary", "_loadoutPistol", "_loadoutUniform", "_loadoutVest", "_loadoutBackpack", "_loadoutHeadgear", "_loadoutFacewear", "_loadoutBinocular", "_loadoutItems", "_quality" , "_respect"];

_loadout = _this;

_loadoutPrimary = _loadout select 0;
_loadoutSecondary = _loadout select 1;
_loadoutPistol = _loadout select 2;
_loadoutUniform = _loadout select 3;
_loadoutVest = _loadout select 4;
_loadoutBackpack = _loadout select 5;
_loadoutHeadgear = _loadout select 6;
_loadoutFacewear = _loadout select 7;
_loadoutBinocular = _loadout select 8;
_loadoutItems = _loadout select 9;
_quality = 0;
_respect = 0;

//primary
if (count _loadoutPrimary > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{	
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutPrimary;
};

//secondary
if (count _loadoutSecondary > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutSecondary;
};

//handgun
if (count _loadoutPistol > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{
			_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutPistol;
};


if (count _loadoutUniform > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{
				{
					switch (count _x) do
					{
						case 2:
						{
							if (typeName (_x select 0) isEqualTo "ARRAY") then
							{
								{
									if (typeName _x isEqualTo "ARRAY") then
									{
										if (count _x > 0) then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
										};
									}
									else
									{
										if !(_x isEqualTo "") then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
										};
									};
								} forEach (_x select 0);
							}
							else
							{
								_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
							};
						};
						case 3:
						{
							_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
						};
						default 
						{
							
						};
					};
				} forEach _x;
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutUniform;
};

if (count _loadoutVest > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{
				{
					switch (count _x) do
					{
						case 2:
						{
							if (typeName (_x select 0) isEqualTo "ARRAY") then
							{
								{
									if (typeName _x isEqualTo "ARRAY") then
									{
										if (count _x > 0) then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
										};
									}
									else
									{
										if !(_x isEqualTo "") then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
										};
									};
								} forEach (_x select 0);
							}
							else
							{
								_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
							};
						};
						case 3:
						{
							_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
						};
						default 
						{
							
						};
					};
				} forEach _x;
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutVest;
};

if (count _loadoutBackpack > 0) then
{
	{
		if (typeName _x isEqualTo "ARRAY") then
		{
			if (count _x > 0) then
			{
				{
					switch (count _x) do
					{
						case 2:
						{
							if (typeName (_x select 0) isEqualTo "ARRAY") then
							{
								{
									if (typeName _x isEqualTo "ARRAY") then
									{
										if (count _x > 0) then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
										};
									}
									else
									{
										if !(_x isEqualTo "") then
										{
											_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
										};
									};
								} forEach (_x select 0);
							}
							else
							{
								_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
							};
						};
						case 3:
						{
							_quality = _quality max GetNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_x select 0) >> "quality");
						};
						default 
						{
							
						};
					};
				} forEach _x;
			};
		}
		else
		{
			if !(_x isEqualTo "") then
			{
				_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
			};
		};
	} forEach _loadoutBackpack;
};

if !(_loadoutHeadgear isEqualTo "") then
{
	_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _loadoutHeadgear >> "quality");
};

if !(_loadoutFacewear isEqualTo "") then
{
	_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _loadoutFacewear >> "quality");
};

if (count _loadoutBinocular > 0) then
{
	_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> (_loadoutBinocular select 0) >> "quality");
};

if (count _loadoutItems > 0) then
{
	{
		if !(_x isEqualTo "") then
		{
			_quality = _quality max getNumber (missionConfigFile >> "CfgLoadoutWhitelist" >> _x >> "quality");
		};
	} forEach _loadoutItems;
};

_respect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
_respect