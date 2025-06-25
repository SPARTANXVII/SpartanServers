modded class MissionGameplay
{
	override void PlayerControlDisable(int mode)
	{
		super.PlayerControlDisable(mode);

		switch (mode)
		{
			case INPUT_EXCLUDE_ALL:
			{
				GetUApi().ActivateExclude("menu");
				break;
			}
			case INPUT_EXCLUDE_INVENTORY:
			{
				Print("open inventory")
				#ifdef PLATOFRM_CONSOLE
					GetUApi().ActivateExclude("inventory_console");
				#else
					GetUApi().ActivateExclude("inventory");
					GetUApi().GetInputByName("UAWalkRunTemp").ForceEnable(false);
				#endif
				break;
			}
			case INPUT_EXCLUDE_MOUSE_ALL:
			{
				GetUApi().ActivateExclude("radialmenu");
				break;
			}
			case INPUT_EXCLUDE_MOUSE_RADIAL:
			{
				GetUApi().ActivateExclude("radialmenu");
				break;
			}
		}
		
		GetUApi().UpdateControls();
		m_ControlDisabled = true;
		
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if( player )
		{
			HumanInputController hic = player.GetInputController();
			player.RequestResetADSSync();
		}
	}
}