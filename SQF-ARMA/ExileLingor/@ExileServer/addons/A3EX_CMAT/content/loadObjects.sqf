/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 39 Vehicles
private _vehicles = [
["Exile_Sign_Aircraft", [3294.46, 3592.44, 227.711], [-0.618533, -0.785758, 0], [0, 0, 1], false],
["Exile_Sign_Vehicles", [3363.08, 3590.47, 227.711], [0.988715, 0.149811, 0], [0, 0, 1], false],
["Exile_Sign_Armory", [3259.9, 3630.57, 227.711], [-0.966534, 0.256539, 0], [0, 0, 1], false],
["Exile_Sign_Equipment", [3263.26, 3622.78, 227.711], [-0.609786, -0.792566, 0], [0, 0, 1], false],
["Exile_Sign_Food", [3266.38, 3637.78, 227.711], [-0.354458, 0.935072, 0], [0, 0, 1], false],
["Exile_Sign_Locker", [3262.79, 3634.8, 227.792], [-0.763475, 0.645838, 0], [0, 0, 1], false],
["Exile_Sign_SpecialOperations", [3260.26, 3625.9, 227.711], [-0.938413, -0.345516, 0], [0, 0, 1], false],
["Exile_Sign_WasteDump", [3315.78, 3614.42, 227.711], [0.65708, 0.75382, 0], [0, 0, 1], false],
["Exile_Sign_Hardware", [3269.63, 3637.9, 227.711], [0.200218, 0.979751, 0], [0, 0, 1], false],
["Exile_Sign_Office", [3272.88, 3637.03, 227.711], [0.60201, 0.798488, 0], [0, 0, 1], false],
["Base_WarfareBContructionSite", [3255.61, 3628.71, 230.621], [0.0269539, 0.999637, 0], [0, 0, 1], true],
["Base_WarfareBBarrier10xTall", [3266.88, 3607.65, 227.766], [-0.807788, -0.589473, 0], [0, 0, 1], true],
["Exile_Locker", [3264.03, 3636.21, 226.67], [-0.625711, 0.780055, 0], [0, 0, 1], true],
["Land_TentHangar_V1_F", [3271.51, 3626.78, 230.76], [-0.76854, 0.639801, 0], [0, 0, 1], true],
["CamoNet_BLUFOR_big_F", [3368.38, 3591, 228.74], [0.997548, 0.0699867, 0], [0, 0, 1], true],
["B_T_MRAP_01_F", [3366.57, 3586.46, 228.876], [-0.107062, -0.994252, 0], [0, 0, 1], false],
["O_Truck_02_box_F", [3366.96, 3594.15, 229.052], [-0.977008, 0.213201, 0], [0, 0, 1], false],
["CUP_O_TT650_TKA", [3361.92, 3593.1, 228.253], [-0.576518, -0.817085, 0], [0, 0, 1], false],
["B_Quadbike_01_F", [3362.62, 3587.85, 228.296], [-0.928492, 0.371352, 0], [0, 0, 1], false],
["CUP_I_Wildcat_Digital_AAF", [3298.69, 3584.61, 226.711], [-0.800799, 0.598934, 0], [0, 0, 1], false],
["CUP_I_MH6J_RACS", [3287.08, 3596.42, 227.734], [0.966806, 0.255513, 0], [0, 0, 1], false],
["Land_A_Crane_02a", [5221.82, 7866.3, 8.38264], [0.660212, 0.751079, 0], [0, 0, 1], true],
["Land_Boat_03_abandoned_F", [5219.16, 7869.6, 4.19567], [0.648189, 0.761479, 0], [0, 0, 1], true],
["Exile_Locker", [5225.01, 7864.7, 3.03233], [0.740892, -0.671624, 0], [0, 0, 1], true],
["Exile_Sign_Boat", [5223.61, 7870.82, 4.07387], [0.637383, 0.770547, 0], [0, 0, 1], true],
["Exile_Sign_Locker", [5223.96, 7863.18, 4.07375], [0.763321, -0.64602, 0], [0, 0, 1], true],
["Exile_Locker", [5222.68, 7861.79, 3.03313], [0.726165, -0.68752, 0], [0, 0, 1], true],
["Exile_Sign_WasteDump", [6950.12, 1267.42, 6.44105], [0.914832, -0.403834, 0], [0, 0, 1], true],
["Land_Workbench_01_F", [6951.26, 1271.42, 5.89816], [0.392417, -0.919787, -0.000898946], [0, -0.000977341, 1], true],
["Land_WeldingTrolley_01_F", [6951.66, 1272.78, 6.09835], [0, 1, 0.000976388], [0, -0.000976388, 1], true],
["Land_SM_01_shelter_wide_F", [6939.41, 1273.07, 8.99935], [-0.80726, 0.59008, 0.011663], [0.0129966, -0.0019833, 0.999914], true],
["US_WarfareBContructionSite1_Base_EP1", [6951.27, 1263.28, 6.66788], [-0.108572, -0.994089, 0], [0, 0, 1], true],
["Land_Misc_Cargo2B", [6947.79, 1274.75, 7.94985], [0.803471, -0.595343, -0.00136579], [0.000976388, -0.000976387, 0.999999], true],
["Wire", [3275.43, 3613.2, 227.423], [0, 1, 0], [0, 0, 1], true],
["Wire", [3285.47, 3625.39, 227.423], [-0.999031, -0.0440231, 0], [0, 0, 1], true],
["Land_HBarrier_01_line_1_green_F", [3278.98, 3614.11, 227.372], [0.813951, 0.580934, 0], [0, 0, 1], true],
["Land_HBarrier_01_line_1_green_F", [3284.86, 3621.22, 227.372], [-0.434716, -0.900568, 0], [0, 0, 1], true],
["Land_jezekbeton", [3280.25, 3615.47, 227.36], [0.692502, -0.721416, 0], [0, 0, 1], true],
["Land_jezekbeton", [3281.46, 3616.9, 227.36], [0.692502, -0.721416, 0], [0, 0, 1], true],
["Land_jezekbeton", [3282.76, 3618.41, 227.36], [0.692502, -0.721416, 0], [0, 0, 1], true],
["Land_jezekbeton", [3283.99, 3619.88, 227.36], [0.692502, -0.721416, 0], [0, 0, 1], true],
["Exile_Sign_TraderCity", [3261.38, 3635.78, 229.243], [-0.768814, 0.639472, 0], [0, 0, 1], false],
["Exile_Locker", [3261.53, 3633.15, 226.67], [-0.921396, 0.388626, 0], [0, 0, 1], true],
["CUP_A2_Road_asf3_7_100", [3351.58, 3598.71, 226.67], [0.278608, -0.960405, 0], [0, 0, 1], true],
["Land_PicnicTable_01_F", [3279.7, 3629.28, 226.93], [0.637624, 0.770348, 0], [0, 0, 1], true],
["Land_LampStreet_small_F", [3260.57, 3632.58, 229.772], [0.964164, -0.265308, 0], [0, 0, 1], true],
["Land_LampStreet_small_F", [3264.48, 3637.09, 229.772], [0.493591, -0.869694, 0], [0, 0, 1], true],
["Land_PortableLight_02_double_olive_F", [3278.46, 3614.81, 227.608], [0.582724, -0.81267, 0], [0, 0, 1], true],
["Land_PortableLight_02_double_olive_F", [3284.2, 3621.58, 227.608], [0.893841, -0.448385, 0], [0, 0, 1], true],
["CUP_A2_Road_asf3_10_25", [3352.68, 3591.01, 226.67], [-0.0791055, -0.996866, 0], [0, 0, 1], true],
["CUP_A2_Road_asf3_10_25", [3351.41, 3587.36, 226.67], [-0.331653, -0.943401, 0], [0, 0, 1], true],
["Land_LampHalogen_F", [3334.05, 3616.04, 232.73], [0.720466, -0.693427, -0.00936441], [0.0129966, 0, 0.999916], true],
["Land_LampHalogen_F", [3365.31, 3602.61, 232.652], [-0.278094, 0.960554, 0], [0, 0, 1], true],
["Land_Budova5", [3330.6, 3606.56, 228.949], [-0.759912, 0.650026, 0], [0, 0, 1], true],
["Land_LampHalogen_F", [3362.46, 3577.65, 232.652], [0.954296, 0.298862, 0], [0, 0, 1], true],
["US_WarfareBVehicleServicePoint_Base_EP1", [3291.57, 3589.4, 227.711], [0.803632, -0.595127, 0], [0, 0, 1], false],
["Land_LampHalogen_F", [3303.14, 3579.39, 232.652], [0.990709, 0.136002, 0], [0, 0, 1], true],
["CUP_A1_Road_runway_dirt", [3351.25, 3560.88, 226.67], [0.776231, -0.630449, 0], [0, 0, 1], true],
["Land_TentLamp_01_suspended_F", [3367.52, 3570.59, 226.714], [0.760858, -0.648918, 0], [0, 0, 1], true],
["ClutterCutter", [3317.53, 3568.86, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3334.05, 3555.05, 226.615], [0.772999, -0.634349, 0.00854544], [-0.0608876, -0.0607747, 0.996293], true],
["ClutterCutter", [3325.74, 3561.78, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3345.23, 3545.3, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3358.31, 3534.61, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3374.35, 3521.43, 226.733], [0.774349, -0.632755, -0.00212504], [0.0149977, 0.0149962, 0.999775], true],
["ClutterCutter", [3386.83, 3511.37, 226.618], [0.773546, -0.633673, 0.00928534], [-0.047946, -0.0439071, 0.997884], true],
["ClutterCutter", [3401, 3498.84, 227.457], [0.769453, -0.634789, -0.0706102], [0.113266, 0.0268166, 0.993203], true],
["ClutterCutter", [3413.89, 3488.93, 226.917], [0.773653, -0.628909, 0.0770291], [-0.0449543, 0.0667824, 0.996754], true],
["ClutterCutter", [3426.51, 3477.54, 227.854], [0.774194, -0.63292, -0.00594641], [-0.0249912, -0.0399542, 0.998889], true],
["ClutterCutter", [3372.32, 3565.91, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3385.98, 3554.38, 226.84], [0.700613, -0.712954, 0.0289586], [-0.426103, -0.385484, 0.818437], true],
["ClutterCutter", [3400.66, 3542.14, 227.004], [0.774436, -0.625091, -0.0975139], [0, -0.154135, 0.98805], true],
["ClutterCutter", [3392.81, 3548.12, 226.815], [0.765182, -0.64349, 0.0204276], [-0.154135, -0.152293, 0.976242], true],
["ClutterCutter", [3414.23, 3530.83, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3427.54, 3519.95, 226.671], [0.774436, -0.632571, 0.010121], [0, 0.0159977, 0.999872], true],
["ClutterCutter", [3438.98, 3510.2, 226.953], [0.77436, -0.632397, 0.0209609], [-0.0139989, 0.0159961, 0.999774], true],
["ClutterCutter", [3453.68, 3497.1, 227.686], [0.770892, -0.628583, 0.102999], [-0.0955612, 0.0457409, 0.994372], true],
["ClutterCutter", [3447.7, 3505.51, 227.253], [0.773225, -0.633736, 0.0224107], [-0.0559124, -0.0329308, 0.997892], true],
["ClutterCutter", [3321.64, 3600.52, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3330.73, 3590.7, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3299.5, 3624.43, 226.525], [0.773907, -0.633278, -0.0052225], [0.0369739, 0.036949, 0.998633], true],
["ClutterCutter", [3289.94, 3632.13, 227.07], [0.460376, -0.884099, -0.080139], [-0.189504, -0.18607, 0.964088], true],
["ClutterCutter", [3280.65, 3603.89, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3266.37, 3612.02, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3259.49, 3621.07, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3307.03, 3599.17, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3360.8, 3545.25, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3298.27, 3586.89, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["ClutterCutter", [3287.41, 3593.05, 226.67], [0.774436, -0.632652, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3355.77, 3534.49, 226.779], [0.204224, -0.978924, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3371.2, 3521.93, 226.882], [0.0658449, -0.99783, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3386.77, 3509.28, 226.703], [0.0658449, -0.99783, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3402.28, 3496.64, 227.48], [0.0658449, -0.99783, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3417.77, 3484.05, 227.527], [0.0658449, -0.99783, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3433.25, 3471.68, 228.469], [0.0658449, -0.99783, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3455.52, 3499.03, 227.884], [0.972371, 0.233443, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3440.16, 3511.52, 227.109], [0.972371, 0.233443, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3424.56, 3524.19, 226.779], [0.972371, 0.233443, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3409.17, 3536.81, 226.779], [0.972371, 0.233443, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3393.49, 3549.38, 227.226], [0.972371, 0.233443, 0], [0, 0, 1], true],
["Land_PortableLight_02_single_folded_olive_F", [3378.01, 3561.88, 226.779], [0.972371, 0.233443, 0], [0, 0, 1], true],
["CUP_tv_a", [3280.91, 3628.41, 227.577], [0.856658, 0.515885, 0], [0, 0, 1], true],
["Land_FMradio_F", [3280.51, 3628.81, 227.65], [-0.80437, -0.594128, 0], [0, 0, 1], true]
];

{
    private _vehicle = (_x select 0) createVehicle (_x select 1);
    _vehicle setVehicleLock "LOCKED";
    _vehicle allowDamage false;
    _vehicle setPosWorld (_x select 1);
    _vehicle setVectorDirAndUp [_x select 2, _x select 3];
    _vehicle enableSimulationGlobal (_x select 4);
    _vehicle setVariable ["ExileIsLocked", -1, true];
    
    if (_vehicle isKindOf "Exile_RussianRouletteChair") then
    {
        ExileRouletteChairs pushBack _vehicle;
        ExileRouletteChairPositions pushBack [_x select 1, getDir _vehicle];
    };
    
    if (_vehicle isKindOf "Exile_Sign_TraderCity") then
    {
        _vehicle setObjectTextureGlobal [0,"tripwire.paa"];
    };
}
forEach _vehicles;

// 39 Simple Objects
private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [
["ca\structures_e\misc\misc_market\crates_stack_ep1.p3d", [3267.51, 3637.9, 227.43], [-0.126895, 0.991916, 0], [0, 0, 1]],
["ca\structures_e\misc\misc_interier\crates_ep1.p3d", [3265.26, 3636.9, 226.902], [-0.126895, 0.991916, 0], [0, 0, 1]],
["ca\structures_e\misc\misc_market\crates_ep1.p3d", [3269.9, 3638.88, 227.409], [0.144299, 0.989534, 0], [0, 0, 1]],
["ca\weapons\ammoboxes\usbasicweapons.p3d", [3261.18, 3631.85, 227.961], [-0.221824, 0.975087, 0], [0, 0, 1]],
["ca\buildings\furniture\hromada_beden_dekorativnix.p3d", [3258.65, 3629.9, 226.67], [-0.221824, 0.975087, 0], [0, 0, 1]],
["ca\buildings\furniture\bedna_ammo2x.p3d", [3258.72, 3629.02, 226.67], [0.543421, 0.83946, 0], [0, 0, 1]],
["a3\structures_f_heli\items\luggage\plasticcase_01_medium_f.p3d", [3261.26, 3625.34, 226.865], [-0.121449, -0.992598, 0], [0, 0, 1]],
["ca\buildings\furniture\ammobednax.p3d", [3260.39, 3627.34, 226.67], [0.670229, 0.742154, 0], [0, 0, 1]],
["ca\buildings\furniture\hromada_beden_dekorativnix.p3d", [3260.1, 3626.14, 226.67], [-0.207326, -0.978272, 0], [0, 0, 1]],
["a3\props_f_exp\commercial\market\woodencrate_01_f.p3d", [3258.62, 3627.62, 227.018], [-0.0121903, 0.999926, 0], [0, 0, 1]],
["ca\structures\furniture\cases\metalcrate\metalcrate.p3d", [3263.04, 3624.05, 226.67], [-0.282708, 0.959206, 0], [0, 0, 1]],
["ca\structures_e\misc\misc_market\crates_ep1.p3d", [3262.57, 3622.05, 227.409], [0.499785, 0.866149, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3258.01, 3619.78, 227.938], [0.484646, -0.874711, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3255.89, 3625.96, 228.019], [0.139061, -0.990284, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3257.19, 3632.23, 228.019], [0.516548, 0.856258, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3272.63, 3642.15, 227.938], [-0.987246, 0.1592, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3278.88, 3640.53, 227.938], [-0.947292, 0.320371, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3261.01, 3637.28, 228.019], [0.670744, 0.741689, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3258.66, 3634.5, 230.621], [0.644358, 0.764724, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3263.36, 3639.06, 230.621], [0.793029, 0.609183, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3269.2, 3641.88, 230.621], [0.969606, 0.244672, 0], [0, 0, 1]],
["ca\misc3\wf\wf_hesco_big_10x.p3d", [3277.55, 3596.43, 227.766], [-0.634676, -0.772778, 0], [0, 0, 1]],
["ca\misc3\wf\wf_hesco_big_10x.p3d", [3289.93, 3586.93, 227.766], [-0.594725, -0.80393, 0], [0, 0, 1]],
["ca\misc3\wf\wf_hesco_big_10x.p3d", [3302.18, 3577.56, 227.766], [0.644097, 0.764944, 0], [0, 0, 1]],
["ca\misc3\wf\wf_hesco_big_10x.p3d", [3285.49, 3642.32, 228.825], [-0.130277, -0.991159, -0.0251436], [-0.189504, 0, 0.98188]],
["a3\structures_f\walls\cncbarriermedium4_f.p3d", [3336.63, 3617.88, 227.56], [-0.0807728, 0.996733, 0], [0, 0, 1]],
["a3\structures_f\walls\cncbarriermedium4_f.p3d", [3354.45, 3613.1, 227.516], [0.234642, -0.972082, 0], [0, 0, 1]],
["a3\structures_f_bootcamp\civ\sportsgrounds\tyrebarrier_01_black_f.p3d", [3350.53, 3612.22, 226.992], [0, 1, 0], [0, 0, 1]],
["a3\structures_f_bootcamp\civ\sportsgrounds\tyrebarrier_01_black_f.p3d", [3340.63, 3618.13, 226.992], [0, 1, 0], [0, 0, 1]],
["a3\signs_f\signt\arrowdesk_r_f.p3d", [3350.87, 3614.38, 226.67], [0.675474, -0.737383, 0], [0, 0, 1]],
["a3\signs_f\signt\arrowdesk_f.p3d", [3339.63, 3619.25, 226.675], [-0.0639523, -0.997953, 0.000831599], [0.0130023, 0, 0.999915]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3260.13, 3613.9, 227.938], [-0.293248, -0.956037, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3256.76, 3622.53, 230.54], [0.333334, -0.942809, 0], [0, 0, 1]],
["a3\structures_f\civ\camping\toiletbox_f.p3d", [6943.78, 1265.45, 6.62006], [-0.440299, 0.897851, 0], [0, 0, 1]],
["a3\structures_f\households\slum\cargo_house_slum_f.p3d", [6952.4, 1268.59, 5.92745], [0.309731, -0.950824, 0], [0, 0, 1]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [6945.72, 1262.98, 6.66788], [-0.962848, 0.270046, 0], [0, 0, 1]],
["cup\weapons\cup_weapons_ammoboxes\cup_ruvehicleammo.p3d", [6948.23, 1265.17, 7.00868], [0.196288, 0.980546, 0], [0, 0, 1]],
["ca\misc3\wf\wf_hesco_big_10x.p3d", [3320.85, 3636.26, 227.822], [-0.997812, 0.00580976, -0.0658558], [-0.0658569, 0, 0.997829]],
["ca\buildings2\misc_cargo\misc_cargo1b.p3d", [3266.08, 3641.21, 228.019], [0.879528, 0.475846, 0], [0, 0, 1]],
["a3\structures_f\walls\cncbarriermedium4_f.p3d", [3358.68, 3597.43, 227.516], [0.147903, -0.989002, 0], [0, 0, 1]],
["a3\structures_f\walls\cncbarriermedium4_f.p3d", [3340.7, 3606.58, 227.516], [-0.073577, 0.99729, 0], [0, 0, 1]],
["a3\structures_f_bootcamp\civ\sportsgrounds\tyrebarrier_01_black_f.p3d", [3354.82, 3597.68, 226.992], [0, 1, 0], [0, 0, 1]],
["a3\signs_f\signt\arrowdesk_r_f.p3d", [3355.65, 3598.53, 226.67], [0.324975, -0.945723, 0], [0, 0, 1]],
["a3\structures_f_bootcamp\civ\sportsgrounds\tyrebarrier_01_black_f.p3d", [3344.78, 3606.95, 226.992], [-0.126455, 0.991972, 0], [0, 0, 1]],
["a3\signs_f\signt\arrowdesk_f.p3d", [3343.58, 3607.77, 226.67], [0.0627517, -0.998029, 0], [0, 0, 1]],
["a3\structures_f\civ\lamps\lamphalogen_f.p3d", [3280.89, 3596.32, 232.652], [0.165271, -0.986248, 0], [0, 0, 1]],
["a3\structures_f_heli\items\luggage\plasticcase_01_medium_f.p3d", [3278.63, 3630.4, 227.772], [-0.971086, 0.238731, 0], [0, 0, 1]]
];

{
    private _simpleObject = createSimpleObject [_x select 0, _x select 1];
    _simpleObject setVectorDirAndUp [_x select 2, _x select 3];
    
    {
        if ((toLower _x) in _invisibleSelections) then 
        {
            _simpleObject hideSelection [_x, true];
        };
    }
    forEach (selectionNames _simpleObject);
}
forEach _simpleObjects;