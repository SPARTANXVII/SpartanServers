enum DrunkSymptomIDs : SymptomIDs
{
    SYMPTOM_DRUNK = 461233,
}

modded class SymptomManager
{
    override void Init()
    {
        super.Init();

        RegisterSymptom( new Drunk );
    }
}