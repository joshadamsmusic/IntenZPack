class Umbrella_Base: Inventory_Base
{
	scope=2;
	displayName="$STR_iz_cfgvehicles_Umbrella0";
	descriptionShort="$STR_iz_cfgvehicles_Umbrella1";	
	repairableWithKits[]={5,4};
	repairCosts[]={30,25};
	rotationFlags=17;
	weight=1133;
	lootCategory="Tools";
	lootTag[]=
	{
		"Work",
		"Forester",
		"Camping"
	};
	itemInfo[]={"Axe"};
	openItemSpillRange[]={20,40};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=20;
				healthLevels[]=
				{
					{1.0,{"dz\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.7,{"dz\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.5,{"dz\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0.3,{"dz\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0.0,{"dz\weapons\melee\blade\data\hatchet_destruct.rvmat"}}
				};
			};
		};
	};
	isMeleeWeapon=1;
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeWoodBlunt";
			range=1.8;
		};
		class Heavy
		{
			ammo="MeleeWoodBlunt_Heavy";
			range=1.8;
		};
		class Sprint
		{
			ammo="MeleeWoodBlunt_Heavy";
			range=3.7;
		};
	};
};
class Umbrella_Closed: Umbrella_Base
{
	model="IntenZ\Assets\umbrella\closed.p3d";
	itemSize[]={2,7};
	inventorySlot[]=
	{
		"Shoulder",
		"Melee"
	};
	suicideAnim="sword";
	hiddenSelections[]=
	{
		"celta_low",
		"celta_low1"
	};
	class DamageSystem: DamageSystem
	{
		class GlobalHealth: GlobalHealth
		{
			class Health: Health
			{
				hitpoints=20;
			};
		};
	};
};
class Umbrella_Opened: Umbrella_Base
{
	model="IntenZ\Assets\umbrella\open.p3d";
	bounding="BSphere";
//	physLayer="item_large";
	itemSize[]={11,7};
	inventorySlot[]={""};
	suicideAnim="";
	hiddenSelections[]=
	{
		"celta_max",
		"celta_max1"
	};
	class DamageSystem: DamageSystem
	{
		class GlobalHealth: GlobalHealth
		{
			class Health: Health
			{
				hitpoints=5;
			};
		};
	};
};
class Umbrella_Black_Closed: Umbrella_Closed
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\closed\black_co.paa",
		"IntenZ\Assets\umbrella\closed\black_co.paa"
	};
};
class Umbrella_Black_Opened: Umbrella_Opened
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\open\black_co.paa",
		"IntenZ\Assets\umbrella\open\black_co.paa"
	};
};
class Umbrella_Blue_Closed: Umbrella_Closed
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\closed\blue_co.paa",
		"IntenZ\Assets\umbrella\closed\blue_co.paa"
	};
};
class Umbrella_Blue_Opened: Umbrella_Opened
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\open\blue_co.paa",
		"IntenZ\Assets\umbrella\open\blue_co.paa"
	};
};
class Umbrella_Green_Closed: Umbrella_Closed
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\closed\green_co.paa",
		"IntenZ\Assets\umbrella\closed\green_co.paa"
	};
};
class Umbrella_Green_Opened: Umbrella_Opened
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\open\green_co.paa",
		"IntenZ\Assets\umbrella\open\green_co.paa"
	};
};
class Umbrella_Rainbow_Closed: Umbrella_Closed
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\closed\rainbow_co.paa",
		"IntenZ\Assets\umbrella\closed\rainbow_co.paa"
	};
};
class Umbrella_Rainbow_Opened: Umbrella_Opened
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\open\rainbow_co.paa",
		"IntenZ\Assets\umbrella\open\rainbow_co.paa"
	};
};
class Umbrella_Yellow_Closed: Umbrella_Closed
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\closed\yellow_co.paa",
		"IntenZ\Assets\umbrella\closed\yellow_co.paa"
	};
};
class Umbrella_Yellow_Opened: Umbrella_Opened
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Assets\umbrella\open\yellow_co.paa",
		"IntenZ\Assets\umbrella\open\yellow_co.paa"
	};
};
