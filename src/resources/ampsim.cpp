/*
 * ampsim.cpp
 *
 *  Created on: 18 янв. 2020 г.
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

#include <resources/ampsim.h>
#include <resources/valve.h>

#define MODULE(name)    ampsim_ ## name::instantiate

namespace tamgamp_lv2
{
    using namespace faust;

    // Simulated using DK Builder
    #include <generated/ampsim/none.h>
    #include <generated/ampsim/mesa_dc3_rhythm.h>
    #include <generated/ampsim/mesa_dc3_lead.h>
    #include <generated/ampsim/marshall_jcm800hi.h>
    #include <generated/ampsim/marshall_jcm800lo.h>
    #include <generated/ampsim/mesa_dual_rect_orange.h>
    #include <generated/ampsim/mesa_dual_rect_red.h>
    #include <generated/ampsim/fender_princeton.h>
    #include <generated/ampsim/fender_twin_reverb_normal.h>
    #include <generated/ampsim/fender_twin_reverb_vibrato.h>
    #include <generated/ampsim/vox_ac30_normal.h>
    #include <generated/ampsim/vox_ac30_brilliant.h>
    #include <generated/ampsim/peavey_5150ii_crunch.h>
    #include <generated/ampsim/peavey_5150ii_lead.h>

    dsp_factory_t ampsim_dsp[] =
    {
        MODULE(none),
        MODULE(mesa_dc3_rhythm),
        MODULE(mesa_dc3_lead),
        MODULE(marshall_jcm800hi),
        MODULE(marshall_jcm800lo),
        MODULE(mesa_dual_rect_orange),
        MODULE(mesa_dual_rect_red),
        MODULE(fender_princeton),
        MODULE(fender_twin_reverb_normal),
        MODULE(fender_twin_reverb_vibrato),
        MODULE(vox_ac30_normal),
        MODULE(vox_ac30_brilliant),
        MODULE(peavey_5150ii_crunch),
        MODULE(peavey_5150ii_lead),
        NULL
    };

    const float ampsim_norming[] =
    {
        1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000, 1.0000000000,
        2.2180626392, 1.0872400999, 0.7448133826, 0.5769425631, 0.4760015905, 0.4079809189, 0.3587049842, 0.3211914003, 0.2915897667, 0.2675900459, 0.2477147579, 0.2309694588, 0.2166557461, 0.2042626739, 0.1934053004, 0.1837844998, 0.1751624942, 0.1673429310, 0.1601621658, 0.1534777284, 0.1471621990, 0.1411005408, 0.1351852864, 0.1293110847, 0.1233722940, 0.1172643304, 0.1108843163, 0.1041270718, 0.0968973786, 0.0891318470, 0.0808642432, 0.0725746304,
        0.9888177514, 0.5937648416, 0.4548042119, 0.3837075830, 0.3402505815, 0.3107162714, 0.2892007828, 0.2727884650, 0.2598533630, 0.2494262755, 0.2408783287, 0.2337731421, 0.2277993560, 0.2227144092, 0.2183327675, 0.2145205140, 0.2111811489, 0.2082512230, 0.2056866735, 0.2034535408, 0.2015227079, 0.1998672932, 0.1984593719, 0.1972661614, 0.1962527782, 0.1953949481, 0.1946728975, 0.1940659881, 0.1935582012, 0.1931332797, 0.1927780211, 0.1924820095,
        0.2615242600, 0.1680445969, 0.1419474781, 0.1320325285, 0.1274824440, 0.1250512600, 0.1235996261, 0.1226892471, 0.1221198067, 0.1218305230, 0.1216415837, 0.1215543747, 0.1215698794, 0.1216582209, 0.1217759699, 0.1219512224, 0.1221299693, 0.1223032698, 0.1225096881, 0.1227163598, 0.1229575351, 0.1231531277, 0.1234006062, 0.1236349344, 0.1238381490, 0.1240934134, 0.1243298799, 0.1246188506, 0.1249718592, 0.1253668964, 0.1257966608, 0.1259740889,
        0.7418136001, 0.4404172301, 0.3213648200, 0.2541144490, 0.2104322165, 0.1801208854, 0.1582800746, 0.1420872808, 0.1298087686, 0.1203317940, 0.1129106134, 0.1070285589, 0.1023096070, 0.0984775424, 0.0953369588, 0.0927411914, 0.0905814469, 0.0887734070, 0.0872520134, 0.0859671384, 0.0848751664, 0.0839474872, 0.0831576809, 0.0824875012, 0.0819187388, 0.0814397782, 0.0810392052, 0.0807067826, 0.0804321840, 0.0801884085, 0.0798598230, 0.0790730119,
        0.7536893487, 0.6330562234, 0.5958310962, 0.5788345933, 0.5695716739, 0.5639453530, 0.5602517128, 0.5576847196, 0.5558127165, 0.5543977618, 0.5532986522, 0.5524264574, 0.5516980886, 0.5510656238, 0.5504757166, 0.5499057174, 0.5493619442, 0.5487605333, 0.5481646657, 0.5475832820, 0.5468897223, 0.5461116433, 0.5453665853, 0.5444695950, 0.5434791446, 0.5423631072, 0.5411674976, 0.5397385955, 0.5381149650, 0.5363699794, 0.5349801779, 0.5345005393,
        0.5854488015, 0.4859512746, 0.4596460760, 0.4486874640, 0.4430651367, 0.4398461282, 0.4378585517, 0.4367038012, 0.4360551536, 0.4359038770, 0.4357212782, 0.4357691705, 0.4361508191, 0.4365439415, 0.4370864034, 0.4377513230, 0.4383253753, 0.4391932786, 0.4398071170, 0.4405093193, 0.4412986338, 0.4419083893, 0.4427633882, 0.4434800446, 0.4442277253, 0.4449123740, 0.4457814097, 0.4467603862, 0.4477423429, 0.4489898682, 0.4502777457, 0.4507282972,
        16.8052616119, 8.8018951416, 5.7879581451, 4.2159647942, 3.2559971809, 2.6124315262, 2.1537799835, 1.8128317595, 1.5518392324, 1.3479934931, 1.1864203215, 1.0566753149, 0.9510859251, 0.8639753461, 0.7912477851, 0.7299665213, 0.6779524684, 0.6335495710, 0.5954787135, 0.5627004504, 0.5343595147, 0.5097352266, 0.4882244170, 0.4693240225, 0.4525996149, 0.4376895726, 0.4242978096, 0.4121799469, 0.4011521637, 0.3910835683, 0.3818883002, 0.3735037148,
        10.5442676544, 5.0460486412, 3.2193200588, 2.3100855350, 1.7677748203, 1.4088926315, 1.1547998190, 0.9661789536, 0.8211836219, 0.7067047954, 0.6143985391, 0.5387017131, 0.4757603109, 0.4228217006, 0.3778655231, 0.3393765688, 0.3061946929, 0.2774180174, 0.2523336709, 0.2303714007, 0.2110691071, 0.1940492839, 0.1789994836, 0.1656597555, 0.1538118422, 0.1432710886, 0.1338805407, 0.1255057901, 0.1180313826, 0.1113572717, 0.1053968221, 0.1000744402,
        43.0289573669, 21.0151576996, 13.4892883301, 9.7650194168, 7.5700206757, 6.1250753403, 5.1023306847, 4.3416705132, 3.7548000813, 3.2887606621, 2.9101059437, 2.5966386795, 2.3329298496, 2.1080412865, 1.9139844179, 1.7447855473, 1.5959225893, 1.4641157389, 1.3473501205, 1.2443627119, 1.1541382074, 1.0757421255, 1.0083339214, 0.9505839348, 0.9013282061, 0.8595380783, 0.8238282204, 0.7929986119, 0.7659170032, 0.7414470315, 0.7186248302, 0.6970258355,
        2.1539089680, 1.0334194899, 0.6614985466, 0.4767672122, 0.3669691384, 0.2947022319, 0.2439572960, 0.2067520320, 0.1786725223, 0.1570805758, 0.1402867138, 0.1271317452, 0.1167741269, 0.1085836664, 0.1020831093, 0.0969104618, 0.0927907377, 0.0895144194, 0.0869213492, 0.0848884583, 0.0833206847, 0.0821421668, 0.0812905803, 0.0807136744, 0.0803676546, 0.0802119002, 0.0802143589, 0.0803453028, 0.0805801228, 0.0808982998, 0.0812811032, 0.0817155018,
        1.6865375042, 0.9161770940, 0.6026158333, 0.4363528490, 0.3354394436, 0.2690201700, 0.2229805291, 0.1899448335, 0.1656565368, 0.1474561393, 0.1335876733, 0.1228515059, 0.1144128367, 0.1076844484, 0.1022484675, 0.0978039950, 0.0941312984, 0.0910660475, 0.0884824395, 0.0862834081, 0.0843925476, 0.0827505738, 0.0813110098, 0.0800370350, 0.0789000839, 0.0778789297, 0.0769573525, 0.0761251822, 0.0753739327, 0.0746970847, 0.0740903467, 0.0735570416,
        0.1983273178, 0.1925725937, 0.1915028989, 0.1916191131, 0.1920308918, 0.1927099973, 0.1934309602, 0.1941968650, 0.1949281245, 0.1955896318, 0.1962021440, 0.1968046874, 0.1973364949, 0.1979237050, 0.1983591765, 0.1987719536, 0.1992014199, 0.1995617449, 0.1999144107, 0.2001602799, 0.2004189044, 0.2006480843, 0.2009033263, 0.2010076344, 0.2011509836, 0.2013092935, 0.2014737129, 0.2016158253, 0.2017354369, 0.2018058598, 0.2018933594, 0.2025201619,
        0.3047826886, 0.2648236156, 0.2531969249, 0.2478669435, 0.2448812425, 0.2430451214, 0.2418813407, 0.2411671877, 0.2406960726, 0.2404698133, 0.2404086292, 0.2404829264, 0.2406484634, 0.2407827526, 0.2411351204, 0.2414602786, 0.2418037057, 0.2422104180, 0.2426451594, 0.2431395650, 0.2436546385, 0.2442533225, 0.2447513044, 0.2453264743, 0.2459146827, 0.2464866340, 0.2470885068, 0.2477051467, 0.2482542843, 0.2490466982, 0.2498849332, 0.2503454685
    };
}