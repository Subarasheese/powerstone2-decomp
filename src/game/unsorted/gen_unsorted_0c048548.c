/* game/unsorted: functions 0C048548-0C0497B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c048a80(int, int);
int FUN_0c048ac6(int, int);
int FUN_0c048b7a(int, int, int);
int FUN_0c048fc6(int, int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int game_reset_objects(void);
int FUN_0c0cff96(int, int);
int FUN_0c18778c(float, float);
int FUN_0c187798(void);
int FUN_0c187d88(int);
int FUN_0c048548(int a4, int a5, int a6, int a7);
int FUN_0c0485f2(int a4, int a5, int a6);
int FUN_0c04875e(int a4, int a5, int a6, int a7);
int FUN_0c04882c(int a4, int a5);
int FUN_0c048b0a(int a4, int a5, int a6, int a7);
int FUN_0c048c50(int a4, int a5, int a6, int a7);
int FUN_0c048cc0(int a4, int a5, int a6);
int FUN_0c04908c(int a4);
int FUN_0c049188(void);
int FUN_0c04926e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04930a(int a4);
int FUN_0c0493c6(int a4);
int FUN_0c04942c(void);
int FUN_0c0494a2(void);
int FUN_0c049644(void);

int FUN_0c048548(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (0xC4 + a4));
        t0 = (*(int *)((t0 + 0x0)));
        if ((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0xA)) > (int)t1) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            u0 = ((((struct o8C_float *)(t0))->v));
            u0 = (u0 - 0.100000001f);
            (((struct o8C_float *)(t0))->v) = u0;
            if (!((((((struct o8C_float *)(t0))->v))) > 0.300000012f)) {
                (((struct o8C_float *)(t0))->v) = 0.300000012f;
            }
            u0 = ((((struct o8C_float *)(t0))->v));
            (((struct o88_float *)(t0))->v) = u0;
            (((struct o84_float *)(t0))->v) = u0;
        }
        t1 = (t1 + 0x1);
    }
    return 0xC0;
}

int FUN_0c0485f2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = ((~(((~a6) + 0x1) & 0x1)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1);
    }
    t1 = (int)((unsigned int)((int)((unsigned int)a6 + (unsigned int)0x0)) + ((((int)0x0 > (int)a6)) ? 1u : 0u));
    t2 = ((t1 >> 1) + t0);
    t3 = t0;
    if ((int)((t1 >> 1) + t0) > (int)0x14) {
        t2 = 0x14;
        t3 = 0x0;
    }
    t0 = FUN_0c03f444(0x8, 0x0, t2);
    t1 = t0;
    if (t0 != 0) {
        if ((int)t2 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (0xC4 + t0)) + 0x0));
                t6 = 0x2;
                if ((t3 != 0) && (t4 == (t2 - 1))) {
                    t6 = 0x3;
                }
                FUN_0c037498(t5, 0x0, t6, (*(int *)0xC4B410C));
                *(unsigned char *)((t5 + 0x0)) = 0x0;
                *(unsigned short *)((t5 + 0x6)) = 0x1F;
                FUN_0c187798();
                u0 = (float)((((t4 << 2) << 2) - t4) + 0xF0);
                t6 = t4;
                t4 = (t4 + 0x1);
                (((struct o6C_float *)(t5))->v) = (((((struct o6C_float *)(t5))->v)) + u0);
                (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) - 15.0f);
                (((struct o74_float *)(t5))->v) = (((((struct o74_float *)(t5))->v)) + (float)t6);
                (((struct o8C_float *)(t5))->v) = 1.0f;
                (((struct o88_float *)(t5))->v) = 1.0f;
                (((struct o84_float *)(t5))->v) = 1.0f;
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC048548;
        u0 = (((struct o0_float *)0xC0487C8)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o4_float *)0xC0487C8)->v));
        u0 = (((struct o8_float *)0xC0487C8)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC0487C8)->v));
        t1 = 0x48;
    }
    return t1;
}

int FUN_0c04875e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t8;
    register int t15;
    int t17;
    register int t18;
    register int t19;
    register int t24;
    register int t31;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        t8 = t1;
        if (t1 == 0) {
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.100000001f);
            t8 = 0x30;
            if (!(((((struct o30_float *)(a4))->v)) > -5.01000023f)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t8 = 0x15;
            }
        }
        return t8;
    }
    t15 = *(signed char *)((a4 + 0x14));
    (((struct o14_uchar *)(a4))->v) = (t15 + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
    t17 = (t15 + 0x1);
    t18 = 0x0;
    t19 = a7;
    for (;;) {
        if ((int)t18 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t17 = 0xC4;
        t19 = t18;
        t19 = (t19 << 2);
        t17 = (t17 + a4);
        t19 = (t19 + t17);
        t17 = 0x1;
        t17 = ((int)t17 << (int)t18);
        t19 = (*(int *)((t19 + 0x0)));
        if (((*(signed char *)((a4 + 0x1B))) & t17) == 0) {
            *(unsigned char *)((t19 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((t19 + 0x0)) = 0x0;
        }
        t18 = (t18 + 0x1);
    }
    t24 = *(signed char *)((a4 + 0x15));
    t31 = t24;
    if (t24 == 0) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.100000001f);
        t31 = 0x30;
        if (!(((((struct o30_float *)(a4))->v)) > -5.01000023f)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t31 = 0x15;
        }
    }
    return t31;
}

int FUN_0c04882c(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t91;
    register int t2;
    register int t4;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register float u60;
    register float u62;
    register float u64;
    register float u68;
    register float u85;
    register float u89;
    register int t45;
    register float u70;
    register float u71;

    t0 = FUN_0c187d88((a5 + 0x28));
    *(unsigned int *)(((int)stk + 0)) = t0;
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t91 = t1;
    if (t1 != 0) {
        t2 = *(int *)(((int)stk + 0));
        t4 = (int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u));
        *(float *)(((int)stk + 4)) = (float)(t2 - 1);
        if ((int)t2 <= 0) {
        } else {
            t7 = 0x0;
            t8 = 0x0;
            for (;;) {
                t9 = *(signed char *)((t8 + (a5 + 0x28)));
                t10 = *(int *)((((t8 << 2) + (0xC4 + t1)) + 0x0));
                if ((t9 != 48) && ((t9 != 49) && ((t9 != 50) && ((t9 != 51) && ((t9 != 52) && ((t9 != 53) && ((t9 != 54) && ((t9 != 55) && ((t9 != 56) && (t9 != 57)))))))))) {
                    t45 = 0x25;
                    if (t9 != 33) {
                        t45 = 0x24;
                        if (t9 != 63) {
                            t45 = 0x26;
                            if (t9 != 46) {
                                t45 = 0x27;
                                if (t9 != 44) {
                                    t45 = 0x28;
                                    if (t9 != 125) {
                                        t45 = 0x29;
                                        if (t9 != 38) {
                                            t45 = 0x27;
                                            if (t9 != 32) {
                                                t11 = *(signed char *)((((a5 + 0x28) + t8) + 0x0));
                                                t45 = 0x27;
                                                if (((int)t11 >= (int)0x41) && ((int)t11 <= (int)0x5A)) {
                                                    t45 = ((*(signed char *)((((a5 + 0x28) + t8) + 0x0))) - 65);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t45 = ((*(signed char *)((((a5 + 0x28) + t8) + 0x0))) - 22);
                }
                if ((*(signed char *)((t8 + (a5 + 0x28)))) == 32) {
                    t7 = 0x1;
                    t7 = ((int)t7 << (int)t8);
                    (((struct o1B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x1B))) | t7);
                }
                t7 = 0xC4B410C;
                FUN_0c037498(t10, 0x0, (t45 + 0x1B), (*(int *)((t7 + 0x0))));
                t7 = a5;
                t7 = (t7 + 0xC);
                *(unsigned char *)((t10 + 0x0)) = 0x1;
                *(unsigned short *)((t10 + 0x6)) = 0x1F;
                FUN_0c187798();
                t7 = ((int)stk + 0);
                t7 = (t7 + 0x8);
                FUN_0c187798();
                t7 = a5;
                (((struct o84_float *)(t10))->v) = (((((struct o84_float *)(t10))->v)) / 4.0f);
                (((struct o88_float *)(t10))->v) = (((((struct o88_float *)(t10))->v)) / 4.0f);
                FUN_0c187798();
                u60 = *(float *)(((int)stk + 8));
                u62 = (u60 * 10.0f);
                if (((*(int *)(((int)stk + 0))) & 0x1) != 0) {
                    u64 = (u60 * 10.0f);
                    u70 = (*(float *)((a5 + 0x0)));
                    u71 = (((*(float *)(((int)stk + 4))) * u64) / (1.0f + 1.0f));
                } else {
                    u68 = (u60 * 10.0f);
                    u70 = ((*(float *)((a5 + 0x0))) - (((u60 * 10.0f) / (1.0f + 1.0f))));
                    u71 = ((float)((t4 >> 1) - 1) * u68);
                }
                t7 = a5;
                t7 = (t7 + 0x18);
                (((struct o6C_float *)(t10))->v) = ((u70 - u71) + (((float)t8 * u62)));
                FUN_0c18778c((u60 * 10.0f), ((float)t8 * u62));
                t7 = (*(int *)(((int)stk + 0)));
                t8 = (t8 + 0x1);
                if ((int)t8 < (int)t7) continue;
                break;
            }
        }
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x4)) = 0xC04875E;
        u85 = (((struct o0_float *)0xC048B28)->v);
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / u85);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / u85);
        (((struct o30_float *)(t1))->v) = ((((struct o4_float *)0xC048B28)->v));
        u89 = (((struct o8_float *)0xC048B28)->v);
        (((struct o44_float *)(t1))->v) = u89;
        (((struct o40_float *)(t1))->v) = u89;
        (((struct o48_float *)(t1))->v) = ((((struct oC_float *)0xC048B28)->v));
        t91 = 0x48;
    }
    return t91;
}

int FUN_0c048b0a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0500000007f);
    if (!(1.0f > ((((struct o88_float *)(t0))->v)))) {
        (((struct o88_float *)(t0))->v) = 1.0f;
    }
    return 0x88;
}

int FUN_0c048c50(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x258;
    return 0x258;
}

int FUN_0c048cc0(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t5;
    register int t10;
    register int t12;
    register int t17;
    register int t13;
    register int t19;
    register int t24;
    register int t20;
    register int t26;
    register int t31;
    register int t27;
    register int t33;
    register int t38;
    register int t34;
    register int t40;
    register int t45;
    register int t41;
    register int t47;
    register int t52;
    register int t48;
    register int t54;
    register int t56;
    register int t90;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t69;
    register float u84;
    register float u88;

    *(unsigned int *)(((int)stk + 4)) = ((a5 * 0x34) + 0xC240A7C);
    t0 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x28)) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    t2 = a6;
    if ((unsigned int)a6 > (unsigned int)0x5F5E0FF) {
        t2 = 0x5F5E0FF;
    }
    t5 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x989680)) % (unsigned int)0xA);
    t10 = 0x0;
    if ((t5 != 0) || (0x0 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = t5;
        if (0x1 == 1) {
            t13 = 0x8;
        }
        t10 = 0x1;
    }
    t12 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0xF4240)) % (unsigned int)0xA);
    t20 = t13;
    t17 = t10;
    if ((t12 != 0) || (t10 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = t12;
        if ((t10 + 0x1) == 1) {
            t13 = 0x7;
        }
        t20 = t13;
        t17 = (t10 + 0x1);
    }
    t19 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x186A0)) % (unsigned int)0xA);
    t27 = t20;
    t24 = t17;
    if ((t19 != 0) || (t17 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = t19;
        if ((t17 + 0x1) == 1) {
            t20 = 0x6;
        }
        t27 = t20;
        t24 = (t17 + 0x1);
    }
    t26 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x2710)) % (unsigned int)0xA);
    t34 = t27;
    t31 = t24;
    if ((t26 != 0) || (t24 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = t26;
        if ((t24 + 0x1) == 1) {
            t27 = 0x5;
        }
        t34 = t27;
        t31 = (t24 + 0x1);
    }
    t33 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x3E8)) % (unsigned int)0xA);
    t41 = t34;
    t38 = t31;
    if ((t33 != 0) || (t31 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = t33;
        if ((t31 + 0x1) == 1) {
            t34 = 0x4;
        }
        t41 = t34;
        t38 = (t31 + 0x1);
    }
    t40 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x64)) % (unsigned int)0xA);
    t48 = t41;
    t45 = t38;
    if ((t40 != 0) || (t38 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = t40;
        if ((t38 + 0x1) == 1) {
            t41 = 0x3;
        }
        t48 = t41;
        t45 = (t38 + 0x1);
    }
    t47 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0xA)) % (unsigned int)0xA);
    t54 = t48;
    t52 = t45;
    if ((t47 != 0) || (t45 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = t47;
        if ((t45 + 0x1) == 1) {
            t48 = 0x2;
        }
        t54 = t48;
        t52 = (t45 + 0x1);
    }
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((int)((unsigned int)t2 % (unsigned int)0xA));
    if ((t52 + 0x1) == 1) {
        t54 = 0x1;
    }
    t56 = FUN_0c03f444(0x8, 0x0, t54);
    t90 = t56;
    if (t56 != 0) {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        if ((int)t54 > 0) {
            t57 = 0x32;
            t58 = 0x208;
            t59 = 0x0;
            for (;;) {
                t60 = *(int *)((((0xC4 + t56) + t59) + 0x0));
                FUN_0c037498(t60, 0x0, ((*(int *)(((((int)stk + 0) + 0x8) + t59))) + 0x45), (*(int *)0xC4B410C));
                *(unsigned char *)((t60 + 0x0)) = 0x1;
                *(unsigned short *)((t60 + 0x6)) = 0x1F;
                *(volatile int *)(((int)stk + 4));
                FUN_0c187798();
                (((struct o6C_float *)(t60))->v) = (((((struct o6C_float *)(t60))->v)) + (float)t58);
                (((struct o70_float *)(t60))->v) = (((((struct o70_float *)(t60))->v)) - 15.0f);
                (((struct o74_float *)(t60))->v) = (((((struct o74_float *)(t60))->v)) + (float)t57);
                (((struct o18_float *)(t60))->v) = 0.0f;
                (((struct o1C_float *)(t60))->v) = 1.0f;
                (((struct o20_float *)(t60))->v) = 1.0f;
                (((struct o84_float *)(t60))->v) = (1.0f + 1.0f);
                (((struct o88_float *)(t60))->v) = 1.0f;
                (((struct o8C_float *)(t60))->v) = 6400.0f;
                t69 = *(int *)(((int)stk + 0));
                t58 = (t58 - 20);
                *(unsigned int *)(((int)stk + 0)) = (t69 + 0x1);
                t57 = (t57 + 0x1);
                t59 = (t59 + 0x4);
                if ((int)(t69 + 0x1) >= (int)t54) {
                    break;
                }
            }
        }
        *(unsigned char *)((t56 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t56))->v) = 0x1F;
        (((struct oA9_uchar *)(t56))->v) = 0x21;
        (((struct oA8_uchar *)(t56))->v) = 0x1;
        *(unsigned int *)((t56 + 0x4)) = 0xC048C50;
        u84 = (((struct o0_float *)0xC0490A0)->v);
        (((struct o28_float *)(t56))->v) = (((((struct o28_float *)(t56))->v)) / u84);
        (((struct o2C_float *)(t56))->v) = (((((struct o2C_float *)(t56))->v)) / u84);
        (((struct o30_float *)(t56))->v) = ((((struct o4_float *)0xC0490A0)->v));
        u88 = (((struct o8_float *)0xC0490A0)->v);
        (((struct o44_float *)(t56))->v) = u88;
        (((struct o40_float *)(t56))->v) = u88;
        (((struct o48_float *)(t56))->v) = ((((struct oC_float *)0xC0490A0)->v));
        t90 = 0x48;
    }
    return t90;
}

int FUN_0c04908c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register int R14;
    register float F3;
    register float F4;
    register int T_;
    int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0490D0;
    if ((v0_1 == 1)) goto L_C0490FC;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0490FC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C04910C;
    if (!((v0_1 == 1))) goto L_C04916A;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 64.0f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v);
    v0_1 = (0x8C);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x42800000);
    if ((w0_0 > 0.0f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_1;
    v0_1 = (0x8C);
    goto L_C04916A;
    L_C04916A:;
    return v0_1;
    L_C04910C:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - 0.100000001f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    v0_1 = (0x30);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > -5.01000023f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C04916A;
    L_C0490D0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x258);
    R5 = (0x1);
    FPUL_ = (0x40A00000);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = R5;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = R5;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = R5;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + (*(float *)&(FPUL_)));
    goto L_C0490FC;
}

int FUN_0c049188(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c037320(0x51, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t2 = t1;
    if (t1 != 0) {
        u0 = (((struct o0_float *)0xC0492C0)->v);
        if ((int)t0 > 0) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)((((t3 << 2) + (0xC4 + t1)) + 0x0));
                FUN_0c03744a(t4, t3, 0x51, (*(int *)0xC4B410C));
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                *(unsigned short *)((t4 + 0x6)) = 0x1F;
                FUN_0c187798();
                FUN_0c187798();
                t3 = (t3 + 0x1);
                (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) / u0);
                (((struct o88_float *)(t4))->v) = (((((struct o88_float *)(t4))->v)) / u0);
                if ((int)t3 >= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC04908C;
        u0 = (((struct o10_float *)0xC0492C0)->v);
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / u0);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / u0);
        (((struct o30_float *)(t1))->v) = ((((struct o14_float *)0xC0492C0)->v));
        u0 = (((struct o18_float *)0xC0492C0)->v);
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = ((((struct o1C_float *)0xC0492C0)->v));
        t2 = 0x48;
    }
    return t2;
}

int FUN_0c04926e(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.25f);
        if (!(1.0f > ((((struct o88_float *)(t1))->v)))) {
            (((struct o88_float *)(t1))->v) = 1.0f;
        }
        t0 = 0x88;
    }
    return t0;
}

int FUN_0c04930a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        t3 = *(int *)0xC4B410C;
        t4 = 0x0;
        if (a4 != 0) {
            t4 = 0x1;
        }
        FUN_0c037498(t2, 0x0, (t4 + 0x52), t3);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o0_float *)0xC049404)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC049404)->v));
        (((struct o74_float *)(t2))->v) = ((((struct o8_float *)0xC049404)->v));
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC04926E;
        u0 = (((struct o10_float *)0xC049404)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o14_float *)0xC049404)->v));
        u0 = (((struct o18_float *)0xC049404)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct o1C_float *)0xC049404)->v));
        t1 = 0x48;
    }
    return t1;
}

int FUN_0c0493c6(int a4)
{
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC240D88);
}

int FUN_0c04942c(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1B7C20 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0493C6;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c0494a2(void)
{
    int stk[5];
    register int t13;
    register int t14;
    register int t16;
    register int t57;
    register int t61;
    register int t63;
    register int t55;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        *(unsigned short *)0xC541F4E = 0x258;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        game_reset_objects();
        FUN_0c03eff6();
        FUN_0c036de8(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        FUN_0c04942c();
        FUN_0c059c54(0x5);
    }
    t13 = *(signed char *)0xC541F43;
    if ((unsigned char)t13 != 0) {
        t55 = 0x28;
        if (((unsigned char)t13 == 1) || (((unsigned char)t13 == 2) || (((unsigned char)t13 == 3) || (((unsigned char)t13 == 4) || ((unsigned char)t13 == 5))))) {
            t14 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t14 - 1);
            if ((int)(short)(t14 - 1) <= 0) {
                *(unsigned short *)0xC541F50 = 0x28;
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                t16 = *(signed char *)0xC541F43;
                FUN_0c048fc6(0x0, ((-(unsigned char)t16) + 0x6));
                FUN_0c048a80(0x0, ((-(unsigned char)t16) + 0x6));
                *(unsigned int *)(((int)stk + 0)) = (((-(unsigned char)t16) + 0x6) << 2);
                FUN_0c0485f2(0x0, ((-(unsigned char)t16) + 0x6), ((int)((unsigned int)(*(int *)((((((-(unsigned char)t16) + 0x6) << 2) + 0xC54229C) + 0x0))) / (unsigned int)0x2710)));
                FUN_0c048b7a(0x0, ((-(unsigned char)t16) + 0x6), (*(signed char *)(((0xC542267 + ((-(unsigned char)t16) + 0x6)) + 0x0))));
                FUN_0c048cc0(0x0, ((-(unsigned char)t16) + 0x6), (*(int *)(((0xC54229C + (*(int *)(((int)stk + 0)))) + 0x0))));
            } else {
                t55 = 0x28;
            }
        }
    } else {
        *(unsigned short *)0xC541F50 = 0x28;
        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c049188();
        FUN_0c04930a(0x1);
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    } else {
    }
    t57 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t57 - 1);
    if ((short)(t57 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    t61 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t55);
    FUN_0c038e88(0x5);
    t63 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c049644(void)
{
    int stk[5];
    register int t13;
    register int t14;
    register int t16;
    register int t57;
    register int t61;
    register int t63;
    register int t55;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        *(unsigned short *)0xC541F4E = 0x258;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        game_reset_objects();
        FUN_0c03eff6();
        FUN_0c036de8(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        FUN_0c04942c();
        FUN_0c059c54(0x5);
    }
    t13 = *(signed char *)0xC541F43;
    if ((unsigned char)t13 != 0) {
        t55 = 0x28;
        if (((unsigned char)t13 == 1) || (((unsigned char)t13 == 2) || (((unsigned char)t13 == 3) || (((unsigned char)t13 == 4) || ((unsigned char)t13 == 5))))) {
            t14 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t14 - 1);
            if ((int)(short)(t14 - 1) <= 0) {
                *(unsigned short *)0xC541F50 = 0x28;
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                t16 = *(signed char *)0xC541F43;
                FUN_0c048fc6(0x0, ((-(unsigned char)t16) + 0x6));
                FUN_0c048ac6(0x0, ((-(unsigned char)t16) + 0x6));
                *(unsigned int *)(((int)stk + 0)) = (((-(unsigned char)t16) + 0x6) << 2);
                FUN_0c0485f2(0x0, ((-(unsigned char)t16) + 0x6), ((int)((unsigned int)(*(int *)((((((-(unsigned char)t16) + 0x6) << 2) + 0xC5422F8) + 0x0))) / (unsigned int)0x2710)));
                FUN_0c048b7a(0x0, ((-(unsigned char)t16) + 0x6), (*(signed char *)(((0xC5422C4 + ((-(unsigned char)t16) + 0x6)) + 0x0))));
                FUN_0c048cc0(0x0, ((-(unsigned char)t16) + 0x6), (*(int *)(((0xC5422F8 + (*(int *)(((int)stk + 0)))) + 0x0))));
            } else {
                t55 = 0x28;
            }
        }
    } else {
        *(unsigned short *)0xC541F50 = 0x28;
        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c049188();
        FUN_0c04930a(0x0);
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    } else {
    }
    t57 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t57 - 1);
    if ((short)(t57 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    t61 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t55);
    FUN_0c038e88(0x5);
    t63 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}
