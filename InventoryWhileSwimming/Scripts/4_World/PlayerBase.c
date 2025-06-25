modded class PlayerBase
{
	override void OnCommandSwimStart()
	{
		super.OnCommandSwimStart();
		
		if ( GetInventory() ) { GetInventory().UnlockInventory(LOCK_FROM_SCRIPT); }
		//if ( GetItemInHands() ) { GetItemAccessor().HideItemInHands(false); }
	}
	
	override void OnCommandSwimFinish()
	{
		if ( GetInventory() ) { GetInventory().LockInventory(LOCK_FROM_SCRIPT); }
		//if ( GetItemInHands() ) { GetItemAccessor().HideItemInHands(true); }
		
		super.OnCommandSwimFinish();
	}

	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		if( IsSwimming() ) { return true; }
		return super.CanReceiveItemIntoHands(item_to_hands);
	}
}