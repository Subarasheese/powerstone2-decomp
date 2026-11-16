/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_int { char p[0x377C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int);
int FUN_0c04b23c(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int FUN_0c0b77f0(int a4);
int FUN_0c04cefa(int a4, int a5, int a6, int a7);
int FUN_0c0d2880(int a4, int a5, int a6);

int FUN_0c0b77f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    float u0;
    register float u1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o16_uchar *)(a4))->v) = 0x4;
        t0 = 0x16;
    } else {
        if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
            t1 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
            if ((t1 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
                u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
                u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
                u1 = math_signed_sqrt(u0);
                if (((((struct o0_float *)0xC0B79C0)->v)) > u1) {
                    u0 = (((struct o4_float *)0xC0B79C0)->v);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
                }
            }
        }
        t1 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t1 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x5, (t2), 0x2, 0x5);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c04cefa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x1, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((int)(*(int *)((a4 + 0x38))) > (int)0xFFFFF1C8) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x222);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xB6);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = ((*(short *)((a4 + 0x1E))) & 0x1);
            if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xE) {
                return FUN_0c03f346(a4);
            }
            return 0xE;
        }
        t1 = t0;
        if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xD) {
        } else {
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o28_float *)(a4))->v) = 50.0f;
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = 109.0f;
            FUN_0c0582de((a4 + 0x28), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
            (((struct o4C_float *)(a4))->v) = 30.0f;
            (((struct o50_float *)(a4))->v) = 20.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = (((((((struct o4_float *)0xC1B7EEC)->v)) + 2650.0f) * (1.0f + 1.0f)) / 14400.0f);
            u0 = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
            u0 = -u0;
            (((struct o58_float *)(a4))->v) = (u0 / 120.0f);
            u0 = (-(((((struct o50_float *)(a4))->v)) * 120.0f));
            (((struct o5C_float *)(a4))->v) = ((((u0 + ((((struct o0_float *)0xC1B7EEC)->v))) + -200.0f) * (1.0f + 1.0f)) / 14400.0f);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x28;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xD) {
    } else {
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = 50.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 109.0f;
        FUN_0c0582de((a4 + 0x28), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        (((struct o4C_float *)(a4))->v) = 30.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = (((((((struct o4_float *)0xC1B7EEC)->v)) + 2650.0f) * (1.0f + 1.0f)) / 14400.0f);
        u0 = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
        u0 = -u0;
        (((struct o58_float *)(a4))->v) = (u0 / 120.0f);
        u0 = (-(((((struct o50_float *)(a4))->v)) * 120.0f));
        (((struct o5C_float *)(a4))->v) = ((((u0 + ((((struct o0_float *)0xC1B7EEC)->v))) + -200.0f) * (1.0f + 1.0f)) / 14400.0f);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    return 0x15;
}

int FUN_0c0d2880(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;

    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c187798(a4, a5, a6);
    u0 = (((struct o4_float *)((0xC1C7E50 + ((a5 << 2) << 1))))->v);
    u1 = *(float *)(((0xC1C7E50 + ((a5 << 2) << 1)) + 0x0));
    u2 = (((struct o4_float *)((0xC1C7E80 + ((a5 << 2) << 1))))->v);
    u3 = *(float *)(((0xC1C7E80 + ((a5 << 2) << 1)) + 0x0));
    t1 = (0xC1C7E68 + ((a5 << 2) << 1));
    if (a5 == 1) {
    } else {
        t2 = *(signed char *)((a4 + 0x2));
        t1 = ((0xC1C7E20 + ((((t2 << 1) + t2) << 2) << 1)) + 0x10);
    }
    u4 = *(float *)((t1 + 0x0));
    u5 = (((struct o4_float *)(t1))->v);
    t1 = 0x0;
    u6 = u4;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 + (0xC4 + a4));
        t2 = (*(int *)((t2 + 0x0)));
        if (a5 == 1) {
            u6 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x80));
            u7 = (*(float *)(((0xC1C7E68 + ((a5 << 2) << 1)) + 0x0)));
            u6 = (u6 / 128.0f);
        } else {
            t3 = *(signed char *)((a4 + 0x2));
            u6 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x80));
            u6 = (u6 / 128.0f);
            u7 = (*(float *)((0xC1C7E30 + ((((t3 << 1) + t3) << 2) << 1))));
        }
        u8 = (u5 - u4);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o70_float *)(t2))->v) = u7;
        u8 = (u0 - u1);
        u7 = (*(float *)(((0xC1C7E50 + ((a5 << 2) << 1)) + 0x0)));
        u6 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x80));
        u6 = (u6 / 128.0f);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o6C_float *)(t2))->v) = u7;
        u8 = (u2 - u3);
        u6 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x80));
        u7 = (*(float *)(((0xC1C7E80 + ((a5 << 2) << 1)) + 0x0)));
        t1 = (t1 + 0x1);
        u6 = (u6 / 128.0f);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o74_float *)(t2))->v) = u7;
    }
    t1 = a6;
    if (a6 == 2) {
        t2 = 0x0;
        t3 = t0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0xC4 + a4));
            t3 = (*(int *)((t3 + 0x0)));
            t2 = (t2 + 0x1);
            *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
            (((struct o14_float *)(t3))->v) = 1.0f;
        }
        t1 = 0xC0;
    }
    return t1;
}
