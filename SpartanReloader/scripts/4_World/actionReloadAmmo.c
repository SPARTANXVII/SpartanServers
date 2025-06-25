class ActionReloadAmmoCB : ActionContinuousBaseCB
{
	private const float TIME_TO_RELOAD = 1.5;

	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(TIME_TO_RELOAD);
	}
	
	override void InitActionComponent()
	{
		super.InitActionComponent();
		
		RegisterAnimationEvent("CraftingAction", UA_IN_CRAFTING);
	}
};

class ActionReloadAmmo : ActionContinuousBase
{
	void ActionReloadAmmo()
	{
		m_CallbackClass = ActionReloadAmmoCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
		m_Text = "ReloadAmmo";
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (item && item.ClassName() == "AmmoReloader")
		{
			Magazine rel_mag = Magazine.Cast(item.FindAttachmentBySlotName("magazine"));
			private int r_needreload = 0;
			r_needreload = rel_mag.GetAmmoMax() - rel_mag.GetAmmoCount();
			
			if (ItemBase.Cast(item.FindAttachmentBySlotName("magazine")) && r_needreload > 0 && !rel_mag.IsAmmoPile())
			{
				return true;
			}
		}

		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		Magazine rel_mag = Magazine.Cast(action_data.m_MainItem.FindAttachmentBySlotName("magazine"));
		private int r_needreload = 0;
		r_needreload = rel_mag.GetAmmoMax() - rel_mag.GetAmmoCount();
		
		EntityAI reloader = action_data.m_MainItem;
		CargoBase r_cargo = reloader.GetInventory().GetCargo();
				
		if (r_cargo.GetItemCount() != 0)
        {
			int r_stackammoqt = 0;
			int j;
			float dmg;
			string ammoType;
				
            for ( int i = 0; (i < r_cargo.GetItemCount() && r_needreload > 0); i++ )
			{
				Magazine r_stackammo = Magazine.Cast(r_cargo.GetItem(i));
				if(r_stackammo && rel_mag.IsCompatiableAmmo(r_stackammo))
				{
					r_stackammoqt = r_stackammo.GetAmmoCount();
					if (r_needreload >= r_stackammoqt)
					{
						r_stackammo.ServerAcquireCartridge(dmg, ammoType);
						for(j=0; j < r_stackammoqt; j++)
						{
							rel_mag.ServerStoreCartridge(0 ,ammoType);
						}
						rel_mag.SetSynchDirty();
										
						r_stackammo.AddQuantity(-1);
						r_needreload -= r_stackammoqt;
					}
					else
					{
						r_stackammo.ServerAcquireCartridge(dmg, ammoType);
						for(j=0; j < r_needreload; j++)
						{
							rel_mag.ServerStoreCartridge(0 ,ammoType);
						}
						rel_mag.SetSynchDirty();
						r_stackammo.ServerSetAmmoCount(r_stackammoqt - r_needreload);
						r_needreload = 0;
					}
			    }
			}
		}
	}
};