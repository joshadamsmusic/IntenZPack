class CfgVehicles
{
	class Grenade_Base;
	#include "Grenade_Base\Cfg.hpp"
	
	class Inventory_Base;
	#include "Inventory_Base\Cfg.hpp"
	
	
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine {};
	#include "Magazine_Base\Cfg.hpp"
	
	class Car;
	#include "Car\Cfg.hpp"
};