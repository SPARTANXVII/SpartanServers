modded class PlayerBase
{		
	ref Timer m_FireDamage;
	ref Timer m_VoicePain;	
	string SpardaBurningParticle = "Particle_Burning";	
	bool m_SoakedGasoline;
	
	private bool headburn;
	private bool torsoburn;
	private bool rarmburn;
	private bool larmburn;
	private bool rlegburn;
	private bool llegburn;
	
	private int burn_boneIdx1 = -1;
	private	int burn_boneIdx2 = -1;
	private	int burn_boneIdx3 = -1;
	private	int burn_boneIdx4 = -1;
	private	int burn_boneIdx5 = -1;
	private	int burn_boneIdx6 = -1;
	
	protected Particle BurningHead;
	protected Particle BurningTorso;
	protected Particle BurningRArm;
	protected Particle BurningLArm;
	protected Particle BurningRLeg;
	protected Particle BurningLLeg;
	
	ref EffectParticle particlefire1;
	ref EffectParticle particlefire2;
	ref EffectParticle particlefire3;
	ref EffectParticle particlefire4;
	ref EffectParticle particlefire5;
	ref EffectParticle particlefire6;
	
	ref TStringArray PlayerBonesHead = {"head", "neck1", "neck"};
	ref TStringArray PlayerBonesTorso = {"spine3", "spine2", "spine1", "spine", "pelvis"};
	ref TStringArray PlayerBonesRightArm = {"rightshoulder", "rightarm", "rightforearm"};
	ref TStringArray PlayerBonesLeftArm = {"leftshoulder", "leftarm", "leftforearm"};
	ref TStringArray PlayerBonesRightLeg = {"rightupleg", "rightleg", "rightlegroll"};
	ref TStringArray PlayerBonesLeftLeg = {"leftupleg", "leftleg", "leftlegroll"};
	
	//************************************
	
	
	void Init()
	{
		super.Init();
		m_SoakedGasoline = false;
		headburn  = false;
		torsoburn = false;
		rarmburn  = false;
		larmburn  = false;
		rlegburn  = false;
		llegburn  = false;		
		RegisterNetSyncVariableBool("m_SoakedGasoline");		
		RegisterNetSyncVariableInt("burn_boneIdx1");
		RegisterNetSyncVariableInt("burn_boneIdx2");
		RegisterNetSyncVariableInt("burn_boneIdx3");
		RegisterNetSyncVariableInt("burn_boneIdx4");
		RegisterNetSyncVariableInt("burn_boneIdx5");
		RegisterNetSyncVariableInt("burn_boneIdx6");		
		RegisterNetSyncVariableBool("headburn");
		RegisterNetSyncVariableBool("torsoburn");
		RegisterNetSyncVariableBool("rarmburn");
		RegisterNetSyncVariableBool("larmburn");
		RegisterNetSyncVariableBool("rlegburn");
		RegisterNetSyncVariableBool("llegburn");
	}		
	
	void AssignBoneIndexes()
	{
		if(burn_boneIdx1 <= 0)
		{
			burn_boneIdx1 = GetBoneIndexByName(PlayerBonesHead.GetRandomElement());
		}
		if(burn_boneIdx2 <= 0)
		{
			burn_boneIdx2 = GetBoneIndexByName(PlayerBonesTorso.GetRandomElement());
		}
		if(burn_boneIdx3 <= 0)
		{
			burn_boneIdx3 = GetBoneIndexByName(PlayerBonesRightArm.GetRandomElement());
		}
		if(burn_boneIdx4 <= 0)
		{
			burn_boneIdx4 = GetBoneIndexByName(PlayerBonesLeftArm.GetRandomElement());
		}
		if(burn_boneIdx5 <= 0)
		{
			burn_boneIdx5 = GetBoneIndexByName(PlayerBonesRightLeg.GetRandomElement());
		}
		if(burn_boneIdx6 <= 0)
		{
			burn_boneIdx6 = GetBoneIndexByName(PlayerBonesLeftLeg.GetRandomElement());
		}
		SetSynchDirty();
	};	
	
	bool IsPlayerPhosphorusDamaged()
	{
		return headburn || torsoburn || rarmburn || larmburn || rlegburn || llegburn;
	};
	
	void SetPhosphorusDamagePoints(bool headstate, bool torsostate, bool rarmstate, bool larmstate, bool rlegstate, bool llegstate)
	{
		headburn = headstate;
		torsoburn = torsostate;
		rarmburn = rarmstate;
		larmburn = larmstate;
		rlegburn = rlegstate;
		llegburn = llegstate;
		SetSynchDirty();
	};	
	
	void UpdateTFParticles()
	{
		if(!GetGame().IsDedicatedServer() || GetGame().IsMultiplayer() )
		{
			if(IsPlayerPhosphorusDamaged() && IsAlive())
			{
				if(!particlefire1 && headburn)
				{
					if(burn_boneIdx1 != -1)
					{
						particlefire1 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire1)
						{
							SEffectManager.PlayInWorld(particlefire1, "0 0 0");
							BurningHead = particlefire1.GetParticle();
							BurningHead.SetOrientation("0 0 0");
							BurningHead.SetPosition("0 0 0");
							this.AddChild(BurningHead, burn_boneIdx1);
						}
					}
				}
				if(!particlefire2 && torsoburn)
				{
					if(burn_boneIdx2 != -1)
					{
						particlefire2 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire2)
						{
							SEffectManager.PlayInWorld(particlefire2, "0 0 0");
							BurningTorso = particlefire2.GetParticle();
							BurningTorso.SetOrientation("0 0 0");
							BurningTorso.SetPosition("0 0 0");
							this.AddChild(BurningTorso, burn_boneIdx2);
						}
					}
				}
				if(!particlefire3 && rarmburn)
				{
					if(burn_boneIdx3 != -1)
					{
						particlefire3 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire3)
						{
							SEffectManager.PlayInWorld(particlefire3, "0 0 0");
							BurningRArm = particlefire3.GetParticle();
							BurningRArm.SetOrientation("0 0 0");
							BurningRArm.SetPosition("0 0 0");
							this.AddChild(BurningRArm, burn_boneIdx3);
						}
					}
				}
				if(!particlefire4 && larmburn)
				{
					if(burn_boneIdx4 != -1)
					{
						particlefire4 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire4)
						{
							SEffectManager.PlayInWorld(particlefire4, "0 0 0");
							BurningLArm = particlefire4.GetParticle();
							BurningLArm.SetOrientation("0 0 0");
							BurningLArm.SetPosition("0 0 0");
							this.AddChild(BurningLArm, burn_boneIdx4);
						}
					}
				}
				if(!particlefire5 && rlegburn)
				{
					if(burn_boneIdx5 != -1)
					{
						particlefire5 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire1)
						{
							SEffectManager.PlayInWorld(particlefire5, "0 0 0");
							BurningRLeg = particlefire5.GetParticle();
							BurningRLeg.SetOrientation("0 0 0");
							BurningRLeg.SetPosition("0 0 0");
							this.AddChild(BurningRLeg, burn_boneIdx5);
						}
					}
				}
				if(!particlefire6 && llegburn)
				{
					if(burn_boneIdx6 != -1)
					{
						particlefire6 = EffectParticle.Cast(SpardaBurningParticle.ToType().Spawn());
						if(particlefire1)
						{
							SEffectManager.PlayInWorld(particlefire6, "0 0 0");
							BurningLLeg = particlefire6.GetParticle();
							BurningLLeg.SetOrientation("0 0 0");
							BurningLLeg.SetPosition("0 0 0");
							this.AddChild(BurningLLeg, burn_boneIdx6);
						}
					}
				}
			}
			else
			{
				if(particlefire1)
				{
					SEffectManager.DestroyEffect(particlefire1);
				}
				if(particlefire2)
				{
					SEffectManager.DestroyEffect(particlefire2);
				}
				if(particlefire3)
				{
					SEffectManager.DestroyEffect(particlefire3);
				}
				if(particlefire4)
				{
					SEffectManager.DestroyEffect(particlefire4);
				}
				if(particlefire5)
				{
					SEffectManager.DestroyEffect(particlefire5);
				}
				if(particlefire6)
				{
					SEffectManager.DestroyEffect(particlefire6);
				}
			}
		}
	};
	
	void deleteParticleFlames()
	{	
		headburn  = false;
		torsoburn = false;
		rarmburn  = false;
		larmburn  = false;
		rlegburn  = false;
		llegburn  = false;
		
		if(particlefire1)		
		{
			SEffectManager.DestroyEffect(particlefire1);
		}
		if(particlefire2)
		{
			SEffectManager.DestroyEffect(particlefire2);
		}
		if(particlefire3)
		{
			SEffectManager.DestroyEffect(particlefire3);
		}
		if(particlefire4)
		{
			SEffectManager.DestroyEffect(particlefire4);
		}
		if(particlefire5)
		{
			SEffectManager.DestroyEffect(particlefire5);
		}
		if(particlefire6)
		{
			SEffectManager.DestroyEffect(particlefire6);
		}
		
		SetSynchDirty();
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();		
		UpdateTFParticles();				
	};	
	
	void SetSoakedGasoline(bool isSoakedGasoline)
    {		
        m_SoakedGasoline = isSoakedGasoline;
		SetSynchDirty();
    }
	
	bool GetSoakedGasoline()
	{	
		return m_SoakedGasoline;				
	}	
	
	bool CanAddFuelGasoline( ItemBase container )
	{		
		if (container)
		{			
			int liquid_type	= container.GetLiquidType();			
			if ( container.GetQuantity() > 0  &&  (liquid_type & LIQUID_GASOLINE) && IsRestrained() )		
				return true;					
		}			
		return false;		
	}
	
	void FirePlayerNow()
	{	
		m_FireDamage = new Timer();
		m_FireDamage.Run( 1, this, "fireDamage", NULL, true );	
		m_VoicePain = new Timer();
		m_VoicePain.Run( 1, this, "PainVoice", NULL, true );
		SpawnFireEffect();
	}	
	
	void fireDamage()
	{
		int Damage = 5;
		int HealthPlayer = this.GetHealth("GlobalHealth", "Health");
		int DamageFire = HealthPlayer - Damage;
		this.SetHealth(DamageFire);		
	}
	
	void SpawnFireEffect()
	{		
		AssignBoneIndexes();		
		SetPhosphorusDamagePoints(true, true, true, true, true, true);		
	}
	
	void PainVoice()
	{		
		SendSoundEvent(EPlayerSoundEventID.INJURED_HIGH);	
		SendSoundEvent(EPlayerSoundEventID.INJURED_MEDIUM);
	}
	
	override void EEKilled( Object killer )
	{		
		m_VoicePain.Stop();
		m_FireDamage.Stop();
		deleteParticleFlames();		
		super.EEKilled( killer );
	}
}