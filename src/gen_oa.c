/* Straight-line functions with calls and guards (batch gen_oa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o1200_uchar { char p[0x1200]; unsigned char v; };
struct o124_uchar { char p[0x124]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o180_uchar { char p[0x180]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o381C_short { char p[0x381C]; short v; };
struct o382C_short { char p[0x382C]; short v; };
struct o382E_short { char p[0x382E]; short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_short { char p[0x3830]; short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o3834_ushort { char p[0x3834]; unsigned short v; };
struct o3836_ushort { char p[0x3836]; unsigned short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uchar { char p[0x44]; unsigned char v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o52_uchar { char p[0x52]; unsigned char v; };
struct o53_uchar { char p[0x53]; unsigned char v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c01599c(void);
int FUN_0c016d00(int, int, int, int);
int FUN_0c017098(void);
int FUN_0c0170ae(void);
int FUN_0c017104(int, ...);
int FUN_0c017160(int);
int FUN_0c01718c(void);
int FUN_0c0171cc(void);
int FUN_0c0171f0(void);
int FUN_0c017234(void);
int FUN_0c017292(void);
int FUN_0c017314(void);
int FUN_0c0173bc(int, int);
int FUN_0c0173e6(int, ...);
int FUN_0c01742e(int);
int FUN_0c01746e(int, ...);
int FUN_0c017538(int, ...);
int FUN_0c01760a(void);
int FUN_0c017622(void);
int FUN_0c01763a(void);
int FUN_0c017696(void);
int FUN_0c0176ba(void);
int FUN_0c017be8(void);
int FUN_0c017c70(int, int, int, int);
int FUN_0c017c96(void);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c025564(void);
int FUN_0c02568a(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c04340c(void);
int FUN_0c04da80(void);
int FUN_0c04db9a(void);
int FUN_0c04dd38(void);
int FUN_0c04de60(int, int);
int FUN_0c04def0(int, int);
int FUN_0c04e008(void);
int FUN_0c04e7b6(int, int);
int FUN_0c04e8cc(void);
int FUN_0c04e986(int, int);
int FUN_0c04f098(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05af8a(void);
int FUN_0c05b0be(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c067008(int);
int FUN_0c067294(int);
int FUN_0c0676ce(int);
int FUN_0c06bf38(int, int, int, int);
int FUN_0c070320(int);
int FUN_0c074862(int, int, int, int);
int FUN_0c07bac8(int);
int FUN_0c07bb0c(int, int, int, int);
int FUN_0c07c108(int);
int FUN_0c07c364(int);
int FUN_0c07c404(int);
int FUN_0c07c436(void);
int FUN_0c07c858(int);
int FUN_0c07cf5c(int);
int FUN_0c07d030(int, int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0b2c18(int);
int FUN_0c0b551e(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c418c(int);
int FUN_0c0ccfc0(int);
int FUN_0c1272a8(int, int);
int FUN_0c14e040(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c1717bc(void);
int FUN_0c1717f0(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1718d4(int, int);
int FUN_0c17193c(int, int);
int FUN_0c171984(int, int);
int FUN_0c171ebe(int);
int FUN_0c171f0c(int);
int FUN_0c172030(int, int, int, int, int, int, int);
int FUN_0c1723b4(int, int, int, int, int, int);
int FUN_0c17244a(int, int);
int FUN_0c173304(int, int);
int FUN_0c173370(void);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187798(int, int, int);
extern int FUN_0c187990();
int FUN_0c1879e0(int, int);
int FUN_0c187cac(int, int, int, int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c0385e0(int, int);
int FUN_0c1736e8(int a4);
int FUN_0c06bb0c(int a4, int a5, int a6);
int FUN_0c08fb74(int a4);
int FUN_0c04d76c(void);
int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c026888(int a4, int a5, int a6);
int FUN_0c015f5c(void);
int FUN_0c0cd5c0(int a4, int a5, int a6, int a7);

int FUN_0c1736e8(int a4)
{
    int stk[14];
    register int t7;
    register int t10;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t59;
    register int t63;
    register int t97;
    register int t116;
    register int t133;
    register int t137;
    register int t171;
    register int t175;
    register int t180;
    register int t199;
    register int t220;
    register int t242;
    register int t265;
    register int t293;
    register int t312;
    register int t334;
    register int t378;
    register int t402;
    register int t407;
    register int t426;
    register int t447;
    register int t469;
    register int t492;
    register int t497;
    register int t516;
    register int t537;
    register int t559;
    register int t582;
    register int t587;
    register int t606;
    register int t627;
    register int t649;
    register int t672;
    register int t677;
    register int t696;
    register int t717;
    register int t739;
    register int t762;
    register int t767;
    register int t786;
    register int t807;
    register int t829;
    register int t852;
    register int t857;
    register int t876;
    register int t897;
    register int t919;
    register int t1000;
    register int t1005;
    register int t1024;
    register int t1045;
    register int t1067;
    register int t1098;
    register int t1103;
    register float u1105;
    register int t1119;
    register int t1148;
    register int t1167;
    register int t1191;
    register int t1195;
    register int t1197;
    register int t1205;
    register int t1207;
    register int t1215;
    register int t1217;
    register int t1225;
    register int t1230;
    register int t1235;
    register int t1242;
    register int t1270;
    register int t1298;
    register float u1301;
    register int t1319;
    register float u1322;
    register int t1340;
    register float u1343;
    register int t1379;
    register int t1389;
    register int t1401;
    register int t1441;
    register int t1460;
    register int t1477;
    register int t1480;
    register int t1504;
    register int t1552;
    register int t1571;
    register int t1588;
    register int t1592;
    register int t1610;
    register int t1616;
    register int t1629;
    register int t1636;
    register int t1644;
    register int t1647;
    register int t1650;
    register int t1859;
    register int t1669;
    register int t1688;
    register int t1705;
    register int t1708;
    register int t1716;
    register int t1720;
    register int t1723;
    register int t1729;
    register int t1748;
    register int t1752;
    register int t1755;
    register int t1773;
    register int t1775;
    register int t1776;
    register int t1778;
    register int t1784;
    register int t1790;
    register int t1796;
    register int t1798;
    register int t1799;
    register int t1801;
    register int t1807;
    register int t1813;
    register int t1833;
    register int t1836;
    register int t1847;
    register int t1852;
    register int t1883;
    register int t1905;
    register int t1924;
    register int t1941;
    register int t1945;
    register int t1966;
    register int t1970;
    register int t1976;
    register int t1978;
    register int t1990;
    register int t2003;
    register int t2016;
    register int t2029;
    register int t2030;
    register int t2039;
    register int t2048;
    register float u2050;
    register float u2051;
    int t2073;
    register int t2074;
    register int t2077;
    register int t2079;
    register int t2082;
    register int t2088;
    register int t2089;
    register int t2105;
    register int t2106;
    register int t2110;
    register int t2111;
    register int t2132;
    register int t2141;
    register int t2149;
    register int t2150;
    register int t2152;
    register int t2161;
    register int t2162;
    register int t2164;
    register int t2174;
    register int t2175;
    register int t2183;
    register int t2235;
    register int t2237;
    register int t2252;
    register int t2268;
    register int t2270;
    register int t2287;
    register int t2289;
    register int t2291;
    register int t2297;
    register int t2314;
    register int t2316;
    register int t2318;
    register int t2325;
    register int t2328;
    register int t2331;
    register int t2340;
    register int t2341;
    register float u2344;
    register int t2351;
    register int t2356;
    register int t2358;
    register int t2360;
    register int t2367;
    register int t2370;
    register int t2373;
    register int t2382;
    register int t2383;
    register float u2386;
    register int t2395;
    register int t2417;
    register int t2433;
    register int t2436;
    register int t2439;
    register int t2448;
    register int t2449;
    register float u2452;
    register int t2466;
    register int t2470;
    register int t2473;
    register int t2476;
    register int t2485;
    register int t2486;
    register float u2489;
    register int t2501;
    register int t2529;
    register int t2557;
    register int t2586;
    register float u2588;
    register int t2594;
    register int t2595;
    register float u2598;
    register int t2600;
    register float u2602;
    register int t2608;
    register float u2609;
    register int t2648;
    register int t2670;
    register int t2701;
    register int t2705;
    register int t2708;
    register int t2711;
    register int t2720;
    register int t2721;
    register float u2724;
    register int t2743;
    register int t2766;
    register int t2768;
    register int t2769;
    register int t2775;
    register int t1873;
    int t1396;
    register int t1869;
    int t1502;
    int t1510;
    int t1517;
    int t1524;
    int t1531;
    register int t1864;
    register int t2644;
    register int t2645;
    int t2646;
    register int t2647;
    int t2668;
    register int t2669;

    (((struct o23_uchar *)(((int)stk + 12)))->v) = a4;
    *(unsigned int *)(((int)stk + 40)) = (((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938) + 0xC532498);
    *(unsigned int *)(((int)stk + 36)) = (((short)(*(signed char *)(((int)stk + 47))) * (short)0x58) + 0xC475DC8);
    FUN_0c07c364((*(int *)(((int)stk + 40))));
    FUN_0c173304((*(int *)(((int)stk + 36))), (*(signed char *)(((int)stk + 47))));
    t7 = *(signed char *)(((int)stk + 47));
    if (((unsigned short)(*(short *)((((((t7 << 2) + t7) << 2) << 1) + 0xC542868))) & 0x8000) != 0) {
        t10 = *(int *)(((int)stk + 36));
        *(unsigned char *)((t10 + 0x0)) = ((*(signed char *)((t10 + 0x0))) + 0x1);
        if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x0))) >= (int)0x5) {
            *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x0)) = 0x0;
        }
        if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x0))) == 0) {
            (((struct oA8_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x1;
            (((struct o124_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
            (((struct o124_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
        }
        t28 = *(int *)(((int)stk + 36));
        (((struct o3C_uchar *)(t28))->v) = 0x0;
        *(unsigned char *)((t28 + 0x1)) = 0x0;
        *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
        t30 = *(int *)(((int)stk + 36));
        *(unsigned char *)(((0x6 + t30) + 0x0)) = 0x0;
        *(unsigned char *)((t30 + 0x9)) = 0x0;
        t31 = *(int *)(((int)stk + 36));
        *(unsigned char *)(((0xA + t31) + 0x0)) = 0x0;
        *(unsigned char *)((t31 + 0x7)) = 0x0;
        t32 = *(int *)(((int)stk + 36));
        t33 = *(signed char *)(((((int)stk + 12) + 0x23) + 0x0));
        *(unsigned char *)(((0x8 + t32) + 0x0)) = t33;
        *(unsigned char *)((t32 + 0x5)) = t33;
        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
        FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
        (((struct o20_float *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o28_float *)((*(int *)(((int)stk + 40)))))->v));
        (((struct o24_float *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o2C_float *)((*(int *)(((int)stk + 40)))))->v));
        (((struct o28_float *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o30_float *)((*(int *)(((int)stk + 40)))))->v));
    }
    FUN_0c17244a((*(int *)(((int)stk + 36))), (*(signed char *)(((int)stk + 47))));
    t59 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x0));
    if (t59 != 0) {
        if (t59 == 1) {
            t63 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x1));
            switch (t63) {
            case 0:
                *(unsigned int *)(((int)stk + 28)) = 0x13;
                break;
            case 1:
                *(unsigned int *)(((int)stk + 28)) = 0x13;
                break;
            case 2:
                *(unsigned int *)(((int)stk + 28)) = 0x13;
                break;
            case 3:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            case 4:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            case 5:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            case 6:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            case 7:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            case 8:
                *(unsigned int *)(((int)stk + 28)) = 0xE;
                break;
            }
            if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x2000) != 0) {
                if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) {
                    t97 = *(int *)(((int)stk + 36));
                    (((struct o3C_uchar *)(t97))->v) = ((*(signed char *)((t97 + 0x3C))) - 1);
                } else {
                    (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 28))) - 1);
                }
            }
            if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x1000) != 0) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                    t116 = *(int *)(((int)stk + 36));
                    (((struct o3C_uchar *)(t116))->v) = ((*(signed char *)((t116 + 0x3C))) + 0x1);
                } else {
                    (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                }
            }
            if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0xC00) == 0) {
            } else {
                t133 = 0x1;
                if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x800) != 0) {
                    t133 = 0xFFFFFFFF;
                }
                *(unsigned int *)(((int)stk + 32)) = t133;
                if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) == 0) {
                    t137 = *(int *)(((int)stk + 36));
                    *(unsigned char *)((t137 + 0x1)) = ((*(signed char *)((t137 + 0x1))) + (*(int *)(((int)stk + 32))));
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) < 0) {
                        *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x1)) = 0x8;
                    }
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) > (int)0x8) {
                        *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x1)) = 0x0;
                    }
                    FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                    *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                    (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                    (((struct o18_float *)((*(int *)(((int)stk + 36)))))->v) = 1.0f;
                    if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) == 3) {
                        (((struct o18_float *)((*(int *)(((int)stk + 36)))))->v) = 5.0f;
                    }
                }
                t171 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x1));
                switch (t171) {
                case 0:
                    t1000 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t1000 != 1) {
                        if (t1000 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct oC_int *)0xC4B40CC)->v))));
                            t1005 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t1005))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t1005 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t1024 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t1024) + 0x0)) = 0x0;
                            *(unsigned char *)((t1024 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t1045 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t1045 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t1045))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct oC_int *)0xC4B40CC)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct oC_int *)0xC4B40CC)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t1067 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t1067) + 0x0)) = 0x0;
                        *(unsigned char *)((t1067 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 1:
                    t175 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t175 != 1) {
                        if (t175 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o0_int *)0xC4B40CC)->v))));
                            t180 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t180))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t180 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t199 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t199) + 0x0)) = 0x0;
                            *(unsigned char *)((t199 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t220 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t220 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t220))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o0_int *)0xC4B40CC)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o0_int *)0xC4B40CC)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t242 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t242) + 0x0)) = 0x0;
                        *(unsigned char *)((t242 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 2:
                    t265 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t265 != 1) {
                        if (t265 != 2) {
                        } else {
                            if ((*(signed char *)((0xC53249A + ((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938)))) != 12) {
                                if ((*(signed char *)((0xC53249A + ((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938)))) == 13) {
                                    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((*(signed char *)(((int)stk + 47))) << 2) << 1) + 0xC4B40E0)));
                                } else {
                                    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(signed char *)(((int)stk + 47))) << 2) + 0xC4B40FC)));
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((*(signed char *)(((int)stk + 47))) << 2) << 1) + 0xC4B40E0)));
                            }
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), (*(int *)(((int)stk + 12)))));
                            t293 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t293))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t293 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t312 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t312) + 0x0)) = 0x0;
                            *(unsigned char *)((t312 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t334 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t334 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t334))));
                        if ((*(signed char *)((0xC53249A + ((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938)))) != 12) {
                            if ((*(signed char *)((0xC53249A + ((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938)))) == 13) {
                                *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((*(signed char *)(((int)stk + 47))) << 2) << 1) + 0xC4B40E0)));
                            } else {
                                *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(signed char *)(((int)stk + 47))) << 2) + 0xC4B40FC)));
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((*(signed char *)(((int)stk + 47))) << 2) << 1) + 0xC4B40E0)));
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)(((*(int *)(((int)stk + 12))) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)(((*(int *)(((int)stk + 12))) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t378 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t378) + 0x0)) = 0x0;
                        *(unsigned char *)((t378 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 3:
                    t402 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t402 != 1) {
                        if (t402 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o4_int *)0xC4B40CC)->v))));
                            t407 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t407))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t407 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t426 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t426) + 0x0)) = 0x0;
                            *(unsigned char *)((t426 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t447 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t447 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t447))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o4_int *)0xC4B40CC)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o4_int *)0xC4B40CC)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t469 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t469) + 0x0)) = 0x0;
                        *(unsigned char *)((t469 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 4:
                    t492 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t492 != 1) {
                        if (t492 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o0_int *)0xC4B410C)->v))));
                            t497 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t497))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t497 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t516 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t516) + 0x0)) = 0x0;
                            *(unsigned char *)((t516 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t537 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t537 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t537))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t559 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t559) + 0x0)) = 0x0;
                        *(unsigned char *)((t559 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 6:
                    t582 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t582 != 1) {
                        if (t582 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o0_int *)0xC4B410C)->v))));
                            t587 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t587))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t587 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t606 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t606) + 0x0)) = 0x0;
                            *(unsigned char *)((t606 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t627 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t627 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t627))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t649 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t649) + 0x0)) = 0x0;
                        *(unsigned char *)((t649 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 7:
                    t672 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t672 != 1) {
                        if (t672 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o0_int *)0xC4B410C)->v))));
                            t677 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t677))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t677 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t696 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t696) + 0x0)) = 0x0;
                            *(unsigned char *)((t696 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t717 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t717 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t717))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o0_int *)0xC4B410C)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t739 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t739) + 0x0)) = 0x0;
                        *(unsigned char *)((t739 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 5:
                    t762 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t762 != 1) {
                        if (t762 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o8_int *)0xC4B40CC)->v))));
                            t767 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t767))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t767 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t786 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t786) + 0x0)) = 0x0;
                            *(unsigned char *)((t786 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t807 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t807 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t807))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o8_int *)0xC4B40CC)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o8_int *)0xC4B40CC)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t829 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t829) + 0x0)) = 0x0;
                        *(unsigned char *)((t829 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                case 8:
                    t852 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t852 != 1) {
                        if (t852 != 2) {
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (FUN_0c037320((*(short *)(((*(int *)(((int)stk + 36))) + 0xE))), ((((struct o4_int *)0xC4B410C)->v))));
                            t857 = *(int *)(((int)stk + 36));
                            (((struct o10_uchar *)(t857))->v) = ((*(int *)(((int)stk + 32))) + (*(signed char *)((t857 + 0x10))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) >= (int)(*(int *)(((int)stk + 16)))) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x10))) < (int)0xFFFFFFFF) {
                                (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 16))) - 1);
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            t876 = *(int *)(((int)stk + 36));
                            *(unsigned char *)(((0x7 + t876) + 0x0)) = 0x0;
                            *(unsigned char *)((t876 + 0x6)) = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) == 0) {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                    } else {
                        t897 = *(int *)(((int)stk + 36));
                        *(unsigned short *)((t897 + 0xE)) = ((*(short *)(((int)stk + 32))) + (*(short *)((0xE + t897))));
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) >= (int)(*(int *)((((((struct o4_int *)0xC4B410C)->v)) + 0xC)))) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = 0x0;
                        }
                        if ((int)(*(short *)(((*(int *)(((int)stk + 36))) + 0xE))) < 0) {
                            *(unsigned short *)(((*(int *)(((int)stk + 36))) + 0xE)) = ((*(short *)((((((struct o4_int *)0xC4B410C)->v)) + 0xC))) - 1);
                        }
                        FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                        t919 = *(int *)(((int)stk + 36));
                        *(unsigned char *)(((0x7 + t919) + 0x0)) = 0x0;
                        *(unsigned char *)((t919 + 0x6)) = 0x0;
                        (((struct o10_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0xFFFFFFFF;
                        if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) == 0) {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x0));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                    }
                    break;
                }
                t1098 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                if ((unsigned int)(t1098 - 3) >= (unsigned int)0x10) {
                } else {
                    switch (((t1098 - 3) << 1)) {
                        case 0:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                                t1103 = *(int *)(((int)stk + 36));
                                u1105 = ((((struct o18_float *)(t1103))->v));
                                u1105 = u1105 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o18_float *)(t1103))->v) = u1105;
                                if (0.0f > ((((struct o18_float *)((*(int *)(((int)stk + 36)))))->v))) {
                                    (((struct o18_float *)((*(int *)(((int)stk + 36)))))->v) = 0.0f;
                                }
                            }
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 2:
                        {
                            t1119 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t1119 + 0x5)) = ((*(signed char *)((t1119 + 0x5))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))) < (int)0xFFFFFFFF) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x5)) = 0x3;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))) > (int)0x3) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x5)) = 0xFFFFFFFF;
                            }
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x1));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                            break;
                        case 4:
                        {
                            t1148 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t1148 + 0x7)) = ((*(signed char *)((t1148 + 0x7))) + (*(int *)(((int)stk + 32))));
                            FUN_0c171ebe((*(signed char *)(((int)stk + 47))));
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x1));
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                            break;
                        case 6:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) == 0) {
                            } else {
                                t1167 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t1167 + 0xB)) = ((*(signed char *)((t1167 + 0xB))) + (*(int *)(((int)stk + 32))));
                                *(unsigned int *)(((int)stk + 24)) = 0xB;
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0xB))) > (int)0xB) {
                                    *(unsigned char *)(((0xB + (*(int *)(((int)stk + 36)))) + 0x0)) = 0x0;
                                }
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0xB))) < 0) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0xB)) = (*(signed char *)(((int)stk + 24)));
                                }
                                FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                            }
                        }
                            break;
                        case 8:
                        {
                            t1191 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t1191 + 0xC)) = (((*(signed char *)((t1191 + 0xC))) + (*(int *)(((int)stk + 32)))) & 0x3);
                        }
                            break;
                        case 10:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1195 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1195 + 0x2C)) = ((*(int *)((t1195 + 0x2C))) + 0x100);
                            } else {
                                t1197 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1197 + 0x2C)) = ((*(int *)((t1197 + 0x2C))) - 0x100);
                            }
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 12:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1205 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1205 + 0x30)) = ((*(int *)((t1205 + 0x30))) + 0x100);
                            } else {
                                t1207 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1207 + 0x30)) = ((*(int *)((t1207 + 0x30))) - 0x100);
                            }
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 14:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1215 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1215 + 0x34)) = ((*(int *)((t1215 + 0x34))) + 0x100);
                            } else {
                                t1217 = *(int *)(((int)stk + 36));
                                *(unsigned int *)((t1217 + 0x34)) = ((*(int *)((t1217 + 0x34))) - 0x100);
                            }
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 16:
                        {
                            t1225 = *(int *)(((int)stk + 36));
                            (((struct o20_float *)(t1225))->v) = (((((struct o20_float *)(t1225))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 18:
                        {
                            t1230 = *(int *)(((int)stk + 36));
                            (((struct o24_float *)(t1230))->v) = (((((struct o24_float *)(t1230))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 20:
                        {
                            t1235 = *(int *)(((int)stk + 36));
                            (((struct o28_float *)(t1235))->v) = (((((struct o28_float *)(t1235))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 22:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) == 0) {
                            } else {
                                t1242 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                                (((struct oAA_uchar *)(t1242))->v) = ((*(signed char *)((t1242 + 0xAA))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) + 0xAA))) < 0) {
                                    (((struct oAA_uchar *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0x3;
                                }
                                if ((int)(*(signed char *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) + 0xAA))) < (int)0x4) {
                                } else {
                                    (((struct oAA_uchar *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0x0;
                                }
                            }
                        }
                            break;
                        case 24:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                                t1270 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                                (((struct oAB_uchar *)(t1270))->v) = ((*(signed char *)((t1270 + 0xAB))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) + 0xAB))) < 0) {
                                    (((struct oAB_uchar *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0x8;
                                }
                                if ((int)(*(signed char *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) + 0xAB))) >= (int)0x9) {
                                    (((struct oAB_uchar *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0x0;
                                }
                            }
                        }
                            break;
                        case 26:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                                t1298 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                                u1301 = ((((struct o40_float *)(t1298))->v));
                                u1301 = u1301 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o40_float *)(t1298))->v) = u1301;
                                if (0.0f > ((((struct o40_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v))) {
                                    (((struct o40_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                        case 28:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                                t1319 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                                u1322 = ((((struct o44_float *)(t1319))->v));
                                u1322 = u1322 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o44_float *)(t1319))->v) = u1322;
                                if (0.0f > ((((struct o44_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v))) {
                                    (((struct o44_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                        default:
                        {
                            if ((*(int *)(((*(int *)(((int)stk + 36))) + 0x38))) != 0) {
                                t1340 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                                u1343 = ((((struct o48_float *)(t1340))->v));
                                u1343 = u1343 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o48_float *)(t1340))->v) = u1343;
                                if (0.0f > ((((struct o48_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v))) {
                                    (((struct o48_float *)((*(int *)(((*(int *)(((int)stk + 36))) + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                    }
                }
            }
            t1379 = *(signed char *)(((int)stk + 47));
            t1873 = 0xC542868;
            if (((unsigned short)(*(short *)((((((t1379 << 2) + t1379) << 2) << 1) + 0xC542868))) & 0x200) == 0) {
            } else {
                t1389 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x1));
                t1873 = t1389;
                if (t1389 != 0) {
                } else {
                    if (((*(signed char *)((0x3C + (*(int *)(((int)stk + 36)))))) != 4) && (t1396 = *(int *)(((int)stk + 36)), t1873 = *(signed char *)((0x3C + t1396)), t1873 != 5)) {
                    } else {
                        t1401 = *(int *)(((*(int *)(((int)stk + 36))) + 0x38));
                        t1873 = (FUN_0c171ebe((*(signed char *)(((int)stk + 47)))));
                        if (t1401 != 0) {
                        } else {
                            *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x38) + 0x0)) = (FUN_0c171984((*(signed char *)(((int)stk + 47))), 0x1));
                            t1873 = (FUN_0c171f0c((*(signed char *)(((int)stk + 47)))));
                        }
                    }
                }
            }
        } else {
            if (t59 == 2) {
                *(unsigned int *)(((int)stk + 28)) = 0x2;
                if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x2000) != 0) {
                    if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) {
                        t1441 = *(int *)(((int)stk + 36));
                        (((struct o3C_uchar *)(t1441))->v) = ((*(signed char *)((t1441 + 0x3C))) - 1);
                    } else {
                        (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 28))) - 1);
                    }
                }
                if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x1000) != 0) {
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                        t1460 = *(int *)(((int)stk + 36));
                        (((struct o3C_uchar *)(t1460))->v) = ((*(signed char *)((t1460 + 0x3C))) + 0x1);
                    } else {
                        (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                    }
                }
                if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0xC00) != 0) {
                    t1477 = 0x1;
                    if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x800) != 0) {
                        t1477 = 0xFFFFFFFF;
                    }
                    *(unsigned int *)(((int)stk + 32)) = t1477;
                    t1480 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    if (t1480 != 0) {
                        if (t1480 != 1) {
                        } else {
                            (((struct o7_uchar *)0xC475DBC)->v) = (((*(int *)(((int)stk + 32))) + (*(signed char *)0xC475DC3)) & 0x1);
                            *(unsigned char *)0xC542237 = 0x0;
                        }
                    } else {
                        *(unsigned char *)0xC542237 = (((*(int *)(((int)stk + 32))) + (*(signed char *)0xC542237)) & 0xF);
                    }
                }
                if (((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) && (t1502 = *(int *)(((int)stk + 36)), t1869 = *(signed char *)((0x3C + t1502)), t1869 != 1)) {
                } else {
                    t1504 = *(signed char *)(((int)stk + 47));
                    t1869 = 0xC542868;
                    if (((unsigned short)(*(short *)((((((t1504 << 2) + t1504) << 2) << 1) + 0xC542868))) & 0x200) == 0) {
                    } else {
                        if (((*(signed char *)0xC475DC8) == 1) && (t1510 = *(signed char *)0xC475DC9, t1510 == 4)) {
                            FUN_0c171ebe(0x0);
                        }
                        if (((*(signed char *)0xC475E20) == 1) && (t1517 = *(signed char *)0xC475E21, t1517 == 4)) {
                            FUN_0c171ebe(0x1);
                        }
                        if (((*(signed char *)0xC475E78) == 1) && (t1524 = *(signed char *)0xC475E79, t1524 == 4)) {
                            FUN_0c171ebe(0x2);
                        }
                        if (((*(signed char *)0xC475ED0) == 1) && (t1531 = *(signed char *)0xC475ED1, t1531 == 4)) {
                            FUN_0c171ebe(0x3);
                        }
                        t1869 = (FUN_0c1717f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24)));
                    }
                }
            } else {
                if (t59 == 3) {
                    *(unsigned int *)(((int)stk + 28)) = 0x7;
                    if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x2000) != 0) {
                        if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) {
                            t1552 = *(int *)(((int)stk + 36));
                            (((struct o3C_uchar *)(t1552))->v) = ((*(signed char *)((t1552 + 0x3C))) - 1);
                        } else {
                            (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 28))) - 1);
                        }
                    }
                    if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x1000) != 0) {
                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                            t1571 = *(int *)(((int)stk + 36));
                            (((struct o3C_uchar *)(t1571))->v) = ((*(signed char *)((t1571 + 0x3C))) + 0x1);
                        } else {
                            (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                        }
                    }
                    t1864 = 0x50;
                    if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0xC00) == 0) {
                    } else {
                        t1588 = 0x1;
                        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x800) != 0) {
                            t1588 = 0xFFFFFFFF;
                        }
                        *(unsigned int *)(((int)stk + 32)) = t1588;
                        t1629 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                        if (t1629 != 0) {
                            if (t1629 != 1) {
                                if (t1629 != 2) {
                                    if (t1629 != 3) {
                                        if (t1629 != 4) {
                                            if (t1629 != 5) {
                                                t1864 = t1629;
                                                if (t1629 != 6) {
                                                } else {
                                                    t1592 = *(signed char *)0xC475DC5;
                                                    (((struct o9_uchar *)0xC475DBC)->v) = (t1592 ^ 0x1);
                                                    t1864 = (t1592 ^ 0x1);
                                                }
                                            } else {
                                                *(unsigned char *)0xC541F62 = ((*(signed char *)0xC541F62) + (*(int *)(((int)stk + 32))));
                                                t1864 = t1629;
                                                if ((int)(*(signed char *)0xC541F62) < 0) {
                                                    *(unsigned char *)0xC541F62 = 0x0;
                                                    t1864 = 0x0;
                                                }
                                                if ((int)(*(signed char *)0xC541F62) <= (int)0x6) {
                                                } else {
                                                    *(unsigned char *)0xC541F62 = 0x6;
                                                    t1864 = 0xC541F62;
                                                }
                                            }
                                        } else {
                                            t1610 = *(signed char *)0xC475DC4;
                                            (((struct o8_uchar *)0xC475DBC)->v) = (t1610 ^ 0x1);
                                            t1864 = (t1610 ^ 0x1);
                                        }
                                    } else {
                                        t1616 = *(signed char *)0xC478C02;
                                        *(unsigned char *)0xC478C02 = (t1616 ^ 0x1);
                                        t1864 = (t1616 ^ 0x1);
                                    }
                                } else {
                                    (((struct o6_uchar *)0xC475DBC)->v) = ((*(signed char *)0xC475DC2) + (*(int *)(((int)stk + 32))));
                                    if ((int)(*(signed char *)0xC475DC2) < 0) {
                                        (((struct o6_uchar *)0xC475DBC)->v) = 0x0;
                                        t1629 = 0x0;
                                    }
                                    if ((int)(*(signed char *)0xC475DC2) <= (int)0xA) {
                                    } else {
                                        (((struct o6_uchar *)0xC475DBC)->v) = 0xA;
                                        t1629 = 0xC475DC2;
                                    }
                                    t1864 = t1629;
                                }
                            } else {
                                t1636 = *(signed char *)0xC475DBE;
                                (((struct o2_uchar *)0xC475DBC)->v) = (t1636 ^ 0x1);
                                t1864 = (t1636 ^ 0x1);
                            }
                        } else {
                            (((struct o1_uchar *)0xC475DBC)->v) = (((*(int *)(((int)stk + 32))) + (*(signed char *)0xC475DBD)) & 0x7);
                            t1644 = *(signed char *)0xC475DBD;
                            (((struct o0_uint *)0xC542440)->v) = (*(int *)((((((unsigned char)t1644 << 1) + (unsigned char)t1644) << 2) + 0xC2A5BF0)));
                            t1647 = *(signed char *)0xC475DBD;
                            (((struct o4_uint *)0xC542440)->v) = (*(int *)((((((unsigned char)t1647 << 1) + (unsigned char)t1647) << 2) + 0xC2A5BF4)));
                            t1650 = *(signed char *)0xC475DBD;
                            (((struct o8_uint *)0xC542440)->v) = (*(int *)((((((unsigned char)t1650 << 1) + (unsigned char)t1650) << 2) + 0xC2A5BF8)));
                            t1864 = 0xC2A5BF8;
                        }
                    }
                } else {
                    t1859 = t59;
                    if (t59 == 4) {
                        *(unsigned int *)(((int)stk + 28)) = 0x5;
                        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x2000) != 0) {
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) {
                                t1669 = *(int *)(((int)stk + 36));
                                (((struct o3C_uchar *)(t1669))->v) = ((*(signed char *)((t1669 + 0x3C))) - 1);
                            } else {
                                (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 28))) - 1);
                            }
                        }
                        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x1000) != 0) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                                t1688 = *(int *)(((int)stk + 36));
                                (((struct o3C_uchar *)(t1688))->v) = ((*(signed char *)((t1688 + 0x3C))) + 0x1);
                            } else {
                                (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                            }
                        }
                        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0xC00) == 0) {
                        } else {
                            t1705 = 0x1;
                            if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x800) != 0) {
                                t1705 = 0xFFFFFFFF;
                            }
                            *(unsigned int *)(((int)stk + 32)) = t1705;
                            t1708 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                            switch (t1708) {
                            case 1:
                                if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                    t1773 = *(signed char *)(((int)stk + 47));
                                    t1775 = *(signed char *)((0xC471AA1 + (((t1773 << 1) + t1773) << 2)));
                                    if ((unsigned char)t1775 != 1) {
                                        if ((unsigned char)t1775 != 8) {
                                            if ((unsigned char)t1775 != 0x80) {
                                                t1776 = *(signed char *)(((int)stk + 47));
                                                *(unsigned char *)(((((t1776 << 1) + t1776) << 2) + 0xC471AA1)) = 0x8;
                                            } else {
                                                t1778 = *(signed char *)(((int)stk + 47));
                                                *(unsigned char *)(((((t1778 << 1) + t1778) << 2) + 0xC471AA1)) = 0x1;
                                            }
                                        } else {
                                            t1784 = *(signed char *)(((int)stk + 47));
                                            *(unsigned char *)(((((t1784 << 1) + t1784) << 2) + 0xC471AA1)) = 0x80;
                                        }
                                    } else {
                                        t1790 = *(signed char *)(((int)stk + 47));
                                        *(unsigned char *)(((((t1790 << 1) + t1790) << 2) + 0xC471AA1)) = 0x8;
                                    }
                                } else {
                                    t1796 = *(signed char *)(((int)stk + 47));
                                    t1798 = *(signed char *)((0xC471AA1 + (((t1796 << 1) + t1796) << 2)));
                                    if ((unsigned char)t1798 != 1) {
                                        if ((unsigned char)t1798 != 8) {
                                            if ((unsigned char)t1798 != 0x80) {
                                                t1799 = *(signed char *)(((int)stk + 47));
                                                *(unsigned char *)(((((t1799 << 1) + t1799) << 2) + 0xC471AA1)) = 0x80;
                                            } else {
                                                t1801 = *(signed char *)(((int)stk + 47));
                                                *(unsigned char *)(((((t1801 << 1) + t1801) << 2) + 0xC471AA1)) = 0x8;
                                            }
                                        } else {
                                            t1807 = *(signed char *)(((int)stk + 47));
                                            *(unsigned char *)(((((t1807 << 1) + t1807) << 2) + 0xC471AA1)) = 0x1;
                                        }
                                    } else {
                                        t1813 = *(signed char *)(((int)stk + 47));
                                        *(unsigned char *)(((((t1813 << 1) + t1813) << 2) + 0xC471AA1)) = 0x80;
                                    }
                                }
                                break;
                            case 2:
                                t1748 = *(signed char *)(((int)stk + 47));
                                *(unsigned char *)(((((t1748 << 1) + t1748) << 2) + 0xC471AA2)) = ((*(signed char *)(((((t1748 << 1) + t1748) << 2) + 0xC471AA2))) + (*(int *)(((int)stk + 32))));
                                t1752 = *(signed char *)(((int)stk + 47));
                                if ((int)(*(signed char *)(((((t1752 << 1) + t1752) << 2) + 0xC471AA2))) < 0) {
                                    t1755 = *(signed char *)(((int)stk + 47));
                                    *(unsigned char *)(((((t1755 << 1) + t1755) << 2) + 0xC471AA2)) = 0x0;
                                }
                                break;
                            case 3:
                                t1716 = *(signed char *)(((int)stk + 47));
                                *(unsigned char *)(((((t1716 << 1) + t1716) << 2) + 0xC471AA3)) = ((*(signed char *)(((((t1716 << 1) + t1716) << 2) + 0xC471AA3))) + (*(int *)(((int)stk + 32))));
                                t1720 = *(signed char *)(((int)stk + 47));
                                if ((int)(unsigned char)(*(signed char *)(((((t1720 << 1) + t1720) << 2) + 0xC471AA3))) < 0) {
                                    t1723 = *(signed char *)(((int)stk + 47));
                                    *(unsigned char *)(((((t1723 << 1) + t1723) << 2) + 0xC471AA3)) = 0x0;
                                }
                                break;
                            case 4:
                                t1729 = *(int *)(((int)stk + 36));
                                (((struct o54_ushort *)(t1729))->v) = (((((struct o54_short *)(t1729))->v)) + (*(int *)(((int)stk + 32))));
                                if ((int)((((struct o54_short *)((*(int *)(((int)stk + 36)))))->v)) < 0) {
                                    (((struct o54_ushort *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
                                }
                                break;
                            }
                        }
                        t1833 = *(signed char *)(((int)stk + 47));
                        if (((unsigned short)(*(short *)((((((t1833 << 2) + t1833) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                            t1836 = *(signed char *)(((int)stk + 47));
                            *(unsigned short *)(((((t1836 << 1) + t1836) << 2) + 0xC471A9E)) = ((((struct o54_short *)((*(int *)(((int)stk + 36)))))->v));
                            FUN_0c07c108((*(int *)(((int)stk + 40))));
                        }
                        t1847 = *(signed char *)(((int)stk + 47));
                        t1859 = 0xC542868;
                        if (((unsigned short)(*(short *)((((((t1847 << 2) + t1847) << 2) << 1) + 0xC542868))) & 0x100) != 0) {
                            FUN_0c07c404((*(int *)(((int)stk + 40))));
                            t1852 = *(signed char *)(((int)stk + 47));
                            *(unsigned short *)(((((t1852 << 1) + t1852) << 2) + 0xC471A9E)) = 0x0;
                            t1859 = 0xC471A9E;
                        }
                    }
                    t1864 = t1859;
                }
                t1869 = t1864;
            }
            t1873 = t1869;
        }
        t2775 = t1873;
    } else {
        t1883 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x1));
        switch (t1883) {
        case 0:
            *(unsigned int *)(((int)stk + 28)) = 0xF;
            break;
        case 1:
            *(unsigned int *)(((int)stk + 28)) = 0x5;
            break;
        case 2:
            *(unsigned int *)(((int)stk + 28)) = 0x5;
            break;
        case 3:
            *(unsigned int *)(((int)stk + 28)) = 0xD;
            break;
        case 4:
            *(unsigned int *)(((int)stk + 28)) = 0x3;
            break;
        }
        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x2000) != 0) {
            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) != 0) {
                t1905 = *(int *)(((int)stk + 36));
                (((struct o3C_uchar *)(t1905))->v) = ((*(signed char *)((t1905 + 0x3C))) - 1);
            } else {
                (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 28))) - 1);
            }
        }
        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x1000) != 0) {
            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                t1924 = *(int *)(((int)stk + 36));
                (((struct o3C_uchar *)(t1924))->v) = ((*(signed char *)((t1924 + 0x3C))) + 0x1);
            } else {
                (((struct o3C_uchar *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
            }
        }
        if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0xC00) == 0) {
        } else {
            t1941 = 0x1;
            if ((((((struct o50_int *)((*(int *)(((int)stk + 36)))))->v)) & 0x800) != 0) {
                t1941 = 0xFFFFFFFF;
            }
            *(unsigned int *)(((int)stk + 32)) = t1941;
            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) == 0) {
                t1945 = *(int *)(((int)stk + 36));
                *(unsigned char *)((t1945 + 0x1)) = ((*(signed char *)((t1945 + 0x1))) + (*(int *)(((int)stk + 32))));
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) < 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x1)) = 0x4;
                }
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) > (int)0x4) {
                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x1)) = 0x0;
                }
            }
            t1966 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x1));
            if (t1966 != 0) {
                if (t1966 == 1) {
                    t1970 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                    switch (t1970) {
                    case 1:
                        t2016 = *(int *)(((int)stk + 36));
                        (((struct o20_float *)(t2016))->v) = (((((struct o20_float *)(t2016))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o28_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o20_float *)((*(int *)(((int)stk + 36)))))->v));
                        break;
                    case 2:
                        t2003 = *(int *)(((int)stk + 36));
                        (((struct o24_float *)(t2003))->v) = (((((struct o24_float *)(t2003))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o2C_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o24_float *)((*(int *)(((int)stk + 36)))))->v));
                        break;
                    case 3:
                        t1990 = *(int *)(((int)stk + 36));
                        (((struct o28_float *)(t1990))->v) = (((((struct o28_float *)(t1990))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o30_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o28_float *)((*(int *)(((int)stk + 36)))))->v));
                        break;
                    case 4:
                        if ((int)(*(int *)(((int)stk + 32))) > 0) {
                            t1976 = *(int *)(((int)stk + 40));
                            *(unsigned int *)((t1976 + 0x38)) = ((*(int *)((t1976 + 0x38))) + 0x100);
                        } else {
                            t1978 = *(int *)(((int)stk + 40));
                            *(unsigned int *)((t1978 + 0x38)) = ((*(int *)((t1978 + 0x38))) - 0x100);
                        }
                        break;
                    }
                } else {
                    if (t1966 == 2) {
                        t2029 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                        switch (t2029) {
                        case 1:
                            (((struct o0_uchar *)0xC475DBC)->v) = ((*(signed char *)0xC475DBC) + (*(int *)(((int)stk + 32))));
                            (((struct o0_uchar *)0xC475DBC)->v) = ((*(signed char *)0xC475DBC) & 0x7);
                            FUN_0c173370();
                            break;
                        case 2:
                            t2048 = *(signed char *)0xC5421DC;
                            u2050 = *(float *)((((short)t2048 * (short)0x2F8) + 0xC54135C));
                            u2051 = (float)((*(int *)(((int)stk + 32))) * 0x64);
                            *(float *)((((short)t2048 * (short)0x2F8) + 0xC54135C)) = (u2050 + u2051);
                            break;
                        case 3:
                            t2039 = *(signed char *)0xC5421DC;
                            *(unsigned int *)((((short)t2039 * (short)0x2F8) + 0xC541364)) = ((*(int *)(((0xC541364 + ((short)t2039 * (short)0x2F8)) + 0x0))) + ((*(int *)(((int)stk + 32))) << 8));
                            break;
                        case 4:
                            t2030 = *(signed char *)0xC5421DC;
                            *(unsigned int *)((((short)t2030 * (short)0x2F8) + 0xC541360)) = ((*(int *)(((0xC541360 + ((short)t2030 * (short)0x2F8)) + 0x0))) + ((*(int *)(((int)stk + 32))) << 8));
                            break;
                        }
                    } else {
                        if (t1966 == 3) {
                            t2073 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                            if (t2073 != 1) {
                                if (t2073 != 2) {
                                    if (t2073 != 3) {
                                        if (t2073 != 4) {
                                            if ((t2073 != 5) && ((t2073 != 6) && ((t2073 != 7) && ((t2073 != 8) && ((t2073 != 9) && (t2073 != 10)))))) {
                                                if (t2073 == 12) {
                                                    t2074 = *(int *)(((int)stk + 40));
                                                    t2077 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x446));
                                                    *(unsigned char *)((((((short)(*(signed char *)((t2074 + 0x371A))) * (short)0x2D0) + (t2074 + 0x2BC8)) + (((((t2077 << 2) << 1) + t2077) << 2) << 2)) + 0x0)) = 0x1;
                                                    t2079 = *(int *)(((int)stk + 40));
                                                    t2082 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x447));
                                                    *(unsigned char *)((((((short)(*(signed char *)((t2079 + 0x371A))) * (short)0x2D0) + (t2079 + 0x3168)) + (((((t2082 << 2) << 1) + t2082) << 2) << 2)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct o100_int *)((*(int *)(((int)stk + 40)))))->v)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct o10C_int *)((*(int *)(((int)stk + 40)))))->v)) + 0x0)) = 0x1;
                                                    t2088 = 0x10C;
                                                    t2089 = 0x0;
                                                    for (;;) {
                                                        *(unsigned int *)(((int)stk + 24)) = t2089;
                                                        if ((int)t2089 >= (int)0x6) {
                                                            break;
                                                        }
                                                        t2089 = (*(int *)(((int)stk + 24)));
                                                        t2088 = 0x0;
                                                        t2089 = (t2089 << 2);
                                                        t2089 = (t2089 << 1);
                                                        t2089 = (t2089 + (0x386C + (*(int *)(((int)stk + 40)))));
                                                        *(unsigned char *)((t2089 + 0x0)) = 0x0;
                                                        t2089 = (*(int *)(((int)stk + 40)));
                                                        t2089 = (t2089 + 0x386C);
                                                        *(unsigned int *)((((((*(int *)(((int)stk + 24))) << 2) << 1) + t2089) + 0x4)) = t2088;
                                                        t2089 = (*(int *)(((int)stk + 24)));
                                                        t2089 = (t2089 + 0x1);
                                                    }
                                                }
                                            } else {
                                                t2105 = *(int *)(((int)stk + 36));
                                                t2106 = *(signed char *)(((0x3C + (*(int *)(((int)stk + 36)))) + 0x0));
                                                *(unsigned char *)((((t2106 - 5) + (t2105 + 0x12)) + 0x0)) = ((*(signed char *)((((t2106 - 5) + (t2105 + 0x12)) + 0x0))) + (*(int *)(((int)stk + 32))));
                                                t2110 = *(int *)(((int)stk + 36));
                                                t2111 = *(signed char *)(((0x3C + (*(int *)(((int)stk + 36)))) + 0x0));
                                                *(unsigned char *)((((t2111 - 5) + (t2110 + 0x12)) + 0x0)) = ((*(signed char *)((((t2111 - 5) + (t2110 + 0x12)) + 0x0))) & 0x7);
                                                *(unsigned char *)(((((((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3C))) - 5) << 2) << 1) + ((*(int *)(((int)stk + 40))) + 0x386C)) + 0x0)) = (*(signed char *)((((unsigned char)(*(signed char *)(((((*(signed char *)(((0x3C + (*(int *)(((int)stk + 36)))) + 0x0))) - 5) + ((*(int *)(((int)stk + 36))) + 0x12)) + 0x0))) + (0xC27B588 + ((((*(signed char *)((0x3C + (*(int *)(((int)stk + 36)))))) - 5) << 2) << 1))) + 0x0)));
                                            }
                                        } else {
                                            t2132 = (((struct o10C_int *)((*(int *)(((int)stk + 40)))))->v);
                                            *(unsigned char *)((t2132 + 0x0)) = ((*(signed char *)((t2132 + 0x0))) ^ 0x1);
                                        }
                                    } else {
                                        t2141 = (((struct o100_int *)((*(int *)(((int)stk + 40)))))->v);
                                        *(unsigned char *)((t2141 + 0x0)) = ((*(signed char *)((t2141 + 0x0))) ^ 0x1);
                                    }
                                } else {
                                    t2149 = *(int *)(((int)stk + 40));
                                    t2150 = *(signed char *)((t2149 + 0x371A));
                                    t2152 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x447));
                                    *(unsigned char *)((((((short)t2150 * (short)0x2D0) + (t2149 + 0x3168)) + (((((t2152 << 2) << 1) + t2152) << 2) << 2)) + 0x0)) = ((*(signed char *)((((((short)t2150 * (short)0x2D0) + (t2149 + 0x3168)) + (((((t2152 << 2) << 1) + t2152) << 2) << 2)) + 0x0))) ^ 0x1);
                                }
                            } else {
                                t2161 = *(int *)(((int)stk + 40));
                                t2162 = *(signed char *)((t2161 + 0x371A));
                                t2164 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x446));
                                *(unsigned char *)((((((short)t2162 * (short)0x2D0) + (t2161 + 0x2BC8)) + (((((t2164 << 2) << 1) + t2164) << 2) << 2)) + 0x0)) = ((*(signed char *)((((((short)t2162 * (short)0x2D0) + (t2161 + 0x2BC8)) + (((((t2164 << 2) << 1) + t2164) << 2) << 2)) + 0x0))) ^ 0x1);
                            }
                        } else {
                            if (t1966 == 4) {
                                t2174 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                                if (t2174 != 1) {
                                    if (t2174 != 2) {
                                    } else {
                                        t2175 = *(int *)(((int)stk + 40));
                                        *(unsigned short *)((t2175 + 0x1C)) = (((*(short *)(((int)stk + 32))) + (*(short *)((0x1C + t2175)))) & 0x1);
                                    }
                                } else {
                                    t2183 = *(int *)(((int)stk + 40));
                                    (((struct o371E_uchar *)(t2183))->v) = ((*(signed char *)((t2183 + 0x371E))) + (*(int *)(((int)stk + 32))));
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x371E))) < 0) {
                                        (((struct o371E_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0xA;
                                    }
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x371E))) > (int)0xA) {
                                        (((struct o371E_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
                                    }
                                    FUN_0c0676ce((*(signed char *)(((int)stk + 47))));
                                }
                            }
                        }
                    }
                }
            } else {
                t2235 = *(signed char *)((0x3C + (*(int *)(((int)stk + 36)))));
                if ((unsigned int)(t2235 - 1) >= (unsigned int)0xE) {
                } else {
                    switch (((t2235 - 1) << 1)) {
                        case 0:
                        {
                            t2237 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2237 + 0x2)) = ((*(signed char *)((t2237 + 0x2))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x2))) < 0) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x2)) = 0xF;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x2))) <= (int)0xF) {
                            } else {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x2)) = 0x0;
                            }
                        }
                            break;
                        case 2:
                        {
                            t2252 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2252 + 0x3)) = (((*(signed char *)((t2252 + 0x3))) + (*(int *)(((int)stk + 32)))) & 0x1);
                            (((struct o371A_uchar *)((*(int *)(((int)stk + 40)))))->v) = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3)));
                            FUN_0c067294((*(int *)(((int)stk + 40))));
                            FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            FUN_0c0676ce((*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 4:
                        {
                            t2268 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2268 + 0x4)) = ((*(signed char *)((t2268 + 0x4))) ^ 0x1);
                        }
                            break;
                        case 6:
                        {
                            t2270 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2270 + 0x5)) = ((*(signed char *)((t2270 + 0x5))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))) < (int)0xFFFFFFFF) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x5)) = 0x3;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))) > (int)0x3) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x5)) = 0xFFFFFFFF;
                            }
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) != 0) {
                            } else {
                                t2287 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2287 + 0xA)) = (*(signed char *)((t2287 + 0x7)));
                                t2289 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2289 + 0x8)) = (*(signed char *)((t2289 + 0x5)));
                                t2291 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2291 + 0x9)) = (*(signed char *)((t2291 + 0x6)));
                            }
                        }
                            break;
                        case 8:
                        {
                            t2297 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2297 + 0x6)) = ((*(signed char *)((t2297 + 0x6))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))) < 0) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x6)) = 0x6;
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))) > (int)0x6) {
                                *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x6)) = 0x0;
                            }
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) == 0) {
                                t2314 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2314 + 0xA)) = (*(signed char *)((t2314 + 0x7)));
                                t2316 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2316 + 0x8)) = (*(signed char *)((t2316 + 0x5)));
                                t2318 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2318 + 0x9)) = (*(signed char *)((t2318 + 0x6)));
                            }
                            t2325 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0xA));
                            *(int *)((int)stk + 8) = (unsigned char)t2325;
                            t2328 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9)));
                            *(int *)((int)stk + 4) = t2328;
                            t2331 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8)));
                            *(int *)((int)stk + 0) = t2331;
                            FUN_0c172030((*(signed char *)(((int)stk + 47))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x7))), t2331, t2328, (unsigned char)t2325);
                            t2340 = *(int *)(((int)stk + 40));
                            t2341 = (((struct o11C_int *)(t2340))->v);
                            u2344 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
                            (((struct o90_float *)(((((struct o118_int *)(t2340))->v))))->v) = u2344;
                            (((struct o90_float *)(t2341))->v) = u2344;
                            FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 10:
                        {
                            t2351 = *(int *)(((int)stk + 36));
                            *(unsigned char *)((t2351 + 0x7)) = ((*(signed char *)((t2351 + 0x7))) + (*(int *)(((int)stk + 32))));
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) == 0) {
                                t2356 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2356 + 0xA)) = (*(signed char *)((t2356 + 0x7)));
                                t2358 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2358 + 0x8)) = (*(signed char *)((t2358 + 0x5)));
                                t2360 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2360 + 0x9)) = (*(signed char *)((t2360 + 0x6)));
                            }
                            t2367 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0xA));
                            *(int *)((int)stk + 8) = (unsigned char)t2367;
                            t2370 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9)));
                            *(int *)((int)stk + 4) = t2370;
                            t2373 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8)));
                            *(int *)((int)stk + 0) = t2373;
                            FUN_0c172030((*(signed char *)(((int)stk + 47))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x7))), t2373, t2370, (unsigned char)t2367);
                            t2382 = *(int *)(((int)stk + 40));
                            t2383 = (((struct o11C_int *)(t2382))->v);
                            u2386 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
                            (((struct o90_float *)(((((struct o118_int *)(t2382))->v))))->v) = u2386;
                            (((struct o90_float *)(t2383))->v) = u2386;
                            FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                        }
                            break;
                        case 12:
                        {
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) == 0) {
                            } else {
                                t2395 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2395 + 0x8)) = ((*(signed char *)((t2395 + 0x8))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8))) < (int)0xFFFFFFFF) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x8)) = 0x3;
                                }
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8))) <= (int)0x3) {
                                } else {
                                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x8)) = 0xFFFFFFFF;
                                }
                            }
                        }
                            break;
                        case 14:
                        {
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) == 0) {
                            } else {
                                t2417 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2417 + 0x9)) = ((*(signed char *)((t2417 + 0x9))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9))) < 0) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x9)) = 0x6;
                                }
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9))) > (int)0x6) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 36))) + 0x9)) = 0x0;
                                }
                                t2433 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0xA));
                                *(int *)((int)stk + 8) = (unsigned char)t2433;
                                t2436 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9)));
                                *(int *)((int)stk + 4) = t2436;
                                t2439 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8)));
                                *(int *)((int)stk + 0) = t2439;
                                FUN_0c172030((*(signed char *)(((int)stk + 47))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x7))), t2439, t2436, (unsigned char)t2433);
                                t2448 = *(int *)(((int)stk + 40));
                                t2449 = (((struct o11C_int *)(t2448))->v);
                                u2452 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
                                (((struct o90_float *)(((((struct o118_int *)(t2448))->v))))->v) = u2452;
                                (((struct o90_float *)(t2449))->v) = u2452;
                                FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                                FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            }
                        }
                            break;
                        case 16:
                        {
                            if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x4))) == 0) {
                            } else {
                                t2466 = *(int *)(((int)stk + 36));
                                *(unsigned char *)((t2466 + 0xA)) = ((*(signed char *)((t2466 + 0xA))) + (*(int *)(((int)stk + 32))));
                                t2470 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0xA));
                                *(int *)((int)stk + 8) = (unsigned char)t2470;
                                t2473 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9)));
                                *(int *)((int)stk + 4) = t2473;
                                t2476 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8)));
                                *(int *)((int)stk + 0) = t2476;
                                FUN_0c172030((*(signed char *)(((int)stk + 47))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x7))), t2476, t2473, (unsigned char)t2470);
                                t2485 = *(int *)(((int)stk + 40));
                                t2486 = (((struct o11C_int *)(t2485))->v);
                                u2489 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
                                (((struct o90_float *)(((((struct o118_int *)(t2485))->v))))->v) = u2489;
                                (((struct o90_float *)(t2486))->v) = u2489;
                                FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                                FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                            }
                        }
                            break;
                        case 18:
                        {
                            t2501 = *(int *)(((int)stk + 40));
                            (((struct o445_uchar *)(t2501))->v) = ((*(signed char *)((t2501 + 0x445))) + (*(int *)(((int)stk + 32))));
                            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((0x450 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2))));
                            if ((int)(*(int *)(((0x450 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2)))) > 0) {
                                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) - 1);
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x445))) < 0) {
                                (((struct o445_uchar *)((*(int *)(((int)stk + 40)))))->v) = (*(int *)(((int)stk + 20)));
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x445))) <= (int)(*(int *)(((int)stk + 20)))) {
                            } else {
                                (((struct o445_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
                            }
                        }
                            break;
                        case 20:
                        {
                            t2529 = *(int *)(((int)stk + 40));
                            (((struct o446_uchar *)(t2529))->v) = ((*(signed char *)((t2529 + 0x446))) + (*(int *)(((int)stk + 32))));
                            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((0x458 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2))));
                            if ((int)(*(int *)(((0x458 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2)))) > 0) {
                                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) - 1);
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x446))) < 0) {
                                (((struct o446_uchar *)((*(int *)(((int)stk + 40)))))->v) = (*(int *)(((int)stk + 20)));
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x446))) <= (int)(*(int *)(((int)stk + 20)))) {
                            } else {
                                (((struct o446_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
                            }
                        }
                            break;
                        case 22:
                        {
                            t2557 = *(int *)(((int)stk + 40));
                            (((struct o447_uchar *)(t2557))->v) = ((*(signed char *)((t2557 + 0x447))) + (*(int *)(((int)stk + 32))));
                            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((0x460 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2))));
                            if ((int)(*(int *)(((0x460 + (*(int *)(((int)stk + 40)))) + ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x3))) << 2)))) > 0) {
                                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) - 1);
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x447))) < 0) {
                                (((struct o447_uchar *)((*(int *)(((int)stk + 40)))))->v) = (*(int *)(((int)stk + 20)));
                            }
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 40))) + 0x447))) <= (int)(*(int *)(((int)stk + 20)))) {
                            } else {
                                (((struct o447_uchar *)((*(int *)(((int)stk + 40)))))->v) = 0x0;
                            }
                        }
                            break;
                        case 24:
                        {
                            t2586 = *(int *)(((int)stk + 36));
                            u2588 = ((((struct o1C_float *)(t2586))->v));
                            u2588 = u2588 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                            (((struct o1C_float *)(t2586))->v) = u2588;
                            if (0.0f > ((((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v))) {
                                (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v) = 0.0f;
                            }
                            t2594 = *(int *)(((int)stk + 40));
                            t2595 = (((struct o11C_int *)(t2594))->v);
                            u2598 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
                            (((struct o90_float *)(((((struct o118_int *)(t2594))->v))))->v) = u2598;
                            (((struct o90_float *)(t2595))->v) = u2598;
                        }
                            break;
                        default:
                        {
                            t2600 = *(int *)(((int)stk + 40));
                            u2602 = ((((struct o40_float *)(t2600))->v));
                            u2602 = u2602 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                            (((struct o40_float *)(t2600))->v) = u2602;
                            if (0.0f > ((((struct o40_float *)((*(int *)(((int)stk + 40)))))->v))) {
                                (((struct o40_float *)((*(int *)(((int)stk + 40)))))->v) = 0.0f;
                            }
                            t2608 = *(int *)(((int)stk + 40));
                            u2609 = (((struct o40_float *)(t2608))->v);
                            (((struct o48_float *)(t2608))->v) = u2609;
                            (((struct o44_float *)(t2608))->v) = u2609;
                        }
                            break;
                    }
                }
            }
        }
        if (((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) == 3) && ((t2644 = *(int *)(((int)stk + 36)), t2645 = *(signed char *)((t2644 + 0x3C)), (int)t2645 >= (int)0x5) && (t2646 = *(int *)(((int)stk + 36)), t2647 = *(signed char *)((t2646 + 0x3C)), (int)t2647 <= (int)0xA))) {
            t2648 = *(signed char *)(((int)stk + 47));
            if (((unsigned short)(*(short *)((((((t2648 << 2) + t2648) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                FUN_0c0c418c((*(signed char *)(((int)stk + 47))));
            }
        }
        if (((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x1))) == 0) && (t2668 = *(int *)(((int)stk + 36)), t2669 = *(signed char *)((0x3C + t2668)), t2669 == 1)) {
            t2670 = *(signed char *)(((int)stk + 47));
            if (((unsigned short)(*(short *)((((((t2670 << 2) + t2670) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                *(unsigned char *)(((0xC53249A + ((short)(*(signed char *)(((int)stk + 47))) * (short)0x3938)) + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x2)));
                FUN_0c1717bc();
                FUN_0c067008((*(signed char *)(((int)stk + 47))));
                FUN_0c039fbc();
                FUN_0c1718d4((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
                FUN_0c17193c((*(int *)(((int)stk + 40))), (*(signed char *)(((int)stk + 47))));
            }
        }
        t2701 = *(signed char *)(((int)stk + 47));
        if (((unsigned short)(*(short *)((((((t2701 << 2) + t2701) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
            t2705 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0xA));
            *(int *)((int)stk + 8) = (unsigned char)t2705;
            t2708 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x9)));
            *(int *)((int)stk + 4) = t2708;
            t2711 = (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x8)));
            *(int *)((int)stk + 0) = t2711;
            FUN_0c172030((*(signed char *)(((int)stk + 47))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x5))), (*(signed char *)(((*(int *)(((int)stk + 36))) + 0x6))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 36))) + 0x7))), t2711, t2708, (unsigned char)t2705);
            t2720 = *(int *)(((int)stk + 40));
            t2721 = (((struct o11C_int *)(t2720))->v);
            u2724 = (((struct o1C_float *)((*(int *)(((int)stk + 36)))))->v);
            (((struct o90_float *)(((((struct o118_int *)(t2720))->v))))->v) = u2724;
            (((struct o90_float *)(t2721))->v) = u2724;
            (((struct o28_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o20_float *)((*(int *)(((int)stk + 36)))))->v));
            (((struct o2C_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o24_float *)((*(int *)(((int)stk + 36)))))->v));
            (((struct o30_float *)((*(int *)(((int)stk + 40)))))->v) = ((((struct o28_float *)((*(int *)(((int)stk + 36)))))->v));
        }
        if ((*(signed char *)(((*(int *)(((int)stk + 36))) + 0x44))) != 0) {
            t2743 = *(signed char *)(((int)stk + 47));
            if (((unsigned short)(*(short *)((((((t2743 << 2) + t2743) << 2) << 1) + 0xC542868))) & 0x100) != 0) {
                FUN_0c1723b4((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
            }
        } else {
            FUN_0c1723b4((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
        }
        t2766 = *(signed char *)(((int)stk + 47));
        t2768 = *(short *)((0xC542868 + ((((t2766 << 2) + t2766) << 2) << 1)));
        t2775 = (unsigned short)t2768;
        if (((unsigned short)t2768 & 128) == 0) {
        } else {
            t2769 = *(int *)(((int)stk + 36));
            (((struct o44_uchar *)(t2769))->v) = ((*(signed char *)((t2769 + 0x44))) ^ 0x1);
            t2775 = 0x44;
        }
    }
    return t2775;
}

int FUN_0c06bb0c(int a4, int a5, int a6)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_4 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_2 = *(signed char *)((v0_4 + 0x2));
    v0_5 = (v0_2);
    v0_1 = (v0_4);
    if ((v0_2 != 12)) goto L_C06BB2E;
    v0_5 = ((FUN_0c0b2c18(v0_1)));
    L_C06BF12:;
    return v0_5;
    L_C06BB2E:;
    if ((v0_5 != 13)) goto L_C06BB3C;
    v0_5 = ((FUN_0c0b551e(v0_1)));
    goto L_C06BF12;
    L_C06BB3C:;
    FUN_0c187798(v0_4, v0_0, v0_3);
    v0_5 = (0x375B);
    v0_2 = (((int)stk + 0));
    if (((*(signed char *)((v0_1 + 0x375B))) == 0)) goto L_C06BB56;
    goto L_C06BF12;
    L_C06BB56:;
    if (((*(signed char *)((v0_1 + 0x3717))) != 99)) goto L_C06BB98;
    v0_4 = *(signed char *)((v0_1 + 0x14));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C06BB76;
    if ((v0_5 == 1)) goto L_C06BB7E;
    if ((v0_5 == 2)) goto L_C06BB88;
    if (!((v0_5 == 3))) goto L_C06BB98;
    FUN_0c07bb0c(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
    L_C06BB98:;
    v0_6 = (0x0);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x3721))) != 41)) goto L_C06BBE4;
    if (((*(signed char *)((v0_1 + 0x14))) != 0)) goto L_C06BBE4;
    if (((*(signed char *)((v0_1 + 0x3715))) == 10)) goto L_C06BBE4;
    FUN_0c07cf5c(v0_1);
    L_C06BBEC:;
    v0_3 = (0xC5421F8);
    v0_4 = (0x2);
    if (((*(signed char *)0xC542237) != 2)) goto L_C06BC28;
    if (((*(signed char *)((v0_3 + 0x44))) != 1)) goto L_C06BC28;
    if (((int)(*(signed char *)((v0_3 + 0x3D))) >= (int)v0_4)) goto L_C06BC12;
    (((struct o374A_uchar *)(v0_1))->v) = 0x3C;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC12:;
    if ((((*(short *)0xC54099A) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x1))))) == 0)) goto L_C06BC28;
    (((struct o374A_uchar *)(v0_1))->v) = v0_4;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC28:;
    if (((*(signed char *)((v0_3 + 0x3D))) != 0)) goto L_C06BC38;
    (((struct o374A_uchar *)(v0_1))->v) = v0_4;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC38:;
    v0_5 = (0x3749);
    if (((*(signed char *)((v0_1 + 0x3749))) == 0)) goto L_C06BC4E;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12A_ushort *)(v0_1))->v) = ((((struct o382C_short *)(v0_1))->v));
    L_C06BC4E:;
    v0_5 = (0x374A);
    if (((*(signed char *)((v0_1 + 0x374A))) == 0)) goto L_C06BC64;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12C_ushort *)(v0_1))->v) = ((((struct o382E_short *)(v0_1))->v));
    L_C06BC64:;
    v0_5 = (0x374B);
    w0_1 = (1.0f);
    if (((*(signed char *)((v0_1 + 0x374B))) == 0)) goto L_C06BC7C;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12E_ushort *)(v0_1))->v) = ((((struct o3830_short *)(v0_1))->v));
    L_C06BC7C:;
    if ((((((struct o37B0_float *)(v0_1))->v)) == w0_1)) goto L_C06BCB0;
    if (((*(signed char *)((v0_1 + 0x3755))) != (*(signed char *)((v0_1 + 0x3753))))) goto L_C06BC9C;
    if ((((((struct o381C_short *)(v0_1))->v)) == ((((struct o3818_short *)(v0_1))->v)))) goto L_C06BCB0;
    L_C06BC9C:;
    (((struct o37B0_float *)(v0_1))->v) = w0_1;
    w0_0 = (((struct o37B0_float *)(v0_1))->v);
    v0_4 = *(int *)(((0x118 + v0_1) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o90_float *)(v0_4))->v) = w0_0;
    v0_4 = ((0x118 + v0_1));
    L_C06BCB0:;
    (((struct o376C_uint *)(v0_1))->v) = v0_6;
    if (((*(signed char *)((v0_1 + 0x371D))) != 1)) goto L_C06BCC0;
    (((struct o3770_uint *)(v0_1))->v) = v0_6;
    L_C06BCC0:;
    if (((*(signed char *)((v0_1 + 0x2))) != 14)) goto L_C06BCDC;
    if (((*(signed char *)((v0_1 + 0x371C))) == 0)) goto L_C06BCDC;
    if (((*(signed char *)((v0_1 + 0x38E5))) != 0)) goto L_C06BCDC;
    FUN_0c14e040(v0_1);
    L_C06BCDC:;
    (((struct o38E5_uchar *)(v0_1))->v) = v0_6;
    v0_5 = ((*(signed char *)((v0_1 + 0x38B4))));
    if (((unsigned char)v0_5 != 65)) goto L_C06BDA4;
    (((struct oAC_ushort *)(v0_1))->v) = (((((struct oAC_short *)(v0_1))->v)) | 0x400);
    v0_4 = (((0x389C + v0_1) + 0x18));
    w0_0 = (0.0f);
    if (((int)(*(short *)((((0x389C + v0_1) + 0x18) + 0x4))) <= (int)(*(short *)((((0x389C + v0_1) + 0x18) + 0x6))))) goto L_C06BD44;
    (((struct oB0_float *)(v0_1))->v) = w0_0;
    L_C06BDA4:;
    if (!(((*(signed char *)((v0_1 + 0x14))) == 0))) goto L_C06BEF6;
    v0_5 = *(signed char *)((v0_1 + 0x3715));
    v0_4 = (v0_5);
    if ((v0_5 != 20)) goto L_C06BDBE;
    goto L_C06BEF6;
    L_C06BEF6:;
    thunk_FUN_0c0385e0(v0_1, v0_0);
    FUN_0c07c858(v0_1);
    (((struct o3836_ushort *)(v0_1))->v) = ((((struct o3834_short *)(v0_1))->v));
    (((struct o3834_ushort *)(v0_1))->v) = ((((struct o430_short *)(v0_1))->v));
    v0_5 = (0x3834);
    goto L_C06BF12;
    L_C06BDBE:;
    if ((v0_4 != 26)) goto L_C06BDCA;
    goto L_C06BEF6;
    L_C06BDCA:;
    if (((*(signed char *)((v0_3 + 0x3F))) == 3)) goto L_C06BDD6;
    goto L_C06BEF6;
    L_C06BDD6:;
    v0_3 = (FUN_0c064ee4(v0_1, 0x7)) != 0;
    if (v0_3) goto L_C06BDE6;
    goto L_C06BEF6;
    L_C06BDE6:;
    (((struct o37C4_float *)(v0_1))->v) = (((((struct o28_float *)(v0_1))->v)) - (*(float *)((v0_2 + 0x0))));
    (((struct o37CC_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) - ((((struct o8_float *)(v0_2))->v)));
    v0_3 = (FUN_0c07ebd0(v0_1)) == 0;
    if (v0_3) goto L_C06BE10;
    w0_0 = (0.349999994f);
    L_C06BE14:;
    w0_4 = (((struct o37C4_float *)(v0_1))->v);
    w0_5 = (((struct o37F4_float *)(v0_1))->v);
    w0_1 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C06BE68;
    w0_1 = (((-w0_3) + w0_2));
    L_C06BE6A:;
    if ((!(w0_1 > w0_0))) goto L_C06BE8C;
    if ((!(((((struct o37C4_float *)(v0_1))->v)) > ((((struct o37F4_float *)(v0_1))->v))))) goto L_C06BE82;
    v0_5 = (0x37F4);
    w0_1 = ((((((struct o37F4_float *)(v0_1))->v)) + w0_0));
    L_C06BE88:;
    *(float *)((v0_1 + v0_5)) = w0_1;
    L_C06BE94:;
    w0_4 = (((struct o37CC_float *)(v0_1))->v);
    w0_5 = (((struct o37FC_float *)(v0_1))->v);
    w0_1 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C06BEB0;
    w0_1 = (((-w0_1) + w0_2));
    L_C06BEB2:;
    if ((!(w0_1 > w0_0))) goto L_C06BED4;
    if ((!(((((struct o37CC_float *)(v0_1))->v)) > ((((struct o37FC_float *)(v0_1))->v))))) goto L_C06BECA;
    v0_5 = (0x37FC);
    w0_1 = ((((((struct o37FC_float *)(v0_1))->v)) + w0_0));
    L_C06BED0:;
    *(float *)((v0_1 + v0_5)) = w0_1;
    L_C06BEDC:;
    (((struct o28_float *)(v0_1))->v) = ((*(float *)((v0_2 + 0x0))) + ((((struct o37F4_float *)(v0_1))->v)));
    (((struct o30_float *)(v0_1))->v) = (((((struct o8_float *)(v0_2))->v)) + ((((struct o37FC_float *)(v0_1))->v)));
    goto L_C06BEF6;
    L_C06BECA:;
    v0_5 = (0x37FC);
    w0_1 = ((((((struct o37FC_float *)(v0_1))->v)) - w0_0));
    goto L_C06BED0;
    L_C06BED4:;
    (((struct o37FC_float *)(v0_1))->v) = ((((struct o37CC_float *)(v0_1))->v));
    goto L_C06BEDC;
    L_C06BEB0:;
    w0_1 = (w0_3);
    goto L_C06BEB2;
    L_C06BE82:;
    v0_5 = (0x37F4);
    w0_1 = ((((((struct o37F4_float *)(v0_1))->v)) - w0_0));
    goto L_C06BE88;
    L_C06BE8C:;
    (((struct o37F4_float *)(v0_1))->v) = ((((struct o37C4_float *)(v0_1))->v));
    goto L_C06BE94;
    L_C06BE68:;
    w0_1 = (w0_1);
    goto L_C06BE6A;
    L_C06BE10:;
    w0_0 = (0.0399999991f);
    goto L_C06BE14;
    L_C06BD44:;
    v0_5 = (int)((int)((*(short *)((((0x389C + v0_1) + 0x18) + 0x6))) - (*(short *)((((0x389C + v0_1) + 0x18) + 0x4)))) % (int)0xB4);
    v0_4 = (((0x389C + v0_1) + 0x18));
    w0_2 = ((float)v0_5);
    FPUL_ = (v0_5);
    if ((!(50.0f > (float)v0_5))) goto L_C06BD96;
    w0_0 = (float)(int)(w0_2 * 3.5999999f);
    (((struct oB0_float *)(v0_1))->v) = _builtin_fabsf((math_sin_angle16((int)((w0_0 * 65536.0f) / 360.0f))));
    L_C06BD9A:;
    v0_5 = (0xB0);
    if ((!(((((struct oB0_float *)(v0_1))->v)) > w0_1))) goto L_C06BDA4;
    *(float *)((v0_1 + v0_5)) = w0_1;
    goto L_C06BDA4;
    L_C06BD96:;
    (((struct oB0_float *)(v0_1))->v) = w0_0;
    goto L_C06BD9A;
    L_C06BBE4:;
    (((struct o383C_ushort *)(v0_1))->v) = v0_6;
    (((struct o383A_ushort *)(v0_1))->v) = v0_6;
    goto L_C06BBEC;
    L_C06BB88:;
    FUN_0c07bac8(v0_1);
    goto L_C06BB98;
    L_C06BB7E:;
    FUN_0c074862(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
    L_C06BB76:;
    FUN_0c06bf38(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
}

int FUN_0c08fb74(int a4)
{
    int stk[6];
    register int t9;
    register int t23;
    register int t25;
    register int t26;
    register int t34;
    register int t59;
    register int t78;
    register int t84;
    register int t85;
    register int t100;
    register int t106;
    register int t107;
    register int t117;
    register int t145;
    register int t150;
    register int t155;
    register int t157;
    register int t161;
    register int t162;
    register int t163;
    register int t164;
    int t1;
    int t29;
    register int t35;

    if ((((((struct o22_short *)(a4))->v)) != 0) && (t1 = *(short *)((a4 + 0x1C)), (int)t1 < (int)0x6)) {
        FUN_0c0819c2(a4, 0x1555);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t9 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t9 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if ((*(short *)((a4 + 0x1C))) == (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x10)))) {
        FUN_0c1272a8(a4, (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x14))));
    }
    t23 = FUN_0c037bf6(a4);
    if ((unsigned char)t23 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    t25 = *(short *)((a4 + 0x1C));
    t26 = (((struct o20_short *)(a4))->v);
    if (((int)t25 >= (int)(*(int *)((((((t26 << 2) << 2) << 1) + 0xC1C6090) + 0x4)))) && (t29 = *(int *)((((((t26 << 2) << 2) << 1) + 0xC1C6090) + 0x8)), (int)t25 <= (int)t29)) {
        t34 = (((struct o430_short *)(a4))->v);
        if ((((0x200 & (unsigned short)t34) == 0) && ((0x80 & (unsigned short)t34) == 0)) || (t35 = *(short *)((a4 + 0x1E)), t35 != 0)) {
        } else {
            FUN_0c07d030(a4, 0x0);
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                (((struct o3731_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x1;
            } else {
                (((struct o3731_uchar *)(a4))->v) = 0x2;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
        }
    }
    if ((*(short *)((a4 + 0x1C))) != (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x18)))) {
        if (((((struct o20_short *)(a4))->v)) == 4) {
            t59 = *(short *)((a4 + 0x1C));
            if (t59 == 2) {
                (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x0;
                (((struct o447_uchar *)(a4))->v) = 0x3;
            } else {
                if (t59 == 69) {
                    (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x1;
                    (((struct o447_uchar *)(a4))->v) = 0x0;
                }
            }
        }
    } else {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            t78 = (*(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
            *(int *)((int)stk + 0) = t78;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, t78, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            t84 = (*(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
            *(int *)((int)stk + 0) = t84;
            t85 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t85;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t85 << 2) + 0xC4B40FC)))))->v)) + 0x0))), t84, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
        if (((((struct o20_short *)(a4))->v)) == 4) {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                *(int *)((int)stk + 12) = 0xC1C5FD4;
                *(int *)((int)stk + 8) = 0xC1C5FC8;
                *(int *)((int)stk + 4) = 0x42;
                t100 = (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x1C)));
                *(int *)((int)stk + 0) = t100;
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, t100, 0x42, 0xC1C5FC8, 0xC1C5FD4);
            } else {
                *(int *)((int)stk + 12) = 0xC1C5FEC;
                *(int *)((int)stk + 8) = 0xC1C5FE0;
                *(int *)((int)stk + 4) = 0x42;
                t106 = (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x1C)));
                *(int *)((int)stk + 0) = t106;
                t107 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t107;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t107 << 2) + 0xC4B40FC)))))->v)) + 0x0))), t106, 0x42, 0xC1C5FE0, 0xC1C5FEC);
            }
            if (((((struct o20_short *)(a4))->v)) == 4) {
                t117 = *(short *)((a4 + 0x1C));
                if (t117 == 2) {
                    (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x0;
                    (((struct o447_uchar *)(a4))->v) = 0x3;
                } else {
                    if (t117 == 69) {
                        (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x1;
                        (((struct o447_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
        }
    }
    t145 = *(short *)((a4 + 0x1C));
    if ((int)t145 >= (int)(*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0xC)))) {
        t150 = *(short *)((a4 + 0x1E));
        if (t150 != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t155 = *(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t155;
            *(int *)((int)stk + 12) = t155;
            *(int *)((int)stk + 8) = 0x1;
            t157 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t157;
            *(int *)((int)stk + 4) = t157;
            FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x1, (*(int *)(((int)stk + 20))), t157, 0x1, t155);
            t161 = *(int *)(((0x118 + a4) + 0x4));
            t162 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t161))->v) = 1.0f;
            (((struct o9C_float *)(t161))->v) = 1.0f;
            (((struct oA0_float *)(t162))->v) = 1.0f;
            (((struct o9C_float *)(t162))->v) = 1.0f;
            t163 = *(int *)(((0x118 + a4) + 0x4));
            t164 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t163))->v) = 1.0f;
            (((struct o98_float *)(t164))->v) = 1.0f;
            (((struct o94_float *)(t163))->v) = 1.0f;
            (((struct o94_float *)(t164))->v) = 1.0f;
            return FUN_0c0819c2(a4, 0x71C);
        }
        return t150;
    }
    return t145;
}

int FUN_0c04d76c(void)
{
    int stk[6];
    register int t2;
    register int t7;
    register int t8;
    register int t15;
    register int t28;
    register int t39;
    register int t55;
    register int t71;
    register int t107;
    register int t124;
    register int t137;
    register int t153;
    register int t184;
    int t1;

    if (((int)(unsigned char)(*(signed char *)0xC541F44) > 0) && (t1 = *(signed char *)0xC541F44, (int)(unsigned char)t1 < (int)0x9)) {
        t2 = FUN_0c04da80();
        if (t2 != 0) {
            *(unsigned short *)0xC541F4E = 0x1F;
            (((struct o3_uchar *)0xC541F41)->v) = 0x9;
            FUN_0c05b0be(0x1E, 0x0);
        }
    }
    t7 = *(signed char *)0xC541F44;
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 != 1) {
            if ((unsigned char)t7 != 2) {
                if ((unsigned char)t7 != 3) {
                    if ((unsigned char)t7 != 4) {
                        if ((unsigned char)t7 == 5) {
                            t8 = *(short *)0xC541F4E;
                            *(unsigned short *)0xC541F4E = (t8 - 1);
                            if ((int)(short)(t8 - 1) > 0) {
                            } else {
                                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            }
                        } else {
                            if ((unsigned char)t7 == 6) {
                                t15 = *(short *)0xC541F4E;
                                *(unsigned short *)0xC541F4E = (t15 - 1);
                                if ((int)(short)(t15 - 1) > 0) {
                                } else {
                                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                    FUN_0c04de60(0x0, ((*(short *)0xC541F4E) + 0x2));
                                    FUN_0c04e986((int)((float)((*(short *)0xC541F4E) << 2) / 5.0f), 0x8);
                                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                }
                            } else {
                                if ((unsigned char)t7 == 7) {
                                    t28 = *(short *)0xC541F4E;
                                    *(unsigned short *)0xC541F4E = (t28 - 1);
                                    if ((int)(short)(t28 - 1) > 0) {
                                    } else {
                                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                        FUN_0c04de60(0x1, ((*(short *)0xC541F4E) + 0x2));
                                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    }
                                } else {
                                    if ((unsigned char)t7 == 8) {
                                        t39 = *(short *)0xC541F4E;
                                        *(unsigned short *)0xC541F4E = (t39 - 1);
                                        if ((int)(short)(t39 - 1) <= 0) {
                                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                            FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                            FUN_0c04def0(0xB, 0xA);
                                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        }
                                    } else {
                                        if ((unsigned char)t7 == 9) {
                                            if ((*(short *)0xC541F4E) == 31) {
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                            }
                                            t55 = *(short *)0xC541F4E;
                                            *(unsigned short *)0xC541F4E = (t55 - 1);
                                            if ((int)(short)(t55 - 1) <= 0) {
                                                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                                FUN_0c03eff6();
                                                FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                                FUN_0c04def0(0x5, 0xB);
                                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                            }
                                        } else {
                                            if ((unsigned char)t7 == 10) {
                                                if ((*(short *)0xC541F4E) == 31) {
                                                    FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                                }
                                                t71 = *(short *)0xC541F4E;
                                                *(unsigned short *)0xC541F4E = (t71 - 1);
                                                if ((int)(short)(t71 - 1) <= 0) {
                                                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                                }
                                            } else {
                                                *(unsigned char *)0xC3BD447 = 0x0;
                                                FUN_0c03eff6();
                                                (((struct o0_uchar *)0xC541F41)->v) = 0x6;
                                                (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                                                (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                                                (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                                                *(unsigned short *)0xC541F4E = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        t107 = *(short *)0xC541F4E;
                        *(unsigned short *)0xC541F4E = (t107 - 1);
                        if ((int)(short)(t107 - 1) > 0) {
                        } else {
                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            FUN_0c03ea04(0x7, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                            FUN_0c04e008();
                        }
                    }
                } else {
                    t124 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t124 - 1);
                    if ((int)(short)(t124 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
            } else {
                t137 = *(short *)0xC541F4E;
                *(unsigned short *)0xC541F4E = (t137 - 1);
                if ((int)(short)(t137 - 1) > 0) {
                } else {
                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                    FUN_0c04e8cc();
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                }
            }
        } else {
            t153 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t153 - 1);
            if ((int)(short)(t153 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                FUN_0c04f098();
            }
        }
    } else {
        FUN_0c07c436();
        FUN_0c05af8a();
        FUN_0c03eff6();
        FUN_0c036de8(0xF, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c059c7a(0x0, 0x0);
        FUN_0c0527e6();
        FUN_0c03ea04(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
        FUN_0c04de60(0x1, 0x78);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x5);
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c04db9a();
        FUN_0c04dd38();
        FUN_0c04e7b6(0x0, 0x8);
        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
        t184 = *(short *)0xC541F4E;
        *(unsigned short *)0xC541F4E = (t184 - 1);
        if ((int)(short)(t184 - 1) > 0) {
        } else {
            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            FUN_0c04f098();
        }
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[8];
    register int t37;

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_9 = *(signed char *)0xC30AA33;
    v0_4 = (v0_9);
    v0_7 = (0x9);
    v0_0 = (0xC30540E);
    v0_3 = (0x32);
    v0_2 = (0xC30540C);
    v0_1 = (0xC30AA33);
    v0_5 = (0xC30A51E);
    v0_6 = (0x0);
    v0_8 = (0xC01CD2C);
    if ((v0_9 == 0)) goto L_C021548;
    if ((v0_4 == 1)) goto L_C021574;
    if ((v0_4 == 2)) goto L_C021588;
    if ((v0_4 == 3)) goto L_C0215C4;
    if ((v0_4 != 4)) goto L_C02151C;
    v0_3 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_3 - 1);
    if (((short)(v0_3 - 1) == 0)) goto L_C021690;
    L_C0217A2:;
    return v0_4;
    L_C021690:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0xE;
    v0_4 = ((FUN_0c018fd2(0x20)));
    L_C0216A0:;
    v0_3 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_3 - 1);
    if (((short)(v0_3 - 1) != 0)) goto L_C0217A2;
    v0_0 = *(short *)((v0_0 + 0x0));
    v0_4 = (v0_0);
    if ((v0_0 != 1)) goto L_C0216B8;
    v0_0 = (0x6);
    L_C0216B4:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    goto L_C0217A2;
    L_C0216B8:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x7;
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    v0_4 = ((FUN_0c018e74(0x42)));
    goto L_C0217A2;
    L_C02151C:;
    if ((v0_4 != 5)) goto L_C021524;
    goto L_C0216A0;
    L_C021524:;
    if ((v0_4 != 6)) goto L_C02152C;
    *(unsigned char *)((v0_1 + 0x0)) = 0x7;
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    v0_1 = (0x0 + v0_5);
    v0_2 = (0x0 + v0_5);
    v0_5 = ((0x0 + v0_5));
    v0_1 = v0_1;
    v0_2 = v0_2;
    v0_4 = (v0_6);
    L_C02171A:;
    if (((*(signed char *)((v0_2 + 0x0))) != 0)) goto L_C021738;
    v0_0 = ((int (*)(int, int, int))(FUN_0c187990))(v0_5, v0_1, v0_2);
    v0_0 = ((int (*)(int, int))(FUN_0c187990))(0x0, t37);
    v0_5 = (0x15);
    L_C021750:;
    v0_4 = ((FUN_0c018e74(v0_5)));
    goto L_C0217A2;
    L_C021738:;
    v0_6 = (int)(unsigned short)(v0_4 + 0x1) < (int)v0_3;
    v0_5 = ((v0_5 + 0x1A));
    v0_1 = ((v0_1 + 0x1A));
    v0_2 = ((v0_2 + 0x1A));
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C02171A;
    *(unsigned short *)((v0_0 + 0x0)) = 0x3;
    v0_5 = (0x16);
    goto L_C021750;
    L_C02152C:;
    if ((v0_4 != 7)) goto L_C021534;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C0217A2;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0x12C;
    goto L_C0217A2;
    L_C021534:;
    if ((v0_4 != 8)) goto L_C02153C;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) > (int)0xF0)) goto L_C0217A2;
    if (((*(short *)((v0_2 + 0x0))) != 0)) goto L_C021788;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    L_C021788:;
    v0_0 = FUN_0c01cd2c(0x141);
    v0_4 = ((short)v0_0);
    if (((short)v0_0 == 0)) goto L_C0217A2;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    L_C021796:;
    v0_4 = ((FUN_0c05aab6(((*(signed char *)0xC309993) << 1), 0x3)));
    goto L_C0217A2;
    L_C02153C:;
    if ((v0_4 != 9)) goto L_C021544;
    goto L_C0217A2;
    L_C021544:;
    goto L_C0217A2;
    L_C0215C4:;
    v0_4 = (((struct o0_short *)0xC305412)->v);
    v0_3 = (v0_4);
    v0_5 = (0x3);
    if (((int)(short)v0_4 >= 0)) goto L_C0215D2;
    v0_3 = (v0_6);
    L_C0215D2:;
    FUN_0c02b502(v0_5);
    *(int *)((int)stk + 4) = (unsigned short)((int)((int)(short)v0_3 / (int)0x3C));
    *(int *)((int)stk + 0) = 0xC1A89E8;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
    FUN_0c187cac((((int)stk + 0) + 0x10), 0x0, 0x0, 0x0, 0xC1A89E8);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x10);
    FUN_0c02b342((*(int *)(((int)stk + 12))), (((int)stk + 8) + 0x10));
    FUN_0c02b3ba((*(int *)(((int)stk + 8))), 296.0f, 368.0f, (1.0f + 1.0f));
    v0_4 = (short)(FUN_0c01cd2c(0x101)) == 0;
    v0_3 = (0x2);
    if (v0_4) goto L_C02163A;
    if (((*(signed char *)0xC305416) != 0)) goto L_C02162C;
    *(unsigned short *)((v0_0 + 0x0)) = 0x1;
    L_C02162E:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0x10;
    goto L_C021796;
    L_C02162C:;
    *(unsigned short *)((v0_0 + 0x0)) = v0_3;
    goto L_C02162E;
    L_C02163A:;
    v0_4 = (short)(FUN_0c01cd2c(0x40)) != 0;
    if (v0_4) goto L_C021652;
    v0_4 = (((struct o0_short *)0xC305412)->v);
    (((struct o0_ushort *)0xC305412)->v) = (v0_4 - 1);
    if (!(((short)(v0_4 - 1) != 0))) goto L_C021652;
    v0_4 = ((FUN_0c01c714(0xC305416, 0x1, 0x2)));
    goto L_C0217A2;
    L_C021652:;
    *(unsigned short *)((v0_0 + 0x0)) = v0_3;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = v0_3;
    (((struct o4_uchar *)0xC305412)->v) = 0x1;
    v0_4 = ((FUN_0c05aab6(((*(signed char *)0xC309993) << 1), 0x4)));
    goto L_C0217A2;
    L_C021588:;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) == 0)) goto L_C021598;
    goto L_C0217A2;
    L_C021598:;
    v0_0 = (((*(signed char *)((v0_1 + 0x0))) + 0x1));
    goto L_C0216B4;
    L_C021574:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    v0_3 = FUN_0c018e9c(0x20, 0xC305416);
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    *(unsigned short *)((v0_0 + 0x0)) = v0_6;
    v0_4 = (v0_3);
    goto L_C021588;
    L_C021548:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    v0_0 = (v0_6);
    v0_2 = ((0x0 + v0_5));
    v0_8 = (0xC30A34C);
    L_C02156A:;
    if (((int)(unsigned short)v0_0 < (int)v0_3)) goto L_C021558;
    goto L_C0217A2;
    L_C021558:;
    v0_5 = FUN_0c1879e0(v0_2, v0_8);
    v0_4 = (v0_5);
    v0_0 = ((v0_0 + 0x1));
    if ((v0_5 != 0)) goto L_C021568;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    L_C021568:;
    v0_2 = ((v0_2 + 0x1A));
    goto L_C02156A;
}

int FUN_0c026888(int a4, int a5, int a6)
{
    int stk[136];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_5 = a4;
    v0_4 = a5;
    v0_6 = a6;
    FUN_0c02568a(v0_5, v0_4, v0_6);
    FUN_0c02b7fc();
    v0_4 = (FUN_0c022050()) != 0;
    v0_2 = ((0xA0 + ((int)stk + 0)));
    v0_1 = (0x0);
    v0_0 = (0xC309994);
    v0_3 = (0xC30985A);
    if (v0_4) goto L_C0268BE;
    L_C026A96:;
    v0_4 = (0xC30985C);
    if (((*(signed char *)0xC30985C) != 0)) goto L_C026B3E;
    v0_5 = (FUN_0c021ed2()) == 0;
    if (v0_5) goto L_C026AE0;
    if (((*(signed char *)0xC305417) != 2)) goto L_C026AE0;
    *(unsigned char *)((v0_2 + 0x0)) = 0x75;
    *(unsigned int *)(((int)stk + 16)) = (v0_2 + 0x1);
    *(unsigned char *)(((v0_2 + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)((v0_2 + 0x2)) = 0x4;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_2, (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    v0_2 = ((FUN_0c05aab6(0x0, 0x3)));
    L_C026B44:;
    return v0_2;
    L_C026AE0:;
    v0_0 = FUN_0c01599c();
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C026AF6;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    *(unsigned char *)0xC30985D = v0_1;
    goto L_C026B44;
    L_C026AF6:;
    v0_2 = (short)(FUN_0c01cd2c(0x800)) == 0;
    v0_0 = (0xC305417);
    if (v0_2) goto L_C026B10;
    v0_3 = *(signed char *)((v0_0 + 0x0));
    v0_2 = (v0_3);
    if ((v0_3 != 2)) goto L_C026B44;
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    L_C026B32:;
    v0_2 = ((FUN_0c05aab6(0x0, 0x5)));
    goto L_C026B44;
    L_C026B10:;
    v0_1 = FUN_0c01cd2c(0x400);
    v0_2 = ((short)v0_1);
    if (((short)v0_1 != 0)) goto L_C026B28;
    v0_1 = FUN_0c021ee2();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C026B44;
    L_C026B28:;
    if (((*(signed char *)((v0_0 + 0x0))) != 0)) goto L_C026B44;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C026B32;
    L_C026B3E:;
    v0_2 = ((FUN_0c025564()));
    goto L_C026B44;
    L_C0268BE:;
    FUN_0c0220c4((((int)stk + 0) + 0x18), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_5 = *(signed char *)(((int)stk + 24));
    v0_4 = (0xC1864E0);
    v0_4 = (v0_5);
    if ((v0_5 != 107)) goto L_C026990;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C026990;
    *(unsigned int *)(((int)stk + 16)) = 0xC30AD5C;
    v0_4 = (v0_1);
    v0_5 = (0x6);
    L_C0268F6:;
    if (((int)v0_4 < (int)v0_5)) goto L_C0268EA;
    *(unsigned char *)((v0_4 + 0xC30AD5C)) = v0_1;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), ((int)stk + 0), 0x1);
    v0_4 = (v0_1);
    v0_5 = (0xC309C74);
    L_C026918:;
    if (((int)v0_4 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C02690C;
    *(unsigned char *)((v0_4 + 0xC309C74)) = v0_1;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), ((int)stk + 0), 0x1);
    v0_4 = (v0_1);
    v0_5 = (0xC309C86);
    L_C02693E:;
    if (((int)v0_4 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C026932;
    *(unsigned char *)((v0_4 + 0xC309C86)) = v0_1;
    FUN_0c02b692(0xC30AD5C, 0xC309C74, 0xC309C86);
    goto L_C026A96;
    L_C026932:;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), (v0_4 + v0_5), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C02693E;
    L_C02690C:;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), (v0_4 + v0_5), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C026918;
    L_C0268EA:;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), ((*(int *)(((int)stk + 16))) + v0_4), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C0268F6;
    L_C026990:;
    v0_5 = ((*(int *)((v0_0 + 0x0))));
    if ((v0_4 != 101)) goto L_C0269E4;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C0269E4;
    FUN_0c1864e0(v0_5, (((int)stk + 0) + 0x1C), 0x1);
    if (((*(signed char *)(((int)stk + 28))) != 1)) goto L_C026A96;
    *(unsigned char *)((v0_2 + 0x0)) = 0x76;
    *(unsigned int *)(((int)stk + 16)) = (v0_2 + 0x1);
    *(unsigned char *)(((v0_2 + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)((v0_2 + 0x2)) = 0x1;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_2, (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
    *(unsigned char *)((v0_3 + 0x0)) = 0x9;
    *(unsigned short *)0xC30EF6C = v0_1;
    v0_2 = ((FUN_0c0573cc(0xFF000000, 0x0, 0x14)));
    goto L_C026B44;
    L_C0269E4:;
    if ((v0_4 != 100)) goto L_C026A56;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C026A56;
    FUN_0c1864e0(v0_5, (((int)stk + 0) + 0xC), 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), ((((int)stk + 0) + 0xC) + 0x1), 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), (((int)stk + 0) + 0x14), 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), (((int)stk + 0) + 0x8), 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), ((((int)stk + 0) + 0x8) + 0x1), 0x1);
    v0_5 = (0xC309E0A);
    v0_4 = (0xC309E0A);
    v0_7 = (0xC30A346);
    if (((unsigned int)0xC309E0A >= (unsigned int)0xC30A346)) goto L_C026A96;
    v0_6 = (0x86);
    L_C026A36:;
    if (((*(short *)((v0_5 + 0x0))) != (*(short *)(((int)stk + 12))))) goto L_C026A4A;
    *(unsigned char *)((v0_4 + 0x2)) = (*(signed char *)(((int)stk + 20)));
    *(unsigned short *)((v0_4 + 0x4)) = (*(short *)(((int)stk + 8)));
    goto L_C026A96;
    L_C026A4A:;
    v0_8 = (unsigned int)(v0_5 + v0_6) < (unsigned int)v0_7;
    v0_5 = ((v0_5 + v0_6));
    v0_4 = ((v0_4 + v0_6));
    if (v0_8) goto L_C026A36;
    goto L_C026A96;
    L_C026A56:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C026A88;
    v0_2 = ((FUN_0c02aa9e()));
    goto L_C026B44;
    L_C026A88:;
    FUN_0c0222a4((((int)stk + 0) + 0x18), ((int)stk + 0), (((int)stk + 0) + 0x4));
    goto L_C026A96;
}

int FUN_0c015f5c(void)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = *(int *)0xC304BA0;
    *(unsigned char *)(((v0_0 + 0x53) + 0x1)) = (*(signed char *)(((v0_0 + 0x53) + 0x0)));
    (((struct o53_uchar *)((*(int *)0xC304BA0)))->v) = (*(signed char *)0xC30EF9C);
    v0_4 = *(int *)0xC304BA0;
    v0_3 = (0x52);
    v0_1 = (0xC304BA0);
    v0_0 = (v0_4);
    v0_2 = (0x80);
    if ((((unsigned char)(*(signed char *)((v0_4 + 0x52))) & 0x80) != 0)) goto L_C015F9E;
    L_C015F80:;
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_5 = *(signed char *)(((v0_2 + 0x53) + 0x0));
    v0_0 = (v0_2);
    v0_4 = ((v0_2 + 0x53));
    v0_2 = ((unsigned char)v0_5);
    if (((unsigned char)v0_5 == 0)) goto L_C015FCA;
    v0_5 = *(signed char *)((v0_4 + 0x1));
    v0_3 = ((unsigned char)v0_5);
    if ((v0_2 == (unsigned char)v0_5)) goto L_C015FCA;
    (((struct o52_uchar *)(v0_0))->v) = 0x9E;
    L_C015FBE:;
    v0_3 = R14;
    *(int *)((int)stk + 4) = v0_3;
    v0_5 = (*(signed char *)(((*(int *)0xC304BA0) + 0x49))) == 0;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = (0x49);
    if (v0_5) goto L_C015FFE;
    FUN_0c017c70(v0_1, v0_0, v0_4, v0_2);
    FUN_0c017be8();
    v0_1 = FUN_0c017c96();
    v0_3 = (v0_1);
    L_C015FFE:;
    v0_5 = *(signed char *)((((*(int *)0xC304BA0) + 0x53) + 0x0));
    R14 = ((unsigned char)v0_5);
    v0_1 = (v0_5);
    if (((int)(unsigned char)v0_5 >= (int)0x4)) goto L_C016012;
    L_C016220:;
    *(volatile int *)((int)stk + 0);
    return v0_3;
    L_C016012:;
    v0_3 = (0x3C);
    if (((int)R14 < (int)0x3C)) goto L_C016022;
    if (((int)R14 > (int)0x48)) goto L_C016022;
    goto L_C016220;
    L_C016022:;
    if (((int)R14 < (int)0x53)) goto L_C016032;
    if (((int)R14 > (int)0x86)) goto L_C016032;
    goto L_C016220;
    L_C016032:;
    if (((int)R14 < (int)0x8C)) goto L_C01603C;
    goto L_C016220;
    L_C01603C:;
    v0_3 = (R14);
    if ((R14 != 49)) goto L_C016048;
    goto L_C016220;
    L_C016048:;
    if ((v0_3 != 73)) goto L_C016050;
    goto L_C016220;
    L_C016050:;
    if ((v0_3 != 75)) goto L_C016058;
    goto L_C016220;
    L_C016058:;
    if ((v0_3 != 78)) goto L_C016060;
    goto L_C016220;
    L_C016060:;
    if ((v0_3 == 40)) goto L_C0160E0;
    if ((v0_3 == 41)) goto L_C0160EA;
    if ((v0_3 == 42)) goto L_C0160F4;
    if ((v0_3 == 44)) goto L_C0160FE;
    if ((v0_3 == 47)) goto L_C016108;
    if ((v0_3 == 48)) goto L_C016112;
    if ((v0_3 == 53)) goto L_C01611C;
    if ((v0_3 == 57)) goto L_C016126;
    if ((v0_3 == 58)) goto L_C016130;
    if ((v0_3 == 59)) goto L_C01613A;
    if ((v0_3 == 74)) goto L_C016144;
    if ((v0_3 == 76)) goto L_C01614E;
    if ((v0_3 == 77)) goto L_C016158;
    if ((v0_3 == 79)) goto L_C016162;
    v0_5 = (((v0_3 == 80)));
    if ((v0_5)) goto L_C01616C;
    if ((v0_3 == 81)) goto L_C016176;
    if ((v0_3 == 82)) goto L_C016180;
    if ((v0_3 != 0x88)) goto L_C0160C8;
    FUN_0c01763a();
    L_C0161F6:;
    if ((R14 == 41)) goto L_C016210;
    if ((R14 != 40)) goto L_C016214;
    v0_1 = (*(int *)(((*(int *)0xC304BA0) + 0x4))) == 0;
    if (v0_1) goto L_C016214;
    L_C016210:;
    L_C016216:;
    *(volatile int *)((int)stk + 0);
    return FUN_0c05aab6(0x0, v0_0);
    L_C016214:;
    goto L_C016216;
    L_C0160C8:;
    if ((v0_3 != 0x8A)) goto L_C0160D2;
    FUN_0c017696();
    goto L_C0161F6;
    L_C0160D2:;
    if ((v0_3 != 0x8B)) goto L_C0160DC;
    FUN_0c0176ba();
    goto L_C0161F6;
    L_C0160DC:;
    FUN_0c016d00(v0_1, v0_0, v0_4, v0_2);
    goto L_C0161F6;
    L_C016180:;
    FUN_0c017622();
    goto L_C0161F6;
    L_C016176:;
    FUN_0c01760a();
    goto L_C0161F6;
    L_C01616C:;
    FUN_0c017538(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016162:;
    FUN_0c01746e(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016158:;
    FUN_0c01742e(v0_1);
    goto L_C0161F6;
    L_C01614E:;
    FUN_0c0173e6(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016144:;
    FUN_0c0173bc(v0_1, v0_0);
    goto L_C0161F6;
    L_C01613A:;
    FUN_0c017314();
    goto L_C0161F6;
    L_C016130:;
    FUN_0c017292();
    goto L_C0161F6;
    L_C016126:;
    FUN_0c017234();
    goto L_C0161F6;
    L_C01611C:;
    FUN_0c0171f0();
    goto L_C0161F6;
    L_C016112:;
    FUN_0c0171cc();
    goto L_C0161F6;
    L_C016108:;
    FUN_0c01718c();
    goto L_C0161F6;
    L_C0160FE:;
    FUN_0c017160(0x0);
    goto L_C0161F6;
    L_C0160F4:;
    FUN_0c017104(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C0160EA:;
    FUN_0c0170ae();
    goto L_C0161F6;
    L_C0160E0:;
    FUN_0c017098();
    goto L_C0161F6;
    L_C015FCA:;
    return v0_3;
    L_C015F9E:;
    v0_4 = ((v0_0 + 0x53));
    if (((*(signed char *)(((v0_0 + 0x53) + 0x0))) != (*(signed char *)(((v0_0 + 0x53) + 0x1))))) goto L_C015FC2;
    v0_5 = *(signed char *)((v0_0 + 0x52));
    (((struct o52_uchar *)(v0_0))->v) = (v0_5 - 1);
    v0_3 = (0x52);
    if (((unsigned char)(v0_5 - 1) != v0_2)) goto L_C015FCA;
    *(unsigned char *)(((*(int *)((v0_1 + 0x0))) + v0_3)) = 0x84;
    goto L_C015FBE;
    L_C015FC2:;
    (((struct o52_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x52);
    goto L_C015F80;
}

int FUN_0c0cd5c0(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_7 = a4;
    v0_8 = a5;
    v0_0 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_8;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_3 = (FUN_0c04340c()) != 0;
    v0_2 = (v0_7);
    if (v0_3) goto L_C0CD5EA;
    L_C0CD86E:;
    v0_9 = (0x0);
    L_C0CD870:;
    return v0_9;
    L_C0CD5EA:;
    if (((int)(*(int *)0xC532488) >= (int)0x14)) goto L_C0CD5F8;
    goto L_C0CD86E;
    L_C0CD5F8:;
    v0_9 = (v0_2);
    v0_3 = (0xF);
    v0_6 = (0xC5421F8);
    v0_4 = (0xC03744A);
    v0_4 = (0xC4B40CC);
    w0_0 = (1.0f);
    if (!((v0_2 != 4))) goto L_C0CD718;
    if ((v0_9 != 5)) goto L_C0CD616;
    goto L_C0CD718;
    L_C0CD718:;
    if ((v0_2 != 4)) goto L_C0CD726;
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    L_C0CD72A:;
    v0_9 = FUN_0c03f444(0x9, 0x0, (*(int *)(((int)stk + 8))));
    v0_5 = (v0_9);
    if ((v0_9 != 0)) goto L_C0CD73E;
    goto L_C0CD86E;
    L_C0CD73E:;
    (((struct o180_uchar *)(v0_6))->v) = ((*(signed char *)((v0_6 + 0x180))) + 0x1);
    (((struct o19_uchar *)(v0_5))->v) = (*(signed char *)((v0_6 + 0x180)));
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0CD554;
    (((struct oA8_uchar *)(v0_5))->v) = 0x0;
    (((struct oAC_ushort *)(v0_5))->v) = v0_3;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    (((struct o423_uchar *)(v0_5))->v) = 0xFFFFFFFF;
    *(volatile int *)(((int)stk + 4));
    FUN_0c187798(v0_7, v0_8, v0_0);
    (((struct o424_uchar *)(v0_5))->v) = v0_2;
    (((struct o15_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 0)));
    FUN_0c0c212c(v0_5);
    (((struct o48_float *)(v0_5))->v) = w0_0;
    (((struct o44_float *)(v0_5))->v) = w0_0;
    (((struct o40_float *)(v0_5))->v) = w0_0;
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = 0xC6;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_7 = (0xC273810);
    v0_3 = (0xC2737EC);
    if (((int)(*(int *)(((int)stk + 8))) <= 0)) goto L_C0CD850;
    F15 = (0.600000024f);
    L_C0CD7B0:;
    v0_6 = *(int *)((((0xC4 + v0_5) + (*(int *)(((int)stk + 4)))) + 0x0));
    FUN_0c03744a(v0_6, 0x5, 0x47, (*(int *)((v0_4 + 0x0))));
    *(unsigned char *)((v0_6 + 0x0)) = 0x1;
    *(unsigned short *)((v0_6 + 0x6)) = 0x1F;
    (((struct o8C_float *)(v0_6))->v) = F15;
    (((struct o88_float *)(v0_6))->v) = F15;
    (((struct o84_float *)(v0_6))->v) = F15;
    v0_6 = (v0_6);
    if ((v0_2 != 4)) goto L_C0CD824;
    (((struct o6C_float *)(v0_6))->v) = (*(float *)((v0_3 + 0x0)));
    (((struct o70_float *)(v0_6))->v) = ((((struct o4_float *)(v0_3))->v));
    w0_0 = (((((struct o8_float *)(v0_3))->v)));
    L_C0CD836:;
    (((struct o74_float *)(v0_6))->v) = w0_0;
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    v0_7 = ((v0_7 + 0xC));
    v0_3 = ((v0_3 + 0xC));
    if (((int)(v0_6 + 0x1) < (int)(*(int *)(((int)stk + 8))))) goto L_C0CD7B0;
    L_C0CD850:;
    FUN_0c0c2ab6(v0_5, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_5 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0ccfc0(v0_5);
    v0_9 = (v0_5);
    goto L_C0CD870;
    L_C0CD824:;
    (((struct o6C_float *)(v0_6))->v) = (*(float *)((v0_7 + 0x0)));
    (((struct o70_float *)(v0_6))->v) = ((((struct o4_float *)(v0_7))->v));
    w0_0 = (((((struct o8_float *)(v0_7))->v)));
    goto L_C0CD836;
    L_C0CD726:;
    *(unsigned int *)(((int)stk + 8)) = 0x6;
    goto L_C0CD72A;
    L_C0CD616:;
    v0_9 = FUN_0c03f444(0x9, 0x0, 0x1);
    v0_5 = (v0_9);
    if ((v0_9 != 0)) goto L_C0CD62A;
    goto L_C0CD86E;
    L_C0CD62A:;
    (((struct o180_uchar *)(v0_6))->v) = ((*(signed char *)((v0_6 + 0x180))) + 0x1);
    (((struct o19_uchar *)(v0_5))->v) = (*(signed char *)((v0_6 + 0x180)));
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0CD554;
    v0_9 = (v0_2);
    v0_6 = (((((struct oC4_int *)(v0_5))->v)));
    if ((v0_2 == 0)) goto L_C0CD660;
    if ((v0_9 == 1)) goto L_C0CD660;
    if ((v0_9 == 2)) goto L_C0CD660;
    if ((v0_9 == 3)) goto L_C0CD672;
    if (!((v0_9 == 6))) goto L_C0CD6C4;
    FUN_0c03744a(v0_6, 0x4, 0x47, (*(int *)((v0_4 + 0x0))));
    (((struct oAC_ushort *)(v0_5))->v) = 0x1F;
    F15 = (0.800000012f);
    goto L_C0CD6C4;
    L_C0CD6C4:;
    *(unsigned char *)((v0_6 + 0x0)) = 0x1;
    *(unsigned short *)((v0_6 + 0x6)) = v0_3;
    (((struct o423_uchar *)(v0_5))->v) = 0xFFFFFFFF;
    *(volatile int *)(((int)stk + 4));
    FUN_0c187798(v0_7, v0_8, v0_0);
    (((struct o424_uchar *)(v0_5))->v) = v0_2;
    (((struct o15_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 0)));
    FUN_0c0c212c(v0_5);
    (((struct oA8_uchar *)(v0_5))->v) = 0x0;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    (((struct o48_float *)(v0_5))->v) = F15;
    (((struct o44_float *)(v0_5))->v) = F15;
    (((struct o40_float *)(v0_5))->v) = F15;
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = 0xC6;
    goto L_C0CD850;
    L_C0CD672:;
    FUN_0c03744a(v0_6, 0x3, 0x47, (*(int *)((v0_4 + 0x0))));
    (((struct oAC_ushort *)(v0_5))->v) = 0x1F;
    F15 = (0.75f);
    goto L_C0CD6C4;
    L_C0CD660:;
    (((struct oAC_ushort *)(v0_5))->v) = v0_3;
    FUN_0c03744a(v0_6, v0_2, 0x47, (*(int *)((v0_4 + 0x0))));
    F15 = (w0_0);
    goto L_C0CD6C4;
}
