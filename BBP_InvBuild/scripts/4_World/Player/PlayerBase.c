modded class PlayerBase
{
	bool hasBBPMats(string M_Name, int M_Amount)
	{
		array<EntityAI> itemsArray = new array<EntityAI>;

		GetInventory().EnumerateInventory(InventoryTraversalType.INORDER, itemsArray);            
		for(int i = 0; i < itemsArray.Count(); i++)
		{
			if(itemsArray[i] != null)
			{
				if(itemsArray[i].IsKindOf(M_Name))
				{
					if(itemsArray[i].GetQuantity() >= M_Amount)
					{
						return true;
					}
				}
			}
		}
		
		return false;
	}
	
	void removeBBPMats(string M_Name, int M_Amount)
	{
		ItemBase delete_Mats;
		
		array<EntityAI> itemsArray = new array<EntityAI>;
		GetInventory().EnumerateInventory(InventoryTraversalType.INORDER, itemsArray);
		
		for(int bbp_i = 0; bbp_i < itemsArray.Count(); bbp_i++)
		{
			if(itemsArray[bbp_i] != null)
			{
				if(itemsArray[bbp_i].IsKindOf(M_Name))
				{
					if(itemsArray[bbp_i].GetQuantity() >= M_Amount)
					{
						delete_Mats = ItemBase.Cast(itemsArray[bbp_i]);
						delete_Mats.AddQuantity( -M_Amount );
						return;
					}
				}
			}
		}
	}
}


//so 3 iq players don't attach to the wall and lose their mats
modded class BBP_Concrete_Brick_Pile
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}

modded class BBP_Mortar_Mix
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}

modded class Nail
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}

modded class WoodenLog
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}

modded class WoodenPlank
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}

modded class MetalPlate
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionAttachToConstruction);
	}
}
//so 3 iq players don't attach to the wall and lose their mats