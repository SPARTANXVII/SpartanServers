class ActionPourGasoline: ActionForceDrink
{		
	override string GetText()
	{
		return "#ACTION_PUTGASOLINE";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{		
		PlayerBase playertarget = PlayerBase.Cast(target.GetObject());			
		if ( playertarget )			
		{			
			if ( playertarget.CanAddFuelGasoline( item ) )
			{
				return true;
			}
		}		
		return false;
	}	
	
	override void OnEndServer( ActionData action_data )
	{	
		PlayerBase playertarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		playertarget.SetSoakedGasoline(true);
	}
};