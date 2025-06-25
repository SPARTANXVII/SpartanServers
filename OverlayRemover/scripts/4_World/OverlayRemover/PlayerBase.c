modded class PlayerBase
{
    override void QueueAddGlassesEffect(int id)
	{

		if(!GetORConfig().DisableSportGlassesTint || GetORConfig().DisableSportGlassesTint > 1  || GetORConfig().DisableSportGlassesTint < 0)
		{
			GetORConfig().DisableSportGlassesTint = 0;
		}

		if(!GetORConfig().DisableAviatorGlassesTint || GetORConfig().DisableAviatorGlassesTint > 1  || GetORConfig().DisableAviatorGlassesTint < 0)
		{
			GetORConfig().DisableAviatorGlassesTint = 0;
		}

		if(!GetORConfig().DisableCasualSunGlassesTint || GetORConfig().DisableCasualSunGlassesTint > 1  || GetORConfig().DisableCasualSunGlassesTint < 0)
		{
			GetORConfig().DisableCasualSunGlassesTint = 0;
		}

		if(!GetORConfig().DisableTactcalGogglesTint || GetORConfig().DisableTactcalGogglesTint > 1  || GetORConfig().DisableTactcalGogglesTint < 0)
		{
			GetORConfig().DisableTactcalGogglesTint = 0;
		}

		if(!GetORConfig().DisableDarkMotoHelmetTint || GetORConfig().DisableDarkMotoHelmetTint > 1  || GetORConfig().DisableDarkMotoHelmetTint < 0)
		{
			GetORConfig().DisableDarkMotoHelmetTint = 0;
		}

		if(!GetORConfig().DisableWeldingMaskTint || GetORConfig().DisableWeldingMaskTint > 1  || GetORConfig().DisableWeldingMaskTint < 0)
		{
			GetORConfig().DisableWeldingMaskTint = 0;
		}
		
		// SportGlasses
		if(id == 2 && GetORConfig().DisableSportGlassesTint == 0 || id == 3 && GetORConfig().DisableSportGlassesTint == 0 || id == 4 && GetORConfig().DisableSportGlassesTint == 0 || id == 5 && GetORConfig().DisableSportGlassesTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}
		
		// AviatorGlasses
		if(id == 6 && GetORConfig().DisableAviatorGlassesTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}

		// CasualSunGlasses
		if(id == 7 && GetORConfig().DisableCasualSunGlassesTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}

		// TacticalGoggles
		if(id == 8 && GetORConfig().DisableTactcalGogglesTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}

		// DarkMotoHelmet
		if(id == 9 && GetORConfig().DisableDarkMotoHelmetTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}

		// WeldingMask
		if(id == 10 && GetORConfig().DisableWeldingMaskTint == 0)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}

		// EverythingElse
		if(id == 1 || id > 10)
		{
			m_ProcessAddGlassesEffects.Insert(id);
		}
	}
}