/* game/effect: functions 0C151904-0C1524CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int memset(int, int, int);
int FUN_0c151904(int a4, int a5);
void FUN_0c1519ae(void);
int FUN_0c151cae(int a4, int a5, int a6, int a7);
int FUN_0c151fd2(int a4);
int FUN_0c152246(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);


void FUN_0c1519ae(void)
{
    
}

int FUN_0c151cae(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t4 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t4;
        }
        t4 = (((struct oE0_int *)(a4))->v);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t4 + 0x6C));
        u0 = (((struct o70_float *)(t4))->v);
        (((struct o70_float *)(t4))->v) = (u0 + 40.0f);
        (((struct o7C_uint *)(t4))->v) = (unsigned short)(((((struct o7C_short *)(t4))->v)) + 0xFC00);
        t4 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
        t5 = (short)(t4 - 1);
        t6 = 0x42200000;
        u1 = (u0 + 40.0f);
        u2 = 40.0f;
        if ((short)(t4 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            t4 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x10))) << 2) + (0xC4 + a4)) + 0x0));
            t7 = *(signed char *)((t4 + 0x0));
            t8 = 0x10;
            t9 = t7;
            u3 = (u0 + 40.0f);
            u0 = 40.0f;
            if ((t7 == 0) && (t0 = *(signed char *)(((0x41C + a4) + 0x12)), t0 == 0)) {
                *(unsigned short *)((a4 + 0x1C)) = 0x8;
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                *(unsigned char *)((((*(signed char *)(((0x41C + a4) + 0x10))) + ((0x41C + a4) + 0x8)) + 0x0)) = 0x0;
                *(unsigned char *)((((*(signed char *)(((0x41C + a4) + 0x10))) + (0x41C + a4)) + 0x0)) = 0x4;
                FUN_0c03744a(t4, 0x0, 0xF, (*(int *)0xC4B40CC));
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t4 + 0x6C));
                (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + -30.0f));
                (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x28)) + 30.0f));
                t0 = (int)((int)(FUN_0c179ac0()) % (int)0x3C);
                u4 = (((struct o74_float *)(t4))->v);
                (((struct o74_float *)(t4))->v) = (u4 + ((float)t0 + -30.0f));
                (((struct o10_uchar *)((0x41C + a4)))->v) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x10))) + 0x1) % (int)0x6));
                (((struct o11_uchar *)((0x41C + a4)))->v) = ((*(signed char *)(((0x41C + a4) + 0x11))) + 0x1);
                t8 = 0x11;
                t9 = (0x10 + (0x41C + a4));
                u3 = (u4 + ((float)t0 + -30.0f));
                u0 = ((float)t0 + -30.0f);
            }
            t5 = t8;
            t6 = t9;
            u1 = u3;
            u2 = u0;
        }
        t0 = t5;
        t4 = t6;
        t5 = (0x41C + a4);
        t6 = (0x41C + a4);
        t7 = 0x0;
        t8 = ((0x41C + a4) + 0x8);
        u0 = u1;
        u1 = u2;
        for (;;) {
            t9 = *(int *)((((t7 << 2) + (0xC4 + a4)) + 0x0));
            t10 = t4;
            u2 = u0;
            u3 = u1;
            if ((*(signed char *)((t9 + 0x0))) != 0) {
                t11 = *(signed char *)((t6 + 0x0));
                *(unsigned char *)((t6 + 0x0)) = (t11 - 1);
                t10 = t4;
                u4 = u0;
                u5 = u1;
                if ((signed char)(t11 - 1) == 0) {
                    t4 = 0x4;
                    *(unsigned char *)((t5 + 0x0)) = t4;
                    t11 = *(signed char *)((t8 + 0x0));
                    *(unsigned char *)((t8 + 0x0)) = (t11 + 0x1);
                    if ((int)(signed char)(t11 + 0x1) > (int)0x3) {
                        t0 = 0x11;
                        *(unsigned char *)((t9 + 0x0)) = 0x0;
                        t4 = (*(signed char *)(((0x41C + a4) + t0)));
                        t4 = (t4 - 1);
                        *(unsigned char *)(((0x41C + a4) + t0)) = t4;
                        t11 = t4;
                        u6 = u0;
                        u7 = u1;
                    } else {
                        t0 = 0xC4B40CC;
                        t0 = (FUN_0c03744a(t9, 0x0, 0xF, (*(int *)((t0 + 0x0)))));
                    }
                    t10 = t11;
                    u4 = u6;
                    u5 = u7;
                }
                u2 = u4;
                u3 = u5;
            }
            u0 = u2;
            u1 = u3;
            t4 = t10;
            t7 = (t7 + 0x1);
            t8 = (t8 + 0x1);
            t5 = (t5 + 0x1);
            t6 = (t6 + 0x1);
            if ((int)t7 >= (int)0x7) {
                break;
            }
        }
        if (((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 17) && (t1 = *(signed char *)(((0x41C + a4) + 0x12)), t1 == 0)) {
            (((struct o12_uchar *)((0x41C + a4)))->v) = 0x1;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        memset((0x41C + a4), 0x0, 0x14);
        t0 = (((struct oE0_int *)(a4))->v);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t0 + 0x6C));
        u0 = (((struct o70_float *)(t0))->v);
        (((struct o70_float *)(t0))->v) = (u0 + 40.0f);
        (((struct o7C_uint *)(t0))->v) = (unsigned short)(((((struct o7C_short *)(t0))->v)) + 0xFC00);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        t4 = 0x42200000;
        u1 = (u0 + 40.0f);
        u2 = 40.0f;
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x10))) << 2) + (0xC4 + a4)) + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            t6 = 0x10;
            t7 = t5;
            u3 = (u0 + 40.0f);
            u0 = 40.0f;
            if ((t5 == 0) && (t2 = *(signed char *)(((0x41C + a4) + 0x12)), t2 == 0)) {
                *(unsigned short *)((a4 + 0x1C)) = 0x8;
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned char *)((((*(signed char *)(((0x41C + a4) + 0x10))) + ((0x41C + a4) + 0x8)) + 0x0)) = 0x0;
                *(unsigned char *)((((*(signed char *)(((0x41C + a4) + 0x10))) + (0x41C + a4)) + 0x0)) = 0x4;
                FUN_0c03744a(t0, 0x0, 0xF, (*(int *)0xC4B40CC));
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t0 + 0x6C));
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + -30.0f));
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x28)) + 30.0f));
                t2 = (int)((int)(FUN_0c179ac0()) % (int)0x3C);
                u4 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u4 + ((float)t2 + -30.0f));
                (((struct o10_uchar *)((0x41C + a4)))->v) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x10))) + 0x1) % (int)0x6));
                (((struct o11_uchar *)((0x41C + a4)))->v) = ((*(signed char *)(((0x41C + a4) + 0x11))) + 0x1);
                t6 = 0x11;
                t7 = (0x10 + (0x41C + a4));
                u3 = (u4 + ((float)t2 + -30.0f));
                u0 = ((float)t2 + -30.0f);
            }
            t1 = t6;
            t4 = t7;
            u1 = u3;
            u2 = u0;
        }
        t0 = t1;
        t1 = t4;
        t2 = (0x41C + a4);
        t4 = (0x41C + a4);
        t5 = 0x0;
        t6 = ((0x41C + a4) + 0x8);
        u0 = u1;
        u1 = u2;
        for (;;) {
            t7 = *(int *)((((t5 << 2) + (0xC4 + a4)) + 0x0));
            t8 = t1;
            u2 = u0;
            u3 = u1;
            if ((*(signed char *)((t7 + 0x0))) != 0) {
                t9 = *(signed char *)((t4 + 0x0));
                *(unsigned char *)((t4 + 0x0)) = (t9 - 1);
                t10 = t1;
                u4 = u0;
                u5 = u1;
                if ((signed char)(t9 - 1) == 0) {
                    t1 = 0x4;
                    *(unsigned char *)((t2 + 0x0)) = t1;
                    t9 = *(signed char *)((t6 + 0x0));
                    *(unsigned char *)((t6 + 0x0)) = (t9 + 0x1);
                    if ((int)(signed char)(t9 + 0x1) > (int)0x3) {
                        t0 = 0x11;
                        *(unsigned char *)((t7 + 0x0)) = 0x0;
                        t1 = (*(signed char *)(((0x41C + a4) + t0)));
                        t1 = (t1 - 1);
                        *(unsigned char *)(((0x41C + a4) + t0)) = t1;
                        t9 = t1;
                        u6 = u0;
                        u7 = u1;
                    } else {
                        t0 = 0xC4B40CC;
                        t0 = (FUN_0c03744a(t7, 0x0, 0xF, (*(int *)((t0 + 0x0)))));
                    }
                    t10 = t9;
                    u4 = u6;
                    u5 = u7;
                }
                t8 = t10;
                u2 = u4;
                u3 = u5;
            }
            u0 = u2;
            u1 = u3;
            t1 = t8;
            t5 = (t5 + 0x1);
            t6 = (t6 + 0x1);
            t2 = (t2 + 0x1);
            t4 = (t4 + 0x1);
            if ((int)t5 >= (int)0x7) {
                break;
            }
        }
        if (((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 17) && (t3 = *(signed char *)(((0x41C + a4) + 0x12)), t3 == 0)) {
            (((struct o12_uchar *)((0x41C + a4)))->v) = 0x1;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    t0 = 0x12;
    if ((*(signed char *)(((0x41C + a4) + 0x12))) != 0) {
        t1 = 0x11;
        if ((*(signed char *)(((0x41C + a4) + 0x11))) == 0) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x14;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c151fd2(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_3 = a4;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (v0_3 + 0x28));
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_4);
    v0_0 = (v0_3);
    v0_2 = (0x4);
    if ((v0_4 == 0)) goto L_C152010;
    if ((v0_1 == 1)) goto L_C15202C;
    if ((v0_1 != 2)) goto L_C152004;
    L_C15211A:;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C152004:;
    if ((v0_1 != 3)) goto L_C15200C;
    goto L_C15211A;
    L_C15200C:;
    L_C152124:;
    return v0_1;
    L_C15202C:;
    v0_3 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_1 = (0x20);
    if (((short)(v0_3 - 1) != 0)) goto L_C152056;
    *(unsigned short *)((v0_0 + v0_1)) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) ^ 0x1);
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), ((((struct o22_short *)(v0_0))->v)), 0x10, (*(int *)0xC4B40CC));
    L_C152056:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C152094;
    if ((v0_1 == 1)) goto L_C1520C6;
    if ((v0_1 == 2)) goto L_C1520EE;
    goto L_C152124;
    L_C1520EE:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C152102;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C152102:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((float)v0_2 / 16.0f);
    v0_1 = (0x14);
    FPUL_ = (v0_2);
    goto L_C152124;
    L_C1520C6:;
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 1.0f;
    v0_2 = *(signed char *)((0xC535BAD + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)));
    v0_1 = (v0_2);
    if ((v0_2 == 17)) goto L_C152124;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x10;
    v0_1 = (0x10);
    goto L_C152124;
    L_C152094:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    w0_0 = (8.0f);
    FPUL_ = ((short)(v0_1 + 0x1));
    if ((8.0f > (float)(short)(v0_1 + 0x1))) goto L_C1520B0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C1520B0:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((float)v0_2 / w0_0);
    v0_1 = (0x14);
    FPUL_ = (v0_2);
    goto L_C152124;
    L_C152010:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x78;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = 0x0;
    v0_3 = (0x0);
    goto L_C15202C;
}

int FUN_0c152246(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0x4;
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        t0 = 0x2;
    }
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((int)t0 > 0) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0xC4 + a4)) + 0x0));
            switch (t1) {
            case 0:
                u0 = ((((struct o84_float *)(t2))->v));
                u0 = (u0 + (1.0f + 1.0f));
                (((struct o84_float *)(t2))->v) = u0;
                u1 = ((((struct o88_float *)(t2))->v));
                u1 = (u1 + (1.0f + 1.0f));
                (((struct o88_float *)(t2))->v) = u1;
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0xA) {
                    u0 = ((((struct o18_float *)(t2))->v));
                    u0 = (u0 - 0.100000001f);
                    (((struct o18_float *)(t2))->v) = u0;
                    u1 = ((((struct o1C_float *)(t2))->v));
                    u1 = (u1 - 0.100000001f);
                    (((struct o1C_float *)(t2))->v) = u1;
                    u0 = ((((struct o20_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.100000001f);
                    (((struct o20_float *)(t2))->v) = u0;
                    u0 = ((((struct o18_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o18_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o1C_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o1C_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o20_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o20_float *)(t2))->v) = 0.0f;
                    }
                }
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0x14) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 1:
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                } else {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    u0 = ((((struct o84_float *)(t2))->v));
                    u0 = (u0 + (1.0f + 1.0f));
                    (((struct o84_float *)(t2))->v) = u0;
                    u1 = ((((struct o88_float *)(t2))->v));
                    u1 = (u1 + (1.0f + 1.0f));
                    (((struct o88_float *)(t2))->v) = u1;
                    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                    } else {
                        u0 = ((((struct o18_float *)(t2))->v));
                        u0 = (u0 - 0.100000001f);
                        (((struct o18_float *)(t2))->v) = u0;
                        u1 = ((((struct o1C_float *)(t2))->v));
                        u1 = (u1 - 0.100000001f);
                        (((struct o1C_float *)(t2))->v) = u1;
                        u0 = ((((struct o20_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.100000001f);
                        (((struct o20_float *)(t2))->v) = u0;
                        u0 = ((((struct o18_float *)(t2))->v));
                        t3 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o18_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o1C_float *)(t2))->v));
                        t3 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o1C_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o20_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o20_float *)(t2))->v) = 0.0f;
                        }
                    }
                }
                break;
            case 2:
                (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) - 0xE39);
                u0 = ((((struct o84_float *)(t2))->v));
                u0 = (u0 + 0.200000003f);
                (((struct o84_float *)(t2))->v) = u0;
                u1 = ((((struct o88_float *)(t2))->v));
                u1 = (u1 - 0.0500000007f);
                (((struct o88_float *)(t2))->v) = u1;
                u0 = ((((struct o8C_float *)(t2))->v));
                u0 = (u0 + 0.200000003f);
                (((struct o8C_float *)(t2))->v) = u0;
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0xA) {
                    u0 = ((((struct o18_float *)(t2))->v));
                    u0 = (u0 - 0.100000001f);
                    (((struct o18_float *)(t2))->v) = u0;
                    u1 = ((((struct o1C_float *)(t2))->v));
                    u1 = (u1 - 0.100000001f);
                    (((struct o1C_float *)(t2))->v) = u1;
                    u0 = ((((struct o20_float *)(t2))->v));
                    u1 = 0.0f;
                    u0 = (u0 - 0.100000001f);
                    (((struct o20_float *)(t2))->v) = u0;
                    u0 = ((((struct o18_float *)(t2))->v));
                    t3 = !(u0 > u1);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o18_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o1C_float *)(t2))->v));
                    t3 = !(u1 > u0);
                    u0 = 0.0f;
                    if (t3) {
                        (((struct o1C_float *)(t2))->v) = 0.0f;
                    }
                    u1 = ((((struct o20_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        (((struct o20_float *)(t2))->v) = 0.0f;
                    }
                }
                u0 = 0.0f;
                u1 = ((((struct o88_float *)(t2))->v));
                if (!(u1 > u0)) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
                break;
            case 3:
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0xA) {
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) - 0xE39);
                    u0 = ((((struct o84_float *)(t2))->v));
                    u0 = (u0 + 0.200000003f);
                    (((struct o84_float *)(t2))->v) = u0;
                    u1 = ((((struct o88_float *)(t2))->v));
                    u1 = (u1 - 0.0500000007f);
                    (((struct o88_float *)(t2))->v) = u1;
                    u0 = ((((struct o8C_float *)(t2))->v));
                    u0 = (u0 + 0.200000003f);
                    (((struct o8C_float *)(t2))->v) = u0;
                    if ((int)(*(short *)((a4 + 0x1C))) > (int)0x14) {
                        u0 = ((((struct o18_float *)(t2))->v));
                        u0 = (u0 - 0.100000001f);
                        (((struct o18_float *)(t2))->v) = u0;
                        u1 = ((((struct o1C_float *)(t2))->v));
                        u1 = (u1 - 0.100000001f);
                        (((struct o1C_float *)(t2))->v) = u1;
                        u0 = ((((struct o20_float *)(t2))->v));
                        u1 = 0.0f;
                        u0 = (u0 - 0.100000001f);
                        (((struct o20_float *)(t2))->v) = u0;
                        u0 = ((((struct o18_float *)(t2))->v));
                        t3 = !(u0 > u1);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o18_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o1C_float *)(t2))->v));
                        t3 = !(u1 > u0);
                        u0 = 0.0f;
                        if (t3) {
                            (((struct o1C_float *)(t2))->v) = 0.0f;
                        }
                        u1 = ((((struct o20_float *)(t2))->v));
                        if (!(u1 > u0)) {
                            (((struct o20_float *)(t2))->v) = 0.0f;
                        }
                    }
                    u0 = 0.0f;
                    u1 = ((((struct o88_float *)(t2))->v));
                    if (!(u1 > u0)) {
                        *(unsigned char *)((t2 + 0x0)) = 0x0;
                    }
                }
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)t0) continue;
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}


