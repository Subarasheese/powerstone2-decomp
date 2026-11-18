/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05ab04(int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int nlRand(void);
int FUN_0c0cf2f4(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c16defa(int a4, int a5);
int FUN_0c0c9fea(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0ce760(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0cf2f4(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t3;
    register int t23;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((a4 * 0x34) + 0xC2738B9)));
    t1 = *(signed char *)(((int)stk + 16));
    t2 = *(int *)0xC4B40CC;
    *(unsigned int *)(((int)stk + 12)) = t1;
    t3 = FUN_0c037320(t1, t2);
    t23 = 0x0;
    if ((int)t3 >= 0) {
        t4 = FUN_0c03f444(0x9, 0x0, 0x1);
        t23 = 0x0;
        if (t4 != 0) {
            t6 = (((struct oC4_int *)(t4))->v);
            FUN_0c03744a(t6, (0xFFFFFF7F + a4), (*(int *)(((int)stk + 12))), (*(int *)0xC4B40CC));
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            *(unsigned short *)((t6 + 0x6)) = 0xF;
            (((struct o80_uint *)(t6))->v) = 0xFFFFF1C8;
            FUN_0c0c25c4(t4);
            *(unsigned int *)((t4 + 0x4)) = 0xC0CF280;
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x40;
            (((struct o41D_uchar *)(t4))->v) = 0x0;
            (((struct o41C_uchar *)(t4))->v) = a4;
            (((struct o424_uchar *)(t4))->v) = (*(int *)(((int)stk + 4)));
            (((struct o1B_uchar *)(t4))->v) = (*(int *)(((int)stk + 0)));
            FUN_0c0c2ab6(t4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((t4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o420_ushort *)(t4))->v) = 0x12C;
            FUN_0c0c212c(t4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
            *(unsigned int *)((t4 + 0x38)) = a9;
            FUN_0c0c2aa2(t4, a8);
            FUN_0c0c241a(t4);
            t23 = t4;
        }
    }
    return t23;
}

int FUN_0c16defa(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t8;

    t1 = FUN_0c037320(0x28, (*(int *)0xC4B40CC));
    if (t1 != 0) {
        t2 = FUN_0c03f444(0x1, 0x0, 0x1);
        if (t2 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x28, (*(int *)0xC4B40CC));
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t2 + 0x4)) = 0xC16DE9C;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a5); }
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0x2F;
            t8 = (((struct oC4_int *)(t2))->v);
            (((struct o8C_float *)(t8))->v) = 1.0f;
            (((struct o88_float *)(t8))->v) = 1.0f;
            (((struct o84_float *)(t8))->v) = 1.0f;
            (((struct o80_uint *)(((((struct oC4_int *)(t2))->v))))->v) = (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f);
            FUN_0c07e3ae(t2, 0x2A);
            FUN_0c0c2ab6(t2, 0x35);
            return FUN_0c05ab04(0x6C);
        }
        return t2;
    }
    return t1;
}

int FUN_0c0c9fea(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1));
    t1 = FUN_0c037320((signed char)t0, (*(int *)0xC4B40D8));
    t2 = t0;
    t0 = t1;
    if ((int)t1 < 0) {
        t2 = 0x0;
        t0 = (FUN_0c037320(0x0, (*(int *)0xC4B40D8)));
    }
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, (signed char)t2, (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0C9F50;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x40;
        FUN_0c0c25c4(t1);
        (((struct o41D_uchar *)(t1))->v) = 0x0;
        (((struct o41C_uchar *)(t1))->v) = a4;
        (((struct o424_uchar *)(t1))->v) = a5;
        (((struct o1B_uchar *)(t1))->v) = a6;
        FUN_0c0c2ab6(t1, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t1 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
        (((struct o420_ushort *)(t1))->v) = (*(short *)(((0xC2738B8 + (a4 * 0x34)) + 0x1A)));
        FUN_0c0c212c(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a7); }
        FUN_0c0c2aa2(t1, a8);
        t0 = t1;
    }
    return t0;
}

int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1));
    t1 = FUN_0c037320((signed char)t0, (*(int *)0xC4B40D8));
    t2 = t0;
    t0 = t1;
    if ((int)t1 < 0) {
        t2 = 0x0;
        t0 = (FUN_0c037320(0x0, (*(int *)0xC4B40D8)));
    }
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, (signed char)t2, (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0CA5D8;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x40;
        FUN_0c0c25c4(t1);
        (((struct o41D_uchar *)(t1))->v) = 0x0;
        (((struct o41C_uchar *)(t1))->v) = a4;
        (((struct o424_uchar *)(t1))->v) = a5;
        (((struct o1B_uchar *)(t1))->v) = a6;
        FUN_0c0c2ab6(t1, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t1 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
        (((struct o420_ushort *)(t1))->v) = (*(short *)(((0xC2738B8 + (a4 * 0x34)) + 0x1A)));
        FUN_0c0c212c(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a7); }
        FUN_0c0c2aa2(t1, a8);
        t0 = t1;
    }
    return t0;
}

int FUN_0c0ce760(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t26;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = *(int *)0xC4B40D8;
    *(unsigned int *)(((int)stk + 20)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t26 = 0x0;
    if ((int)t4 >= 0) {
        t5 = FUN_0c03f444(0x9, 0x0, t4);
        t26 = 0x0;
        if (t5 != 0) {
            FUN_0c03733c(t5, (*(int *)(((int)stk + 20))), (*(int *)0xC4B40D8));
            *(unsigned int *)((t5 + 0x4)) = 0xC0CE6EC;
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = 0x40;
            FUN_0c0c25c4(t5);
            (((struct o41D_uchar *)(t5))->v) = 0x0;
            (((struct o41C_uchar *)(t5))->v) = (*(int *)(((int)stk + 0)));
            (((struct o424_uchar *)(t5))->v) = (*(int *)(((int)stk + 8)));
            (((struct o1B_uchar *)(t5))->v) = (*(int *)(((int)stk + 12)));
            FUN_0c0c2ab6(t5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
            (((struct o420_ushort *)(t5))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
            FUN_0c0c212c(t5);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
            FUN_0c0c2aa2(t5, a8);
            FUN_0c0c241a(t5);
            t26 = t5;
        }
    }
    return t26;
}
