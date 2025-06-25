class CfgPatches
{
	class Drunk
	{
		units[] = {"Budweiser_Beer","BudLight_Beer","CoorsLight_Beer","PBR_Beer"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Drinks"};
	};
};
class CfgMods
{
	class Drunk
	{
		dir = "AmericanDrinks";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "AmericanDrinks";
		author = "Deceased";
		credits = "affenb3rt";
		authorID = "76561198147193612";
		version = "1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"AmericanDrinks/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"AmericanDrinks/scripts/4_World"};
			};
		};
	};
};
class cfgVehicles
{
	class Edible_Base;
	class SodaCan_ColorBase: Edible_Base
	{
		class Nutrition;
	};
	class SodaCan_Kvass: SodaCan_ColorBase
	{
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class Budweiser_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Budweiser Beer";
		descriptionShort = "A medium-bodied, flavorful, crisp American-style lager. It is brewed with the best barley malt and a blend of premium hop varieties. 5% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\Budweiser.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class BudLight_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "BudLight Beer";
		descriptionShort = "Used to be rednecks go to beer, not anymore though. Taste the rainbow. 4.2% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\BudLight.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class MillerLite_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Miller Lite Beer";
		descriptionShort = "Light American lager beer sold by Molson Coors. 4.2% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\MillerLite.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class RollingRock_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Rolling Rock Beer";
		descriptionShort = "American lager launched in 1939 by the Latrobe Brewing Company. 4.4% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\RollingRock.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class BuschLight_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Busch Light Beer";
		descriptionShort = "America's number one piss beer. 4.1% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\BuschLight.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class CoorsLight_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Coors Light Beer";
		descriptionShort = "American style light lager. Crisp, clean and refreshing. 4.2% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\CoorsLight.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
	class PBR_Beer: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "Pabst Blue Ribbon";
		descriptionShort = "An American lager beer sold by Pabst Brewing Company, established in Milwaukee, Wisconsin. 4.8% ABV";
		hiddenSelectionsTextures[] = {"AmericanDrinks\drinks\PabstRibbon.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Nutrition: Nutrition
		{
			agents = 1024;
		};
	};
};
class cfgLiquidDefinitions
{
	class Vodka
	{
		type = 2048;
		displayName = "$STR_cfgLiquidDefinitions_Vodka0";
		flammability = 10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 231;
			water = 15;
			nutritionalIndex = 75;
			toxicity = 0.05;
			digestibility = 2;
			agents = 1024;
		};
	};
};
