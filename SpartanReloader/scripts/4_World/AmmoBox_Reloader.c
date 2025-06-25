class Inventory_Base;
class AmmoBox: Inventory_Base;
class AmmoBox_Reloader_Base: AmmoBox
{
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		
		if (!GetInventory().AreChildrenAccessible())
			return false;
		
		if (item.IsAmmoPile())
			return true;
		
		return false;
	}
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionReloadAmmo);
	}
};

modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		DayzPlayerItemBehaviorCfg toolsOneHanded = new DayzPlayerItemBehaviorCfg;
        toolsOneHanded.SetToolsOneHanded();
        super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("AmmoBox_Reloader_Black","dz/anims/workspaces/player/player_main/player_main_1h.asi",toolsOneHanded,"dz/anims/anm/player/ik/gear/AmmoBox.anm");
		pType.AddItemInHandsProfileIK("AmmoBox_Reloader_OD","dz/anims/workspaces/player/player_main/player_main_1h.asi",toolsOneHanded,"dz/anims/anm/player/ik/gear/AmmoBox.anm");
		pType.AddItemInHandsProfileIK("AmmoBox_Reloader_Winter","dz/anims/workspaces/player/player_main/player_main_1h.asi",toolsOneHanded,"dz/anims/anm/player/ik/gear/AmmoBox.anm");
    };
};