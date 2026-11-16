/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c02b3ba(float, float, float);
int FUN_0c02b502(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c123f20(int);
int FUN_0c145d1c(int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187d88(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c124794(int a4, int a5);
int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6);
int FUN_0c01ac62(int a4, float f4, float f5, float f6);
int FUN_0c146b78(int a4, int a5, int a6, int a7);

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

int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if (16.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 11.0f) {
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            t2 = 0x4;
            if ((signed char)t0 == 0) {
                t2 = 0x0;
            }
            t3 = 0x4;
            if ((signed char)t0 == 0) {
                t3 = 0x0;
            }
            (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
            (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
            (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
        } else {
            if (6.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                if (6.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    t2 = 0x4;
                    if ((signed char)t0 == 0) {
                        t2 = 0x0;
                    }
                    t3 = 0x4;
                    if ((signed char)t0 == 0) {
                        t3 = 0x0;
                    }
                    (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                    (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                    (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                }
            } else {
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                u0 = (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v);
                (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = (u0 + 0.200000003f);
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                if (((((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v)) > 3.0f) {
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = 3.0f;
                }
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                t2 = 0x4;
                if ((signed char)t0 == 0) {
                    t2 = 0x0;
                }
                t3 = 0x4;
                if ((signed char)t0 == 0) {
                    t3 = 0x0;
                }
                u0 = (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v);
                (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
                (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        u0 = (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v);
        (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = (u0 - 0.5f);
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        if (1.0f > ((((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v))) {
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = 1.0f;
        }
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        t2 = 0x4;
        if ((signed char)t0 == 0) {
            t2 = 0x0;
        }
        t3 = 0x4;
        if ((signed char)t0 == 0) {
            t3 = 0x0;
        }
        u0 = (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v);
        (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
        (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}


int FUN_0c146b78(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t2;
    register int t4;
    register int t13;
    register int t15;
    register int t29;
    register int t33;
    register int t35;
    register int t43;
    register int t47;
    register int t49;
    register int t57;
    register int t61;
    register int t63;
    register int t74;
    register int t78;
    register float u96;
    register float u97;
    register float t98;
    register float u99;
    register int t102;
    register float u105;
    register int t108;
    register float t112;
    register float u114;
    register float u121;
    register float t123;
    register int t132;
    register int t136;
    register float t139;
    register float u140;
    register int t143;
    register float u148;
    register float u149;
    register float t151;
    register float u161;
    register float u162;
    register float u163;
    register int t165;
    register int t167;
    register int t176;
    register int t178;
    register int t192;
    register int t196;
    register int t198;
    register int t206;
    register int t210;
    register int t212;
    register int t220;
    register int t224;
    register int t226;
    register int t237;
    register int t241;
    register int t247;
    int t31;
    int t45;
    int t59;
    int t194;
    int t208;
    int t222;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            *(volatile int *)((a4 + 0xC4));
            t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            *(volatile int *)((a4 + 0xC4));
            t4 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
            *(volatile int *)((a4 + 0xC4));
            t13 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            t15 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            t29 = *(short *)((a4 + 0x1C));
            if (((int)t29 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t31 = (((struct o4_int *)0xC2A2538)->v), (int)t29 <= (int)t31)) {
                t33 = ((((struct o0_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t33;
                t35 = ((((struct o4_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t35;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t35, t33);
            }
            t43 = *(short *)((a4 + 0x1C));
            if (((int)t43 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t45 = (((struct o24_int *)0xC2A2538)->v), (int)t43 <= (int)t45)) {
                t47 = ((((struct o20_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t47;
                t49 = ((((struct o24_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t49;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t49, t47);
            }
            t57 = *(short *)((a4 + 0x1C));
            if (((int)t57 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t59 = (((struct oC_int *)0xC2A2538)->v), (int)t57 <= (int)t59)) {
                t61 = ((((struct o8_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t61;
                t63 = ((((struct oC_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t63;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t63, t61);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t74 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t74 + 0x6)) = ((*(short *)((t74 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t78 = *(short *)((a4 + 0x1E));
            t247 = t78;
            if ((int)t78 > (int)0x9) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t247 = 0xA8;
            }
        } else {
            t247 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        u96 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o14_int *)0xC2A2538)->v)))) * 360.0f) / (float)((((struct o14_int *)0xC2A2538)->v)));
        u97 = ((u96 * 65536.0f) / 360.0f);
        *(unsigned int *)((a4 + 0x38)) = ((int)(u97 + 0.5f) & 0xFFFF);
        t98 = math_sin_angle16(((int)(u97 + 0.5f) & 0xFFFF));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2560;
        u99 = (((struct o28_float *)0xC2A2538)->v);
        t102 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2570;
        u105 = (((float)t102 * ((((struct o38_float *)0xC2A2538)->v))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o4C_float *)(a4))->v) = (t98 * (u99 + u105));
        t108 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o50_float *)(a4))->v) = ((((((struct o0_float *)0xC2A2578)->v)) * (float)t108) / (float)((((struct o18_int *)0xC2A2538)->v)));
        t112 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u114 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
        u121 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o54_float *)(a4))->v) = (t112 * (u114 + u121));
        t123 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A256C;
        (((struct o58_float *)(a4))->v) = (t123 * ((((struct o34_float *)0xC2A2538)->v)));
        (((struct o5C_float *)(a4))->v) = ((((((struct o4_float *)0xC2A2578)->v)) * (float)t108) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        *(volatile int *)((a4 + 0xC4));
        t132 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        *(volatile int *)((a4 + 0xC8));
        t136 = ((int (*)(void))(FUN_0c187798))();
        (((struct o20_ushort *)(a4))->v) = ((((struct oC_int *)0xC2A2578)->v));
        *(int *)((int)stk + 4) = (a4 + 0x28);
        t139 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2574;
        u140 = (((struct o3C_float *)0xC2A2538)->v);
        t143 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o1C_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2580;
        u148 = (u140 + ((((float)t143 * ((((struct o8_float *)0xC2A2578)->v))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u149 = ((((struct o28_float *)(a4))->v));
        u149 = u149 + u148 * t139;
        (((struct o28_float *)(a4))->v) = u149;
        *(int *)((int)stk + 4) = (a4 + 0x30);
        t151 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u161 = (((struct o30_float *)(a4))->v);
        u162 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) + ((((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o1C_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u163 = u161;
        u163 = u163 + u162 * t151;
        (((struct o30_float *)(a4))->v) = u163;
        *(volatile int *)((a4 + 0xC4));
        t165 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        t167 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
        *(volatile int *)((a4 + 0xC4));
        t176 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        t178 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t192 = *(short *)((a4 + 0x1C));
        if (((int)t192 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t194 = (((struct o4_int *)0xC2A2538)->v), (int)t192 <= (int)t194)) {
            t196 = ((((struct o0_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t196;
            t198 = ((((struct o4_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t198;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t198, t196);
        }
        t206 = *(short *)((a4 + 0x1C));
        if (((int)t206 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t208 = (((struct o24_int *)0xC2A2538)->v), (int)t206 <= (int)t208)) {
            t210 = ((((struct o20_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t210;
            t212 = ((((struct o24_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t212;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t212, t210);
        }
        t220 = *(short *)((a4 + 0x1C));
        if (((int)t220 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t222 = (((struct oC_int *)0xC2A2538)->v), (int)t220 <= (int)t222)) {
            t224 = ((((struct o8_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t224;
            t226 = ((((struct oC_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t226;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t226, t224);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t237 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t237 + 0x6)) = ((*(short *)((t237 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t241 = *(short *)((a4 + 0x1E));
        t247 = t241;
        if ((int)t241 > (int)0x9) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t247 = 0xA8;
        }
    }
    return t247;
}
