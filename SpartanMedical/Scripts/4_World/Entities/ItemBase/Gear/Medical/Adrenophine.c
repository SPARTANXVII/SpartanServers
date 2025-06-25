class Adrenophine: Inventory_Base
{
    override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionInjectMorphineTarget);
		AddAction(ActionInjectMorphineSelf);
	}

    override void OnApply(PlayerBase player)
    {
        player.SetHealth(player.GetHealth("", "") + 15.0);
        super.OnApply(player);
	}
};