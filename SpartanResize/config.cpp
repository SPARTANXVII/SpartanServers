class CfgPatches
{
	class SpartanResize
	{
		units[]=
		{
			"MetalPlate",
			"WoodenPlank",
			"WoodenLog",
			"NailBox",
			"Nail",
			"HandSaw",
			"WoodAxe",
			"Whetstone",
			"Hacksaw",
			"Hatchet",
			"CombinationLock",
			"CarTent",
			"LargeTent",
			"MediumTent",
			"MetalWire",
			"PartyTent",
			"ExpansionHescoKit",
			"ExpansionBarbedWire"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables","DZ_Gear_Camping","DZ_Gear_Food","DZ_Gear_Tools","DZ_Characters"};
	};
};
class CfgMods
{
	class SpartanResize
	{
		dir = "SpartanResize";
		name = "SpartanResize";
		author = "Spartan";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"SpartanResize/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class Container_Base;
	class Bottle_Base;
	class Edible_Base;
	class TruckBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class CarBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class CarRadiator: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class HeadlightH7: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class SparkPlug: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class GlowPlug: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class CarWheel: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class DingoWheel: CarWheel
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class Croco_QuadBike_Wheel: CarWheel
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class Croco_QuadBike_Wheel_Rear: CarWheel
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
				};
			};
		};
	};
	class MetalPlate: Inventory_Base
	{
		itemSize[]={6,6};
		varQuantityMax=20;
		varStackMax=20;
	};
    class WoodenPlank: Inventory_Base
	{
		itemSize[]={1,4};
		varQuantityMax=40;
		varStackMax=40;
	};
	class WoodenLog: Inventory_Base
	{
		itemSize[]={2,5};
		varQuantityMax=5;
		varStackMax=5;
	};
	class Nail: Inventory_Base
	{
		varQuantityMax=480;
	};
	class NailBox: Box_Base
	{
		class Resources
		{
			class Nail
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class HandSaw: Inventory_Base
	{
		itemSize[] = {3,1};
		rotationFlags=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
				};
			};
		};
	};
	class Hacksaw: Inventory_Base
	{
		itemSize[] = {2,1};
		rotationFlags=8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
				};
			};
		};
	};
	class RaidSaw: Hacksaw
	{
		scope = 2;
		displayName = "RaidSaw";
		descriptionShort = "Used for raiding Locked Tents";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\data\raidsaw_co.paa"};
	};
	class Raid_Driver: Inventory_Base
	{
		scope = 2;
		displayName = "Raid Driver";
		descriptionShort = "Used for raiding Locked Storage Containers";
		model = "SpartanResize\data\raid_driver.p3d";
		debug_ItemCategory = 2;
		animClass = "Knife";
		repairableWithKits[] = {0};
		rotationFlags = 17;
		suicideAnim = "onehanded";
		RestrainUnlockType = 1;
		weight = 310;
		itemSize[] = {1,3};
		fragility = 0.008;
		openItemSpillRange[] = {20,40};
		dismantle_action_type = 64;
		action = "GestureMeleeBayonetStab";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SpartanResize\data\raid_driver_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"SpartanResize\data\raid_driver.rvmat"}},{0.7,{"SpartanResize\data\raid_driver.rvmat"}},{0.5,{"SpartanResize\data\raid_driver_damaged.rvmat"}},{0.3,{"SpartanResize\data\raid_driver_damaged.rvmat"}},{0,{"SpartanResize\data\raid_driver_destruct.rvmat"}}};
				};
			};
		};
		lockSoundSet = "wrench_loop_SoundSet";
		compatibleLocks[] = {1};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeScrewdriver";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeScrewdriver_Heavy";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeScrewdriver_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
			};
		};
	};
	class Woodaxe: Inventory_Base
	{
		itemSize[] = {2,5};
		rotationFlags=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
		};
	};
	class Whetstone: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class Hatchet: Inventory_Base
	{
		itemSize[] = {1,2};
		rotationFlags=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
				};
			};
		};
	};
	class CombinationLock: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class CarTent: Container_Base
	{
		itemSize[] = {5,3};
	};
	class LargeTent: Container_Base
	{
		itemSize[] = {5,2};
	};
	class MediumTent: Container_Base
	{
		itemSize[] = {4,2};
	};
	class MetalWire: Inventory_Base
	{
		itemSize[] = {1,2};
	};
	class PartyTent: Container_Base
	{
		itemSize[] = {4,2};
	};
	class Camonet: Inventory_Base
	{
		itemSize[] = {3,2};
	};
	class ExpansionLumberBase;
	class ExpansionLumber3: ExpansionLumberBase
	{
		itemSize[] = {2,12};
	};
	class ExpansionBaseBuilding;
	class ExpansionBarbedWire: ExpansionBaseBuilding
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
				};
			};
		};
	};
	class ExpansionHesco: ExpansionBaseBuilding
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 60000;
				};
			};
		};
	};
	class Lockpick: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class Car_Lockpick: Lockpick
	{
		scope = 2;
		displayName = "Car Lockpick";
		descriptionShort = "Lockpick designed to unlock all vehicle types";
		isLockpick = 1;
		itemSize[] = {1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\Lockpick.rvmat"}},{0.7,{"DZ\gear\tools\data\Lockpick.rvmat"}},{0.5,{"DZ\gear\tools\data\Lockpick_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\Lockpick_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\Lockpick_destruct.rvmat"}}};
				};
			};
		};
	};
	class AmmoBox: Container_Base
	{
		scope = 2;
		itemsCargoSize[] = {10,3};
		inventorySlot[] = {"AmmoBox1","AmmoBox2","AmmoBox3"};
		allowOwnedCargoManipulation = 1;
	};
	class Switchable_Base;
	class Chainsaw: Switchable_Base
	{
		displayName = "Chainsaw";
		descriptionShort = "A portable chainsaw used for cutting trees, or ripping victims apart...";
		isMeleeWeapon = 1;
		stackedUnit = "ml";
		attachments = "{}";
		quantityBar = 1;
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4000;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLevels[] = {{1.0,{"DZ\weapons\melee\powered\Data\chainsaw.rvmat"}},{0.7,{"DZ\weapons\melee\powered\Data\chainsaw.rvmat"}},{0.5,{"DZ\weapons\melee\powered\Data\chainsaw_damage.rvmat"}},{0.3,{"DZ\weapons\melee\powered\Data\chainsaw_damage.rvmat"}},{0.0,{"DZ\weapons\melee\powered\Data\chainsaw_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyStorageMax = 4000;
			energyAtSpawn = 4000;
			convertEnergyToQuantity = 1;
			energyUsagePerSecond = 4;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeChainsaw";
				range = 1.6;
			};
			class Heavy
			{
				ammo = "MeleeChainsaw";
				range = 1.6;
			};
			class Sprint
			{
				ammo = "MeleeChainsaw";
				range = 2.2;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeChainsaw";
				range = 1.6;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeChainsaw";
				range = 1.6;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeChainsaw";
				range = 2.2;
			};
		};
	};
	class Chainsaw_Green: Chainsaw
	{
		scope = 2;
		displayName = "Green Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_green.paa"};
	};
	class Chainsaw_Red: Chainsaw
	{
		scope = 2;
		displayName = "Red Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_red.paa"};
	};
	class Chainsaw_Yellow: Chainsaw
	{
		scope = 2;
		displayName = "Yellow Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_yellow.paa"};
	};
	class Chainsaw_White: Chainsaw
	{
		scope = 2;
		displayName = "White Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_white.paa"};
	};
	class Chainsaw_Black: Chainsaw
	{
		scope = 2;
		displayName = "Black Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_black.paa"};
	};
	class Chainsaw_Blood: Chainsaw
	{
		scope = 2;
		displayName = "Bloody Chainsaw";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanResize\Data\chainsaw_co_blood.paa"};
	};
	class Grenade_Base;
	class RGD5Grenade: Grenade_Base
	{
		itemSize[] = {1,1};
	};
	class M67Grenade: Grenade_Base
	{
		itemSize[] = {1,1};
	};
	class M18SmokeGrenade_ColorBase: Grenade_Base
	{
		itemSize[] = {1,2};
	};
	class RDG2SmokeGrenade_ColorBase: Grenade_Base
	{
		itemSize[] = {1,2};
	};
	class FlashGrenade: Grenade_Base
	{
		itemSize[] = {1,1};
	};
	class PeachesCan: Edible_Base
	{
		itemSize[] = {1,2};
	};
	class PeachesCan_Opened: Edible_Base
	{
		itemSize[] = {1,2};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 350;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SpaghettiCan: Edible_Base
	{
		itemSize[] = {1,2};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		itemSize[] = {1,2};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 350;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class Rice: Edible_Base
	{
		itemSize[] = {1,2};
		class Nutrition
		{
			fullnessIndex = 3;
			energy = 400;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class CharcoalTablets: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class PainkillerTablets: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class VitaminBottle: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class PurificationTablets: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class SewingKit: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class DuctTape: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class EpoxyPutty: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class BakedBeansCan: Edible_Base
	{
		itemSize[] = {1,2};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		itemSize[] = {1,2};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 350;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		itemSize[] = {1,2};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		itemSize[] = {1,2};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 350;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class WaterBottle: Bottle_Base
	{
		itemSize[] = {1,2};
		varQuantityInit = 1500.0;
		varQuantityMax = 1500.0;
	};
	class SodaCan_ColorBase: Edible_Base
	{
		itemSize[] = {1,1};
		class Nutrition
		{
			totalVolume = 1;
			energy = 100;
			water = 200;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SodaCan_1664: SodaCan_ColorBase
	{
		scope=2;
		displayName="1664";	
		hiddenSelectionsTextures[]=
		{
			"SpartanResize\data\SodaCan_1664.paa"
		};
	};
	class SodaCan_Corona: SodaCan_ColorBase
	{
		scope=2;
		displayName="Corona";	
		hiddenSelectionsTextures[]=
		{
			"SpartanResize\data\SodaCan_Corona.paa"
		};
	};
	class SodaCan_Skoll: SodaCan_ColorBase
	{
		scope=2;
		displayName="Skoll";	
		hiddenSelectionsTextures[]=
		{
			"SpartanResize\data\SodaCan_Skoll.paa"
		};
	};
	class BoxCerealCrunchin: Edible_Base
	{
		itemSize[] = {2,2};
	};
	class Hammer: Inventory_Base
	{
		itemSize[] = {1,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
				};
			};
		};
	};
	class Screwdriver: Inventory_Base
	{
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
		};
	};
	class Pliers: Inventory_Base
	{
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader{};
	class powerChainsawON_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"SpartanResize\Data\ChainsawON.ogg",1}};
		volume = 0.5;
		range = 50;
	};
	class powerChainsawOFF_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"SpartanResize\Data\ChainsawOFF.ogg",1}};
		volume = 0.8;
		range = 30;
	};
	class powerChainsawLOOP_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"SpartanResize\Data\ChainsawIDLE.ogg",1}};
		volume = 0.8;
		range = 30;
	};
	class powerChainsawRev_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"SpartanResize\Data\ChainsawRUNNING.ogg",1}};
		volume = 1.2;
		range = 30;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class powerChainsawON_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"powerChainsawON_Soundshader"};
	};
	class powerChainsawOFF_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"powerChainsawOFF_Soundshader"};
	};
	class powerChainsawLOOP_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"powerChainsawLOOP_Soundshader"};
	};
	class powerChainsawRev_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"powerChainsawRev_Soundshader"};
	};
};
class CfgSounds
{
	class default
	{
		name = "";
		titles[] = {};
	};
	class ChainsawONAction_1: default
	{
		sound[] = {"SpartanResize\Data\ChainsawAction.ogg",3,1,30};
	};
};
class CfgActionSounds
{
	class ChainsawONAction
	{
		sounds[] = {"ChainsawONAction_1"};
	};
};