#include <iostream>
#include <cassert>

#define private public
#include "avl_tree.h"


using namespace std;

template <typename Key, typename Value>
void print_avl_tree(typename AVLTree<Key, Value>::Node* node, int depth = 0)
{
	if(!node)return;
	if(node != nullptr)
	{
		print_avl_tree<Key, Value>(node->right(), depth + 1);
		for(int j = 0; j < depth; ++j)
		{
			cout << " ";
		}
		cout << "{" << node->key() << " , " << node -> value() << " } " << endl;
		print_avl_tree<Key, Value>(node->left(), depth + 1);
	}
}

int main(int argc, const char *argv[])
{
	
AVLTree<int, int> avl;
avl[1818] = 2360;
avl[1702] = 2649;
avl[3042] = 463;
avl[301] = 1074;
avl[1383] = 2998;
avl[199] = 759;
avl[282] = 2120;
avl[771] = 2866;
avl[2046] = 1293;
avl[1992] = 588;
avl[14] = 1120;
avl[1675] = 1457;
avl[1348] = 2634;
avl[729] = 1413;
avl[1450] = 1340;
avl[2268] = 2373;
avl[678] = 996;
avl[2627] = 1601;
avl[331] = 1295;
avl[1771] = 1523;
avl[220] = 1536;
avl[2685] = 874;
avl[3020] = 2200;
avl[1446] = 524;
avl[2796] = 759;
avl[788] = 2190;
avl[604] = 774;
avl[2706] = 3049;
avl[3040] = 89;
avl[3083] = 1192;
avl[906] = 2527;
avl[2879] = 1038;
avl[2336] = 1951;
avl[2209] = 1955;
avl[2832] = 2374;
avl[242] = 2055;
avl[3035] = 2261;
avl[1334] = 2494;
avl[1395] = 296;
avl[2862] = 310;
avl[34] = 2478;
avl[2733] = 1471;
avl[787] = 2999;
avl[1394] = 1437;
avl[2154] = 1762;
avl[2098] = 538;
avl[1377] = 1539;
avl[1352] = 2033;
avl[280] = 645;
avl[1951] = 1554;
avl[974] = 2911;
avl[782] = 2853;
avl[488] = 1677;
avl[1508] = 2431;
avl[271] = 1519;
avl[2375] = 2489;
avl[597] = 1771;
avl[2871] = 1685;
avl[2605] = 1763;
avl[2153] = 562;
avl[2401] = 1721;
avl[129] = 1888;
avl[1376] = 173;
avl[717] = 149;
avl[2740] = 897;
avl[3014] = 399;
avl[1450] = 2688;
avl[74] = 290;
avl[762] = 348;
avl[1361] = 1466;
avl[2205] = 1044;
avl[1120] = 330;
avl[1928] = 2078;
avl[914] = 535;
avl[1135] = 1488;
avl[2868] = 473;
avl[852] = 1081;
avl[1400] = 1770;
avl[2924] = 857;
avl[2628] = 308;
avl[2405] = 123;
avl[730] = 266;
avl[2791] = 2301;
avl[212] = 805;
avl[857] = 2019;
avl[2455] = 487;
avl[2358] = 1867;
avl[229] = 1606;
avl[1832] = 1022;
avl[2875] = 886;
avl[1771] = 2136;
avl[2164] = 1604;
avl[1392] = 700;
avl[1405] = 2201;
avl[1840] = 2983;
avl[2040] = 1128;
avl[1491] = 1309;
avl[804] = 468;
avl[2592] = 1723;
avl[889] = 73;
avl[1730] = 3061;
avl[556] = 1340;
avl[2683] = 2140;
avl[1143] = 2557;
avl[114] = 2862;
avl[2872] = 2491;
avl[2983] = 2650;
avl[2636] = 53;
avl[504] = 2682;
avl[2403] = 2043;
avl[1924] = 1526;
avl[901] = 1940;
avl[2948] = 1082;
avl[1913] = 394;
avl[913] = 458;
avl[1367] = 371;
avl[1138] = 382;
avl[1513] = 85;
avl[973] = 3012;
avl[2859] = 1666;
avl[5] = 2105;
avl[814] = 212;
avl[180] = 2859;
avl[990] = 1775;
avl[675] = 3012;
avl[767] = 1124;
avl[424] = 1399;
avl[274] = 2132;
avl[698] = 1710;
avl[2055] = 2103;
avl[655] = 741;
avl[1141] = 2385;
avl[340] = 228;
avl[1269] = 2185;
avl[1367] = 2279;
avl[2301] = 1900;
avl[1072] = 1;
avl[1902] = 3103;
avl[1287] = 2702;
avl[2639] = 828;
avl[2623] = 1377;
avl[1390] = 1450;
avl[442] = 1166;
avl[1186] = 2407;
avl[964] = 917;
avl[3036] = 1304;
avl[98] = 905;
avl[2297] = 1407;
avl[2241] = 2139;
avl[47] = 2184;
avl[1646] = 1219;
avl[1707] = 2961;
avl[2369] = 1857;
avl[1916] = 1146;
avl[1842] = 806;
avl[1472] = 2964;
avl[581] = 286;
avl[11] = 574;
avl[1301] = 1915;
avl[1012] = 2506;
avl[3120] = 1994;
avl[1783] = 1117;
avl[2804] = 823;
avl[1905] = 2417;
avl[441] = 1716;
avl[2409] = 2859;
avl[1906] = 1909;
avl[673] = 3018;
avl[1228] = 1304;
avl[2832] = 2809;
avl[2669] = 2964;
avl[2396] = 412;
avl[415] = 3080;
avl[224] = 2216;
avl[761] = 1574;
avl[1169] = 1283;
avl[279] = 1723;
avl[1184] = 2620;
avl[1583] = 756;
avl[2946] = 1291;
avl[2195] = 2123;
avl[1290] = 3065;
avl[247] = 1258;
avl[1770] = 2296;
avl[1051] = 1489;
avl[1617] = 1004;
avl[636] = 242;
avl[2521] = 2117;
avl[2625] = 391;
avl[271] = 2835;
avl[1317] = 1921;
avl[2045] = 3038;
avl[1098] = 965;
avl[316] = 1186;
avl[681] = 2394;
avl[2927] = 2566;
avl[950] = 1715;
avl[68] = 1562;
avl[2337] = 2802;
avl[807] = 518;
avl[2055] = 1659;
avl[713] = 2799;
avl[742] = 1385;
avl[837] = 276;
avl[1435] = 724;
avl[167] = 170;
avl[87] = 417;
avl[1517] = 1140;
avl[615] = 1524;
avl[2811] = 2103;
avl[2053] = 298;
avl[584] = 2449;
avl[1954] = 2233;
avl[2556] = 320;
avl[1594] = 2155;
avl[1081] = 550;
avl[2152] = 2057;
avl[2273] = 751;
avl[2858] = 2454;
avl[1610] = 99;
avl[1540] = 2356;
avl[325] = 587;
avl[608] = 765;
avl[2517] = 1948;
avl[24] = 1660;
avl[518] = 3082;
avl[532] = 2177;
avl[2720] = 2261;
avl[1503] = 1619;
avl[2617] = 1070;
avl[2534] = 652;
avl[2180] = 687;
avl[1371] = 943;
avl[33] = 2626;
avl[2728] = 1326;
avl[1817] = 1274;
avl[136] = 2868;
avl[1750] = 1263;
avl[2933] = 247;
avl[2907] = 2534;
avl[950] = 323;
avl[1848] = 2544;
avl[1711] = 172;
avl[2199] = 2486;
avl[240] = 43;
avl[558] = 319;
avl[2270] = 1945;
avl[500] = 584;
avl[1980] = 1614;
avl[1251] = 25;
avl[942] = 245;
avl[1695] = 1871;
avl[3073] = 2730;
avl[1118] = 322;
avl[823] = 2661;
avl[1652] = 1493;
avl[645] = 282;
avl[487] = 939;
avl[857] = 653;
avl[1087] = 1730;
avl[1486] = 891;
avl[1410] = 2174;
avl[1753] = 589;
avl[2638] = 1952;
avl[22] = 1941;
avl[1761] = 791;
avl[1413] = 505;
avl[1388] = 2728;
avl[2859] = 72;
avl[2821] = 949;
avl[485] = 715;
avl[218] = 547;
avl[700] = 2060;
avl[563] = 1008;
avl[2173] = 2751;
avl[2828] = 1146;
avl[1097] = 2374;
avl[2465] = 1413;
avl[2965] = 2555;
avl[1954] = 1351;
avl[13] = 1011;
avl[2361] = 515;
avl[595] = 2577;
avl[2189] = 2464;
avl[1483] = 2763;
avl[1694] = 2492;
avl[575] = 1432;
avl[1023] = 1813;
avl[906] = 106;
avl[2493] = 257;
avl[2569] = 835;
avl[2920] = 2273;
avl[479] = 2338;
avl[1372] = 113;
avl[1842] = 1370;
avl[768] = 1368;
avl[134] = 2052;
avl[2268] = 2826;
avl[408] = 2329;
avl[1832] = 67;
avl[1248] = 2811;
avl[161] = 2041;
avl[500] = 2591;
avl[2471] = 2729;
avl[2140] = 710;
avl[2884] = 1065;
avl[846] = 204;
avl[953] = 547;
avl[1016] = 12;
avl[2525] = 1560;
avl[981] = 1594;
avl[357] = 669;
avl[297] = 1767;
avl[2319] = 2262;
avl[2214] = 1550;
avl[1971] = 1976;
avl[1540] = 246;
avl[1580] = 1565;
avl[2820] = 2360;
avl[84] = 2705;
avl[1370] = 105;
avl[1976] = 1197;
avl[2436] = 628;
avl[2786] = 545;
avl[2602] = 3045;
avl[2842] = 343;
avl[613] = 186;
avl[2233] = 926;
avl[1325] = 3035;
avl[765] = 2304;
avl[2299] = 1985;
avl[355] = 1296;
avl[955] = 1050;
avl[2744] = 3077;
avl[456] = 2529;
avl[1666] = 2216;
avl[565] = 1174;
avl[2744] = 1687;
avl[280] = 1888;
avl[760] = 1888;
avl[1414] = 1968;
avl[1678] = 2104;
avl[1194] = 2190;
avl[2002] = 3031;
avl[960] = 981;
avl[2125] = 2073;
avl[79] = 2210;
avl[415] = 1060;
avl[2154] = 2450;
avl[2473] = 1199;
avl[1939] = 2831;
avl[108] = 524;
avl[2962] = 2271;
avl[107] = 2006;
avl[60] = 2768;
avl[199] = 228;
avl[3122] = 2874;
avl[151] = 1943;
avl[1218] = 1189;
avl[2058] = 1088;
avl[1550] = 2676;
avl[569] = 470;
avl[1714] = 1602;
avl[887] = 2091;
avl[668] = 2922;
avl[1277] = 1994;
avl[6] = 2103;
avl[1383] = 1916;
avl[2357] = 2624;
avl[594] = 1687;
avl[2202] = 640;
avl[1983] = 883;
avl[2651] = 524;
avl[2882] = 2161;
avl[3107] = 2082;
avl[231] = 1214;
avl[1334] = 806;
avl[910] = 2835;
avl[1910] = 545;
avl[2697] = 2076;
avl[552] = 420;
avl[1436] = 2209;
avl[493] = 2106;
avl[2503] = 1359;
avl[1743] = 620;
avl[2216] = 506;
avl[1294] = 2974;
avl[3083] = 1826;
avl[2401] = 2507;
avl[1179] = 2715;
avl[3091] = 2735;
avl[324] = 2767;
avl[1929] = 2785;
avl[1959] = 927;
avl[1627] = 976;
avl[960] = 41;
avl[1767] = 231;
avl[2071] = 2696;
avl[1076] = 2800;
avl[200] = 283;
avl[1828] = 983;
avl[1907] = 1948;
avl[3033] = 924;
avl[2043] = 327;
avl[820] = 74;
avl[2408] = 2613;
avl[556] = 1443;
avl[3012] = 826;
avl[1940] = 2166;
avl[2612] = 1012;
avl[2862] = 798;
avl[1172] = 646;
avl[2012] = 2271;
avl[431] = 424;
avl[344] = 2261;
avl[2208] = 965;
avl[3016] = 2603;
avl[474] = 1568;
avl[1844] = 1930;
avl[1391] = 718;
avl[589] = 736;
avl[1596] = 2923;
avl[1486] = 1261;
avl[326] = 1779;
avl[632] = 2816;
avl[1577] = 3085;
avl[1584] = 383;
avl[2286] = 169;
avl[2102] = 1038;
avl[896] = 62;
avl[1877] = 1379;
avl[477] = 2089;
avl[2009] = 1580;
avl[1299] = 2658;
avl[1500] = 2196;
avl[1964] = 1968;
avl[2684] = 2600;
avl[2759] = 2431;
avl[43] = 17;
avl[1421] = 1394;
avl[2930] = 198;
avl[957] = 1207;
avl[2542] = 10;
avl[395] = 1655;
avl[2446] = 1821;
avl[1620] = 194;
avl[1292] = 2806;
avl[1343] = 1387;
avl[2104] = 2588;
avl[2059] = 1250;
avl[268] = 147;
avl[541] = 437;
avl[2974] = 1363;
avl[86] = 202;
avl[1] = 1432;
avl[1629] = 379;
avl[71] = 2283;
avl[2125] = 535;
avl[2725] = 1797;
avl[999] = 1239;
avl[3113] = 2863;
avl[2964] = 754;
avl[496] = 2403;
avl[1191] = 2964;
avl[2854] = 1499;
avl[2535] = 2176;
avl[1221] = 705;
avl[2683] = 130;
avl[1652] = 2746;
avl[163] = 902;
avl[1644] = 2006;
avl[1950] = 2296;
avl[981] = 2598;
avl[546] = 1678;
avl[1965] = 1393;
avl[2317] = 2052;
avl[1813] = 1943;
avl[164] = 2071;
avl[2250] = 1119;
avl[519] = 634;
avl[1505] = 648;
avl[984] = 1486;
avl[1924] = 130;
avl[3077] = 1681;
avl[2996] = 2301;
avl[3095] = 308;
avl[1293] = 2433;
avl[2273] = 2797;
avl[484] = 813;
avl[2929] = 1673;
avl[2912] = 2465;
avl[3124] = 628;
avl[658] = 1030;
avl[923] = 531;
avl[1618] = 1413;
avl[194] = 1158;
avl[771] = 1720;
avl[916] = 328;
avl[20] = 2619;
avl[2304] = 2317;
avl[2606] = 1698;
avl[1504] = 694;
avl[784] = 639;
avl[224] = 726;
avl[122] = 1410;
avl[1957] = 2332;
avl[2760] = 161;
avl[3079] = 498;
avl[3096] = 575;
avl[623] = 2388;
avl[2004] = 1418;
avl[1556] = 1144;
avl[1076] = 1897;
avl[1905] = 1347;
avl[1352] = 867;
avl[531] = 205;
avl[116] = 1335;
avl[1047] = 2789;
avl[144] = 1875;
avl[1907] = 1272;
avl[1109] = 1015;
avl[2502] = 757;
avl[854] = 105;
avl[3109] = 1340;
avl[2230] = 2178;
avl[2666] = 1583;
avl[1666] = 2945;
avl[279] = 1446;
avl[293] = 2488;
avl[2028] = 994;
avl[2672] = 767;
avl[2411] = 1059;
avl[2637] = 2098;
avl[1770] = 2082;
avl[1764] = 2282;
avl[1427] = 1259;
avl[879] = 2689;
avl[2657] = 2961;
avl[2155] = 2917;
avl[2713] = 1372;
avl[709] = 958;
avl[1703] = 1423;
avl[192] = 2727;
avl[2604] = 421;
avl[430] = 1628;
avl[3097] = 1489;
avl[1311] = 2137;
avl[363] = 780;
avl[2003] = 2445;
avl[2767] = 200;
avl[2407] = 1372;
avl[415] = 6;
avl[1416] = 2455;
avl[2633] = 2255;
avl[3084] = 1428;
avl[3032] = 408;
avl[2126] = 45;
avl[814] = 1897;
avl[1640] = 1740;
avl[144] = 895;
avl[2176] = 2376;
avl[2336] = 423;
avl[661] = 1020;
avl[1328] = 1655;
avl[1485] = 2442;
avl[2122] = 2929;
avl[2620] = 903;
avl[1972] = 2603;
avl[856] = 327;
avl[2277] = 186;
avl[2545] = 725;
avl[1197] = 257;
avl[1283] = 2652;
avl[1398] = 2101;
avl[590] = 2599;
avl[1181] = 1994;
avl[1035] = 1119;
avl[138] = 1444;
avl[1472] = 505;
avl[870] = 369;
avl[892] = 890;
avl[3040] = 694;
avl[2482] = 623;
avl[145] = 832;
avl[2523] = 2815;
avl[2560] = 2317;
avl[653] = 279;
avl[1991] = 2431;
avl[2262] = 846;
avl[325] = 605;
avl[1149] = 924;
avl[1009] = 894;
avl[2770] = 2423;
avl[1997] = 1403;
avl[2819] = 2482;
avl[2628] = 552;
avl[604] = 1444;
avl[311] = 3049;
avl[64] = 1035;
avl[2360] = 2904;
avl[2044] = 2100;
avl[1360] = 1132;
avl[1241] = 861;
avl[566] = 3011;
avl[109] = 1806;
avl[1675] = 1275;
avl[553] = 1386;
avl[1176] = 1449;
avl[527] = 369;
avl[1297] = 2870;
avl[1243] = 2262;
avl[29] = 328;
avl[2975] = 1517;
avl[572] = 749;
avl[1614] = 1956;
avl[2976] = 705;
avl[2888] = 462;
avl[120] = 2785;
avl[1152] = 950;
avl[1407] = 1918;
avl[1181] = 194;
avl[2004] = 627;
avl[728] = 367;
avl[1060] = 412;
avl[437] = 2799;
avl[434] = 1027;
avl[2703] = 1384;
avl[2821] = 326;
avl[541] = 1605;
avl[203] = 1221;
avl[2185] = 1548;
avl[851] = 819;
avl[1317] = 1995;
avl[65] = 1270;
avl[1520] = 766;
avl[4] = 2654;
avl[848] = 2562;
avl[2043] = 1450;
avl[834] = 2981;
avl[2302] = 2201;
avl[305] = 103;
avl[1578] = 1972;
avl[1021] = 1280;
avl[1726] = 744;
avl[2108] = 1670;
avl[1207] = 1292;
avl[596] = 1481;
avl[2920] = 1864;
avl[2605] = 203;
avl[2916] = 1154;
avl[2175] = 1289;
avl[106] = 2151;
avl[1467] = 38;
avl[476] = 2018;
avl[137] = 1662;
avl[3112] = 1544;
avl[1199] = 2458;
avl[2025] = 241;
avl[2521] = 2508;
avl[389] = 1967;
avl[2121] = 1808;
avl[2473] = 1662;
avl[946] = 1161;
avl[1862] = 152;
avl[3038] = 140;
avl[507] = 1456;
avl[1267] = 2490;
avl[2791] = 2964;
avl[620] = 2899;
avl[1673] = 485;
avl[726] = 2452;
avl[2756] = 2496;
avl[43] = 1499;
avl[1772] = 2202;
avl[2867] = 757;
avl[1392] = 2598;
avl[3033] = 960;
avl[1689] = 2709;
avl[978] = 1008;
avl[1614] = 562;
avl[2577] = 2328;
avl[2191] = 1707;
avl[752] = 1675;
avl[2485] = 394;
avl[2169] = 1654;
avl[2257] = 1129;
avl[529] = 316;
avl[1377] = 897;
avl[1792] = 3042;
avl[1249] = 2703;
avl[2630] = 50;
avl[2208] = 983;
avl[219] = 1479;
avl[1275] = 670;
avl[18] = 2327;
avl[1437] = 2264;
avl[3077] = 1684;
avl[1198] = 2408;
avl[2027] = 748;
avl[2011] = 53;
avl[1767] = 303;
avl[6] = 2710;
avl[2654] = 2537;
avl[1561] = 1802;
avl[101] = 1775;
avl[931] = 2629;
avl[2858] = 3013;
avl[258] = 2703;
avl[2296] = 41;
avl[2344] = 2896;
avl[1873] = 2614;
avl[1841] = 2563;
avl[748] = 1325;
avl[1317] = 918;
avl[1658] = 212;
avl[407] = 2682;
avl[297] = 643;
avl[2860] = 2871;
avl[1768] = 1184;
avl[1454] = 804;
avl[2096] = 308;
avl[579] = 541;
avl[598] = 702;
avl[701] = 2192;
avl[196] = 1419;
avl[1749] = 355;
avl[760] = 1319;
avl[2306] = 1299;
avl[2673] = 129;
avl[439] = 2711;
avl[2325] = 1592;
avl[1374] = 1166;
avl[2673] = 99;
avl[833] = 1326;
avl[508] = 1292;
avl[1701] = 2261;
avl[1276] = 2777;
avl[387] = 1156;
avl[1818] = 298;
avl[266] = 491;
avl[60] = 2707;
avl[2849] = 1456;
avl[2072] = 1476;
avl[1114] = 3061;
avl[103] = 813;
avl[274] = 774;
avl[2164] = 2036;
avl[1398] = 926;
avl[13] = 2617;
avl[824] = 2185;
avl[752] = 800;
avl[384] = 2012;
avl[1170] = 398;
avl[1901] = 2428;
avl[76] = 3066;
avl[821] = 2388;
avl[1079] = 1126;
avl[766] = 1210;
avl[1718] = 1754;
avl[179] = 2362;
avl[2352] = 1169;
avl[1652] = 834;
avl[1877] = 388;
avl[56] = 884;
avl[1380] = 2485;
avl[471] = 1778;
avl[1042] = 1651;
avl[3081] = 1732;
avl[2519] = 3058;
avl[1057] = 281;
avl[3117] = 736;
avl[626] = 2330;
avl[2455] = 2557;
avl[2571] = 2672;
avl[572] = 2684;
avl[432] = 2484;
avl[2672] = 2382;
avl[389] = 890;
avl[2646] = 696;
avl[245] = 2849;
avl[500] = 1604;
avl[822] = 749;
avl[152] = 2503;
avl[2648] = 184;
avl[1556] = 2236;
avl[2910] = 2048;
avl[1520] = 1928;
avl[1378] = 1153;
avl[1651] = 2694;
avl[2725] = 702;
avl[1180] = 1784;
avl[1417] = 636;
avl[2917] = 1187;
avl[2449] = 684;
avl[2110] = 59;
avl[748] = 1975;
avl[2754] = 1158;
avl[470] = 1784;
avl[2236] = 2937;
avl[1975] = 639;
avl[2957] = 882;
avl[1843] = 1062;
avl[1217] = 2241;
avl[2315] = 2456;
avl[1812] = 756;
avl[2874] = 2796;
avl[2271] = 1938;
avl[256] = 97;
avl[143] = 2729;
avl[1393] = 1941;
avl[154] = 1075;
avl[3049] = 1346;
avl[1159] = 1805;
avl[2159] = 2176;
avl[2795] = 1271;
avl[3008] = 503;
avl[2998] = 2440;
avl[1604] = 2760;
avl[1335] = 803;
avl[836] = 1909;
avl[885] = 1790;
avl[2618] = 764;
avl[427] = 5;
avl[2975] = 1217;
avl[1824] = 2657;
avl[2208] = 2865;
avl[2950] = 148;
avl[2115] = 1859;
avl[2071] = 2033;
avl[2317] = 2313;
avl[1747] = 1782;
avl[1133] = 1988;
avl[95] = 69;
avl[2318] = 671;
avl[2821] = 1903;
avl[235] = 1577;
avl[576] = 251;
avl[628] = 2533;
avl[844] = 816;
avl[2373] = 3020;
avl[2269] = 2951;
avl[2190] = 1148;
avl[3085] = 1289;
avl[1279] = 1658;
avl[1493] = 2844;
avl[2322] = 256;
avl[2162] = 183;
avl[689] = 670;
avl[493] = 760;
avl[2949] = 2206;
avl[411] = 1056;
avl[2263] = 2295;
avl[966] = 1448;
avl[3098] = 697;
avl[3019] = 31;
avl[2374] = 2196;
avl[1290] = 1554;
avl[261] = 1410;
avl[1744] = 2832;
avl[2271] = 2280;
avl[364] = 2419;
avl[2053] = 2403;
avl[1568] = 2119;
avl[2048] = 429;
avl[1287] = 1974;
avl[2900] = 2421;
avl[2835] = 922;
avl[219] = 1404;
avl[299] = 350;
avl[348] = 2579;
avl[3096] = 2636;
avl[1767] = 331;
avl[1955] = 1946;
avl[322] = 2830;
avl[2786] = 652;
avl[1014] = 2582;
avl[1639] = 2811;
avl[546] = 1276;
avl[1788] = 1765;
avl[2131] = 288;
avl[1162] = 2367;
avl[1767] = 756;
avl[518] = 42;
avl[196] = 651;
avl[2746] = 2624;
avl[791] = 2914;
avl[2383] = 230;
avl[1459] = 301;
avl[3061] = 2349;
avl[1599] = 2203;
avl[2411] = 1617;
avl[2126] = 2899;
avl[1627] = 71;
avl[362] = 317;
avl[2565] = 282;
avl[2848] = 2218;
avl[3061] = 1239;
avl[1764] = 1461;
avl[1865] = 1100;
avl[2232] = 172;
avl[1199] = 896;
avl[386] = 2261;
avl[2494] = 1351;
avl[946] = 1557;
avl[191] = 1697;
avl[185] = 43;
avl[2789] = 223;
avl[1707] = 2895;
avl[1988] = 1449;
avl[94] = 1330;
avl[698] = 2018;
avl[1715] = 69;
avl[1587] = 2859;
avl[383] = 500;
avl[2283] = 2024;
avl[2356] = 2619;
avl[2798] = 2035;
avl[827] = 2877;
avl[359] = 159;
avl[1678] = 544;
avl[2874] = 1905;
avl[1902] = 1658;
avl[720] = 1408;
avl[2214] = 2652;
avl[943] = 861;
avl[2411] = 3011;
avl[1356] = 2799;
avl[2165] = 9;
avl[1578] = 222;
avl[1791] = 949;
avl[2707] = 18;
avl[1333] = 768;
avl[2701] = 1514;
avl[1706] = 2819;
avl[403] = 1453;
avl[2594] = 1543;
avl[1401] = 1056;
avl[2686] = 2795;
avl[960] = 2243;
avl[1643] = 2865;
avl[1356] = 305;
avl[1496] = 1942;
avl[2536] = 68;
avl[2158] = 1081;
avl[124] = 1434;
avl[1360] = 1940;
avl[3051] = 1812;
avl[1904] = 587;
avl[556] = 177;
avl[2433] = 1872;
avl[432] = 1451;
avl[609] = 38;
avl[2515] = 2492;
avl[196] = 2619;
avl[1675] = 3046;
avl[1493] = 2002;
avl[2031] = 14;
avl[632] = 1294;
avl[2530] = 794;
avl[2111] = 1678;
avl[1920] = 2945;
avl[1407] = 1797;
avl[1311] = 1915;
avl[2120] = 835;
avl[1662] = 818;
avl[176] = 1732;
avl[2591] = 2290;
avl[498] = 2956;
avl[1204] = 2836;
avl[105] = 2549;
avl[1420] = 2568;
avl[1967] = 2554;
avl[2660] = 1054;
avl[2749] = 937;
avl[1188] = 2732;
avl[1838] = 436;
avl[213] = 2012;
avl[1729] = 1759;
avl[2144] = 1750;
avl[2346] = 1275;
avl[2983] = 1531;
avl[805] = 654;
avl[183] = 310;
avl[1912] = 2446;
avl[972] = 1833;
avl[1415] = 1956;
avl[875] = 2545;
avl[2721] = 1609;
avl[16] = 336;
avl[2393] = 113;
avl[300] = 460;
avl[2232] = 5;
avl[1276] = 345;
avl[1075] = 1793;
avl[2799] = 2440;
avl[2816] = 1497;
avl[2872] = 2141;
avl[2755] = 2011;
avl[2203] = 2040;
avl[1467] = 1049;
avl[1750] = 333;
avl[115] = 193;
avl[2923] = 1830;
avl[1959] = 113;
avl[129] = 567;
avl[1452] = 0;
avl[2784] = 2982;
avl[1613] = 63;
avl[2166] = 62;
avl[1651] = 2389;
avl[698] = 1877;
avl[1660] = 303;
avl[948] = 1201;
avl[2726] = 2425;
avl[2637] = 1833;
avl[1896] = 1415;
avl[1997] = 2661;
avl[1713] = 1106;
avl[1595] = 186;
avl[1122] = 631;
avl[1582] = 1832;
avl[2967] = 2377;
avl[2926] = 1974;
avl[2721] = 1473;
avl[1764] = 2909;
avl[1105] = 811;
avl[661] = 1109;
avl[592] = 1849;
avl[1678] = 6;
avl[2370] = 2056;
avl[2182] = 1220;
avl[2834] = 1469;
avl[223] = 588;
avl[2297] = 299;
avl[2303] = 2717;
avl[2891] = 1542;
avl[1180] = 2140;
avl[3095] = 2074;
avl[2530] = 261;
avl[1633] = 873;
avl[2967] = 2276;
avl[592] = 3010;
avl[1824] = 1693;
avl[660] = 2676;
avl[2935] = 694;
avl[575] = 738;
avl[1455] = 3012;
avl[859] = 1165;
avl[1870] = 830;
avl[1737] = 1830;
avl[2341] = 1120;
avl[1428] = 1197;
avl[1301] = 291;
avl[2811] = 164;
avl[135] = 1768;
avl[1535] = 389;
avl[1536] = 591;
avl[2045] = 1251;
avl[2187] = 439;
avl[2615] = 1650;
avl[687] = 1813;
avl[3059] = 1039;
avl[1250] = 543;
avl[1033] = 3000;
avl[1770] = 17;
avl[1333] = 2324;
avl[1170] = 1463;
avl[14] = 946;
avl[2099] = 1;
avl[800] = 664;
avl[169] = 75;
avl[496] = 142;
avl[1142] = 1218;
avl[2432] = 1674;
avl[1067] = 1034;
avl[1073] = 373;
avl[2121] = 2293;
avl[1516] = 2551;
avl[531] = 2738;
avl[2982] = 1669;
avl[1439] = 1432;
avl[1414] = 523;
avl[2385] = 354;
avl[2254] = 2994;
avl[1387] = 2225;
avl[2071] = 985;
avl[2437] = 891;
avl[1328] = 1317;
avl[1056] = 2386;
avl[1001] = 927;
avl[1427] = 219;
avl[2951] = 1056;
avl[1450] = 1718;
avl[2324] = 1224;
avl[1066] = 746;
avl[781] = 705;
avl[1958] = 1392;
avl[585] = 1927;
avl[1957] = 966;
avl[1709] = 630;
avl[1226] = 2655;


return 0;
}
