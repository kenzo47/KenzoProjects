_display = uiNamespace getVariable ['RscExileXM8', displayNull];
if(!isNull _display)then
{
	if(ExileClientXM8CurrentSlide isEqualTo 'extraApps')then
	{
		{(_display displayCtrl _x) ctrlShow true;} forEach customAppBTNs;
	}
	else
	{
		{(_display displayCtrl _x) ctrlShow false;} forEach customAppBTNs;
	};
};