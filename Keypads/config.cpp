class CfgPatches
{
	class KeyPad_Script
	{
		units[] = {"CarLock"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class KeyPad
	{
		dir = "KeyPads";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SPARTAN";
		credits = "SPARTAN";
		author = "SPARTAN";
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
				files[] = {"Keypads/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CarLock: Inventory_Base
	{
		scope = 2;
		weight = 175;
		displayName = "CarLock";
		descriptionShort = "CarLock can be attached to a car in order to lock a car with an 8 digits password";
		model = "Keypads\FalloutPad\FalloutPad.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.01,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.07,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.3,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.01,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
	};
};
