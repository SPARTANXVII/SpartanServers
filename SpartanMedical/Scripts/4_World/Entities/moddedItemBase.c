modded class ItemBase extends InventoryItem
{

    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
	{
		
		if (!other_item || GetType() != other_item.GetType() || (IsFullQuantity() && other_item.GetQuantity() > 0) || other_item == this)
			return false;

		if (GetHealthLevel() == GameConstants.STATE_RUINED || other_item.GetHealthLevel() == GameConstants.STATE_RUINED)	
			return false;

        if(ConfigGetInt("repairKitType"))
        {
            return true;
        }
		
        return super.CanBeCombined(other_item, true, false);
	}
}