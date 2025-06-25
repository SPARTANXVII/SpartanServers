class CfgPatches
{
	class Burn
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Burn
	{
		type = "mod";
		author = "Sparda";
		dir = "Burn";
		name = "Burn";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Burn\scripts\3_game"};
			};
			class worldScriptModule
			{
				files[] = {"Burn\scripts\4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Burn\scripts\5_mission"};
			};
		};
	};
};