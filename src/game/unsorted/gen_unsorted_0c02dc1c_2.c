/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o2C_int { char p[0x2C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02e078(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02e14a(void);
int FUN_0c02e346(void);
int FUN_0c02e43c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02e842(void);
int FUN_0c02e898(void);
int FUN_0c02e978(float, float);
int FUN_0c02f874(int, int);
int FUN_0c03ee04(int);
int FUN_0c056eae(int);
int FUN_0c056eee(void);
int FUN_0c057402(void);
int FUN_0c058090(void);
int math_mat_get_translate(int, int);
int FUN_0c07bb70(int);
int gfx_set_background_color(int, int, int, float);
int FUN_0c177b10(int, int, int, int, int);
int FUN_0c177bc0(int, int);
int FUN_0c17a6d0(int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int nlRotateAY(int);
int nlScaleV(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c17d6d0(float);
int FUN_0c17e390(int);
int FUN_0c17e740(float, float, float);
int FUN_0c187798(int, int, int);
int FUN_0c02de40(int a4, int a5, int a6);
int FUN_0c02e2a8(void);
int FUN_0c02e7c4(void);
int FUN_0c02e90c(void);
int FUN_0c02e9d4(float f4);


int FUN_0c02e2a8(void)
{
    int stk[9];
    register int t2;
    register int t8;
    register float u14;
    register float u15;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t34;
    int t28;
    register int t30;
    register int t31;

    t8 = *(int *)0xC532454;
    t2 = (nlSelectMatrixStack(0x1));
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t7 = 0xA8;
        t7 = (t7 + t8);
        t5 = (*(signed char *)((t7 + 0x0)));
        if (t5 != 0) {
            t5 = 0xC03EE04;
            t2 = (*(signed char *)((t7 + 0x1)));
            t2 = (FUN_0c03ee04(t2));
            t2 = (*(short *)((t7 + 0x4)));
            t2 = (unsigned short)t2;
            if ((t2 & 0x200) != 0) {
                t2 = 0x14;
                t5 = 0xC17E740;
                u14 = *(float *)((t7 + t2));
                t2 = 0x10;
                u15 = *(float *)((t7 + t2));
                t2 = 0xC;
                t2 = (FUN_0c17e740((*(float *)((t7 + t2))), u15, u14));
            }
            t6 = t7;
            t6 = (t6 + 0x1C);
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            for (;;) {
                t2 = 0xC0;
                t3 = (*(int *)(((int)stk + 0)));
                t4 = (*(int *)((t8 + t2)));
                if ((int)t3 >= (int)t4) {
                    break;
                }
                t7 = (*(int *)((t6 + 0x0)));
                t4 = (*(int *)((t7 + 0xC)));
                if ((t4 != 0) && (t28 = *(int *)0xC20EA8C, t2 = t28, t2 != 3)) {
                    t2 = (FUN_0c02f874(t8, t7));
                } else {
                    t30 = t3;
                    t31 = t4;
                }
                t3 = t30;
                t4 = t31;
                t2 = (FUN_0c02e078(t8, t7, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                t5 = (*(int *)(((int)stk + 0)));
                t6 = (t6 + 0x4);
                t5 = (t5 + 0x1);
                *(unsigned int *)(((int)stk + 0)) = t5;
            }
        } else {
            t34 = t5;
        }
        t8 = (*(int *)((t8 + 0xC)));
        t5 = t34;
    }
    return t2;
}

int FUN_0c02e7c4(void)
{
    int stk[7];
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t27;
    int t18;

    if ((*(signed char *)0xC540A20) != 0) {
        nlSelectMatrixStack(0x1);
        FUN_0c03ee04((*(signed char *)0xC540A21));
        t4 = (((struct o0_short *)0xC540A24)->v);
        t9 = (unsigned short)t4;
        if (((unsigned short)t4 & 0x200) != 0) {
            t9 = (FUN_0c17e740(((((struct o8_float *)0xC540A24)->v)), ((((struct oC_float *)0xC540A24)->v)), ((((struct o10_float *)0xC540A24)->v))));
        }
        t12 = (((struct o14_int *)0xC540A24)->v);
        if ((int)t12 > 0) {
            t13 = t9;
            t14 = 0xC540A3C;
            t15 = 0x0;
            for (;;) {
                t16 = *(int *)((t14 + 0x0));
                t14 = (t14 + 0x4);
                if (((*(int *)((t16 + 0xC))) != 0) && (t18 = *(int *)0xC20EA8C, t13 = t18, t13 != 3)) {
                    t13 = (FUN_0c02f874(0xC540978, t16));
                }
                t13 = (FUN_0c02e078(0xC540978, t16, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                t15 = (t15 + 0x1);
                if ((int)t15 >= (int)t12) {
                    break;
                }
            }
            t27 = t13;
        } else {
            t27 = t9;
        }
    }
    return t27;
}


int FUN_0c02e9d4(float f4)
{
    register int t0;
    int t1;

    if (((((struct o0_int *)0xC542430)->v)) == 0) {
        (((struct o4_uint *)0xC542430)->v) = 0x0;
    } else {
        (((struct o4_uint *)0xC542430)->v) = 0x1;
        if (((((struct o2C_int *)0xC542430)->v)) != 0) {
        } else {
            if ((*(signed char *)0xC542454) != 0) {
                if (((*(signed char *)0xC54208F) == 0) && ((t0 = *(signed char *)0xC542092, t0 == 0) && (t1 = *(signed char *)0xC478BFC, t1 == 0))) {
                    (((struct o25_uchar *)0xC542430)->v) = ((*(signed char *)0xC542455) - 1);
                }
                t0 = *(signed char *)0xC542454;
                if (t0 != 1) {
                    if (t0 != 2) {
                    } else {
                        gfx_set_background_color(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, f4);
                    }
                } else {
                    gfx_set_background_color(0xFFC0C0C0, 0xFFC0C0C0, 0xFFC0C0C0, f4);
                }
                if ((int)(*(signed char *)0xC542455) > 0) {
                } else {
                    (((struct o25_uchar *)0xC542430)->v) = 0x0;
                    (((struct o24_uchar *)0xC542430)->v) = 0x0;
                }
            } else {
                gfx_set_background_color(((((struct o10_int *)0xC542430)->v)), ((((struct o14_int *)0xC542430)->v)), ((((struct o18_int *)0xC542430)->v)), f4);
                if ((*(signed char *)0xC5429A8) != 2) {
                    t0 = *(signed char *)0xC54232C;
                    if (t0 == 0) {
                        FUN_0c177b10(0x0, 0x0, (*(int *)((((((((signed char)t0 << 1) + (signed char)t0) << 2) << 1) + 0xC1A9064) + 0x0))), (*(int *)((((((((signed char)t0 << 1) + (signed char)t0) << 2) << 1) + 0xC1A9064) + 0x4))), 0xF);
                        (((struct o4_uint *)0xC20EA8C)->v) = (*(signed char *)0xC5421DC);
                        (((struct o0_uint *)0xC20EA8C)->v) = 0x0;
                        nlSelectMatrixStack(0x2);
                        FUN_0c17b1a0(((((((struct o4_int *)0xC20EA8C)->v)) * 0x2F8) + 0xC541134));
                        FUN_0c17a6d0(((((struct o0_int *)0xC20EA8C)->v)));
                        FUN_0c02e90c();
                    } else {
                        (((struct o0_uint *)0xC20EA8C)->v) = 0x0;
                        FUN_0c177bc0(0xF, 0x0);
                        t0 = *(signed char *)0xC54232C;
                        FUN_0c177b10(0x0, 0x0, (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x0))), (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x4))), 0xF);
                        (((struct o0_uint *)0xC20EA8C)->v) = 0x2;
                        (((struct o4_uint *)0xC20EA8C)->v) = (*(signed char *)0xC5421DC);
                        FUN_0c02e978(((((struct o8_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064)))->v)), ((((struct oC_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064)))->v)));
                        FUN_0c17a6d0(((((struct o0_int *)0xC20EA8C)->v)));
                        FUN_0c02e90c();
                        FUN_0c177bc0(0xF, ((((struct o0_int *)0xC20EA8C)->v)));
                        FUN_0c177b10(0x0, 0x0, (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x0))), (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x4))), 0xF);
                        (((struct o0_uint *)0xC20EA8C)->v) = 0x3;
                        (((struct o4_uint *)0xC20EA8C)->v) = ((((((struct o4_int *)0xC20EA8C)->v)) + 0x1) & 0x3);
                        FUN_0c02e978(((((struct o10_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064)))->v)), ((((struct o14_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064)))->v)));
                        FUN_0c17a6d0(((((struct o0_int *)0xC20EA8C)->v)));
                        FUN_0c02e90c();
                        FUN_0c177bc0(0xF, ((((struct o0_int *)0xC20EA8C)->v)));
                        FUN_0c177b10(0x0, 0x0, (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x0))), (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC1A9064) + 0x4))), 0xF);
                        (((struct o0_uint *)0xC20EA8C)->v) = 0x0;
                        (((struct o4_uint *)0xC20EA8C)->v) = (*(signed char *)0xC5421DC);
                        FUN_0c17a6d0(0x0);
                    }
                } else {
                    FUN_0c02e90c();
                }
                FUN_0c02e898();
                FUN_0c02e2a8();
                FUN_0c02e346();
                FUN_0c058090();
            }
            FUN_0c17e740(1.0f, 1.0f, 1.0f);
            FUN_0c057402();
            t0 = *(signed char *)0xC5429A8;
            t1 = t0;
            if (t0 != 2) {
                t1 = (FUN_0c177bc0(0xF, ((((struct o0_int *)0xC20EA8C)->v))));
            }
            *(unsigned char *)0xC54232C = 0x0;
            t0 = t1;
        }
        t1 = t0;
    }
    return t1;
}
