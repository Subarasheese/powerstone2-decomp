/* game/unsorted: functions 0C048548-0C0497B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c048a80(int, int);
int FUN_0c048ac6(int, int);
int FUN_0c048b7a(int, int, int);
int FUN_0c048fc6(int, int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int game_reset_objects(void);
int FUN_0c0cff96(int, int);
int FUN_0c18778c(float, float);
int FUN_0c187798(void);
int strlen(int);
int FUN_0c048548(int a4, int a5, int a6, int a7);
int FUN_0c0485f2(int a4, int a5, int a6);
int FUN_0c04875e(int a4, int a5, int a6, int a7);
int FUN_0c04882c(int a4, int a5);
int FUN_0c048b0a(int a4, int a5, int a6, int a7);
int FUN_0c048c50(int a4, int a5, int a6, int a7);
int FUN_0c048cc0(int a4, int a5, int a6);
int FUN_0c04908c(int a4);
int FUN_0c049188(void);
int FUN_0c04926e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04930a(int a4);
int FUN_0c0493c6(int a4);
int FUN_0c04942c(void);
int FUN_0c0494a2(void);
int FUN_0c049644(void);

int FUN_0c048548(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (0xC4 + a4));
        t0 = (*(int *)((t0 + 0x0)));
        if ((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0xA)) > (int)t1) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            u0 = ((((struct o8C_float *)(t0))->v));
            u0 = (u0 - 0.100000001f);
            (((struct o8C_float *)(t0))->v) = u0;
            if (!((((((struct o8C_float *)(t0))->v))) > 0.300000012f)) {
                (((struct o8C_float *)(t0))->v) = 0.300000012f;
            }
            u0 = ((((struct o8C_float *)(t0))->v));
            (((struct o88_float *)(t0))->v) = u0;
            (((struct o84_float *)(t0))->v) = u0;
        }
        t1 = (t1 + 0x1);
    }
    return 0xC0;
}




int FUN_0c048b0a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0500000007f);
    if (!(1.0f > ((((struct o88_float *)(t0))->v)))) {
        (((struct o88_float *)(t0))->v) = 1.0f;
    }
    return 0x88;
}

int FUN_0c048c50(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x258;
    return 0x258;
}


int FUN_0c04908c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register int R14;
    register float F3;
    register float F4;
    register int T_;
    int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0490D0;
    if ((v0_1 == 1)) goto L_C0490FC;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0490FC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C04910C;
    if (!((v0_1 == 1))) goto L_C04916A;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 64.0f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v);
    v0_1 = (0x8C);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x42800000);
    if ((w0_0 > 0.0f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_1;
    v0_1 = (0x8C);
    goto L_C04916A;
    L_C04916A:;
    return v0_1;
    L_C04910C:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - 0.100000001f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    v0_1 = (0x30);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > -5.01000023f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C04916A;
    L_C0490D0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x258);
    R5 = (0x1);
    FPUL_ = (0x40A00000);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = R5;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = R5;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = R5;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + (*(float *)&(FPUL_)));
    goto L_C0490FC;
}


int FUN_0c04926e(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.25f);
        if (!(1.0f > ((((struct o88_float *)(t1))->v)))) {
            (((struct o88_float *)(t1))->v) = 1.0f;
        }
        t0 = 0x88;
    }
    return t0;
}

int FUN_0c04930a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        t3 = *(int *)0xC4B410C;
        t4 = 0x0;
        if (a4 != 0) {
            t4 = 0x1;
        }
        FUN_0c037498(t2, 0x0, (t4 + 0x52), t3);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o0_float *)0xC049404)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC049404)->v));
        (((struct o74_float *)(t2))->v) = ((((struct o8_float *)0xC049404)->v));
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC04926E;
        u0 = (((struct o10_float *)0xC049404)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o14_float *)0xC049404)->v));
        u0 = (((struct o18_float *)0xC049404)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct o1C_float *)0xC049404)->v));
        t1 = 0x48;
    }
    return t1;
}

int FUN_0c0493c6(int a4)
{
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC240D88);
}

int FUN_0c04942c(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1B7C20 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0493C6;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c0494a2(void)
{
    int stk[5];
    register int t13;
    register int t14;
    register int t16;
    register int t57;
    register int t61;
    register int t63;
    register int t55;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        *(unsigned short *)0xC541F4E = 0x258;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        game_reset_objects();
        FUN_0c03eff6();
        FUN_0c036de8(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        FUN_0c04942c();
        FUN_0c059c54(0x5);
    }
    t13 = *(signed char *)0xC541F43;
    if ((unsigned char)t13 != 0) {
        t55 = 0x28;
        if (((unsigned char)t13 == 1) || (((unsigned char)t13 == 2) || (((unsigned char)t13 == 3) || (((unsigned char)t13 == 4) || ((unsigned char)t13 == 5))))) {
            t14 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t14 - 1);
            if ((int)(short)(t14 - 1) <= 0) {
                *(unsigned short *)0xC541F50 = 0x28;
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                t16 = *(signed char *)0xC541F43;
                FUN_0c048fc6(0x0, ((-(unsigned char)t16) + 0x6));
                FUN_0c048a80(0x0, ((-(unsigned char)t16) + 0x6));
                *(unsigned int *)(((int)stk + 0)) = (((-(unsigned char)t16) + 0x6) << 2);
                FUN_0c0485f2(0x0, ((-(unsigned char)t16) + 0x6), ((int)((unsigned int)(*(int *)((((((-(unsigned char)t16) + 0x6) << 2) + 0xC54229C) + 0x0))) / (unsigned int)0x2710)));
                FUN_0c048b7a(0x0, ((-(unsigned char)t16) + 0x6), (*(signed char *)(((0xC542267 + ((-(unsigned char)t16) + 0x6)) + 0x0))));
                FUN_0c048cc0(0x0, ((-(unsigned char)t16) + 0x6), (*(int *)(((0xC54229C + (*(int *)(((int)stk + 0)))) + 0x0))));
            } else {
                t55 = 0x28;
            }
        }
    } else {
        *(unsigned short *)0xC541F50 = 0x28;
        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c049188();
        FUN_0c04930a(0x1);
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    } else {
    }
    t57 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t57 - 1);
    if ((short)(t57 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    t61 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t55);
    FUN_0c038e88(0x5);
    t63 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c049644(void)
{
    int stk[5];
    register int t13;
    register int t14;
    register int t16;
    register int t57;
    register int t61;
    register int t63;
    register int t55;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        *(unsigned short *)0xC541F4E = 0x258;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        game_reset_objects();
        FUN_0c03eff6();
        FUN_0c036de8(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        FUN_0c04942c();
        FUN_0c059c54(0x5);
    }
    t13 = *(signed char *)0xC541F43;
    if ((unsigned char)t13 != 0) {
        t55 = 0x28;
        if (((unsigned char)t13 == 1) || (((unsigned char)t13 == 2) || (((unsigned char)t13 == 3) || (((unsigned char)t13 == 4) || ((unsigned char)t13 == 5))))) {
            t14 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t14 - 1);
            if ((int)(short)(t14 - 1) <= 0) {
                *(unsigned short *)0xC541F50 = 0x28;
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                t16 = *(signed char *)0xC541F43;
                FUN_0c048fc6(0x0, ((-(unsigned char)t16) + 0x6));
                FUN_0c048ac6(0x0, ((-(unsigned char)t16) + 0x6));
                *(unsigned int *)(((int)stk + 0)) = (((-(unsigned char)t16) + 0x6) << 2);
                FUN_0c0485f2(0x0, ((-(unsigned char)t16) + 0x6), ((int)((unsigned int)(*(int *)((((((-(unsigned char)t16) + 0x6) << 2) + 0xC5422F8) + 0x0))) / (unsigned int)0x2710)));
                FUN_0c048b7a(0x0, ((-(unsigned char)t16) + 0x6), (*(signed char *)(((0xC5422C4 + ((-(unsigned char)t16) + 0x6)) + 0x0))));
                FUN_0c048cc0(0x0, ((-(unsigned char)t16) + 0x6), (*(int *)(((0xC5422F8 + (*(int *)(((int)stk + 0)))) + 0x0))));
            } else {
                t55 = 0x28;
            }
        }
    } else {
        *(unsigned short *)0xC541F50 = 0x28;
        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c049188();
        FUN_0c04930a(0x0);
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    } else {
    }
    t57 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t57 - 1);
    if ((short)(t57 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    t61 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t55);
    FUN_0c038e88(0x5);
    t63 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c049188(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c037320(0x51, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t2 = t1;
    if (t1 != 0) {
        u0 = (((struct o0_float *)0xC0492C0)->v);
        if ((int)t0 > 0) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)((((t3 << 2) + (0xC4 + t1)) + 0x0));
                FUN_0c03744a(t4, t3, 0x51, (*(int *)0xC4B410C));
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                *(unsigned short *)((t4 + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x6C)) = *(struct mv3 *)(0xC240A48); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 108, r2 r10 (0x0C240A48) */
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x84)) = *(struct mv3 *)(0xC240A54); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 0x84, r2 r10 + 12 */
                t3 = (t3 + 0x1);
                (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) / u0);
                (((struct o88_float *)(t4))->v) = (((((struct o88_float *)(t4))->v)) / u0);
                if ((int)t3 >= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC04908C;
        u0 = (((struct o10_float *)0xC0492C0)->v);
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / u0);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / u0);
        (((struct o30_float *)(t1))->v) = ((((struct o14_float *)0xC0492C0)->v));
        u0 = (((struct o18_float *)0xC0492C0)->v);
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = ((((struct o1C_float *)0xC0492C0)->v));
        t2 = 0x48;
    }
    return t2;
}

