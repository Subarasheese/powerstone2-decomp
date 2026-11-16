/* Straight-line functions with calls and guards (batch gen_oz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3764_int { char p[0x3764]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c013f2e(void);
int FUN_0c0185b4(void);
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c035bf0(int);
int FUN_0c035c1a(int, int, int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0377b2(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c045392(void);
int FUN_0c045a38(void);
int FUN_0c045fe0(void);
int FUN_0c04a556(void);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a40c(int);
int FUN_0c05a418(int, int);
int FUN_0c05a4a6(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b15c(void);
int FUN_0c05bae8(void);
int FUN_0c05bd22(void);
int FUN_0c05bf24(void);
int FUN_0c05c084(void);
int FUN_0c05f222(void);
int FUN_0c05f22c(int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0f4202(int, int, int);
int FUN_0c11fb16(void);
int FUN_0c14e8d0(void);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c18020e(int, int);
int FUN_0c1803fc(int, int);
int FUN_0c18098e(int);
int FUN_0c18106a(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c2b431c(int, int, int);
int dbg_set_cell_size(int, int);
int game_mode_handler_6(void);
int game_reset_objects(void);
int pdVibMxStop(int);
int FUN_0c08ae3c(int a4);
int FUN_0c05b80c(void);
int FUN_0c05a0b8(void);
int FUN_0c0220c4(int a4, int a5, int a6);
int FUN_0c081d1e(int a4, int a5, int a6, int a7);
int FUN_0c101c2c(void);
int FUN_0c02917c(void);
int FUN_0c05c9a6(void);
int FUN_0c07c364(int a4);
int FUN_0c024688(void);
int FUN_0c0290a2(void);
int FUN_0c028600(int a4, int a5);
int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c11f9c8(int a4, int a5, int a6);

int FUN_0c08ae3c(int a4)
{
    int stk[6];
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x3;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x3, 0xFFFFFFFF, 0x3, 0x3);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xE8;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE8, 0xFFFFFFFF, 0x3, 0xE8);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t13 = 0x17;
    }
    *(unsigned char *)((a4 + t13)) = 0x0;
    return t13;
}

int FUN_0c05b80c(void)
{
    register int t6;

    if ((int)(unsigned char)(*(signed char *)0xC541F41) > 0) {
        FUN_0c05c084();
    }
    t6 = *(signed char *)0xC541F41;
    if ((unsigned char)t6 != 0) {
        if ((unsigned char)t6 != 1) {
            if ((unsigned char)t6 != 2) {
                if ((unsigned char)t6 != 3) {
                    if ((unsigned char)t6 != 4) {
                        if ((unsigned char)t6 != 5) {
                            if ((unsigned char)t6 != 6) {
                                if ((unsigned char)t6 != 7) {
                                    if ((unsigned char)t6 != 8) {
                                        if ((unsigned char)t6 != 9) {
                                            return (unsigned char)t6;
                                        }
                                        return FUN_0c05bf24();
                                    }
                                    return FUN_0c04d76c();
                                }
                                return FUN_0c04a99c();
                            }
                            return game_mode_handler_6();
                        }
                        return FUN_0c05bd22();
                    }
                    return FUN_0c04a556();
                }
                return FUN_0c045fe0();
            }
            return FUN_0c045a38();
        }
        return FUN_0c045392();
    }
    return FUN_0c05bae8();
}

int FUN_0c05a0b8(void)
{
    register int t0;

    FUN_0c18020e(0xC242340, 0x0);
    t0 = 0x0;
    for (;;) {
        FUN_0c18098e(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    FUN_0c035bf0(0x53);
    FUN_0c1803fc(0xCB00000, 0x1);
    FUN_0c05aab6(0x0, 0x20);
    FUN_0c035bf0(0x51);
    FUN_0c1803fc(0xCB00000, 0x2);
    FUN_0c05a40c(0x1);
    FUN_0c18106a(0x1, 0x1, 0x0);
    (((struct o0_uint *)0xC46DE80)->v) = (FUN_0c2b431c(0x1, 0xC413CF8, 0x2D0C4));
    (((struct o4_uint *)0xC46DE80)->v) = (FUN_0c2b431c(0x2, 0xC440DBC, 0x2D0C4));
    FUN_0c05a418(0x7F, 0x7F);
    FUN_0c05a4a6(0x0, 0x7F);
    FUN_0c05a4a6(0x1, 0x7F);
    FUN_0c05a4a6(0x2, 0x7F);
    t0 = 0x3;
    for (;;) {
        FUN_0c05a4a6(t0, 0x7C);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    FUN_0c05a4a6(0x7, 0x7C);
    return FUN_0c05b15c();
}

int FUN_0c0220c4(int a4, int a5, int a6)
{
    int stk[97];
    register int t42;
    int t8;
    register int t57;
    int t31;
    int t46;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c1864e0((*(int *)0xC309994), a4, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), (*(int *)(((int)stk + 0))), 0x1);
    FUN_0c1864e0((*(int *)0xC309994), a6, 0x1);
    if (((*(signed char *)((a4 + 0x0))) == 95) && (t8 = *(signed char *)((a6 + 0x0)), t8 == 1)) {
        (((struct o2_ushort *)0xC30AF94)->v) = (((((struct o2_short *)0xC30AF94)->v)) + 0x1);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x5E;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        t57 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
    } else {
        if (((*(signed char *)((a4 + 0x0))) == 103) && (t31 = *(signed char *)((a6 + 0x0)), t31 == 4)) {
            t57 = FUN_0c1864e0((*(int *)0xC309994), 0xC30AF9B, 0x1);
            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x3;
            (((struct o6_uchar *)0xC30AF94)->v) = ((*(signed char *)0xC30AF9A) + 0x1);
        } else {
            t42 = *(signed char *)((a4 + 0x0));
            t57 = t42;
            if (t42 == 111) {
                t57 = *(signed char *)((a6 + 0x0));
                if ((t57 == 3) && (t46 = (((struct o0_short *)0xC30AF94)->v), (int)t46 >= 0)) {
                    (((struct o0_ushort *)0xC30AF94)->v) = 0x1;
                }
            }
        }
    }
    return t57;
}

int FUN_0c081d1e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t17;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x9;
    FUN_0c081dfc(a4, a5, a6, a7);
    *(int *)((int)stk + 8) = 0x22;
    *(int *)((int)stk + 4) = 0x5;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x22, 0xFFFFFFFF, 0x5, 0x22);
    t2 = *(int *)(((0x118 + a4) + 0x4));
    t3 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t4 = *(int *)(((0x118 + a4) + 0x4));
    t5 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t4))->v) = 1.0f;
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t4))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    t6 = *(signed char *)(((int)stk + 12));
    if (t6 != 0) {
        if (t6 != 1) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o384C_uint *)(a4))->v) = (FUN_0c07d666((a4 + 0x28), (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC5324C0)));
            t17 = 0x0;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o384C_uint *)(a4))->v) = (FUN_0c07d666((a4 + 0x28), (((((struct o3764_int *)(a4))->v)) + 0x28)));
            t17 = 0x1;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o384C_uint *)(a4))->v) = (FUN_0c07d666((a4 + 0x28), (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC5324C0)));
        t17 = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = t17;
    return 0x15;
}

int FUN_0c101c2c(void)
{
    int stk[2];
    register int t17;
    register int t18;

    if ((unsigned char)(*(signed char *)0xC541F43) == 0) {
        *(unsigned char *)0xC541F43 = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c0527e6();
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o0_uint *)0xC542440)->v) = 0xFF4040F0;
        (((struct o4_uint *)0xC542440)->v) = 0xFF4040F0;
        (((struct o8_uint *)0xC542440)->v) = 0xFF404080;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    }
    dbg_set_cell_size(0x20, 0x20);
    FUN_0c17a550(0xFFFFFF3F);
    FUN_0c17a4c0(0x2, 0x2);
    FUN_0c17a360(0xC1FC4D0);
    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFF1FFF3F);
    FUN_0c17a4c0(0x5, 0x7);
    FUN_0c17a360(0xC1FC4DC);
    dbg_set_cell_size(0x8, 0x8);
    t17 = FUN_0c05f22c(0x40);
    if (t17 == 0) {
        t18 = FUN_0c05f22c(0x8000);
        if (t18 != 0) {
            FUN_0c05f222();
        }
    } else {
        FUN_0c05f222();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c02917c(void)
{
    int stk[99];
    register int t0;
    register int t21;
    int t3;

    t0 = FUN_0c022050();
    t21 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 103) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 1)) {
            FUN_0c1864e0((*(int *)0xC309994), 0xC309993, 0x1);
            (((struct o0_uchar *)0xC309993)->v) = ((*(signed char *)0xC309993) - 1);
            *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
            (((struct o12_uchar *)0xC30540C)->v) = 0x0;
            (((struct o8_uchar *)0xC30540C)->v) = 0x0;
            (((struct o0_ushort *)0xC30540C)->v) = 0x0;
            (((struct o13_uchar *)0xC30540C)->v) = (*(signed char *)0xC309E06);
            FUN_0c01e9e4();
            FUN_0c01b0fc();
            *(unsigned short *)0xC30EF6C = 0x0;
            t21 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t21 = (FUN_0c02aa9e());
            } else {
                t21 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t21;
}

int FUN_0c05c9a6(void)
{
    int stk[2];
    register int t18;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        *(unsigned short *)0xC541F4E = 0x12C;
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c036de8(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        game_reset_objects();
        FUN_0c059c7a(0x16, 0x0);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c14e8d0();
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    }
    t18 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t18 - 1);
    if ((short)(t18 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    FUN_0c03f40c(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c07c364(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(int *)((((t0 << 2) << 1) + 0xC2593D8));
    if ((*(short *)((((((t0 << 1) + t0) << 2) + 0xC471A9C) + 0x0))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t2 = *(short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x0));
        *(unsigned short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x0)) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c0f4202(t1, ((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x4), 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x1));
    t2 = *(short *)((((((t0 << 1) + t0) << 2) + 0xC471A9C) + 0x2));
    if (t2 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t3 = *(short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x2));
        *(unsigned short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x2)) = (t3 - 1);
        if ((short)(t3 - 1) == 0) {
            return pdVibMxStop(t1);
        }
        return (short)(t3 - 1);
    }
    return t2;
}

int FUN_0c024688(void)
{
    int stk[36];
    register int t1;
    register int t6;
    register int t13;

    FUN_0c013f2e();
    t1 = FUN_0c022050();
    t13 = t1;
    if (t1 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t13 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t6 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t6 + 0x1);
    if ((int)(short)(t6 + 0x1) >= (int)0x14) {
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x6;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = ((*(signed char *)0xC305414) + 0x1);
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o0_uchar *)0xC309859)->v) = 0xD;
        (((struct o1_uchar *)0xC309859)->v) = 0x6;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        (((struct o9_uchar *)0xC305415)->v) = 0x0;
        (((struct o8_uchar *)0xC305415)->v) = 0x0;
        (((struct o0_uchar *)0xC305415)->v) = 0x0;
        t13 = (FUN_0c01e9e4());
    }
    return t13;
}

int FUN_0c0290a2(void)
{
    int stk[100];
    register int t0;
    register int t20;
    register int t11;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 + 0x1);
    t20 = (short)(t0 + 0x1);
    if ((short)(t0 + 0x1) == 16) {
        t20 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
    }
    if ((int)(*(short *)0xC30EF6C) >= (int)0x24) {
        *(unsigned short *)0xC30EF6C = 0x0;
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x77;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
        t11 = FUN_0c022050();
        t20 = t11;
        if (t11 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
            if ((*(signed char *)0xC30AF9A) != 0) {
                t20 = (FUN_0c02aa9e());
            } else {
                t20 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
            }
        }
    }
    return t20;
}

int FUN_0c028600(int a4, int a5)
{
    int stk[33];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a5;
    v0_4 = *(signed char *)0xC30985B;
    v0_0 = (v0_4);
    v0_1 = (0xC30EF64);
    v0_2 = (0x0);
    v0_3 = (0xC30985B);
    if ((v0_4 == 0)) goto L_C028622;
    if ((v0_0 == 1)) goto L_C028638;
    L_C028688:;
    return v0_0;
    L_C028638:;
    v0_4 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_4 + 0x1);
    v0_0 = ((short)((v0_4 + 0x1) - 1));
    if (((int)(short)((v0_4 + 0x1) - 1) < (int)0x20)) goto L_C028688;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x3;
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    FUN_0c0185b4();
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned char *)0xC30AF9A = v0_2;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    v0_0 = (v0_2);
    goto L_C028688;
    L_C028622:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    goto L_C028638;
}

int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8)
{
    register int t26;
    register int t17;

    t26 = 0x0;
    if ((*(int *)(((a7 << 2) + 0xC4B4124))) == 0) {
        FUN_0c035c1a(a5, 0xCB00000, a6, a7);
        FUN_0c187a88((*(int *)((a8 + 0x0))), (((((struct o0_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o4_int *)0xCB00000)->v)));
        FUN_0c0377b2((*(int *)((a8 + 0x0))));
        if (a4 != 0) {
            FUN_0c035c44((((((struct o8_int *)0xCB00000)->v)) + 0xCB00000), ((((struct oC_int *)0xCB00000)->v)));
            t17 = (*(int *)0xC3BD45C);
        } else {
            t17 = (((((struct o8_int *)0xCB00000)->v)) + 0xCB00000);
        }
        t26 = FUN_0c035d74((*(int *)((a8 + 0x0))), a6, t17);
        *(unsigned int *)(((a7 << 2) + 0xC4B4124)) = 0x1;
    }
    return t26;
}

int FUN_0c11f9c8(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c11fb16();
    t2 = t1;
    if ((a4 == t1) && (((((int)a5 > 0) && ((int)a5 <= (int)0x79)) || (((int)a5 >= (int)0x81) && ((int)a5 <= (int)0x8F))) && (t0 = *(short *)0xC475210, (int)(unsigned short)t0 < (int)0x3E7))) {
        t1 = (unsigned short)t0;
        t0 = 0x3E7;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(unsigned short)(*(short *)0xC475210)) {
                break;
            }
            t0 = t3;
            t0 = (t0 << 1);
            t0 = (t0 + 0xC475212);
            t1 = (*(short *)((t0 + 0x0)));
            t1 = (unsigned short)t1;
            if (t1 != (unsigned short)a6) {
                t3 = (t3 + 0x1);
                continue;
            }
            return 0x164;
        }
        t0 = *(short *)0xC475210;
        *(unsigned short *)0xC475210 = (t0 + 0x1);
        *(unsigned short *)(((((unsigned short)((t0 + 0x1) - 1) << 1) + 0xC475212) + 0x0)) = a6;
        *(unsigned char *)(((a5 + 0xC4750E0) + 0x0)) = ((*(signed char *)(((a5 + 0xC4750E0) + 0x0))) + 0x1);
        t2 = 0x164;
    }
    return t2;
}
