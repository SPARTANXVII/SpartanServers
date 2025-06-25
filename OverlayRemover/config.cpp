#define _ARMA_

class CfgPatches
{
	class OverlayRemover
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};
class CfgMods
{
	class OverlayRemover
	{
		dir = "OverlayRemover";
		hideName = 0;
		hidePicture = 1;
		name = "Overlay Remover";
		author = "B3TR4Y";
		credits = "B3TR4Y";
		authorID = "0";
		version = "1.0";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class engineScriptModule
			{
				value = "";
				files[] = {"OverlayRemover/Scripts/common","OverlayRemover/Scripts/1_core"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"OverlayRemover/Scripts/common","OverlayRemover/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"OverlayRemover/Scripts/common","OverlayRemover/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"OverlayRemover/Scripts/common","OverlayRemover/Scripts/5_Mission"};
			};
		};
	};
};
