/* Straight-line functions with calls and guards (batch gen_ko): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c07e420(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c15e078(int a4);
int FUN_0c12f69c(int a4, int a5);
int FUN_0c162c4e(int a4, int a5, int a6, int a7);
int FUN_0c0eaf38(int a4, int a5, int a6, int a7, float f4);

int FUN_0c15e078(int a4)
{
    int stk[6];
    register int t0;
    register int t23;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t22;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x8);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15DF9C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (((short)(*(signed char *)(((int)stk + 8))) * (short)0x3938) + 0xC532498);
        t3 = 0xC203808;
        t4 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            FUN_0c03744a(t6, 0x0, 0x21, (*(int *)0xC4B40CC));
            t9 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            thunk_FUN_0c058310(((*(int *)((((t9 << 2) + (0xC4 + (*(int *)(((int)stk + 4))))) + 0x0))) + 0x28), (((int)stk + 0) + 0xC));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) + -15.0f));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) + -15.0f));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) + -15.0f));
            FUN_0c187798();
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            *(unsigned short *)((t6 + 0x6)) = 0x21;
            (((struct o8C_float *)(t6))->v) = 1.0f;
            (((struct o88_float *)(t6))->v) = 1.0f;
            (((struct o84_float *)(t6))->v) = 1.0f;
            t22 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t22 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)(signed char)(t22 + 0x1) >= (int)0x8) {
                break;
            }
        }
        t23 = 0x84;
    }
    return t23;
}

int FUN_0c12f69c(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t38;
    register int t3;
    register int t15;
    register int t2;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201E68));
    t38 = t1;
    if (t1 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = 0xC4;
            t2 = t3;
            t2 = (t2 << 2);
            t4 = (t4 + t1);
            t4 = (t4 + t2);
            t4 = (*(int *)((t4 + 0x0)));
            FUN_0c03744a(t4, (*(int *)((t2 + 0xC201E64))), 0x0, (*(int *)((((*(signed char *)(((0x1 + a4) + 0x0))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t4 + 0x6)) = 0x41F;
            t3 = (t3 + 0x1);
            (((struct o14_float *)(t4))->v) = 1.0f;
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC12F828;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        *(unsigned short *)((t1 + 0x1C)) = 0x14;
        *(unsigned short *)((t1 + 0x1E)) = 0x32;
        (((struct o20_ushort *)(t1))->v) = 0x40;
        (((struct o15_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
        t15 = *(signed char *)(((int)stk + 0));
        if (t15 != 0) {
            t38 = t15;
            if (t15 != 10) {
            } else {
                (((struct o14_uchar *)(t1))->v) = 0xA;
                (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + 0.0f);
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                (((struct o30_float *)(t1))->v) = (((((struct o30_float *)(t1))->v)) + 0.0f);
                *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) - 0x4000);
                *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x4000);
                t38 = 0x30;
            }
        } else {
            (((struct o14_uchar *)(t1))->v) = 0xA;
            (((struct oA4_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
            (((struct o28_float *)(t1))->v) = -20.0f;
            (((struct o2C_float *)(t1))->v) = 0.0f;
            (((struct o30_float *)(t1))->v) = 0.0f;
            *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) + 0x4000);
            *(unsigned int *)((t1 + 0x3C)) = ((*(int *)((t1 + 0x3C))) + 0x38E);
            t38 = 0x30;
        }
    }
    return t38;
}

int FUN_0c162c4e(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t35;
    register int t17;
    register float u24;
    register float u26;
    register int t29;
    register int t30;
    register float u31;
    register int t28;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t1 = *(int *)((((*(signed char *)0xC542237) << 2) + 0xC2A2FD8));
    t3 = *(int *)(((t1 + (a5 * 0x2C)) + 0x4));
    t4 = *(int *)(((*(int *)(((t1 + (a5 * 0x2C)) + 0x0))) + 0x0));
    t5 = FUN_0c037320(t3, t4);
    t6 = FUN_0c03f444(0x1, 0x0, t5);
    t35 = t6;
    if (t6 != 0) {
        FUN_0c03733c(t6, t3, t4);
        *(unsigned int *)((t6 + 0x4)) = 0xC1629B0;
        *(unsigned char *)((t6 + 0x1)) = (*(int *)(((int)stk + 16)));
        (((struct o15_uchar *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x14)));
        (((struct oAC_ushort *)(t6))->v) = 0xF;
        (((struct oA9_uchar *)(t6))->v) = 0x21;
        if ((*(int *)(((t1 + (a5 * 0x2C)) + 0xC))) == 0) {
            FUN_0c07e3fc(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        } else {
            FUN_0c07e420(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        }
        *(int *)((int)stk + 12) = 0x0;
        t17 = *(int *)(((int)stk + 16));
        *(unsigned short *)(((int)stk + 20)) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 8) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t6, 0x3, (*(int *)(((t1 + (a5 * 0x2C)) + 0x8))), 0x1, 0x100, (~((int)0x1 << (int)t17)), (~((int)0x1 << (int)t17)), 0x0);
        *(volatile int *)(((int)stk + 28));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 24));
        FUN_0c187798();
        u24 = (((struct o20_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o48_float *)(t6))->v) = u24;
        (((struct o44_float *)(t6))->v) = u24;
        (((struct o40_float *)(t6))->v) = u24;
        (((struct o5C_float *)(t6))->v) = ((((struct o1C_float *)((t1 + (a5 * 0x2C))))->v));
        u26 = (((struct o28_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o60_float *)(t6))->v) = u26;
        (((struct o22_ushort *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x18)));
        t29 = t28;
        t30 = 0x0;
        u31 = u26;
        for (;;) {
            if ((int)t30 >= (int)((((struct oC0_int *)(t6))->v))) {
                break;
            }
            t29 = t30;
            t29 = (t29 << 2);
            t29 = (t29 + (0xC4 + t6));
            t29 = (*(int *)((t29 + 0x0)));
            *(unsigned short *)((t29 + 0x6)) = 0x1F;
            u31 = ((((struct o24_float *)((t1 + (a5 * 0x2C))))->v));
            t30 = (t30 + 0x1);
            (((struct o8C_float *)(t29))->v) = u31;
            (((struct o88_float *)(t29))->v) = u31;
            (((struct o84_float *)(t29))->v) = u31;
        }
        t35 = 0xC0;
    }
    return t35;
}

int FUN_0c0eaf38(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        t0 = *(signed char *)((a4 + 0x2));
        switch (t0) {
        case 0:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o54_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        case 1:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o54_float *)(a4))->v) = -2.0f;
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        case 2:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        default:
            if ((t0 != 4) && (t0 != 5)) {
                if ((t0 == 3) || ((t0 == 6) || (t0 == 7))) {
                    (((struct o4C_float *)(a4))->v) = 1.0f;
                }
            } else {
                (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            }
            break;
        }
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && ((t0 != 1) && (t0 != 2))) {
        if ((t0 != 4) && (t0 != 5)) {
            if ((t0 == 3) || ((t0 == 6) || (t0 == 7))) {
                if ((int)(*(int *)((a4 + 0x3C))) >= (int)0xFFFFC000) {
                    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0xB6);
                } else {
                    *(unsigned int *)((a4 + 0x3C)) = 0xFFFFC000;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0x444);
        }
    } else {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0xB6);
        u0 = *(float *)0xC0EB0F0;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2D) {
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
