/* game/unsorted: functions 0C169524-0C16AC2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c058716(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c064f80(int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c169568(int, int, int);
int FUN_0c169706(int, int);
int FUN_0c169922(int, int);
int FUN_0c169dbc(int, int);
int FUN_0c169f4a(int, int, int);
int FUN_0c16a360(int, int);
int FUN_0c16a40c(int);
int FUN_0c16a464(int, int);
int FUN_0c16a53e(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1697b8(int a4, int a5, int a6, int a7);
int FUN_0c1699b8(int a4, int a5, int a6, int a7);
int FUN_0c16a7e4(int a4);
int FUN_0c16a968(int a4);
int FUN_0c16ab9e(int a4, int a5);

int FUN_0c1697b8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u16;
    register int t17;
    register int t24;
    register int t35;
    register int t36;
    register int t38;
    register float u47;
    register int t48;
    register int t55;
    register int t59;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.100000001f);
                t59 = (FUN_0c1636ae((a4 + 0x28), 0x0, (*(signed char *)((a4 + 0x1)))));
            } else {
                t59 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            FUN_0c169568(a4, 0x0, 0x71C);
            FUN_0c169568(a4, 0x1, 0xFFFFF1C8);
            FUN_0c169568(a4, 0x2, 0xFFFFF556);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
                (((struct o48_float *)(a4))->v) = 1.20000005f;
            }
            u16 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u16;
            (((struct o40_float *)(a4))->v) = u16;
            t17 = FUN_0c064f80(a4);
            if (t17 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t59 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t59 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        FUN_0c187798((((short)t0 * (short)0x3938) + 0xC532498), a5, a6);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t35 = FUN_0c058716(a4, ((int)stk + 0));
        t36 = t35;
        if ((int)t35 > (int)0x2E38) {
            t36 = 0x2E38;
        }
        t38 = t36;
        if ((int)t36 < (int)0x11C7) {
            t38 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t38;
        FUN_0c058542(a4, 0x11C7, 20.0f);
        FUN_0c169568(a4, 0x0, 0x71C);
        FUN_0c169568(a4, 0x1, 0xFFFFF1C8);
        FUN_0c169568(a4, 0x2, 0xFFFFF556);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u47 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u47;
        (((struct o40_float *)(a4))->v) = u47;
        t48 = FUN_0c064f80(a4);
        if (t48 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t55 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t55 - 1);
        t59 = (short)(t55 - 1);
        if ((int)(short)(t55 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t59 = 0x14;
        }
    }
    return t59;
}

int FUN_0c1699b8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u11;
    register int t12;
    register int t19;
    register int t24;
    register int t35;
    register int t36;
    register int t38;
    register float u44;
    register int t45;
    register int t52;
    register int t57;
    register int t61;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t61 = (FUN_0c169dbc(a4, (*(signed char *)((a4 + 0x2)))));
            } else {
                t61 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
                (((struct o48_float *)(a4))->v) = 1.20000005f;
            }
            u11 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u11;
            (((struct o40_float *)(a4))->v) = u11;
            t12 = FUN_0c064f80(a4);
            if (t12 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            t19 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t19 - 1);
            if ((int)(short)(t19 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0xA;
                FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t61 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t61 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        FUN_0c187798((((short)t0 * (short)0x3938) + 0xC532498), a5, a6);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t35 = FUN_0c058716(a4, ((int)stk + 0));
        t36 = t35;
        if ((int)t35 > (int)0x2E38) {
            t36 = 0x2E38;
        }
        t38 = t36;
        if ((int)t36 < (int)0x11C7) {
            t38 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t38;
        FUN_0c058542(a4, 0x11C7, 30.0f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u44 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u44;
        (((struct o40_float *)(a4))->v) = u44;
        t45 = FUN_0c064f80(a4);
        if (t45 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t52 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t52 - 1);
        if ((int)(short)(t52 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
        }
        t57 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t57 - 1);
        t61 = (short)(t57 - 1);
        if ((int)(short)(t57 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t61 = 0x14;
        }
    }
    return t61;
}

int FUN_0c16a7e4(int a4)
{
    int stk[3];
    register int t0;
    register int t14;
    register int t20;
    register int t15;
    register int t37;
    register int t43;
    register int t38;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c16a464(a4, 0x0);
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return FUN_0c16a53e(a4, 0x0);
        }
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x5;
            FUN_0c16a464(a4, 0x1);
            FUN_0c16a53e(a4, 0x1);
            FUN_0c169922(a4, 0x0);
            FUN_0c169706(a4, 0x0);
            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x73, (a4 + 0x28));
        }
        FUN_0c16a40c(a4);
        t14 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t14 - 1);
        t20 = 0x22;
        if ((int)(short)(t14 - 1) <= 0) {
            t15 = *(signed char *)((a4 + 0x18));
            (((struct o18_uchar *)(a4))->v) = (t15 - 1);
            if ((int)(signed char)(t15 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t20 = 0x17;
        }
        return t20;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x3;
    if ((*(signed char *)((a4 + 0x17))) == 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x5;
        FUN_0c16a464(a4, 0x1);
        FUN_0c16a53e(a4, 0x1);
        FUN_0c169922(a4, 0x0);
        FUN_0c169706(a4, 0x0);
        FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x73, (a4 + 0x28));
    }
    FUN_0c16a40c(a4);
    t37 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t37 - 1);
    t43 = 0x22;
    if ((int)(short)(t37 - 1) <= 0) {
        t38 = *(signed char *)((a4 + 0x18));
        (((struct o18_uchar *)(a4))->v) = (t38 - 1);
        if ((int)(signed char)(t38 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t43 = 0x17;
    }
    return t43;
}

int FUN_0c16a968(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x16));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C16A97E;
    if ((v0_0 == 1)) goto L_C16A992;
    FUN_0c16a464(v0_1, 0x0);
    (((struct o15_uchar *)(v0_1))->v) = 0x1;
    (((struct o16_uchar *)(v0_1))->v) = 0x0;
    return FUN_0c16a53e(v0_1, 0x0);
    L_C16A992:;
    v0_2 = *(signed char *)((v0_1 + 0x17));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C16A9A2;
    if ((v0_0 == 1)) goto L_C16A9D8;
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 - 1);
    v0_0 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C16AA46;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    v0_0 = (0x16);
    L_C16AA46:;
    return v0_0;
    L_C16A9D8:;
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 - 1);
    v0_0 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C16AA46;
    FUN_0c16a360(v0_1, 0x1);
    FUN_0c169706(v0_1, 0x3);
    FUN_0c059e0e((*(signed char *)((v0_1 + 0x1))), 0x75, (v0_1 + 0x28));
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    (((struct o22_ushort *)(v0_1))->v) = 0xA;
    v0_0 = (0x22);
    goto L_C16AA46;
    L_C16A9A2:;
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    (((struct o22_ushort *)(v0_1))->v) = 0x3C;
    FUN_0c16a464(v0_1, 0x1);
    FUN_0c16a53e(v0_1, 0x1);
    FUN_0c16a360(v0_1, 0x0);
    FUN_0c169706(v0_1, 0x2);
    FUN_0c059e0e((*(signed char *)((v0_1 + 0x1))), 0x75, (v0_1 + 0x28));
    goto L_C16A9D8;
    L_C16A97E:;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_1))->v) = 0x0;
    (((struct o18_uchar *)(v0_1))->v) = 0x3;
    goto L_C16A992;
}

int FUN_0c16ab9e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, (*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC16AA88;
        *(unsigned char *)((t2 + 0x2)) = a5;
        t3 = ((int (*)(int))(FUN_0c187798))(0x1);
        t3 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oAA_uchar *)(t2))->v) = t0;
        (((struct oAB_uchar *)(t2))->v) = 0x2;
        t1 = 0xAB;
    }
    return t1;
}
