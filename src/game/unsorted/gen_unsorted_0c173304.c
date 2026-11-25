/* game/unsorted: functions 0C173304-0C175898, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o124_uchar { char p[0x124]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uchar { char p[0x44]; unsigned char v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c037320(int, int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c0522be(int);
int FUN_0c067008(int);
int FUN_0c067294(int);
int FUN_0c0676ce(int);
int FUN_0c07c108(int);
int FUN_0c07c364(int);
int FUN_0c07c404(int);
int FUN_0c0c418c(int);
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
extern int FUN_0c187798();
int FUN_0c173304(int a4, int a5);
int FUN_0c173370(void);
int FUN_0c173454(int a4);
int FUN_0c173558(int a4, int a5, int a6);
void FUN_0c1736e8(int a4);

int FUN_0c173304(int a4, int a5)
{
    (((struct o50_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((signed char)a5 << 2) + (signed char)a5) << 2) << 1) + 0xC542854) + 0x14)));
    if (((unsigned short)(*(short *)((((((((signed char)a5 << 2) + (signed char)a5) << 2) << 1) + 0xC542854) + 0x10))) & 0x3FCF) != 0) {
        if ((int)(*(signed char *)((a4 + 0x3D))) > (int)0x1E) {
            (((struct o3D_uchar *)(a4))->v) = ((-(*(signed char *)0xC475DC2)) + 0x1E);
            (((struct o50_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((signed char)a5 << 2) + (signed char)a5) << 2) << 1) + 0xC542854) + 0x10)));
        } else {
            if ((*(signed char *)((a4 + 0x3D))) == 0) {
                (((struct o50_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((signed char)a5 << 2) + (signed char)a5) << 2) << 1) + 0xC542854) + 0x10)));
            }
        }
        (((struct o3D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3D))) + 0x1);
    } else {
        (((struct o3D_uchar *)(a4))->v) = 0x0;
    }
    return 0x3D;
}

int FUN_0c173370(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5421DC;
    t1 = *(signed char *)0xC475DBC;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            if ((unsigned char)t1 != 6) {
                                return FUN_0c0522be(((((struct o4_int *)0xC241B54)->v)));
                            }
                            return FUN_0c0522be(((((struct o0_int *)0xC241B54)->v)));
                        }
                        (((struct o260_float *)((((short)t0 * (short)0x2F8) + 0xC5410FC)))->v) = (*(float *)0xC173538);
                        (((struct o268_uint *)((0xC5410FC + ((short)(*(signed char *)0xC5421DC) * (short)0x2F8))))->v) = 0x0;
                        return 0x268;
                    }
                    (((struct o260_float *)((((short)t0 * (short)0x2F8) + 0xC5410FC)))->v) = 500.0f;
                    (((struct o268_uint *)((0xC5410FC + ((short)(*(signed char *)0xC5421DC) * (short)0x2F8))))->v) = 0xFFFFE000;
                    return 0x268;
                }
                (((struct o260_float *)((((short)t0 * (short)0x2F8) + 0xC5410FC)))->v) = 500.0f;
                (((struct o268_uint *)((0xC5410FC + ((short)(*(signed char *)0xC5421DC) * (short)0x2F8))))->v) = 0x2000;
                return 0x268;
            }
            (((struct o260_float *)((((short)t0 * (short)0x2F8) + 0xC5410FC)))->v) = 640.0f;
        } else {
            (((struct o260_float *)((((short)t0 * (short)0x2F8) + 0xC5410FC)))->v) = 1000.0f;
        }
        (((struct o268_uint *)((0xC5410FC + ((short)(*(signed char *)0xC5421DC) * (short)0x2F8))))->v) = 0x0;
        return 0x268;
    }
    return FUN_0c0522be(((((struct o4_int *)0xC241B54)->v)));
}

int FUN_0c173454(int a4)
{
    int qe0;
    int qe1;

    FUN_0c067008(a4);
    qe1 = (((short)(signed char)a4 * (short)0x3938) + 0xC532498);
    FUN_0c1718d4(qe1, a4);
    FUN_0c17193c(qe1, a4);
    qe0 = (((short)(signed char)a4 * (short)0x58) + 0xC475DC8);
    (((struct o3D_uchar *)(qe0))->v) = 0x0;
    (((struct o45_uchar *)(qe0))->v) = 0x0;
    *(unsigned char *)((qe0 + 0x1)) = 0x0;
    *(unsigned char *)((qe0 + 0x3)) = 0x0;
    (((struct o44_uchar *)(qe0))->v) = 0x0;
    *(unsigned char *)((qe0 + 0xA)) = 0x0;
    *(unsigned char *)((qe0 + 0x9)) = 0x0;
    *(unsigned char *)((qe0 + 0x7)) = 0x0;
    *(unsigned char *)((qe0 + 0x6)) = 0x0;
    *(unsigned char *)((qe0 + 0x4)) = 0x0;
    *(unsigned char *)((qe0 + 0x8)) = a4;
    *(unsigned char *)((qe0 + 0x5)) = a4;
    *(unsigned int *)((qe0 + 0x38)) = 0x0;
    *(unsigned char *)((qe0 + 0xB)) = 0x0;
    (((struct o18_float *)(qe0))->v) = 1.0f;
    (((struct o1C_float *)(qe0))->v) = 1.0f;
    (((struct o11_uchar *)(qe0))->v) = 0x0;
    *(unsigned char *)(((qe0 + 0x12) + 0x5)) = 0x0;
    *(unsigned char *)(((qe0 + 0x12) + 0x4)) = 0x0;
    *(unsigned char *)(((qe0 + 0x12) + 0x3)) = 0x0;
    *(unsigned char *)(((qe0 + 0x12) + 0x2)) = 0x0;
    *(unsigned char *)(((qe0 + 0x12) + 0x1)) = 0x0;
    (((struct o12_uchar *)(qe0))->v) = 0x0;
    (((struct o20_float *)(qe0))->v) = (((struct o28_float *)(qe1))->v);
    (((struct o24_float *)(qe0))->v) = (((struct o2C_float *)(qe1))->v);
    (((struct o28_float *)(qe0))->v) = (((struct o30_float *)(qe1))->v);
    (((struct o54_ushort *)(qe0))->v) = 0x0;
    *(unsigned short *)((qe1 + 0x1C)) = 0x0;
    return (FUN_0c172030(a4, (*(signed char *)((qe0 + 0x5))), (*(signed char *)((qe0 + 0x6))), (unsigned char)(*(signed char *)((qe0 + 0x7))), ((*(signed char *)((qe0 + 0x8)))), ((*(signed char *)((qe0 + 0x9)))), (unsigned char)(*(signed char *)((qe0 + 0xA)))));
}


#define SB(a, o) (*(signed char *)((a) + (o)))
#define UB(a, o) (*(unsigned char *)((a) + (o)))
#define SW(a, o) (*(short *)((a) + (o)))
#define UW(a, o) (*(unsigned short *)((a) + (o)))
#define IW(a, o) (*(int *)((a) + (o)))
#define FL(a, o) (*(float *)((a) + (o)))

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c1736e8.txt) */
void FUN_0c1736e8(int a4)
{
    int stk[14];
    int q;
    int p;
    signed char idx;
    int m;
    int t1010;
    int dotail;
    int kk;
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

    idx = a4;
    p = (((short)idx * (short)0x3938) + 0xC532498);
    q = (((short)idx * (short)0x58) + 0xC475DC8);
    FUN_0c07c364(p);
    FUN_0c173304(q, idx);
    t7 = idx;
    if (((unsigned short)(*(short *)((((((t7 << 2) + t7) << 2) << 1) + 0xC542868))) & 0x8000) != 0) {
        t10 = q;
        *(unsigned char *)((t10 + 0x0)) = ((*(signed char *)((t10 + 0x0))) + 0x1);
        if ((int)(*(signed char *)((q + 0x0))) >= (int)0x5) {
            *(unsigned char *)((q + 0x0)) = 0x0;
        }
        if ((*(signed char *)((q + 0x0))) == 0) {
            (((struct oA8_uchar *)(p))->v) = 0x1;
            (((struct o124_uchar *)(p))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(p))->v) = 0x0;
            (((struct o124_uchar *)(p))->v) = 0x0;
        }
        t28 = q;
        (((struct o3C_uchar *)(t28))->v) = 0x0;
        *(unsigned char *)((t28 + 0x1)) = 0x0;
        *(unsigned short *)((q + 0xE)) = 0x0;
        t30 = q;
        *(unsigned char *)(((0x6 + t30) + 0x0)) = 0x0;
        *(unsigned char *)((t30 + 0x9)) = 0x0;
        t31 = q;
        *(unsigned char *)(((0xA + t31) + 0x0)) = 0x0;
        *(unsigned char *)((t31 + 0x7)) = 0x0;
        t32 = q;
        t33 = idx;
        *(unsigned char *)(((0x8 + t32) + 0x0)) = t33;
        *(unsigned char *)((t32 + 0x5)) = t33;
        (((struct o10_uchar *)(q))->v) = 0xFFFFFFFF;
        FUN_0c171ebe(idx);
        FUN_0c1718d4(p, idx);
        (((struct o20_float *)(q))->v) = ((((struct o28_float *)(p))->v));
        (((struct o24_float *)(q))->v) = ((((struct o2C_float *)(p))->v));
        (((struct o28_float *)(q))->v) = ((((struct o30_float *)(p))->v));
    }
    FUN_0c17244a(q, idx);
    t59 = *(signed char *)((q + 0x0));
    if ((unsigned int)t59 <= (unsigned int)3) {
        t63 = *(signed char *)((q + 0x1));
        if (t59 == 0) {
            if ((unsigned int)t63 <= (unsigned int)4) {
                *(unsigned int *)(((int)stk + 28)) = (t63 == 0) ? 0xF : (t63 == 3) ? 0xD : (t63 == 4) ? 0x3 : 0x5;
            }
        } else if (t59 == 1) {
            if ((unsigned int)t63 <= (unsigned int)8) {
                *(unsigned int *)(((int)stk + 28)) = (t63 <= 2) ? 0x13 : 0xE;
            }
        } else {
            *(unsigned int *)(((int)stk + 28)) = (t59 == 2) ? 0x2 : 0x7;
        }
        if (IW(q, 0x50) & 0x2000) {
            if (SB(q, 0x3C) != 0) {
                UB(q, 0x3C) = SB(q, 0x3C) - 1;
            } else {
                UB(q, 0x3C) = (*(int *)(((int)stk + 28))) - 1;
            }
        }
        if (IW(q, 0x50) & 0x1000) {
            if ((int)SB(q, 0x3C) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                UB(q, 0x3C) = SB(q, 0x3C) + 0x1;
            } else {
                UB(q, 0x3C) = 0x0;
            }
        }
        if (IW(q, 0x50) & 0xC00) {
            *(unsigned int *)(((int)stk + 32)) = (IW(q, 0x50) & 0x800) ? 0xFFFFFFFF : 0x1;
        }
    }
    if (t59 != 0) {
        if (t59 == 1) {
            if ((((((struct o50_int *)(q))->v)) & 0xC00) == 0) {
            } else {
                if ((*(signed char *)((q + 0x3C))) == 0) {
                    t137 = q;
                    *(unsigned char *)((t137 + 0x1)) = ((*(signed char *)((t137 + 0x1))) + (*(int *)(((int)stk + 32))));
                    if ((int)(*(signed char *)((q + 0x1))) < 0) {
                        *(unsigned char *)((q + 0x1)) = 0x8;
                    }
                    if ((int)(*(signed char *)((q + 0x1))) > (int)0x8) {
                        *(unsigned char *)((q + 0x1)) = 0x0;
                    }
                    FUN_0c171ebe(idx);
                    *(unsigned short *)((q + 0xE)) = 0x0;
                    (((struct o10_uchar *)(q))->v) = 0xFFFFFFFF;
                    (((struct o18_float *)(q))->v) = 1.0f;
                    if ((*(signed char *)((q + 0x1))) == 3) {
                        (((struct o18_float *)(q))->v) = 5.0f;
                    }
                }
                t171 = SB(q, 1);
                if ((unsigned int)t171 <= (unsigned int)8) {
                    t1000 = SB(q, 0x3C);
                    if (t1000 == 1 || t1000 == 2) {
                        switch (t171) {
                        case 0:
                            m = IW(0xC4B40D8, 0);
                            break;
                        case 1:
                            m = IW(0xC4B40CC, 0);
                            break;
                        case 2:
                            t1005 = SB(0xC53249A, (short)idx * (short)0x3938);
                            m = (t1005 == 12 || t1005 == 13) ? IW(idx << 3, 0xC4B40E0) : IW(idx << 2, 0xC4B40FC);
                            break;
                        case 3:
                            m = IW(0xC4B40D0, 0);
                            break;
                        case 5:
                            m = IW(0xC4B40D4, 0);
                            break;
                        case 8:
                            m = IW(0xC4B4110, 0);
                            break;
                        default:
                            m = IW(0xC4B410C, 0);
                            break;
                        }
                        if (t1000 == 1) {
                            UW(q, 0xE) = (*(short *)(((int)stk + 32))) + SW(q, 0xE);
                            if ((int)SW(q, 0xE) >= (int)IW(m, 0xC)) {
                                UW(q, 0xE) = 0x0;
                            }
                            if ((int)SW(q, 0xE) < 0) {
                                UW(q, 0xE) = SW(m, 0xC) - 1;
                            }
                            FUN_0c171ebe(idx);
                            UB(q, 0x7) = 0x0;
                            UB(q, 0x6) = 0x0;
                            UB(q, 0x10) = 0xFFFFFFFF;
                        } else {
                            t1010 = FUN_0c037320(SW(q, 0xE), m);
                            UB(q, 0x10) = (*(int *)(((int)stk + 32))) + SB(q, 0x10);
                            if ((int)SB(q, 0x10) >= t1010) {
                                UB(q, 0x10) = 0x0;
                            }
                            if ((int)SB(q, 0x10) < (int)0xFFFFFFFF) {
                                UB(q, 0x10) = t1010 - 1;
                            }
                            FUN_0c171ebe(idx);
                            UB(q, 0x7) = 0x0;
                            UB(q, 0x6) = 0x0;
                        }
                        if (IW(q, 0x38) == 0) {
                            IW(q, 0x38) = FUN_0c171984(idx, 0x0);
                            FUN_0c171f0c(idx);
                        }
                    }
                }
                t1098 = *(signed char *)((0x3C + q));
                if ((unsigned int)(t1098 - 3) >= (unsigned int)0x10) {
                } else {
                    switch (((t1098 - 3) << 1)) {
                        case 0:
                        {
                            if ((*(int *)((q + 0x38))) != 0) {
                                t1103 = q;
                                u1105 = ((((struct o18_float *)(t1103))->v));
                                u1105 = u1105 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o18_float *)(t1103))->v) = u1105;
                                if (0.0f > ((((struct o18_float *)(q))->v))) {
                                    (((struct o18_float *)(q))->v) = 0.0f;
                                }
                            }
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 2:
                        {
                            t1119 = q;
                            *(unsigned char *)((t1119 + 0x5)) = ((*(signed char *)((t1119 + 0x5))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)((q + 0x5))) < (int)0xFFFFFFFF) {
                                *(unsigned char *)((q + 0x5)) = 0x3;
                            }
                            if ((int)(*(signed char *)((q + 0x5))) > (int)0x3) {
                                *(unsigned char *)((q + 0x5)) = 0xFFFFFFFF;
                            }
                            FUN_0c171ebe(idx);
                            if ((*(int *)((q + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)(((q + 0x38) + 0x0)) = (FUN_0c171984(idx, 0x1));
                                FUN_0c171f0c(idx);
                            }
                        }
                            break;
                        case 4:
                        {
                            t1148 = q;
                            *(unsigned char *)((t1148 + 0x7)) = ((*(signed char *)((t1148 + 0x7))) + (*(int *)(((int)stk + 32))));
                            FUN_0c171ebe(idx);
                            if ((*(int *)((q + 0x38))) != 0) {
                            } else {
                                *(unsigned int *)(((q + 0x38) + 0x0)) = (FUN_0c171984(idx, 0x1));
                                FUN_0c171f0c(idx);
                            }
                        }
                            break;
                        case 6:
                        {
                            if ((*(int *)((q + 0x38))) == 0) {
                            } else {
                                t1167 = q;
                                *(unsigned char *)((t1167 + 0xB)) = ((*(signed char *)((t1167 + 0xB))) + (*(int *)(((int)stk + 32))));
                                *(unsigned int *)(((int)stk + 24)) = 0xB;
                                if ((int)(*(signed char *)((q + 0xB))) > (int)0xB) {
                                    *(unsigned char *)(((0xB + q) + 0x0)) = 0x0;
                                }
                                if ((int)(*(signed char *)((q + 0xB))) < 0) {
                                    *(unsigned char *)((q + 0xB)) = (*(signed char *)(((int)stk + 24)));
                                }
                                FUN_0c171f0c(idx);
                            }
                        }
                            break;
                        case 8:
                        {
                            t1191 = q;
                            *(unsigned char *)((t1191 + 0xC)) = (((*(signed char *)((t1191 + 0xC))) + (*(int *)(((int)stk + 32)))) & 0x3);
                        }
                            break;
                        case 10:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1195 = q;
                                *(unsigned int *)((t1195 + 0x2C)) = ((*(int *)((t1195 + 0x2C))) + 0x100);
                            } else {
                                t1197 = q;
                                *(unsigned int *)((t1197 + 0x2C)) = ((*(int *)((t1197 + 0x2C))) - 0x100);
                            }
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 12:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1205 = q;
                                *(unsigned int *)((t1205 + 0x30)) = ((*(int *)((t1205 + 0x30))) + 0x100);
                            } else {
                                t1207 = q;
                                *(unsigned int *)((t1207 + 0x30)) = ((*(int *)((t1207 + 0x30))) - 0x100);
                            }
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 14:
                        {
                            if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                t1215 = q;
                                *(unsigned int *)((t1215 + 0x34)) = ((*(int *)((t1215 + 0x34))) + 0x100);
                            } else {
                                t1217 = q;
                                *(unsigned int *)((t1217 + 0x34)) = ((*(int *)((t1217 + 0x34))) - 0x100);
                            }
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 16:
                        {
                            t1225 = q;
                            (((struct o20_float *)(t1225))->v) = (((((struct o20_float *)(t1225))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 18:
                        {
                            t1230 = q;
                            (((struct o24_float *)(t1230))->v) = (((((struct o24_float *)(t1230))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 20:
                        {
                            t1235 = q;
                            (((struct o28_float *)(t1235))->v) = (((((struct o28_float *)(t1235))->v)) + (float)(*(int *)(((int)stk + 32))));
                            FUN_0c171f0c(idx);
                        }
                            break;
                        case 22:
                        {
                            if ((*(int *)((q + 0x38))) == 0) {
                            } else {
                                t1242 = *(int *)((q + 0x38));
                                (((struct oAA_uchar *)(t1242))->v) = ((*(signed char *)((t1242 + 0xAA))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)((q + 0x38))) + 0xAA))) < 0) {
                                    (((struct oAA_uchar *)((*(int *)((q + 0x38)))))->v) = 0x3;
                                }
                                if ((int)(*(signed char *)(((*(int *)((q + 0x38))) + 0xAA))) < (int)0x4) {
                                } else {
                                    (((struct oAA_uchar *)((*(int *)((q + 0x38)))))->v) = 0x0;
                                }
                            }
                        }
                            break;
                        case 24:
                        {
                            if ((*(int *)((q + 0x38))) != 0) {
                                t1270 = *(int *)((q + 0x38));
                                (((struct oAB_uchar *)(t1270))->v) = ((*(signed char *)((t1270 + 0xAB))) + (*(int *)(((int)stk + 32))));
                                if ((int)(*(signed char *)(((*(int *)((q + 0x38))) + 0xAB))) < 0) {
                                    (((struct oAB_uchar *)((*(int *)((q + 0x38)))))->v) = 0x8;
                                }
                                if ((int)(*(signed char *)(((*(int *)((q + 0x38))) + 0xAB))) >= (int)0x9) {
                                    (((struct oAB_uchar *)((*(int *)((q + 0x38)))))->v) = 0x0;
                                }
                            }
                        }
                            break;
                        case 26:
                        {
                            if ((*(int *)((q + 0x38))) != 0) {
                                t1298 = *(int *)((q + 0x38));
                                u1301 = ((((struct o40_float *)(t1298))->v));
                                u1301 = u1301 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o40_float *)(t1298))->v) = u1301;
                                if (0.0f > ((((struct o40_float *)((*(int *)((q + 0x38)))))->v))) {
                                    (((struct o40_float *)((*(int *)((q + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                        case 28:
                        {
                            if ((*(int *)((q + 0x38))) != 0) {
                                t1319 = *(int *)((q + 0x38));
                                u1322 = ((((struct o44_float *)(t1319))->v));
                                u1322 = u1322 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o44_float *)(t1319))->v) = u1322;
                                if (0.0f > ((((struct o44_float *)((*(int *)((q + 0x38)))))->v))) {
                                    (((struct o44_float *)((*(int *)((q + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                        default:
                        {
                            if ((*(int *)((q + 0x38))) != 0) {
                                t1340 = *(int *)((q + 0x38));
                                u1343 = ((((struct o48_float *)(t1340))->v));
                                u1343 = u1343 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                                (((struct o48_float *)(t1340))->v) = u1343;
                                if (0.0f > ((((struct o48_float *)((*(int *)((q + 0x38)))))->v))) {
                                    (((struct o48_float *)((*(int *)((q + 0x38)))))->v) = 0.0f;
                                }
                            }
                        }
                            break;
                    }
                }
            }
            t1379 = idx;
            t1873 = 0xC542868;
            if (((unsigned short)(*(short *)((((((t1379 << 2) + t1379) << 2) << 1) + 0xC542868))) & 0x200) == 0) {
            } else {
                t1389 = *(signed char *)((q + 0x1));
                t1873 = t1389;
                if (t1389 != 0) {
                } else {
                    if (((*(signed char *)((0x3C + q))) != 4) && (t1396 = q, t1873 = *(signed char *)((0x3C + t1396)), t1873 != 5)) {
                    } else {
                        t1401 = *(int *)((q + 0x38));
                        t1873 = (FUN_0c171ebe(idx));
                        if (t1401 != 0) {
                        } else {
                            *(unsigned int *)(((q + 0x38) + 0x0)) = (FUN_0c171984(idx, 0x1));
                            t1873 = (FUN_0c171f0c(idx));
                        }
                    }
                }
            }
        } else {
            if (t59 == 2) {
                if ((((((struct o50_int *)(q))->v)) & 0xC00) != 0) {
                    t1480 = *(signed char *)((0x3C + q));
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
                if (((*(signed char *)((q + 0x3C))) != 0) && (t1502 = q, t1869 = *(signed char *)((0x3C + t1502)), t1869 != 1)) {
                } else {
                    t1504 = idx;
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
                    t1864 = 0x50;
                    if ((((((struct o50_int *)(q))->v)) & 0xC00) == 0) {
                    } else {
                        t1629 = *(signed char *)((0x3C + q));
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
                        if ((((((struct o50_int *)(q))->v)) & 0x2000) != 0) {
                            if ((*(signed char *)((q + 0x3C))) != 0) {
                                t1669 = q;
                                (((struct o3C_uchar *)(t1669))->v) = ((*(signed char *)((t1669 + 0x3C))) - 1);
                            } else {
                                (((struct o3C_uchar *)(q))->v) = ((*(int *)(((int)stk + 28))) - 1);
                            }
                        }
                        if ((((((struct o50_int *)(q))->v)) & 0x1000) != 0) {
                            if ((int)(*(signed char *)((q + 0x3C))) < (int)((*(int *)(((int)stk + 28))) - 1)) {
                                t1688 = q;
                                (((struct o3C_uchar *)(t1688))->v) = ((*(signed char *)((t1688 + 0x3C))) + 0x1);
                            } else {
                                (((struct o3C_uchar *)(q))->v) = 0x0;
                            }
                        }
                        if ((((((struct o50_int *)(q))->v)) & 0xC00) == 0) {
                        } else {
                            t1705 = 0x1;
                            if ((((((struct o50_int *)(q))->v)) & 0x800) != 0) {
                                t1705 = 0xFFFFFFFF;
                            }
                            *(unsigned int *)(((int)stk + 32)) = t1705;
                            t1708 = *(signed char *)((0x3C + q));
                            switch (t1708) {
                            case 1:
                                if ((int)(*(int *)(((int)stk + 32))) > 0) {
                                    t1773 = idx;
                                    t1775 = *(signed char *)((0xC471AA1 + (((t1773 << 1) + t1773) << 2)));
                                    if ((unsigned char)t1775 != 1) {
                                        if ((unsigned char)t1775 != 8) {
                                            if ((unsigned char)t1775 != 0x80) {
                                                t1776 = idx;
                                                *(unsigned char *)(((((t1776 << 1) + t1776) << 2) + 0xC471AA1)) = 0x8;
                                            } else {
                                                t1778 = idx;
                                                *(unsigned char *)(((((t1778 << 1) + t1778) << 2) + 0xC471AA1)) = 0x1;
                                            }
                                        } else {
                                            t1784 = idx;
                                            *(unsigned char *)(((((t1784 << 1) + t1784) << 2) + 0xC471AA1)) = 0x80;
                                        }
                                    } else {
                                        t1790 = idx;
                                        *(unsigned char *)(((((t1790 << 1) + t1790) << 2) + 0xC471AA1)) = 0x8;
                                    }
                                } else {
                                    t1796 = idx;
                                    t1798 = *(signed char *)((0xC471AA1 + (((t1796 << 1) + t1796) << 2)));
                                    if ((unsigned char)t1798 != 1) {
                                        if ((unsigned char)t1798 != 8) {
                                            if ((unsigned char)t1798 != 0x80) {
                                                t1799 = idx;
                                                *(unsigned char *)(((((t1799 << 1) + t1799) << 2) + 0xC471AA1)) = 0x80;
                                            } else {
                                                t1801 = idx;
                                                *(unsigned char *)(((((t1801 << 1) + t1801) << 2) + 0xC471AA1)) = 0x8;
                                            }
                                        } else {
                                            t1807 = idx;
                                            *(unsigned char *)(((((t1807 << 1) + t1807) << 2) + 0xC471AA1)) = 0x1;
                                        }
                                    } else {
                                        t1813 = idx;
                                        *(unsigned char *)(((((t1813 << 1) + t1813) << 2) + 0xC471AA1)) = 0x80;
                                    }
                                }
                                break;
                            case 2:
                                t1748 = idx;
                                *(unsigned char *)(((((t1748 << 1) + t1748) << 2) + 0xC471AA2)) = ((*(signed char *)(((((t1748 << 1) + t1748) << 2) + 0xC471AA2))) + (*(int *)(((int)stk + 32))));
                                t1752 = idx;
                                if ((int)(*(signed char *)(((((t1752 << 1) + t1752) << 2) + 0xC471AA2))) < 0) {
                                    t1755 = idx;
                                    *(unsigned char *)(((((t1755 << 1) + t1755) << 2) + 0xC471AA2)) = 0x0;
                                }
                                break;
                            case 3:
                                t1716 = idx;
                                *(unsigned char *)(((((t1716 << 1) + t1716) << 2) + 0xC471AA3)) = ((*(signed char *)(((((t1716 << 1) + t1716) << 2) + 0xC471AA3))) + (*(int *)(((int)stk + 32))));
                                t1720 = idx;
                                if ((int)(unsigned char)(*(signed char *)(((((t1720 << 1) + t1720) << 2) + 0xC471AA3))) < 0) {
                                    t1723 = idx;
                                    *(unsigned char *)(((((t1723 << 1) + t1723) << 2) + 0xC471AA3)) = 0x0;
                                }
                                break;
                            case 4:
                                t1729 = q;
                                (((struct o54_ushort *)(t1729))->v) = (((((struct o54_short *)(t1729))->v)) + (*(int *)(((int)stk + 32))));
                                if ((int)((((struct o54_short *)(q))->v)) < 0) {
                                    (((struct o54_ushort *)(q))->v) = 0x0;
                                }
                                break;
                            }
                        }
                        t1833 = idx;
                        if (((unsigned short)(*(short *)((((((t1833 << 2) + t1833) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                            t1836 = idx;
                            *(unsigned short *)(((((t1836 << 1) + t1836) << 2) + 0xC471A9E)) = ((((struct o54_short *)(q))->v));
                            FUN_0c07c108(p);
                        }
                        t1847 = idx;
                        t1859 = 0xC542868;
                        if (((unsigned short)(*(short *)((((((t1847 << 2) + t1847) << 2) << 1) + 0xC542868))) & 0x100) != 0) {
                            FUN_0c07c404(p);
                            t1852 = idx;
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
        if ((((((struct o50_int *)(q))->v)) & 0xC00) == 0) {
        } else {
            if ((*(signed char *)((q + 0x3C))) == 0) {
                t1945 = q;
                *(unsigned char *)((t1945 + 0x1)) = ((*(signed char *)((t1945 + 0x1))) + (*(int *)(((int)stk + 32))));
                if ((int)(*(signed char *)((q + 0x1))) < 0) {
                    *(unsigned char *)((q + 0x1)) = 0x4;
                }
                if ((int)(*(signed char *)((q + 0x1))) > (int)0x4) {
                    *(unsigned char *)((q + 0x1)) = 0x0;
                }
            }
            t1966 = *(signed char *)((q + 0x1));
            if (t1966 != 0) {
                if (t1966 == 1) {
                    t1970 = *(signed char *)((0x3C + q));
                    switch (t1970) {
                    case 1:
                        t2016 = q;
                        (((struct o20_float *)(t2016))->v) = (((((struct o20_float *)(t2016))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o28_float *)(p))->v) = ((((struct o20_float *)(q))->v));
                        break;
                    case 2:
                        t2003 = q;
                        (((struct o24_float *)(t2003))->v) = (((((struct o24_float *)(t2003))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o2C_float *)(p))->v) = ((((struct o24_float *)(q))->v));
                        break;
                    case 3:
                        t1990 = q;
                        (((struct o28_float *)(t1990))->v) = (((((struct o28_float *)(t1990))->v)) + (float)(*(int *)(((int)stk + 32))));
                        (((struct o30_float *)(p))->v) = ((((struct o28_float *)(q))->v));
                        break;
                    case 4:
                        if ((int)(*(int *)(((int)stk + 32))) > 0) {
                            t1976 = p;
                            *(unsigned int *)((t1976 + 0x38)) = ((*(int *)((t1976 + 0x38))) + 0x100);
                        } else {
                            t1978 = p;
                            *(unsigned int *)((t1978 + 0x38)) = ((*(int *)((t1978 + 0x38))) - 0x100);
                        }
                        break;
                    }
                } else {
                    if (t1966 == 2) {
                        t2029 = *(signed char *)((0x3C + q));
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
                            t2073 = *(signed char *)((0x3C + q));
                            if (t2073 != 1) {
                                if (t2073 != 2) {
                                    if (t2073 != 3) {
                                        if (t2073 != 4) {
                                            if ((t2073 != 5) && ((t2073 != 6) && ((t2073 != 7) && ((t2073 != 8) && ((t2073 != 9) && (t2073 != 10)))))) {
                                                if (t2073 == 12) {
                                                    t2074 = p;
                                                    t2077 = *(signed char *)((p + 0x446));
                                                    *(unsigned char *)((((((short)(*(signed char *)((t2074 + 0x371A))) * (short)0x2D0) + (t2074 + 0x2BC8)) + (((((t2077 << 2) << 1) + t2077) << 2) << 2)) + 0x0)) = 0x1;
                                                    t2079 = p;
                                                    t2082 = *(signed char *)((p + 0x447));
                                                    *(unsigned char *)((((((short)(*(signed char *)((t2079 + 0x371A))) * (short)0x2D0) + (t2079 + 0x3168)) + (((((t2082 << 2) << 1) + t2082) << 2) << 2)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct o100_int *)(p))->v)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct o10C_int *)(p))->v)) + 0x0)) = 0x1;
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
                                                        t2089 = (t2089 + (0x386C + p));
                                                        *(unsigned char *)((t2089 + 0x0)) = 0x0;
                                                        t2089 = p;
                                                        t2089 = (t2089 + 0x386C);
                                                        *(unsigned int *)((((((*(int *)(((int)stk + 24))) << 2) << 1) + t2089) + 0x4)) = t2088;
                                                        t2089 = (*(int *)(((int)stk + 24)));
                                                        t2089 = (t2089 + 0x1);
                                                    }
                                                }
                                            } else {
                                                t2105 = q;
                                                t2106 = *(signed char *)(((0x3C + q) + 0x0));
                                                *(unsigned char *)((((t2106 - 5) + (t2105 + 0x12)) + 0x0)) = ((*(signed char *)((((t2106 - 5) + (t2105 + 0x12)) + 0x0))) + (*(int *)(((int)stk + 32))));
                                                t2110 = q;
                                                t2111 = *(signed char *)(((0x3C + q) + 0x0));
                                                *(unsigned char *)((((t2111 - 5) + (t2110 + 0x12)) + 0x0)) = ((*(signed char *)((((t2111 - 5) + (t2110 + 0x12)) + 0x0))) & 0x7);
                                                *(unsigned char *)(((((((*(signed char *)((q + 0x3C))) - 5) << 2) << 1) + (p + 0x386C)) + 0x0)) = (*(signed char *)((((unsigned char)(*(signed char *)(((((*(signed char *)(((0x3C + q) + 0x0))) - 5) + (q + 0x12)) + 0x0))) + (0xC27B588 + ((((*(signed char *)((0x3C + q))) - 5) << 2) << 1))) + 0x0)));
                                            }
                                        } else {
                                            t2132 = (((struct o10C_int *)(p))->v);
                                            *(unsigned char *)((t2132 + 0x0)) = ((*(signed char *)((t2132 + 0x0))) ^ 0x1);
                                        }
                                    } else {
                                        t2141 = (((struct o100_int *)(p))->v);
                                        *(unsigned char *)((t2141 + 0x0)) = ((*(signed char *)((t2141 + 0x0))) ^ 0x1);
                                    }
                                } else {
                                    t2149 = p;
                                    t2150 = *(signed char *)((t2149 + 0x371A));
                                    t2152 = *(signed char *)((p + 0x447));
                                    *(unsigned char *)((((((short)t2150 * (short)0x2D0) + (t2149 + 0x3168)) + (((((t2152 << 2) << 1) + t2152) << 2) << 2)) + 0x0)) = ((*(signed char *)((((((short)t2150 * (short)0x2D0) + (t2149 + 0x3168)) + (((((t2152 << 2) << 1) + t2152) << 2) << 2)) + 0x0))) ^ 0x1);
                                }
                            } else {
                                t2161 = p;
                                t2162 = *(signed char *)((t2161 + 0x371A));
                                t2164 = *(signed char *)((p + 0x446));
                                *(unsigned char *)((((((short)t2162 * (short)0x2D0) + (t2161 + 0x2BC8)) + (((((t2164 << 2) << 1) + t2164) << 2) << 2)) + 0x0)) = ((*(signed char *)((((((short)t2162 * (short)0x2D0) + (t2161 + 0x2BC8)) + (((((t2164 << 2) << 1) + t2164) << 2) << 2)) + 0x0))) ^ 0x1);
                            }
                        } else {
                            if (t1966 == 4) {
                                t2174 = *(signed char *)((0x3C + q));
                                if (t2174 != 1) {
                                    if (t2174 != 2) {
                                    } else {
                                        t2175 = p;
                                        *(unsigned short *)((t2175 + 0x1C)) = (((*(short *)(((int)stk + 32))) + (*(short *)((0x1C + t2175)))) & 0x1);
                                    }
                                } else {
                                    t2183 = p;
                                    (((struct o371E_uchar *)(t2183))->v) = ((*(signed char *)((t2183 + 0x371E))) + (*(int *)(((int)stk + 32))));
                                    if ((int)(*(signed char *)((p + 0x371E))) < 0) {
                                        (((struct o371E_uchar *)(p))->v) = 0xA;
                                    }
                                    if ((int)(*(signed char *)((p + 0x371E))) > (int)0xA) {
                                        (((struct o371E_uchar *)(p))->v) = 0x0;
                                    }
                                    FUN_0c0676ce(idx);
                                }
                            }
                        }
                    }
                }
            } else {
                t2235 = *(signed char *)((0x3C + q));
                if ((unsigned int)(t2235 - 1) >= (unsigned int)0xE) {
                } else {
                    dotail = 0;
                    switch (((t2235 - 1) << 1)) {
                        case 0:
                        {
                            t2237 = q;
                            *(unsigned char *)((t2237 + 0x2)) = ((*(signed char *)((t2237 + 0x2))) + (*(int *)(((int)stk + 32))));
                            if ((int)(*(signed char *)((q + 0x2))) < 0) {
                                *(unsigned char *)((q + 0x2)) = 0xF;
                            }
                            if ((int)(*(signed char *)((q + 0x2))) <= (int)0xF) {
                            } else {
                                *(unsigned char *)((q + 0x2)) = 0x0;
                            }
                        }
                            break;
                        case 2:
                        {
                            t2252 = q;
                            *(unsigned char *)((t2252 + 0x3)) = (((*(signed char *)((t2252 + 0x3))) + (*(int *)(((int)stk + 32)))) & 0x1);
                            (((struct o371A_uchar *)(p))->v) = (*(signed char *)((q + 0x3)));
                            FUN_0c067294(p);
                            FUN_0c1718d4(p, idx);
                            FUN_0c17193c(p, idx);
                            FUN_0c0676ce(idx);
                        }
                            break;
                        case 4:
                        {
                            t2268 = q;
                            *(unsigned char *)((t2268 + 0x4)) = ((*(signed char *)((t2268 + 0x4))) ^ 0x1);
                        }
                            break;
                        case 6:
                            UB(q, 0x5) = SB(q, 0x5) + (*(int *)(((int)stk + 32)));
                            if ((int)SB(q, 0x5) < (int)0xFFFFFFFF) {
                                UB(q, 0x5) = 0x3;
                            }
                            if ((int)SB(q, 0x5) > (int)0x3) {
                                UB(q, 0x5) = 0xFFFFFFFF;
                            }
                            if (SB(q, 0x4) == 0) {
                                UB(q, 0xA) = SB(q, 0x7);
                                UB(q, 0x8) = SB(q, 0x5);
                                UB(q, 0x9) = SB(q, 0x6);
                            }
                            break;
                        case 8:
                            UB(q, 0x6) = SB(q, 0x6) + (*(int *)(((int)stk + 32)));
                            if ((int)SB(q, 0x6) < 0) {
                                UB(q, 0x6) = 0x6;
                            }
                            if ((int)SB(q, 0x6) > (int)0x6) {
                                UB(q, 0x6) = 0x0;
                            }
                            if (SB(q, 0x4) == 0) {
                                UB(q, 0xA) = SB(q, 0x7);
                                UB(q, 0x8) = SB(q, 0x5);
                                UB(q, 0x9) = SB(q, 0x6);
                            }
                            dotail = 1;
                            break;
                        case 10:
                            UB(q, 0x7) = SB(q, 0x7) + (*(int *)(((int)stk + 32)));
                            if (SB(q, 0x4) == 0) {
                                UB(q, 0xA) = SB(q, 0x7);
                                UB(q, 0x8) = SB(q, 0x5);
                                UB(q, 0x9) = SB(q, 0x6);
                            }
                            dotail = 1;
                            break;
                        case 12:
                            if (SB(q, 0x4) != 0) {
                                UB(q, 0x8) = SB(q, 0x8) + (*(int *)(((int)stk + 32)));
                                if ((int)SB(q, 0x8) < (int)0xFFFFFFFF) {
                                    UB(q, 0x8) = 0x3;
                                }
                                if ((int)SB(q, 0x8) > (int)0x3) {
                                    UB(q, 0x8) = 0xFFFFFFFF;
                                }
                            }
                            break;
                        case 14:
                            if (SB(q, 0x4) != 0) {
                                UB(q, 0x9) = SB(q, 0x9) + (*(int *)(((int)stk + 32)));
                                if ((int)SB(q, 0x9) < 0) {
                                    UB(q, 0x9) = 0x6;
                                }
                                if ((int)SB(q, 0x9) > (int)0x6) {
                                    UB(q, 0x9) = 0x0;
                                }
                                dotail = 1;
                            }
                            break;
                        case 16:
                            if (SB(q, 0x4) != 0) {
                                UB(q, 0xA) = SB(q, 0xA) + (*(int *)(((int)stk + 32)));
                                dotail = 1;
                            }
                            break;
                        case 18:
                        case 20:
                        case 22:
                            kk = t2235 - 10;
                            UB(p, 0x445 + kk) = SB(p, 0x445 + kk) + (*(int *)(((int)stk + 32)));
                            *(unsigned int *)(((int)stk + 20)) = IW(p, 0x450 + (kk << 3) + (SB(q, 0x3) << 2));
                            if ((int)IW(p, 0x450 + (kk << 3) + (SB(q, 0x3) << 2)) > 0) {
                                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) - 1);
                            }
                            if ((int)SB(p, 0x445 + kk) < 0) {
                                UB(p, 0x445 + kk) = (*(int *)(((int)stk + 20)));
                            }
                            if ((int)SB(p, 0x445 + kk) > (int)(*(int *)(((int)stk + 20)))) {
                                UB(p, 0x445 + kk) = 0x0;
                            }
                            break;
                        case 24:
                        {
                            t2586 = q;
                            u2588 = ((((struct o1C_float *)(t2586))->v));
                            u2588 = u2588 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                            (((struct o1C_float *)(t2586))->v) = u2588;
                            if (0.0f > ((((struct o1C_float *)(q))->v))) {
                                (((struct o1C_float *)(q))->v) = 0.0f;
                            }
                            t2594 = p;
                            t2595 = (((struct o11C_int *)(t2594))->v);
                            u2598 = (((struct o1C_float *)(q))->v);
                            (((struct o90_float *)(((((struct o118_int *)(t2594))->v))))->v) = u2598;
                            (((struct o90_float *)(t2595))->v) = u2598;
                        }
                            break;
                        default:
                        {
                            t2600 = p;
                            u2602 = ((((struct o40_float *)(t2600))->v));
                            u2602 = u2602 + 0.00999999978f * (float)(*(int *)(((int)stk + 32)));
                            (((struct o40_float *)(t2600))->v) = u2602;
                            if (0.0f > ((((struct o40_float *)(p))->v))) {
                                (((struct o40_float *)(p))->v) = 0.0f;
                            }
                            t2608 = p;
                            u2609 = (((struct o40_float *)(t2608))->v);
                            (((struct o48_float *)(t2608))->v) = u2609;
                            (((struct o44_float *)(t2608))->v) = u2609;
                        }
                            break;
                    }
                    if (dotail) {
                        t2325 = SB(q, 0xA);
                        *(int *)((int)stk + 8) = (unsigned char)t2325;
                        t2328 = SB(q, 0x9);
                        *(int *)((int)stk + 4) = t2328;
                        t2331 = SB(q, 0x8);
                        *(int *)((int)stk + 0) = t2331;
                        FUN_0c172030(idx, SB(q, 0x5), SB(q, 0x6), (unsigned char)SB(q, 0x7), t2331, t2328, (unsigned char)t2325);
                        t2340 = p;
                        t2341 = IW(t2340, 0x11C);
                        u2344 = FL(q, 0x1C);
                        FL(IW(t2340, 0x118), 0x90) = u2344;
                        FL(t2341, 0x90) = u2344;
                        FUN_0c1718d4(p, idx);
                        FUN_0c17193c(p, idx);
                    }
                }
            }
        }
        if (((*(signed char *)((q + 0x1))) == 3) && ((t2644 = q, t2645 = *(signed char *)((t2644 + 0x3C)), (int)t2645 >= (int)0x5) && (t2646 = q, t2647 = *(signed char *)((t2646 + 0x3C)), (int)t2647 <= (int)0xA))) {
            t2648 = idx;
            if (((unsigned short)(*(short *)((((((t2648 << 2) + t2648) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                FUN_0c0c418c(idx);
            }
        }
        if (((*(signed char *)((q + 0x1))) == 0) && (t2668 = q, t2669 = *(signed char *)((0x3C + t2668)), t2669 == 1)) {
            t2670 = idx;
            if (((unsigned short)(*(short *)((((((t2670 << 2) + t2670) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
                *(unsigned char *)(((0xC53249A + ((short)idx * (short)0x3938)) + 0x0)) = (*(signed char *)((q + 0x2)));
                FUN_0c1717bc();
                FUN_0c067008(idx);
                FUN_0c039fbc();
                FUN_0c1718d4(p, idx);
                FUN_0c17193c(p, idx);
            }
        }
        t2701 = idx;
        if (((unsigned short)(*(short *)((((((t2701 << 2) + t2701) << 2) << 1) + 0xC542868))) & 0x200) != 0) {
            t2705 = *(signed char *)((q + 0xA));
            *(int *)((int)stk + 8) = (unsigned char)t2705;
            t2708 = (*(signed char *)((q + 0x9)));
            *(int *)((int)stk + 4) = t2708;
            t2711 = (*(signed char *)((q + 0x8)));
            *(int *)((int)stk + 0) = t2711;
            FUN_0c172030(idx, (*(signed char *)((q + 0x5))), (*(signed char *)((q + 0x6))), (unsigned char)(*(signed char *)((q + 0x7))), t2711, t2708, (unsigned char)t2705);
            t2720 = p;
            t2721 = (((struct o11C_int *)(t2720))->v);
            u2724 = (((struct o1C_float *)(q))->v);
            (((struct o90_float *)(((((struct o118_int *)(t2720))->v))))->v) = u2724;
            (((struct o90_float *)(t2721))->v) = u2724;
            (((struct o28_float *)(p))->v) = ((((struct o20_float *)(q))->v));
            (((struct o2C_float *)(p))->v) = ((((struct o24_float *)(q))->v));
            (((struct o30_float *)(p))->v) = ((((struct o28_float *)(q))->v));
        }
        if ((*(signed char *)((q + 0x44))) != 0) {
            t2743 = idx;
            if (((unsigned short)(*(short *)((((((t2743 << 2) + t2743) << 2) << 1) + 0xC542868))) & 0x100) != 0) {
                FUN_0c1723b4(p, q, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
            }
        } else {
            FUN_0c1723b4(p, q, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
        }
        t2766 = idx;
        t2768 = *(short *)((0xC542868 + ((((t2766 << 2) + t2766) << 2) << 1)));
        t2775 = (unsigned short)t2768;
        if (((unsigned short)t2768 & 128) == 0) {
        } else {
            t2769 = q;
            (((struct o44_uchar *)(t2769))->v) = ((*(signed char *)((t2769 + 0x44))) ^ 0x1);
            t2775 = 0x44;
        }
    }
}
#undef SB
#undef UB
#undef SW
#undef UW
#undef IW
#undef FL
