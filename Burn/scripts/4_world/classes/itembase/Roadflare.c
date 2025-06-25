modded class Roadflare : ItemBase
{	
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionAttach);
		AddAction(ActionDetach);
		AddAction(ActionLightItemOnFire);
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionFirePlayer);
	}
};