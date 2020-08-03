class DriedLeather: Inventory_Base
{
	scope=2;
	displayName="Dried Leather";
	descriptionShort="Dried Leather, created by using salt with animal pelts";
	model="dz\gear\consumables\tanned_leather.p3d";
	weight=500;
	absorbency=0.3;
	itemSize[]={5,2};
	canBeSplit=1;
	varQuantityInit=8;
	varQuantityMin=0;
	varQuantityMax=8;
	varQuantityDestroyOnMin=1;
	repairableWithKits[]={5,3};
	repairCosts[]={30,25};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=200;
				healthLevels[]=
				{
					{1.0,{"dz\gear\consumables\data\tanned_leather.rvmat"}},
					{0.7,{"dz\gear\consumables\data\tanned_leather.rvmat"}},
					{0.5,{"dz\gear\consumables\data\tanned_leather_damage.rvmat"}},
					{0.3,{"dz\gear\consumables\data\tanned_leather_damage.rvmat"}},
					{0.0,{"dz\gear\consumables\data\tanned_leather_destruct.rvmat"}}
				};
			};
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem_Light
			{
				soundSet="pickUpCourierBag_Light_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpCourierBag_SoundSet";
				id=797;
			};
		};
	};
};
class SoftLeather: Inventory_Base
{
	scope=2;
	displayName="Softened Leather";
	descriptionShort="Softened Leather, created by adding water with dried leather";
	model="dz\gear\consumables\tanned_leather.p3d";
	weight=500;
	absorbency=0.30000001;
	itemSize[]={5,2};
	canBeSplit=1;
	varQuantityInit=8;
	varQuantityMin=0;
	varQuantityMax=8;
	varQuantityDestroyOnMin=1;
	repairableWithKits[]={5,3};
	repairCosts[]={30,25};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=200;
				healthLevels[]=
				{
					{1.0,{"dz\gear\consumables\data\tanned_leather.rvmat"}},
					{0.7,{"dz\gear\consumables\data\tanned_leather.rvmat"}},
					{0.5,{"dz\gear\consumables\data\tanned_leather_damage.rvmat"}},
					{0.3,{"dz\gear\consumables\data\tanned_leather_damage.rvmat"}},
					{0.0,{"dz\gear\consumables\data\tanned_leather_destruct.rvmat"}}
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
};
