class CfgPatches {
	class MuchStuffPack_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
	};
};

class CfgMods
{
	class MuchStuffPack_Fix
	{
		dir="Gelik";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MuchStuffPack_Fix";
		credits="Gelik";
		author="Gelik";
		authorID="0";
		version=0.1;
		extra=0;
		type="mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MuchStuffPack_Fix/Scripts/4_World"
				};
			};
		};
	};
};