class CfgPatches
{
	class DamageRebal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Man: AllVehicles{};
	class SurvivorBase: Man
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1.5;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 3;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.5;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 1;
							};
						};
						class Infected
						{
							class Health
							{
								damage = 0.5;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"dmgZone_head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask","Eyewear"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"dmgZone_leftArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"dmgZone_rightArm"};
					fatalInjuryCoef = -1;
				};
				class LeftHand
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					transferToZonesNames[] = {"LeftArm"};
					transferToZonesCoefs[] = {0.33};
					componentNames[] = {"dmgZone_leftHand"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Gloves"};
				};
				class RightHand
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					transferToZonesNames[] = {"RightArm"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"dmgZone_rightHand"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Gloves"};
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_leftLeg"};
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_rightLeg"};
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_leftFoot"};
					inventorySlots[] = {"Feet"};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.2};
				};
				class RightFoot: LeftFoot
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.1;
							};
						};
					};
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_rightFoot"};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.2};
				};
			};
		};
	};
};
