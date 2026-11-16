/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0d04c4(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int FUN_0c0e4ce8(int a4);
int FUN_0c06e53c(int a4);
int FUN_0c0f4aac(int a4);
int FUN_0c0497d8(int a4, int a5, int a6, int a7);

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

int FUN_0c06e53c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    t2 = FUN_0c037bf6(a4);
    if (((unsigned char)t2 == 0) && ((t0 = *(signed char *)((a4 + 0x2)), t0 != 14) || (t1 = *(short *)((a4 + 0x1C)), (int)t1 <= (int)0x3C))) {
        return FUN_0c038362(a4);
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC06E660);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0f4aac(int a4)
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
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)0xC1CE300));
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x5B0);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x444);
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 <= 0) {
            return FUN_0c03f346(a4);
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        t1 = 0x28;
    }
    return t1;
}

int FUN_0c0497d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    t0 = 0xC532498;
    t1 = 0x0;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = (*(signed char *)((t0 + (0x3714))));
        t0 = (t0 + 0x3938);
        if (t2 != 0) {
            t1 = (t1 + 0x1);
        }
    }
    t0 = 0x0;
    if (t1 != 1) {
        t2 = 0x1;
        if (t1 != 2) {
            t3 = 0x3;
            if (t1 != 3) {
                t3 = 0x6;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    t2 = t1;
    t3 = 0xC1B7C64;
    t4 = t0;
    t5 = t0;
    t6 = t1;
    t1 = 0x0;
    t7 = ((((t0 << 1) + t0) << 2) + 0xC1B7C64);
    t0 = 0xC532498;
    t8 = 0xC532498;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = 0x3714;
        t3 = (*(signed char *)((t0 + t2)));
        if (t3 != 0) {
            t6 = 0x1D;
            t1 = 0x0;
            t5 = t8;
            t2 = (FUN_0c085cac(t5, t6, t1, a7));
            t4 = 0xC187798;
            t3 = t7;
            t2 = 0xC;
            t2 = (FUN_0c187798());
            t7 = (t7 + 0xC);
            *(unsigned int *)((t8 + 0x38)) = 0x8000;
        } else {
            t9 = t3;
            t10 = t4;
            t11 = t5;
            t12 = t6;
            t13 = t1;
        }
        t0 = (t0 + 0x3938);
        t3 = t9;
        t4 = t10;
        t5 = t11;
        t6 = t12;
        t1 = t13;
        t8 = (t8 + 0x3938);
    }
    return t2;
}
