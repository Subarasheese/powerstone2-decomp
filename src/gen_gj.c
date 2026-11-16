/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c1281a8(int, int);
int FUN_0c169524(int, int, int);
int FUN_0c16957c(int, int, int);
int FUN_0c16958a(int, int, int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c16a112(int a4, int a5, int a6, int a7);
int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c129c70(int a4, int a5, int a6, int a7, float f4);

int FUN_0c16a112(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register float u12;
    register int t13;
    register int t19;
    register int t22;
    register int t24;
    register float u28;
    register int t30;
    register float u31;
    register int t32;
    register int t34;
    register int t36;
    register int t38;
    register int t40;
    register int t42;
    register int t44;
    register float u89;
    register int t90;
    register int t96;
    register int t99;
    register int t101;
    register float u105;
    register int t107;
    register float u108;
    register int t109;
    register int t111;
    register int t113;
    register int t115;
    register int t117;
    register int t119;
    register int t121;
    register int t140;
    int t14;
    register int t74;
    register int t75;
    int t91;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            t140 = t1;
            if (t1 == 2) {
            } else {
                t140 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 0.5f) {
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            u12 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u12;
            (((struct o40_float *)(a4))->v) = u12;
            t13 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t13 - 1);
            if (((int)(short)(t13 - 1) > 0) && (t14 = *(signed char *)((a4 + 0x131)), t14 == 0)) {
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            *(volatile int *)(((int)stk + 0));
            t19 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
            FUN_0c0585a8(a4, (((int)stk + 0) + 0x4), 0x2D8, 4.0f);
            t22 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t22))->v) = (((((struct o7C_int *)(t22))->v)) - 0x1555);
            t24 = (((struct oC8_int *)(a4))->v);
            u28 = 1.0f;
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            } else {
                u28 = (*(float *)0xC16A3E4);
            }
            (((struct o84_float *)(t24))->v) = u28;
            t30 = (((struct oC8_int *)(a4))->v);
            u31 = (((struct o84_float *)(t30))->v);
            (((struct o8C_float *)(t30))->v) = u31;
            (((struct o88_float *)(t30))->v) = u31;
            t32 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t32))->v) = (((((struct o78_int *)(t32))->v)) + 0x71C);
            t34 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t34))->v) = (((((struct o7C_int *)(t34))->v)) + 0x1C71);
            t36 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t36))->v) = (((((struct o78_int *)(t36))->v)) + 0x71C);
            t38 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t38))->v) = (((((struct o7C_int *)(t38))->v)) + 0x1C71);
            t40 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t40))->v) = (((((struct o78_int *)(t40))->v)) + 0x71C);
            t42 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t42))->v) = (((((struct o7C_int *)(t42))->v)) + 0x1C71);
            t44 = FUN_0c16958a(a4, 0x2, 0x2, 0x4);
            if (t44 != 0) {
                FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t140 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            t74 = 0xCC;
            t75 = (*(int *)((a4 + 0x10)));
        } else {
            t74 = 0xD4;
            t75 = (*(int *)((a4 + 0x10)));
        }
        thunk_FUN_0c058310(((*(int *)((t75 + t74))) + 0x28), (a4 + 0x28));
        FUN_0c16957c(a4, 0x2, 0x2);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c169524(a4, 0x29, 0x63);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 0.5f) {
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u89 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u89;
        (((struct o40_float *)(a4))->v) = u89;
        t90 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t90 - 1);
        if (((int)(short)(t90 - 1) > 0) && (t91 = *(signed char *)((a4 + 0x131)), t91 == 0)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        *(volatile int *)(((int)stk + 0));
        t96 = ((int (*)(void))(FUN_0c187798))();
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
        FUN_0c0585a8(a4, (((int)stk + 0) + 0x4), 0x2D8, 4.0f);
        t99 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t99))->v) = (((((struct o7C_int *)(t99))->v)) - 0x1555);
        t101 = (((struct oC8_int *)(a4))->v);
        u105 = 1.0f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        } else {
            u105 = (*(float *)0xC16A3E4);
        }
        (((struct o84_float *)(t101))->v) = u105;
        t107 = (((struct oC8_int *)(a4))->v);
        u108 = (((struct o84_float *)(t107))->v);
        (((struct o8C_float *)(t107))->v) = u108;
        (((struct o88_float *)(t107))->v) = u108;
        t109 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t109))->v) = (((((struct o78_int *)(t109))->v)) + 0x71C);
        t111 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t111))->v) = (((((struct o7C_int *)(t111))->v)) + 0x1C71);
        t113 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t113))->v) = (((((struct o78_int *)(t113))->v)) + 0x71C);
        t115 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t115))->v) = (((((struct o7C_int *)(t115))->v)) + 0x1C71);
        t117 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t117))->v) = (((((struct o78_int *)(t117))->v)) + 0x71C);
        t119 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t119))->v) = (((((struct o7C_int *)(t119))->v)) + 0x1C71);
        t121 = FUN_0c16958a(a4, 0x2, 0x2, 0x4);
        if (t121 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t140 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t140;
}

int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0199999996f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x258;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    t4 = t0;
                    if (t0 == 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t4 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t4 = 0x14;
                        }
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t1, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            (((struct o18_float *)(t1))->v) = 1.0f;
            (((struct o1C_float *)(t1))->v) = 0.0f;
            (((struct o20_float *)(t1))->v) = 0.0f;
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            (((struct o18_float *)(t1))->v) = 0.800000012f;
            (((struct o1C_float *)(t1))->v) = 0.800000012f;
            (((struct o20_float *)(t1))->v) = 0.800000012f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c129c70(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xC16);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xC16);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.400000006f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.400000006f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        FUN_0c1281a8(a4, 0x0);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xC16);
    if (((((struct o404_int *)(a4))->v)) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        } else {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = 0x30;
        }
        t1 = t0;
    } else {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
