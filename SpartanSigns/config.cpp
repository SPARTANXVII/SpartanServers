class CfgPatches
{
	class SpartanSigns
	{
		units[] = {"Sign_Aircraft","Sign_BlackMarket","Sign_Garage","Sign_Parking","Sign_Trader"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Signs","DZ_Structures","DZ_Structures_Furniture"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Sign_Aircraft: HouseNoDestruct
	{
		scope = 1;
		model = "\SpartanSigns\SignAircraftTrader.p3d";
		hiddenSelections[] = {"Logo"};
		hiddenSelectionsMaterials[] = {"SpartanSigns\Data\sign.rvmat"};
		hiddenSelectionsTextures[] = {"SpartanSigns\Data\SignAircraftTrader.paa"};
	};
	class Sign_BlackMarket: HouseNoDestruct
	{
		scope = 1;
		model = "\SpartanSigns\SignBlackMarket.p3d";
		hiddenSelections[] = {"Logo"};
		hiddenSelectionsMaterials[] = {"SpartanSigns\Data\sign.rvmat"};
		hiddenSelectionsTextures[] = {"SpartanSigns\Data\SignBlackMarket.paa"};
	};
	class Sign_Garage: HouseNoDestruct
	{
		scope = 1;
		model = "\SpartanSigns\SignGarage.p3d";
		hiddenSelections[] = {"Logo"};
		hiddenSelectionsMaterials[] = {"SpartanSigns\Data\sign.rvmat"};
		hiddenSelectionsTextures[] = {"SpartanSigns\Data\SignGarage.paa"};
	};
	class Sign_Parking: HouseNoDestruct
	{
		scope = 1;
		model = "\SpartanSigns\SignParking.p3d";
		hiddenSelections[] = {"Logo"};
		hiddenSelectionsMaterials[] = {"SpartanSigns\Data\sign.rvmat"};
		hiddenSelectionsTextures[] = {"SpartanSigns\Data\SignParking.paa"};
	};
	class Sign_Trader: HouseNoDestruct
	{
		scope = 1;
		model = "\SpartanSigns\SignTrader.p3d";
		hiddenSelections[] = {"Logo"};
		hiddenSelectionsMaterials[] = {"SpartanSigns\Data\sign.rvmat"};
		hiddenSelectionsTextures[] = {"SpartanSigns\Data\SignTrader.paa"};
	};
};