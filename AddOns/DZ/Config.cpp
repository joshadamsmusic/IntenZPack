class CfgPatches
{
	class IntenZ_DZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Explosives",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Launchers",
			"DZ_Pistols",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Shotguns",
			
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled"
		};
	};
};

class CfgMods
{
	class IntenZPack
	{
		type = "mod";
	};
};

#include "CfgAmmo\Cfg.hpp"
#include "CfgMagazines\Cfg.hpp"
#include "CfgVehicles\Cfg.hpp"
#include "CfgWeapons\Cfg.hpp"
