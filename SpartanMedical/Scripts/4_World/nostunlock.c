modded class DayZPlayerImplement extends DayZPlayer
{
	bool EvaluateDamageHitAnimation(TotalDamageResult pDamageResult, int pDamageType, EntityAI pSource, string pComponent, string pAmmoType, vector pModelPos, out int pAnimType, out float pAnimHitDir, out bool pAnimHitFullbody)
	{
		pAnimType = 0;
		pAnimHitFullbody = false;
		GetMovementState(m_MovementState);

		switch (pDamageType)
		{
			case DT_CLOSE_COMBAT:
				if (m_MovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_PRONE || m_MovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_RAISEDPRONE)
					return false;

			 	if (pSource.IsInherited(DayZInfected))
					break;

				pAnimType = GetGame().ConfigGetInt("cfgAmmo " + pAmmoType + " hitAnimation");
				if (pAnimType == 1 && !m_MeleeFightLogic.IsInBlock())
					pAnimHitFullbody = true;
			break;
			case DT_FIRE_ARM:
				int impactBehaviour = 0;
			
				if ( !IsUnconscious() )
				{
					if ( pComponent == "Torso" || pComponent == "Head")
					{
						impactBehaviour = GetGame().ConfigGetInt("cfgAmmo " + pAmmoType + " impactBehaviour");
						float fireDamage = pDamageResult.GetHighestDamage("Health");
						float shockDamage = pDamageResult.GetHighestDamage("Shock");
						if ( ( fireDamage > 400.0 || shockDamage > 200.0 ) && impactBehaviour == 1 )
						{
							pAnimHitFullbody = true;
						}
					}
				}

			break;
			case DT_EXPLOSION:
			break;
			case DT_CUSTOM:
				pAnimType = GetGame().ConfigGetInt("cfgAmmo " + pAmmoType + " hitAnimation");
				if ( pAnimType == 1 )
					pAnimHitFullbody = true;
				else
					return false;
			break;
		}

		vector targetDirection = GetDirection();
		vector toSourceDirection = (pSource.GetPosition() - GetPosition());

		targetDirection[1] = 0;
		toSourceDirection[1] = 0;

		targetDirection.Normalize();
		toSourceDirection.Normalize();

		float cosFi = vector.Dot(targetDirection, toSourceDirection);
		vector cross = targetDirection * toSourceDirection;

		pAnimHitDir = Math.Acos(cosFi) * Math.RAD2DEG;
		if (cross[1] < 0)
			pAnimHitDir = -pAnimHitDir;

		//Print("hitdir: " + pAnimHitDir.ToString());

		return true;
	}
}