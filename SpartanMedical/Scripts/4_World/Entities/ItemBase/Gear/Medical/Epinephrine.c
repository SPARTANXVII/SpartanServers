modded class Epinephrine
{
    override void OnApply(PlayerBase player)
    {
        if ( player.m_BrokenLegState == 1 ) {
            Print( player.m_ShockHandler.SetShock(-100) );
            player.AddHealth( "RightLeg","Health", player.GetMaxHealth("RightLeg", "Health") );
            player.AddHealth( "RightFoot","Health", player.GetMaxHealth("RightFoot", "Health") );
            player.AddHealth( "LeftLeg","Health", player.GetMaxHealth("LeftLeg", "Health") );
            player.AddHealth( "LeftFoot","Health", player.GetMaxHealth("LeftFoot", "Health") );
        }
		if (player.GetBleedingManagerServer() && player.GetBleedingManagerServer().GetBleedingSourcesCount() > 0) {
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();	
		}
        player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_BROKEN_LEGS, true );
        player.UpdateBrokenLegs(eBrokenLegs.NO_BROKEN_LEGS);
        player.m_NotifiersManager.DeactivateByType(eNotifiers.NTF_FRACTURE);
        super.OnApply(player);
    }
};