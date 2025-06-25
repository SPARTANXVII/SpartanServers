class ActionFirePlayerCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.FIREPLACE_IGNITE );
	}
}

class ActionFirePlayer: ActionForceConsume
{	
    void ActionFirePlayer()
    {
		m_CallbackClass = ActionFirePlayerCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_STARTFIRE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;	
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
    }	
	
	override void CreateConditionComponents() 
	{
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT); //Target player
		m_ConditionItem = new CCINonRuined;
	}
	
    override string GetText()
    {
        return "#ACTION_BURNALIVE";
    }
	
	override bool CanBePerformedFromQuickbar()
	{
		return true;
	}

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {       
		PlayerBase playertarget = PlayerBase.Cast(target.GetObject());	
		ItemBase item_in_hands = ItemBase.Cast(player.GetHumanInventory().GetEntityInHands());
					
		if ( playertarget)  
		{				
			if ( item.IsIgnited() && playertarget.GetSoakedGasoline())										
				return true;				
			
			if ( item_in_hands.IsInherited(Matchbox) || item_in_hands.IsInherited(PetrolLighter) || item_in_hands.IsInherited(HandDrillKit) && playertarget.GetSoakedGasoline())
				return true;					
		}		
		return false;
    }		
	
	override void OnEndServer( ActionData action_data )
	{
		PlayerBase playertarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		playertarget.FirePlayerNow();
	}
	
}