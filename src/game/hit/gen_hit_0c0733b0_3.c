/* game/hit: functions 0C0733B0-0C076C3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3751_uchar { char p[0x3751]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3822_short { char p[0x3822]; short v; };
struct o3822_ushort { char p[0x3822]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c067734(int);
int FUN_0c0733d2(int);
int FUN_0c0741b4(int);
int FUN_0c07429a(int);
int FUN_0c074768(int);
int FUN_0c07487e(int);
int FUN_0c074c80(int, int, int, int, int);
int FUN_0c074e4a(int);
int FUN_0c075010(int);
int FUN_0c075184(int a4);
int FUN_0c0751e4(int a4);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a65c(int, int, int, int);
int FUN_0c07a6aa(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int FUN_0c074ce8(int a4);
int FUN_0c075244(int a4, int a5, int a6, int a7);
int FUN_0c0756b4(int a4);

int FUN_0c074ce8(int a4)
{
    int stk[4];
    register float u1;
    register int t34;
    register int t40;
    int t7;
    register int t8;
    int t14;
    int t35;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    u1 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u1;
    (((struct o44_float *)(a4))->v) = u1;
    (((struct o40_float *)(a4))->v) = u1;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o3726_uchar *)(a4))->v) = 0x0;
    (((struct o3751_uchar *)(a4))->v) = 0x0;
    (((struct o3822_ushort *)(a4))->v) = 0x29;
    FUN_0c067734(a4);
    (((struct o445_uchar *)(a4))->v) = 0x1;
    (((struct o446_uchar *)(a4))->v) = 0x1;
    (((struct o447_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x371D))) == 1) {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x371C))) != 0) && (t7 = (((struct o418_int *)(a4))->v), t8 = *(signed char *)((0x12 + t7)), ((unsigned char)t8 & 32) == 0)) {
    } else {
        FUN_0c081dfc(a4);
    }
    if (((*(signed char *)((a4 + 0x371C))) != 0) && (t14 = *(signed char *)((a4 + 0x3721)), t14 != 0)) {
        if (((*(signed char *)((0xC2738C9 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) & 2) != 0) {
            FUN_0c081dfc(a4);
        }
    }
    FUN_0c07429a(a4);
    FUN_0c0741b4(a4);
    FUN_0c07487e(a4);
    FUN_0c074c80(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    FUN_0c0733d2(a4);
    *(int *)((int)stk + 12) = a4;
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
    }
    t34 = FUN_0c074768(a4);
    if ((t34 != 0) && (t35 = *(signed char *)((a4 + 0x3751)), t35 == 0)) {
        (((struct o3751_uchar *)(a4))->v) = 0x5;
    }
    t40 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3739))) << 2) + 0xC2592A4)))))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
    if (((((struct o3822_short *)(a4))->v)) != 0) {
        (((struct o3822_ushort *)(a4))->v) = (((((struct o3822_short *)(a4))->v)) - 1);
    }
    return 0x3822;
}

int FUN_0c075244(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0751e4(a4);
                }
                return FUN_0c075184(a4);
            }
            return ((int (*)(int, int, int, int))(0xC07506C))(a4, a5, a6, a7);
        }
        return FUN_0c075010(a4);
    }
    return FUN_0c074e4a(a4);
}

int FUN_0c0756b4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = (0x20);
    v0_0 = (v0_2);
    if ((((((struct o20_short *)(v0_2))->v)) != 0)) goto L_C0756D6;
    v0_2 = FUN_0c075328(v0_0);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C0756D2;
    return v0_1;
    L_C0756D2:;
    L_C0756DC:;
    v0_2 = (v0_0);
    if (((*(short *)((v0_0 + 0x1E))) == 0)) goto L_C0756EA;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    L_C0756EA:;
    FUN_0c037bf6(v0_2);
    v0_2 = (((struct o22_short *)(v0_0))->v);
    v0_1 = (v0_2);
    if ((v0_2 == 39)) goto L_C075708;
    if ((v0_1 == 49)) goto L_C075708;
    if (!((v0_1 != 45))) goto L_C075816;
    goto L_C075816;
    L_C075816:;
    v0_2 = FUN_0c0752a8(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 1)) goto L_C075826;
    if ((v0_1 == 2)) goto L_C075832;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C075832:;
    return FUN_0c07a6aa(v0_0, R5, R6, R7);
    L_C075826:;
    return FUN_0c07a65c(v0_0, R5, R6, R7);
    L_C075708:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C07573C;
    if ((v0_1 == 1)) goto L_C07578A;
    goto L_C075816;
    L_C07578A:;
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C075816;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, (v0_1 + 0x2), 0xFFFFFFFF, 0x4, (v0_1 + 0x2));
    w0_0 = (((struct o2C_float *)(v0_0))->v);
    w0_1 = (((struct o5C_float *)(v0_0))->v);
    *(unsigned short *)((v0_0 + 0x1E)) = (int)((w0_0 * (1.0f + 1.0f)) / w0_1);
    FPUL_ = ((int)((w0_0 * (1.0f + 1.0f)) / w0_1));
    if (((int)(*(short *)((v0_0 + 0x1E))) >= 0)) goto L_C0757D6;
    *(unsigned short *)((v0_0 + 0x1E)) = (-(*(short *)((v0_0 + 0x1E))));
    L_C0757D6:;
    *(unsigned short *)((v0_0 + 0x1E)) = (int)(math_signed_sqrt((float)(*(short *)((v0_0 + 0x1E)))));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(short *)((v0_0 + 0x1E));
    (((struct o98_float *)(v0_1))->v) = (float)(signed char)v0_2;
    (((struct o94_float *)(v0_1))->v) = (float)(signed char)v0_2;
    v0_2 = (((((struct o11C_int *)(v0_0))->v)));
    FPUL_ = ((signed char)(*(short *)((v0_0 + 0x1E))));
    L_C075806:;
    (((struct o98_float *)(v0_2))->v) = (float)FPUL_;
    (((struct o94_float *)(v0_2))->v) = (float)FPUL_;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    goto L_C075816;
    L_C07573C:;
    if (((unsigned char)(*(signed char *)((0x84 + ((((struct o118_int *)(v0_0))->v))))) != 64)) goto L_C075816;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, (v0_1 + 0x1), 0xFFFFFFFF, 0x4, (v0_1 + 0x1));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(short *)((v0_0 + 0x1E));
    (((struct o98_float *)(v0_1))->v) = (float)(signed char)v0_2;
    (((struct o94_float *)(v0_1))->v) = (float)(signed char)v0_2;
    v0_2 = (((((struct o11C_int *)(v0_0))->v)));
    FPUL_ = ((signed char)(*(short *)((v0_0 + 0x1E))));
    goto L_C075806;
    L_C0756D6:;
    *(unsigned short *)((v0_0 + v0_1)) = ((*(short *)((v0_0 + v0_1))) - 1);
    goto L_C0756DC;
}
