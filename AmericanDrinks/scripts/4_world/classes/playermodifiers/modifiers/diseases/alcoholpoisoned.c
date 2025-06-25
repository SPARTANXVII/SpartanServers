class DrunkAlcoholPoisondMdfr extends ModifierBase
{
    static const float AGENT_THRESHOLD_ACTIVATE = 150.0;
    static const float AGENT_THRESHOLD_DEACTIVATE = 1.0;
    static const float AGENT_THRESHOLD_PUKE = 300.0;

    override void Init()
    {
        m_TrackActivatedTime = false;
        m_IsPersistent = true;
        m_ID = eDrunkModifiers.MDF_ALCOHOLPOISONED;
        m_TickIntervalInactive = DEFAULT_TICK_TIME_INACTIVE_LONG;
        m_TickIntervalActive = DEFAULT_TICK_TIME_ACTIVE;
    }

    override bool ActivateCondition( PlayerBase player )
    {
        return player.GetSingleAgentCount( eDrunkAgents.ALCOHOL ) >= AGENT_THRESHOLD_ACTIVATE;
    }

    override bool DeactivateCondition( PlayerBase player )
    {
        return player.GetSingleAgentCount( eDrunkAgents.ALCOHOL ) <= AGENT_THRESHOLD_DEACTIVATE;
    }

    override void OnActivate( PlayerBase player )
    {
        player.IncreaseDiseaseCount();
        player.GetSymptomManager().QueueUpSecondarySymptom( DrunkSymptomIDs.SYMPTOM_DRUNK );

        SymptomBase shivers = player.GetSymptomManager().QueueUpSecondarySymptomEx( SymptomIDs.SYMPTOM_HAND_SHIVER );
        if ( shivers )
        {
            CachedObjectsParams.PARAM1_INT.param1 = 3;
            shivers.SetParam( CachedObjectsParams.PARAM1_INT );
        }
    }

    override void OnDeactivate( PlayerBase player )
    {
        player.DecreaseDiseaseCount();
        player.GetSymptomManager().RemoveSecondarySymptom( DrunkSymptomIDs.SYMPTOM_DRUNK );

        m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.PAIN_KILLERS_LVL1;

        player.GetSymptomManager().RemoveSecondarySymptom(SymptomIDs.SYMPTOM_HAND_SHIVER);
    }

    override void OnTick( PlayerBase player, float deltaT )
    {
        if ( player.GetSingleAgentCount( eDrunkAgents.ALCOHOL ) >= AGENT_THRESHOLD_PUKE )
        {
            player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_VOMIT );
        }

        m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.PAIN_KILLERS_LVL1;
    }
}