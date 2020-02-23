class russia {
    class AllUnits {
        uniform = "rhs_uniform_flora_patchless_alt";
        backpack = "";
        vest[] = {"rhs_6b23_ML_6sh92", "rhs_6b23_6sh92_vog", "rhs_6b23_rifleman"};
        primaryWeapon[] = {"rhs_weap_ak74m", "rhs_weap_ak74_2", "rhs_weap_ak74m_gp25", "rhs_weap_m84"};
        primaryWeaponMagazine = "rhs_30Rnd_545x39_7N22_plum_AK";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics[] = {
            "rhs_acc_pkas",
            "rhs_acc_ekp8_02",
            "rhs_acc_1p63",
            "rhs_acc_ekp1"
        };
        primaryWeaponPointer = "rhs_acc_2dpZenit";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "rhs_6b27m_green";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_fadak";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
			LIST_2("ACE_morphine"),
            LIST_2("ACE_Chemlight_HiWhite"),
            LIST_2("rhs_mag_rdg2_white"),
            LIST_4("ACE_splint"),
			"ACE_epinephrine",
			"ACE_Flashlight_KSF1",
			"ACE_MapTools"
        };
    };

    class Type {
        // Rifleman
        class Soldier_F {
            addItemsToVest[] = {
				LIST_9("rhs_30Rnd_545x39_7N22_plum_AK"),
				LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
                "ACE_EntrenchingTool"
			};
        };

        // Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            primaryWeaponMagazine = "rhs_30Rnd_545x39_7N22_plum_AK";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_6("rhs_GRD40_White")
            };
        };

        // Light AT
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        // TL
        class Soldier_TL_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            primaryWeaponMagazine = "rhs_30Rnd_545x39_7N22_plum_AK";
            handgunWeapon = "rhs_weap_tr8";
            headgear = "rhs_6b27m_green_ess";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_6("rhs_GRD40_White"),
                LIST_2("rhs_GRD40_Red"),
                LIST_2("rhs_GRD40_Green"),
                LIST_1("grad_axe")
            };
        };

        // SQL
        class Soldier_SL_F: Soldier_TL_F {

        };

        // SQL
        class officer_F: Soldier_TL_F {

        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_m84";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green";
            primaryWeaponMuzzle = "rhs_acc_dtk3";
            primaryWeaponOptics = "";
            backpack = "rhs_assault_umbts";
            addItemsToVest[] = {
                LIST_2("rhs_100Rnd_762x54mmR_green"),
				LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
			};
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };
    };

	class Rank {
		class LIEUTENANT {
            addItemsToBackpack[] = {"rhs_fieldcap_ml"};
		};
	};
};
