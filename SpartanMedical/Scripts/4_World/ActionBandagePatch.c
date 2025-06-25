modded class ActionBandageBase {
	override void ApplyBandage(ItemBase item, PlayerBase player) {
		if (player.GetBleedingManagerServer() && player.GetBleedingManagerServer().GetBleedingSourcesCount() > 1) {
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();	
		}
		super.ApplyBandage(item, player);
	}
}