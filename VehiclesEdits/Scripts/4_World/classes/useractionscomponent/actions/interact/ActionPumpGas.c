class ActionPumpGasCB : ActionContinuousBaseCB {
	private const float TIME_TO_REPEAT = 0.5;

	override void CreateActionComponent() {
		m_ActionData.m_ActionComponent = new PGContinuousPumpGas( UAQuantityConsumed.FUEL * 3, TIME_TO_REPEAT );
	}
};

class ActionPumpGas : ActionContinuousBase {
	
	void ActionPumpGas() {
		m_CallbackClass = ActionPumpGasCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_LockTargetOnUse = false;
	}
	
	override void CreateConditionComponents() {
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}
	
	override string GetText() {
		return "#refuel";
	}
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	bool IsFuelPumpCloseEnough(vector pos) {
		autoptr auto objects = new array<Object>;
		autoptr auto proxycargos = new array<CargoBase>;
		GetGame().GetObjectsAtPosition(pos, 5, objects, proxycargos);
		foreach(auto object : objects) {
			if (Land_FuelStation_Feed.Cast(object) != null)
				return true;
		}
		return false;
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
		if ( !target || !IsTransport(target) )
			return false;

		Car car = Car.Cast( target.GetObject() );
		if (!car || car.GetFluidFraction(CarFluid.FUEL) >= 0.98)
			return false;
		
		array<string> selections = new array<string>;
		target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);

		CarScript carS = CarScript.Cast(car);
		
		if ( carS )
		{
			for (int s = 0; s < selections.Count(); s++)
			{
				if ( selections[s] == carS.GetActionCompNameFuel() )
				{
					auto refillPointPos = carS.GetRefillPointPosWS();
					float dist = vector.DistanceSq(refillPointPos, player.GetPosition() );

					if ( dist < carS.GetActionDistanceFuel() * carS.GetActionDistanceFuel() )
						return IsFuelPumpCloseEnough(refillPointPos);
				}
			}
		}

		return false;
	}
};