modded class PlayerBase extends ManBase {
	bool shouldCloseMap = false;
	
	override void CloseMap()
	{
		if (m_hac && shouldCloseMap)
		{
			ScriptInputUserData ctx = new ScriptInputUserData;
			if ( ctx.CanStoreInputUserData() )
			{
				if ( GetGame().IsMultiplayer() && GetGame().IsClient() )
				{
					m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
					ctx.Write(INPUT_UDT_STANDARD_ACTION_END_REQUEST);
					ctx.Write(DayZPlayerConstants.CMD_ACTIONINT_END);
					ctx.Send();
				}
				else if ( !GetGame().IsMultiplayer() )
				{
					m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
				}
			}
		}
	}
}