/* Straight-line functions with calls and guards (batch gen_lv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c14cd44(int a4, int a5);
int FUN_0c132ba4(int a4, int a5);

int FUN_0c14cd44(int a4, int a5)
{
    register int t3;
    register int t4;

    t3 = FUN_0c037320(0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t4 = FUN_0c03f444(0x1, 0x0, t3);
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c03733c(t4, 0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c187798();
        FUN_0c0582de((t4 + 0x28), (((((struct oD4_int *)(a4))->v)) + 0x28));
        FUN_0c187798();
        *(unsigned char *)((t4 + 0x2)) = a5;
        *(unsigned int *)((t4 + 0x4)) = 0xC14CAD2;
        (((struct oA8_uchar *)(t4))->v) = 0x1;
        (((struct oAC_ushort *)(t4))->v) = 0xF;
        (((struct oA9_uchar *)(t4))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t4 + 0x10)) = a4;
        (((struct o48_float *)(t4))->v) = 1.0f;
        (((struct o44_float *)(t4))->v) = 1.0f;
        (((struct o40_float *)(t4))->v) = 1.0f;
        FUN_0c064d24(t4, 0x1, 0x20, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((t4 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t4, 0x60);
    }
    return t4;
}

int FUN_0c132ba4(int a4, int a5)
{
    int stk[5];
    register int t0;
    register float u5;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC132D70;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c187798();
        FUN_0c187798();
        u5 = *(float *)0xC132D08;
        (((struct o48_float *)(t0))->v) = u5;
        (((struct o44_float *)(t0))->v) = u5;
        (((struct o40_float *)(t0))->v) = u5;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        t11 = (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2))));
        *(int *)((int)stk + 12) = t11;
        t12 = FUN_0c179ac0();
        t13 = ((~(((~t12) + 0x1) & 0xF)) + 0x1);
        if ((int)t12 >= 0) {
            t13 = (t12 & 0xF);
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), t13, 0x2, t11);
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x36, 0x2, 0x100, 0x0, 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x60);
    }
    return t0;
}
