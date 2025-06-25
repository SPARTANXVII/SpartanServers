class CfgPatches
{
	class SpartanBulletRebal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Projectiles","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		ammo[] = {"Bullet_762x54","Bullet_762x54Tracer","Bullet_357","Bullet_9x39AP","Bullet_9x39","SNAFU_Bullet_127x55mm","Bullet_338Rev","SNAFU_Bullet_338","Bullet_308Win","Bullet_308WinTracer","Bullet_556x45","Bullet_556x45Tracer","SNAFU_Bullet_556x45mm_M855A1","Bullet_762x39","Bullet_762x39Tracer","SNAFU_Bullet_44_Magnum","SNAFU_Bullet_44","Bullet_545x39","Bullet_545x39Tracer","SNAFU_Bullet_300ACC","SNAFU_Bullet_5_7x28mm","SNAFU_Bullet_46x30","Bullet_12GaugePellets","Bullet_45ACP","Bullet_9x19","Bullet_380","GCGN_Bullet_50Cal","SNAFU_Bullet_145Cal","SNAFU_Bullet_45_70mm"};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class BulletCore;
	class Bullet_Base;
	class SNAFU_Bullet_127x55mm: Bullet_Base
	{
		initSpeed = 1000;
		typicalSpeed = 1200;
		damageBarrel = 550;
		damageBarrelDestroyed = 550;
		class DamageApplied
		{
			class Health
			{
				damage = 450;
				armorDamage = 0.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_338Rev: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 350;
				armorDamage = 0.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_338: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 350;
				armorDamage = 0.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_762x54: Bullet_Base
	{
		initSpeed = 1000;
		typicalSpeed = 1200;
		damageBarrel = 550;
		damageBarrelDestroyed = 550;
		class DamageApplied
		{
			class Health
			{
				damage = 160;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_762x54Tracer: Bullet_762x54
	{
		initSpeed = 1000;
		typicalSpeed = 1200;
		damageBarrel = 550;
		damageBarrelDestroyed = 550;
		class DamageApplied
		{
			class Health
			{
				damage = 160;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_308Win: Bullet_Base
	{
		initSpeed = 900;
		typicalSpeed = 940;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		class DamageApplied
		{
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_308WinTracer: Bullet_308Win
	{
		initSpeed = 900;
		typicalSpeed = 940;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		class DamageApplied
		{
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_357: Bullet_Base
	{
		initSpeed = 600;
		typicalSpeed = 850;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		class DamageApplied
		{
			class Health
			{
				damage = 140;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_9x39AP: Bullet_Base
	{
		initSpeed = 800;
		typicalSpeed = 1000;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		class DamageApplied
		{
			class Health
			{
				damage = 150;
				armorDamage = .75;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_9x39: Bullet_Base
	{
		initSpeed = 600;
		typicalSpeed = 800;
		damageBarrel = 325;
		damageBarrelDestroyed = 325;
		class DamageApplied
		{
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_556x45: Bullet_Base
	{
		initSpeed = 550;
		typicalSpeed = 700;
		damageBarrel = 100;
		damageBarrelDestroyed = 100;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_556x45Tracer: Bullet_556x45
	{
		initSpeed = 550;
		typicalSpeed = 700;
		damageBarrel = 100;
		damageBarrelDestroyed = 100;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_556x45mm_M855A1: Bullet_556x45
	{
		initSpeed = 600;
		typicalSpeed = 800;
		damageBarrel = 100;
		damageBarrelDestroyed = 100;
		class DamageApplied
		{
			class Health
			{
				damage = 130;
				armorDamage = 0.3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_762x39: Bullet_Base
	{
		initSpeed = 700;
		typicalSpeed = 740;
		damageBarrel = 100;
		damageBarrelDestroyed = 100;
		class DamageApplied
		{
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_762x39Tracer: Bullet_762x39
	{
		initSpeed = 700;
		typicalSpeed = 740;
		damageBarrel = 100;
		damageBarrelDestroyed = 100;
		class DamageApplied
		{
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_44_Magnum: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 145;
				armorDamage = 0.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_44: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 95;
				armorDamage = 0.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_545x39: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 80;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_300ACC: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 90;
				armorDamage = 0.22;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_5_7x28mm: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 70;
				armorDamage = 0.3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_46x30: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 52;
				armorDamage = 0.3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Shotgun_Base;
	class Bullet_12GaugePellets: Shotgun_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
				damageOverride[] = {{0.9,1.0}};
			};
		};
	};
	class Bullet_45ACP: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class Bullet_9x19: Bullet_Base
	{
		class DamageApplied
		{
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
				damage = 10;
			};
		};
	};
	class Bullet_380: Bullet_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class GCGN_Bullet_50Cal: Bullet_Base
	{
		initSpeed = 1600;
		typicalSpeed = 1800;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		class DamageApplied
		{
			class Health
			{
				damage = 1500;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class GCGN_Bullet_408Chey: Bullet_Base
	{
		initSpeed = 1600;
		typicalSpeed = 1800;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		class DamageApplied
		{
			class Health
			{
				damage = 1000;
				armorDamage = 0.8;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_145Cal: Bullet_Base
	{
		initSpeed = 1800;
		typicalSpeed = 2000;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		class DamageApplied
		{
			class Health
			{
				damage = 2250;
				armorDamage = 1;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class SNAFU_Bullet_45_70mm: Bullet_Base
	{
		initSpeed = 800;
		typicalSpeed = 1000;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		class DamageApplied
		{
			class Health
			{
				damage = 180;
				armorDamage = 0.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base{};
	class Ammo_45ACP: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_308Win: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_9x19: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_380: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_556x45: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_762x54: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_762x39: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_9x39: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_22: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		count = 100;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		count = 100;
	};
	class Ammo_357: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_545x39: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		count = 250;
	};
	class Ammo_ArrowBolt: Ammunition_Base
	{
		count = 100;
	};
	class SNAFU_Ammo_300ACC: Ammunition_Base
	{
		count = 250;
	};
	class SNAFU_Ammo_5_7x28mm: Ammunition_Base
	{
		count = 250;
	};
	class SNAFU_Ammo_127x55mm: Ammunition_Base
	{
		count = 100;
	};
	class SNAFU_Ammo_45_70mm: Ammunition_Base
	{
		count = 250;
	};
	class SNAFU_Ammo_500_SW: Ammunition_Base
	{
		count = 250;
	};
	class SNAF_Ammo_145Cal: Ammunition_Base
	{
		count = 100;
	};
	class SNAFU_MD_Ammo_556x45mm_M855A1: Ammunition_Base
	{
		count = 250;
	};
	class SNAFU_Ammo_762x25: Ammunition_Base
	{
		count = 250;
	};
	class SNAFU_Ammo_44: Ammunition_Base
	{
		count = 250;
	};
	class GCGN_Ammo_50Cal: Ammunition_Base
	{
		count = 100;
	};
	class SNAFU_Ammo_338: Ammunition_Base
	{
		count = 100;
	};
	class Rev_Ammo_338: Ammunition_Base
	{
		count = 100;
	};
	class GCGN_Ammo_408Chey: Ammunition_Base
	{
		count = 100;
	};
};

class CfgVehicles
{
	class Box_Base;
	class AmmoBox_338Lapua_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 338 Lapua Rounds";
		descriptionShort = "A cardbox box with '338 Lapua' written on it. Presumably contains 10 rounds in a disposable cardboard wrapper.";
		model = "SpartanBulletRebal\ss_ammobox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 85;
		itemSize[] = {1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"SpartanBulletRebal\data\ss_ammobox.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class SNAFU_Ammo_338
			{
				value = 10;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"box","zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\338_10rnd_ammobox_co.paa","SpartanBulletRebal\data\338_10rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class AmmoBox_300ACC_60Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 300 ACC Rounds";
		descriptionShort = "A cardbox box with '300 ACC' written on it. Presumably contains 60 rounds in a disposable cardboard wrapper.";
		model = "SpartanBulletRebal\ss_ammobox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 210;
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"SpartanBulletRebal\data\ss_ammobox.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class SNAFU_Ammo_300ACC
			{
				value = 60;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"box","zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\300_60rnd_ammobox_co.paa","SpartanBulletRebal\data\300_60rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class AmmoBox_408cheytac_5Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 408 CheyTac Rounds";
		descriptionShort = "A cardbox box with '408 CheyTac' written on it. Presumably contains 5 rounds in a disposable cardboard wrapper.";
		model = "SpartanBulletRebal\ss_ammobox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 85;
		itemSize[] = {1,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"SpartanBulletRebal\data\ss_ammobox.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class GCGN_Ammo_408Chey
			{
				value = 5;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"box","zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\408_5rnd_ammobox_co.paa","SpartanBulletRebal\data\408_5rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class AmmoBox_50bmg_5Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 50 BMG Rounds";
		descriptionShort = "A cardbox box with '50 BMG' written on it. Presumably contains 5 rounds in a disposable cardboard wrapper.";
		model = "SpartanBulletRebal\ss_ammobox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 85;
		itemSize[] = {1,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"SpartanBulletRebal\data\ss_ammobox.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class GCGN_Ammo_50Cal
			{
				value = 5;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"box","zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\50_5rnd_ammobox_co.paa","SpartanBulletRebal\data\50_5rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class AmmoBox_57x28_30Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 5.7x28mm Rounds";
		descriptionShort = "A cardbox box with 'Contains 5.7x28mm Cartridges' written on it. Presumably contains 30 rounds in a disposable cardboard wrapper.";
		model = "\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 165;
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"DZ\weapons\ammunition\data\762x39_box.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39_box.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"}},{0.01,{"DZ\weapons\ammunition\data\762x39_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class SNAFU_Ammo_5_7x28mm
			{
				value = 30;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\57x28_30rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class AmmoBox_556x45AP_20Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 556x45 M855A1 Rounds";
		descriptionShort = "A cardbox box with 'Contains 556x45mm M855A1 Armor Piercing Cartridges' written on it. Presumably contains 20 rounds in a disposable cardboard wrapper.";
		model = "\dz\weapons\ammunition\556_20RoundBox.p3d";
		iconType = 1;
		rotationFlags = 17;
		weight = 85;
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},{0.01,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class SNAFU_MD_Ammo_556x45mm_M855A1
			{
				value = 20;
				variable = "quantity";
			};
		};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanBulletRebal\data\556AP_20rnd_ammobox_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
};