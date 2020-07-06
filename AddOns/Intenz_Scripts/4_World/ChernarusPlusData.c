modded class ChernarusPlusData extends WorldData
{
	override void Init( int seasonID )
	{
		switch ( seasonID )
		{
			super.Init();
			case 0:
				Print( "seasonConfig = 0" );
				m_DayTemperature = 28;
				m_NightTemperature = 19;
				break;
			case 1:
				Print( "seasonConfig = 1" );
				m_DayTemperature = 17;
				m_NightTemperature = 9;
				break;
			case 2:
				Print( "seasonConfig = 2" );
				m_DayTemperature = 6;
				m_NightTemperature = -1;
				break;
		}
	}
};
