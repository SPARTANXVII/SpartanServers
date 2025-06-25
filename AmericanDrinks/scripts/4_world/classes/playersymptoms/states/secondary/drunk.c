class Drunk extends SymptomBase
{
    static const float CAMERASHAKE_STRENGTH = 1.1;
    static const float CAMERASHAKE_RADIUS = 1.2;
    static const float CAMERASHAKE_SMOOTHNESS = 1.3;
    static const float CAMERASHAKE_RADIUS_DECAY_SPEED = 1.4;

    protected PPERequester_CameraADS m_RequesterDrunk;
    protected float m_Time = 0.0;

    override void OnInit()
    {
        m_SymptomType = SymptomTypes.SECONDARY;
        m_Priority = 0;
        m_ID = DrunkSymptomIDs.SYMPTOM_DRUNK;
        m_DestroyOnAnimFinish = true;
        m_IsPersistent = false;
        m_SyncToClient = true;

        if ( !GetGame().IsDedicatedServer() )
        {
            Class.CastTo( m_RequesterDrunk, PPERequester_CameraADS.Cast( PPERequesterBank.GetRequester( PPERequester_CameraADS ) ) );
        }
    }

    void OnGetActivatedClient( PlayerBase player )
    {
        m_Time = 0.0;

        player.GetCurrentCamera().SpawnCameraShake( CAMERASHAKE_STRENGTH, CAMERASHAKE_RADIUS, CAMERASHAKE_SMOOTHNESS, CAMERASHAKE_RADIUS_DECAY_SPEED );
    }

    override void OnUpdateClient( PlayerBase player, float deltatime )
    {
        m_Time += deltatime;

        float mask_x = -0.1 + ( Math.Sin( m_Time * 0.5 ) * 0.05 );
        float mask_y = 0.5 + ( Math.Sin( m_Time * 0.75 ) * 0.3 );

        array<float> mask = {mask_x, mask_y, 1.0, 0.1};
        array<float> lense = {0.5,1.0,0.0,0.0};

        m_RequesterDrunk.SetValuesOptics( mask, lense, 0.1 );
    }

    void OnGetDeactivatedClient( PlayerBase player )
    {
        array<float> mask = {};
        array<float> lense = {};

        m_RequesterDrunk.SetValuesOptics( mask, lense, 0.0 );

        player.GetCurrentCamera().SpawnCameraShake( CAMERASHAKE_STRENGTH, CAMERASHAKE_RADIUS, CAMERASHAKE_SMOOTHNESS, CAMERASHAKE_RADIUS_DECAY_SPEED );
    }
}