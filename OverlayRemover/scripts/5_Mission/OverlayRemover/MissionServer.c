modded class MissionServer
{
	protected ref OverlayRemoverConfigManager m_currentOR;

	override void OnInit()
	{
		super.OnInit();
		if(!m_currentOR)
			m_currentOR = GetORConfig();//Server creates default config for the mod on the startup!
		if(!m_currentOR)
			Print("[OverlayRemover] Internal Serverconfig Load failed!");
		
		GetRPCManager().AddRPC( "OR_scripts", "CLIENTCONFIGREQUESTOR", this, SingeplayerExecutionType.Both );
	}

	/* RPC HANDLING SERVERSIDE */
	void CLIENTCONFIGREQUESTOR(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target) {

		if(type == CallType.Server) {
			GetRPCManager().SendRPC("OR_scripts", "CONFIGRESPONSEOR", new Param1< ref OverlayRemoverConfigManager >( m_currentOR ), true, sender);
		}
	}
}