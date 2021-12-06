class CfgLoadout
{
	class Settings
	{
		ServerName = "TGCExileLingor";
		//NAME THIS SOMETHING UNIQUE!!! NO SPACES!
		//If someone loaded this up default they could get items/weapons not in your trader config on your server if you don't change this!
		
		MaxLoadouts = 5; //Maximum number of loadouts a player can have.
		
		BlockedItems[] = 
		{
			
		};
	};
};

class CfgSafeX
{
	class Settings
	{
		BlockedItems[] = 
		{
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"Exile_Item_MobilePhone",
			"Exile_Item_BreachingCharge_Wood",
			"Exile_Item_BreachingCharge_Metal",
			"Exile_Item_BreachingCharge_BigMomma"
		};
	};
	
	class Respect
	{
		StorageLevels[] =
		{
			//Respect Needed, Storage Size
			{0,1000},
			{10000,1500},
			{15000,2000},
			{30000,2500},
			{45000,3000},
			{60000,3500},
			{75000,4000},
			{90000,5000}
		};
	};
};  

class CfgNetworkMessages
{	
	// Exile Player Loadouts
	class purchaseLoadoutRequest
	{
		module="system_trading";
		parameters[]=
		{
			"ARRAY",
			"ARRAY"
		};
	};

	class purchaseLoadoutResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR",
			"STRING",
			"BOOL"
		};
	};
	
	/* ~~ SafeX Start ~~ */
	class depositItemRequest
	{
		module="system_safex";
		parameters[]=
		{
			"STRING"
		};
	};
	class depositItemResponse
	{
		module="system_safex";
		parameters[]=
		{
			"SCALAR",
			"ARRAY"
		};
	};
	class withdrawItemRequest
	{
		module="system_safex";
		parameters[]=
		{
			"STRING",
			"SCALAR",
			"STRING"
		};
	};
	class withdrawItemResponse
	{
		module="system_safex";
		parameters[]=
		{
			"SCALAR",
			"STRING",
			"SCALAR",
			"STRING",
			"ARRAY",
			"ARRAY"
		};
	};
	class hasSafeXRequest
	{
		module="system_safex";
		parameters[]={};
	};
	class hasSafeXResponse
	{
		module="system_safex";
		parameters[]=
		{
			"SCALAR",
			"ARRAY",
			"ARRAY"
		};
	};	
	class updateMarXetResponse
	{
		module="system_safex";
		parameters[]=
		{
			"SCALAR",
			"ARRAY"
		};
	};	
	class withdrawVehicleRequest
	{
		module="system_safex";
		parameters[]=
		{
			"STRING"
		};
	};
	class withdrawVehicleResponse
	{
		module="system_safex";
		parameters[]=
		{
			"SCALAR",
			"STRING",
			"ARRAY",
			"ARRAY"
		};
	};
	class VGPublic_Store //Virtual Garage 
	{
		module = "system_vg";
		parameters[] = {"STRING"};
	};
	class VGPublic_Load //Virtual Garage 
	{
		module = "system_vg";
		parameters[] = {"STRING"};
	};
};