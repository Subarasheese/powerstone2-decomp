/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582ac(int, int);
int FUN_0c0582de(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05a080(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c058310(int, int);
int FUN_0c1453c4(int a4, int a5, int a6);
int FUN_0c170b3c(void);
int FUN_0c11c920(int a4, int a5, int a6, int a7);
int FUN_0c094c48(int a4, int a5, int a6, int a7);

int FUN_0c1453c4(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t36;
    register int t2;
    register int t20;
    register int t24;
    register int t31;
    register int t33;
    register int t34;
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x4);
    t36 = t0;
    if (t0 == 0) {
    } else {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 << 1);
            t1 = t2;
            t3 = (t3 + 0xC202994);
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + t0));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c03744a(t1, (*(signed char *)((t3 + 0x3))), (*(signed char *)((t3 + 0x2))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t2 = (t2 + 0x1);
            *(unsigned short *)((t1 + 0x6)) = (*(short *)((t3 + 0x0)));
            (((struct o7C_uint *)(t1))->v) = (*(int *)((t3 + 0x4)));
        }
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x8))) + 0x28);
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = 0xC;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
        *(unsigned int *)((t0 + 0x4)) = 0xC1455A6;
        t20 = ((int (*)(int))(FUN_0c187798))((0xC4 + t0));
        FUN_0c0582de((((int)stk + 16) + 0x4), ((*(int *)(((((*(int *)(((a6 << 2) + 0xC20298C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
        t24 = ((int (*)(void))(FUN_0c187798))();
        if (a6 == 0) {
            *(float *)(((int)stk + 24)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 28)) = 1.0f;
            FUN_0c0582ac((((int)stk + 16) + 0x4), (((((struct oC4_int *)(a4))->v)) + 0x28));
            math_vec3_mul_xyz((((int)stk + 16) + 0x4), 5.0f, 5.0f, 5.0f);
        } else {
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = 5.0f;
        }
        t31 = ((int (*)(void))(FUN_0c187798))();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e2f4(t0, 0x3);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t33 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 12) = (((int)0x1 << (int)t33) | 0xFFFFFFF0);
        *(int *)((int)stk + 8) = 0x0;
        t34 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t34));
        *(int *)((int)stk + 0) = 0x100;
        t36 = (FUN_0c064d24(t0, 0x1, 0x1B, 0x0, 0x100, (~((int)0x1 << (int)t34)), 0x0, (((int)0x1 << (int)t33) | 0xFFFFFFF0)));
    }
    return t36;
}

int FUN_0c170b3c(void)
{
    int stk[3];
    int t0;

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    t0 = *(int *)0xC475AE4;
    v0_0 = (0x0);
    v0_2 = (0x0);
    v0_1 = (0xC475A64);
    v0_3 = (0xC475A68);
    v0_4 = (t0);
    if (((0x2000 & t0) == 0)) goto L_C170B6A;
    v0_4 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((v0_3 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) >= 0)) goto L_C170B7E;
    *(unsigned int *)((v0_1 + 0x4)) = v0_0;
    L_C170B7E:;
    v0_4 = *(int *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    v0_5 = (0x1);
    if ((v0_4 == 0)) goto L_C170BA6;
    if ((v0_3 == 1)) goto L_C170BBA;
    if ((v0_3 == 2)) goto L_C170BEC;
    if ((v0_3 == 3)) goto L_C170C28;
    if ((v0_3 == 4)) goto L_C170C52;
    if ((v0_3 == 5)) goto L_C170C7C;
    if ((v0_3 != 6)) goto L_C170BA2;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x7C), 0x0, 0xFF, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o70_uint *)(v0_1))->v) = ((((struct o7C_int *)(v0_1))->v));
    L_C170CCE:;
    if ((v0_2 == 0)) goto L_C170D02;
    v0_2 = ((((struct o70_int *)(v0_1))->v));
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = (((struct o6C_int *)(v0_1))->v);
    v0_4 = (((struct o68_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = 0xC532498;
    FUN_0c037ac4(0xC532498, 0x0, v0_4, v0_3, v0_2);
    v0_2 = ((((struct o7C_int *)(v0_1))->v));
    *(int *)((int)stk + 0) = v0_2;
    FUN_0c037ac4((*(int *)(((int)stk + 8))), 0x1, ((((struct o74_int *)(v0_1))->v)), ((((struct o78_int *)(v0_1))->v)), v0_2);
    L_C170D02:;
    v0_2 = *(short *)0xC542700;
    v0_3 = ((unsigned short)v0_2);
    if ((((unsigned short)v0_2 & 64) == 0)) goto L_C170D10;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4)) = v0_0;
    L_C170D10:;
    return v0_3;
    L_C170BA2:;
    goto L_C170CCE;
    L_C170C7C:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x78), 0x0, 0x6, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o6C_uint *)(v0_1))->v) = ((((struct o78_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170C52:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x74), 0xFFFFFFFF, 0x0, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o68_uint *)(v0_1))->v) = ((((struct o74_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170C28:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x70), 0x0, 0xFF, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o7C_uint *)(v0_1))->v) = ((((struct o70_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BEC:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x6C), 0x0, 0x6, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 != 0)) goto L_C170C10;
    goto L_C170D02;
    L_C170C10:;
    (((struct o78_uint *)(v0_1))->v) = ((((struct o6C_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BBA:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) == 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x68), 0xFFFFFFFF, 0x0, 0x1, v0_2)));
    if (v0_3) goto L_C170BDA;
    goto L_C170CCE;
    L_C170BDA:;
    if ((v0_2 != 0)) goto L_C170BE2;
    goto L_C170D02;
    L_C170BE2:;
    (((struct o74_uint *)(v0_1))->v) = ((((struct o68_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BA6:;
    v0_3 = v0_5;
    *(int *)((int)stk + 4) = v0_3;
    FUN_0c16f890((v0_1 + 0x60), 0x0, 0x1, 0x1, v0_3);
    goto L_C170CCE;
    L_C170B6A:;
    if (((v0_4 & 0x1000) == 0)) goto L_C170B7E;
    v0_5 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((v0_3 + 0x0)) = (v0_5 + 0x1);
    v0_4 = (0x6);
    if (((int)(v0_5 + 0x1) <= (int)0x6)) goto L_C170B7E;
    *(unsigned int *)((v0_1 + 0x4)) = v0_4;
    goto L_C170B7E;
}

int FUN_0c11c920(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1E))) >= (int)0x1F4) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct o20_ushort *)(a4))->v) = t1;
        FUN_0c03733c(a4, 0x18, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
        *(unsigned short *)((t0 + 0x6)) = 0x20F;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x7);
    }
    if (t1 == 0) {
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
        switch (t0) {
        case 0:
            break;
        case 1:
            FUN_0c05a080(0x11, 0x0);
            break;
        case 2:
            FUN_0c05a080(0x12, 0x0);
            break;
        }
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x15))) == 2) {
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x3);
        }
        if (t1 == 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            (((struct o20_ushort *)(a4))->v) = t1;
        }
    }
    t0 = 0xC8;
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t0 = 0xC4;
    }
    t1 = *(int *)((a4 + t0));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) <= (int)0xA) {
                FUN_0c058a6e((t1 + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1E))), 0xA, 0x0);
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) <= (int)0x6) {
            FUN_0c058a6e((t1 + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1E))), 0x6, 0x0);
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

