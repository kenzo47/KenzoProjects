[] execVM "R3F_LOG\init.sqf";
[] execVM "custom\EnigmaRevive\init.sqf";
[] execVM "custom\ClaimVehicles\init.sqf";

// scarCODE ServerInfoMenu
[] execVM "custom\scarCODE\ServerInfoMenu\sqf\initLocal.sqf";

if (isServer) then {
[] execVM "custom\TimeCycle.sqf"; //3 hours of day, 1 hour of night
};