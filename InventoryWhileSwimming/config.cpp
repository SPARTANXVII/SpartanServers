class CfgPatches
{
	class InventoryWhileSwimming
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class InventoryWhileSwimming
	{
		dir = "InventoryWhileSwimming";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "InventoryWhileSwimming";
		credits = "0";
		author = "Designful";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"InventoryWhileSwimming\Scripts\4_World"};
			};
		};
	};
};
