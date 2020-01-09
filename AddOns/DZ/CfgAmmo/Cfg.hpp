class CfgAmmo
{
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Bullet_Base: BulletCore
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 99;};	// 99
			class Blood {damage=100;};	//100
			class Shock {damage=  0;};	//  0
		};
	};
	class Shotgun_Base: ShotgunCore
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 99;};	// 99
			class Blood {damage=100;};	//100
			class Shock {damage=  0;};	//  0
		};
	};
///	Pistol
	class Bullet_22: Bullet_Base				// 5.60 x 15 mm R
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 18;};	// 18
			class Blood {damage=100;};	//100
			class Shock {damage= 22;};	// 25
		};
	};
	class Bullet_380: Bullet_Base				// 9.00 x 17 mm
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 25;};	// 21
			class Blood {damage=100;};	//100
			class Shock {damage= 40;};	// 33
		};
	};
	class Bullet_9x19: Bullet_Base				// 9.00 x 19 mm Parabellum
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 28;};	// 26
			class Blood {damage=100;};	//100
			class Shock {damage= 45;};	// 33
		};
	};
	class Bullet_45ACP: Bullet_Base				//11.43 x 23 mm
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 43;};	// 34
			class Blood {damage=100;};	//100
			class Shock {damage= 69;};	// 33
		};
	};
	class Bullet_357: Bullet_Base				// 9.00 x 33 mm R
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 49;};	// 80
			class Blood {damage=100;};	//100
			class Shock {damage= 78;};	//  0
		};
	};
///	Schotgun
	class Bullet_12GaugePellets: Shotgun_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 34;	// 34
					armorDamage=0.5;};	//  0.5
			class Blood {damage=100;};	//100
			class Shock {damage= 33;};	// 33
		};
	};
	class Bullet_12GaugeSlug: Bullet_Base
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage=110;};	//110
			class Blood {damage=100;};	//100
			class Shock {damage=100;};	//100
		};
	};
///	Rifle
	class Bullet_9x39: Bullet_Base				// 9.00 x 39 mm
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 77;};	// 55
			class Blood {damage=100;};	//100
			class Shock {damage= 93;};	// 66
		};
	};
	class Bullet_9x39AP: Bullet_Base			// 9.00 x 39 mm			Armor-piercing
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 77;	// 55
					armorDamage=  3;};	//  3
			class Blood {damage=100;};	//100
			class Shock {damage= 93;};	// 66
		};
	};
	class Bullet_545x39: Bullet_Base			// 5.45 x 39 mm
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 45;};	// 55
			class Blood {damage=100;};	//100
			class Shock {damage= 56;};	// 66
		};
	};
	class Bullet_545x39Tracer: Bullet_545x39	// 5.45 x 39 mm			Tracer
	{
		
	};
	class Bullet_556x45: Bullet_Base			// 5.56 x 45 mm NATO
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 55;};	// 55
			class Blood {damage=100;};	//100
			class Shock {damage= 66;};	// 66
		};
	};
	class Bullet_556x45Tracer: Bullet_556x45	// 5.56 x 45 mm NATO	Tracer
	{
		
	};
	class Bullet_762x39: Bullet_Base			// 7.62 x 39 mm
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 65;};	// 55
			class Blood {damage=100;};	//100
			class Shock {damage= 78;};	// 66
		};
	};
	class Bullet_762x39Tracer: Bullet_762x39	// 7.62 x 39 mm			Tracer
	{
		
	};
	class Bullet_308Win: Bullet_Base			// 7.62 x 51 mm NATO
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 85;};	//110
			class Blood {damage=100;};	//100
			class Shock {damage=102;};	//100
		};
	};
	class Bullet_308WinTracer: Bullet_308Win	// 7.62 x 51 mm NATO	Tracer
	{
		
	};
	class Bullet_762x54: Bullet_Base			// 7.62 x 54 mm R
	{
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]={{0.5,1}};
			class Health{damage= 90;};	//110
			class Blood {damage=100;};	//100
			class Shock {damage=108;};	//100
		};
	};
	class Bullet_762x54Tracer: Bullet_762x54	// 7.62 x 54 mm R		Tracer
	{
		
	};
};
