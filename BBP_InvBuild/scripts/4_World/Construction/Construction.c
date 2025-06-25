modded class Construction
{
	void BBPBuildPartServer( notnull Man player, string part_name, int action_id )
	{
		bsbDebugPrint("[bsb] Construction BuildPartServer | " + part_name);
		//reset DamageZone health
		string damage_zone;
		if (DamageSystem.GetDamageZoneFromComponentName(GetParent(),part_name,damage_zone))
		{
			GetParent().SetAllowDamage(true);
			GetParent().SetHealthMax(damage_zone);
			GetParent().ProcessInvulnerabilityCheck(GetParent().GetInvulnerabilityTypeString());
		}

		//destroy build collision check trigger
		DestroyCollisionTrigger();

		//call event
		GetParent().OnPartBuiltServer( player, part_name, action_id );
	}
	
	override bool CanBuildPart( string part_name, ItemBase tool, bool use_tool )
	{
		if ( tool && tool.isBBPAdminTool() && !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && !HasConflictPart( part_name ) )
		{
			return true;
		}
		
		if ( tool && !tool.isBBPAdminTool() && !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && BBP_HasMaterialsClient(part_name) && !HasConflictPart( part_name ) )
		{
			return true;
		}
		
		return false;
	}
	
	bool BBP_HasMaterialsClient( string part_name, bool repairing = false )
	{
		string main_part_name = GetConstructionPart( part_name ).GetMainPartName();
		string cfg_path = "cfgVehicles" + " " + GetParent().GetType() + " "+ "Construction" + " " + main_part_name + " " + part_name + " " + "Materials";
		
		//PlayerBase player = PlayerBase.Cast(BBP_player);
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		
		if ( GetGame().ConfigIsExisting( cfg_path ) )
		{
			int	child_count = GetGame().ConfigGetChildrenCount( cfg_path );
			
			for ( int i = 0; i < child_count; i++ )
			{
				string child_name;
				GetGame().ConfigGetChildName( cfg_path, i, child_name );
				
				//get type, quantity from material
				string material_path;
				string config_path;
				string type;
				float quantity;
				config_path = cfg_path + " " + child_name + " " + "type";
				GetGame().ConfigGetText( config_path, type );
				material_path = cfg_path + " " + child_name + " " + "quantity";
				quantity = GetGame().ConfigGetFloat( material_path );
				
				if (repairing)
				{
					quantity *= REPAIR_MATERIAL_PERCENTAGE;
					quantity = Math.Max(Math.Floor(quantity),1);
				}
				
				//if the selected material (or its quantity) is not available
				if(player && !player.hasBBPMats(type, quantity))
				{
					return false;
				}
			}
		}
		
		return true;	//return true even if no material required
	}
	
	bool BBP_HasMaterials( PlayerBase BBP_player, string part_name, bool repairing = false )
	{
		string main_part_name = GetConstructionPart( part_name ).GetMainPartName();
		string cfg_path = "cfgVehicles" + " " + GetParent().GetType() + " "+ "Construction" + " " + main_part_name + " " + part_name + " " + "Materials";
		
		PlayerBase player = PlayerBase.Cast(BBP_player);
		//PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		
		if ( GetGame().ConfigIsExisting( cfg_path ) )
		{
			int	child_count = GetGame().ConfigGetChildrenCount( cfg_path );
			
			for ( int i = 0; i < child_count; i++ )
			{
				string child_name;
				GetGame().ConfigGetChildName( cfg_path, i, child_name );
				
				//get type, quantity from material
				string material_path;
				string config_path;
				string type;
				float quantity;
				config_path = cfg_path + " " + child_name + " " + "type";
				GetGame().ConfigGetText( config_path, type );
				material_path = cfg_path + " " + child_name + " " + "quantity";
				quantity = GetGame().ConfigGetFloat( material_path );
				
				if (repairing)
				{
					quantity *= REPAIR_MATERIAL_PERCENTAGE;
					quantity = Math.Max(Math.Floor(quantity),1);
				}
				
				//if the selected material (or its quantity) is not available
				if(player && !player.hasBBPMats(type, quantity))
				{
					return false;
				}
			}
		}
		
		return true;	//return true even if no material required
	}

	//take materials when building
	void BBP_TakeMaterialsServer(PlayerBase BBP_player, string part_name, bool repairing = false )
	{
		string main_part_name = GetConstructionPart( part_name ).GetMainPartName();
		string cfg_path = "cfgVehicles" + " " + GetParent().GetType() + " "+ "Construction" + " " + main_part_name + " " + part_name + " " + "Materials";
		
		PlayerBase player = PlayerBase.Cast(BBP_player);
		//PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		
		if ( GetGame().ConfigIsExisting( cfg_path ) )
		{
			int	child_count = GetGame().ConfigGetChildrenCount( cfg_path );
			
			for ( int i = 0; i < child_count; i++ )
			{
				string child_name;
				GetGame().ConfigGetChildName( cfg_path, i, child_name );
				
				//get type, quantity from material
				string config_path;
				string type;
				config_path = cfg_path + " " + child_name + " " + "type";
				GetGame().ConfigGetText( config_path, type );
				config_path = cfg_path + " " + child_name + " " + "quantity";
				float quantity = GetGame().ConfigGetFloat( config_path );
				
				if(player)
				{
					player.removeBBPMats(type,quantity);
				}
			}
		}
	}
}