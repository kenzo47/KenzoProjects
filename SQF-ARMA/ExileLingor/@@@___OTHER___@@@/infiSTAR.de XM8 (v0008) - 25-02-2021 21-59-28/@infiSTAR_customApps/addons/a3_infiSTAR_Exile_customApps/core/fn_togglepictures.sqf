_display = uiNamespace getVariable ['RscExileXM8', displayNull];
if(!isNull _display)then
{
	if(ExileClientXM8CurrentSlide isEqualTo 'extraApps')then
	{
		{(_display displayCtrl _x) ctrlShow true;} forEach customAppBTNsP1;
	}
	else
	{
		{(_display displayCtrl _x) ctrlShow false;} forEach customAppBTNsP1;
	};

	if(ExileClientXM8CurrentSlide isEqualTo 'XM8 #2')then
	{
		{(_display displayCtrl _x) ctrlShow true;} forEach customAppBTNsP2;
	}
	else
	{
		{(_display displayCtrl _x) ctrlShow false;} forEach customAppBTNsP2;
	}
};