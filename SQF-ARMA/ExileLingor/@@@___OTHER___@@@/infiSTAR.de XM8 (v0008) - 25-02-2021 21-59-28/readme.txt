Open app_defines.hpp (infiSTAR.de_xm8apps\@infiSTAR_customApps\addons\a3_infiSTAR_Exile_customApps\app_defines.hpp) in a text editor.
It is self explaining :)

After you have added your custom apps (or just modified the default apps I have put in) you simply pbo the whole folder
"a3_infiSTAR_Exile_customApps" and drop the pbo into 

yourgameserver\@ExileServer\addons\   HERE
once you start your @ExileServer, it will automatically load this pbo and start it with the server.

or move
@infiSTAR_customApps into yourgameserver and start it as -serverMod="@ExileServer;@infiSTAR_customApps"



Some adds (for example the deploy app) need a way to execute code on the server, for that you will have to modify your cfgRemoteExec to the following:


class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };	// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };	// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};
