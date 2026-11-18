/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03e5f4(int, float);
int FUN_0c03e642(int, int, int, int, float);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c17c450(int);
int nlObjPutSetLightDirectionV(int);
int nlRand(void);
void FUN_0c1293a8(int a4);
int FUN_0c12c1a8(int a4, int a5);
int FUN_0c12c534(int a4, int a5);
void FUN_0c126194(int a4);
void FUN_0c0e2358(int a4);
int FUN_0c128410(int a4);
void FUN_0c13ff3c(int a4, int a5);
int FUN_0c16cd3c(int a4);
void FUN_0c13f908(int a4, int a5);
void FUN_0c13fa88(int a4, int a5);
void FUN_0c13fc40(int a4, int a5);
int FUN_0c16c210(int a4);
int FUN_0c14a1bc(int a4);
int FUN_0c0dade0(int a4, int a5);
int FUN_0c03e874(int a4);
int FUN_0c0e6aa2(int a4);
int FUN_0c0e5874(int a4);
int FUN_0c129534(int a4);
void FUN_0c140130(int a4);
int FUN_0c16a360(int a4, int a5);
void FUN_0c129108(int a4);
int FUN_0c0f06c8(int a4, int a5);
void FUN_0c0e0352(int a4);

void FUN_0c1293a8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC12943A;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t0 = nlRand();
        t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t2 = (t0 & 0xF);
        }
        *(unsigned int *)((t1 + 0x38)) = (((t2 << 8) << 2) << 2);
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c12c1a8(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12C23A;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c12c534(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12C5C6;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        t8 = 0x40;
    }
    return t8;
}

void FUN_0c126194(int a4)
{
    register int t2;
    register int t3;
    register float u8;

    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        FUN_0c03733c(t3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x235;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x4)) = 0xC126220;
        u8 = *(float *)0xC1262B8;
        (((struct o48_float *)(t3))->v) = u8;
        (((struct o44_float *)(t3))->v) = u8;
        (((struct o40_float *)(t3))->v) = u8;
        (((struct oBC_float *)(t3))->v) = 1.0f;
        (((struct oB8_float *)(t3))->v) = 1.0f;
        (((struct oB4_float *)(t3))->v) = 1.0f;
        (((struct o22_ushort *)(t3))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t3 + 0x38)) = 0x8000;
    }
}

void FUN_0c0e2358(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x79, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x79, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E2194;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c07e420(t2, 0x8);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        FUN_0c064d24(t2, 0x2, 0x12, 0x0, 0x100, 0xF, 0x0, 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }
    }
}

int FUN_0c128410(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC128498;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        t0 = 0x4C;
    }
    return t0;
}

void FUN_0c13ff3c(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t3 = FUN_0c037320(0xD, (*(int *)((((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) << 2) + 0xC4B40FC))));
    t4 = FUN_0c03f444(0x5, 0x0, t3);
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t4 + 0x4)) = 0xC13FFC4;
        *(unsigned int *)((t4 + 0x10)) = a4;
        FUN_0c03733c(t4, 0xD, (*(int *)((((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t4))->v) = 0x1;
        (((struct oAC_ushort *)(t4))->v) = 0x21F;
        (((struct oA9_uchar *)(t4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c16cd3c(int a4)
{
    register int t2;
    register int t7;

    FUN_0c037320(0x4D, (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t2;
    if (t2 != 0) {
        *(unsigned int *)((t2 + 0x4)) = 0xC16CDC2;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x4D, (*(int *)0xC4B40D8));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 50.0f);
        t7 = 0x2C;
    }
    return t7;
}

void FUN_0c13f908(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13F98C;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

void FUN_0c13fa88(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13FB0C;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x21F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

void FUN_0c13fc40(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13FCC4;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x0;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c16c210(int a4)
{
    register int t2;
    register int t8;
    register float u6;

    FUN_0c037320(0x4A, (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t2;
    if (t2 != 0) {
        *(unsigned int *)((t2 + 0x4)) = 0xC16C294;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x4A, (*(int *)0xC4B40D8));
        u6 = *(float *)0xC16C318;
        (((struct o48_float *)(t2))->v) = u6;
        (((struct o44_float *)(t2))->v) = u6;
        (((struct o40_float *)(t2))->v) = u6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 50.0f);
        t8 = 0x2C;
    }
    return t8;
}

int FUN_0c14a1bc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t1 + 0x4)) = 0xC14A23C;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x41F;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(0xC202A38); }
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c0dade0(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = FUN_0c037320(0x95, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t8 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0DAE5E;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        FUN_0c03733c(t2, 0x95, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x28)); }
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c03e874(int a4)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)((a4 + 0xC1B76FC));
    FUN_0c03e642(0x0, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f);
    FUN_0c03e5f4(0x0, (*(float *)((((*(int *)(((int)stk + 0))) << 2) + 0xC1B7704))));
    FUN_0c03e642(0x7, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4)); }
    FUN_0c17c450((((int)stk + 0) + 0x4));
    nlObjPutSetLightDirectionV((((int)stk + 0) + 0x4));
    return (FUN_0c03e642(0x6, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f));
}

int FUN_0c0e6aa2(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x40, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x40, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = -150.0f;
        *(unsigned char *)((t1 + 0x2)) = ((*(signed char *)((a4 + 0x2))) - 1);
        *(unsigned int *)((t1 + 0x4)) = 0xC0E694C;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = (*(float *)((0xC1CBE08 + ((*(signed char *)((t1 + 0x2))) << 2))));
        t0 = 0x48;
    }
    return t0;
}

int FUN_0c0e5874(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(signed char *)((((*(signed char *)((a4 + 0x2))) - 1) + 0xC288110))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(signed char *)((((*(signed char *)((a4 + 0x2))) - 1) + 0xC288110))), (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E5754;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        t0 = 0x44;
    }
    return t0;
}

int FUN_0c129534(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC1295AE;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 200.0f);
        t0 = 0x2C;
    }
    return t0;
}

void FUN_0c140130(int a4)
{
    register int t2;
    register int t3;

    t2 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC1401AA;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c16a360(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x40, (*(int *)0xC4B40CC));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x40, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC16A112;
        *(unsigned char *)((t1 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0x40;
    }
    return t0;
}

void FUN_0c129108(int a4)
{
    register int t2;
    register int t3;

    t2 = FUN_0c037320(0xE, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC129178;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c0f06c8(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = FUN_0c037320(0x91, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x9, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x91, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0F0370;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
    return t2;
}

void FUN_0c0e0352(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x35, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x9, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x35, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC0E01C6;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }
    }
}
