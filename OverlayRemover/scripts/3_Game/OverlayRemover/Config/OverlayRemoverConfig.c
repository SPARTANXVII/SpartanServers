class OverlayRemoverConfigManager
{
    int Version;

    int DisableGasMaskOverlay;
    int DisableHelmetOverlay;
    int DisableMotoHelmetOverlay;
    int DisableNVGOverlay;
    int DisablePumpkinOverlay;
    int DisableEyepatchOverlay;
    int DisableNorseHelmOverlay;

    int DisableSportGlassesTint;
    int DisableAviatorGlassesTint;
    int DisableCasualSunGlassesTint;
    int DisableTactcalGogglesTint;
    int DisableDarkMotoHelmetTint;
    int DisableWeldingMaskTint;
        
    void OverlayRemoverConfigManager() {
	}

    void LoadDefaultSettings() 
    {
        Version = 2;

        DisableGasMaskOverlay = 1;
        DisableHelmetOverlay = 1;
        DisableMotoHelmetOverlay = 1;
        DisableNVGOverlay = 1;
        DisablePumpkinOverlay = 1;
        DisableEyepatchOverlay = 1;
        DisableNorseHelmOverlay = 1;

        DisableSportGlassesTint = 0;
        DisableAviatorGlassesTint = 0;
        DisableCasualSunGlassesTint = 0;
        DisableTactcalGogglesTint = 0;
        DisableDarkMotoHelmetTint = 1;
        DisableWeldingMaskTint = 1;
        

        SaveConfig();
    }

    protected void SaveConfig() {
		if (!FileExist("$profile:OverlayRemoval/"))
			MakeDirectory("$profile:OverlayRemoval/");
        JsonFileLoader<OverlayRemoverConfigManager>.JsonSaveFile("$profile:OverlayRemoval/OverlayRemoval.json", this);
	};

    static ref OverlayRemoverConfigManager LoadConfig() {
        ref OverlayRemoverConfigManager settings = new OverlayRemoverConfigManager();
        if(!FileExist("OverlayRemoval"))
            MakeDirectory("OverlayRemoval");
        if(FileExist("$profile:OverlayRemoval/OverlayRemoval.json"))
        {
            JsonFileLoader<OverlayRemoverConfigManager>.JsonLoadFile("$profile:OverlayRemoval/OverlayRemoval.json", settings);
        }
        else
        {
            settings.LoadDefaultSettings();
        }

        if(settings.Version == 1)
        {
            settings.Version = 2;
            settings.DisableNorseHelmOverlay = 1;

            settings.SaveConfig();
        }

        return settings;
    }
}

static ref OverlayRemoverConfigManager g_OverlayRemoverConfig;
static ref OverlayRemoverConfigManager g_ClientOverlayRemoverConfig;
static ref OverlayRemoverConfigManager GetORConfig()
{
    if (g_Game.IsServer() && !g_OverlayRemoverConfig) 
    {
        g_OverlayRemoverConfig = OverlayRemoverConfigManager.LoadConfig();
    }
	else if(g_Game.IsClient())
	{
		return g_ClientOverlayRemoverConfig; //Gets Filled on mission start with an RPC.
	}
    return g_OverlayRemoverConfig;
};