modded class DayZPlayerTypeUtils
{
    //DayZ Shitty modding game based on my cringe Simple Vanilla Function And Value From 1.18
    override static void DayZPlayerTypeCreate(DayZPlayerType pType)
    {
        DayZPlayerTypeRegisterItems(pType);
        DayZPlayerTypeRegisterSounds(pType);
        DayZPlayerCameras.RegisterCameras(pType);
        pType.SetLookLimits(-85, 85, -160, 160);    
        pType.SetAimLimits(-85, 85, -180, 180);     
        pType.SetCameraShootParams(250, 0.01, 0.866);
        pType.RegisterHitComponentsForAI();

        SHumanCommandMoveSettings hmcs = pType.CommandMoveSettingsW();

        hmcs.m_fRunSpringTimeout    = CfgGameplayHandler.GetMovementTimeToSprint();//!< filter span value      [s]
        hmcs.m_fRunSpringMaxChange  = 50; //!< filter speed value      [val/s] 1.19 - 8.0, 1.18 - 4.0

        //! WSAD direction filter 
        hmcs.m_fDirFilterTimeout            = 0.1;      //!< direction filter timeout [s]
        hmcs.m_fDirFilterSprintTimeout      = 0.1;   //!< sprint direction filter timeout [s]
        hmcs.m_fDirFilterSpeed              = Math.DEG2RAD * 360;                                   //!< direction filter max rot speed [rad/s]
        hmcs.m_fMaxSprintAngle              = Math.DEG2RAD * 45.01;                                 //!< max sprint angle [rad]
    
        hmcs.m_fTurnAngle                   = 45;               //!< this is when char starts tu turn
        hmcs.m_fTurnEndUpdateNTime          = 0.7;              //!< this is end norm time (turn amount is not updated after this time)
        hmcs.m_fTurnNextNTime               = 0.9;              //!< this is norm time when new turn from old turn is evaluated again (turn->turn)
    
    
        hmcs.m_fHeadingChangeLimiterIdle    = 500000;           //!<
        hmcs.m_fHeadingChangeLimiterWalk    = 2000;             //!<
        hmcs.m_fHeadingChangeLimiterRun     = 1500;             //!<
        
        hmcs.m_fLeaningSpeed                = 6;              //!< Q/E speed, if you need that shit lmao
    
        hmcs.m_fWaterLevelSpeedRectrictionLow   = 0.5;          //!< Water level (in meters) - m_iMaxSpeedNormal_WaterLevelLow and m_iMaxSpeedFast_WaterLevelLow are applied when character is deeper
        hmcs.m_fWaterLevelSpeedRectrictionHigh  = 1.0;          //!< Water level (in meters) - m_iMaxSpeedNormal_WaterLevelHigh and m_iMaxSpeedFast_WaterLevelHigh are applied when character is deeper
    
        // proposal 2
        hmcs.m_iMaxSpeedNormal_WaterLevelLow    = -1;           //!< Max movement speed for m_fWaterLevelSpeedRectrictionLow when character doesn't want to sprint (-1 means no change)
        hmcs.m_iMaxSpeedFast_WaterLevelLow      = -1;           //!< Max movement speed for m_fWaterLevelSpeedRectrictionLow when character wants to sprint (-1 means no change)
        hmcs.m_iMaxSpeedNormal_WaterLevelHigh   = 1;            //!< Max movement speed for m_fWaterLevelSpeedRectrictionHigh when character doesn't want to sprint (-1 means no change)
        hmcs.m_iMaxSpeedFast_WaterLevelHigh     = 2;            //!< Max movement speed for m_fWaterLevelSpeedRectrictionHigh when character wants to sprint (-1 means no change)

        // swim settings
            
    
        SHumanCommandClimbSettings hcls = pType.CommandClimbSettingsW();
    };
}

modded class DayzPlayerItemBehaviorCfg extends HumanItemBehaviorCfg
{
    void DayzPlayerItemBehaviorCfg()
	{
		m_iStanceMask = DayZPlayerConstants.STANCEMASK_ALL;

		m_StanceMovements[DayZPlayerConstants.STANCEIDX_ERECT] 			= DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | DayZPlayerConstants.MOVEMENT_RUN | DayZPlayerConstants.MOVEMENT_SPRINT;
		m_StanceMovements[DayZPlayerConstants.STANCEIDX_CROUCH] 		= DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | DayZPlayerConstants.MOVEMENT_SPRINT;
		m_StanceMovements[DayZPlayerConstants.STANCEIDX_PRONE] 			= DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK;
		m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDERECT] 	= DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | DayZPlayerConstants.MOVEMENT_RUN | DayZPlayerConstants.MOVEMENT_SPRINT;
		m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDCROUCH] 	= DayZPlayerConstants.MOVEMENT_IDLE | DayZPlayerConstants.MOVEMENT_WALK | DayZPlayerConstants.MOVEMENT_RUN;
		m_StanceMovements[DayZPlayerConstants.STANCEIDX_RAISEDPRONE] 	= DayZPlayerConstants.MOVEMENT_IDLE;

		m_StanceRotation[DayZPlayerConstants.STANCEIDX_ERECT] 			= DayZPlayerConstants.ROTATION_ENABLE;
		m_StanceRotation[DayZPlayerConstants.STANCEIDX_CROUCH] 			= DayZPlayerConstants.ROTATION_ENABLE;
		m_StanceRotation[DayZPlayerConstants.STANCEIDX_PRONE] 			= DayZPlayerConstants.ROTATION_ENABLE;
		m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDERECT] 	= DayZPlayerConstants.ROTATION_ENABLE;
		m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDCROUCH] 	= DayZPlayerConstants.ROTATION_ENABLE;
		m_StanceRotation[DayZPlayerConstants.STANCEIDX_RAISEDPRONE] 	= DayZPlayerConstants.ROTATION_ENABLE;

		
		//! per item camera user data to be uninitialized
		m_iPerItemCameraUserData 		= DayZPlayerCameras.PERITEMUD_INVALID;
		//! rotational delay to camera direction in move only (filter)
		m_fMoveHeadingFilterSpan 		= 0.15;
		m_fMoveHeadingSprintFilterSpan 	= 0;
		m_fMoveHeadingProneFilterSpan 	= 0;
		m_fMoveHeadingFilterSpeed		= Math.DEG2RAD * 300;	// 720 deg / sec

		m_fMeleeEvadeHeadingFilterSpan	= 0.07;
		m_fMeleeEvadeHeadingFilterSpeed	= Math.DEG2RAD * 1440;	// 720 deg / sec

		m_bAttackLean = false;
		m_bJumpAllowed = true;
	}
}