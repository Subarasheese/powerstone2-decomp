/* Straight-line functions with calls and guards (batch gen_nd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c060e70(int, int);
int FUN_0c060ee6(int, int);
int FUN_0c0641ca(int, int);
int FUN_0c06485a(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c142960(int a4);
int FUN_0c06494c(void);
int FUN_0c1417aa(int a4);

int FUN_0c142960(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.125f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0625f);
        if (!(((((struct o44_float *)(a4))->v)) > 0.5f)) {
            return FUN_0c03f346(a4);
        }
        return 0x44;
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.200000003f);
    t0 = 0x44;
    if (!(1.0f > ((((struct o44_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c06494c(void)
{
    int stk[2];
    int t0;
    register int t3;
    register int t9;
    register int t11;
    register int t19;
    register int t13;
    register int t14;
    register int t15;
    register int t23;
    register int t16;
    register int t17;
    register int t18;

    t0 = 0x0;
    for (;;) {
        FUN_0c0641ca((*(signed char *)0xC542237), t0);
        t3 = *(signed char *)0xC542237;
        if (((*(signed char *)0xC542237) == 1) && (t0 == 0)) {
            FUN_0c060e70(t3, t0);
        } else {
            FUN_0c060ee6(t3, t0);
        }
        FUN_0c06485a();
        *(unsigned int *)(((int)stk + 4)) = (0xC471A2C + ((t0 << 2) << 2));
        *(unsigned int *)(((int)stk + 0)) = (0xC46E1EC + (t0 * 0x12C0));
        t9 = 0x0;
        for (;;) {
            t11 = *(int *)(((t9 << 2) + 0xC4F90AC));
            *(unsigned int *)((((*(int *)(((int)stk + 4))) + (t9 << 2)) + 0x0)) = t11;
            *(volatile int *)(((int)stk + 0));
            t19 = 0xC4F90AC;
            if ((int)t11 > 0) {
                t13 = 0x0;
                t14 = 0x0;
                for (;;) {
                    t15 = FUN_0c187798(t13, t9, t14);
                    t14 = (t16 + 0x1);
                    t13 = (t18 + 0xC);
                    if ((int)t14 >= (int)t17) {
                        break;
                    }
                }
                t19 = t15;
            } else {
                t23 = t9;
            }
            t9 = (t23 + 0x1);
            if ((int)t9 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t19;
}

int FUN_0c1417aa(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    thunk_FUN_0c058310(((*(int *)(((((*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC2022F8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (a4 + 0x28));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x444);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o84_float *)(t0))->v);
    (((struct o88_float *)(t0))->v) = u0;
    (((struct o8C_float *)(t0))->v) = u0;
    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.100000001f);
    u0 = (((struct oB4_float *)(a4))->v);
    (((struct oBC_float *)(a4))->v) = u0;
    (((struct oB8_float *)(a4))->v) = u0;
    if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
        return FUN_0c03f346(a4);
    }
    return 0xB0;
}
