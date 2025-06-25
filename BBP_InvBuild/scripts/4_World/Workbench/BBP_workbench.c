modded class BBP_Workbench
{
	bool DeductMats_check( string title, float quantity )
    {
        PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		
		if(player && player.hasBBPMats(title, quantity))
		{
			return true;
		}
		
		return false;
    }
	
	void DeductMats( PlayerBase player, string title, float quantity )
    {
		if(player)
		{
			player.removeBBPMats(title,quantity);
		}
	}
}

modded class BBP_CRAFTINGBOOK_BASE
{
	void OnCraftServer(BBPRecipeBase recipe, PlayerBase player)
    {
        if (!player || vector.Distance(player.GetPosition(),GetPosition()) > 10 )
        {
            Print("[BBP] ERROR ON CRAFT EITHER PLAYER IS NULL OR TOO FAR AWAY");
            return;
        }
		
        BBP_Workbench bench;
        if ( Class.CastTo(bench, GetHierarchyParent()) )
        {
            int i = 0;
            autoptr array<autoptr BBPRecipeItem> requiredItems = recipe.GetRequiredItems();
            for (i = 0; i < requiredItems.Count(); i++)
            {
                bench.DeductMats( player, requiredItems.Get(i).ItemClassName, requiredItems.Get(i).Quantity );
            }
			
            GetGame().CreateObject(recipe.GetResult(), bench.GetPosition() + "0 0.9 0");
        }
    }
}