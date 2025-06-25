modded class PlayerBase extends ManBase

{
	bool IsSprinting()
	{
		return m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENT_SPRINT);
	}

	bool CanSprint()
	{
		ItemBase item = GetItemInHands();
		if ( IsRaised() || (item && item.IsHeavyBehaviour()) )
		{
			return false;
		}
		
		if (m_BrokenLegState != eBrokenLegs.NO_BROKEN_LEGS)
		{
			return false;
		}
		
		return true;
	}
	
	bool IsInProne()
	{
		return m_MovementState.IsInProne();
	}
	
	bool IsInRasedProne()
	{
		return m_MovementState.IsInRaisedProne();
	}	
	
	bool IsLeaning()
	{
		return m_MovementState.IsLeaning();
	}	
	
	bool IsRolling()
	{
		if (GetCommand_Move() && GetCommand_Move().IsInRoll())
			return true;
		return false;
	}
	
	override bool IsRaised()
	{
		return m_MovementState.IsRaised();
	}
	
}	