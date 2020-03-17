
// s08_stage7_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  4.778583
 // --table_op  1.000000

struct tables08_stage7 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables08_stage7_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables08_stage7&() const { return *(tables08_stage7*)this; }
};

static tables08_stage7_imp<2048> s08_stage7_table __rt_data = {
	0,0.833333,204.7,2048, {
	0.000000000000,0.000997800054,0.001994647550,0.002990543285,0.003985488057,
	0.004979482665,0.005972527907,0.006964624577,0.007955773473,0.008945975390,
	0.009935231122,0.010923541464,0.011910907208,0.012897329147,0.013882808073,
	0.014867344777,0.015850940051,0.016833594684,0.017815309466,0.018796085185,
	0.019775922629,0.020754822586,0.021732785843,0.022709813185,0.023685905399,
	0.024661063269,0.025635287579,0.026608579113,0.027580938653,0.028552366983,
	0.029522864883,0.030492433135,0.031461072519,0.032428783814,0.033395567800,
	0.034361425255,0.035326356956,0.036290363682,0.037253446208,0.038215605310,
	0.039176841764,0.040137156344,0.041096549823,0.042055022976,0.043012576575,
	0.043969211391,0.044924928197,0.045879727763,0.046833610859,0.047786578254,
	0.048738630718,0.049689769019,0.050639993923,0.051589306199,0.052537706612,
	0.053485195929,0.054431774913,0.055377444330,0.056322204944,0.057266057517,
	0.058209002812,0.059151041591,0.060092174615,0.061032402646,0.061971726442,
	0.062910146763,0.063847664369,0.064784280016,0.065719994464,0.066654808468,
	0.067588722785,0.068521738171,0.069453855380,0.070385075167,0.071315398286,
	0.072244825489,0.073173357531,0.074100995161,0.075027739133,0.075953590195,
	0.076878549100,0.077802616595,0.078725793430,0.079648080352,0.080569478110,
	0.081489987451,0.082409609121,0.083328343865,0.084246192429,0.085163155557,
	0.086079233994,0.086994428482,0.087908739764,0.088822168582,0.089734715678,
	0.090646381793,0.091557167667,0.092467074038,0.093376101648,0.094284251233,
	0.095191523532,0.096097919281,0.097003439218,0.097908084079,0.098811854598,
	0.099714751511,0.100616775551,0.101517927453,0.102418207949,0.103317617772,
	0.104216157653,0.105113828323,0.106010630513,0.106906564954,0.107801632374,
	0.108695833501,0.109589169065,0.110481639793,0.111373246411,0.112263989646,
	0.113153870224,0.114042888869,0.114931046307,0.115818343262,0.116704780456,
	0.117590358613,0.118475078454,0.119358940701,0.120241946076,0.121124095298,
	0.122005389087,0.122885828163,0.123765413243,0.124644145047,0.125522024292,
	0.126399051694,0.127275227969,0.128150553833,0.129025030002,0.129898657190,
	0.130771436110,0.131643367475,0.132514452000,0.133384690395,0.134254083372,
	0.135122631643,0.135990335916,0.136857196904,0.137723215313,0.138588391854,
	0.139452727233,0.140316222159,0.141178877339,0.142040693477,0.142901671282,
	0.143761811456,0.144621114705,0.145479581733,0.146337213244,0.147194009939,
	0.148049972521,0.148905101692,0.149759398153,0.150612862604,0.151465495746,
	0.152317298277,0.153168270896,0.154018414301,0.154867729190,0.155716216260,
	0.156563876208,0.157410709729,0.158256717518,0.159101900270,0.159946258680,
	0.160789793441,0.161632505246,0.162474394787,0.163315462757,0.164155709845,
	0.164995136744,0.165833744144,0.166671532733,0.167508503202,0.168344656237,
	0.169179992528,0.170014512762,0.170848217625,0.171681107803,0.172513183983,
	0.173344446848,0.174174897084,0.175004535375,0.175833362404,0.176661378853,
	0.177488585405,0.178314982742,0.179140571544,0.179965352493,0.180789326268,
	0.181612493548,0.182434855013,0.183256411340,0.184077163208,0.184897111294,
	0.185716256274,0.186534598824,0.187352139621,0.188168879338,0.188984818650,
	0.189799958231,0.190614298755,0.191427840894,0.192240585319,0.193052532704,
	0.193863683719,0.194674039034,0.195483599320,0.196292365245,0.197100337479,
	0.197907516690,0.198713903545,0.199519498713,0.200324302859,0.201128316650,
	0.201931540751,0.202733975827,0.203535622543,0.204336481563,0.205136553549,
	0.205935839166,0.206734339074,0.207532053936,0.208328984413,0.209125131166,
	0.209920494855,0.210715076138,0.211508875676,0.212301894127,0.213094132148,
	0.213885590397,0.214676269531,0.215466170206,0.216255293078,0.217043638802,
	0.217831208032,0.218618001424,0.219404019630,0.220189263303,0.220973733096,
	0.221757429662,0.222540353650,0.223322505714,0.224103886501,0.224884496663,
	0.225664336849,0.226443407708,0.227221709887,0.227999244035,0.228776010798,
	0.229552010824,0.230327244757,0.231101713245,0.231875416932,0.232648356461,
	0.233420532479,0.234191945627,0.234962596548,0.235732485886,0.236501614281,
	0.237269982376,0.238037590810,0.238804440225,0.239570531259,0.240335864553,
	0.241100440744,0.241864260471,0.242627324372,0.243389633083,0.244151187242,
	0.244911987484,0.245672034444,0.246431328758,0.247189871061,0.247947661985,
	0.248704702165,0.249460992233,0.250216532823,0.250971324565,0.251725368090,
	0.252478664031,0.253231213017,0.253983015678,0.254734072643,0.255484384540,
	0.256233951999,0.256982775647,0.257730856110,0.258478194017,0.259224789992,
	0.259970644661,0.260715758650,0.261460132583,0.262203767084,0.262946662778,
	0.263688820286,0.264430240231,0.265170923236,0.265910869922,0.266650080909,
	0.267388556819,0.268126298272,0.268863305886,0.269599580281,0.270335122076,
	0.271069931888,0.271804010334,0.272537358032,0.273269975598,0.274001863648,
	0.274733022797,0.275463453660,0.276193156852,0.276922132987,0.277650382677,
	0.278377906535,0.279104705175,0.279830779208,0.280556129244,0.281280755896,
	0.282004659773,0.282727841486,0.283450301643,0.284172040853,0.284893059725,
	0.285613358867,0.286332938885,0.287051800387,0.287769943979,0.288487370267,
	0.289204079856,0.289920073351,0.290635351356,0.291349914475,0.292063763312,
	0.292776898469,0.293489320549,0.294201030153,0.294912027883,0.295622314340,
	0.296331890123,0.297040755834,0.297748912070,0.298456359432,0.299163098517,
	0.299869129923,0.300574454248,0.301279072089,0.301982984042,0.302686190702,
	0.303388692666,0.304090490528,0.304791584883,0.305491976324,0.306191665445,
	0.306890652840,0.307588939100,0.308286524817,0.308983410584,0.309679596990,
	0.310375084627,0.311069874084,0.311763965952,0.312457360819,0.313150059273,
	0.313842061904,0.314533369297,0.315223982042,0.315913900723,0.316603125928,
	0.317291658242,0.317979498250,0.318666646538,0.319353103688,0.320038870285,
	0.320723946912,0.321408334152,0.322092032588,0.322775042800,0.323457365371,
	0.324139000881,0.324819949911,0.325500213040,0.326179790848,0.326858683914,
	0.327536892816,0.328214418133,0.328891260442,0.329567420319,0.330242898342,
	0.330917695086,0.331591811127,0.332265247041,0.332938003401,0.333610080783,
	0.334281479760,0.334952200904,0.335622244789,0.336291611988,0.336960303071,
	0.337628318611,0.338295659177,0.338962325342,0.339628317674,0.340293636742,
	0.340958283117,0.341622257366,0.342285560058,0.342948191760,0.343610153039,
	0.344271444462,0.344932066595,0.345592020004,0.346251305254,0.346909922909,
	0.347567873535,0.348225157695,0.348881775952,0.349537728870,0.350193017010,
	0.350847640936,0.351501601207,0.352154898386,0.352807533033,0.353459505708,
	0.354110816970,0.354761467380,0.355411457496,0.356060787875,0.356709459077,
	0.357357471657,0.358004826174,0.358651523184,0.359297563242,0.359942946905,
	0.360587674726,0.361231747262,0.361875165066,0.362517928691,0.363160038691,
	0.363801495620,0.364442300028,0.365082452468,0.365721953492,0.366360803650,
	0.366999003493,0.367636553572,0.368273454434,0.368909706631,0.369545310710,
	0.370180267220,0.370814576708,0.371448239722,0.372081256809,0.372713628515,
	0.373345355386,0.373976437968,0.374606876805,0.375236672443,0.375865825426,
	0.376494336297,0.377122205600,0.377749433877,0.378376021672,0.379001969525,
	0.379627277978,0.380251947573,0.380875978850,0.381499372349,0.382122128610,
	0.382744248172,0.383365731575,0.383986579355,0.384606792052,0.385226370203,
	0.385845314345,0.386463625014,0.387081302747,0.387698348079,0.388314761545,
	0.388930543682,0.389545695022,0.390160216100,0.390774107449,0.391387369603,
	0.392000003094,0.392612008454,0.393223386215,0.393834136908,0.394444261065,
	0.395053759215,0.395662631889,0.396270879616,0.396878502925,0.397485502346,
	0.398091878405,0.398697631632,0.399302762553,0.399907271696,0.400511159587,
	0.401114426752,0.401717073716,0.402319101005,0.402920509144,0.403521298657,
	0.404121470068,0.404721023901,0.405319960677,0.405918280921,0.406515985154,
	0.407113073898,0.407709547675,0.408305407004,0.408900652407,0.409495284404,
	0.410089303515,0.410682710257,0.411275505151,0.411867688715,0.412459261466,
	0.413050223922,0.413640576599,0.414230320016,0.414819454687,0.415407981128,
	0.415995899856,0.416583211384,0.417169916227,0.417756014900,0.418341507915,
	0.418926395787,0.419510679027,0.420094358149,0.420677433663,0.421259906083,
	0.421841775918,0.422423043680,0.423003709878,0.423583775023,0.424163239624,
	0.424742104190,0.425320369229,0.425898035250,0.426475102760,0.427051572267,
	0.427627444278,0.428202719299,0.428777397835,0.429351480394,0.429924967479,
	0.430497859596,0.431070157249,0.431641860942,0.432212971179,0.432783488463,
	0.433353413296,0.433922746181,0.434491487620,0.435059638114,0.435627198164,
	0.436194168271,0.436760548935,0.437326340656,0.437891543933,0.438456159266,
	0.439020187153,0.439583628091,0.440146482580,0.440708751116,0.441270434196,
	0.441831532317,0.442392045974,0.442951975664,0.443511321882,0.444070085123,
	0.444628265881,0.445185864650,0.445742881924,0.446299318196,0.446855173960,
	0.447410449707,0.447965145929,0.448519263119,0.449072801767,0.449625762364,
	0.450178145401,0.450729951368,0.451281180754,0.451831834048,0.452381911740,
	0.452931414317,0.453480342268,0.454028696081,0.454576476241,0.455123683237,
	0.455670317555,0.456216379680,0.456761870099,0.457306789296,0.457851137755,
	0.458394915963,0.458938124402,0.459480763556,0.460022833908,0.460564335942,
	0.461105270138,0.461645636980,0.462185436950,0.462724670527,0.463263338193,
	0.463801440429,0.464338977714,0.464875950528,0.465412359350,0.465948204659,
	0.466483486934,0.467018206652,0.467552364291,0.468085960328,0.468618995241,
	0.469151469505,0.469683383596,0.470214737991,0.470745533164,0.471275769591,
	0.471805447745,0.472334568102,0.472863131134,0.473391137315,0.473918587118,
	0.474445481015,0.474971819479,0.475497602981,0.476022831993,0.476547506985,
	0.477071628429,0.477595196793,0.478118212549,0.478640676166,0.479162588112,
	0.479683948856,0.480204758867,0.480725018611,0.481244728558,0.481763889174,
	0.482282500925,0.482800564278,0.483318079699,0.483835047653,0.484351468606,
	0.484867343022,0.485382671366,0.485897454101,0.486411691692,0.486925384602,
	0.487438533292,0.487951138227,0.488463199868,0.488974718677,0.489485695115,
	0.489996129642,0.490506022721,0.491015374810,0.491524186370,0.492032457859,
	0.492540189738,0.493047382465,0.493554036498,0.494060152295,0.494565730313,
	0.495070771010,0.495575274843,0.496079242267,0.496582673740,0.497085569716,
	0.497587930651,0.498089756999,0.498591049216,0.499091807755,0.499592033071,
	0.500091725616,0.500590885843,0.501089514206,0.501587611157,0.502085177147,
	0.502582212628,0.503078718051,0.503574693867,0.504070140527,0.504565058479,
	0.505059448175,0.505553310063,0.506046644593,0.506539452212,0.507031733369,
	0.507523488513,0.508014718089,0.508505422546,0.508995602330,0.509485257887,
	0.509974389663,0.510462998105,0.510951083657,0.511438646764,0.511925687870,
	0.512412207420,0.512898205857,0.513383683626,0.513868641168,0.514353078927,
	0.514836997344,0.515320396862,0.515803277923,0.516285640967,0.516767486436,
	0.517248814769,0.517729626407,0.518209921791,0.518689701358,0.519168965548,
	0.519647714800,0.520125949552,0.520603670242,0.521080877307,0.521557571186,
	0.522033752314,0.522509421128,0.522984578064,0.523459223559,0.523933358046,
	0.524406981962,0.524880095742,0.525352699818,0.525824794627,0.526296380600,
	0.526767458172,0.527238027774,0.527708089841,0.528177644803,0.528646693093,
	0.529115235143,0.529583271382,0.530050802243,0.530517828155,0.530984349549,
	0.531450366854,0.531915880499,0.532380890914,0.532845398527,0.533309403767,
	0.533772907061,0.534235908836,0.534698409521,0.535160409542,0.535621909325,
	0.536082909296,0.536543409882,0.537003411508,0.537462914599,0.537921919579,
	0.538380426874,0.538838436906,0.539295950101,0.539752966880,0.540209487668,
	0.540665512886,0.541121042958,0.541576078304,0.542030619347,0.542484666508,
	0.542938220208,0.543391280866,0.543843848905,0.544295924742,0.544747508799,
	0.545198601494,0.545649203245,0.546099314472,0.546548935592,0.546998067023,
	0.547446709183,0.547894862489,0.548342527357,0.548789704204,0.549236393446,
	0.549682595498,0.550128310777,0.550573539697,0.551018282672,0.551462540117,
	0.551906312447,0.552349600074,0.552792403412,0.553234722874,0.553676558873,
	0.554117911820,0.554558782129,0.554999170210,0.555439076474,0.555878501333,
	0.556317445198,0.556755908478,0.557193891583,0.557631394924,0.558068418908,
	0.558504963946,0.558941030445,0.559376618814,0.559811729461,0.560246362793,
	0.560680519218,0.561114199142,0.561547402972,0.561980131114,0.562412383974,
	0.562844161958,0.563275465470,0.563706294916,0.564136650699,0.564566533226,
	0.564995942898,0.565424880120,0.565853345294,0.566281338824,0.566708861113,
	0.567135912562,0.567562493573,0.567988604548,0.568414245887,0.568839417993,
	0.569264121265,0.569688356103,0.570112122908,0.570535422079,0.570958254015,
	0.571380619115,0.571802517778,0.572223950401,0.572644917383,0.573065419121,
	0.573485456013,0.573905028455,0.574324136844,0.574742781576,0.575160963047,
	0.575578681653,0.575995937789,0.576412731850,0.576829064230,0.577244935324,
	0.577660345526,0.578075295229,0.578489784827,0.578903814713,0.579317385279,
	0.579730496918,0.580143150021,0.580555344980,0.580967082188,0.581378362034,
	0.581789184910,0.582199551205,0.582609461310,0.583018915615,0.583427914510,
	0.583836458382,0.584244547621,0.584652182616,0.585059363755,0.585466091424,
	0.585872366013,0.586278187908,0.586683557496,0.587088475163,0.587492941296,
	0.587896956280,0.588300520502,0.588703634346,0.589106298197,0.589508512441,
	0.589910277460,0.590311593640,0.590712461364,0.591112881015,0.591512852977,
	0.591912377631,0.592311455361,0.592710086549,0.593108271576,0.593506010824,
	0.593903304673,0.594300153506,0.594696557701,0.595092517640,0.595488033702,
	0.595883106268,0.596277735715,0.596671922423,0.597065666771,0.597458969138,
	0.597851829900,0.598244249436,0.598636228123,0.599027766338,0.599418864458,
	0.599809522859,0.600199741918,0.600589522010,0.600978863511,0.601367766795,
	0.601756232239,0.602144260216,0.602531851101,0.602919005268,0.603305723089,
	0.603692004940,0.604077851192,0.604463262219,0.604848238392,0.605232780084,
	0.605616887667,0.606000561513,0.606383801991,0.606766609474,0.607148984332,
	0.607530926935,0.607912437653,0.608293516856,0.608674164912,0.609054382192,
	0.609434169064,0.609813525896,0.610192453056,0.610570950913,0.610949019833,
	0.611326660184,0.611703872333,0.612080656647,0.612457013491,0.612832943232,
	0.613208446236,0.613583522867,0.613958173491,0.614332398473,0.614706198178,
	0.615079572968,0.615452523209,0.615825049264,0.616197151496,0.616568830268,
	0.616940085943,0.617310918883,0.617681329451,0.618051318007,0.618420884915,
	0.618790030534,0.619158755225,0.619527059350,0.619894943268,0.620262407340,
	0.620629451925,0.620996077383,0.621362284072,0.621728072352,0.622093442581,
	0.622458395117,0.622822930319,0.623187048543,0.623550750147,0.623914035488,
	0.624276904923,0.624639358809,0.625001397501,0.625363021355,0.625724230727,
	0.626085025972,0.626445407445,0.626805375501,0.627164930493,0.627524072778,
	0.627882802707,0.628241120634,0.628599026913,0.628956521897,0.629313605938,
	0.629670279389,0.630026542601,0.630382395927,0.630737839717,0.631092874323,
	0.631447500097,0.631801717387,0.632155526545,0.632508927921,0.632861921865,
	0.633214508725,0.633566688852,0.633918462593,0.634269830298,0.634620792314,
	0.634971348990,0.635321500673,0.635671247712,0.636020590452,0.636369529240,
	0.636718064425,0.637066196350,0.637413925364,0.637761251810,0.638108176035,
	0.638454698384,0.638800819201,0.639146538832,0.639491857620,0.639836775909,
	0.640181294043,0.640525412366,0.640869131220,0.641212450949,0.641555371894,
	0.641897894399,0.642240018805,0.642581745454,0.642923074688,0.643264006847,
	0.643604542272,0.643944681304,0.644284424284,0.644623771550,0.644962723444,
	0.645301280304,0.645639442470,0.645977210280,0.646314584073,0.646651564188,
	0.646988150962,0.647324344733,0.647660145839,0.647995554618,0.648330571405,
	0.648665196537,0.648999430351,0.649333273184,0.649666725370,0.649999787246,
	0.650332459146,0.650664741406,0.650996634360,0.651328138343,0.651659253688,
	0.651989980731,0.652320319804,0.652650271240,0.652979835374,0.653309012537,
	0.653637803062,0.653966207281,0.654294225526,0.654621858129,0.654949105422,
	0.655275967735,0.655602445399,0.655928538745,0.656254248103,0.656579573804,
	0.656904516176,0.657229075550,0.657553252254,0.657877046618,0.658200458970,
	0.658523489638,0.658846138952,0.659168407238,0.659490294824,0.659811802038,
	0.660132929206,0.660453676655,0.660774044713,0.661094033704,0.661413643955,
	0.661732875792,0.662051729540,0.662370205525,0.662688304070,0.663006025501,
	0.663323370143,0.663640338318,0.663956930351,0.664273146566,0.664588987286,
	0.664904452833,0.665219543531,0.665534259701,0.665848601667,0.666162569751,
	0.666476164272,0.666789385554,0.667102233918,0.667414709683,0.667726813171,
	0.668038544703,0.668349904597,0.668660893175,0.668971510755,0.669281757657,
	0.669591634200,0.669901140702,0.670210277483,0.670519044860,0.670827443151,
	0.671135472674,0.671443133747,0.671750426686,0.672057351808,0.672363909431,
	0.672670099870,0.672975923442,0.673281380462,0.673586471247,0.673891196111,
	0.674195555369,0.674499549337,0.674803178329,0.675106442659,0.675409342641,
	0.675711878589,0.676014050817,0.676315859637,0.676617305363,0.676918388308,
	0.677219108784,0.677519467103,0.677819463577,0.678119098518,0.678418372237,
	0.678717285046,0.679015837255,0.679314029176,0.679611861118,0.679909333392,
	0.680206446307,0.680503200174,0.680799595301,0.681095631998,0.681391310573,
	0.681686631336,0.681981594595,0.682276200657,0.682570449831,0.682864342424,
	0.683157878744,0.683451059097,0.683743883791,0.684036353132,0.684328467426,
	0.684620226980,0.684911632099,0.685202683089,0.685493380255,0.685783723902,
	0.686073714336,0.686363351860,0.686652636779,0.686941569397,0.687230150017,
	0.687518378945,0.687806256481,0.688093782931,0.688380958596,0.688667783779,
	0.688954258782,0.689240383907,0.689526159457,0.689811585733,0.690096663035,
	0.690381391666,0.690665771926,0.690949804115,0.691233488533,0.691516825482,
	0.691799815260,0.692082458167,0.692364754502,0.692646704565,0.692928308655,
	0.693209567069,0.693490480107,0.693771048065,0.694051271243,0.694331149938,
	0.694610684446,0.694889875066,0.695168722093,0.695447225825,0.695725386558,
	0.696003204588,0.696280680210,0.696557813721,0.696834605416,0.697111055590,
	0.697387164537,0.697662932553,0.697938359932,0.698213446968,0.698488193954,
	0.698762601185,0.699036668954,0.699310397555,0.699583787279,0.699856838420,
	0.700129551270,0.700401926121,0.700673963266,0.700945662996,0.701217025602,
	0.701488051376,0.701758740609,0.702029093592,0.702299110614,0.702568791967,
	0.702838137940,0.703107148823,0.703375824906,0.703644166478,0.703912173828,
	0.704179847244,0.704447187017,0.704714193433,0.704980866781,0.705247207349,
	0.705513215424,0.705778891294,0.706044235247,0.706309247568,0.706573928545,
	0.706838278464,0.707102297611,0.707365986273,0.707629344734,0.707892373281,
	0.708155072199,0.708417441773,0.708679482287,0.708941194026,0.709202577275,
	0.709463632318,0.709724359438,0.709984758919,0.710244831044,0.710504576097,
	0.710763994361,0.711023086117,0.711281851649,0.711540291239,0.711798405169,
	0.712056193720,0.712313657175,0.712570795813,0.712827609917,0.713084099767,
	0.713340265644,0.713596107828,0.713851626599,0.714106822237,0.714361695022,
	0.714616245233,0.714870473149,0.715124379050,0.715377963213,0.715631225918,
	0.715884167443,0.716136788066,0.716389088064,0.716641067715,0.716892727297,
	0.717144067086,0.717395087360,0.717645788395,0.717896170467,0.718146233853,
	0.718395978829,0.718645405671,0.718894514653,0.719143306051,0.719391780141,
	0.719639937197,0.719887777493,0.720135301305,0.720382508906,0.720629400570,
	0.720875976570,0.721122237181,0.721368182676,0.721613813326,0.721859129407,
	0.722104131189,0.722348818945,0.722593192947,0.722837253468,0.723081000778,
	0.723324435150,0.723567556854,0.723810366161,0.724052863343,0.724295048669,
	0.724536922410,0.724778484836,0.725019736217,0.725260676823,0.725501306923,
	0.725741626786,0.725981636681,0.726221336876,0.726460727642,0.726699809244,
	0.726938581953,0.727177046035,0.727415201759,0.727653049391,0.727890589198,
	0.728127821449,0.728364746409,0.728601364345,0.728837675524,0.729073680211,
	0.729309378672,0.729544771173,0.729779857979,0.730014639356,0.730249115569,
	0.730483286881,0.730717153559,0.730950715866,0.731183974066,0.731416928423,
	0.731649579201,0.731881926663,0.732113971072,0.732345712692,0.732577151786,
	0.732808288615,0.733039123442,0.733269656530,0.733499888140,0.733729818534,
	0.733959447973,0.734188776719,0.734417805033,0.734646533176,0.734874961407,
	0.735103089989,0.735330919180,0.735558449241,0.735785680431,0.736012613011,
	0.736239247239,0.736465583375,0.736691621677,0.736917362404,0.737142805815,
	0.737367952167,0.737592801720,0.737817354730,0.738041611456,0.738265572154,
	0.738489237083,0.738712606498,0.738935680657,0.739158459816,0.739380944232,
	0.739603134160,0.739825029857,0.740046631578,0.740267939579,0.740488954115,
	0.740709675441,0.740930103812,0.741150239483,0.741370082707,0.741589633740,
	0.741808892836,0.742027860247,0.742246536228,0.742464921032,0.742683014912,
	0.742900818121,0.743118330912,0.743335553537,0.743552486250,0.743769129301,
	0.743985482943,0.744201547427,0.744417323005,0.744632809929,0.744848008449,
	0.745062918816,0.745277541281,0.745491876094,0.745705923506,0.745919683767,
	0.746133157125,0.746346343832,0.746559244137,0.746771858288,0.746984186535,
	0.747196229126,0.747407986310,0.747619458336,0.747830645451,0.748041547904,
	0.748252165942,0.748462499813,0.748672549764,0.748882316043,0.749091798896,
	0.749300998570,0.749509915312,0.749718549368,0.749926900984,0.750134970406,
	0.750342757880,0.750550263651,0.750757487964,0.750964431065,0.751171093199,
	0.751377474610,0.751583575543,0.751789396242,0.751994936951,0.752200197914,
	0.752405179375,0.752609881577,0.752814304763,0.753018449178,0.753222315062,
	0.753425902660,0.753629212214,0.753832243965,0.754034998156,0.754237475030,
	0.754439674827,0.754641597788,0.754843244157,0.755044614172,0.755245708076,
	0.755446526109,0.755647068511,0.755847335523,0.756047327384,0.756247044335,
	0.756446486616,0.756645654465,0.756844548122,0.757043167827,0.757241513818,
	0.757439586333,0.757637385611,0.757834911892,0.758032165411,0.758229146408,
	0.758425855121,0.758622291786,0.758818456641,0.759014349923,0.759209971869,
	0.759405322716,0.759600402700,0.759795212058,0.759989751026,0.760184019839,
	0.760378018733,0.760571747945,0.760765207708,0.760958398259,0.761151319833,
	0.761343972663,0.761536356985,0.761728473034,0.761920321042,0.762111901245,
	0.762303213875,0.762494259168,0.762685037355,0.762875548670,0.763065793347,
	0.763255771618,0.763445483715,0.763634929871,0.763824110319,0.764013025290,
	0.764201675016,0.764390059729,0.764578179661,0.764766035042,0.764953626104,
	0.765140953077,0.765328016193,0.765514815681,0.765701351773,0.765887624698,
	0.766073634686,0.766259381967,0.766444866771,0.766630089326,0.766815049863,
	0.766999748609,0.767184185795,0.767368361648,0.767552276397,0.767735930269,
	0.767919323494,0.768102456299,0.768285328912,0.768467941560,0.768650294470,
	0.768832387869,0.769014221985,0.769195797044,0.769377113273,0.769558170897,
	0.769738970144,0.769919511239,0.770099794408,0.770279819876,0.770459587869,
	0.770639098612,0.770818352330,0.770997349248,0.771176089591,0.771354573583,
	0.771532801448,0.771710773411,0.771888489695,0.772065950524,0.772243156122,
	0.772420106711,0.772596802516,0.772773243759,0.772949430663,0.773125363451,
	0.773301042344,0.773476467566,0.773651639338,0.773826557882,0.774001223420,
	0.774175636174,0.774349796364,0.774523704212,0.774697359938,0.774870763765,
	0.775043915911,0.775216816598,0.775389466046,0.775561864474,0.775734012104,
	0.775905909153,0.776077555843,0.776248952391,0.776420099018,0.776590995942,
	0.776761643382,0.776932041557,0.777102190685,0.777272090984,0.777441742672,
	0.777611145967,0.777780301088,0.777949208250,0.778117867672,0.778286279571,
	0.778454444163,0.778622361666,0.778790032296,0.778957456270,0.779124633803,
	0.779291565113,0.779458250413,0.779624689922,0.779790883853,0.779956832422,
	0.780122535845,0.780287994336,0.780453208110,0.780618177383,0.780782902367,
	0.780947383278,0.781111620330,0.781275613736,0.781439363711,0.781602870467,
	0.781766134219,0.781929155179,0.782091933560,0.782254469576,0.782416763439,
	0.782578815361,0.782740625556,0.782902194234,0.783063521608,0.783224607890,
	0.783385453292,0.783546058024,0.783706422298,0.783866546325,0.784026430317,
	0.784186074483,0.784345479035,0.784504644182,0.784663570136,0.784822257106,
	0.784980705301,0.785138914932,0.785296886209,0.785454619339,0.785612114534,
	0.785769372001,0.785926391950,0.786083174588,0.786239720126,0.786396028770,
	0.786552100729,0.786707936212,0.786863535425,0.787018898577,0.787174025874,
	0.787328917525,0.787483573736,0.787637994714,0.787792180665,0.787946131798,
	0.788099848317,0.788253330430,0.788406578341,0.788559592258,0.788712372386,
	0.788864918930,0.789017232096,0.789169312089,0.789321159114,0.789472773376,
	0.789624155079,0.789775304429,0.789926221629,0.790076906884,0.790227360397,
	0.790377582373,0.790527573016,0.790677332528,0.790826861114,0.790976158975,
	0.791125226317,0.791274063340,0.791422670248,0.791571047244,0.791719194529,
	0.791867112306,0.792014800777,0.792162260143,0.792309490607,0.792456492370,
	0.792603265633,0.792749810598,0.792896127465,0.793042216434,0.793188077708,
	0.793333711486,0.793479117969,0.793624297357,0.793769249849,0.793913975647,
	0.794058474948,0.794202747953,0.794346794862,0.794490615873,0.794634211185,
	0.794777580997,0.794920725508,0.795063644917,0.795206339421,0.795348809219,
	0.795491054509,0.795633075489,0.795774872356,0.795916445308,0.796057794542,
	0.796198920256,0.796339822647,0.796480501910,0.796620958244,0.796761191844,
	0.796901202908,0.797040991630,0.797180558208,0.797319902837,0.797459025713,
	0.797597927031,0.797736606987,0.797875065776,0.798013303593,0.798151320633,
	0.798289117091,0.798426693162,0.798564049039,0.798701184917,0.798838100990,
	0.798974797453,0.799111274498,0.799247532320,0.799383571112,0.799519391067,
	0.799654992378,0.799790375239,0.799925539842,0.800060486380,0.800195215045,
	0.800329726030,0.800464019526,0.800598095727,0.800731954823,0.800865597007,
	0.800999022469,0.801132231402,0.801265223997,0.801398000444,0.801530560934,
	0.801662905659,0.801795034809,0.801926948574,0.802058647144,0.802190130711,
	0.802321399462,0.802452453590,0.802583293282,0.802713918729,0.802844330119,
	0.802974527643,0.803104511488,0.803234281845,0.803363838901,0.803493182845,
	0.803622313866,0.803751232151,0.803879937889,0.804008431268,0.804136712475,
	0.804264781698,0.804392639125,0.804520284942,0.804647719338,0.804774942498,
	0.804901954610,0.805028755860,0.805155346435,0.805281726521,0.805407896305,
	0.805533855972,0.805659605709,0.805785145701,0.805910476133,0.806035597191,
	0.806160509061,0.806285211927,0.806409705975,0.806533991389,0.806658068354,
	0.806781937055,0.806905597675,0.807029050399,0.807152295411,0.807275332895,
	0.807398163035,0.807520786014,0.807643202016,0.807765411224,0.807887413820,
	0.808009209989,0.808130799913,0.808252183774,0.808373361756,0.808494334040,
	0.808615100808,0.808735662244,0.808856018528,0.808976169842,0.809096116369,
	0.809215858289,0.809335395783,0.809454729034,0.809573858222,0.809692783527,
	0.809811505131,0.809930023215,0.810048337957,0.810166449540,0.810284358142,
	0.810402063945,0.810519567127,0.810636867868,0.810753966348,0.810870862746,
	0.810987557242,0.811104050014,0.811220341241,0.811336431103,0.811452319777,
	0.811568007443,0.811683494278,0.811798780461,0.811913866169,0.812028751582,
	0.812143436875,0.812257922228,0.812372207816,0.812486293819,0.812600180412,
	0.812713867773,0.812827356079,0.812940645506,0.813053736230,0.813166628430,
	0.813279322279,0.813391817955,0.813504115634,0.813616215491,0.813728117702,
	0.813839822443,0.813951329889,0.814062640215,0.814173753596,0.814284670208,
	0.814395390225,0.814505913821,0.814616241171,0.814726372450,0.814836307832,
	0.814946047491,0.815055591600,0.815164940334,0.815274093866,0.815383052370,
	0.815491816018,0.815600384985,0.815708759443,0.815816939566,0.815924925525,
	0.816032717494,0.816140315645,0.816247720150,0.816354931182,0.816461948913,
	0.816568773514,0.816675405158,0.816781844015,0.816888090258,0.816994144058,
	0.817100005585,0.817205675012,0.817311152509,0.817416438246,0.817521532395,
	0.817626435126,0.817731146608,0.817835667013,0.817939996511,0.818044135271,
	0.818148083463,0.818251841257,0.818355408822,0.818458786328,0.818561973943,
	0.818664971838,0.818767780180,0.818870399139,0.818972828884,0.819075069582,
	0.819177121402,0.819278984513,0.819380659082,0.819482145277,0.819583443267,
	0.819684553219,0.819785475301,0.819886209679,0.819986756521,0.820087115994,
	0.820187288266,0.820287273503,0.820387071871,0.820486683538,0.820586108670,
	0.820685347432,0.820784399992,0.820883266515,0.820981947167,0.821080442113,
	0.821178751520,0.821276875553,0.821374814377,0.821472568157,0.821570137058,
	0.821667521246,0.821764720885,0.821861736139,0.821958567173,0.822055214152,
	0.822151677240,0.822247956601,0.822344052398,0.822439964795,0.822535693957,
	0.822631240047,0.822726603228,0.822821783663,0.822916781516,0.823011596949,
	0.823106230126,0.823200681209,0.823294950361,0.823389037743,0.823482943519,
	0.823576667851,0.823670210901,0.823763572830,0.823856753801,0.823949753974,
	0.824042573512,0.824135212576,0.824227671328,0.824319949927,0.824412048536,
	0.824503967315,0.824595706424,0.824687266025,0.824778646278,0.824869847343,
	0.824960869380,0.825051712549,0.825142377010,0.825232862924,0.825323170449,
	0.825413299745,0.825503250971,0.825593024287,0.825682619852,0.825772037825,
	0.825861278365,0.825950341629,0.826039227778,0.826127936969,0.826216469360,
	0.826304825111,0.826393004378,0.826481007320,0.826568834095,0.826656484860,
	0.826743959773,0.826831258991,0.826918382671,0.827005330971,0.827092104047,
	0.827178702057,0.827265125157,0.827351373504,0.827437447254,0.827523346563,
	0.827609071588,0.827694622486,0.827779999411,0.827865202519,0.827950231967,
	0.828035087910,0.828119770504,0.828204279903,0.828288616263,0.828372779739,
	0.828456770485,0.828540588658,0.828624234410,0.828707707898,0.828791009274,
	0.828874138694,0.828957096312,0.829039882282,0.829122496757,0.829204939891,
	0.829287211838,0.829369312752,0.829451242786,0.829533002092,0.829614590825,
	0.829696009137,0.829777257182,0.829858335111,0.829939243077,0.830019981234,
	0.830100549732,0.830180948726,0.830261178366,0.830341238804,0.830421130193,
	0.830500852685,0.830580406430,0.830659791580,0.830739008287,0.830818056702,
	0.830896936976,0.830975649259,0.831054193704,0.831132570460,0.831210779678,
	0.831288821508,0.831366696102,0.831444403608,0.831521944178,0.831599317961,
	0.831676525107,0.831753565766,0.831830440087,0.831907148220,0.831983690314,
	0.832060066518,0.832136276982,0.832212321855,0.832288201284,0.832363915420,
	0.832439464410,0.832514848403,0.832590067548,0.832665121992,0.832740011884,
	0.832814737372,0.832889298604,0.832963695727,0.833037928888,0.833111998237,
	0.833185903919,0.833259646082,0.833333224873
	}
};

double always_inline s08_stage7clip(double x) {
    double f = fabs(x);
    f = f * s08_stage7_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s08_stage7_table.data[0];
    } else if (i >= s08_stage7_table.size-1) {
        f = s08_stage7_table.data[s08_stage7_table.size-1];
    } else {
        f -= i;
        f = s08_stage7_table.data[i]*(1-f) + s08_stage7_table.data[i+1]*f;
    }
    return copysign(f, x);
}
