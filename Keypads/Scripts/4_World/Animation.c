modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
			super.RegisterOneHanded( pType, pBehavior );
			pType.AddItemInHandsProfileIK("CarLock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/gear/sewing_kit.anm");
	}
}
