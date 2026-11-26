/* Straight-line functions with calls and guards (batch gen_bv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o420_short { char p[0x420]; short v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c05a080(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05b048(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c06a406(int);
int FUN_0c06a444(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07f118(int);
int FUN_0c083384(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0cc064(int);
int FUN_0c0d01ba(int, int, int);
int FUN_0c108d12(int, int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117a6e(int, ...);
int FUN_0c1524d4(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c06a4b4(int a4);
void FUN_0c107654(signed char *a4);
int FUN_0c05f22c(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c09cfdc(int a4, int a5, int a6, int a7);
int FUN_0c0cc450(int a4, int a5, int a6, int a7);
int FUN_0c09d74e(int a4, int a5, int a6, int a7);
int FUN_0c08d778(int a4, int a5, int a6, int a7);
int FUN_0c09da94(int a4, int a5, int a6, int a7);
int FUN_0c0a9d38(int a4, int a5, int a6, int a7);


/* manual: 12-state sequence on bytes a4[0x15..0x17] (random banner, timed messages, waits); 253 cases, 429 of 429 instructions */
void FUN_0c107654(signed char *a4)
{
    int st = a4[0x15];
    int msg;
    int *g;
    signed char *p;

    if ((unsigned)st < 10 && (0x2A5 >> st & 1)) {
        a4[0x15]++;
        a4[0x16] = 0;
        if (st == 9)
            return;
        st++;
    }
    g = (int *)0x0C473CC0;
    p = a4 + 0x16;
    switch (st) {
    case 1:
        switch (*p) {
        case 0:
            ++*p;
            FUN_0c117a6e(((int *)0x0C290B0C)[nlRand() % 2], 0x0C532498);
            ((void (*)(int))FUN_0c115120)(4);
            p = *(signed char **)0x0C5325B0;
            *(float *)(p + 0x98) = 8.0f;
            *(float *)(p + 0x94) = 8.0f;
            p = *(signed char **)0x0C5325B4;
            *(float *)(p + 0x98) = 8.0f;
            *(float *)(p + 0x94) = 8.0f;
            break;
        case 1:
            if (FUN_0c117d54() < 0) {
                ++*p;
                *(short *)(a4 + 0x20) = 0;
            }
            break;
        case 2:
            if ((short)++*(unsigned short *)(a4 + 0x20) > 210) {
                ++*p;
                FUN_0c117e76();
                FUN_0c05b048(120, 1);
            }
            break;
        case 3:
            if (FUN_0c05f22c(0x3FCF)) {
                ++p[-1];
                g[12] = 1;
                *(short *)(*(char **)0x0C474BAC + 0x1C) = 1;
            }
            break;
        }
        break;
    case 3:
        switch (*p) {
        case 0:
            if (g[10] == 1) {
                g[10] = 2;
                g[2] = -1;
                ++*p;
            } else
                ++p[-1];
            break;
        case 1:
            ++*p;
            a4[0x17] = 0;
        case 2:
            p = a4 + 0x17;
            msg = 53;
            goto step;
        case 3:
            if ((signed char)(*(char **)0x0C474BAC)[0x14] == 1) {
                a4[0x14] = 0;
                g[12] = 0;
                (*(char **)0x0C474B98)[0x14] = 0x63;
                *(int *)0x0C474B98 = 0;
                FUN_0c108d12(g[0], g[1], g[2]);
            }
            break;
        }
        break;
    case 4:
        if (g[13] == 1)
            ++p[-1];
        else
            a4[0x15] = 7;
        break;
    case 6:
    case 8:
    case 10:
            msg = st == 6 ? 72 : st == 8 ? 73 : 76;
    step:
        switch (*p) {
        case 0:
            ++*p;
            if (msg == 73) {
                if (g[14] == 1)
                    msg = nlRand() % 2 ? 74 : 75;
                else
                    g[14] = 1;
            } else if (msg == 76)
                FUN_0c05a080(30, 0);
            FUN_0c117944(msg, 0x0C532498);
            break;
        case 1:
            if (FUN_0c117d54() < 0) {
                ++*p;
                FUN_0c117e76();
            }
            break;
        case 2:
            if (FUN_0c05f22c(0x3FCF))
                ++p[-1];
            break;
        }
        break;
    case 11:
        a4[0x14]++;
        break;
    }
}

int FUN_0c09cfdc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return ((int (*)(int, int, int, int))(0xC09CF9E))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC09CF94))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC09CEE2))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09CE70))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09CD22))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09CBA2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09CAC8))(a4, a5, a6, a7);
}

int FUN_0c0cc450(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_1 = a6;
    v0_2 = a7;
    v0_0 = R13;
    v0_4 = R12;
    v0_6 = R11;
    v0_5 = *(signed char *)((v0_3 + 0x17));
    v0_4 = (v0_5);
    R12 = ((0x428 + v0_3));
    R13 = (0x0);
    v0_0 = (v0_3);
    F14 = (0.0f);
    F15 = (-2.0f);
    if ((v0_5 == 0)) goto L_C0CC47C;
    if ((v0_4 == 1)) goto L_C0CC4CC;
    L_C0CC780:;
    return v0_4;
    L_C0CC4CC:;
    v0_4 = FUN_0c0c2ce4(v0_0);
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0CC502;
    if ((v0_3 != 2)) goto L_C0CC4FA;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    return FUN_0c0c2d56(v0_0, 0x3, v0_1, v0_2);
    L_C0CC4FA:;
    (((struct o50_float *)(v0_0))->v) = F14;
    (((struct o5C_float *)(v0_0))->v) = F15;
    L_C0CC502:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_4 = (*(signed char *)((v0_0 + 0x2))) == 0;
    v0_3 = *(int *)0xC532488;
    R11 = (0xC05AAE4);
    v0_3 = (v0_3);
    v0_5 = (0x5);
    if (v0_4) goto L_C0CC530;
    v0_6 = *(signed char *)((v0_0 + 0x16));
    v0_4 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CC6B0;
    if ((v0_4 == 1)) goto L_C0CC6C6;
    if ((v0_4 == 2)) goto L_C0CC6EC;
    if ((v0_4 == 3)) goto L_C0CC740;
    goto L_C0CC780;
    L_C0CC740:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_4 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0CC74A;
    v0_4 = ((v0_4 & 0x1));
    L_C0CC754:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) < (int)0xA)) goto L_C0CC780;
    return FUN_0c0c2d56(v0_0, 0xB, 0x0, v0_2);
    L_C0CC74A:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1)) + 0x1));
    goto L_C0CC754;
    L_C0CC6EC:;
    if (((int)v0_3 <= (int)v0_5)) goto L_C0CC724;
    v0_2 = FUN_0c0c2944((unsigned char)(*(signed char *)((R12 + 0x0))), (*(signed char *)((v0_0 + 0x424))), 0x0, (v0_0 + 0x28), 0xFFFFFFFF);
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CC716;
    *(unsigned int *)((v0_0 + 0x10)) = v0_5;
    FUN_0c0d01ba(v0_0, v0_5, v0_1);
    L_C0CC716:;
    *(unsigned char *)((R12 + 0x0)) = R13;
    L_C0CC730:;
    *(unsigned short *)((v0_0 + 0x1C)) = R13;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_4 = (0x16);
    goto L_C0CC780;
    L_C0CC724:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0CC780;
    goto L_C0CC730;
    L_C0CC6C6:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o70_float *)(v0_1))->v) = (((((struct o70_float *)(v0_1))->v)) + 1.29999995f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((short)(v0_1 + 0x1));
    FPUL_ = (0x3FA66666);
    if (((int)(short)(v0_1 + 0x1) <= (int)0x1E)) goto L_C0CC780;
    L_C0CC6E6:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_4 = (0x16);
    goto L_C0CC780;
    L_C0CC6B0:;
    *(unsigned short *)((v0_0 + 0x1C)) = R13;
    FUN_0c05aae4(0x24, (v0_0 + 0x28));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C0CC6C6;
    L_C0CC530:;
    v0_6 = *(signed char *)((v0_0 + 0x16));
    v0_4 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CC54C;
    if ((v0_4 == 1)) goto L_C0CC586;
    if ((v0_4 == 2)) goto L_C0CC632;
    if ((v0_4 != 3)) goto L_C0CC548;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_4 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0CC67A;
    v0_4 = ((v0_4 & 0x1));
    goto L_C0CC754;
    L_C0CC67A:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1)) + 0x1));
    goto L_C0CC754;
    L_C0CC548:;
    goto L_C0CC780;
    L_C0CC632:;
    if (((int)v0_3 <= (int)v0_5)) goto L_C0CC724;
    v0_2 = (*(signed char *)((v0_0 + 0x1B))) == 7;
    if (v0_2) goto L_C0CC668;
    v0_2 = FUN_0c0c2944((unsigned char)(*(signed char *)((R12 + 0x0))), (*(signed char *)((v0_0 + 0x424))), 0x0, (v0_0 + 0x28), 0xFFFFFFFF);
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CC664;
    *(unsigned int *)((v0_0 + 0x10)) = v0_5;
    FUN_0c0d01ba(v0_0, v0_5, v0_1);
    L_C0CC664:;
    *(unsigned char *)((R12 + 0x0)) = R13;
    goto L_C0CC730;
    L_C0CC668:;
    FUN_0c0cc064(v0_0);
    goto L_C0CC730;
    L_C0CC586:;
    v0_1 = (((struct oD4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x2D8);
    v0_1 = (int)(*(short *)((v0_0 + 0x1C))) >= (int)0x14;
    if (v0_1) goto L_C0CC620;
    v0_3 = (0x0);
    v0_5 = (0xC27377C);
    v0_1 = (0xC);
    L_C0CC60E:;
    if (((unsigned int)v0_3 < (unsigned int)v0_1)) goto L_C0CC5CC;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + -0.400000006f);
    FPUL_ = (0xBECCCCCD);
    L_C0CC620:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) > (int)0x19)) goto L_C0CC6E6;
    goto L_C0CC780;
    L_C0CC5CC:;
    v0_2 = *(int *)((((0xC4 + v0_0) + v0_3) + 0x0));
    (((struct o6C_float *)(v0_2))->v) = (((((struct o6C_float *)(v0_2))->v)) + (*(float *)((v0_5 + 0x0))));
    v0_2 = *(int *)((((0xC4 + v0_0) + v0_3) + 0x0));
    (((struct o70_float *)(v0_2))->v) = (((((struct o70_float *)(v0_2))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_2 = *(int *)((((0xC4 + v0_0) + v0_3) + 0x0));
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) + ((((struct o8_float *)(v0_5))->v)));
    v0_3 = ((v0_3 + 0x4));
    v0_5 = ((v0_5 + 0xC));
    goto L_C0CC60E;
    L_C0CC54C:;
    *(unsigned short *)((v0_0 + 0x1C)) = R13;
    (((struct o50_float *)(v0_0))->v) = (*(float *)0xC27378C);
    FUN_0c05aae4(0x24, (v0_0 + 0x28));
    v0_1 = (unsigned char)(*(signed char *)((R12 + 0x0))) != 0xC1;
    if (v0_1) goto L_C0CC57E;
    FUN_0c05aae4(0x11, (v0_0 + 0x28));
    FUN_0c1524d4(v0_0);
    *(unsigned int *)((v0_0 + 0x10)) = R13;
    L_C0CC57E:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C0CC586;
    L_C0CC47C:;
    v0_4 = (*(signed char *)((v0_0 + 0x2))) != 0;
    v0_3 = (v0_0);
    if (v0_4) goto L_C0CC4B0;
    v0_4 = *(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA));
    v0_5 = (v0_4);
    L_C0CC4B2:;
    FUN_0c0c2ab6(v0_3, v0_5);
    (((struct o12C_ushort *)(v0_0))->v) = R13;
    (((struct o50_float *)(v0_0))->v) = F14;
    (((struct o5C_float *)(v0_0))->v) = F15;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    goto L_C0CC4CC;
    L_C0CC4B0:;
    v0_5 = (0x45);
    goto L_C0CC4B2;
}

int FUN_0c09d74e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC09D744))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC09D6A2))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09D630))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09D4E8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09D444))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09D38C))(a4, a5, a6, a7);
}

int FUN_0c08d778(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC08D704))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC08D658))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08D3E4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08D360))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08D2F0))(a4, a5, a6, a7);
}

int FUN_0c09da94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC09DA88))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09DA20))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09D8C8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09D834))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09D78A))(a4, a5, a6, a7);
}

int FUN_0c0a9d38(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        return ((int (*)(int, int, int, int))(0xC0A9B96))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A9C46))(a4, a5, a6, a7);
}
