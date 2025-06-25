class CfgPatches
{
	class Croco_Traction_Improve
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Surfaces_Bliss"};
	};
};
class CfgMods
{
	class Croco_Traction_Improve
	{
		dir = "Croco_Traction_Improve";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "";
		credits = "";
		author = "Crocodoc";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};
class CfgVehicleSurfaces
{
	class Asphalt
	{
		friction = 0.95;
		frictionOffroad = 1;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
	class Dirt
	{
		friction = 0.95;
		noiseSteer = 0.001;
		noiseFrequency = 0.001;
		roughness = 0.001;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
	class Grass
	{
		friction = 0.95;
		noiseSteer = 0.001;
		noiseFrequency = 0.001;
		roughness = 0.001;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
	class Forest
	{
		friction = 0.95;
		noiseSteer = 0.001;
		noiseFrequency = 0.001;
		roughness = 0.001;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
	class Gravel
	{
		friction = 0.95;
		noiseSteer = 0.001;
		noiseFrequency = 0.001;
		roughness = 0.001;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
};
class CfgSurfaces
{
	class DZ_SurfacesInt;
	class DZ_SurfacesExt;
	class cp_concrete1: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_concrete2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_dirt: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_broadleaf_dense1: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_broadleaf_dense2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_broadleaf_sparse1: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_broadleaf_sparse2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_conifer_common1: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_conifer_common2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_conifer_moss2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_grass: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_grass_tall: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_rock: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class cp_gravel: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_grass1: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_grass2: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_flowers1: en_grass2
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_flowers2: en_grass2
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_flowers3: en_grass2
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_forestcon: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_forestdec: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_soil: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_tarmac: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_tarmacold: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_stubble: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class en_stones: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_snow: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_snow_forest: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_ice_sea: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_ice_lake: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_grass_brown: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_grass_green: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_forest_birch: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_forest_spruce: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_beach: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_gravel: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_volcanic_red: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_volcanic_yellow: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_concrete: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sakhal_hotwater: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class gravel_large_ext: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class gravel_large_int: DZ_SurfacesInt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class gravel_small_ext: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class gravel_small_int: DZ_SurfacesInt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sand_ext: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class sand_int: DZ_SurfacesInt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class dirt_ext: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class dirt_int: DZ_SurfacesInt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class grass_dry_ext: DZ_SurfacesExt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
	class grass_dry_int: DZ_SurfacesInt
	{
		friction = 1;
		restitution = 1;
		vpSurface = "Asphalt";
	};
};