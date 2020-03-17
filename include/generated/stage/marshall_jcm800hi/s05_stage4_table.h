
// s05_stage4_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  17.263179
 // --table_op  1.000000

struct tables05_stage4 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables05_stage4_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables05_stage4&() const { return *(tables05_stage4*)this; }
};

static tables05_stage4_imp<2048> s05_stage4_table __rt_data = {
	0,0.0437804,204.7,2048, {
	0.000000000000,0.000017120637,0.000034641833,0.000052093958,0.000069622064,
	0.000087180825,0.000104783895,0.000122426659,0.000140110166,0.000157833711,
	0.000175597137,0.000193400119,0.000211242386,0.000229123654,0.000247043645,
	0.000265002082,0.000282998689,0.000301033195,0.000319105326,0.000337214815,
	0.000355361394,0.000373544797,0.000391764760,0.000410021022,0.000428313323,
	0.000446641403,0.000465005008,0.000483403881,0.000501837771,0.000520306426,
	0.000538809596,0.000557347035,0.000575918495,0.000594523734,0.000613162508,
	0.000631834577,0.000650539701,0.000669277643,0.000688048167,0.000706851040,
	0.000725686027,0.000744552900,0.000763451427,0.000782381382,0.000801342538,
	0.000820334671,0.000839357558,0.000858410977,0.000877494709,0.000896608534,
	0.000915752237,0.000934925602,0.000954128415,0.000973360463,0.000992621536,
	0.001011911425,0.001031229921,0.001050576818,0.001069951911,0.001089354996,
	0.001108785871,0.001128244336,0.001147730190,0.001167243237,0.001186783278,
	0.001206350120,0.001225943567,0.001245563428,0.001265209511,0.001284881627,
	0.001304579586,0.001324303202,0.001344052288,0.001363826661,0.001383626136,
	0.001403450531,0.001423299666,0.001443173362,0.001463071439,0.001482993720,
	0.001502940031,0.001522910196,0.001542904042,0.001562921397,0.001582962089,
	0.001603025949,0.001623112809,0.001643222500,0.001663354857,0.001683509715,
	0.001703686909,0.001723886276,0.001744107656,0.001764350887,0.001784615810,
	0.001804902266,0.001825210099,0.001845539153,0.001865889271,0.001886260301,
	0.001906652088,0.001927064483,0.001947497333,0.001967950489,0.001988423802,
	0.002008917125,0.002029430311,0.002049963214,0.002070515690,0.002091087595,
	0.002111678787,0.002132289124,0.002152918465,0.002173566671,0.002194233604,
	0.002214919124,0.002235623097,0.002256345385,0.002277085854,0.002297844371,
	0.002318620802,0.002339415015,0.002360226879,0.002381056264,0.002401903041,
	0.002422767081,0.002443648257,0.002464546441,0.002485461509,0.002506393336,
	0.002527341797,0.002548306769,0.002569288130,0.002590285759,0.002611299536,
	0.002632329339,0.002653375051,0.002674436553,0.002695513729,0.002716606461,
	0.002737714634,0.002758838134,0.002779976845,0.002801130656,0.002822299453,
	0.002843483125,0.002864681562,0.002885894652,0.002907122286,0.002928364357,
	0.002949620756,0.002970891376,0.002992176111,0.003013474854,0.003034787503,
	0.003056113951,0.003077454096,0.003098807836,0.003120175067,0.003141555690,
	0.003162949602,0.003184356706,0.003205776900,0.003227210088,0.003248656170,
	0.003270115051,0.003291586633,0.003313070821,0.003334567520,0.003356076635,
	0.003377598073,0.003399131740,0.003420677544,0.003442235394,0.003463805197,
	0.003485386864,0.003506980304,0.003528585428,0.003550202148,0.003571830376,
	0.003593470023,0.003615121004,0.003636783232,0.003658456621,0.003680141086,
	0.003701836543,0.003723542908,0.003745260099,0.003766988031,0.003788726623,
	0.003810475793,0.003832235461,0.003854005546,0.003875785968,0.003897576648,
	0.003919377507,0.003941188467,0.003963009450,0.003984840380,0.004006681179,
	0.004028531771,0.004050392082,0.004072262035,0.004094141558,0.004116030574,
	0.004137929012,0.004159836799,0.004181753861,0.004203680127,0.004225615525,
	0.004247559986,0.004269513437,0.004291475810,0.004313447034,0.004335427041,
	0.004357415763,0.004379413131,0.004401419078,0.004423433537,0.004445456440,
	0.004467487723,0.004489527319,0.004511575164,0.004533631191,0.004555695338,
	0.004577767540,0.004599847734,0.004621935857,0.004644031846,0.004666135639,
	0.004688247174,0.004710366391,0.004732493228,0.004754627626,0.004776769523,
	0.004798918861,0.004821075580,0.004843239622,0.004865410929,0.004887589441,
	0.004909775103,0.004931967856,0.004954167644,0.004976374412,0.004998588101,
	0.005020808659,0.005043036028,0.005065270154,0.005087510984,0.005109758462,
	0.005132012536,0.005154273152,0.005176540257,0.005198813799,0.005221093725,
	0.005243379983,0.005265672523,0.005287971293,0.005310276243,0.005332587321,
	0.005354904479,0.005377227666,0.005399556833,0.005421891931,0.005444232911,
	0.005466579726,0.005488932327,0.005511290666,0.005533654696,0.005556024371,
	0.005578399643,0.005600780467,0.005623166795,0.005645558584,0.005667955786,
	0.005690358358,0.005712766254,0.005735179430,0.005757597842,0.005780021446,
	0.005802450199,0.005824884057,0.005847322978,0.005869766918,0.005892215836,
	0.005914669690,0.005937128438,0.005959592038,0.005982060449,0.006004533630,
	0.006027011542,0.006049494143,0.006071981394,0.006094473254,0.006116969685,
	0.006139470647,0.006161976102,0.006184486010,0.006207000333,0.006229519034,
	0.006252042074,0.006274569415,0.006297101022,0.006319636855,0.006342176880,
	0.006364721058,0.006387269354,0.006409821732,0.006432378156,0.006454938591,
	0.006477503000,0.006500071350,0.006522643605,0.006545219731,0.006567799694,
	0.006590383459,0.006612970992,0.006635562261,0.006658157231,0.006680755870,
	0.006703358144,0.006725964021,0.006748573468,0.006771186454,0.006793802946,
	0.006816422912,0.006839046322,0.006861673143,0.006884303344,0.006906936895,
	0.006929573764,0.006952213922,0.006974857338,0.006997503983,0.007020153825,
	0.007042806836,0.007065462986,0.007088122246,0.007110784587,0.007133449980,
	0.007156118397,0.007178789808,0.007201464187,0.007224141504,0.007246821732,
	0.007269504843,0.007292190811,0.007314879607,0.007337571204,0.007360265577,
	0.007382962697,0.007405662539,0.007428365076,0.007451070282,0.007473778131,
	0.007496488597,0.007519201655,0.007541917279,0.007564635445,0.007587356126,
	0.007610079299,0.007632804938,0.007655533019,0.007678263517,0.007700996408,
	0.007723731669,0.007746469275,0.007769209203,0.007791951429,0.007814695930,
	0.007837442682,0.007860191662,0.007882942849,0.007905696218,0.007928451747,
	0.007951209414,0.007973969197,0.007996731074,0.008019495022,0.008042261019,
	0.008065029045,0.008087799077,0.008110571095,0.008133345077,0.008156121002,
	0.008178898848,0.008201678597,0.008224460226,0.008247243715,0.008270029044,
	0.008292816193,0.008315605142,0.008338395870,0.008361188358,0.008383982587,
	0.008406778537,0.008429576188,0.008452375522,0.008475176519,0.008497979160,
	0.008520783426,0.008543589300,0.008566396761,0.008589205792,0.008612016375,
	0.008634828491,0.008657642122,0.008680457251,0.008703273858,0.008726091928,
	0.008748911442,0.008771732383,0.008794554733,0.008817378476,0.008840203593,
	0.008863030070,0.008885857887,0.008908687029,0.008931517480,0.008954349222,
	0.008977182239,0.009000016515,0.009022852034,0.009045688780,0.009068526737,
	0.009091365889,0.009114206221,0.009137047716,0.009159890359,0.009182734136,
	0.009205579030,0.009228425027,0.009251272111,0.009274120268,0.009296969482,
	0.009319819740,0.009342671025,0.009365523325,0.009388376623,0.009411230907,
	0.009434086161,0.009456942373,0.009479799526,0.009502657608,0.009525516606,
	0.009548376504,0.009571237289,0.009594098948,0.009616961468,0.009639824835,
	0.009662689035,0.009685554056,0.009708419885,0.009731286508,0.009754153912,
	0.009777022085,0.009799891014,0.009822760687,0.009845631090,0.009868502212,
	0.009891374039,0.009914246561,0.009937119763,0.009959993636,0.009982868165,
	0.010005743340,0.010028619148,0.010051495578,0.010074372618,0.010097250256,
	0.010120128481,0.010143007282,0.010165886646,0.010188766563,0.010211647022,
	0.010234528011,0.010257409519,0.010280291535,0.010303174049,0.010326057049,
	0.010348940525,0.010371824466,0.010394708862,0.010417593701,0.010440478974,
	0.010463364670,0.010486250779,0.010509137290,0.010532024193,0.010554911479,
	0.010577799137,0.010600687157,0.010623575529,0.010646464244,0.010669353291,
	0.010692242662,0.010715132346,0.010738022334,0.010760912616,0.010783803183,
	0.010806694026,0.010829585135,0.010852476502,0.010875368116,0.010898259969,
	0.010921152052,0.010944044355,0.010966936871,0.010989829590,0.011012722503,
	0.011035615601,0.011058508877,0.011081402321,0.011104295924,0.011127189679,
	0.011150083577,0.011172977610,0.011195871768,0.011218766045,0.011241660431,
	0.011264554919,0.011287449501,0.011310344168,0.011333238913,0.011356133727,
	0.011379028604,0.011401923534,0.011424818511,0.011447713526,0.011470608573,
	0.011493503643,0.011516398728,0.011539293823,0.011562188918,0.011585084007,
	0.011607979082,0.011630874136,0.011653769162,0.011676664153,0.011699559101,
	0.011722454000,0.011745348843,0.011768243622,0.011791138330,0.011814032961,
	0.011836927509,0.011859821965,0.011882716324,0.011905610578,0.011928504722,
	0.011951398748,0.011974292651,0.011997186422,0.012020080057,0.012042973549,
	0.012065866891,0.012088760077,0.012111653100,0.012134545955,0.012157438636,
	0.012180331136,0.012203223448,0.012226115568,0.012249007489,0.012271899205,
	0.012294790711,0.012317681999,0.012340573065,0.012363463903,0.012386354506,
	0.012409244870,0.012432134988,0.012455024855,0.012477914466,0.012500803814,
	0.012523692894,0.012546581701,0.012569470230,0.012592358474,0.012615246429,
	0.012638134089,0.012661021448,0.012683908503,0.012706795247,0.012729681675,
	0.012752567782,0.012775453564,0.012798339014,0.012821224128,0.012844108901,
	0.012866993328,0.012889877404,0.012912761125,0.012935644484,0.012958527478,
	0.012981410102,0.013004292350,0.013027174219,0.013050055703,0.013072936798,
	0.013095817500,0.013118697803,0.013141577703,0.013164457195,0.013187336276,
	0.013210214940,0.013233093184,0.013255971002,0.013278848391,0.013301725346,
	0.013324601862,0.013347477936,0.013370353564,0.013393228740,0.013416103461,
	0.013438977723,0.013461851522,0.013484724853,0.013507597712,0.013530470096,
	0.013553342000,0.013576213421,0.013599084354,0.013621954796,0.013644824742,
	0.013667694189,0.013690563133,0.013713431571,0.013736299497,0.013759166909,
	0.013782033803,0.013804900175,0.013827766022,0.013850631339,0.013873496123,
	0.013896360372,0.013919224080,0.013942087244,0.013964949862,0.013987811929,
	0.014010673442,0.014033534398,0.014056394792,0.014079254623,0.014102113885,
	0.014124972577,0.014147830694,0.014170688234,0.014193545193,0.014216401567,
	0.014239257355,0.014262112551,0.014284967154,0.014307821160,0.014330674566,
	0.014353527368,0.014376379564,0.014399231151,0.014422082125,0.014444932484,
	0.014467782225,0.014490631344,0.014513479839,0.014536327706,0.014559174943,
	0.014582021547,0.014604867514,0.014627712843,0.014650557530,0.014673401573,
	0.014696244968,0.014719087713,0.014741929806,0.014764771242,0.014787612021,
	0.014810452138,0.014833291591,0.014856130379,0.014878968497,0.014901805943,
	0.014924642716,0.014947478811,0.014970314227,0.014993148962,0.015015983012,
	0.015038816375,0.015061649048,0.015084481030,0.015107312317,0.015130142908,
	0.015152972799,0.015175801989,0.015198630475,0.015221458255,0.015244285326,
	0.015267111686,0.015289937332,0.015312762263,0.015335586476,0.015358409969,
	0.015381232740,0.015404054786,0.015426876105,0.015449696695,0.015472516554,
	0.015495335680,0.015518154070,0.015540971723,0.015563788636,0.015586604807,
	0.015609420234,0.015632234915,0.015655048848,0.015677862031,0.015700674462,
	0.015723486139,0.015746297059,0.015769107222,0.015791916624,0.015814725265,
	0.015837533142,0.015860340253,0.015883146596,0.015905952169,0.015928756971,
	0.015951561000,0.015974364253,0.015997166729,0.016019968427,0.016042769343,
	0.016065569478,0.016088368828,0.016111167392,0.016133965168,0.016156762155,
	0.016179558350,0.016202353753,0.016225148360,0.016247942172,0.016270735185,
	0.016293527399,0.016316318812,0.016339109421,0.016361899226,0.016384688225,
	0.016407476416,0.016430263797,0.016453050368,0.016475836126,0.016498621070,
	0.016521405198,0.016544188509,0.016566971002,0.016589752674,0.016612533525,
	0.016635313552,0.016658092755,0.016680871132,0.016703648682,0.016726425402,
	0.016749201292,0.016771976350,0.016794750575,0.016817523965,0.016840296520,
	0.016863068237,0.016885839115,0.016908609153,0.016931378350,0.016954146704,
	0.016976914214,0.016999680879,0.017022446697,0.017045211667,0.017067975788,
	0.017090739058,0.017113501477,0.017136263043,0.017159023754,0.017181783610,
	0.017204542609,0.017227300751,0.017250058033,0.017272814455,0.017295570016,
	0.017318324714,0.017341078548,0.017363831517,0.017386583620,0.017409334856,
	0.017432085224,0.017454834722,0.017477583350,0.017500331106,0.017523077989,
	0.017545823998,0.017568569132,0.017591313391,0.017614056772,0.017636799276,
	0.017659540900,0.017682281644,0.017705021507,0.017727760488,0.017750498586,
	0.017773235799,0.017795972128,0.017818707570,0.017841442125,0.017864175792,
	0.017886908570,0.017909640458,0.017932371455,0.017955101561,0.017977830773,
	0.018000559092,0.018023286517,0.018046013046,0.018068738678,0.018091463413,
	0.018114187250,0.018136910188,0.018159632227,0.018182353364,0.018205073600,
	0.018227792933,0.018250511364,0.018273228890,0.018295945511,0.018318661226,
	0.018341376035,0.018364089937,0.018386802931,0.018409515015,0.018432226190,
	0.018454936455,0.018477645808,0.018500354249,0.018523061778,0.018545768393,
	0.018568474094,0.018591178880,0.018613882750,0.018636585704,0.018659287741,
	0.018681988860,0.018704689060,0.018727388341,0.018750086703,0.018772784144,
	0.018795480663,0.018818176261,0.018840870936,0.018863564688,0.018886257515,
	0.018908949419,0.018931640397,0.018954330449,0.018977019575,0.018999707774,
	0.019022395045,0.019045081388,0.019067766802,0.019090451287,0.019113134841,
	0.019135817465,0.019158499157,0.019181179918,0.019203859746,0.019226538641,
	0.019249216603,0.019271893630,0.019294569723,0.019317244881,0.019339919103,
	0.019362592389,0.019385264738,0.019407936149,0.019430606623,0.019453276158,
	0.019475944755,0.019498612412,0.019521279129,0.019543944906,0.019566609743,
	0.019589273637,0.019611936590,0.019634598601,0.019657259669,0.019679919793,
	0.019702578974,0.019725237211,0.019747894503,0.019770550851,0.019793206252,
	0.019815860708,0.019838514218,0.019861166780,0.019883818396,0.019906469064,
	0.019929118783,0.019951767555,0.019974415377,0.019997062250,0.020019708174,
	0.020042353148,0.020064997171,0.020087640243,0.020110282364,0.020132923534,
	0.020155563751,0.020178203016,0.020200841329,0.020223478688,0.020246115095,
	0.020268750547,0.020291385045,0.020314018589,0.020336651178,0.020359282812,
	0.020381913491,0.020404543213,0.020427171980,0.020449799790,0.020472426644,
	0.020495052540,0.020517677479,0.020540301461,0.020562924484,0.020585546550,
	0.020608167656,0.020630787804,0.020653406993,0.020676025222,0.020698642492,
	0.020721258802,0.020743874151,0.020766488540,0.020789101969,0.020811714436,
	0.020834325942,0.020856936486,0.020879546069,0.020902154689,0.020924762347,
	0.020947369043,0.020969974776,0.020992579546,0.021015183353,0.021037786196,
	0.021060388076,0.021082988991,0.021105588943,0.021128187930,0.021150785953,
	0.021173383011,0.021195979104,0.021218574231,0.021241168394,0.021263761591,
	0.021286353822,0.021308945087,0.021331535386,0.021354124719,0.021376713085,
	0.021399300485,0.021421886917,0.021444472383,0.021467056882,0.021489640413,
	0.021512222976,0.021534804572,0.021557385200,0.021579964861,0.021602543553,
	0.021625121276,0.021647698031,0.021670273818,0.021692848636,0.021715422485,
	0.021737995365,0.021760567276,0.021783138218,0.021805708190,0.021828277193,
	0.021850845226,0.021873412289,0.021895978383,0.021918543506,0.021941107660,
	0.021963670843,0.021986233056,0.022008794298,0.022031354570,0.022053913871,
	0.022076472202,0.022099029562,0.022121585950,0.022144141368,0.022166695815,
	0.022189249291,0.022211801795,0.022234353328,0.022256903890,0.022279453480,
	0.022302002098,0.022324549745,0.022347096420,0.022369642124,0.022392186855,
	0.022414730615,0.022437273403,0.022459815219,0.022482356062,0.022504895934,
	0.022527434833,0.022549972761,0.022572509716,0.022595045698,0.022617580709,
	0.022640114747,0.022662647812,0.022685179905,0.022707711026,0.022730241174,
	0.022752770350,0.022775298553,0.022797825783,0.022820352041,0.022842877326,
	0.022865401638,0.022887924978,0.022910447345,0.022932968739,0.022955489161,
	0.022978008610,0.023000527086,0.023023044590,0.023045561120,0.023068076678,
	0.023090591264,0.023113104876,0.023135617516,0.023158129183,0.023180639877,
	0.023203149599,0.023225658348,0.023248166124,0.023270672928,0.023293178758,
	0.023315683617,0.023338187502,0.023360690416,0.023383192356,0.023405693324,
	0.023428193320,0.023450692343,0.023473190393,0.023495687471,0.023518183577,
	0.023540678711,0.023563172872,0.023585666061,0.023608158277,0.023630649522,
	0.023653139794,0.023675629094,0.023698117423,0.023720604779,0.023743091163,
	0.023765576576,0.023788061016,0.023810544485,0.023833026982,0.023855508508,
	0.023877989062,0.023900468644,0.023922947255,0.023945424895,0.023967901563,
	0.023990377260,0.024012851986,0.024035325740,0.024057798524,0.024080270337,
	0.024102741178,0.024125211049,0.024147679949,0.024170147879,0.024192614838,
	0.024215080826,0.024237545844,0.024260009892,0.024282472970,0.024304935077,
	0.024327396215,0.024349856382,0.024372315580,0.024394773807,0.024417231065,
	0.024439687354,0.024462142673,0.024484597023,0.024507050403,0.024529502814,
	0.024551954257,0.024574404730,0.024596854234,0.024619302770,0.024641750337,
	0.024664196936,0.024686642566,0.024709087228,0.024731530921,0.024753973647,
	0.024776415404,0.024798856194,0.024821296016,0.024843734871,0.024866172758,
	0.024888609678,0.024911045630,0.024933480616,0.024955914634,0.024978347686,
	0.025000779771,0.025023210889,0.025045641041,0.025068070227,0.025090498446,
	0.025112925700,0.025135351988,0.025157777309,0.025180201666,0.025202625056,
	0.025225047482,0.025247468942,0.025269889437,0.025292308967,0.025314727533,
	0.025337145134,0.025359561770,0.025381977442,0.025404392150,0.025426805894,
	0.025449218674,0.025471630491,0.025494041344,0.025516451233,0.025538860159,
	0.025561268123,0.025583675123,0.025606081160,0.025628486235,0.025650890348,
	0.025673293498,0.025695695686,0.025718096912,0.025740497177,0.025762896479,
	0.025785294821,0.025807692201,0.025830088620,0.025852484078,0.025874878575,
	0.025897272112,0.025919664688,0.025942056304,0.025964446961,0.025986836657,
	0.026009225393,0.026031613170,0.026053999988,0.026076385846,0.026098770746,
	0.026121154686,0.026143537669,0.026165919692,0.026188300758,0.026210680865,
	0.026233060015,0.026255438206,0.026277815441,0.026300191718,0.026322567038,
	0.026344941401,0.026367314807,0.026389687257,0.026412058751,0.026434429288,
	0.026456798870,0.026479167495,0.026501535166,0.026523901880,0.026546267640,
	0.026568632445,0.026590996295,0.026613359190,0.026635721132,0.026658082119,
	0.026680442152,0.026702801231,0.026725159357,0.026747516530,0.026769872749,
	0.026792228016,0.026814582330,0.026836935691,0.026859288101,0.026881639558,
	0.026903990063,0.026926339617,0.026948688219,0.026971035871,0.026993382571,
	0.027015728320,0.027038073119,0.027060416968,0.027082759867,0.027105101815,
	0.027127442815,0.027149782864,0.027172121965,0.027194460116,0.027216797319,
	0.027239133573,0.027261468879,0.027283803237,0.027306136647,0.027328469109,
	0.027350800624,0.027373131192,0.027395460813,0.027417789487,0.027440117215,
	0.027462443996,0.027484769832,0.027507094722,0.027529418666,0.027551741665,
	0.027574063719,0.027596384828,0.027618704992,0.027641024212,0.027663342488,
	0.027685659820,0.027707976208,0.027730291654,0.027752606155,0.027774919714,
	0.027797232331,0.027819544005,0.027841854736,0.027864164526,0.027886473374,
	0.027908781281,0.027931088246,0.027953394271,0.027975699355,0.027998003498,
	0.028020306701,0.028042608964,0.028064910288,0.028087210672,0.028109510117,
	0.028131808622,0.028154106190,0.028176402818,0.028198698509,0.028220993262,
	0.028243287077,0.028265579954,0.028287871894,0.028310162898,0.028332452965,
	0.028354742095,0.028377030289,0.028399317548,0.028421603871,0.028443889258,
	0.028466173711,0.028488457228,0.028510739811,0.028533021460,0.028555302175,
	0.028577581956,0.028599860803,0.028622138717,0.028644415698,0.028666691747,
	0.028688966863,0.028711241047,0.028733514299,0.028755786619,0.028778058008,
	0.028800328466,0.028822597993,0.028844866590,0.028867134256,0.028889400993,
	0.028911666799,0.028933931676,0.028956195624,0.028978458643,0.029000720734,
	0.029022981896,0.029045242130,0.029067501436,0.029089759815,0.029112017266,
	0.029134273790,0.029156529388,0.029178784059,0.029201037805,0.029223290624,
	0.029245542518,0.029267793486,0.029290043530,0.029312292649,0.029334540843,
	0.029356788113,0.029379034460,0.029401279882,0.029423524382,0.029445767958,
	0.029468010612,0.029490252343,0.029512493152,0.029534733040,0.029556972005,
	0.029579210050,0.029601447173,0.029623683376,0.029645918658,0.029668153020,
	0.029690386463,0.029712618986,0.029734850589,0.029757081274,0.029779311040,
	0.029801539887,0.029823767817,0.029845994828,0.029868220923,0.029890446100,
	0.029912670360,0.029934893703,0.029957116130,0.029979337642,0.030001558237,
	0.030023777917,0.030045996682,0.030068214533,0.030090431468,0.030112647490,
	0.030134862597,0.030157076791,0.030179290072,0.030201502440,0.030223713894,
	0.030245924437,0.030268134068,0.030290342786,0.030312550593,0.030334757489,
	0.030356963475,0.030379168549,0.030401372713,0.030423575968,0.030445778312,
	0.030467979748,0.030490180274,0.030512379892,0.030534578601,0.030556776402,
	0.030578973295,0.030601169281,0.030623364359,0.030645558531,0.030667751796,
	0.030689944155,0.030712135608,0.030734326155,0.030756515797,0.030778704534,
	0.030800892367,0.030823079295,0.030845265319,0.030867450439,0.030889634656,
	0.030911817969,0.030934000380,0.030956181888,0.030978362495,0.031000542199,
	0.031022721002,0.031044898904,0.031067075904,0.031089252005,0.031111427204,
	0.031133601504,0.031155774905,0.031177947406,0.031200119008,0.031222289712,
	0.031244459517,0.031266628424,0.031288796433,0.031310963545,0.031333129761,
	0.031355295079,0.031377459501,0.031399623027,0.031421785657,0.031443947392,
	0.031466108231,0.031488268176,0.031510427227,0.031532585383,0.031554742646,
	0.031576899015,0.031599054491,0.031621209074,0.031643362765,0.031665515563,
	0.031687667470,0.031709818485,0.031731968609,0.031754117843,0.031776266185,
	0.031798413638,0.031820560201,0.031842705874,0.031864850658,0.031886994554,
	0.031909137560,0.031931279679,0.031953420910,0.031975561253,0.031997700709,
	0.032019839278,0.032041976961,0.032064113758,0.032086249668,0.032108384694,
	0.032130518834,0.032152652089,0.032174784460,0.032196915946,0.032219046549,
	0.032241176269,0.032263305105,0.032285433058,0.032307560129,0.032329686318,
	0.032351811625,0.032373936051,0.032396059595,0.032418182259,0.032440304042,
	0.032462424946,0.032484544969,0.032506664113,0.032528782379,0.032550899765,
	0.032573016273,0.032595131903,0.032617246655,0.032639360530,0.032661473528,
	0.032683585650,0.032705696895,0.032727807264,0.032749916757,0.032772025376,
	0.032794133119,0.032816239988,0.032838345982,0.032860451103,0.032882555350,
	0.032904658724,0.032926761225,0.032948862853,0.032970963610,0.032993063494,
	0.033015162507,0.033037260650,0.033059357921,0.033081454322,0.033103549853,
	0.033125644514,0.033147738306,0.033169831229,0.033191923283,0.033214014469,
	0.033236104787,0.033258194237,0.033280282821,0.033302370537,0.033324457387,
	0.033346543370,0.033368628488,0.033390712741,0.033412796128,0.033434878650,
	0.033456960308,0.033479041102,0.033501121033,0.033523200100,0.033545278304,
	0.033567355645,0.033589432124,0.033611507742,0.033633582497,0.033655656392,
	0.033677729426,0.033699801599,0.033721872912,0.033743943365,0.033766012959,
	0.033788081694,0.033810149570,0.033832216588,0.033854282748,0.033876348051,
	0.033898412496,0.033920476084,0.033942538816,0.033964600691,0.033986661711,
	0.034008721875,0.034030781185,0.034052839639,0.034074897240,0.034096953986,
	0.034119009878,0.034141064918,0.034163119104,0.034185172438,0.034207224920,
	0.034229276550,0.034251327329,0.034273377256,0.034295426333,0.034317474560,
	0.034339521936,0.034361568463,0.034383614141,0.034405658970,0.034427702950,
	0.034449746082,0.034471788367,0.034493829804,0.034515870394,0.034537910137,
	0.034559949034,0.034581987085,0.034604024291,0.034626060651,0.034648096167,
	0.034670130838,0.034692164665,0.034714197648,0.034736229788,0.034758261085,
	0.034780291540,0.034802321152,0.034824349922,0.034846377851,0.034868404939,
	0.034890431186,0.034912456593,0.034934481160,0.034956504887,0.034978527775,
	0.035000549824,0.035022571034,0.035044591407,0.035066610941,0.035088629639,
	0.035110647499,0.035132664523,0.035154680710,0.035176696062,0.035198710578,
	0.035220724259,0.035242737105,0.035264749117,0.035286760295,0.035308770639,
	0.035330780150,0.035352788828,0.035374796674,0.035396803687,0.035418809869,
	0.035440815220,0.035462819739,0.035484823428,0.035506826287,0.035528828316,
	0.035550829516,0.035572829886,0.035594829428,0.035616828141,0.035638826027,
	0.035660823085,0.035682819316,0.035704814720,0.035726809297,0.035748803049,
	0.035770795975,0.035792788075,0.035814779351,0.035836769803,0.035858759430,
	0.035880748233,0.035902736213,0.035924723371,0.035946709705,0.035968695218,
	0.035990679908,0.036012663777,0.036034646826,0.036056629053,0.036078610460,
	0.036100591048,0.036122570815,0.036144549764,0.036166527894,0.036188505206,
	0.036210481699,0.036232457375,0.036254432234,0.036276406276,0.036298379502,
	0.036320351912,0.036342323506,0.036364294285,0.036386264249,0.036408233398,
	0.036430201733,0.036452169255,0.036474135963,0.036496101859,0.036518066942,
	0.036540031213,0.036561994672,0.036583957319,0.036605919156,0.036627880182,
	0.036649840398,0.036671799804,0.036693758401,0.036715716188,0.036737673167,
	0.036759629338,0.036781584701,0.036803539257,0.036825493005,0.036847445947,
	0.036869398082,0.036891349412,0.036913299936,0.036935249655,0.036957198569,
	0.036979146679,0.037001093986,0.037023040488,0.037044986188,0.037066931084,
	0.037088875179,0.037110818471,0.037132760962,0.037154702651,0.037176643540,
	0.037198583629,0.037220522917,0.037242461406,0.037264399096,0.037286335987,
	0.037308272080,0.037330207374,0.037352141871,0.037374075571,0.037396008474,
	0.037417940581,0.037439759545,0.037461319311,0.037482749628,0.037504076416,
	0.037525317399,0.037546482813,0.037567580196,0.037588615178,0.037609592211,
	0.037630514915,0.037651386302,0.037672208929,0.037692984999,0.037713716434,
	0.037734404927,0.037755051984,0.037775658956,0.037796227062,0.037816757409,
	0.037837251008,0.037857708783,0.037878131590,0.037898520217,0.037918875396,
	0.037939197810,0.037959488094,0.037979746844,0.037999974620,0.038020171948,
	0.038040339324,0.038060477217,0.038080586070,0.038100666305,0.038120718320,
	0.038140742496,0.038160739195,0.038180708763,0.038200651529,0.038220567811,
	0.038240457909,0.038260322115,0.038280160707,0.038299973951,0.038319762107,
	0.038339525420,0.038359264131,0.038378978469,0.038398668656,0.038418334908,
	0.038437977431,0.038457596428,0.038477192091,0.038496764610,0.038516314168,
	0.038535840942,0.038555345103,0.038574826819,0.038594286252,0.038613723561,
	0.038633138898,0.038652532415,0.038671904256,0.038691254563,0.038710583476,
	0.038729891128,0.038749177652,0.038768443177,0.038787687828,0.038806911729,
	0.038826114998,0.038845297754,0.038864460111,0.038883602182,0.038902724076,
	0.038921825902,0.038940907765,0.038959969768,0.038979012014,0.038998034600,
	0.039017037625,0.039036021185,0.039054985373,0.039073930281,0.039092856001,
	0.039111762621,0.039130650228,0.039149518909,0.039168368747,0.039187199826,
	0.039206012228,0.039224806033,0.039243581319,0.039262338166,0.039281076648,
	0.039299796843,0.039318498823,0.039337182663,0.039355848434,0.039374496208,
	0.039393126054,0.039411738042,0.039430332240,0.039448908714,0.039467467531,
	0.039486008757,0.039504532456,0.039523038692,0.039541527526,0.039559999023,
	0.039578453242,0.039596890244,0.039615310089,0.039633712836,0.039652098544,
	0.039670467269,0.039688819069,0.039707154000,0.039725472118,0.039743773478,
	0.039762058134,0.039780326140,0.039798577548,0.039816812413,0.039835030786,
	0.039853232717,0.039871418259,0.039889587462,0.039907740376,0.039925877049,
	0.039943997532,0.039962101872,0.039980190118,0.039998262316,0.040016318514,
	0.040034358759,0.040052383097,0.040070391573,0.040088384232,0.040106361120,
	0.040124322282,0.040142267760,0.040160197599,0.040178111843,0.040196010533,
	0.040213893713,0.040231761424,0.040249613710,0.040267450610,0.040285272166,
	0.040303078420,0.040320869410,0.040338645178,0.040356405764,0.040374151206,
	0.040391881545,0.040409596818,0.040427297064,0.040444982322,0.040462652630,
	0.040480308025,0.040497948544,0.040515574226,0.040533185106,0.040550781221,
	0.040568362608,0.040585929302,0.040603481340,0.040621018756,0.040638541587,
	0.040656049866,0.040673543630,0.040691022912,0.040708487747,0.040725938168,
	0.040743374211,0.040760795907,0.040778203292,0.040795596397,0.040812975256,
	0.040830339902,0.040847690366,0.040865026682,0.040882348882,0.040899656996,
	0.040916951058,0.040934231099,0.040951497149,0.040968749240,0.040985987404,
	0.041003211670,0.041020422069,0.041037618631,0.041054801388,0.041071970368,
	0.041089125601,0.041106267118,0.041123394948,0.041140509119,0.041157609662,
	0.041174696604,0.041191769976,0.041208829804,0.041225876119,0.041242908948,
	0.041259928320,0.041276934262,0.041293926802,0.041310905968,0.041327871788,
	0.041344824288,0.041361763497,0.041378689441,0.041395602147,0.041412501641,
	0.041429387952,0.041446261105,0.041463121126,0.041479968042,0.041496801878,
	0.041513622662,0.041530430418,0.041547225173,0.041564006952,0.041580775780,
	0.041597531683,0.041614274686,0.041631004813,0.041647722091,0.041664426544,
	0.041681118196,0.041697797072,0.041714463196,0.041731116593,0.041747757288,
	0.041764385303,0.041781000664,0.041797603394,0.041814193516,0.041830771055,
	0.041847336034,0.041863888477,0.041880428406,0.041896955845,0.041913470816,
	0.041929973344,0.041946463451,0.041962941160,0.041979406493,0.041995859473,
	0.042012300122,0.042028728463,0.042045144518,0.042061548309,0.042077939859,
	0.042094319189,0.042110686321,0.042127041277,0.042143384079,0.042159714748,
	0.042176033306,0.042192339774,0.042208634173,0.042224916525,0.042241186851,
	0.042257445172,0.042273691508,0.042289925881,0.042306148312,0.042322358821,
	0.042338557428,0.042354744155,0.042370919022,0.042387082048,0.042403233255,
	0.042419372662,0.042435500290,0.042451616158,0.042467720287,0.042483812696,
	0.042499893406,0.042515962435,0.042532019803,0.042548065531,0.042564099637,
	0.042580122140,0.042596133061,0.042612132418,0.042628120230,0.042644096517,
	0.042660061298,0.042676014591,0.042691956415,0.042707886789,0.042723805731,
	0.042739713262,0.042755609398,0.042771494158,0.042787367561,0.042803229626,
	0.042819080369,0.042834919811,0.042850747968,0.042866564859,0.042882370502,
	0.042898164914,0.042913948114,0.042929720120,0.042945480949,0.042961230618,
	0.042976969146,0.042992696550,0.043008412847,0.043024118055,0.043039812191,
	0.043055495272,0.043071167316,0.043086828340,0.043102478361,0.043118117395,
	0.043133745461,0.043149362574,0.043164968752,0.043180564011,0.043196148368,
	0.043211721840,0.043227284444,0.043242836195,0.043258377111,0.043273907208,
	0.043289426501,0.043304935009,0.043320432746,0.043335919729,0.043351395974,
	0.043366861498,0.043382316316,0.043397760443,0.043413193898,0.043428616694,
	0.043444028848,0.043459430375,0.043474821292,0.043490201614,0.043505571356,
	0.043520930534,0.043536279164,0.043551617261,0.043566944841,0.043582261918,
	0.043597568508,0.043612864627,0.043628150289,0.043643425509,0.043658690304,
	0.043673944687,0.043689188673,0.043704422279,0.043719645518,0.043734858405,
	0.043750060955,0.043765253184,0.043780435105
	}
};

double always_inline s05_stage4clip(double x) {
    double f = fabs(x);
    f = f * s05_stage4_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s05_stage4_table.data[0];
    } else if (i >= s05_stage4_table.size-1) {
        f = s05_stage4_table.data[s05_stage4_table.size-1];
    } else {
        f -= i;
        f = s05_stage4_table.data[i]*(1-f) + s05_stage4_table.data[i+1]*f;
    }
    return copysign(f, x);
}
