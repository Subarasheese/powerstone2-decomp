/* game/unsorted: functions 0C02EC70-0C02F7A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct oDA_ushort { char p[0xDA]; unsigned short v; };
struct oDC_short { char p[0xDC]; short v; };
struct oDC_ushort { char p[0xDC]; unsigned short v; };
struct oDE_short { char p[0xDE]; short v; };
struct oDE_ushort { char p[0xDE]; unsigned short v; };
struct oE0_float { char p[0xE0]; float v; };
struct oE4_float { char p[0xE4]; float v; };
struct oE8_int { char p[0xE8]; int v; };
int FUN_0c176b90(int);
int nlCommonTextureReloadA(int, int);
int vsprintf(int, int, int);
int FUN_0c2b33bc(int, int, int, int);
int FUN_0c2b33d0(int, int);
int FUN_0c2b33ec(int, int);
int FUN_0c2b36a4(int, int, int);
int FUN_0c02ee3e(void);
int FUN_0c02eea0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c02ef10(int a4, int a5, int a6, int a7);
int FUN_0c02f01e(void);
int FUN_0c02f27a(void);
int FUN_0c02f4ac(void);
int FUN_0c02f644(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c02f6da(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c02f77e(void);

int FUN_0c02ee3e(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3BB3DC;
    t1 = ((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x5A);
    for (;;) {
        *(unsigned short *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        if ((unsigned int)t1 >= (unsigned int)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x5A) + 0x80)) {
            break;
        }
    }
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xB)) = 0xFFFFFFFF;
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xC)) = 0xFFFFFFFF;
    t1 = ((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x18);
    for (;;) {
        *(unsigned short *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        if ((unsigned int)t1 >= (unsigned int)((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x58)) {
            break;
        }
    }
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x4)) = 0x1;
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x5)) = 0x0;
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x6)) = 0x0;
    *(unsigned char *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x7)) = 0x0;
    *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE)) = 0x0;
    *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10)) = 0x0;
    *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x12)) = 0x0;
    *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x14)) = 0x0;
    (((struct oDA_ushort *)((((short)t0 * (short)0xF7C) + 0xC4B10CC)))->v) = 0x0;
    (((struct o16_uchar *)((((short)t0 * (short)0xF7C) + 0xC4B10CC)))->v) = 0x0;
    (((struct oDC_ushort *)((((short)t0 * (short)0xF7C) + 0xC4B10CC)))->v) = 0x0;
    (((struct oDE_ushort *)((((short)t0 * (short)0xF7C) + 0xC4B10CC)))->v) = 0x0;
    return 0xDE;
}

int FUN_0c02eea0(int a4, int a5, int a6, int a7, int a8)
{
    register int t14;

    t14 = ((short)(a8 >> 0));
    if (((short)(a8 >> 0)) != 0) {
        *(unsigned short *)((a4 + (((((a6 << 2) << 2) << 1) + a5) << 1))) = a7;
        *(unsigned short *)((a4 + ((((((a6 << 2) << 2) << 1) + a5) + 0x1) << 1))) = a7;
        if ((unsigned short)(*(short *)((a4 + (((((((a6 + 0x1) << 2) << 2) << 1) + a5) + 0x1) << 1)))) != (unsigned short)a7) {
            *(unsigned short *)((a4 + (((((((a6 + 0x1) << 2) << 2) << 1) + a5) + 0x1) << 1))) = 0xF000;
        }
        if ((unsigned short)(*(short *)((a4 + (((((((a6 + 0x1) << 2) << 2) << 1) + a5) + 0x2) << 1)))) != (unsigned short)a7) {
            *(unsigned short *)((a4 + (((((((a6 + 0x1) << 2) << 2) << 1) + a5) + 0x2) << 1))) = 0xF000;
        }
        t14 = (((((((a6 + 0x1) << 2) << 2) << 1) + a5) + 0x2) << 1);
    }
    return t14;
}

int FUN_0c02ef10(int a4, int a5, int a6, int a7)
{
    int stk[13];
    int t8;
    int t9;
    int t12;
    int t6;
    int t10;
    int t0;
    int t5;
    int t19;
    int t18;
    int t1;
    int t20;
    int t11;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 12)) = a7;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x1) {
            return 0x1;
        }
        t1 = FUN_0c2b33bc(a4, a5, a6, a7);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    FUN_0c2b36a4(a5, a6, (((int)stk + 4) + 0xC));
    t5 = FUN_0c2b33ec(a5, a6);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + t5);
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x800) {
            break;
        }
        t5 = (*(int *)0xC3BB3D8);
        *(unsigned char *)((t6 + t5)) = 0x0;
        t6 = (t6 + 0x1);
    }
    t8 = t6;
    t9 = 0xC2B33BC;
    t10 = a6;
    t11 = a5;
    t12 = 0x0;
    for (;;) {
        if ((int)t12 >= (int)((unsigned short)(unsigned char)(*(signed char *)(((int)stk + 17))) * (unsigned short)(unsigned char)(*(signed char *)(((int)stk + 16))))) {
            break;
        }
        t10 = 0x0;
        t9 = ((*(int *)(((int)stk + 4))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t9;
        t9 = (*(signed char *)(((t9 - 1) + 0x0)));
        for (;;) {
            t8 = 0x80;
            if (((unsigned char)t9 & t8) != 0) {
                t11 = 0x1;
            } else {
                t11 = 0x0;
            }
            t18 = t11;
            t19 = *(short *)(((int)stk + 12));
            t20 = *(signed char *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 8)) = (unsigned char)t20;
            t8 = (*(int *)0xC3BB3D8);
            FUN_0c02eea0(t8, ((int)((int)t12 % (int)(*(int *)(((int)stk + 8))))), ((int)((int)t12 / (int)(unsigned char)t20)), t19, t18);
            t12 = (t12 + 0x1);
            t9 = (t9 << 1);
            if ((int)t12 < (int)((unsigned short)(unsigned char)(*(signed char *)(((int)stk + 16))) * (unsigned short)(unsigned char)(*(signed char *)(((int)stk + 17))))) {
                t8 = 0x8;
                t10 = (t10 + 0x1);
                if ((int)t10 >= (int)t8) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    FUN_0c2b33d0(t8, 0x800);
    return 0x0;
}


int FUN_0c02f27a(void)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_1 = *(signed char *)0xC3BB3DC;
    v0_2 = (((struct oDE_short *)((((short)v0_1 * (short)0xF7C) + 0xC4B10CC)))->v);
    v0_0 = *(short *)(((((short)v0_1 * (short)0xF7C) + 0xC4B10CC) + 0x12));
    *(unsigned int *)(((int)stk + 0)) = ((((struct oDC_short *)((((short)v0_1 * (short)0xF7C) + 0xC4B10CC)))->v));
    *(unsigned int *)(((int)stk + 8)) = (v0_0 + 0x5);
    v0_0 = (0x1);
    v0_1 = ((((short)v0_1 * (short)0xF7C) + 0xC4B10CC));
    v0_2 = (v0_2);
    L_C02F474:;
    if (((int)(*(int *)(((int)stk + 0))) >= (int)(*(short *)((v0_1 + 0x10))))) goto L_C02F480;
    (((struct oDC_ushort *)(v0_1))->v) = (*(int *)(((int)stk + 0)));
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (((((v0_3 << 2) << 2) << 1) + v0_3) << 1);
    *(unsigned int *)(((int)stk + 16)) = (((((((v0_3 << 2) << 2) << 1) + v0_3) << 1) + (0x73C + v0_1)) + 0xC);
    v0_3 = *(short *)((((((((v0_3 << 2) << 2) << 1) + v0_3) << 1) + (0x73C + v0_1)) + 0x2));
    w0_0 = ((float)v0_3);
    FPUL_ = (v0_3);
    if ((v0_2 != 0)) goto L_C02F318;
    v0_3 = *(short *)((((0x73C + v0_1) + (*(int *)(((int)stk + 4)))) + 0x0));
    w0_1 = ((float)v0_3);
    FPUL_ = (v0_3);
    L_C02F31C:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 0))) << 1);
    L_C02F45C:;
    v0_5 = *(int *)(((int)stk + 16));
    v0_3 = ((v0_5 + v0_2));
    v0_4 = (0x0);
    if (((*(signed char *)(((v0_5 + v0_2) + 0x0))) == 0)) goto L_C02F46C;
    v0_5 = *(signed char *)((v0_3 + 0x0));
    v0_6 = (0x20);
    v0_7 = ((unsigned char)v0_5);
    if (((int)(unsigned char)v0_5 < (int)0x20)) goto L_C02F33C;
    if (((int)v0_7 > (int)0x7F)) goto L_C02F33C;
    v0_5 = (v0_4);
    v0_7 = ((unsigned char)(*(signed char *)((v0_3 + 0x0))));
    L_C02F38A:;
    v0_3 = (v0_0);
    L_C02F38C:;
    (((struct oDE_ushort *)(v0_1))->v) = v0_2;
    (((struct oE0_float *)(v0_1))->v) = w0_1;
    (((struct oE4_float *)(v0_1))->v) = w0_0;
    v0_3 = (FUN_0c02ef10(((((struct oE8_int *)(v0_1))->v)), v0_3, v0_7, (*(short *)((((0x73C + v0_1) + (*(int *)(((int)stk + 4)))) + 0x4))))) == 0;
    if (v0_3) goto L_C02F3D8;
    v0_0 = (0x1);
    L_C02F494:;
    return v0_0;
    L_C02F3D8:;
    FUN_0c176b90((*(int *)((v0_1 + 0x0))));
    nlCommonTextureReloadA((*(short *)((v0_1 + 0x12))), ((((struct o0_int *)0xC3BB3D8)->v)));
    *(float *)(((((*(short *)((v0_1 + 0x12))) << 2) + (0x13C + v0_1)) + 0x0)) = w0_1;
    *(float *)(((((*(short *)((v0_1 + 0x12))) << 2) + (0x23C + v0_1)) + 0x0)) = w0_0;
    *(unsigned short *)(((((*(short *)((v0_1 + 0x12))) << 1) + (v0_1 + 0x5A)) + 0x0)) = (*(short *)(((0x8 + ((0x73C + v0_1) + (*(int *)(((int)stk + 4))))) + 0x0)));
    *(unsigned short *)((v0_1 + 0x12)) = ((*(short *)((v0_1 + 0x12))) + 0x1);
    *(unsigned short *)((((v0_1 + 0x18) + (*(int *)(((int)stk + 12)))) + 0x0)) = (*(short *)((v0_1 + 0x12)));
    w0_3 = *(float *)0xC02F50C;
    w0_2 = w0_3;
    w0_2 = w0_2 + w0_3 * (float)v0_5;
    w0_3 = (w0_3);
    w0_1 = ((w0_1 + w0_2));
    FPUL_ = (v0_5);
    if ((v0_5 == 0)) goto L_C02F446;
    v0_2 = ((v0_2 + 0x2));
    L_C02F448:;
    (((struct oDE_ushort *)(v0_1))->v) = v0_2;
    (((struct oE0_float *)(v0_1))->v) = w0_1;
    (((struct oE4_float *)(v0_1))->v) = w0_0;
    if (((int)(*(short *)((v0_1 + 0x12))) >= (int)(*(int *)(((int)stk + 8))))) goto L_C02F492;
    goto L_C02F45C;
    L_C02F492:;
    v0_0 = (0x0);
    goto L_C02F494;
    L_C02F446:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C02F448;
    L_C02F33C:;
    v0_5 = *(signed char *)((v0_3 + 0x0));
    v0_8 = *(signed char *)((v0_3 + 0x1));
    v0_7 = ((((unsigned short)(unsigned char)v0_5 << 8) + (unsigned char)v0_8));
    v0_3 = ((unsigned short)(((unsigned short)(unsigned char)v0_5 << 8) + (unsigned char)v0_8));
    if (((int)(unsigned short)(((unsigned short)(unsigned char)v0_5 << 8) + (unsigned char)v0_8) < (int)0x8140)) goto L_C02F360;
    if (((int)v0_3 > (int)0x8396)) goto L_C02F360;
    v0_5 = (v0_0);
    v0_3 = (0x2);
    goto L_C02F38C;
    L_C02F360:;
    if (((int)v0_3 < (int)0x889F)) goto L_C02F372;
    if (((int)v0_3 > (int)0x9872)) goto L_C02F372;
    v0_5 = (v0_0);
    v0_4 = (0x3);
    L_C02F382:;
    v0_3 = (v0_4);
    goto L_C02F38C;
    L_C02F372:;
    if (((int)v0_3 < (int)0x989F)) goto L_C02F386;
    if (((int)v0_3 > (int)0xEAA4)) goto L_C02F386;
    v0_5 = (v0_0);
    v0_4 = (0x4);
    goto L_C02F382;
    L_C02F386:;
    v0_5 = (v0_4);
    v0_7 = (v0_6);
    goto L_C02F38A;
    L_C02F46C:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_2 = (v0_4);
    goto L_C02F474;
    L_C02F318:;
    w0_1 = (((((struct oE0_float *)(v0_1))->v)));
    goto L_C02F31C;
    L_C02F480:;
    *(unsigned char *)((v0_1 + 0x4)) = 0x2;
    (((struct o4_uchar *)0xC3BB3D8)->v) = (v0_0 - (*(signed char *)0xC3BB3DC));
    goto L_C02F492;
}

int FUN_0c02f4ac(void)
{
    return (*(signed char *)(((((0x1 - (*(signed char *)0xC3BB3DC)) * 0xF7C) + 0xC4B10CC) + 0xB)));
}

int FUN_0c02f644(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t21;
    register int t3;
    register int t4;
    register int t7;
    register int t11;
    register int t13;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    stk[5] = a11;
    t0 = *(signed char *)0xC3BB3DC;
    t1 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE));
    t21 = t1;
    if (t1 != 54) {
        t3 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
        t21 = t3;
        if (t3 != 32) {
            t4 = ((((int)stk + 4) + 0x14) + 0x4);
            if ((((((int)stk + 4) + 0x14) + 0x4) & 3) != 0) {
                t4 = ((((int)stk + 4) + 0x14) + 0x8);
            }
            *(unsigned int *)(((int)stk + 4)) = t4;
            t7 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
            *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0x0)) = a4;
            *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0x2)) = a5;
            *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0x4)) = a6;
            *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0x6)) = a7;
            *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0x7)) = a8;
            t11 = vsprintf((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0xC), a9, (*(int *)(((int)stk + 4))));
            *(unsigned char *)((((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t7 << 2) << 2) << 1) + t7) << 1)) + 0xC) + t11) + 0x0)) = 0x0;
            *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE)) = ((*(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE))) + t11);
            t13 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
            *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10)) = (t13 + 0x1);
            t21 = (t13 + 0x1);
        }
    }
    return t21;
}

int FUN_0c02f6da(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t12;
    register int t2;
    register int t5;
    register int t9;
    register int t11;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    stk[5] = a11;
    stk[6] = a12;
    t0 = *(signed char *)0xC3BB3DC;
    t1 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
    t12 = t1;
    if (t1 != 32) {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        if ((((((int)stk + 4) + 0x18) + 0x4) & 3) != 0) {
            t2 = ((((int)stk + 4) + 0x18) + 0x8);
        }
        *(unsigned int *)(((int)stk + 4)) = t2;
        t5 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x0)) = a4;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x2)) = a5;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x4)) = a6;
        *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x6)) = a7;
        *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x7)) = a8;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x8)) = ((short)(a9 >> 0));
        t9 = vsprintf((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0xC), a10, (*(int *)(((int)stk + 4))));
        *(unsigned char *)((((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0xC) + t9) + 0x0)) = 0x0;
        *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE)) = ((*(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE))) + t9);
        t11 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
        *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10)) = (t11 + 0x1);
        t12 = (t11 + 0x1);
    }
    return t12;
}

int FUN_0c02f77e(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC3BB3DC;
    t1 = *(signed char *)(((((0x1 - t0) * 0xF7C) + 0xC4B10CC) + 0xA));
    t2 = t1;
    if (t1 == 0) {
        (((struct o16_uchar *)((((0x1 - t0) * 0xF7C) + 0xC4B10CC)))->v) = 0x1;
        t2 = 0x16;
    }
    return t2;
}
