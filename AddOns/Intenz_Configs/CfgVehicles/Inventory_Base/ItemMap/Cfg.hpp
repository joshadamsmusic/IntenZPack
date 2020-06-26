class ItemMap: Inventory_Base {};
class ChernarusMap: ItemMap {};
class IntenZMap_Survivor: ChernarusMap 
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1  ,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.7,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0.3,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0  ,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}
            };
        };
    };
	hiddenSelectionsTextures[]=
	{
		"Intenz_Images\Textures\Map\map_chernarus_co.paa",
		"Intenz_Images\Textures\Map\Survivor_co.paa",
		"Intenz_Images\Textures\Map\Survivor_side_co.paa"
	};
};
class IntenZMap_Survivor_open: IntenZMap_Survivor {};
class IntenZMap_Bandit: ChernarusMap
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1  ,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.7,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0.3,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0  ,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}
            };
        };
    };
	hiddenSelectionsTextures[]=
	{
		"Intenz_Images\Textures\Map\map_chernarus_co.paa",
		"Intenz_Images\Textures\Map\Bandit_co.paa",
		"Intenz_Images\Textures\Map\Bandit_side_co.paa"
	};
};
class IntenZMap_Bandit_open: IntenZMap_Bandit {};
class IntenZMap_Burned: ChernarusMap
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1  ,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.7,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0.3,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0  ,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}
            };
        };
    };
	hiddenSelectionsTextures[]=
	{
		"Intenz_Images\Textures\Map\map_chernarus_co.paa",
		"Intenz_Images\Textures\Map\Burned_co.paa",
		"Intenz_Images\Textures\Map\Burned_side_co.paa"
	};
};
class IntenZMap_Burned_open: IntenZMap_Burned {};
class IntenZMap_Bloody: ChernarusMap
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1  ,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.7,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},
                {0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0.3,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},
                {0  ,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}
            };
        };
    };
	hiddenSelectionsTextures[]=
	{
		"Intenz_Images\Textures\Map\map_chernarus_co.paa",
		"Intenz_Images\Textures\Map\Bloody_co.paa",
		"Intenz_Images\Textures\Map\Bloody_side_co.paa"
	};
};
class IntenZMap_Bloody_open: IntenZMap_Bloody {};
