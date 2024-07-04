class CfgPatches
{
    class bsm_so_cgn_tltf_2008_opcs
    {
        author = "Broken Skull Mods™";
        name = "Operation: Clean Sweep";
        units[]={ };
        weapons[]= {};
        requiredVersion=0.1;
        requiredAddons[]= { };
    };
};

class CfgSounds
{

    class bsm_so_cgn_tltf_2008_ocs_Abudobi_Fled
    {
        name = "(Op) Clean Sweep: Abudobi Fled Location";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\Abudobi_Fled.ogg", 5, 1, 10};
        titles[] = { 
            0, "Look Guys",
            2, "It looks like Mr. Abudobi fled the area when the bullets started flying...",
            7, "According to ISR it appears he crashed his vehicle not far from here...",
            12, "head over there as soon as possible and capture this dumbass."
        };
    };

    class bsm_so_cgn_tltf_2008_ocs_AO_1_Abudobi_Intel
    {
        name = "(Op) Clean Sweep: Abudobi Location Found";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\AO_1_Abudobi_Intel.ogg", 5, 1, 10};
        titles[] = { 
            0, "Guys, our intel suggest that Abudobi is around the next objective.",
            5, "Search for him, capture is preferable...",
            7, "it is Abudabi's brother and he will be more likely to flip than his brother...",
            12, "He could have critical insight in the A-S-F operations in the region! Good Luck..."
        };
    };

    class bsm_so_cgn_tltf_2008_ocs_AO_1_Squad_Reinforcement_1
    {
        name = "(Op) Clean Sweep: Squad North-East Warning";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\AO_1_Squad_Reinforcement_1.ogg", 5, 1, 10};
        titles[] = { 
            0, "This is spitfire base,",
            2, "It looks like an Enemy Squad is approaching your position from the North-East...",
            7, "keep on your toes."
        };
    };
    
    class bsm_so_cgn_tltf_2008_ocs_AO_3_Technical_Reinforcement_2
    {
        name = "(Op) Clean Sweep: Abudobi Technical Warning";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\AO_3_Technical_Reinforcement_2.ogg", 5, 1, 10};
        titles[] = { 
            0, "Alert Alert...",
            1, "Enemy Technical heading your way from the south!",
            4, "Must be the reinforcement for abudobi."
        };
    };

    class bsm_so_cgn_tltf_2008_ocs_Hornet_AA_Warning
    {
        name = "(Op) Clean Sweep: AA Hornet Warning";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\Hornet_AA_Warning.ogg", 5, 1, 10};
        titles[] = { 
            0, "Spitfire base to hornet 1-1...",
            3, "Be aware that there are reports of anti-aircraft in the region,",
            7, "we know for a fact the first objective has manned AAs...",
            12, "The team will disable them before you can take off...",
            15, "Good luck and be careful."
        };
    };

    class bsm_so_cgn_tltf_2008_ocs_PMO_Convoy_Last_Warning
    {
        name = "(Op) Clean Sweep: Convoy Moving Warning";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\PMO_Convoy_Last_Warning.ogg", 5, 1, 10};
        titles[] = { 
            0, "Boys...",
            2, "The Landay's convoy is on the move towards your position!",
            5, "get the fuck out now!",
            7, "you are not equip to face this amount of forces..."
        };
    };

    class bsm_so_cgn_tltf_2008_ocs_PMO_Convoy_Warning
    {
        name = "(Op) Clean Sweep: Convoy Preping Warning";
        sound[] = {"\bsm_so_cgn_tltf_2008\1_0_operation_clean_sweep\data\sounds\PMO_Convoy_Warning.ogg", 5, 1, 10};
        titles[] = { 
            0, "Listen up...",
            2, "It looks like an enemy military convoy is preparing in Landay!",
            5, "Finish the job and get the fuck out of there.",
            7, "I got you an extract point close by."
        };
    };
  
};



