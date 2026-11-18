/* game/demo: functions 0C1171F0-0C11855A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c02ee3e(void);
extern int FUN_0c02f6da();
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0cff2e(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c187a88(int, int, int);
int vsprintf(int, int, int);
int FUN_0c1171f0(int a4);
int FUN_0c117234(int a4, int a5, int a6, int a7);
int FUN_0c1173a0(void);
int FUN_0c1173dc(int a4, int a5, int a6, int a7);
int FUN_0c1174e4(int a4, int a5, int a6, int a7);
int FUN_0c1175b6(int a4);
int FUN_0c11791c(void);
int FUN_0c117944(Stk3 s);
int FUN_0c117a6e(Stk3 s);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c117e9a(void);
int FUN_0c117ebe(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c11835a(int a4, int a5, int a6, int a7);
int FUN_0c118412(int a4);
int FUN_0c11846a(int a4, int a5, int a6, int a7);

int FUN_0c1171f0(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC117314)->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC117314)->v);
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + ((((struct o8_float *)0xC117314)->v)));
    (((struct o40_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o44_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o48_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    return 0x48;
}

int FUN_0c117234(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 != 10) {
                if (t0 != 11) {
                    t1 = t0;
                    if (t0 == 99) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                u0 = *(float *)0xC1173CC;
                t0 = 0x0;
                for (;;) {
                    t1 = ((0xC4 + a4) + t0);
                    t0 = (t0 + 0x4);
                    (((struct o94_float *)((*(int *)((t1 + 0x0)))))->v) = u0;
                    if ((unsigned int)t0 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
                t0 = (t0 + 0x4);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                if ((unsigned int)t0 >= (unsigned int)0x8) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, t1, a6, a7);
            }
            return (short)(t0 + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), ((*(int *)0xC474718) + 0x1), 0xB, (*(int *)0xC4B410C));
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            t0 = (t0 + 0x4);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 300.0f);
            (((struct o94_float *)(t1))->v) = -18.75f;
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c1173a0(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC117234;
        return t0;
    }
    return 0x0;
}


int FUN_0c1174e4(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = (*(int *)((((((int)((int)a5 / (int)0x12)) * 0x3C) + (*(int *)((((((a6 << 2) << 2) << 1) + (a7 + 0x10)) + 0x1C)))) + 0x3C)));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    FUN_0c187a88((((0x90 + a4) + 0x4) & 0xFFFFFFF8), (*(int *)((a4 + 0x8))), 0xF8);
    *(unsigned int *)((a4 + 0x8)) = (((0x90 + a4) + 0x4) & 0xFFFFFFF8);
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    t7 = (int)((int)(*(int *)(((int)stk + 0))) % (int)0x12);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0xC);
    (((struct oC_float *)(((int)stk + 0)))->v) = (*(float *)(((((t7 << 2) << 2) + 0xC291940) + 0x0)));
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = ((((struct oC_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0xC) + 0x8);
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = (*(float *)(((((t7 << 2) << 2) + 0xC291940) + 0x0)));
    (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v) = ((((struct o4_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0xC) + 0x10);
    *(unsigned int *)(((int)stk + 4)) = ((((t7 << 2) << 2) + 0xC291940) + 0x8);
    (((struct o10_float *)((((int)stk + 0) + 0xC)))->v) = ((((struct o8_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    (((struct o4_float *)((*(int *)(((int)stk + 8)))))->v) = ((((struct oC_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    (((struct o18_float *)((((int)stk + 0) + 0xC)))->v) = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x18)))->v) = ((((struct o4_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    return (FUN_0c0cff2e((*(int *)((a4 + 0x8))), (*(int *)(((int)stk + 0)))));
}

int FUN_0c1175b6(int a4)
{
    int stk[2];
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t12;
    int t27;

    t14 = *(int *)0xC47471C;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)t14 >= (int)0x3E8) {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if ((int)(*(int *)0xC47471C) >= (int)0xF4240) {
        t11 = (((struct oF0_int *)(a4))->v);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
        t11 = 0xF0;
    }
    t13 = 0x989680;
    t15 = 0x9;
    for (;;) {
        if ((int)t15 <= (int)0x1) {
            break;
        }
        t11 = t13;
        t11 = ((int)((int)t14 / (int)t11));
        *(unsigned int *)(((int)stk + 0)) = t11;
        t11 = t13;
        t11 = ((int)((int)t14 % (int)t11));
        t14 = t11;
        t11 = 0xA;
        t11 = ((int)((int)t13 / (int)t11));
        t12 = t15;
        t12 = (t12 << 2);
        t13 = t11;
        t11 = (FUN_0c03744a((*(int *)((((0xC4 + a4) + t12) + 0x0))), (*(int *)(((int)stk + 0))), 0x2, (*(int *)0xC4B410C)));
        t12 = (t12 + (0xC4 + a4));
        t12 = (*(int *)((t12 + 0x0)));
        if ((*(int *)(((int)stk + 0))) == 0) {
            t11 = (*(int *)(((int)stk + 4)));
            if ((t11 != 1) && (t27 = (t11 == 1), t11 = t15, t11 != 2)) {
                *(unsigned char *)((t12 + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((t12 + 0x0)) = 0x1;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            *(unsigned char *)((t12 + 0x0)) = 0x1;
        }
        t11 = 0xC4;
        t11 = (FUN_0c17c130((t12 + 0x6C), (((((t15 - 2) << 1) + (t15 - 2)) << 2) + 0xC291A60), ((*(int *)((a4 + t11))) + 0x6C)));
        t15 = (t15 - 1);
    }
    return t11;
}

int FUN_0c11791c(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x12);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1176CE;
        return t0;
    }
    return 0x0;
}

int FUN_0c117944(Stk3 s)
{
    int stk[19];
    register int t4;
    register int t6;
    register int t8;
    register int t12;
    register int t13;
    register int t18;
    register int t24;
    register int t32;
    register int t25;
    register int t5;

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    (((struct o4_uint *)0xC474720)->v) = ((((struct o0_int *)0xC474720)->v));
    (((struct o0_uint *)0xC474720)->v) = s.w[0];
    if (((((struct o4_int *)0xC474720)->v)) != s.w[0]) {
        FUN_0c02ee3e();
        if (s.w[0] == -1) {
            *(int *)((int)stk + 16) = 0xC1FC7EC;
            *(int *)((int)stk + 12) = 0x0;
            *(int *)((int)stk + 8) = 0x18;
            t25 = (((int (*)(int, int, int, int, int, int, int))(FUN_0c02f6da))(0x0, 0x0, 0x0, 0x18, 0x18, 0x0, 0xC1FC7EC));
        } else {
            t4 = 0x0;
            t6 = 0x0;
            for (;;) {
                t8 = *(short *)((((t4 << 2) << 2) + (*(int *)((0xC295DFC + (s.w[0] << 2))))));
                if (t8 == -1) {
                    break;
                }
                t12 = *(int *)((((*(int *)((0xC295DFC + (s.w[0] << 2)))) + t6) + 0x8));
                t13 = ((((int)stk + 20) + 0x20) + 0x4);
                if ((0x3 & ((((int)stk + 20) + 0x20) + 0x4)) != 0) {
                    t13 = ((((int)stk + 20) + 0x20) + 0x8);
                }
                t5 = 0xC473A44;
                t5 = (t5 + (vsprintf(0xC473A44, t12, t13)));
                *(unsigned char *)((t5 + 0x0)) = 0x0;
                *(int *)((int)stk + 16) = 0xC473A44;
                *(int *)((int)stk + 12) = 0xC1FC7F0;
                t5 = (*(int *)((0xC295DFC + (s.w[0] << 2))));
                t5 = (t5 + t6);
                t18 = (*(short *)((t5 + 0x6)));
                *(int *)((int)stk + 8) = t18;
                *(int *)((int)stk + 4) = 0x18;
                t24 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c02f6da))((int)(((((struct o0_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t5 + 0x0)))), (int)(((((struct o4_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t5 + 0x2)))), (*(short *)((t5 + 0x4))), 0x18, 0x18, t18, 0xC1FC7F0, 0xC473A44);
                t6 = (t6 + 0x10);
                t4 = (t4 + 0x1);
            }
            t25 = t8;
        }
        t32 = t25;
    }
    return t32;
}

int FUN_0c117a6e(Stk3 s)
{
    int stk[19];
    register int t3;
    register int t5;
    register int t7;
    register int t11;
    register int t12;
    register int t17;
    register int t23;
    register int t24;
    register int t4;

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    (((struct o4_uint *)0xC474720)->v) = ((((struct o0_int *)0xC474720)->v));
    (((struct o0_uint *)0xC474720)->v) = s.w[0];
    FUN_0c02ee3e();
    if (s.w[0] == -1) {
        *(int *)((int)stk + 16) = 0xC1FC7EC;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x18;
        t24 = (((int (*)(int, int, int, int, int, int, int))(FUN_0c02f6da))(0x0, 0x0, 0x0, 0x18, 0x18, 0x0, 0xC1FC7EC));
    } else {
        t3 = 0x0;
        t5 = 0x0;
        for (;;) {
            t7 = *(short *)((((t3 << 2) << 2) + (*(int *)((0xC295DFC + (s.w[0] << 2))))));
            if (t7 == -1) {
                break;
            }
            t11 = *(int *)((((*(int *)((0xC295DFC + (s.w[0] << 2)))) + t5) + 0x8));
            t12 = ((((int)stk + 20) + 0x20) + 0x4);
            if ((0x3 & ((((int)stk + 20) + 0x20) + 0x4)) != 0) {
                t12 = ((((int)stk + 20) + 0x20) + 0x8);
            }
            t4 = 0xC473A44;
            t4 = (t4 + (vsprintf(0xC473A44, t11, t12)));
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(int *)((int)stk + 16) = 0xC473A44;
            *(int *)((int)stk + 12) = 0xC1FC7F0;
            t4 = (*(int *)((0xC295DFC + (s.w[0] << 2))));
            t4 = (t4 + t5);
            t17 = (*(short *)((t4 + 0x6)));
            *(int *)((int)stk + 8) = t17;
            *(int *)((int)stk + 4) = 0x18;
            t23 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c02f6da))((int)(((((struct o0_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t4 + 0x0)))), (int)(((((struct o4_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t4 + 0x2)))), (*(short *)((t4 + 0x4))), 0x18, 0x18, t17, 0xC1FC7F0, 0xC473A44);
            t5 = (t5 + 0x10);
            t3 = (t3 + 0x1);
        }
        t24 = t7;
    }
    return t24;
}

int FUN_0c117d54(void)
{
    return (*(int *)0xC47472C);
}

int FUN_0c117e76(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC117D5A;
        *(unsigned char *)((t0 + 0x2)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c117e9a(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC117D5A;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}


int FUN_0c11835a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 10) {
                if (t0 != 11) {
                    t1 = t0;
                    if (t0 != 99) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        t1 = 0x0;
                    }
                    return t1;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x1F) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t1 + 0x1);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (((struct o22_short *)(a4))->v);
        if ((int)t1 >= (int)(*(int *)((0xC291C68 + (t2 << 2))))) {
            break;
        }
        t0 = 0x8;
        t3 = FUN_0c03f444(t0, 0x1, 0x2);
        t0 = t3;
        if (t3 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC117EBE;
            *(unsigned char *)((t0 + 0x2)) = t1;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct o22_ushort *)(t0))->v) = ((((struct o22_short *)(a4))->v));
        }
        t1 = (t1 + 0x1);
    }
    return (t2 << 2);
}

int FUN_0c118412(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0xA);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11835A;
        (((struct o22_ushort *)(t0))->v) = a4;
        return t0;
    }
    return 0x0;
}

