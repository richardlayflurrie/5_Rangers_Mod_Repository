class CfgPatches {
	class Steel_British_Ranger_Regiment_Beret 	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Common",
			"A3_Characters_F_Civil",
			"A3_Characters_F_Heads",
			"A3_Characters_F_Common",
			"A3_Data_F"
		};
    };
};

class cfgWeapons {
	class UK3CB_BAF_H_Beret_PR;
	class UK3CB_BAF_H_Beret_PR_PRR_Over;

	class Steel_British_Ranger_Regiment_Beret : UK3CB_BAF_H_Beret_PR {
		scope = 2;
		displayName = "Ranger Regiment Beret";
		hiddenSelectionsTextures[] = {"5_Rangers_Berets\data\beret_black_cap_badge_co.paa"};
	};

	class Steel_British_Ranger_Regiment_Beret_PRR_Over : UK3CB_BAF_H_Beret_PR_PRR_Over {
		scope = 2;
		displayName = "Ranger Regiment Beret (PRR Over)";
		hiddenSelectionsTextures[] = {"5_Rangers_Berets\data\beret_black_cap_badge_co.paa"};
	};
};

class cfgMods {
	author = "Steel";
	timepacked = "";
}