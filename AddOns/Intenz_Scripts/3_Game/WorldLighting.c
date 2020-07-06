/*modded class WorldLighting
{
	protected string lighting_Intenz = "Intenz_Configs/CfgWorlds/DefaultWorld/CAWorld/Weather/Cfg.hpp";
	override void SetGlobalLighting( int lightingID )
	{
		switch ( lightingID )
		{
			case 3:
				Print( "lightingConfig = 3" );
				GetGame().GetWorld().LoadNewLightingCfg( lighting_Intenz );
				break;
		}
	}
};
