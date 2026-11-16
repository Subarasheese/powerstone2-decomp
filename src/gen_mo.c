/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c0582ac(int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c179ac0(void);
float FUN_0c17c450(int);
int FUN_0c187798(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c122ef4(int a4);
int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5);

int FUN_0c122ef4(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t4))->v) = (((((struct o7C_int *)(t4))->v)) + ((int)((int)(FUN_0c179ac0()) % (int)0x64)));
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 != 1) {
            if (t5 != 2) {
                return t5;
            }
            return FUN_0c03f346(a4);
        }
        (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) + 0.100000001f);
        (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.100000001f);
        if (((((struct o84_float *)(t4))->v)) > 0.5f) {
            u0 = (((struct o18_float *)(t4))->v);
            (((struct o18_float *)(t4))->v) = (u0 * 0.699999988f);
            (((struct o20_float *)(t4))->v) = (u0 * 0.699999988f);
            (((struct o1C_float *)(t4))->v) = (u0 * 0.699999988f);
            if (0.100000001f > ((((struct o18_float *)(t4))->v))) {
                (((struct o18_float *)(t4))->v) = 1.0f;
                (((struct o20_float *)(t4))->v) = 1.0f;
                (((struct o1C_float *)(t4))->v) = 1.0f;
                (((struct o8C_float *)(t4))->v) = 0.100000001f;
                (((struct o84_float *)(t4))->v) = 0.100000001f;
            }
        }
        t5 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
        if (((int)(short)(t5 - 1) > 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) + 0.100000001f);
    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.100000001f);
    if (((((struct o84_float *)(t4))->v)) > 0.5f) {
        u0 = (((struct o18_float *)(t4))->v);
        (((struct o18_float *)(t4))->v) = (u0 * 0.699999988f);
        (((struct o20_float *)(t4))->v) = (u0 * 0.699999988f);
        (((struct o1C_float *)(t4))->v) = (u0 * 0.699999988f);
        if (0.100000001f > ((((struct o18_float *)(t4))->v))) {
            (((struct o18_float *)(t4))->v) = 1.0f;
            (((struct o20_float *)(t4))->v) = 1.0f;
            (((struct o1C_float *)(t4))->v) = 1.0f;
            (((struct o8C_float *)(t4))->v) = 0.100000001f;
            (((struct o84_float *)(t4))->v) = 0.100000001f;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if (((int)(short)(t0 - 1) > 0) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x3715 + t2)), t3 == 26)) {
        t0 = t3;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    register int t0;
    register float u6;
    register float u9;
    float u13;

    t1 = a5;
    t2 = a6;
    t5 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            return 0x0;
        }
        if (t5 != (*(signed char *)((a4 + 0x1)))) {
            t1 = 0x3938;
            t2 = 0xC532498;
            t0 = (*(signed char *)((((t5 * t1) + t2) + 0x3714)));
            if ((t0 != 0) && (u13 = (((struct o160_float *)(((t5 * t1) + t2)))->v), u13 > 0.0f)) {
                t0 = 0xC187798;
                FUN_0c187798(((t5 * t1) + t2), t1, t2);
                t1 = ((int)stk + 0);
                u9 = 0.0f;
                t1 = (t1 + 0xC);
                *(float *)(((int)stk + 4)) = u9;
                math_mat_get_translate((a4 + 0x64), t1);
                t2 = ((int)stk + 0);
                t1 = ((int)stk + 0);
                *(float *)(((int)stk + 16)) = u9;
                t2 = (t2 + 0xC);
                FUN_0c0e2390((((int)stk + 0) + 0xC), t1, t2);
                u6 = (FUN_0c17c450((((int)stk + 0) + 0xC)));
                u7 = u6;
                u8 = ((((struct o0_float *)0xC149030)->v));
                if (!(u8 > u7)) {
                    u8 = ((((struct o4_float *)0xC149030)->v));
                    if (u8 > u7) {
                        *(float *)(((int)stk + 4)) = u9;
                        t1 = a4;
                        u7 = 1.0f;
                        t1 = (t1 + 0x64);
                        *(float *)(((int)stk + 0)) = u9;
                        *(float *)(((int)stk + 8)) = u7;
                        FUN_0c0582ac(((int)stk + 0), t1);
                        *(float *)(((int)stk + 4)) = u9;
                        u6 = (FUN_0c17c450(((int)stk + 0)));
                        u9 = ((((struct o10_float *)0xC149030)->v));
                        t1 = ((int)stk + 0);
                        u6 = (FUN_0c0e2220((((int)stk + 0) + 0xC), t1));
                        if (!(u9 > u6)) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = t5;
    return 0x1;
}
