modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		actions.Insert(ActionChainsawTree);
		actions.Insert(ActionChainsawPlanks);
		actions.Insert(ActionChainsawLogs);
	}
}