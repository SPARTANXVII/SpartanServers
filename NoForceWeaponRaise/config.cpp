class CfgPatches
{
	class NoForceWeaponRaise
	{
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class NoForceWeaponRaise
	{
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NoForceWeaponRaise/Scripts"};
			};
		};
	};
};
