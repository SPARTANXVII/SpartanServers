modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {  
		super.RegisterActions(actions);		
        actions.Insert(ActionPourGasoline);
		actions.Insert(ActionFirePlayer);		
    }
}