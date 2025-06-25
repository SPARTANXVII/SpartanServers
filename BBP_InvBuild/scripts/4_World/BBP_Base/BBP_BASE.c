modded class BBP_BASE extends Fence
{
	override bool CanDisplayAttachmentCategory( string category_name )
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		bbp_config = GetDayZGame().getBBPGlobals();
		
		if (bbp_config) //wtf wasnt working atm
		{
			bool BBPCanAttachXmaslights = bbp_config.BBP_CanAttachXmaslights;
			bool BBPCanAttachWallpaper = bbp_config.BBP_CanAttachWallpaper;
			bool BBPCanAttachCarpet = bbp_config.BBP_CanAttachCarpet;
			bool BBPCanAttachPlaster = bbp_config.BBP_CanAttachPlaster;
		}
		
		if ( BBP_Hide )
		{
			return false;
		}
		
		if ( category_name == "Materials" )
		{
			return false;
		}
		
		if ( category_name == "Attachments" )
		{
			if ( !HasBase() )
			{
				return false;
			}
		}
		
		if ( category_name == "Carpet" )
		{
			if ( !HasBase() || BBPCanAttachCarpet == 0)
			{
				return false;
			}
		}
		
		if ( category_name == "Plaster")
		{
			if ( !HasBase() || BBPCanAttachPlaster == 0)
			{
				return false;
			}
		}
		
		if ( category_name == "WallPaper" )
		{
			if ( !HasBase() || BBPCanAttachWallpaper == 0)
			{
				return false;
			}
		}
		
		//wtf end
		
		if(isflat()) //floor/roof
		{
			if ( !HasProperDistanceFlatBBP( "inside", player ) )
			{
				return false;
			}
		}
		
		if (!isflat() && isSmall())
		{
			if ( !HasProperDistanceBBP( "inside", player ) )
			{
				return false;
			}
		}
		
		if (!isflat() && !isSmall())
		{
			if (!HasProperDistanceBBP( "inside", player ) )
			{
				return false;
			}
		}
		
		return true;
	}
	
	//--- ACTION CONDITIONS
	override bool IsPlayerInside( PlayerBase player, string selection )
	{				
		if(isflat()) //floor/roof
		{
			if ( HasProperDistanceFlatBBP( "inside", player ) )
			{
				return true;
			}
			return false;
		}
		
		else if (!isflat() && isSmall()) //small walls
		{
			if ( HasProperDistanceBBP( "inside", player ) )
			{
				return true;
			}
			return false;
		}
		
		else if (!isflat() && !isSmall()) //large walls
		{
			if ( HasProperDistanceBBP( "inside", player ) )
			{
				return true;
			}
			return false;
		}
		
		return true;
	}
};