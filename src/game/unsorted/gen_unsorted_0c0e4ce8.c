/* game/unsorted: functions 0C0E4CE8-0C0E4F76, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0d04c4(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c0e4ce8(int a4);
int FUN_0c0e4dac(int a4, int a5);
int FUN_0c0e4f58(int a4, int a5);

int FUN_0c0e4ce8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        if (-100.0f > ((((struct o2C_float *)(a4))->v))) {
            return FUN_0c03f346(a4);
        }
        return 0x2C;
    }
    return 0x50;
}

int FUN_0c0e4dac(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(int *)0xC4B410C;
    t1 = *(int *)(((((int)((int)(FUN_0c179ac0()) % (int)0x3)) << 2) + 0xC1CBD5C));
    t2 = FUN_0c037320(t1, t0);
    t0 = FUN_0c03f444(0x5, 0x0, t2);
    t2 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c03733c(t0, t1, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E4CE8;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = -0.5f;
        FUN_0c187798();
        t1 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((float)((((t1 << 2) + t1) << 2) << 1) + -200.0f));
        t1 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + ((float)((((t1 << 2) + t1) << 2) << 1) + -200.0f));
        t1 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - (float)(((t1 << 2) + t1) << 1));
        if (a5 != 0) {
            t1 = (0x7000 + (((int)((int)(FUN_0c179ac0()) % (int)0x1F)) << 8));
        } else {
            t1 = ((((int)((int)(FUN_0c179ac0()) % (int)0x3F)) << 8) << 2);
        }
        t3 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
        u0 = (((struct o0_float *)0xC0E4F7C)->v);
        (((struct o50_float *)(t0))->v) = (((((struct o4_float *)0xC0E4F7C)->v)) - ((float)t3 + u0));
        (((struct o54_float *)(t0))->v) = (((float)t3 + u0) * (math_cos_angle16(t1)));
        (((struct o4C_float *)(t0))->v) = (((float)t3 + u0) * (math_sin_angle16(t1)));
        t2 = 0x4C;
    }
    return t2;
}

int FUN_0c0e4f58(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x8;
    for (;;) {
        t1 = FUN_0c0e4dac(a4, a5);
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t1;
}
