/* Straight-line functions with calls and guards (batch gen_pj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c15a808(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c135b00(int a4, int a5, int a6, int a7, float f4);
int FUN_0c13dc4c(int a4);
int FUN_0c15abcc(int a4);
int FUN_0c15e4d2(int a4, int a5);

int FUN_0c135b00(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t21;
    register float u8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 8)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC135C10;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        u8 = *(float *)(((int)stk + 8));
        (((struct o48_float *)(t0))->v) = u8;
        (((struct o44_float *)(t0))->v) = u8;
        (((struct o40_float *)(t0))->v) = u8;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        t21 = *(short *)(((int)stk + 16));
        *(unsigned short *)((t0 + 0x1C)) = t21;
    }
    return t21;
}

int FUN_0c13dc4c(int a4)
{
    register int t0;
    register int t15;
    register float u4;
    register int t6;
    register int t7;
    register int t13;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13DBE2;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u4 = *(float *)0xC13DDA8;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x34)) = 0x4000;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x34)));
        *(unsigned int *)((t0 + 0x3C)) = 0x4000;
        t6 = 0x0;
        t7 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t7) + 0x0))), 0x0, 0x5, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x6)) = 0xF;
            t13 = *(int *)((((0xC4 + t0) + t7) + 0x0));
            t7 = (t7 + 0x4);
            (((struct o78_uint *)(t13))->v) = t6;
            t6 = (t6 + 0x8000);
            if ((unsigned int)t7 >= (unsigned int)0x8) {
                break;
            }
        }
        t15 = 0x78;
    }
    return t15;
}

int FUN_0c15abcc(int a4)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t8;
    register int t9;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (((t3 << 8) << 2) << 2);
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0xF)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x4)) = (((t6 << 8) << 2) << 2);
        t8 = FUN_0c179ac0();
        t9 = ((~(((~t8) + 0x1) & 0xF)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x8)) = (((t9 << 8) << 2) << 2);
        *(float *)(((int)stk + 24)) = (((((struct o4C_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 28)) = (((((struct o50_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 32)) = (((((struct o54_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        FUN_0c15a808((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    }
    return (FUN_0c03f346(a4));
}

int FUN_0c15e4d2(int a4, int a5)
{
    register int t0;
    register int t22;
    register int t1;
    register int t2;
    register float u17;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t22 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x239;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC15E384;
        *(unsigned char *)((t0 + 0x2)) = a5;
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x3);
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), t2, 0x55, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        if (a5 != 0) {
            u17 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x28));
        } else {
            u17 = ((float)((int)((int)(FUN_0c179ac0()) % (int)0x32)) + 10.0f);
        }
        (((struct o2C_float *)(t0))->v) = u17;
        FUN_0c0582de((t0 + 0x28), ((*(int *)((t0 + 0x10))) + 0x64));
        (((struct o50_float *)(t0))->v) = -1.0f;
        t22 = 0x50;
    }
    return t22;
}
