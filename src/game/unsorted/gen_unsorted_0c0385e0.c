/* game/unsorted: functions 0C0385E0-0C038944, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o38CC_int { char p[0x38CC]; int v; };
struct o38CC_uint { char p[0x38CC]; unsigned int v; };
struct o38D0_int { char p[0x38D0]; int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_int { char p[0x38D4]; int v; };
struct o38D4_uint { char p[0x38D4]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c0385e0(int a4, int a5);
int FUN_0c0388e2(int a4, int a5, int a6, int a7);

int FUN_0c0385e0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    int t10;
    register int t11;

    t3 = 0x38D4;
    if ((int)((((struct o38D4_int *)(a4))->v)) >= 0) {
        t4 = (((struct o38D4_int *)(a4))->v);
        t5 = 0x38D0;
        if ((int)((((struct o38D0_int *)(a4))->v)) >= (int)t4) {
        } else {
            t6 = t4;
            t4 = a4;
            t7 = a5;
            for (;;) {
                t8 = (((struct o38D0_int *)(a4))->v);
                t9 = (((struct o38CC_int *)(a4))->v);
                if ((*(float *)(((((t8 << 2) << 2) + t9) + 0x0))) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                    break;
                }
                t10 = *(int *)(((((t8 << 2) << 2) + t9) + 0x4));
                t7 = 0xC1AAF7C;
                t4 = 0xC1AAB7C;
                t6 = 0xD;
                if ((unsigned int)t10 >= (unsigned int)t6) {
                    (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                    t6 = ((((struct o38D0_int *)(a4))->v));
                    if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                    return 0x38D0;
                }
                t6 = (t10 << 1);
                switch (t6) {
                    case 0:
                    {
                        t7 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        t4 = (*(signed char *)((a4 + 0x1)));
                        FUN_0c059df2(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 2:
                    {
                        t7 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        t4 = a4;
                        FUN_0c059e60(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 4:
                    {
                        if (((*(signed char *)((a4 + 0x2))) == 10) && (t0 = *(signed char *)((a4 + 0x371A)), t0 != 0)) {
                            t7 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                            t7 = (t7 << 2);
                            t7 = (*(int *)((t7 + 0xC1AAB6C)));
                        } else {
                            t7 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        }
                        t4 = a4;
                        FUN_0c059e60(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 6:
                    {
                        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                            return 0x160;
                        }
                        t10 = *(int *)0xC3BD87C;
                        *(unsigned int *)0xC3BD87C = ((t10 + 0x1) & 0x3);
                        if (((*(signed char *)((a4 + 0x2))) == 10) && (t1 = *(signed char *)((a4 + 0x371A)), t1 != 0)) {
                            t7 = 0x1;
                            t7 = (t7 & ((t10 + 0x1) & 0x3));
                            t7 = (t7 << 2);
                            t11 = 0xC1AAB64;
                        } else {
                            t7 = ((t10 + 0x1) & 0x3);
                            t7 = (t7 << 2);
                            t11 = 0xC1AAB54;
                        }
                        t7 = (*(int *)((t7 + t11)));
                        t4 = a4;
                        FUN_0c059e60(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 8:
                    {
                        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                            return 0x160;
                        }
                        t7 = 0x5;
                        t4 = a4;
                        FUN_0c059e60(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 10:
                    {
                        if ((*(signed char *)((a4 + 0x135))) != 0) {
                            t7 = (*(signed char *)((a4 + 0x135)));
                            t10 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        } else {
                            t7 = 0x5;
                            t10 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        }
                        t4 = (*(signed char *)((a4 + 0x1)));
                        FUN_0c059fae(t4, t7, t10);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 12:
                    {
                        if ((*(signed char *)((a4 + 0x135))) != 0) {
                            t7 = (*(signed char *)((a4 + 0x135)));
                        } else {
                            t7 = 0x5;
                        }
                        t4 = (*(signed char *)((a4 + 0x1)));
                        FUN_0c059f78(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 14:
                    {
                        if ((*(signed char *)((a4 + 0x135))) != 0) {
                            t7 = (*(signed char *)((a4 + 0x135)));
                        } else {
                            t7 = 0x5;
                        }
                        t4 = (*(signed char *)((a4 + 0x1)));
                        FUN_0c059f20(t4, t7);
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 16:
                    {
                        t10 = *(int *)(((((t8 << 2) << 2) + t9) + 0x8));
                        if ((t10 != 16) && ((t10 != 17) && ((t10 != 18) && (t10 != 19)))) {
                            if ((t10 != 32) && ((t10 != 33) && ((t10 != 34) && (t10 != 35)))) {
                                t6 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                                (((struct o446_uchar *)(a4))->v) = t6;
                            } else {
                                t7 = (t7 + ((((*(signed char *)((a4 + 0x2))) << 2) << 2) << 2));
                                t7 = (t7 + ((((*(int *)(((((t8 << 2) << 2) + t9) + 0x8))) - 16) << 2) << 2));
                                t7 = (t7 + (((*(signed char *)((a4 + 0x371A))) << 2) << 1));
                                (((struct o446_uchar *)(a4))->v) = (*(int *)((t7 + 0x0)));
                            }
                        } else {
                            t4 = (t4 + ((((*(signed char *)((a4 + 0x2))) << 2) << 2) << 2));
                            t4 = (t4 + ((((*(int *)(((((t8 << 2) << 2) + t9) + 0x8))) - 16) << 2) << 2));
                            t4 = (t4 + (((*(signed char *)((a4 + 0x371A))) << 2) << 1));
                            (((struct o446_uchar *)(a4))->v) = (*(int *)((t4 + 0x0)));
                        }
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 18:
                    {
                        t10 = *(int *)(((((t8 << 2) << 2) + t9) + 0x8));
                        if ((t10 != 16) && ((t10 != 17) && ((t10 != 18) && (t10 != 19)))) {
                            if ((t10 != 32) && ((t10 != 33) && ((t10 != 34) && (t10 != 35)))) {
                                t6 = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                                (((struct o447_uchar *)(a4))->v) = t6;
                            } else {
                                t7 = (t7 + ((((*(signed char *)((a4 + 0x2))) << 2) << 2) << 2));
                                t7 = (t7 + ((((*(int *)(((((t8 << 2) << 2) + t9) + 0x8))) - 16) << 2) << 2));
                                t7 = (t7 + (((*(signed char *)((a4 + 0x371A))) << 2) << 1));
                                (((struct o447_uchar *)(a4))->v) = (*(int *)((t7 + 0x4)));
                            }
                        } else {
                            t4 = (t4 + ((((*(signed char *)((a4 + 0x2))) << 2) << 2) << 2));
                            t4 = (t4 + ((((*(int *)(((((t8 << 2) << 2) + t9) + 0x8))) - 16) << 2) << 2));
                            t4 = (t4 + (((*(signed char *)((a4 + 0x371A))) << 2) << 1));
                            (((struct o447_uchar *)(a4))->v) = (*(int *)((t4 + 0x4)));
                        }
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 20:
                    {
                        (((struct o445_uchar *)(a4))->v) = (*(int *)(((((t8 << 2) << 2) + t9) + 0x8)));
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    case 22:
                    {
                        t4 = 0xC4;
                        t4 = (t4 + a4);
                        t8 = *(int *)((t4 + 0x3C));
                        *(unsigned char *)((((((struct o48_int *)(t4))->v)) + 0x0)) = 0x0;
                        *(unsigned char *)((t8 + 0x0)) = 0x0;
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                    default:
                    {
                        if (((*(signed char *)((a4 + 0x2))) == 10) && (t2 = *(signed char *)((a4 + 0x371A)), t2 == 0)) {
                            t4 = 0xC4;
                            t4 = (t4 + a4);
                            t8 = (((struct o48_int *)(t4))->v);
                            t9 = *(int *)((t4 + 0x3C));
                            t6 = (*(int *)((t4 + 0x38)));
                            *(unsigned char *)((((((struct o44_int *)(t4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((t6 + 0x0)) = 0x0;
                            *(unsigned char *)((t8 + 0x0)) = 0x0;
                            *(unsigned char *)((t9 + 0x0)) = 0x0;
                        }
                        (((struct o38D0_uint *)(a4))->v) = (((((struct o38D0_int *)(a4))->v)) + 0x1);
                        t6 = ((((struct o38D0_int *)(a4))->v));
                        if ((int)t6 < (int)((((struct o38D4_int *)(a4))->v))) continue;
                        return 0x38D0;
                    }
                }
            }
            t5 = 0x8C;
        }
        t3 = t5;
    }
    return t3;
}

int FUN_0c0388e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 < 0) {
        t0 = (*(int *)0xC20ED74);
    } else {
        t0 = (*(int *)((0xC20ED74 + (((*(signed char *)((a4 + 0x2))) + 0x1) << 2))));
    }
    t1 = *(int *)(((((a6 << 2) << 1) + t0) + 0x4));
    t2 = *(int *)(((((a6 << 2) << 1) + t0) + 0x0));
    if ((int)t1 > 0) {
        t0 = t2;
        t2 = 0x0;
        for (;;) {
            if (a7 == (*(int *)((t0 + 0x0)))) {
                break;
            }
            t2 = (t2 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t2 >= (int)t1) {
                (((struct o38CC_uint *)(a4))->v) = 0x0;
                (((struct o38D0_uint *)(a4))->v) = 0x0;
                (((struct o38D4_uint *)(a4))->v) = 0x0;
                return 0x38D4;
            }
        }
        (((struct o38CC_uint *)(a4))->v) = (*(int *)((t0 + 0x4)));
        (((struct o38D0_uint *)(a4))->v) = 0x0;
        (((struct o38D4_uint *)(a4))->v) = (*(int *)((t0 + 0x8)));
        return 0x38D4;
    }
    (((struct o38CC_uint *)(a4))->v) = 0x0;
    (((struct o38D0_uint *)(a4))->v) = 0x0;
    (((struct o38D4_uint *)(a4))->v) = 0x0;
    return 0x38D4;
}
