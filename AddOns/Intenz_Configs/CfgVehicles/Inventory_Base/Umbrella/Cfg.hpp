class Umbrella_Base: Inventory_Base
{
	scope=2;
	displayName="$STR_iz_cfgvehicles_Umbrella0";
	descriptionShort="$STR_iz_cfgvehicles_Umbrella1";	
	repairableWithKits[]={5,4};
	repairCosts[]={30,25};
	rotationFlags=17;
	weight=1133;
	fragility=0.0099999998;
	lootCategory="Tools";
	lootTag[]=
	{
		"Work",
		"Forester",
		"Camping"
	};
	itemInfo[]=
	{
		"Axe"
	};
	openItemSpillRange[]={20,40};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=150;
				healthLevels[]=
				{
					
					{1,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.69999999,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.5,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0.30000001,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0,{"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"}}
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
	model="IntenZ_Models\Umbrella\Closed.p3d";
	itemSize[]={1,7};
	inventorySlot[]=
	{
		"Shoulder",
		"Melee"
	};
	suicideAnim="sword";
//	fragility=10;
};
class Umbrella_Opened: Umbrella_Base
{
	model="IntenZ_Models\Umbrella\Open.p3d";
	bounding="BSphere";
//	physLayer="item_large";
	itemSize[]={9,7};
	inventorySlot[]=
	{
		""
	};
	suicideAnim="";
//	fragility=50;
};
