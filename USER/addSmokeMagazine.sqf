params ["_vehicle", ["_isGerman", false]];

if (!isServer) exitWith {}; // safecheck

if (typeOf _vehicle == "rhs_prp3_vv") then {
    _vehicle addWeaponTurret ["mortar_82mm", [2];
    _vehicle addMagazineTurret ["8Rnd_82mm_Mo_Smoke_white", [2]];

    if (_isGerman) then {
        _vehicle setObjectTextureGlobal [1, "ga_tracked\mbt_03_ext01_co.paa"];
        _vehicle setObjectTextureGlobal [5, "ga_tracked\mbt_03_ext01_co.paa"];
    };
};