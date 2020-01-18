modded class PlayerBase		// modded keyword for modding existing class
{
	override void OnJumpStart()	// overriding existing function
	{
		super.OnJumpStart();	// call the original jump function so we don't break stuff
		Print("The debuging of the mod works, yay!"); // our modded print
	}
}