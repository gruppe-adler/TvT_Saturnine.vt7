class germany {
   class AllUnits {
        uniform = "rhssaf_uniform_m93_oakleaf";
        backpack = "";
        vest[] = {"rhssaf_vest_md99_woodland","rhssaf_vest_md99_woodland_rifleman","rhssaf_vest_md99_woodland_radio","rhssaf_vest_md99_woodland_rifleman_radio","rhssaf_vest_md99_md2camo_rifleman_radio","rhssaf_vest_md98_md2camo","rhssaf_vest_md98_rifleman","rhssaf_vest_otv_md2camo"};
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
        headgear = "rhssaf_helmet_m97_olive_nocamo";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_anprc152";

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
                LIST_8("rhs_30Rnd_545x39_7N22_plum_AK"),
                LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
                "ACE_EntrenchingTool"
            };
        };

        // Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            primaryWeaponMagazine = "rhs_30Rnd_545x39_7N22_plum_AK";
            backpack = "rhssaf_kitbag_md2camo";
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
            backpack = "rhssaf_kitbag_md2camo";
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
            primaryWeapon = "rhs_weap_ak103";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green";
            primaryWeaponMuzzle = "rhs_acc_dtk3";
            primaryWeaponOptics = "";
            backpack = "rhssaf_kitbag_md2camo";
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
            backpack = "rhssaf_kitbag_md2camo";
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };
    };

    class Rank {
        class LIEUTENANT {
            addItemsToBackpack[] = {"grad_beret_black"};
        };
    };
};