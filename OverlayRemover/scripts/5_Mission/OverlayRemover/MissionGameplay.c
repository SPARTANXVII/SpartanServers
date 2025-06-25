modded class MissionGameplay extends MissionBase
{
	protected bool m_isORInitialized = false;

	override void OnInit()
	{
		super.OnInit();
		if(!m_isORInitialized) {
			GetRPCManager().AddRPC( "OR_scripts", "CONFIGRESPONSEOR", this, SingeplayerExecutionType.Client );
			m_isORInitialized = true;
		}
	}

	override void OnMissionStart()
	{
		super.OnMissionStart();
		GetRPCManager().SendRPC("OR_scripts", "CLIENTCONFIGREQUESTOR", null, true);
	}

	void CONFIGRESPONSEOR(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target) {

		if(type == CallType.Client) 
		{
			Param1 <ref OverlayRemoverConfigManager> data;
        	if ( !ctx.Read( data ) ) return;
			g_ClientOverlayRemoverConfig = data.param1;
		}
	}
}