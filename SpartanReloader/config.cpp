class CfgPatches
{
	class SpartanReloader
	{
		units[] = {"AmmoBox_Reloader_OD","AmmoBox_Reloader_Black","AmmoBox_Reloader_Winter"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables","DZ_Gear_Camping","DZ_Gear_Food","DZ_Gear_Tools","DZ_Characters"};
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"SpartanReloader/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class AmmoBox_Reloader_Base: Container_Base
	{
		scope = 0;
		displayName = "AmmoBox_Reloader_Base";
		descriptionShort = "Ammobox refitted to reload magazines on the go. Reloads up to 3 mags at once. Consumes ammo from container.";
		model = "\dz\gear\containers\300RoundBox.p3d";
		weight=2250;
		itemSize[]={5,4};
		rotationFlags = 0;
		hiddenSelections[] = {"zbytek"};
		canBeDigged=1;
		repairableWithKits[]={8};
		repairCosts[]={25};
		attachments[] = {"magazine","magazine","magazine","batteryD"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\300RoundBox.rvmat"
							}
						},
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\300RoundBox.rvmat"
							}
						},
						{
							0.5,
							
							{
								"DZ\gear\containers\data\300RoundBox_damage.rvmat"
							}
						},
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\300RoundBox_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"DZ\gear\containers\data\300RoundBox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AmmoBox_Reloader_Black: AmmoBox_Reloader_Base
	{
		scope = 2;
		displayName = "Ammo Reloader | Black";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanReloader\data\AmmoBox_Reloader_Black.paa"};
		hiddenSelectionsMaterials[] = {"\dz\gear\containers\300RoundBox.rvmat"};
	};
	class AmmoBox_Reloader_OD: AmmoBox_Reloader_Base
	{
		scope = 2;
		displayName = "Ammo Reloader | OD";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanReloader\data\AmmoBox_Reloader_OD.paa"};
		hiddenSelectionsMaterials[] = {"\dz\gear\containers\300RoundBox.rvmat"};
	};
	class AmmoBox_Reloader_Winter: AmmoBox_Reloader_Base
	{
		scope = 2;
		displayName = "Ammo Reloader | Winter";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SpartanReloader\data\AmmoBox_Reloader_Winter.paa"};
		hiddenSelectionsMaterials[] = {"\dz\gear\containers\300RoundBox.rvmat"};
	};
};