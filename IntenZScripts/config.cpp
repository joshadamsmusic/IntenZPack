class CfgPatches
{
	class IntenZ_scripts
	{
		requiredAddons[]={};
	};
};

class CfgMods
{
	class IntenZPack
	{
		type = "mod";
		dependencies[] = {"Game", "World"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZScripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZScripts/4_World"};
			};
			class missionScriptModule
            {
                value="";
                files[]={"IntenZScripts/5_mission"};
            };
		};
	};
};