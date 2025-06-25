modded class Matchbox extends ItemBase
{	
	override void SetActions()
	{
		super.SetActions();	
		AddAction(ActionFirePlayer);		
		AddAction(ActionLightItemOnFire);		
	}	
}