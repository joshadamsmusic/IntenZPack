class Umbrella: Inventory_Base
{
	scope=2;
	displayName="Umbrella";
	descriptionShort="Umbrella";
	model="IntenZ_Models\Umbrella\Closed.p3d";
	repairableWithKits[]={5,4};
	repairCosts[]={30,25};
	rotationFlags=17;
	weight=1133;
	itemSize[]={2,4};
	fragility=0.0099999998;
	inventorySlot[]=
	{
		""
	};
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
	suicideAnim="woodaxe";
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeHatchet";
			range=1.4;
		};
		class Heavy
		{
			ammo="MeleeHatchet_Heavy";
			range=1.4;
		};
		class Sprint
		{
			ammo="MeleeHatchet_Heavy";
			range=3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup_light
			{
				soundSet="hatchet_pickup_light_SoundSet";
				id=796;
			};
			class pickup
			{
				soundSet="hatchet_pickup_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="woodaxe_drop_SoundSet";
				id=898;
			};
			class FirefighterAxe_loop_SoundSet
			{
				soundSet="FirefighterAxe_loop_SoundSet";
				id=1121;
			};
			class FirefighterAxe_end_SoundSet
			{
				soundSet="FirefighterAxe_end_SoundSet";
				id=1122;
			};
			class ShoulderR_Hide
			{
				soundset="ShoulderR_Hide_SoundSet";
				id=1210;
			};
			class ShoulderR_Show
			{
				soundset="ShoulderR_Show_SoundSet";
				id=1211;
			};
			class WoodHammer_SoundSet
			{
				soundSet="WoodHammer_SoundSet";
				id=11161;
			};
		};
	};
};
class Umbrella_Open: Inventory_Base
{
	scope=2;
	displayName="Umbrella";
	descriptionShort="Umbrella";
	model="IntenZ_Models\Umbrella\Open.p3d";
	bounding="BSphere";
	physLayer="item_large";
	repairableWithKits[]={5,4};
	repairCosts[]={30,25};
	rotationFlags=17;
	weight=1133;
	itemSize[]={2,4};
	fragility=0.0099999998;
	inventorySlot[]=
	{
		""
	};
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
	suicideAnim="woodaxe";
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeHatchet";
			range=1.4;
		};
		class Heavy
		{
			ammo="MeleeHatchet_Heavy";
			range=1.4;
		};
		class Sprint
		{
			ammo="MeleeHatchet_Heavy";
			range=3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup_light
			{
				soundSet="hatchet_pickup_light_SoundSet";
				id=796;
			};
			class pickup
			{
				soundSet="hatchet_pickup_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="woodaxe_drop_SoundSet";
				id=898;
			};
			class FirefighterAxe_loop_SoundSet
			{
				soundSet="FirefighterAxe_loop_SoundSet";
				id=1121;
			};
			class FirefighterAxe_end_SoundSet
			{
				soundSet="FirefighterAxe_end_SoundSet";
				id=1122;
			};
			class ShoulderR_Hide
			{
				soundset="ShoulderR_Hide_SoundSet";
				id=1210;
			};
			class ShoulderR_Show
			{
				soundset="ShoulderR_Show_SoundSet";
				id=1211;
			};
			class WoodHammer_SoundSet
			{
				soundSet="WoodHammer_SoundSet";
				id=11161;
			};
		};
	};
};
