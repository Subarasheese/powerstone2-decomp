/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c036de8(int);
int FUN_0c03796e(int, int);
int FUN_0c0379b6(int, int);
extern int FUN_0c03d5e0();
int FUN_0c03f346(int, int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05f7a0(int);
int FUN_0c05fba0(int, int, int, int);
int FUN_0c0d05f2(void);
int FUN_0c0fb8ca(int, int);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120f18(int);
int FUN_0c179ac0(void);
int game_reset_objects(void);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int FUN_0c12862c(int a4, int a5, int a6, int a7);
int FUN_0c11efc0(void);
int FUN_0c0cff96(int a4, int a5, float f4);
int FUN_0c05c158(int a4, int a5, int a6, int a7);

int FUN_0c12862c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    if (t1 == 5) {
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    return t1;
                }
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 - 0.100000001f);
                (((struct o84_float *)(t1))->v) = (u0 - 0.100000001f);
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (((((struct o22_short *)(a4))->v)) == 3) {
                t1 = (((struct oC4_int *)(a4))->v);
                t2 = (int)((int)(FUN_0c179ac0()) % (int)0x3C);
                (((struct o8C_float *)(t1))->v) = (((float)t2 / 100.0f) + 0.699999988f);
                (((struct o84_float *)(t1))->v) = (((float)t2 / 100.0f) + 0.699999988f);
            }
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
            (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
            t1 = *(int *)((a4 + 0x10));
            if (((int)(*(signed char *)((t1 + 0x17))) <= (int)0x2) && (t0 = *(signed char *)((t1 + 0x3715)), t0 == 26)) {
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.100000001f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.100000001f);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c11efc0(void)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = *(signed char *)0xC4750AE;
    v0_2 = (v0_3);
    v0_1 = (0x0);
    v0_0 = (0xC4750AC);
    v0_7 = (0xC4750AE);
    if ((v0_3 == 0)) goto L_C11F02C;
    if ((v0_2 == 1)) goto L_C11F036;
    v0_3 = *(signed char *)(((v0_0 + 0x3) + 0x0));
    v0_2 = (v0_3);
    v0_7 = ((v0_0 + 0x3));
    if ((v0_3 == 0)) goto L_C11F0D4;
    if ((v0_2 == 1)) goto L_C11F0DE;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned char *)((v0_0 + 0x2)) = v0_1;
    v0_2 = (v0_1);
    L_C11F0FC:;
    return v0_2;
    L_C11F0DE:;
    v0_1 = *(int *)((v0_0 + 0x18));
    *(unsigned int *)((v0_0 + 0x18)) = (v0_1 - 1);
    if (((int)(v0_1 - 1) > 0)) goto L_C11F0FC;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned char *)((v0_0 + 0x3)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C11F0FC;
    L_C11F0D4:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) + 0x1);
    *(unsigned int *)((v0_0 + 0x18)) = 0x12C;
    goto L_C11F0DE;
    L_C11F036:;
    v0_3 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)((v0_0 + 0x14)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) > 0)) goto L_C11F0FC;
    *(unsigned int *)((v0_0 + 0x14)) = 0x5A;
    v0_3 = (0x4);
    v0_4 = (v0_1);
    v0_5 = (0x1);
    v0_6 = (0xFF);
    w0_0 = (((((struct o0_float *)0xC11F130)->v)));
    w0_1 = (((((struct o4_float *)0xC11F130)->v)));
    L_C11F054:;
    v0_8 = *(signed char *)(((*(int *)((v0_0 + 0x18))) + 0xC2A0CBC));
    v0_7 = *(signed char *)((0xC543025 + (unsigned char)v0_8));
    v0_2 = (v0_7);
    v0_8 = (v0_8);
    if ((v0_7 == 1)) goto L_C11F070;
    if ((v0_2 == 2)) goto L_C11F074;
    if ((v0_2 == 0)) goto L_C11F078;
    L_C11F078:;
    v0_7 = (v0_1);
    L_C11F07A:;
    v0_2 = ((unsigned char)v0_8);
    if (((unsigned char)v0_8 != v0_6)) goto L_C11F08E;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    *(unsigned char *)((v0_0 + 0x3)) = v0_1;
    v0_2 = (v0_1);
    goto L_C11F0FC;
    L_C11F08E:;
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (float)v0_4;
    *(float *)(((int)stk + 8)) = w0_2;
    *(float *)(((int)stk + 12)) = w0_1;
    v0_8 = v0_1;
    *(int *)((int)stk + 4) = v0_8;
    *(int *)((int)stk + 0) = 0xC201828;
    v0_2 = FUN_0c120018(v0_7, (v0_2 + 0x1), 0x63, (((int)stk + 0) + 0x8), 0xC201828, v0_8);
    v0_7 = (int)(v0_4 + 0x1) < (int)v0_3;
    *(unsigned int *)((v0_0 + 0x18)) = ((*(int *)((v0_0 + 0x18))) + 0x1);
    v0_2 = (v0_2);
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C11F054;
    goto L_C11F0FC;
    L_C11F074:;
    v0_7 = (0x3);
    goto L_C11F07A;
    L_C11F070:;
    v0_7 = (v0_5);
    goto L_C11F07A;
    L_C11F02C:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) + 0x1);
    *(unsigned int *)((v0_0 + 0x14)) = v0_1;
    *(unsigned int *)((v0_0 + 0x18)) = v0_1;
    goto L_C11F036;
}

int FUN_0c0cff96(int a4, int a5, float f4)
{
    int stk[7];
    register int t4;
    register int t6;
    register int t10;
    register int t11;
    register int t13;
    register float u17;
    register int t54;
    register int t29;
    register int t30;
    register int t37;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    int t9;
    register int t12;
    register float u14;
    register float u15;
    register float u23;
    register int t24;
    register float u31;
    register float u44;
    register float u45;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0xC);
    (((struct oC_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(a5))->v)) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct oC_float *)(a5))->v)) - ((((struct o4_float *)(a5))->v)));
    t4 = *(int *)(((int)stk + 0));
    mdl_vtx_iter_begin(t4, t4);
    for (;;) {
        t6 = mdl_vtx_iter_next();
        if (t6 != 0) {
            break;
        }
        FUN_0c03796e((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
        t10 = 0x0;
        t11 = (a5 + 0x10);
        t13 = t12;
        u17 = f4;
        for (;;) {
            if ((unsigned int)t11 >= (unsigned int)(a5 + 0x18)) {
                break;
            }
            u15 = (*(float *)((t11 + 0x0)));
            if (u15 != (0.0f)) {
                t9 = a5;
                t9 = (t9 + 0x10);
                t13 = t10;
                t9 = (t9 + t10);
                t13 = (t13 + (((int)stk + 0) + 0x14));
                u15 = (*(float *)((t9 + 0x0)));
                u14 = (*(float *)((t13 + 0x0)));
                u14 = (u14 + u15);
                u17 = u14;
                *(float *)((t13 + 0x0)) = u14;
                u15 = (*(float *)(((a5 + t10) + 0x0)));
                if (!(u15 > u17) && (t9 = a5, t9 = (t9 + 0x8), t9 = (t9 + t10), u23 = *(float *)((t9 + 0x0)), t24 = (u15 > u17), u15 = u23, !(u17 > u15))) {
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                }
            }
            t11 = (t11 + 0x4);
            t10 = (t10 + 0x4);
        }
        FUN_0c0379b6((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
    }
    t54 = t6;
    if ((*(int *)(((int)stk + 8))) != 0) {
        t29 = (*(int *)(((int)stk + 4)));
        t30 = (a5 + 0x10);
        for (;;) {
            if ((unsigned int)t30 >= (unsigned int)(a5 + 0x18)) {
                break;
            }
            u31 = (*(float *)((t30 + 0x0)));
            if (!((0.0f) > u31)) {
                u31 = (*(float *)((t29 + 0x0)));
                u31 = (-u31);
                *(float *)((t29 + 0x0)) = u31;
            }
            t30 = (t30 + 0x4);
            t29 = (t29 + 0x4);
        }
        t37 = *(int *)(((int)stk + 0));
        mdl_vtx_iter_begin(t37, t37);
        for (;;) {
            t39 = mdl_vtx_iter_next();
            if (t39 != 0) {
                break;
            }
            t41 = (FUN_0c03796e((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4)));
            t42 = 0x0;
            t43 = (a5 + 0x10);
            for (;;) {
                if ((unsigned int)t43 >= (unsigned int)(a5 + 0x18)) {
                    break;
                }
                u45 = (*(float *)((t43 + 0x0)));
                if (u45 != (0.0f)) {
                    t41 = t42;
                    u44 = (*(float *)(((((int)stk + 0) + 0x14) + t41)));
                    u45 = (*(float *)((((((int)stk + 0) + 0xC) + t41) + 0x0)));
                    u44 = (u44 + u45);
                    *(float *)(((((int)stk + 0) + 0x14) + t41)) = u44;
                }
                t43 = (t43 + 0x4);
                t42 = (t42 + 0x4);
            }
            FUN_0c0379b6((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
        }
        t54 = t39;
    }
    return t54;
}

int FUN_0c05c158(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            return FUN_0c05f7a0(0x1);
                        }
                        (((struct o0_uchar *)0xC541F40)->v) = 0x63;
                        return FUN_0c0fb8ca((*(signed char *)0xC5429CD), (*(signed char *)0xC5429CE));
                    }
                    return ((int (*)(int, int, int, int))(FUN_0c03d5e0))(0xC541F40, a5, a6, a7);
                }
                (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                if ((*(int *)0xC2577BC) == 0) {
                    FUN_0c036de8(0x0);
                    *(unsigned int *)0xC2577BC = ((*(int *)0xC2577BC) + 0x1);
                } else {
                    t0 = 0xC541F40;
                }
                return ((int (*)(int))(FUN_0c03d5e0))(t0);
            }
            return FUN_0c05fba0(0xC541F40, a5, a6, a7);
        }
    } else {
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        FUN_0c0573d8();
        game_reset_objects();
        FUN_0c120f18(0x0);
        FUN_0c0d05f2();
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    }
    if ((*(int *)0xC5421D0) == 19) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        *(unsigned int *)0xC2577BC = 0x0;
    } else {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x2);
    }
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    return 0x0;
}
