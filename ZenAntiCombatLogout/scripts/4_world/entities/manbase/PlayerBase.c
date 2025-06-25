modded class PlayerBase
{
	private float m_CombatLogTimer = 0; // This is how many ms to wait before we can logout after engaging in combat
	private bool m_KillPlayerForCombatLogging = false; // Server-side flag - if true, player will be killed if they disconnect before timeout
	private int m_WillBePunishedForCombatLogging = 0; // Server & client flag - if true, logout message on client will reflect the severity of their situation
	private int m_DisableExitButtonSecs = 5; // How long to disable the exit button (client-side)

	// Get exit button disabled secs
	int GetDisableExitButtonSecs()
	{
		return m_DisableExitButtonSecs;
	}

	// Inform player they will be killed for combat logging
	void InformPlayerOfCombatLogout(int willBeKilled)
	{
		auto params = new Param2<int, int>(willBeKilled, GetZenAntiCombatLogoutConfig().DisableExitButtonSecs);
		GetGame().RPCSingleParam(this, ZEN_ANTI_COMBAT_LOG_MSG_RPC, params, true, GetIdentity());
		m_WillBePunishedForCombatLogging = willBeKilled;
	}

	// Check if player will be killed or a flare dropped for combat logging
	int WillBePunishedForCombatLogging()
	{
		return m_WillBePunishedForCombatLogging;
	}

	// Reset combat log timer
	void SetCombatLogTimer()
	{
		m_CombatLogTimer = GetGame().GetTime() + (GetZenAntiCombatLogoutConfig().CombatLogoutSecs * 1000);
	}

	// Resets our combat log timer
	void ResetCombatLogTimer()
	{
		m_CombatLogTimer = 0;
	}

	// Get the current combat logout timer (resets whenever damage is dealt or a shot is fired at us)
	float GetCombatLogTimer()
	{
		return m_CombatLogTimer;
	}

	// (Client-side) Sends an RPC to the server notifying it that we shot at some poor fucker
	void InformServerThatWeShotAt(PlayerBase player)
	{
		auto params = new Param1<PlayerBase>(player);
		GetGame().RPCSingleParam(this, ZEN_ANTI_COMBAT_LOG_RPC, params, true);
	}

	// Detect player vs player damage
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);

		#ifdef SERVER
		// Don't trigger combat log timer for dead players
		if (!IsAlive())
			return;

		PlayerBase attacker = PlayerBase.Cast(source);
		if (!attacker)
			attacker = PlayerBase.Cast(source.GetHierarchyRootPlayer());

		// If we were not attacked by another player, don't set our combat timer
		if (!attacker || attacker == this)
			return;

		attacker.SetCombatLogTimer();
		SetCombatLogTimer();
		#endif
	};

	// Handle RPC communication
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, rpc_type, ctx);

		#ifndef SERVER
		// Client-side (client receives logout message info from server)
		if (rpc_type == ZEN_ANTI_COMBAT_LOG_MSG_RPC)
		{
			Param2<int, int> params;

			if (!ctx.Read(params))
				return;

			m_WillBePunishedForCombatLogging = params.param1;
			m_DisableExitButtonSecs = params.param2;
		}
		#else
		// Server-side (server receives notification that we shot at someone)
		if (rpc_type == ZEN_ANTI_COMBAT_LOG_RPC)
		{
			Param1<PlayerBase> params;

			if (!ctx.Read(params))
				return;

			PlayerBase victim = params.param1;

			// If victim exists and they're not dead, reset their combat logout timer.
			if (victim && victim.GetIdentity() && victim.IsAlive())
			{
				victim.SetCombatLogTimer();
			}

			// Reset our combat logout timer too.
			int highBits, lowBits;
			GetGame().GetPlayerNetworkIDByIdentityID(sender.GetPlayerId(), lowBits, highBits);
			PlayerBase shooter = PlayerBase.Cast(GetGame().GetObjectByNetworkId(lowBits, highBits));

			if (shooter && shooter.IsAlive())
			{
				shooter.SetCombatLogTimer();
			}
		}
		#endif
	}
};