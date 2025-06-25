class CfgPatches
{
	class SpartanMedical
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"DZ_Scripts"};
	};
};
class CfgMods
{
	class SpartanMedical
	{
		dir = "SpartanMedical";
		name = "SpartanMedical";
		author = "Archimedes";
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] =
				{
					"SpartanMedical/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"SpartanMedical/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Adrenophine: Inventory_Base
	{
		scope=2;
		displayName="Adrenophine";
		descriptionShort="A highly potent punch of Stimulant-Z to give you the edge you need to Fight or Flee. Heals +15% Health";
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		inventorySlot[] = {"morphine","epinephrine","morphine2","epinephrine2"};
		weight=60;
		soundImpactType="plastic";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = {"SpartanMedical\data\Adrenophine.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{1,{"SpartanMedical\data\Adrenophine.rvmat"}},{0.69999999,{"SpartanMedical\data\Adrenophine.rvmat"}},{0.5,{"SpartanMedical\data\Morphine_damage.rvmat"}},{0.30000001,{"SpartanMedical\data\Morphine_damage.rvmat"}},{0,{"SpartanMedical\data\Morphine_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class Epinephrine: Inventory_Base
	{
		scope=2;
		descriptionShort="A pen of adrenaline for intramuscular injection. Improves breathing, and instantly heals broken legs";
	};	
};