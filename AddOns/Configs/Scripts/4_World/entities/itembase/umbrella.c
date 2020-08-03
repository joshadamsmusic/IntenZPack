class Umbrella_Base extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
		AddAction(ActionClose);
	}
};
class Umbrella_Closed: Umbrella_Base
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Opened");
	}
	override bool IsOpen() 
	{
		return false;
	}
};
class Umbrella_Opened: Umbrella_Base
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Closed");
	}
	override bool IsOpen() 
	{
		return true;
	}
};
class Umbrella_Black_Closed: Umbrella_Closed
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Black_Opened");
	}
};
class Umbrella_Black_Opened: Umbrella_Opened
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Black_Closed");
	}
};
class Umbrella_Blue_Closed: Umbrella_Closed
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Blue_Opened");
	}
};
class Umbrella_Blue_Opened: Umbrella_Opened
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Blue_Closed");
	}
};
class Umbrella_Green_Closed: Umbrella_Closed
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Green_Opened");
	}
};
class Umbrella_Green_Opened: Umbrella_Opened
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Green_Closed");
	}
};
class Umbrella_Rainbow_Closed: Umbrella_Closed
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Rainbow_Opened");
	}
};
class Umbrella_Rainbow_Opened: Umbrella_Opened
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Rainbow_Closed");
	}
};
class Umbrella_Yellow_Closed: Umbrella_Closed
{
	override void Open()
	{
		ReplaceItemWithNew("Umbrella_Yellow_Opened");
	}
};
class Umbrella_Yellow_Opened: Umbrella_Opened
{
	override void Close()
	{
		ReplaceItemWithNew("Umbrella_Yellow_Closed");
	}
};