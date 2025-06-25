modded class HandDrillKit extends ItemBase
{	
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionLightItemOnFire);
		AddAction(ActionFirePlayer);
	}	
}