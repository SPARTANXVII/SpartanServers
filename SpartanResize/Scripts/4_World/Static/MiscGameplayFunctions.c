modded class MiscGameplayFunctions
{
	static array<ItemBase> AddEntityToGroundPos(string item_name, vector pos, int quantity)
	{
		if (!GetGame().IsDedicatedServer()) {
			return null;
		}
		
		InventoryLocation inv_loc = new InventoryLocation;
		vector mtx[4];
		Math3D.MatrixIdentity4(mtx);
		mtx[3] = pos;
		inv_loc.SetGround(NULL, mtx);
		
		array<ItemBase> results = {};
		array<Object> objects = {};
		GetGame().GetObjectsAtPosition3D(inv_loc.GetPos(), 0.1, objects, null);
		foreach (Object object: objects) {
			ItemBase item = ItemBase.Cast(object);
			if (!item) {
				continue;
			}
			
			if (!item.IsKindOf(item_name)) {
				continue;
			}
			
			int remainder = item.GetQuantityMax() - item.GetQuantity();
			
			for (int i = 0; i < remainder && quantity > 0; i++) {
				item.AddQuantity(1);
				quantity--;
			}
			
			results.Insert(item);
		}
		
		if (quantity <= 0) {
			return results;
		}
		
		ItemBase new_item = ItemBase.Cast(GetGame().CreateObjectEx(item_name, inv_loc.GetPos(), ECE_PLACE_ON_SURFACE));
		results.Insert(new_item);
		if (quantity > new_item.GetQuantityMax()) {
			new_item.SetQuantityMax();
			quantity -= new_item.GetQuantityMax();
			
			new_item = ItemBase.Cast(GetGame().CreateObjectEx(item_name, inv_loc.GetPos(), ECE_PLACE_ON_SURFACE));
			results.Insert(new_item);
		}
		
		new_item.SetQuantity(quantity);

		return results;
	}
}