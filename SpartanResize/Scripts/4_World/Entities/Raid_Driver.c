class Raid_Driver: ToolBase 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLockDoors);
		AddAction(ActionUnlockDoors);
	}
	
};