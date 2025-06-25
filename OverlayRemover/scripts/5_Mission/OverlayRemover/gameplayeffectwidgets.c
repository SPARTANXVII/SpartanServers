modded class GameplayEffectWidgets extends GameplayEffectWidgets_base
{
	
	override void AddActiveEffects(array<int> effects)
	{
		if (effects && effects.Count() > 0)
		{
			m_RunningEffectsPrevious.Copy(m_RunningEffects);

			if(!GetORConfig().DisableGasMaskOverlay || GetORConfig().DisableGasMaskOverlay > 1  || GetORConfig().DisableGasMaskOverlay < 0)
			{
				GetORConfig().DisableGasMaskOverlay = 0;
			}

			if(!GetORConfig().DisableHelmetOverlay || GetORConfig().DisableHelmetOverlay > 1  || GetORConfig().DisableHelmetOverlay < 0)
			{
				GetORConfig().DisableHelmetOverlay = 0;
			}

			if(!GetORConfig().DisableMotoHelmetOverlay || GetORConfig().DisableMotoHelmetOverlay > 1  || GetORConfig().DisableMotoHelmetOverlay < 0)
			{
				GetORConfig().DisableMotoHelmetOverlay = 0;
			}

			if(!GetORConfig().DisableNVGOverlay || GetORConfig().DisableNVGOverlay > 1  || GetORConfig().DisableNVGOverlay < 0)
			{
				GetORConfig().DisableNVGOverlay = 0;
			}

			if(!GetORConfig().DisablePumpkinOverlay || GetORConfig().DisablePumpkinOverlay > 1  || GetORConfig().DisablePumpkinOverlay < 0)
			{
				GetORConfig().DisablePumpkinOverlay = 0;
			}

			if(!GetORConfig().DisableEyepatchOverlay || GetORConfig().DisableEyepatchOverlay > 1  || GetORConfig().DisableEyepatchOverlay < 0)
			{
				GetORConfig().DisableEyepatchOverlay = 0;
			}

			if(!GetORConfig().DisableNorseHelmOverlay || GetORConfig().DisableNorseHelmOverlay > 1  || GetORConfig().DisableNorseHelmOverlay < 0)
			{
				GetORConfig().DisableNorseHelmOverlay = 0;
			}
			
			int value;
			for (int i = 0; i < effects.Count(); i++)
			{
				value = effects.Get(i);
		
				// MaskOverlay
				if(value == 1 && GetORConfig().DisableGasMaskOverlay == 0 || value == 2 && GetORConfig().DisableGasMaskOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// HelmetOverlay
				if(value == 10 && GetORConfig().DisableHelmetOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// MotoHelmetOverlay
				if(value == 20 && GetORConfig().DisableMotoHelmetOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// NVGOverlay
				if(value == 51 && GetORConfig().DisableNVGOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// PumpkinHelmetOverlay
				if(value == 52 && GetORConfig().DisablePumpkinOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// EyePatchOverlay
				if(value == 53 && GetORConfig().DisableEyepatchOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				if(value == 54 && GetORConfig().DisableNorseHelmOverlay == 0)
				{
					m_RunningEffects.Insert(value);
				}

				// EverythingElse
				if(value != 1 && value != 2 && value != 10 && value != 20 && value != 51 && value != 52 && value != 53 && value != 54)
				{
					m_RunningEffects.Insert(value);
				}

			}
			
			if (m_RunningEffectsPrevious.Count() != m_RunningEffects.Count())
			{
				UpdateVisibility();
			}
		}
	}
	
}
