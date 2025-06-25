class CfgPatches
{
	class MAPR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgMods
{
	class MAPR
	{
		dir = "MAPR";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MA Pristine Repair";
		credits = "Mr. Alex";
		author = "Mr. Alex";
		authorID = "0";
		version = "1.0";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"MAPR/Scripts/4_world"};
			};
		};
	};
};
