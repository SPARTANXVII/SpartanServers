class CfgPatches
{
	class Melee
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class MeleeDamage: Bullet_Base{};
	class FirearmHit_Rifle: MeleeDamage
	{
		affectSkeleton = 0.1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 0;
			class Health
			{
				damage = 10;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class FirearmHit_Rifle_Buttstock: FirearmHit_Rifle
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 0;
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class FirearmHit_Pistol: MeleeDamage
	{
		affectSkeleton = 0.1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 0.0;
			class Health
			{
				damage = 10;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 75;
			};
		};
	};
	class MeleeFist: MeleeDamage
	{
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 15;
				armorDamage = 0.1;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 20;
			};
		};
	};
	class MeleeFist_Heavy: MeleeFist
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 25;
				armorDamage = 0.1;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 30;
			};
		};
	};
	class MeleeBrassKnuckles: MeleeDamage
	{
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 20;
			};
			class Shock
			{
				damage = 30;
			};
		};
	};
	class MeleeBrassKnuckles_Heavy: MeleeBrassKnuckles
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 40;
			};
			class Blood
			{
				damage = 20;
			};
			class Shock
			{
				damage = 50;
			};
		};
	};
	class MeleeShovel;
	class MeleeShovel_Heavy: MeleeShovel
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class MeleeMachete: MeleeDamage
	{
		affectSkeleton = 0.2;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 40;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 20;
			};
		};
	};
	class MeleeMachete_Heavy: MeleeMachete
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 27;
			};
		};
	};
	class MeleeKnife: MeleeDamage
	{
		affectSkeleton = 0.1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 40;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 17;
			};
		};
	};
	class MeleeKnife_Heavy: MeleeKnife
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 25;
			};
		};
	};
	class MeleeChainsaw: MeleeDamage
	{
		affectSkeleton = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 250;
			};
			class Shock
			{
				damage = 0;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class MeleeChainsaw_Heavy: MeleeChainsaw
	{
		affectSkeleton = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 55;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 0;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class MeleeChainsaw_Heavy: MeleeChainsaw
	{
		affectSkeleton = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 55;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 0;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class MeleeChainsaw_Heavy: MeleeChainsaw
	{
		affectSkeleton = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 55;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 0;
			};
			additionAnimalMeleeMultiplier = 2;
		};
	};
	class MeleeZombie: MeleeDamage
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 5;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 5;
			};
			class Shock
			{
				damage = 8;
			};
		};
	};
	class MeleeZombieMale: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 6;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 5;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class MeleeZombieMaleLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.25;
			class Health
			{
				damage = 7;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 7;
			};
			class Shock
			{
				damage = 12;
			};
		};
	};
	class MeleeZombieFemale: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 6;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 5;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class MeleeZombieFemaleLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 7;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 7;
			};
			class Shock
			{
				damage = 12;
			};
		};
	};
	class MeleeZombieSoldier: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 10;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieSoldierLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 12;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 12;
			};
			class Shock
			{
				damage = 20;
			};
		};
	};
	class MeleeZombiePolice: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 10;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombiePoliceLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 12;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 12;
			};
			class Shock
			{
				damage = 20;
			};
		};
	};
	class MeleeZombieFirefighter: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 10;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
};
