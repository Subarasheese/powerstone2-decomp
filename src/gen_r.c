/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e420(int, int);
int FUN_0c187798(void);
int FUN_0c0313e0(int a4, int a5, int a6);
int FUN_0c0de442(int a4, int a5, int a6);
int FUN_0c1415e0(int a4, int a5, int a6, int a7);
int FUN_0c168b14(int a4);
int FUN_0c03dd5c(int a4);

int FUN_0c0313e0(int a4, int a5, int a6)
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
    register float u0;

    u0 = *(float *)0xC031508;
    t0 = 0xC031508;
    if ((unsigned int)0xC1A92A0 < (unsigned int)0xC1A93D4) {
        t1 = 0xC1A92A0;
        t2 = 0xC1A92A0;
        for (;;) {
            t4 = *(signed char *)((t2 + 0x19));
            t5 = (int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u));
            t4 = FUN_0c037320((t5 >> 1), (*(int *)0xC4B40D0));
            if ((int)t4 >= 0) {
                t6 = FUN_0c03f444(0x8, 0x0, t4);
                t7 = t6;
                t8 = t6;
                if (t6 != 0) {
                    FUN_0c03733c(t7, (t5 >> 1), (*(int *)0xC4B40D0));
                    *(unsigned int *)((t7 + 0x4)) = 0xC031354;
                    (((struct oAC_ushort *)(t7))->v) = 0x1F;
                    (((struct oA9_uchar *)(t7))->v) = 0x21;
                    *(unsigned char *)((t7 + 0x2)) = 0x0;
                    (((struct o48_float *)(t7))->v) = u0;
                    (((struct o44_float *)(t7))->v) = u0;
                    (((struct o40_float *)(t7))->v) = u0;
                    t8 = (FUN_0c187798());
                }
                t2 = (t2 + 0x1C);
                t1 = (t1 + 0x1C);
                if ((unsigned int)t2 >= (unsigned int)0xC1A93D4) {
                    t3 = t8; break;
                }
                continue;
            }
            t3 = t4; break;
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c0de442(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t17;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)(((int)stk + 20));
    t1 = *(int *)0xC4B410C;
    *(unsigned int *)(((int)stk + 16)) = (t0 << 2);
    t3 = FUN_0c037320((*(int *)(((t0 << 2) + 0xC1CA2AC))), t1);
    t4 = FUN_0c03f444(0x1, 0x0, t3);
    t17 = t4;
    if (t4 != 0) {
        FUN_0c03733c(t4, (*(int *)(((*(int *)(((int)stk + 16))) + 0xC1CA2AC))), (*(int *)0xC4B410C));
        *(unsigned int *)((t4 + 0x4)) = 0xC0DE19C;
        *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t4))->v) = 0xF;
        (((struct oA9_uchar *)(t4))->v) = 0x21;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned char *)((t4 + 0x3)) = (*(signed char *)(((int)stk + 28)));
        FUN_0c07e420(t4, 0x4);
        (((struct o48_float *)(t4))->v) = 1.0f;
        (((struct o44_float *)(t4))->v) = 1.0f;
        (((struct o40_float *)(t4))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t4, 0x2, (*(int *)(((*(int *)(((int)stk + 16))) + 0xC1CA2B4))), 0x1, 0x100, 0x0, 0x0, 0x0);
        *(volatile int *)(((int)stk + 24));
        t17 = (FUN_0c187798());
    }
    return t17;
}

int FUN_0c1415e0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t20;
    register int t1;
    register int t2;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t20 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 0));
        t2 = (((struct oC4_int *)(t0))->v);
        t6 = *(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC));
        *(unsigned int *)(((int)stk + 12)) = (((t1 << 2) << 1) + 0xC2022D4);
        FUN_0c03744a(t2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((((t1 << 2) << 1) + 0xC2022D4) + 0x4))), t6);
        (((struct o68_uint *)(t2))->v) = ((*(int *)(((((*(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC2022E4))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x4001;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC141684;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = (*(short *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)(((int)stk + 4)));
        t20 = *(signed char *)((a4 + 0x3715));
        *(unsigned short *)((t0 + 0x1E)) = t20;
    }
    return t20;
}

int FUN_0c168b14(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c03f444(0x1, 0x0, 0x1);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e3ae(t0, 0x51);
                FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t1)), 0x0, 0xF0);
                FUN_0c187798();
                FUN_0c187798();
            }
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                FUN_0c187798();
                FUN_0c187798();
            }
        }
    }
    return FUN_0c03f346(a4);
}

int FUN_0c03dd5c(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC3DC264)->v) = 0x0;
    (((struct o1_uchar *)0xC3DC264)->v) = 0x1;
    t0 = FUN_0c037320((*(int *)(((((signed char)a4 << 2) << 2) + 0xC1B7244))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((signed char)a4 << 2) << 2) + 0xC1B7238) + 0xC))), (*(int *)0xC4B410C));
        *(volatile int *)((t1 + 0xC4));
        FUN_0c187798();
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC03DC8C;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o30_float *)(t1))->v) = 0.0f;
        (((struct o2C_float *)(t1))->v) = 0.0f;
        (((struct o28_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t0 = 0x28;
    }
    return t0;
}
