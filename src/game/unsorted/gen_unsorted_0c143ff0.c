/* game/unsorted: functions 0C143FF0-0C144694, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0582de(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c144234(int);
int FUN_0c144a68(int, int, int, int, int, int, int);
int FUN_0c14a104(int, int);
int FUN_0c14fe04(int, int, int, float);
int FUN_0c143ff0(int a4, int a5);
int FUN_0c14403a(int a4, int a5, int a6, int a7);
int FUN_0c1440f0(int a4, int a5, int a6, int a7);
int FUN_0c1441a6(int a4, int a5);
int FUN_0c144494(int a4);

int FUN_0c143ff0(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t2 = *(int *)((((((a5 * 0x38) + 0xC20272C) + 0x30) + t0) + 0x0));
        t3 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o68_uint *)(t3))->v) = ((*(int *)((((t2 << 2) + (0xC4 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498))) + 0x0))) + 0x28);
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    return 0x68;
}

int FUN_0c14403a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = 0xC20272C;
    t1 = a7;
    t2 = 0x0;
    for (;;) {
        t4 = (((a5 * 0x38) + 0xC20272C) + ((t2 << 2) << 2));
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)((t4 + 0x0));
            t7 = t4;
            t4 = (t4 + 0x8);
            if ((int)t6 >= 0) {
                t6 = 0xC532498;
                if ((*(int *)((t7 + 0x0))) == 0) {
                    t3 = (*(signed char *)((a4 + 0x1)));
                    t1 = (*(int *)(((t7 + 0x4) + 0x0)));
                    t0 = 0xC4;
                    t1 = (t1 << 2);
                    t3 = ((short)t3 * (short)0x3938);
                    t3 = (t3 + t6);
                    t0 = (t0 + t3);
                    t1 = (t1 + t0);
                    t1 = (*(int *)((t1 + 0x0)));
                } else {
                    t1 = 0x3938;
                    t3 = (*(signed char *)((a4 + 0x1)));
                    t8 = *(int *)(((t7 + 0x4) + 0x0));
                    t0 = t8;
                    t1 = ((short)t3 * (short)t1);
                    t1 = (t1 + t6);
                    t1 = (t1 + (0x468));
                    t1 = (t1 + (((((t8 << 2) << 1) + t0) << 2) << 2));
                }
                if (t2 == a6) {
                    *(unsigned char *)((t1 + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)((t1 + 0x0)) = 0x0;
                }
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x2) {
                break;
            }
        }
        t0 = 0x3;
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)t0) {
            break;
        }
    }
    return t3;
}

int FUN_0c1440f0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;

    u0 = *(float *)0xC144224;
    t0 = 0xC144224;
    t1 = 0xC20272C;
    t2 = ((a6 << 2) << 2);
    t3 = (((a5 * 0x38) + 0xC20272C) + ((a6 << 2) << 2));
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)((t3 + 0x0));
        t6 = t3;
        t3 = (t3 + 0x8);
        if ((int)t5 >= 0) {
            t5 = 0xC532498;
            if ((*(int *)((t6 + 0x0))) == 0) {
                t0 = (*(signed char *)((a4 + 0x1)));
                t2 = (*(int *)(((t6 + 0x4) + 0x0)));
                t1 = 0xC4;
                t2 = (t2 << 2);
                t0 = ((short)t0 * (short)0x3938);
                t0 = (t0 + t5);
                t1 = (t1 + t0);
                t2 = (t2 + t1);
                t2 = (*(int *)((t2 + 0x0)));
            } else {
                t2 = 0x3938;
                t0 = (*(signed char *)((a4 + 0x1)));
                t7 = *(int *)(((t6 + 0x4) + 0x0));
                t1 = t7;
                t2 = ((short)t0 * (short)t2);
                t2 = (t2 + t5);
                t2 = (t2 + (0x468));
                t2 = (t2 + (((((t7 << 2) << 1) + t1) << 2) << 2));
            }
            if (a7 != 0) {
                t0 = (*(short *)((t2 + 0x6)));
                t0 = (t0 | 0x200);
                *(unsigned short *)((t2 + 0x6)) = t0;
                t0 = 0x18;
                *(float *)((t2 + t0)) = 1.0f;
                t0 = 0x20;
                *(float *)((t2 + t0)) = u0;
                t0 = 0x1C;
                *(float *)((t2 + t0)) = u0;
            } else {
                t0 = (*(short *)((t2 + 0x6)));
                t0 = (t0 & 0xFDFF);
                *(unsigned short *)((t2 + 0x6)) = t0;
            }
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2) {
            break;
        }
    }
    return t0;
}

int FUN_0c1441a6(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x1C)) = a5;
    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC20280C));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    *(unsigned short *)((((0x12A + a4) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & (*(short *)((((0x12A + a4) + 0x2) + 0x0))));
    (((struct o12E_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    return 0x12E;
}

int FUN_0c144494(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
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
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 4)) = (0x41C + v0_3);
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_4);
    v0_2 = (0x0);
    v0_0 = (v0_3);
    if ((v0_4 == 0)) goto L_C1444BE;
    if ((v0_1 == 1)) goto L_C144512;
    if ((v0_1 == 2)) goto L_C144512;
    L_C144636:;
    return v0_1;
    L_C144512:;
    (((struct oA8_uchar *)(v0_0))->v) = (*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0xA8)));
    FUN_0c144234(v0_0);
    v0_1 = *(signed char *)((v0_0 + 0x1B));
    math_mat_get_translate((v0_0 + 0x64), (v0_0 + 0x28));
    v0_3 = (v0_2);
    v0_4 = ((v0_1 << 2));
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x125))) == ((*(signed char *)((v0_0 + 0x2))) + 0x1))) goto L_C144582;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 5)) goto L_C14454E;
    v0_4 = ((v0_4 + 0x2));
    L_C144586:;
    if ((v0_4 == 0)) goto L_C144592;
    if ((v0_4 != 4)) goto L_C144622;
    L_C144592:;
    if (((*(short *)((v0_0 + 0x1C))) != (v0_4 + 0x1))) goto L_C144622;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = ((((struct o0_float *)0xC1446A4)->v));
    FUN_0c0582de((((int)stk + 4) + 0x4), (((((struct oC8_int *)(v0_0))->v)) + 0x28));
    *(float *)(((int)stk + 12)) = (((((struct o168_float *)((*(int *)((v0_0 + 0x10)))))->v)) + ((((struct o8_float *)0xC1446A4)->v)));
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 5)) goto L_C14460A;
    FUN_0c14fe04((((int)stk + 4) + 0x4), R5, R6, ((((struct oC_float *)0xC1446A4)->v)));
    FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), 0x20, (((int)stk + 4) + 0x4));
    v0_1 = v0_2;
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, v0_1);
    L_C144622:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 == v0_4)) goto L_C144636;
    FUN_0c07e2f4(v0_0, v0_3);
    v0_1 = ((FUN_0c1441a6(v0_0, v0_4)));
    goto L_C144636;
    L_C14460A:;
    FUN_0c14fe04((((int)stk + 4) + 0x4), R5, R6, ((((struct o20_float *)0xC1446A4)->v)));
    FUN_0c14a104((*(signed char *)((v0_0 + 0x1))), (((int)stk + 4) + 0x4));
    goto L_C144622;
    L_C14454E:;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 6)) goto L_C144578;
    v0_3 = (0x2);
    v0_4 = ((v0_4 + 0x3));
    goto L_C144586;
    L_C144578:;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 7)) goto L_C144586;
    L_C144582:;
    v0_3 = (0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C144586;
    L_C1444BE:;
    FUN_0c0b21ac(v0_0, 0x1);
    (((struct o160_float *)(v0_0))->v) = (((((struct o160_float *)(v0_0))->v)) + 1000.0f);
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((((struct o160_float *)(v0_0))->v));
    (((struct o1B_uchar *)(v0_0))->v) = v0_2;
    (((struct o26_uchar *)(v0_0))->v) = 0x1;
    v0_1 = (0x3714);
    v0_3 = (0x1);
    FPUL_ = (0x447A0000);
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x3714))) != 0)) goto L_C1444F4;
    goto L_C144636;
    L_C1444F4:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    FUN_0c144a68(v0_0, (*(signed char *)((v0_0 + 0x2))), R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    FUN_0c143ff0(v0_0, (*(signed char *)((v0_0 + 0x2))));
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C144512;
}
