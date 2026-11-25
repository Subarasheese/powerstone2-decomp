/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e328(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c118ee4(int, int);
int FUN_0c168fa8(int, int, int, int);
int FUN_0c16944a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0cb448(int a4, int a5, int a6, int a7);
int FUN_0c0c7664(int a4);
int FUN_0c11902c(int a4);
int FUN_0c1507f4(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };



int FUN_0c0cb448(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0, a7);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC0CACAC;
    (((struct oAC_ushort *)(t0))->v) = 0xF;
    (((struct oA9_uchar *)(t0))->v) = 0x40;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct o41C_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x3721)));
    FUN_0c0c25c4(t0);
    (((struct oA8_uchar *)(t0))->v) = 0x0;
    (((struct o41D_uchar *)(t0))->v) = 0x1;
    (((struct o422_uchar *)(t0))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((a4 + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
    *(unsigned char *)((t0 + 0x2)) = a5;
    t1 = *(signed char *)((t0 + 0x2));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x7);
                    t2 = (((struct o3818_short *)(a4))->v);
                    *(unsigned short *)((t0 + 0x1C)) = t2;
                    return t2;
                }
                if (t1 == 4) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x9);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 5) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0xB);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 6) {
                    *(unsigned int *)((t0 + 0x4)) = 0xC0CAFC0;
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x50);
                    return FUN_0c07e328(t0, 0x8E);
                }
                return t1;
            }
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            FUN_0c0c2ab6(t0, 0x1F);
            FUN_0c07e3fc(t0, 0x6);
            *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
            *(unsigned short *)((t0 + 0x1E)) = 0xF;
            return 0xF;
        }
        u0 = (((struct o378C_float *)(a4))->v);
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        FUN_0c0c2ab6(t0, 0x1F);
        t1 = 0x5;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t1 = 0x4;
        }
        return (FUN_0c07e3fc(t0, t1));
    }
    *(unsigned short *)((t0 + 0x1C)) = (*(signed char *)((a4 + 0x1)));
    u0 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(t0))->v) = u0;
    (((struct o44_float *)(t0))->v) = u0;
    (((struct o40_float *)(t0))->v) = u0;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x373F)));
    FUN_0c0c2ab6(t0, (*(signed char *)0xC275FCB));
    FUN_0c07e3fc(t0, 0x3);
    (((struct o12A_ushort *)(t0))->v) = (~(((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))) | ((int)0x1 << (int)(*(short *)((t0 + 0x1C))))));
    t1 = 0x3740;
    if ((*(signed char *)((a4 + 0x3740))) == 0xFF) {
    } else {
        (((struct o12A_ushort *)(t0))->v) = (((((struct o12A_short *)(t0))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x3740))))));
        t1 = 0x12A;
    }
    return t1;
}



int FUN_0c1507f4(int a4, int a5, int a6, int a7)
{
    int t3;
    int t0;
    int t4;
    int t2;
    int t1;
    int t5;
    int t6;
    float u0;
    float u1;
    float u2;
    float u3;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = (*(int *)((((t2 << 2) + (0xC4 + a4)) + 0x0)));
            t4 = (*(signed char *)(t3));
            if (t4 != 0) {
                t1 = (t1 + 0x1);
                nlAddVector3op((0x90 + t3), (0x90 + t3), (0x9C + t3));
                t0 = (t3 + 0x6C);
                nlAddVector3op(t0, (t3 + 0x6C), (0x90 + t3));
                t4 = ((*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0))) - 1);
                *(unsigned char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)) = t4;
                t4 = (signed char)t4;
                if (t4 == 0) {
                    t5 = (((0x41C + a4) + 0x8) + t2);
                    *(unsigned char *)(t5) = 0x4;
                    t0 = t3;
                    FUN_0c037498(t0, (*(signed char *)((((0x41C + a4) + t2) + 0x0))), 0x7, (*(int *)((0xC4B40CC + 0x0))));
                    t4 = ((0x41C + a4) + t2);
                    t6 = *(signed char *)(t4);
                    *(unsigned char *)(t4) = (t6 + 0x1);
                    t4 = 0xA;
                    if ((int)(signed char)(t6 + 0x1) >= (int)t4) {
                        *(unsigned char *)(t3) = 0x0;
                    }
                }
                t6 = *(signed char *)((((0x41C + a4) + t2) + 0x0));
                t4 = 0x5;
                if ((int)t6 >= (int)t4) {
                    t5 = ((0x41C + a4) + t2);
                    u0 = (*(float *)0xC150A4C);
                    u1 = ((((float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)))) + 4.0f * ((-((float)(*(signed char *)(t5)))) + 15.0f)) / u0);
                    (((struct o14_float *)(t3))->v) = u1;
                    t4 = t5;
                    u2 = u1;
                    u3 = u0;
                }
                t5 = t4;
                u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)));
                u0 = ((((((float)(*(signed char *)((((0x41C + a4) + t2) + 0x0)))) * 4.0f) - u1) + 4.0f) / 64.0f);
                u2 = ((((((struct o10_float *)((0x41C + a4)))->v)) + u0) * 0.800000012f);
                (((struct o8C_float *)(t3))->v) = u2;
                (((struct o88_float *)(t3))->v) = u2;
                (((struct o84_float *)(t3))->v) = u2;
            } else {
                t3 = t0;
            }
            t2 = (t2 + 0x1);
            t0 = t3;
        }
        t0 = 0xC0;
        if (t1 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)((((((((t0 << 1) + t0) << 2) << 1) + 0xC203288) + (((*(signed char *)0xC54223C) << 2) << 1)) + ((((struct o1C_short *)(a4))->v))));
    t0 = 0xC203258;
    t2 = 0xC203288;
    t3 = 0x0;
    t4 = a6;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        *(unsigned char *)((((0x41C + a4) + t3) + 0x0)) = 0x1;
        t2 = 0xC187798;
        *(unsigned char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)) = 0x1;
        t4 = (*(int *)((((t3 << 2) + (0xC4 + a4)) + 0x0)));
        t0 = (t4 + 0x18);
        *(unsigned char *)(t4) = 0x1;
        (((struct o14_float *)(t4))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + 0xC203258)); }
        t3 = (t3 + 0x1);
    }
    return 0xC0;
}
