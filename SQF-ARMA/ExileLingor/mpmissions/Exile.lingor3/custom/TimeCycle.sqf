if (!isServer) exitWith {};

while {true} do
{
	if (daytime >= 18 || daytime < 6) then   // after 7pm and before 5am time multiplier changes
	{
		setTimeMultiplier 12      // adjust this value for slower or faster night cycle ( 24 hours will take 1 hour )
	}
	else
	{
		setTimeMultiplier 4      // adjust this value for slower or faster day cycle  ( 12 hours will take 1 hour )
	};

	uiSleep 30;
};