/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c02dc1c(int, int);
int FUN_0c02e078(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02f874(int, int, int);
int FUN_0c03796e(int, int);
int FUN_0c0379b6(int, int);
int FUN_0c03ee04(int);
int FUN_0c03f346(int, int, int);
int FUN_0c052cf8(int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05ab12(int, int);
int FUN_0c0cff96(int, int);
float FUN_0c0e2220(int, int);
extern int FUN_0c150010();
int FUN_0c16328c(int, int, int, float);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
float FUN_0c17c450(int);
int FUN_0c17e740(int, int, int, float, float, float);
extern int FUN_0c187798();
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c0e2e9a(void);
int FUN_0c163144(int a4, int a5, int a6, int a7);
int FUN_0c055af0(int a4);
int FUN_0c120f18(int a4);
int FUN_0c162fd0(int a4, int a5, int a6);
void FUN_0c02e14a(int a4);

int FUN_0c0e2e9a(void)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t14;
    register int t16;
    register float u17;
    register float u18;
    register int t19;
    register int t20;

    t0 = *(int *)0xC4B410C;
    t1 = *(int *)((((t0 + 0x10) + 0x520) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t1;
    FUN_0c0cff96((*(int *)((t1 + 0x0))), 0xC1CB9E4);
    t4 = *(int *)((((t0 + 0x10) + 0x500) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t4;
    FUN_0c0cff96((*(int *)((t4 + 0x0))), 0xC1CB9E4);
    t7 = *(int *)((((t0 + 0x10) + 0x4E0) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t7;
    FUN_0c0cff96((*(int *)((t7 + 0x0))), 0xC1CB9E4);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t0 + 0x10) + 0x800) + 0x1C)));
    *(unsigned int *)(((int)stk + 0)) = (((unsigned int)(*(int *)0xC542260) >> 1) & 0x3);
    t14 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t14;
    mdl_vtx_iter_begin(t14, t14);
    t16 = *(int *)(((int)stk + 0));
    u17 = ((float)t16 * 0.25f);
    u18 = ((float)t16 * 0.25f);
    t19 = 0x0;
    for (;;) {
        t20 = mdl_vtx_iter_next();
        if (t20 != 0) {
            break;
        }
        FUN_0c03796e((((int)stk + 0) + 0xC), ((((int)stk + 0) + 0xC) + 0x4));
        if ((*(signed char *)((0xC1CBBA0 + t19))) == 0) {
            (((struct oC_float *)(((int)stk + 0)))->v) = (u17 + 0.0078125f);
        } else {
            (((struct oC_float *)(((int)stk + 0)))->v) = (u18 + 0.2421875f);
        }
        FUN_0c0379b6((((int)stk + 0) + 0xC), ((((int)stk + 0) + 0xC) + 0x4));
        t19 = (t19 + 0x1);
        if ((int)t19 < (int)(*(int *)0xC1CBBAC)) continue;
        break;
    }
    return 0x0;
}

int FUN_0c163144(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x6C);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            if ((*(short *)((a4 + 0x1C))) == 0) {
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            u0 = (((struct oB0_float *)(a4))->v);
            (((struct oB0_float *)(a4))->v) = (u0 - 0.0625f);
            if (!((u0 - 0.0625f) > 0.0f)) {
                return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
            }
            return 0xB0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o5C_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) / 5.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t0 = 0xCD;
            if (!(((((struct o60_float *)(a4))->v)) > 0.300000012f)) {
            } else {
                t0 = 0xD1;
                if (!(((((struct o60_float *)(a4))->v)) > 0.800000012f)) {
                    t0 = 0xD0;
                }
            }
            FUN_0c05ab12(t0, (a4 + 0x28));
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x6C);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            if ((*(short *)((a4 + 0x1C))) == 0) {
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            u0 = (((struct oB0_float *)(a4))->v);
            (((struct oB0_float *)(a4))->v) = (u0 - 0.0625f);
            if (!((u0 - 0.0625f) > 0.0f)) {
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return 0xB0;
        }
    }
    if (!(((((struct o58_float *)(a4))->v)) > ((((struct o40_float *)(a4))->v)))) {
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) * 0.100000001f);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c055af0(int a4)
{
    int stk[32];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t7;
    register float u54;
    register float u48;
    int t14;
    register int t19;
    register int t29;
    register int t36;
    register int t56;
    register int t2;
    register float u5;
    register float u6;
    register float u42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0xC532498;
    t1 = 0xC532498;
    t3 = 0x0;
    t4 = 0xC532498;
    for (;;) {
        t7 = *(int *)(((int)stk + 0));
        u54 = u5;
        if ((*(signed char *)((((t7 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            u5 = ((((struct o2C_float *)(((t7 * 0x3938) + 0xC532498)))->v));
            u6 = (*(float *)0xC54109C);
            u6 = (u6 + -400.0f);
            u48 = u5;
            if (u5 > u6) {
                t2 = t3;
                t2 = (t2 << 1);
                t14 = *(signed char *)((t0 + 0x2));
                t2 = (t2 + t3);
                t2 = (t2 << 2);
                t2 = (t2 + (((int)stk + 0) + 0x8));
                if ((t14 != 12) && (t14 != 13)) {
                    u6 = ((((struct o28_float *)(t4))->v));
                    t3 = (t3 + 0x1);
                    *(float *)((t2 + 0x0)) = u6;
                    u6 = ((((struct o2C_float *)(t4))->v));
                    u6 = (u6 + -50.0f);
                    t19 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    (((struct o4_float *)(t2))->v) = u6;
                    u6 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t2))->v) = u6;
                    u6 = ((((struct o28_float *)(t4))->v));
                    *(float *)((t19 + 0x0)) = u6;
                    u6 = ((((struct o2C_float *)(t4))->v));
                    u6 = (u6 + 250.0f);
                    (((struct o4_float *)(t19))->v) = u6;
                    u6 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t19))->v) = u6;
                    u42 = u5;
                } else {
                    thunk_FUN_0c058310((((((struct oC4_int *)(t1))->v)) + 0x28), t2);
                    u6 = ((((struct o4_float *)(((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8))))->v));
                    t29 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    u6 = (u6 - 100.0f);
                    (((struct o4_float *)(t29))->v) = u6;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t1))->v)) + 0x28), ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8)));
                    u6 = ((((struct o4_float *)(((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8))))->v));
                    t36 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    u6 = (u6 + 100.0f);
                    (((struct o4_float *)(t36))->v) = u6;
                }
                u48 = u42;
            }
            u54 = u48;
        }
        t56 = *(int *)(((int)stk + 0));
        u5 = u54;
        t1 = (t1 + 0x3938);
        *(unsigned int *)(((int)stk + 0)) = (t56 + 0x1);
        t4 = (t4 + 0x3938);
        t0 = (t0 + 0x3938);
        if ((int)(t56 + 0x1) >= (int)0x4) {
            break;
        }
    }
    return (FUN_0c052cf8((*(int *)(((int)stk + 4))), t3, (((int)stk + 0) + 0x8)));
}

int FUN_0c120f18(int a4)
{
    int stk[1];
    register int t4;
    register int t9;
    register int t13;
    register int t22;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t39;
    register int t43;
    register int t44;
    register int t60;
    register int t25;
    int t2;
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t56;

    if (a4 != 0) {
        if ((*(signed char *)0xC5429B4) == 2) {
            t4 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x3))) > (int)0x2) && ((t6 = *(signed char *)((t4 + 0xC542A14)), t3 = t6, t3 = (unsigned char)t3, t3 == 0) && (t2 = 0x81, (int)t4 < (int)t2))) || ((t7 = *(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x1)), (int)t7 < 0) || (t8 = *(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x10)), t8 == 7))) {
                    *(unsigned char *)((0xC543024 + t4)) = 0x0;
                } else {
                    *(unsigned char *)((0xC543024 + t4)) = 0x1;
                }
                t9 = t4;
                t4 = (t4 + 0x1);
                if ((int)t4 > (int)0x8F) {
                    break;
                }
            }
            t25 = t9;
        } else {
            t13 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x3))) > (int)((*(signed char *)0xC5429B3) + 0x2)) && ((t12 = 0xC542A08, t16 = *(signed char *)((t12 + 0x0)), t16 == 0) || (t17 = *(signed char *)((t13 + 0xC542A14)), (unsigned char)t17 == 0))) || ((t18 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x1)), (int)t18 < 0) || ((t19 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x10)), t19 == 7) || (t20 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x10)), t20 == 8)))) {
                    *(unsigned char *)((0xC543024 + t13)) = 0x0;
                } else {
                    *(unsigned char *)((0xC543024 + t13)) = 0x1;
                }
                t22 = t13;
                t13 = (t13 + 0x1);
                if ((int)t13 > (int)0x8F) {
                    break;
                }
            }
            t25 = t22;
        }
        t60 = t25;
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0xC543024;
        t34 = 0x0;
        t35 = 0xC2738B8;
        t36 = 0xC543024;
        t37 = 0xC543024;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = ((t34 * 0x34) + 0xC2738B8);
            t39 = *(signed char *)0xC5429B3;
            if ((int)(*(signed char *)((((t34 * 0x34) + 0xC2738B8) + 0x3))) <= (int)(t39 + 0x2)) {
                t43 = *(signed char *)(((0x10) + (*(int *)(((int)stk + 0)))));
                if (t43 != 7) {
                    *(unsigned char *)((0xC543024 + t34)) = 0x1;
                    t44 = *(signed char *)0xC5429B3;
                    *(unsigned char *)(((int)stk + 0)) = t44;
                    t56 = t44;
                    if (t44 != 0) {
                        t56 = *(signed char *)((t35 + 0x3));
                        if (t56 == ((*(signed char *)(((int)stk + 0))) + 0x2)) {
                            *(unsigned char *)((t36 + 0x0)) = 0x2;
                        }
                    }
                } else {
                    *(unsigned char *)((t37 + 0x0)) = 0x0;
                    t56 = t43;
                }
            } else {
                *(unsigned char *)((t37 + 0x0)) = 0x0;
                t56 = (t39 + 0x2);
            }
            t34 = (t34 + 0x1);
            t37 = (t37 + 0x1);
            t36 = (t36 + 0x1);
            t35 = (t35 + 0x34);
            if ((int)t34 > (int)0x79) {
                break;
            }
        }
        t60 = t56;
    }
    return t60;
}

int FUN_0c162fd0(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_5 = (v0_4);
    v0_2 = (v0_3);
    if ((v0_4 == 0)) goto L_C162FEA;
    if ((v0_5 == 1)) goto L_C162FF8;
    L_C16310C:;
    return v0_5;
    L_C162FF8:;
    w0_0 = (0.5f);
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C16300C;
    if (!(((*(signed char *)((v0_2 + 0x132))) == 0))) goto L_C16300C;
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C16308C;
    v0_4 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_4 = (FUN_0c17c450((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_4) goto L_C16308C;
    v0_3 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_3 = (FUN_0c17c450(((int)stk + 0))) == 0.0f;
    if (v0_3) goto L_C16308C;
    v0_3 = !(-0.5f > (FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C16308C;
    FUN_0c1632e0((*(signed char *)((v0_2 + 0x1))), (v0_2 + 0x28), 0x2, w0_0);
    FUN_0c05aae4(0xD1, (v0_2 + 0x28));
    goto L_C1630BA;
    L_C16300C:;
    FUN_0c16328c((*(signed char *)((v0_2 + 0x1))), (v0_2 + 0x28), 0x2, w0_0);
    L_C1630BA:;
    v0_5 = ((FUN_0c03f346(v0_2, v0_0, v0_1)));
    goto L_C16310C;
    L_C16308C:;
    if ((((*(short *)((v0_2 + 0x1C))) & 2) != 0)) goto L_C1630AE;
    if (((int)(*(int *)0xC532488) <= (int)0x14)) goto L_C1630AE;
    v0_3 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, 1.0f, 1.0f, 1.0f, 1.0f);
    L_C1630AE:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C1630FC;
    goto L_C1630BA;
    L_C1630FC:;
    v0_5 = ((FUN_0c17c130((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C16310C;
    L_C162FEA:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    goto L_C162FF8;
}

void FUN_0c02e14a(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    FUN_0c17b4b0(0x1);
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (0xC1A9030);
    v0_3 = (0xC1A9030);
    L_C02E26A:;
    v0_4 = *(int *)((v0_3 + (v0_0 << 2)));
    v0_7 = (v0_4);
    if ((v0_4 == -1)) goto L_C02E27A;
    v0_4 = ((*(int *)((0xC532434 + ((*(int *)((v0_2 + 0x0))) << 2)))));
    v0_6 = (0xC532434);
    L_C02E262:;
    if ((v0_4 != 0)) goto L_C02E1B0;
    v0_0 = ((v0_0 + 0x1));
    v0_2 = ((v0_2 + 0x4));
    goto L_C02E26A;
    L_C02E1B0:;
    v0_5 = ((0xA8 + v0_4));
    if (((*(signed char *)(((0xA8 + v0_4) + 0x0))) == 0)) goto L_C02E260;
    FUN_0c03ee04((*(signed char *)((v0_5 + 0x1))));
    v0_6 = (0x200);
    if ((((unsigned short)(*(short *)((v0_5 + 0x4))) & 0x200) == 0)) goto L_C02E1DC;
    FUN_0c17e740(v0_6, R5, R6, ((((struct oC_float *)(v0_5))->v)), ((((struct o10_float *)(v0_5))->v)), ((((struct o14_float *)(v0_5))->v)));
    L_C02E1DC:;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + 0x1C);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    L_C02E212:;
    if (((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)((v0_5 + 0x18))))) goto L_C02E1E6;
    if (((*(signed char *)((v0_5 + 0x2))) == 0)) goto L_C02E260;
    v0_8 = *(signed char *)((v0_5 + 0x2));
    v0_7 = (v0_8);
    v0_6 = (((*(int *)0xC542260) & 0x1));
    if ((v0_8 == 1)) goto L_C02E23C;
    if ((v0_7 == 2)) goto L_C02E248;
    if (!((v0_7 == 3))) goto L_C02E260;
    if ((v0_6 != 1)) goto L_C02E260;
    goto L_C02E258;
    L_C02E260:;
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    goto L_C02E262;
    L_C02E258:;
    FUN_0c02dc1c(v0_4, (*(signed char *)((v0_5 + 0x3))));
    goto L_C02E260;
    L_C02E248:;
    if ((v0_6 == 0)) goto L_C02E258;
    goto L_C02E260;
    L_C02E23C:;
    FUN_0c02dc1c(v0_4, (*(signed char *)((v0_5 + 0x3))));
    goto L_C02E260;
    L_C02E1E6:;
    v0_6 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_7 = (v0_6);
    if (((*(int *)((v0_6 + 0xC))) == 0)) goto L_C02E200;
    v0_6 = (0xC20EA8C);
    if (((*(int *)0xC20EA8C) == 3)) goto L_C02E200;
    FUN_0c02f874(v0_4, v0_7, R6);
    L_C02E200:;
    FUN_0c02e078(v0_4, v0_7, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    goto L_C02E212;
    L_C02E27A:;
}
