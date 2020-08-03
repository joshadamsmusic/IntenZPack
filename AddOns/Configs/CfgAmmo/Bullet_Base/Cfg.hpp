class Bullet_Base;

class Bullet_22: Bullet_Base
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
class Bullet_380: Bullet_Base
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
class Bullet_9x19: Bullet_Base
{
	class DamageApplied
	{
		type="Projectile";
		dispersion=0;
		bleedThreshold=1;
		defaultDamageOverride[]={{0.5,1}};
		class Health{damage= 34;};	// 26
		class Blood {damage=100;};	//100
		class Shock {damage= 54;};	// 33
	};
};
class Bullet_45ACP: Bullet_Base
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
class Bullet_357: Bullet_Base
{
	class DamageApplied
	{
		type="Projectile";
		dispersion=0;
		bleedThreshold=1;
		defaultDamageOverride[]={{0.5,1}};
		class Health{damage= 65;};	// 80
		class Blood {damage=100;};	//100
		class Shock {damage= 78;};	//  0
	};
};
class Bullet_9x39: Bullet_Base
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
class Bullet_9x39AP: Bullet_Base
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
class Bullet_545x39: Bullet_Base
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
class Bullet_545x39Tracer: Bullet_545x39 {};
class Bullet_556x45: Bullet_Base
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
class Bullet_556x45Tracer: Bullet_556x45 {};
class Bullet_762x39: Bullet_Base
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
class Bullet_762x39Tracer: Bullet_762x39 {};
class Bullet_308Win: Bullet_Base
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
class Bullet_308WinTracer: Bullet_308Win {};
class Bullet_762x54: Bullet_Base
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
class Bullet_762x54Tracer: Bullet_762x54 {};
