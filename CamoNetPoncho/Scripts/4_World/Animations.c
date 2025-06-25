modded class JMAnimRegister
{
    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
    	super.RegisterTwoHanded(pType, pBehavior);
    	pBehavior.SetTwoHanded();
				
 		pType.AddItemInHandsProfileIK("INK_CamoNetPoncho_Base", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/camo_net.anm");

	}	
};
