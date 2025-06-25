class CfgMods
{
	class BBP_InvBuild
	{
		type="mod";
		author="henny";
		name="BBP_InvBuild";
		dir="BBP_InvBuild";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"BBP_InvBuild/scripts/Common","BBP_InvBuild/scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"BBP_InvBuild/scripts/Common","BBP_InvBuild/scripts/5_Mission"};
			};
		};
	};
};
class CfgPatches
{
	class BBP_InvBuild
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};