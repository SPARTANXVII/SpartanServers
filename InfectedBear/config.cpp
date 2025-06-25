class CfgPatches
{
	class InfectedBear
	{
		units[] = {"Animal_UrsusArctos"};
		weapons[] = {};
		requiredVersion = 1.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};
class CfgMods
{
	class InfectedBear
	{
		dir = "InfectedBear";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "InfectedBear";
		credits = "Archimedes";
		author = "Archimedes";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"InfectedBear/scripts/4_world/entities"};
			};
		};
	};
};
class cfgVehicles
{
	class BearPelt;
	class InfectedBear_pelt: BearPelt
	{
		scope = 2;
		displayName = "Infected Bear Pelt";
		descriptionShort = "Only a true survivalist could even dream of holding one of these cursed pelts";
		weight = 1200;
		itemSize[] = {6,3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"InfectedBear\data\InfectedBear_Pelt_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
				};
			};
		};
	};
	class Animal_UrsusArctos;
	class Animal_Infected_Bear45: Animal_UrsusArctos
	{
		scope = 2;
		displayName = "Infected Bear";
		descriptionShort = "";
		hiddenSelections[] = {"body_injury"};
		hiddenSelectionsTextures[] = {"InfectedBear\data\InfectedBear_co.paa"};
		hiddenSelectionsMaterials[] = {"InfectedBear\data\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 4500;
				};
				class Shock
				{
					hitpoints = 4500;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "InfectedBear_pelt";
				count = 2;
				itemZones[] = {"Zone_Pelvis","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "Infected_Bear_Meat";
				count = 10;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {8,8};
				quantityMinMaxCoef[] = {0.7,1};
			};
		};
	};
	class Animal_Infected_Bear20k: Animal_UrsusArctos
	{
		scope = 2;
		displayName = "Infected Bear";
		descriptionShort = "";
		hiddenSelections[] = {"body_injury"};
		hiddenSelectionsTextures[] = {"InfectedBear\data\InfectedBear_co.paa"};
		hiddenSelectionsMaterials[] = {"InfectedBear\data\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 20000;
				};
				class Shock
				{
					hitpoints = 20000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "InfectedBear_pelt";
				count = 5;
				itemZones[] = {"Zone_Pelvis","Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "Infected_Bear_Meat";
				count = 10;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {8,8};
				quantityMinMaxCoef[] = {0.7,1};
			};
		};
	};
	class Animal_Infected_Bear50k: Animal_Infected_Bear20k
	{
		scope = 2;
		displayName = "Infected Bear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 20000;
				};
				class Shock
				{
					hitpoints = 20000;
				};
			};
		};
	};
	class Animal_Infected_Bear100k: Animal_Infected_Bear20k
	{
		scope = 2;
		displayName = "Infected Bear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 20000;
				};
				class Shock
				{
					hitpoints = 20000;
				};
			};
		};
	};
	class BearSteakMeat;
	class Infected_Bear_Meat: BearSteakMeat
	{
		scope = 2;
		displayName = "Infected Bear Meat";
		descriptionShort = "Meat from an Infected bear. No one's ever survived an attack long enough to taste this delicacy";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"InfectedBear\data\infectedbear_meat_steak_co.paa","InfectedBear\data\meat_steak_baked_CO.paa","InfectedBear\data\meat_steak_baked_CO.paa","InfectedBear\data\meat_steak_dried_CO.paa","InfectedBear\data\meat_steak_burned_CO.paa"};
		class FoodAnimationSources;
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1,4};
					cooking_properties[] = {0,0};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1,"4 + 16"};
					cooking_properties[] = {0,0};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,120,80};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1,16};
					cooking_properties[] = {100,30};
				};
			};
			class MeatStageTransitions;
			class FoodStageTransitions: MeatStageTransitions{};
		};
	};
};
