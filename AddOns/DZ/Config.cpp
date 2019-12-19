class CfgPatches
{
	class IntenZ_DZ
	{
		units[] = 
		{
			"AK74","AKS74U","AK101","AKM",
			"M4A1","M249Para","AugSteyr","Scout",
			"MP5K","UMP45",
			"Groza","VSS",
			"PM73Rak",
			"b95","Repeater","Winchester70","Mosin9130",
			"cz61","cz527","SKS",
			"FAL","SVD","Saiga12K",
			"ShotgunIzh43","ShotgunIzh43_Sawedoff",
			"ShotgunIzh18","ShotgunIzh18_Sawedoff",
			"ShotgunMp133","ShotgunMp133_Pistol_Grip",
			"Ruger1022","Trumpet","mkii",
			
			"Colt1911","1911_Engraved",
			"CZ75","DE_Gold","FNX45","Glock19","LongHorn","magnum","P1","ij70","Red9",
			"SmokeGrenade","FlashGrenade","Grenade","GrenadeRDG5","smokegrenade_rdg2"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms",
			"DZ_Pistols"
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

#include "Configs\cfgAmmo.hpp"
#include "Configs\cfgWeapons.hpp"
#include "Configs\cfgVehicles.hpp"