class CfgPatches
{
	class IntenZPack_scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class IntenZPack
	{
		
		dir = "IntenZPack";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "IntenZPack";
		credits = "0";
		author = "0";
		authorID = "0"; 
		version = ""; 
		extra = 0;
		type = "mod";
		dependencies[] = {"Game", "World", "Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZPack/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZPack/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZPack/5_Mission"};
			};
		};
	};
};