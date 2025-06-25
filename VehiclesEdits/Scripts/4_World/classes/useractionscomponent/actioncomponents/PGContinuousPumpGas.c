class PGContinuousPumpGas : CAContinuousFillFuel {
	
	override void Setup(ActionData action_data) {
		m_Player = action_data.m_Player;
		
		Car car = Car.Cast(action_data.m_Target.GetObject());
		
		m_TimeElpased = 0;
		m_SpentQuantity = 0;
		
		if ( !m_SpentUnits )
		{
			m_SpentUnits = new Param1<float>( 0 );
		}
		else
		{
			m_SpentUnits.param1 = 0;
		}

		float fuelCapacity = car.GetFluidCapacity( CarFluid.FUEL );
		float currentFuel = car.GetFluidFraction( CarFluid.FUEL );
		currentFuel = currentFuel * fuelCapacity;

		m_EmptySpace = (fuelCapacity - currentFuel) * 1000;
		m_ItemQuantity = m_EmptySpace;
	}
	
	override void CalcAndSetQuantity(ActionData action_data) {
		m_SpentQuantity_total += m_SpentQuantity;
	
		if ( m_SpentUnits )
		{
			m_SpentUnits.param1 = m_SpentQuantity;
			SetACData(m_SpentUnits);
		}
		
		
		if ( GetGame().IsServer() )
		{
			Car car = Car.Cast(action_data.m_Target.GetObject());
			car.Fill( CarFluid.FUEL, (m_SpentQuantity * 0.001) );
		}
		
		m_SpentQuantity = 0;
	}
};
