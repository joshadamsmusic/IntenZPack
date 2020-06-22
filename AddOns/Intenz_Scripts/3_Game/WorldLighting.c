modded class WorldLighting
{
	protected string lighting_Intenz = "Intenz_Configs/CfgWorlds/DefaultWorld/CAWorld/Weather/Cfg.hpp";
	override void SetGlobalLighting( int lightingID )
	{
		switch ( lightingID )
		{
			case 2:
				Print( "lightingConfig = 2" );
				GetGame().GetWorld().LoadNewLightingCfg( lighting_Intenz );
				break;
		}
	}
}
