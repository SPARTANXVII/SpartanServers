modded class Torch : ItemBase
{	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightItemOnFire);
		AddAction(ActionUpgradeTorchFromGasPump);
		AddAction(ActionFirePlayer);
	}		
};

