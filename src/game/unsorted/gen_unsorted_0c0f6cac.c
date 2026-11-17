/* game/unsorted: functions 0C0F6CAC-0C0F78D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0527e6(void);
int FUN_0c057cfa(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int FUN_0c0f6cac(void);
int FUN_0c0f6d16(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f70cc(void);
int FUN_0c0f71b8(int a4);
int FUN_0c0f7462(void);
int FUN_0c0f74ac(int a4);
int FUN_0c0f74c0(int a4);
int FUN_0c0f7552(int a4);
int FUN_0c0f7624(int a4);
int FUN_0c0f7688(int a4);
int FUN_0c0f780e(int a4);
int FUN_0c0f7874(void);

int FUN_0c0f6cac(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC5429A8;
    t1 = 0x0;
    if (t0 != 0) {
        t2 = 0x0;
        if (t0 != 3) {
            t3 = 0x0;
            if (t0 != 2) {
                t3 = 0x1;
                if (t0 == 4) {
                    t3 = 0x0;
                }
            }
            t2 = t3;
        }
        t3 = t0;
        t1 = t2;
    }
    t0 = t3;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((((t1 << 2) << 1) + 0xC1FB1A0) + 0x4)))) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 2);
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t3 = (t3 + (*(int *)(((((t1 << 2) << 1) + 0xC1FB1A0) + 0x0))));
        t0 = (FUN_0c057cfa((t3 + 0x4), (*(int *)((t3 + 0x0)))));
        t2 = (t2 + 0x1);
    }
    return t0;
}

int FUN_0c0f6d16(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = 1.0f;
        u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
        (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
        (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x78;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xAAA;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = 1.0f;
        u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
        (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
        (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x78;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xAAA;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t0 = (((struct o20_short *)(a4))->v);
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        (((struct o40_float *)(a4))->v) = (((((float)t0 / 960.0f) * u0)) + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f - ((((float)t0 / 960.0f) * u0)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 3000.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 3:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 32768.0f));
        (((struct o40_float *)(a4))->v) = (1.0f - ((u0 * 0.5f)));
        (((struct o44_float *)(a4))->v) = (((u0 * 0.5f)) + 1.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xE38;
        }
        break;
    case 4:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        u1 = (((float)t1 * 0.100000001f) / 60.0f);
        (((struct o40_float *)(a4))->v) = (((u1 * u0)) + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f - ((u1 * u0)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 5:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t0 = *(short *)((a4 + 0x1C));
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        u1 = (((float)t0 * 0.100000001f) / 60.0f);
        u2 = (u1 * u0);
        (((struct o40_float *)(a4))->v) = (1.0f - ((u1 * u0)));
        (((struct o44_float *)(a4))->v) = (u2 + 1.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0187500007f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            FUN_0c0f74c0(a4);
            t0 = FUN_0c0f780e(a4);
            FUN_0c0f7624(t0);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x12);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
                t0 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x111) {
                    (((struct o22_ushort *)(a4))->v) = 0x111;
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                    t0 = 0x16;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o22_short *)(a4))->v)));
            t1 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
                (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x6AAA;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
        t0 = 0x22;
        if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
            (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t0 = 0x16;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0f70cc(void)
{
    register int t0;
    register int t10;
    register int t2;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t10 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t1) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            *(volatile int *)((((0xC4 + t0) + t1) + 0x0));
            FUN_0c187798();
            t2 = (t2 + 0x1);
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F6D16;
        (((struct o28_float *)(t0))->v) = 0.1875f;
        (((struct o2C_float *)(t0))->v) = 0.3046875f;
        (((struct o30_float *)(t0))->v) = -5.0f;
        (((struct o44_float *)(t0))->v) = 0.125f;
        (((struct o40_float *)(t0))->v) = 0.125f;
        (((struct o48_float *)(t0))->v) = 0.00156250002f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t10 = 0xA9;
    }
    return t10;
}

int FUN_0c0f71b8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = (((struct oD8_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oD4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        *(volatile int *)((a4 + 0xD8));
        t1 = ((int (*)(int))(FUN_0c18778c))(a4);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1FB1D4);
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    t1 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x10);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x100;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 5);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        break;
    }
    if (((*(signed char *)((a4 + 0x15))) != (*(signed char *)((a4 + 0x16)))) && (t0 = *(signed char *)((a4 + 0x15)), t0 == 1)) {
        (((struct o17_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x17));
    t1 = t0;
    if (t0 == 0) {
    } else {
        if (t0 == 1) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x3);
            if ((int)((((struct o22_short *)(a4))->v)) > (int)0x40) {
                (((struct o22_ushort *)(a4))->v) = 0x40;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t2 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x40) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(volatile int *)((a4 + 0xD8));
                t2 = (((int (*)(int, int, int, float, float))(FUN_0c18778c))(0xC1FB1EC, 0xC1FB1FC, 0x40, ((float)t0 / 64.0f), u0));
            }
            t0 = t2;
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t0 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(volatile int *)((a4 + 0xD8));
                t0 = (((int (*)(int, int, float, float))(FUN_0c18778c))(0xC1FB1EC, 0xC1FB1FC, ((float)t2 / 64.0f), u0));
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0f7462(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x3, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x3, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F71B8;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0f74ac(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c0f74c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x5;
    if ((*(signed char *)0xC5429A8) == 0) {
        t0 = 0x4;
    }
    t1 = FUN_0c037320(t0, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x8, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, t0, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0F74AC;
        (((struct oA4_uint *)(t2))->v) = (a4 + 0x64);
        t1 = 0xA4;
    }
    return t1;
}

int FUN_0c0f7552(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((t1 + 0x15))) != (*(signed char *)((t1 + 0x16)))) && (t0 = *(signed char *)((t1 + 0x15)), t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0222222228f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t1 = 0xB8;
    }
    return t1;
}

int FUN_0c0f7624(int a4)
{
    register int t0;
    register int t7;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), ((((struct o0_int *)0xC1FB20C)->v)), ((((struct o4_int *)0xC1FB20C)->v)), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F7552;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((a4 + 0x10))) + 0x64);
        *(unsigned int *)((t0 + 0x10)) = a4;
        t7 = 0xA4;
    }
    return t7;
}

int FUN_0c0f7688(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    }
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 8);
                (((struct oB4_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                    }
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t1 = 0xB8;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x40);
            (((struct oB4_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x100;
                (((struct o15_uchar *)(a4))->v) = 0x2;
            }
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            t0 = 0xB8;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        t1 = t0;
        if ((int)t0 >= 0) {
        } else {
            t0 = FUN_0c179ac0();
            t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t3 = (t0 & 0x1);
            }
            FUN_0c03733c(a4, (t3 + 0x7), (*(int *)0xC4B410C));
            if (t3 == 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 0x1) == 0) {
                    (((struct o40_float *)(a4))->v) = 1.0f;
                } else {
                    (((struct o40_float *)(a4))->v) = -1.0f;
                }
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                if ((((((struct o22_short *)(a4))->v)) & 0x1) != 0) {
                    (((struct o40_float *)(a4))->v) = -1.0f;
                } else {
                    (((struct o40_float *)(a4))->v) = 1.0f;
                }
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
    }
    return t1;
}

int FUN_0c0f780e(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x7, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x21F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0F7688;
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
    }
    return t2;
}

int FUN_0c0f7874(void)
{
    int stk[1];
    register int t0;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        
        return (unsigned char)t0;
    }
    *(unsigned char *)0xC541F43 = ((*(signed char *)0xC541F43) + 0x1);
    FUN_0c0f70cc();
    FUN_0c0f7462();
    (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
    FUN_0c03ea04(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    return FUN_0c0527e6();
}
