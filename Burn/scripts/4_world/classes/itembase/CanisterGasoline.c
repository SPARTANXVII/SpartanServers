modded class CanisterGasoline extends Bottle_Base
{	
	override void SetActions()
	{			
		AddAction(ActionPourGasoline);		
		//RemoveAction(ActionForceDrink);
		super.SetActions();
	}
}