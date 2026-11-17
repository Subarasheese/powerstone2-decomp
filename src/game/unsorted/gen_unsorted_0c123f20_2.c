/* game/unsorted: functions 0C123F20-0C124BEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c123f20(int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c124386(int a4, int a5, int a6, int a7);
int FUN_0c124794(int a4, int a5);

int FUN_0c124386(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;

    t8 = *(signed char *)((a4 + 0x15));
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t8;
        }
        u0 = *(float *)0xC1245A4;
        t8 = 0xC1245A4;
        t9 = a4;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((((0xC4 + a4) + t10) + 0x0));
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t8 = (FUN_0c179ac0());
                t12 = t8;
                t8 = 0xA;
                t8 = ((int)((int)t12 % (int)t8));
                t12 = t8 == 0;
                t8 = 0x7C;
                if (t12) {
                    *(unsigned char *)((t11 + 0x0)) = 0x0;
                }
                u1 = ((((struct o1C_float *)(t11))->v));
                u1 = (u1 * 65536.0f);
                u1 = (u1 / 360.0f);
                *(unsigned int *)((t11 + t8)) = ((*(int *)((t11 + t8))) + (int)u1);
                t8 = 0x70;
                u1 = ((((struct o20_float *)(t11))->v));
                *(float *)((t11 + t8)) = ((*(float *)((t11 + t8))) + u1);
                t8 = 0x18;
                t8 = (t8 + t11);
                t12 = t8;
                t8 = (FUN_0c179ac0());
                t13 = t8;
                t8 = 0x3;
                t8 = ((int)((int)t13 % (int)t8));
                t13 = t8;
                t8 = 0x7C;
                u1 = (float)t13;
                u1 = (u1 + u0);
                *(float *)((t12 + 0x0)) = ((*(float *)((t12 + 0x0))) + u1);
                t9 = (*(int *)((t11 + t8)));
                u2 = (math_sin_angle16(t9));
                t8 = 0x18;
                u1 = (*(float *)((t11 + t8)));
                t8 = 0x6C;
                u2 = (u2 * u1);
                *(float *)((t11 + t8)) = u2;
                t8 = 0x7C;
                t9 = (*(int *)((t11 + t8)));
                u2 = (math_cos_angle16(t9));
                t8 = 0x18;
                u1 = (*(float *)((t11 + t8)));
                t8 = 0x74;
                u2 = (u2 * u1);
                *(float *)((t11 + t8)) = u2;
            } else {
                t11 = t9;
            }
            t10 = (t10 + 0x4);
            t9 = t11;
            if ((unsigned int)t10 >= (unsigned int)0x28) {
                break;
            }
        }
        t8 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
        t9 = (short)(t8 - 1);
        if ((short)(t8 - 1) == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t9 = 0x15;
        }
        return t9;
    }
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((((0xC4 + a4) + t8) + 0x0));
        (((struct o7C_uint *)(t9))->v) = (((((struct o7C_int *)(t9))->v)) + (int)((((((struct o1C_float *)(t9))->v)) * 65536.0f) / 360.0f));
        (((struct o70_float *)(t9))->v) = (((((struct o70_float *)(t9))->v)) + ((((struct o20_float *)(t9))->v)));
        (((struct o6C_float *)(t9))->v) = ((math_sin_angle16(((((struct o7C_int *)(t9))->v)))) * ((((struct o18_float *)(t9))->v)));
        (((struct o74_float *)(t9))->v) = ((math_cos_angle16(((((struct o7C_int *)(t9))->v)))) * ((((struct o18_float *)(t9))->v)));
        t8 = (t8 + 0x4);
        if (((((struct o70_float *)(t9))->v)) > (((((struct o2C_float *)(a4))->v)) + 400.0f)) {
            (((struct o70_float *)(t9))->v) = ((((struct o2C_float *)(a4))->v));
        }
        if ((unsigned int)t8 >= (unsigned int)0x28) {
            break;
        }
    }
    t8 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
    t9 = 0x15;
    if (((short)(t8 - 1) != 0) && ((t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26) && (((t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x375A + t2)), t3 == 1) || (t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((0x375A + t4)), t5 == 4)) && (t6 = *(int *)((a4 + 0x10)), t7 = *(signed char *)((t6 + 0x15)), (int)t7 <= (int)0x2)))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t9 = 0x3C;
    }
    return t9;
}

int FUN_0c124794(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t50;
    register int t5;
    register int t6;
    register int t15;
    register int t17;
    register int t21;
    register int t23;
    register float u24;
    register int t26;
    register int t28;
    register int t29;
    register float t33;
    register int t36;
    register int t38;
    register int t40;
    register int t42;
    register int t46;
    register int t61;
    register int t83;
    register int t66;
    register int t67;
    register int t86;
    register int t108;
    register int t91;
    register int t92;
    register int t136;
    register int t111;
    register int t133;
    register int t116;
    register int t117;
    register int t169;
    register int t188;
    register int t173;
    register int t174;
    register int t175;
    register float u183;
    register int t185;
    register int t209;
    register int t210;
    register int t215;
    register int t217;
    register int t219;
    register int t227;
    register int t194;
    register int t154;
    register int t7;
    register float u8;
    register float u9;
    register int t148;
    register int t142;
    register int t176;
    register int t211;

    *(unsigned char *)(((int)stk + 8)) = a5;
    t0 = *(signed char *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = t0;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = FUN_0c03f444(0x5, 0x0, 0xA);
                t50 = t1;
                if (t1 != 0) {
                    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t1 + 0x4)) = 0xC124386;
                    (((struct oA8_uchar *)(t1))->v) = 0x1;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    FUN_0c187798();
                    FUN_0c187798();
                    (((struct o48_float *)(t1))->v) = 1.0f;
                    (((struct o44_float *)(t1))->v) = 1.0f;
                    (((struct o40_float *)(t1))->v) = 1.0f;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t5 = 0xC1249E8;
                    t6 = 0x0;
                    for (;;) {
                        if ((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)0x28) {
                            break;
                        }
                        t7 = 0xC4;
                        t5 = (*(signed char *)((a4 + 0x1)));
                        t6 = (*(int *)(((int)stk + 4)));
                        t7 = (t7 + t1);
                        t5 = (t5 << 2);
                        t7 = (t7 + t6);
                        t7 = (*(int *)((t7 + 0x0)));
                        t15 = (*(int *)((0xC4B40FC + t5)));
                        *(int *)((int)stk + 0) = t15;
                        t5 = (FUN_0c179ac0());
                        t6 = 0xC18760C;
                        t17 = t5;
                        t5 = 0x3;
                        t5 = ((int)((int)t17 % (int)t5));
                        t5 = (FUN_0c03744a(t7, (t5 + 0x1), 0x6, t15));
                        t5 = 0x21F;
                        *(unsigned char *)((t7 + 0x0)) = 0x1;
                        *(unsigned short *)((t7 + 0x6)) = t5;
                        t5 = (FUN_0c179ac0());
                        t21 = t5;
                        t5 = 0x14;
                        t5 = ((int)((int)t21 % (int)t5));
                        t23 = t5;
                        t5 = 0x18;
                        u8 = 50.0f;
                        u9 = (float)t23;
                        u24 = u8;
                        u24 = u24 + 10.0f * u9;
                        u8 = u24;
                        *(float *)((t7 + t5)) = u8;
                        t5 = (FUN_0c179ac0());
                        t26 = t5;
                        t5 = 0x48;
                        t5 = ((int)((int)t26 % (int)t5));
                        t6 = t5;
                        t5 = (t5 << 2);
                        t5 = (t5 + t6);
                        t28 = t5;
                        t5 = 0x7C;
                        u9 = (float)t28;
                        u9 = (u9 * 65536.0f);
                        u9 = (u9 / 360.0f);
                        t6 = (int)u9;
                        *(unsigned int *)((t7 + t5)) = t6;
                        t29 = t6;
                        t6 = 0xC179BF0;
                        t5 = 0x18;
                        t6 = 0xC179670;
                        u9 = (*(float *)((t7 + t5)));
                        t5 = 0x6C;
                        *(float *)((t7 + t5)) = ((math_sin_angle16(t29)) * u9);
                        t5 = 0x7C;
                        t33 = math_cos_angle16((*(int *)((t7 + t5))));
                        t5 = 0x18;
                        u9 = (*(float *)((t7 + t5)));
                        t5 = 0x74;
                        *(float *)((t7 + t5)) = (t33 * u9);
                        t5 = (FUN_0c179ac0());
                        t6 = 0xC18760C;
                        t36 = t5;
                        t5 = 0x14;
                        t5 = ((int)((int)t36 % (int)t5));
                        t38 = t5;
                        t5 = 0x70;
                        u9 = (float)t38;
                        u9 = (u9 * 10.0f);
                        *(float *)((t7 + t5)) = u9;
                        t5 = (t5 + 0x1C);
                        u9 = 1.0f;
                        u9 = (u9 + u9);
                        *(float *)((t7 + t5)) = u9;
                        t5 = (t5 - 4);
                        *(float *)((t7 + t5)) = u9;
                        t5 = (t5 - 4);
                        *(float *)((t7 + t5)) = u9;
                        t5 = (FUN_0c179ac0());
                        t40 = t5;
                        t5 = 0x5;
                        t5 = ((int)((int)t40 % (int)t5));
                        t5 = (t5 + 0x5);
                        t42 = t5;
                        t5 = 0x1C;
                        u9 = (float)t42;
                        *(float *)((t7 + t5)) = u9;
                        t5 = (FUN_0c179ac0());
                        if ((int)t5 >= 0) {
                            t5 = (t5 & 0x7);
                        } else {
                            t5 = (~t5);
                            t5 = (t5 + 0x1);
                            t5 = (t5 & 0x7);
                            t5 = (~t5);
                            t5 = (t5 + 0x1);
                        }
                        t46 = t5;
                        t5 = 0xC124B00;
                        u8 = (*(float *)((t5 + 0x0)));
                        t5 = 0x20;
                        u9 = (float)t46;
                        u9 = (u9 + u8);
                        *(float *)((t7 + t5)) = u9;
                        t6 = (*(int *)(((int)stk + 4)));
                        t6 = (t6 + 0x4);
                        *(unsigned int *)(((int)stk + 4)) = t6;
                    }
                    (((struct o14_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 8)));
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    *(unsigned short *)((t1 + 0x1C)) = 0x12C;
                    t50 = 0x12C;
                }
                t154 = t50;
            } else {
                if (t0 == 3) {
                    t61 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t83 = t61;
                    if (t61 != 0) {
                        *(unsigned char *)((t61 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned int *)((t61 + 0x4)) = 0xC124580;
                        (((struct oA8_uchar *)(t61))->v) = 0x1;
                        (((struct oAC_ushort *)(t61))->v) = 0xF;
                        (((struct oA9_uchar *)(t61))->v) = 0x21;
                        FUN_0c187798();
                        (((struct o2C_float *)(t61))->v) = (((((struct o2C_float *)(t61))->v)) + 250.0f);
                        FUN_0c187798();
                        (((struct o48_float *)(t61))->v) = 1.0f;
                        (((struct o44_float *)(t61))->v) = 1.0f;
                        (((struct o40_float *)(t61))->v) = 1.0f;
                        t66 = (((struct oC4_int *)(t61))->v);
                        t67 = *(int *)(((int)stk + 4));
                        switch (t67) {
                        case 3:
                            *(unsigned char *)((t61 + 0x2)) = 0x0;
                            FUN_0c03744a(t66, 0x0, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                            break;
                        case 4:
                            *(unsigned char *)((t61 + 0x2)) = 0x1;
                            FUN_0c03744a(t66, 0x1, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                            break;
                        case 5:
                            *(unsigned char *)((t61 + 0x2)) = 0x2;
                            FUN_0c03744a(t66, 0x2, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                            break;
                        }
                        *(unsigned char *)((t66 + 0x0)) = 0x1;
                        *(unsigned short *)((t66 + 0x6)) = 0x21F;
                        (((struct o18_float *)(t66))->v) = 1.0f;
                        (((struct o20_float *)(t66))->v) = 1.0f;
                        (((struct o1C_float *)(t66))->v) = 1.0f;
                        (((struct o8C_float *)(t66))->v) = 0.0f;
                        (((struct o88_float *)(t66))->v) = 0.0f;
                        (((struct o84_float *)(t66))->v) = 0.0f;
                        *(unsigned short *)((t61 + 0x1C)) = 0x0;
                        *(unsigned short *)((t61 + 0x1E)) = 0x0;
                        *(unsigned int *)((t61 + 0x10)) = a4;
                        t83 = 0x0;
                    }
                    t148 = t83;
                } else {
                    if (t0 == 4) {
                        t86 = FUN_0c03f444(0x5, 0x0, 0x1);
                        t108 = t86;
                        if (t86 != 0) {
                            *(unsigned char *)((t86 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                            *(unsigned int *)((t86 + 0x4)) = 0xC124580;
                            (((struct oA8_uchar *)(t86))->v) = 0x1;
                            (((struct oAC_ushort *)(t86))->v) = 0xF;
                            (((struct oA9_uchar *)(t86))->v) = 0x21;
                            FUN_0c187798();
                            (((struct o2C_float *)(t86))->v) = (((((struct o2C_float *)(t86))->v)) + 250.0f);
                            FUN_0c187798();
                            (((struct o48_float *)(t86))->v) = 1.0f;
                            (((struct o44_float *)(t86))->v) = 1.0f;
                            (((struct o40_float *)(t86))->v) = 1.0f;
                            t91 = (((struct oC4_int *)(t86))->v);
                            t92 = *(int *)(((int)stk + 4));
                            switch (t92) {
                            case 3:
                                *(unsigned char *)((t86 + 0x2)) = 0x0;
                                FUN_0c03744a(t91, 0x0, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                break;
                            case 4:
                                *(unsigned char *)((t86 + 0x2)) = 0x1;
                                FUN_0c03744a(t91, 0x1, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                break;
                            case 5:
                                *(unsigned char *)((t86 + 0x2)) = 0x2;
                                FUN_0c03744a(t91, 0x2, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                break;
                            }
                            *(unsigned char *)((t91 + 0x0)) = 0x1;
                            *(unsigned short *)((t91 + 0x6)) = 0x21F;
                            (((struct o18_float *)(t91))->v) = 1.0f;
                            (((struct o20_float *)(t91))->v) = 1.0f;
                            (((struct o1C_float *)(t91))->v) = 1.0f;
                            (((struct o8C_float *)(t91))->v) = 0.0f;
                            (((struct o88_float *)(t91))->v) = 0.0f;
                            (((struct o84_float *)(t91))->v) = 0.0f;
                            *(unsigned short *)((t86 + 0x1C)) = 0x0;
                            *(unsigned short *)((t86 + 0x1E)) = 0x0;
                            *(unsigned int *)((t86 + 0x10)) = a4;
                            t108 = 0x0;
                        }
                        t142 = t108;
                    } else {
                        t136 = t0;
                        if (t0 == 5) {
                            t111 = FUN_0c03f444(0x5, 0x0, 0x1);
                            t133 = t111;
                            if (t111 != 0) {
                                *(unsigned char *)((t111 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                                *(unsigned int *)((t111 + 0x4)) = 0xC124580;
                                (((struct oA8_uchar *)(t111))->v) = 0x1;
                                (((struct oAC_ushort *)(t111))->v) = 0xF;
                                (((struct oA9_uchar *)(t111))->v) = 0x21;
                                FUN_0c187798();
                                (((struct o2C_float *)(t111))->v) = (((((struct o2C_float *)(t111))->v)) + 250.0f);
                                FUN_0c187798();
                                (((struct o48_float *)(t111))->v) = 1.0f;
                                (((struct o44_float *)(t111))->v) = 1.0f;
                                (((struct o40_float *)(t111))->v) = 1.0f;
                                t116 = (((struct oC4_int *)(t111))->v);
                                t117 = *(int *)(((int)stk + 4));
                                switch (t117) {
                                case 3:
                                    *(unsigned char *)((t111 + 0x2)) = 0x0;
                                    FUN_0c03744a(t116, 0x0, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                    break;
                                case 4:
                                    *(unsigned char *)((t111 + 0x2)) = 0x1;
                                    FUN_0c03744a(t116, 0x1, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                    break;
                                case 5:
                                    *(unsigned char *)((t111 + 0x2)) = 0x2;
                                    FUN_0c03744a(t116, 0x2, 0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                                    break;
                                }
                                *(unsigned char *)((t116 + 0x0)) = 0x1;
                                *(unsigned short *)((t116 + 0x6)) = 0x21F;
                                (((struct o18_float *)(t116))->v) = 1.0f;
                                (((struct o20_float *)(t116))->v) = 1.0f;
                                (((struct o1C_float *)(t116))->v) = 1.0f;
                                (((struct o8C_float *)(t116))->v) = 0.0f;
                                (((struct o88_float *)(t116))->v) = 0.0f;
                                (((struct o84_float *)(t116))->v) = 0.0f;
                                *(unsigned short *)((t111 + 0x1C)) = 0x0;
                                *(unsigned short *)((t111 + 0x1E)) = 0x0;
                                *(unsigned int *)((t111 + 0x10)) = a4;
                                t133 = 0x0;
                            }
                            t136 = t133;
                        }
                        t142 = t136;
                    }
                    t148 = t142;
                }
                t154 = t148;
            }
            t194 = t154;
        } else {
            t169 = FUN_0c03f444(0x5, 0x0, 0x4);
            t188 = t169;
            if (t169 != 0) {
                *(unsigned char *)((t169 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t169 + 0x4)) = 0xC124286;
                (((struct oA8_uchar *)(t169))->v) = 0x1;
                (((struct oAC_ushort *)(t169))->v) = 0x1F;
                (((struct oA9_uchar *)(t169))->v) = 0x21;
                FUN_0c187798();
                FUN_0c187798();
                (((struct o48_float *)(t169))->v) = 1.0f;
                (((struct o44_float *)(t169))->v) = 1.0f;
                (((struct o40_float *)(t169))->v) = 1.0f;
                t173 = 0x40;
                t174 = 0x0;
                t175 = 0xC2A0E70;
                for (;;) {
                    *(unsigned int *)(((int)stk + 4)) = t174;
                    if ((unsigned int)t174 >= (unsigned int)0x10) {
                        break;
                    }
                    t176 = 0xC4;
                    t173 = (*(signed char *)((a4 + 0x1)));
                    t174 = (*(int *)(((int)stk + 4)));
                    t176 = (t176 + t169);
                    t173 = (t173 << 2);
                    t176 = (t176 + t174);
                    t176 = (*(int *)((t176 + 0x0)));
                    t173 = (FUN_0c03744a(t176, 0x0, 0x6, (*(int *)((0xC4B40FC + t173)))));
                    t173 = 0x21F;
                    t174 = 0xC187798;
                    *(unsigned char *)((t176 + 0x0)) = 0x1;
                    *(unsigned short *)((t176 + 0x6)) = t173;
                    t173 = 0x74;
                    *(float *)((t176 + t173)) = 0.0f;
                    t173 = 0x6C;
                    *(float *)((t176 + t173)) = 0.0f;
                    t173 = 0x10;
                    u183 = *(float *)((t175 + t173));
                    t173 = 0x70;
                    *(float *)((t176 + t173)) = u183;
                    t173 = 0xC;
                    t173 = (FUN_0c187798());
                    t185 = *(int *)((t175 + 0xC));
                    t173 = 0x7C;
                    t175 = (t175 + 0x14);
                    *(unsigned int *)((t176 + t173)) = t185;
                    t173 = 0x18;
                    *(float *)((t176 + t173)) = 1.0f;
                    t173 = 0x20;
                    *(float *)((t176 + t173)) = 1.0f;
                    t173 = 0x1C;
                    *(float *)((t176 + t173)) = 1.0f;
                    t174 = (*(int *)(((int)stk + 4)));
                    t174 = (t174 + 0x4);
                }
                (((struct o14_uchar *)(t169))->v) = (*(signed char *)(((int)stk + 8)));
                *(unsigned int *)((t169 + 0x10)) = a4;
                *(unsigned short *)((t169 + 0x1C)) = 0x12C;
                t188 = 0x12C;
            }
            t194 = t188;
        }
        t227 = t194;
    } else {
        t209 = t0;
        t210 = 0x8;
        for (;;) {
            if (t210 == 0) {
                break;
            }
            t209 = (FUN_0c03f444(0x5, 0x0, 0x1));
            t211 = t209;
            if (t209 != 0) {
                t209 = (*(signed char *)((a4 + 0x1)));
                t209 = (t209 << 2);
                t215 = (*(int *)((0xC4B40FC + t209)));
                *(int *)((int)stk + 0) = t215;
                t209 = (FUN_0c179ac0());
                t217 = t209;
                t209 = 0x3;
                t209 = ((int)((int)t217 % (int)t209));
                t219 = t209;
                t209 = 0xC4;
                t209 = (FUN_0c03744a((*(int *)((t211 + t209))), t219, 0x5, t215));
                t209 = (*(signed char *)((a4 + 0x1)));
                *(unsigned char *)((t211 + 0x1)) = t209;
                t209 = 0xA8;
                *(unsigned int *)((t211 + 0x4)) = 0xC12409C;
                *(unsigned char *)((t211 + t209)) = 0x1;
                t209 = (t209 + 0x4);
                *(unsigned short *)((t211 + t209)) = 0xF;
                t209 = (t209 - 3);
                *(unsigned char *)((t211 + t209)) = 0x21;
                t209 = 0x40;
                *(float *)((t211 + t209)) = 1.0f;
                t209 = 0x44;
                *(float *)((t211 + t209)) = 1.0f;
                t209 = 0x48;
                *(float *)((t211 + t209)) = 1.0f;
                t209 = 0xC;
                t209 = (FUN_0c187798());
                t209 = 0xC;
                t209 = (FUN_0c187798());
                t209 = (FUN_0c123f20(t211));
                t209 = 0x12C;
                *(unsigned int *)((t211 + 0x10)) = a4;
                *(unsigned short *)((t211 + 0x1C)) = t209;
            }
            t210 = (t210 - 1);
        }
        t227 = t209;
    }
    return t227;
}
