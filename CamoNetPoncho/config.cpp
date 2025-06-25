class CfgPatches
{
	class Inkota_CamoNetPoncho
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
		units[] = {"INK_CamoNetPoncho"};
	};
};
class CfgMods
{
	class CamoNetPoncho
	{
		dir = "CamoNetPoncho";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CamoNetPoncho";
		credits = "Inkota";
		author = "Inkota";
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
				files[] = {"CamoNetPoncho/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class INK_CamoNetPoncho_Base: Clothing
	{
		scope = 0;
		displayName = "Move along";
		descriptionShort = "Nothing to see here";
		model = "CamoNetPoncho\CamoNetPoncho_g.p3d";
		inventorySlot[] = {"Armband"};
		weight = 2000;
		itemSize[] = {6,3};
		absorbency = 0.3;
		heatIsolation = 0.0;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,50.0};
		hiddenSelections[] = {"color"};
		class ClothingTypes
		{
			male = "CamoNetPoncho\CamoNetPoncho.p3d";
			female = "CamoNetPoncho\CamoNetPoncho.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\camonet_east_nowind.rvmat"}},{0.7,{"DZ\gear\camping\data\camonet_east_nowind.rvmat"}},{0.5,{"DZ\gear\camping\data\camonet_east_nowind.rvmat"}},{0.3,{"DZ\gear\camping\data\camonet_east_nowind.rvmat"}},{0.0,{"DZ\gear\camping\data\camonet_east_nowind.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class INK_CamoNetPoncho: INK_CamoNetPoncho_Base
	{
		scope = 2;
		displayName = "Improvised Camo Net Poncho | Camo";
		descriptionShort = "Very simple-made and effective thing.";
		hiddenSelectionsTextures[] = {"dz\structures\military\improvised\data\camonet_east_co.paa"};
	};
	class White_CamoNetPoncho: INK_CamoNetPoncho_Base
	{
		scope = 2;
		displayName = "Improvised Camo Net Poncho | Winter";
		descriptionShort = "Very simple-made and effective thing.";
		hiddenSelectionsTextures[] = {"dz\structures\military\improvised\data\camonet_east_co.paa"};
	};
	class Black_CamoNetPoncho: INK_CamoNetPoncho_Base
	{
		scope = 2;
		displayName = "Black Improvised Camo Net Poncho | Black";
		descriptionShort = "Very simple-made and effective thing.";
		hiddenSelectionsTextures[] = {"CamoNetPoncho\Data\camonet_black_co.paa"};
	};
};