/*
 * gxsim.cpp
 *
 *  Created on: 27 февр. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <resources/gxsim.h>
#include <resources/valve.h>

#define MODULE(name)    gxsim_ ## name::instantiate

namespace tamgamp_lv2
{
    using namespace faust;

    // Derived from guitarix
    #include <generated/gxsim/12at7_feed.h>
    #include <generated/gxsim/12au7_feed.h>
    #include <generated/gxsim/12ax7_feed.h>
    #include <generated/gxsim/6dj8_feed.h>
    #include <generated/gxsim/master_6v6.h>
    #include <generated/gxsim/none.h>
    #include <generated/gxsim/pre_12at7.h>
    #include <generated/gxsim/pre_12at7_master_6v6.h>
    #include <generated/gxsim/pre_12at7_pp_6v6.h>
    #include <generated/gxsim/pre_12au7.h>
    #include <generated/gxsim/pre_12au7_master6v6.h>
    #include <generated/gxsim/pre_12au7_pp_6v6.h>
    #include <generated/gxsim/pre_12ax7.h>
    #include <generated/gxsim/pre_12ax7_master_6v6.h>
    #include <generated/gxsim/pre_12ax7_pp_6v6.h>
    #include <generated/gxsim/pre_6c16.h>
    #include <generated/gxsim/pre_6dj8.h>
    #include <generated/gxsim/pre_6dj8_master_6v6.h>
    #include <generated/gxsim/pre_6dj8_pp_6v6.h>

    dsp_factory_t gxsim_dsp[] =
    {
        MODULE(none),
        MODULE(pre_12at7),
        MODULE(12at7_feed),
        MODULE(pre_12at7_master_6v6),
        MODULE(pre_12at7_pp_6v6),
        MODULE(pre_12au7),
        MODULE(12au7_feed),
        MODULE(pre_12au7_master6v6),
        MODULE(pre_12au7_pp_6v6),
        MODULE(pre_12ax7),
        MODULE(12ax7_feed),
        MODULE(pre_12ax7_master_6v6),
        MODULE(pre_12ax7_pp_6v6),
        MODULE(pre_6c16),
        MODULE(pre_6dj8),
        MODULE(6dj8_feed),
        MODULE(pre_6dj8_master_6v6),
        MODULE(pre_6dj8_pp_6v6),
        MODULE(master_6v6),
        NULL
    };

    const float gxsim_norming[] =
    {
        1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000,
        16.0410327911, 15.2909231186, 14.1502075195, 12.6637382507, 10.9797115326, 9.2852191925, 7.7288289070, 6.3884067535, 5.2826051712, 4.3957471848, 3.6974346638, 3.1533505917, 2.7308845520, 2.4020862579, 2.1446497440, 1.9414011240, 1.8607572317, 1.7940396070, 1.7384624481, 1.6918510199, 1.6524925232, 1.6190506220, 1.5904320478, 1.5657465458, 1.5442709923, 1.5254096985, 1.5086433887, 1.4935493469, 1.4797787666, 1.4670383930, 1.4551068544, 1.4438321590,
        27.2238750458, 25.1974258423, 22.9858245850, 20.6550102234, 18.2936439514, 15.9967889786, 13.8480587006, 11.9073772430, 10.2072410583, 8.7556838989, 7.5418419838, 6.5419998169, 5.7253742218, 5.0602483749, 4.5178999901, 4.0736331940, 3.8988189697, 3.7549712658, 3.6355385780, 3.5354032516, 3.4505968094, 3.3780190945, 3.3151502609, 3.2599492073, 3.2108311653, 3.1664657593, 3.1257147789, 3.0877032280, 3.0517816544, 3.0174458027, 2.9844045639, 2.9525060654,
        4.6042103767, 4.4115552902, 4.1174206734, 3.7336857319, 3.2993943691, 2.8634524345, 2.4639081955, 2.1196110249, 1.8342276812, 1.6037038565, 1.4220255613, 1.2814562321, 1.1738053560, 1.0911870003, 1.0270599127, 0.9767590165, 0.9507282972, 0.9286476970, 0.9099868536, 0.8944207430, 0.8816275001, 0.8713456988, 0.8633850813, 0.8575229049, 0.8535217047, 0.8511595130, 0.8502372503, 0.8505198956, 0.8517599702, 0.8537055254, 0.8560672402, 0.8585741520,
        33.0372161865, 31.6402759552, 29.3897075653, 26.3312511444, 22.7652111053, 19.1140232086, 15.7285642624, 12.7958850861, 10.3614454269, 8.3902683258, 6.8160190582, 5.5679426193, 4.5823545456, 3.8080346584, 3.2074463367, 2.7500503063, 2.5048577785, 2.3010590076, 2.1318652630, 1.9913893938, 1.8747397661, 1.7778334618, 1.6971844435, 1.6298826933, 1.5734976530, 1.5262089968, 1.4865642786, 1.4533916712, 1.4257578850, 1.4029116631, 1.3840930462, 1.3686777353,
        166.0037384033, 158.2682342529, 146.4915618896, 131.1410980225, 113.7378768921, 96.1976547241, 80.0426177979, 66.0718841553, 54.4778366089, 45.1027984619, 37.6435432434, 31.7609596252, 27.1334934235, 23.4852561951, 20.6012649536, 18.3274097443, 17.4724407196, 16.7727184296, 16.1968955994, 15.7204828262, 15.3245468140, 14.9939975739, 14.7163648605, 14.4819574356, 14.2829599380, 14.1119928360, 13.9628391266, 13.8307113647, 13.7114086151, 13.6013031006, 13.4976959229, 13.3986454010,
        50.9946136475, 47.2881240845, 43.2446289062, 38.9886207581, 34.6862640381, 30.5149192810, 26.6294460297, 23.1385555267, 20.0971927643, 17.5125522614, 15.3563928604, 13.5787563324, 12.1209173203, 10.9249658585, 9.9397249222, 9.1222324371, 8.7664127350, 8.4696903229, 8.2216377258, 8.0139780045, 7.8400874138, 7.6945171356, 7.5727343559, 7.4709100723, 7.3857855797, 7.3145813942, 7.2548580170, 7.2044992447, 7.1614708900, 7.1239247322, 7.0902824402, 7.0592541695,
        7.2271146774, 6.9051437378, 6.4127283096, 5.7695813179, 5.0410518646, 4.3095788956, 3.6399526596, 3.0647730827, 2.5898663998, 2.2060921192, 1.8989152908, 1.6548224688, 1.4633550644, 1.3153600693, 1.2017443180, 1.1146080494, 1.0681096315, 1.0285931826, 0.9949268103, 0.9662972689, 0.9419450760, 0.9213222265, 0.9039431810, 0.8894504905, 0.8775068521, 0.8678341508, 0.8601943254, 0.8544009328, 0.8502659798, 0.8476133943, 0.8462528586, 0.8460229635,
        21.8962993622, 20.9303302765, 19.4071121216, 17.3683700562, 15.0161895752, 12.6238718033, 10.4144515991, 8.5056085587, 6.9252076149, 5.6499547958, 4.6361546516, 3.8379192352, 3.2179107666, 2.7465648651, 2.3936254978, 2.1304860115, 1.9922857285, 1.8771636486, 1.7811949253, 1.7010731697, 1.6340439320, 1.5777918100, 1.5306133032, 1.4910371304, 1.4580075741, 1.4306334257, 1.4080826044, 1.3896844387, 1.3747760057, 1.3626570702, 1.3526129723, 1.3439701796,
        6.2899284363, 6.0230026245, 5.6131391525, 5.0762972832, 4.4676065445, 3.8570752144, 3.2998363972, 2.8238132000, 2.4343876839, 2.1242244244, 1.8809922934, 1.6916460991, 1.5444306135, 1.4296119213, 1.3395364285, 1.2683166265, 1.2361376286, 1.2093094587, 1.1869581938, 1.1683657169, 1.1529279947, 1.1401439905, 1.1295957565, 1.1209243536, 1.1138063669, 1.1079590321, 1.1031415462, 1.0991551876, 1.0958174467, 1.0929603577, 1.0904285908, 1.0880955458,
        13.4274473190, 12.4421806335, 11.3681287766, 10.2378120422, 9.0950679779, 7.9870748520, 6.9554982185, 6.0302762985, 5.2274613380, 4.5503611565, 3.9923117161, 3.5400390625, 3.1769952774, 2.8866198063, 2.6541306973, 2.4670493603, 2.3855111599, 2.3178155422, 2.2612192631, 2.2136387825, 2.1735200882, 2.1396508217, 2.1110360622, 2.0868594646, 2.0664608479, 2.0492558479, 2.0347127914, 2.0223801136, 2.0118746758, 2.0028407574, 1.9949861765, 1.9880418777,
        2.0916469097, 2.0301799774, 1.9358977079, 1.8117469549, 1.6691272259, 1.5233193636, 1.3872724771, 1.2685314417, 1.1698046923, 1.0902165174, 1.0270646811, 0.9773570895, 0.9383594394, 0.9078008533, 0.8839540482, 0.8655334115, 0.8602765203, 0.8569297791, 0.8551985025, 0.8547745347, 0.8553250432, 0.8564926386, 0.8579427600, 0.8593419194, 0.8603863120, 0.8608244061, 0.8604634404, 0.8592093587, 0.8570085168, 0.8538873792, 0.8498863578, 0.8450742960,
        16.1218242645, 15.4644403458, 14.3934602737, 12.9276294708, 11.2111768723, 9.4506797791, 7.8195395470, 6.4111504555, 5.2487893105, 4.3154358864, 3.5808184147, 3.0158433914, 2.5906989574, 2.2739818096, 2.0374023914, 1.8588449955, 1.7659711838, 1.6882034540, 1.6230405569, 1.5683647394, 1.5225977898, 1.4843297005, 1.4525206089, 1.4263170958, 1.4049855471, 1.3878633976, 1.3742845058, 1.3634104729, 1.3544058800, 1.3464572430, 1.3390023708, 1.3317350149,
        19.3169898987, 18.4107952118, 17.0341491699, 15.2414512634, 13.2110214233, 11.1674737930, 9.2888393402, 7.6681470871, 6.3274855614, 5.2482547760, 4.3948960304, 3.7274940014, 3.2079281807, 2.8030624390, 2.4859809875, 2.2355961800, 2.1378548145, 2.0570316315, 1.9896881580, 1.9331483841, 1.8853034973, 1.8445097208, 1.8094203472, 1.7789453268, 1.7522171736, 1.7285289764, 1.7072762251, 1.6879851818, 1.6702787876, 1.6538509130, 1.6384799480, 1.6240183115,
        3.9491264820, 3.7734980583, 3.5072710514, 3.1617057323, 2.7718744278, 2.3813872337, 2.0244433880, 1.7185784578, 1.4674577713, 1.2666734457, 1.1084064245, 0.9841923714, 0.8863308430, 0.8084623814, 0.7456894517, 0.6943768263, 0.6714356542, 0.6521624923, 0.6360204220, 0.6225551367, 0.6113750935, 0.6021435857, 0.5945687890, 0.5883911252, 0.5833777785, 0.5793215632, 0.5760335922, 0.5733461380, 0.5711036325, 0.5691663027, 0.5674097538, 0.5657337904,
        15.7277173996, 14.5739202499, 13.3156051636, 11.9912223816, 10.6521511078, 9.3532829285, 8.1427278519, 7.0547275543, 6.1073865891, 5.3042454720, 4.6376252174, 4.0924830437, 3.6502149105, 3.2922005653, 3.0018212795, 2.7649776936, 2.6627931595, 2.5779571533, 2.5071814060, 2.4479055405, 2.3981599808, 2.3563814163, 2.3212912083, 2.2918267250, 2.2671282291, 2.2464525700, 2.2291338444, 2.2146031857, 2.2023630142, 2.1919476986, 2.1829659939, 2.1750688553,
        2.5897810459, 2.5001223087, 2.3641400337, 2.1868598461, 1.9851458073, 1.7806673050, 1.5914701223, 1.4276078939, 1.2922186852, 1.1842011213, 1.0997899771, 1.0342843533, 0.9831710458, 0.9430438876, 0.9114149809, 0.8864726424, 0.8764322996, 0.8687198758, 0.8631072640, 0.8593989015, 0.8573434353, 0.8566486835, 0.8569783568, 0.8579612374, 0.8592692018, 0.8605840802, 0.8616072536, 0.8621075153, 0.8619079590, 0.8608760834, 0.8589213490, 0.8559991717,
        19.2467651367, 18.4157142639, 17.0941734314, 15.3149461746, 13.2541093826, 11.1534957886, 9.2120275497, 7.5353116989, 6.1487531662, 5.0318508148, 4.1461663246, 3.4538829327, 2.9238858223, 2.5255105495, 2.2283933163, 2.0056715012, 1.8887825012, 1.7911636829, 1.7095457315, 1.6412092447, 1.5838367939, 1.5357075930, 1.4953312874, 1.4616606236, 1.4337383509, 1.4107756615, 1.3921324015, 1.3771039248, 1.3650085926, 1.3550965786, 1.3466469049, 1.3390930891,
        2.8223280907, 2.7744650841, 2.6564986706, 2.4591789246, 2.2007772923, 1.9188128710, 1.6501474380, 1.4188547134, 1.2355451584, 1.0981969833, 0.9977420568, 0.9245069027, 0.8711091876, 0.8320950270, 0.8036363125, 0.7826744914, 0.7746047974, 0.7681306005, 0.7628007531, 0.7581547499, 0.7540639043, 0.7500287890, 0.7459471822, 0.7417491078, 0.7373977304, 0.7328261733, 0.7282327414, 0.7237097621, 0.7190947533, 0.7146816254, 0.7105948925, 0.7066421509
    };
}



