class CfgPatches
{
	class KeycardOverride
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DNA_Keycards_Objects_Keycard"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class DNA_DimpleKey_Base;
	class DNA_DimpleKey_Red: DNA_DimpleKey_Base
	{
		descriptionShort = "A Security Key used to open Red tier Steel Doors found at Tisy MB";
	};
	class DNA_DimpleKey_Purple: DNA_DimpleKey_Base
	{
		descriptionShort = "A Security Key used to open Purple Tier Steel Doors found at NWAF";
	};
	class DNA_DimpleKey_Blue: DNA_DimpleKey_Base
	{
		descriptionShort = "A Security Key used to open Blue Tier Steel Doors found at Kamensk MB and VMC";
	};
	class DNA_DimpleKey_Green: DNA_DimpleKey_Base
	{
		descriptionShort = "A Security Key used to open Green Tier Steel Doors found at Ostry MB, Staroye Tents, and Zelenogorsk MB";
	};
	class DNA_DimpleKey_Yellow: DNA_DimpleKey_Base
	{
		descriptionShort = "A Security Key used to open Yellow Tier Steel Doors found at Tier 1 Gas Stations";
	};
};