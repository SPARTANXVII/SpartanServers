class CfgPatches
{
	class VehicleEdits
	{
		units[] = {"OffroadHatchback","CivilianSedan","Hatchback_02","Sedan_02","Offroad_02"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled","MD_Vehicles_Dingo"};
	};
};

class CfgMods
{
	class VehiclesEdits
	{
		dir = "VehiclesEdits";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"VehiclesEdits/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class CarScript;
	class CarWheel;
	class Crew;
	class Driver;
	class CoDriver;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class Axles;
	class Wheels;
	class Window;
	class Health;
	class Doors;
	class Inventory_Base;
	class SimulationModule;
	class AnimationSources;
	class ExpansionHelicopterScript;
	class ExpansionVehicleHelicopterBase;
	class GUIInventoryAttachmentsProps;
	class Body;
	class DamageSystem;
	class DamageZones;
	class GlobalHealth;
	class HouseNoDestruct;
	class OffroadHatchback: CarScript
	{
		fuelCapacity=65;
		fuelConsumption=7;
		class SimulationModule
		{
			drive = "DRIVE_AWD";
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.5,2,1.6,3,1.8,3.5,2};
			class Engine
			{
				torqueCurve[] = {600,300,800,400,1200,600,2200,500,3200,500,4200,300};
				inertia=0.20;
				frictionTorque=90;
				rollingFriction=0.5;
				viscousFriction=0.3;
				rpmIdle=1000;
				rpmMin=1200;
				rpmClutch=1300;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=600;
				uncoupleTime=0.4;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=3.11;
				ratios[]={4.98,3.13,2.22,1.54,0.96};
			};
			class CentralDifferential
			{
				ratio=1.5;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 40;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class OffroadHatchbackWheel: CarWheel
	{
		friction=0.9;
	};
	class CivilianSedan: CarScript
	{
		fuelCapacity=55;
		fuelConsumption=7;
		class SimulationModule
		{
			drive="DRIVE_RWD";
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.5,2,1.6,3,1.8,3.5,2};
			class Engine
			{
				torqueCurve[] = {600,300,800,400,1200,600,2200,500,3200,500,4200,300};
				inertia=0.20;
				frictionTorque=90;
				rollingFriction=0.5;
				viscousFriction=0.3;
				rpmIdle=1000;
				rpmMin=1200;
				rpmClutch=1300;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=500;
				uncoupleTime=0.4;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=3.11;
				ratios[]={4.98,3.13,2.22,1.54,0.96};
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 40;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class CivSedanWheel: CarWheel
	{
		friction=0.9;
	};
	class Hatchback_02: CarScript
	{
		fuelCapacity=55;
		fuelConsumption=7;
		class SimulationModule
		{
			drive="DRIVE_FWD";
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.5,2,1.6,3,1.8,3.5,2};
			class Engine
			{
				torqueCurve[] = {600,300,800,400,1200,600,2200,500,3200,500,4200,300};
				inertia=0.20;
				frictionTorque=90;
				rollingFriction=0.5;
				viscousFriction=0.3;
				rpmIdle=1000;
				rpmMin=1200;
				rpmClutch=1300;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=500;
				uncoupleTime=0.4;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=3.11;
				ratios[]={4.98,3.13,2.22,1.54,0.96};
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 40;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Hatchback_02_Wheel: CarWheel
	{
		friction=0.9;
	};
	
	//Sedan_02
	class Sedan_02: CarScript
	{
		fuelCapacity=55;
		fuelConsumption=7;
		class SimulationModule
		{
			drive = "DRIVE_RWD";
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 3;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.5,2,1.6,3,1.8,3.5,2};
			class Engine
			{
				torqueCurve[] = {600,300,800,400,1200,600,2200,500,3200,500,4200,300};
				inertia=0.20;
				frictionTorque=90;
				rollingFriction=0.5;
				viscousFriction=0.3;
				rpmIdle=1000;
				rpmMin=1200;
				rpmClutch=1300;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=300;
				uncoupleTime=0.4;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=3.11;
				ratios[]={4.98,3.13,2.22,1.54,0.96};
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 40;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Sedan_02_Wheel: CarWheel
	{
		friction=0.9;
	};
	class Truck_01_Base: CarScript
	{
		fuelCapacity = 200;
		fuelConsumption = 30;
		class Cargo
		{
			itemsCargoSize[] = {10,120};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class SimulationModule
		{
			drive = "DRIVE_642";
			airDragCoefficient = 0.995;
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.5,2,1.6,3,1.8,3.5,2};
			class Engine
			{
				torqueCurve[] = {600,300,800,400,1200,600,2200,500,3200,500,4200,300};
				inertia = 0.85;
				frictionTorque = 90;
				rollingFriction = 2
				viscousFriction = 1.1;
				rpmIdle = 1000;
				rpmMin = 1100;
				rpmClutch = 1200;
				rpmRedline = 6600;
			};
			class Clutch
			{
				maxTorqueTransfer = 2000;
				uncoupleTime=0.4;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type = "GEARBOX_AUTOMATIC";
				reverse = 3.43;
				ratios[] = {6.88,4.67,3.42,2.70,1.52,1.07};
			};
			class CentralDifferential
			{
				ratio=0.75;
			    type="DIFFERENTIAL_LOCKED";
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 45;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.204;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
				};
			};
			class DamageSystem
			{
				class GlobalHealth
				{
					class Health
					{
						hitpoints=15000;
					};
				};
			};
		};
	};
	class Offroad_02_Wheel: CarWheel
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Door_1_1: CarDoor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Door_2_1: Offroad_02_Door_1_1
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Door_1_2: Offroad_02_Door_1_1
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Door_2_2: Offroad_02_Door_1_1
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Hood: CarDoor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02_Trunk: CarDoor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
				};
			};
		};
	};
	class Offroad_02: CarScript
	{
		fuelCapacity=150;
		fuelConsumption=30;
		class SimulationModule
		{
			class Steering
			{
				maxSteeringAngle = 30;
				increaseSpeed[] = {0,25,50,15};
				decreaseSpeed[] = {0,50,50,40};
				centeringSpeed[] = {0,25,50,15};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4;
				gentleCoef = 0.75;
			};
			class Brake
			{
				pressureBySpeed[] = {0,0.85,10,0.75,20,0.65,50,0.45,80,0.6,100,0.75};
				gentleCoef = 0.7;
				minPressure = 0.2;
				reactionTime = 0.15;
				driverless = 0.1;
			};
			class Aerodynamics
			{
				frontalArea = 3.05;
				dragCoefficient = 0.58;
			};
			class Engine
			{
				torqueCurve[] = {750,0,900,200,1300,313,2500,384,4500,316,7200,0};
				inertia = 3.6;
				frictionTorque = 220;
				rollingFriction = 1.2;
				viscousFriction = 1.25;
				rpmIdle = 1000;
				rpmMin = 1050;
				rpmClutch = 1500;
				rpmRedline = 6500;
			};
			class Clutch
			{
				maxTorqueTransfer = 420;
				uncoupleTime = 0.1;
				coupleTime = 0.1;
			};
			class Gearbox
			{
				type="GEARBOX_AUTOMATIC";
				reverse=3.07;
				ratios[]={4.35,2.5,1.66,1.23,1,0.85,};
			};
			class CentralDifferential
			{
				ratio = 2.121;
				type = "DIFFERENTIAL_LOCKED";
			};
			class Axles
			{
				class Front
				{
					maxBrakeTorque = 3000;
					maxHandbrakeTorque = 2500;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Differential
					{
						ratio = 4.0;
						type = "DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness = 70000;
						compression = 2500;
						damping = 7500;
						travelMaxUp = 0.1;
						travelMaxDown = 0.1;
					};
				};
				class Rear
				{
					maxBrakeTorque = 1750;
					maxHandbrakeTorque = 2000;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Differential
					{
						ratio = 4.0;
						type = "DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness = 75000;
						compression = 2400;
						damping = 7500;
						travelMaxUp = 0.08;
						travelMaxDown = 0.08;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
		};
	};
	class Dingo;
	class DingoDoors_Driver;
	class DingoDoors_CoDriver;
	class DingoDoors_Cargo1;
	class DingoDoors_Cargo2;
	class DingoTrunk;
	class DingoHood;
	class DingoWheel;
	class DingoWheel_Ruined;
//CHDKZ/////////////////////////////////////////
	class DingoDoors_Driver_CHDKZ: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo CHDKZ Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\innen_teile2_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_CHDKZ: DingoDoors_CoDriver
	{
		displayName="Dingo CHDKZ CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\innen_teile2_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_CHDKZ: DingoDoors_Cargo1
	{
		displayName="Dingo CHDKZ Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\innen_teile2_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_CHDKZ: DingoDoors_Cargo2
	{
		displayName="Dingo CHDKZ Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\innen_teile2_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_CHDKZ: DingoTrunk
	{
		scope=2;
		displayName="Dingo CHDKZ Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_CHDKZ: DingoHood
	{
		scope=2;
		displayName="Dingo CHDKZ Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_CHDKZ: Dingo
	{
		scope=2;
		displayname="Dingo CHDKZ Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\a_teile_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\innen_teile2_CHDKZ_co.paa",
			"VehiclesEdits\Dingo\CHDKZ\karosse_CHDKZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};	
//DARKGREEN/////////////////////////////////////////
	class DingoDoors_Driver_DARKGREEN: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo DARKGREEN Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\innen_teile2_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_DARKGREEN: DingoDoors_CoDriver
	{
		displayName="Dingo DARKGREEN CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\innen_teile2_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_DARKGREEN: DingoDoors_Cargo1
	{
		displayName="Dingo DARKGREEN Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\innen_teile2_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_DARKGREEN: DingoDoors_Cargo2
	{
		displayName="Dingo DARKGREEN Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\innen_teile2_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_DARKGREEN: DingoTrunk
	{
		scope=2;
		displayName="Dingo DARKGREEN Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_DARKGREEN: DingoHood
	{
		scope=2;
		displayName="Dingo DARKGREEN Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_DARKGREEN: Dingo
	{
		scope=2;
		displayname="Dingo DARKGREEN Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\a_teile_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\innen_teile2_DARKGREEN_co.paa",
			"VehiclesEdits\Dingo\DARKGREEN\karosse_DARKGREEN_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//WTR/////////////////////////////////////////
	class DingoDoors_Driver_WTR: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo WTR Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\innen_teile2_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_WTR: DingoDoors_CoDriver
	{
		displayName="Dingo WTR CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\innen_teile2_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_WTR: DingoDoors_Cargo1
	{
		displayName="Dingo WTR Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\innen_teile2_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_WTR: DingoDoors_Cargo2
	{
		displayName="Dingo WTR Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\innen_teile2_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_WTR: DingoTrunk
	{
		scope=2;
		displayName="Dingo WTR Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_WTR: DingoHood
	{
		scope=2;
		displayName="Dingo WTR Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_WTR: Dingo
	{
		scope=2;
		displayname="Dingo WTR Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\a_teile_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\innen_teile2_WTR_co.paa",
			"VehiclesEdits\Dingo\WTR\karosse_WTR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//CDF/////////////////////////////////////////
	class DingoDoors_Driver_CDF: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo CDF Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\innen_teile2_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_CDF: DingoDoors_CoDriver
	{
		displayName="Dingo CDF CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\innen_teile2_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_CDF: DingoDoors_Cargo1
	{
		displayName="Dingo CDF Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\innen_teile2_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_CDF: DingoDoors_Cargo2
	{
		displayName="Dingo CDF Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\innen_teile2_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_CDF: DingoTrunk
	{
		scope=2;
		displayName="Dingo CDF Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_CDF: DingoHood
	{
		scope=2;
		displayName="Dingo CDF Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_CDF: Dingo
	{
		scope=2;
		displayname="Dingo CDF Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\a_teile_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\innen_teile2_CDF_co.paa",
			"VehiclesEdits\Dingo\CDF\karosse_CDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//CP/////////////////////////////////////////
	class DingoDoors_Driver_CP: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo CP Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\innen_teile2_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_CP: DingoDoors_CoDriver
	{
		displayName="Dingo CP CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\innen_teile2_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_CP: DingoDoors_Cargo1
	{
		displayName="Dingo CP Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\innen_teile2_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_CP: DingoDoors_Cargo2
	{
		displayName="Dingo CP Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\innen_teile2_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_CP: DingoTrunk
	{
		scope=2;
		displayName="Dingo CP Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_CP: DingoHood
	{
		scope=2;
		displayName="Dingo CP Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_CP: Dingo
	{
		scope=2;
		displayname="Dingo CP Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa",
			"VehiclesEdits\Dingo\CP\a_teile_CP_co.paa",
			"VehiclesEdits\Dingo\CP\innen_teile2_CP_co.paa",
			"VehiclesEdits\Dingo\CP\karosse_CP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//UN/////////////////////////////////////////
	class DingoDoors_Driver_UN: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo UN Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\innen_teile2_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_UN: DingoDoors_CoDriver
	{
		displayName="Dingo UN CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\innen_teile2_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_UN: DingoDoors_Cargo1
	{
		displayName="Dingo UN Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\innen_teile2_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_UN: DingoDoors_Cargo2
	{
		displayName="Dingo UN Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\innen_teile2_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_UN: DingoTrunk
	{
		scope=2;
		displayName="Dingo UN Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_UN: DingoHood
	{
		scope=2;
		displayName="Dingo UN Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_UN: Dingo
	{
		scope=2;
		displayname="Dingo UN Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa",
			"VehiclesEdits\Dingo\UN\a_teile_un_co.paa",
			"VehiclesEdits\Dingo\UN\innen_teile2_un_co.paa",
			"VehiclesEdits\Dingo\UN\karosse_un_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//Czech Woodland/////////////////////////////////////////
	class DingoDoors_Driver_CZ_Woodland: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo Czech Woodland Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_CZ_Woodland: DingoDoors_CoDriver
	{
		displayName="Dingo Czech Woodland CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_CZ_Woodland: DingoDoors_Cargo1
	{
		displayName="Dingo Czech Woodland Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_CZ_Woodland: DingoDoors_Cargo2
	{
		displayName="Dingo Czech Woodland Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_CZ_Woodland: DingoTrunk
	{
		scope=2;
		displayName="Dingo Czech Woodland Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\a_teile_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_CZ_Woodland: DingoHood
	{
		scope=2;
		displayName="Dingo Czech Woodland Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_CZ_Woodland: Dingo
	{
		scope=2;
		displayname="Dingo Czech Woodland Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"MDZ_Dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa",
			"mdz_dingo\vehicles\dingo\data\a_teile_cobackup.paa",
			"mdz_dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"mdz_dingo\vehicles\dingo\data\acr_karosse_wdl_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile_innen.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//Czech Desert/////////////////////////////////////////
	class DingoDoors_Driver_CZ_DESERT: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo Czech Desert Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_CZ_DESERT: DingoDoors_CoDriver
	{
		displayName="Dingo Czech Desert CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_CZ_DESERT: DingoDoors_Cargo1
	{
		displayName="Dingo Czech Desert Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_CZ_DESERT: DingoDoors_Cargo2
	{
		displayName="Dingo Czech Desert Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_CZ_DESERT: DingoTrunk
	{
		scope=2;
		displayName="Dingo Czech Desert Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_CZ_DESERT: DingoHood
	{
		scope=2;
		displayName="Dingo Czech Desert Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_CZ_DESERT: Dingo
	{
		scope=2;
		displayname="Dingo Czech Desert Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa",
			"mdz_dingo\vehicles\dingo\data\ACR_DES_a_teile_cobackup.paa",
			"mdz_dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"mdz_dingo\vehicles\dingo\data\ACR_karosse_des_cobackup.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile_innen.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
//Bundeswehr Desert/////////////////////////////////////////
	class DingoDoors_Driver_GER_DESERT: DingoDoors_Driver
	{
		scope=2;
		displayName="Dingo German Desert Driver Door";
		descriptionShort="Door for the Dingo";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Driver.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo4",
			"camo1"
		};
		rotationFlags=8;
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_CoDriver_GER_DESERT: DingoDoors_CoDriver
	{
		displayName="Dingo German Desert CoDriver Door";
		descriptionShort="Red Driver Door for the Dingo Truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_CoDriver.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo1_GER_DESERT: DingoDoors_Cargo1
	{
		displayName="Dingo German Desert Left Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo1.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoDoors_Cargo2_GER_DESERT: DingoDoors_Cargo2
	{
		displayName="Dingo German Desert Right Rear Door";
		descriptionShort="";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Cargo2.p3d";
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\teile_innen.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class DingoTrunk_GER_DESERT: DingoTrunk
	{
		scope=2;
		displayName="Dingo German Desert Trunk";
		descriptionShort="Openable back bort for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Trunk.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa",
			"MDZ_Dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat",
			"MDZ_Dingo\vehicles\dingo\data\teile.rvmat"
		};
	};
	class DingoHood_GER_DESERT: DingoHood
	{
		scope=2;
		displayName="Dingo German Desert Hood";
		descriptionShort="Openable hood for Dingo truck";
		model="MDZ_Dingo\vehicles\Dingo\proxy\DingoDoors_Hood.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MDZ_Dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
	class Dingo_GER_DESERT: Dingo
	{
		scope=2;
		displayname="Dingo German Desert Truck";
		Model="\MDZ_Dingo\vehicles\Dingo\Dingo2a2.p3d";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"MDZ_Dingo\vehicles\dingo\data\ACR_karosse_des_co.paa",
			"mdz_dingo\vehicles\dingo\data\ACR_DES_a_teile_co.paa",
			"mdz_dingo\vehicles\dingo\data\innen_teile2_co.paa",
			"mdz_dingo\vehicles\dingo\data\ACR_karosse_des_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile.rvmat",
			"mdz_dingo\vehicles\dingo\data\teile_innen.rvmat",
			"mdz_dingo\vehicles\dingo\data\karrosse.rvmat"
		};
	};
};