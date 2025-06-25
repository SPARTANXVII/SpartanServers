class CfgPatches
{
	class RemoveInfection
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class RemoveInfection
	{
		dir = "RemoveInfection";
		name = "RemoveInfection";
		type = "mod";
		credits = "ArchimedesVII";
		author = "ArchimedesVII";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"RemoveInfection/scripts/4_World"};
			};
		};
	};
};
